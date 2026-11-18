// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 334

// FeatureName'' @ 1411d1f40

void __cdecl
`dynamic_initializer_for_'UE::PoseSearch::IInteractionIslandDependency::FeatureName__(void)

{
  ::FName::FName(&UE::PoseSearch::IInteractionIslandDependency::FeatureName,
                 "IInteractionIslandDependency");
  return;
}

// TypeName'' @ 1411d1f60

void __cdecl `dynamic_initializer_for_'UE::PoseSearch::FPoseHistoryProvider::TypeName__(void)

{
  ::FName::FName(&UE::PoseSearch::FPoseHistoryProvider::TypeName,
                 L"UE::PoseSearch::FPoseHistoryProvider");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 1411d1f80

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'CVarAnimPoseHistoryDebugDrawPose'' @ 1411d1fa0

void __cdecl UE::PoseSearch::_dynamic_initializer_for__CVarAnimPoseHistoryDebugDrawPose__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimPoseHistoryDebugDrawPose,L"a.AnimNode.PoseHistory.DebugDrawPose",
             &GVarAnimPoseHistoryDebugDrawPose,L"Enable / Disable Pose History Pose DebugDraw",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawPose__);
  return;
}

// `dynamic_initializer_for_'CVarAnimPoseHistoryDebugDrawTrajectory'' @ 1411d1ff0

void __cdecl
UE::PoseSearch::_dynamic_initializer_for__CVarAnimPoseHistoryDebugDrawTrajectory__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimPoseHistoryDebugDrawTrajectory,L"a.AnimNode.PoseHistory.DebugDrawTrajectory",
             &GVarAnimPoseHistoryDebugDrawTrajectory,
             L"Enable / Disable Pose History Trajectory DebugDraw",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawTrajectory__);
  return;
}

// `dynamic_initializer_for_'CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples'' @ 1411d2040

void __cdecl
UE::PoseSearch::
_dynamic_initializer_for__CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples,
             L"a.AnimNode.PoseHistory.DebugDrawMaxNumOfHistorySamples",
             &GVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples,
             L"Max number of history samples to debug draw. All history samples will be drawn if value is negative. (Default -1)"
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples__
        );
  return;
}

// `dynamic_initializer_for_'CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples'' @ 1411d2090

void __cdecl
UE::PoseSearch::
_dynamic_initializer_for__CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples,
             L"a.AnimNode.PoseHistory.DebugDrawMaxNumOfPredictionSamples",
             &GVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples,
             L"Max number of prediction samples to debug draw. All prediction samples will be drawn if value is negative. (Default -1)"
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples__
        );
  return;
}

// `dynamic_initializer_for_'CVarAnimPoseHistoryDebugDrawTrajectoryThickness'' @ 1411d20e0

void __cdecl
UE::PoseSearch::_dynamic_initializer_for__CVarAnimPoseHistoryDebugDrawTrajectoryThickness__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimPoseHistoryDebugDrawTrajectoryThickness,
             L"a.AnimNode.PoseHistory.DebugDrawTrajectoryThickness",
             &GVarAnimPoseHistoryDebugDrawTrajectoryThickness,
             L"Thickness of the trajectory debug draw (Default 0.0f)",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawTrajectoryThickness__);
  return;
}

// `dynamic_initializer_for_'CVarPoseSearchInteractionDiagnoseTickDependencies'' @ 1411d2130

void __cdecl
UE::PoseSearch::_dynamic_initializer_for__CVarPoseSearchInteractionDiagnoseTickDependencies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPoseSearchInteractionDiagnoseTickDependencies,
             L"a.PoseSearchInteraction.DiagnoseTickDependencies",
             &GVarPoseSearchInteractionDiagnoseTickDependencies,
             L"Enable Pose Search Interaction Tick Dependencies Diagnostic (SLOW!)",0);
  atexit(_dynamic_atexit_destructor_for__CVarPoseSearchInteractionDiagnoseTickDependencies__);
  return;
}

// `dynamic_initializer_for_'LogPoseSearch'' @ 1411d2180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPoseSearch__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPoseSearch,L"LogPoseSearch",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPoseSearch__);
  return;
}

// `dynamic_initializer_for_'NAME_UPoseSearchFeatureChannel_Curve_BP_GetCurveValue'' @ 1411d21c0

void __cdecl _dynamic_initializer_for__NAME_UPoseSearchFeatureChannel_Curve_BP_GetCurveValue__(void)

{
  FName::FName(&NAME_UPoseSearchFeatureChannel_Curve_BP_GetCurveValue,L"BP_GetCurveValue");
  return;
}

// `dynamic_initializer_for_'NAME_UPoseSearchFeatureChannel_Distance_BP_GetDistance'' @ 1411d21e0

void __cdecl
_dynamic_initializer_for__NAME_UPoseSearchFeatureChannel_Distance_BP_GetDistance__(void)

{
  FName::FName(&NAME_UPoseSearchFeatureChannel_Distance_BP_GetDistance,L"BP_GetDistance");
  return;
}

// `dynamic_initializer_for_'NAME_UPoseSearchFeatureChannel_Heading_BP_GetWorldRotation'' @ 1411d2200

void __cdecl
_dynamic_initializer_for__NAME_UPoseSearchFeatureChannel_Heading_BP_GetWorldRotation__(void)

{
  FName::FName(&NAME_UPoseSearchFeatureChannel_Heading_BP_GetWorldRotation,L"BP_GetWorldRotation");
  return;
}

// `dynamic_initializer_for_'NAME_UPoseSearchFeatureChannel_Position_BP_GetWorldPosition'' @ 1411d2220

void __cdecl
_dynamic_initializer_for__NAME_UPoseSearchFeatureChannel_Position_BP_GetWorldPosition__(void)

{
  FName::FName(&NAME_UPoseSearchFeatureChannel_Position_BP_GetWorldPosition,L"BP_GetWorldPosition");
  return;
}

// `dynamic_initializer_for_'NAME_UPoseSearchFeatureChannel_TimeToEvent_BP_GetTimeToEvent'' @ 1411d2240

void __cdecl
_dynamic_initializer_for__NAME_UPoseSearchFeatureChannel_TimeToEvent_BP_GetTimeToEvent__(void)

{
  FName::FName(&NAME_UPoseSearchFeatureChannel_TimeToEvent_BP_GetTimeToEvent,L"BP_GetTimeToEvent");
  return;
}

// `dynamic_initializer_for_'NAME_UPoseSearchFeatureChannel_Velocity_BP_GetWorldVelocity'' @ 1411d2260

void __cdecl
_dynamic_initializer_for__NAME_UPoseSearchFeatureChannel_Velocity_BP_GetWorldVelocity__(void)

{
  FName::FName(&NAME_UPoseSearchFeatureChannel_Velocity_BP_GetWorldVelocity,L"BP_GetWorldVelocity");
  return;
}

// `dynamic_initializer_for_'PoseHistoryAttributeId'' @ 1411d2280

void __cdecl UE::PoseSearch::_dynamic_initializer_for__PoseHistoryAttributeId__(void)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"PoseHistoryAttribute");
  PoseHistoryAttributeId.Namespace = Anim::BoneAttributeNamespace;
  PoseHistoryAttributeId.Name = local_res8[0];
  PoseHistoryAttributeId.Index = 0;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h__Script_PoseSearch_1127637957'' @ 1411d22d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h__Script_PoseSearch_1127637957__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Curve_h__Script_PoseSearch_1182630231'' @ 1411d2320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Curve_h__Script_PoseSearch_1182630231__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Curve_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Distance_h__Script_PoseSearch_3033137665'' @ 1411d2360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Distance_h__Script_PoseSearch_3033137665__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Distance_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_FilterCrashingLegs_h__Script_PoseSearch_141089714'' @ 1411d23a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_FilterCrashingLegs_h__Script_PoseSearch_141089714__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_FilterCrashingLegs_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Group_h__Script_PoseSearch_2410997008'' @ 1411d23e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Group_h__Script_PoseSearch_2410997008__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Group_h__Script_PoseSearch_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h__Script_PoseSearch_3386763417'' @ 1411d2420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h__Script_PoseSearch_3386763417__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h__Script_PoseSearch_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Padding_h__Script_PoseSearch_1742257224'' @ 1411d2470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Padding_h__Script_PoseSearch_1742257224__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Padding_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_PermutationTime_h__Script_PoseSearch_3894409137'' @ 1411d24b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_PermutationTime_h__Script_PoseSearch_3894409137__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_PermutationTime_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Phase_h__Script_PoseSearch_4111564146'' @ 1411d24f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Phase_h__Script_PoseSearch_4111564146__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Phase_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h__Script_PoseSearch_133008397'' @ 1411d2530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h__Script_PoseSearch_133008397__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h__Script_PoseSearch_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Position_h__Script_PoseSearch_2769567466'' @ 1411d2580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Position_h__Script_PoseSearch_2769567466__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Position_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_SamplingTime_h__Script_PoseSearch_3636946232'' @ 1411d25c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_SamplingTime_h__Script_PoseSearch_3636946232__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_SamplingTime_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_TimeToEvent_h__Script_PoseSearch_3407391236'' @ 1411d2600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_TimeToEvent_h__Script_PoseSearch_3407391236__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_TimeToEvent_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h__Script_PoseSearch_265863747'' @ 1411d2640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h__Script_PoseSearch_265863747__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h__Script_PoseSearch_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Velocity_h__Script_PoseSearch_1551747702'' @ 1411d2690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Velocity_h__Script_PoseSearch_1551747702__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Velocity_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h__Script_PoseSearch_2378768566'' @ 1411d26d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h__Script_PoseSearch_2378768566__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h__Script_PoseSearch_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h__Script_PoseSearch_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryAttribute_h__Script_PoseSearch_3456470308'' @ 1411d2720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryAttribute_h__Script_PoseSearch_3456470308__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryAttribute_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h__Script_PoseSearch_4218439238'' @ 1411d2760

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h__Script_PoseSearch_4218439238__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistory_h__Script_PoseSearch_1501350597'' @ 1411d27b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistory_h__Script_PoseSearch_1501350597__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistory_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h__Script_PoseSearch_623746351'' @ 1411d27f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h__Script_PoseSearch_623746351__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PoseSearch",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h__Script_PoseSearch_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h__Script_PoseSearch_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'end'' @ 1411d2840

void __cdecl Eigen::placeholders::_dynamic_initializer_for__end__(void)

{
  end = lastp1;
  return;
}

// NewProp_bNormalizeDisplacement_SetBit @ 14a8d5500

void __cdecl
Z_Construct_UClass_UPoseSearchFeatureChannel_Position_Statics::NewProp_bNormalizeDisplacement_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  return;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister @ 14a8d55d0

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton,
               UPoseSearchFeatureChannel::StaticRegisterNativesUPoseSearchFeatureChannel,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime @ 14a8d5680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseHistoryReference @ 14a8d5830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseHistoryReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseHistoryReference.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseHistoryReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseHistoryReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseHistoryReference.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPoseHistoryReference.InnerSingleton;
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

// NewStructOps @ 14a8d58b0

void * __cdecl Z_Construct_UScriptStruct_FPoseHistoryReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseHistoryReference,&UE::CoreUObject::Private::Construct<FPoseHistoryReference>,&UE::CoreUObject::Private::ConstructForTests<FPoseHistoryReference>,&UE::CoreUObject::Private::Destruct<FPoseHistoryReference>,&UE::CoreUObject::Private::Copy<FPoseHistoryReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity @ 14a8d59a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.OuterSingleton;
}

// Z_Construct_UFunction_UPoseSearchFeatureChannel_Velocity_BP_GetWorldVelocity @ 14a8d59e0

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchFeatureChannel_Velocity_BP_GetWorldVelocity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchFeatureChannel_Velocity_BP_GetWorldVelocity_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDefaultWithRootBone_SetBit @ 14a8d5a20

void __cdecl
Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bDefaultWithRootBone_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bUseCharacterSpaceVelocities_SetBit @ 14a8d5a30

void __cdecl
Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::
NewProp_bUseCharacterSpaceVelocities_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x83) = 1;
  return;
}

// NewProp_bNormalize_SetBit @ 14a8d5a40

void __cdecl
Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bNormalize_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  return;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Distance @ 14a8d5b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Distance(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Distance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.OuterSingleton;
}

// Z_Construct_UFunction_UPoseSearchFeatureChannel_Distance_BP_GetDistance @ 14a8d5bb0

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchFeatureChannel_Distance_BP_GetDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchFeatureChannel_Distance_BP_GetDistance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDefaultWithRootBone_SetBit @ 14a8d5bf0

void __cdecl
Z_Construct_UClass_UPoseSearchFeatureChannel_Distance_Statics::NewProp_bDefaultWithRootBone_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_TimeToEvent @ 14a8d5c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_TimeToEvent(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_TimeToEvent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.OuterSingleton;
}

// Z_Construct_UFunction_UPoseSearchFeatureChannel_TimeToEvent_BP_GetTimeToEvent @ 14a8d5c70

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchFeatureChannel_TimeToEvent_BP_GetTimeToEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchFeatureChannel_TimeToEvent_BP_GetTimeToEvent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs @ 14a8d5db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.
                OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.OuterSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel @ 14a8d5df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton;
}

// Z_Construct_UEnum_PoseSearch_EComponentStrippingVector @ 14a8d5e30

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EComponentStrippingVector(void)

{
  if (Z_Registration_Info_UEnum_EComponentStrippingVector.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EComponentStrippingVector.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EComponentStrippingVector.InnerSingleton;
}

// Z_Construct_UEnum_PoseSearch_EInputQueryPose @ 14a8d5e70

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EInputQueryPose(void)

{
  if (Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton;
}

// Z_Construct_UEnum_PoseSearch_EPermutationTimeType @ 14a8d5eb0

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EPermutationTimeType(void)

{
  if (Z_Registration_Info_UEnum_EPermutationTimeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPermutationTimeType.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPermutationTimeType.InnerSingleton;
}

// EComponentStrippingVector_StaticEnum @ 14a8d5ef0

UEnum * __cdecl EComponentStrippingVector_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EComponentStrippingVector,(UObject *)pUVar1,
                       L"EComponentStrippingVector");
  }
  return Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton;
}

// EInputQueryPose_StaticEnum @ 14a8d5f30

UEnum * __cdecl EInputQueryPose_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EInputQueryPose,(UObject *)pUVar1,
                       L"EInputQueryPose");
  }
  return Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton;
}

// EPermutationTimeType_StaticEnum @ 14a8d5f70

UEnum * __cdecl EPermutationTimeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPermutationTimeType,(UObject *)pUVar1,
                       L"EPermutationTimeType");
  }
  return Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Group @ 14a8d62a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Group(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Group_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.OuterSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase @ 14a8d62e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.OuterSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Heading @ 14a8d64a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Heading(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.OuterSingleton;
}

// Z_Construct_UEnum_PoseSearch_EHeadingAxis @ 14a8d64e0

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EHeadingAxis(void)

{
  if (Z_Registration_Info_UEnum_EHeadingAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHeadingAxis.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EHeadingAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHeadingAxis.InnerSingleton;
}

// EHeadingAxis_StaticEnum @ 14a8d6520

UEnum * __cdecl EHeadingAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHeadingAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EHeadingAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EHeadingAxis,(UObject *)pUVar1,L"EHeadingAxis");
  }
  return Z_Registration_Info_UEnum_EHeadingAxis.OuterSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Curve @ 14a8d6660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Curve(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Curve_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.OuterSingleton;
}

// Z_Construct_UFunction_UPoseSearchFeatureChannel_Heading_BP_GetWorldRotation @ 14a8d66a0

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchFeatureChannel_Heading_BP_GetWorldRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchFeatureChannel_Heading_BP_GetWorldRotation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchFeatureChannel_Curve_BP_GetCurveValue @ 14a8d66e0

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchFeatureChannel_Curve_BP_GetCurveValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchFeatureChannel_Curve_BP_GetCurveValue_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDefaultWithRootBone_SetBit @ 14a8d6720

void __cdecl
Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_Statics::NewProp_bDefaultWithRootBone_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewStructOps @ 14a8d6a20

void * __cdecl Z_Construct_UScriptStruct_FPoseHistoryAnimationAttribute_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseHistoryAnimationAttribute,&UE::CoreUObject::Private::Construct<FPoseHistoryAnimationAttribute>,&UE::CoreUObject::Private::ConstructForTests<FPoseHistoryAnimationAttribute>,&UE::CoreUObject::Private::Destruct<FPoseHistoryAnimationAttribute>,&UE::CoreUObject::Private::Copy<FPoseHistoryAnimationAttribute>,&UE::CoreUObject::Private::GetStructTypeHash<FPoseHistoryAnimationAttribute>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Padding @ 14a8d6b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Padding(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Padding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.OuterSingleton;
}

// Z_Construct_UClass_UPoseSearchEventLibrary @ 14a8d6b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchEventLibrary(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchEventLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchEventLibrary.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchEventLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchEventLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchEvent @ 14a8d6ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchEvent.InnerSingleton;
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

// NewProp_bEnablePoseFilters_SetBit @ 14a8d6c20

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchEvent_Statics::NewProp_bEnablePoseFilters_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUsePlayRateRangeOverride_SetBit @ 14a8d6c30

void __cdecl
Z_Construct_UScriptStruct_FPoseSearchEvent_Statics::NewProp_bUsePlayRateRangeOverride_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewStructOps @ 14a8d6c40

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchEvent,&UE::CoreUObject::Private::Construct<FPoseSearchEvent>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchEvent>,&UE::CoreUObject::Private::Destruct<FPoseSearchEvent>,&UE::CoreUObject::Private::Copy<FPoseSearchEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime @ 14a8d6d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.OuterSingleton;
}

// NewProp_bIsNewEventValid_SetBit @ 14a8d6d80

void __cdecl
Z_Construct_UFunction_UPoseSearchEventLibrary_UpdatePoseSearchEvent_Statics::
NewProp_bIsNewEventValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UPoseSearchEventLibrary_UpdatePoseSearchEvent @ 14a8d6d90

UFunction * __cdecl Z_Construct_UFunction_UPoseSearchEventLibrary_UpdatePoseSearchEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchEventLibrary_UpdatePoseSearchEvent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Phase @ 14a8d6e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Phase(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.OuterSingleton;
}

// Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary @ 14a8d71d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.OuterSingleton
               ,&Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference @ 14a8d7210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference.
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

// NewStructOps @ 14a8d7290

void * __cdecl
Z_Construct_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchHistoryCollectorAnimNodeReference,&UE::CoreUObject::Private::Construct<FPoseSearchHistoryCollectorAnimNodeReference>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchHistoryCollectorAnimNodeReference>,&UE::CoreUObject::Private::Destruct<FPoseSearchHistoryCollectorAnimNodeReference>,&UE::CoreUObject::Private::Copy<FPoseSearchHistoryCollectorAnimNodeReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_ConvertToPoseHistoryNode @ 14a8d72d0

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_ConvertToPoseHistoryNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_ConvertToPoseHistoryNode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Result_SetBit @ 14a8d7310

void __cdecl
Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_ConvertToPoseHistoryNodePure_Statics
::NewProp_Result_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_ConvertToPoseHistoryNodePure @ 14a8d7320

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_ConvertToPoseHistoryNodePure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_ConvertToPoseHistoryNodePure_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_GetPoseHistoryNodeTransformTrajectory @ 14a8d7360

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_GetPoseHistoryNodeTransformTrajectory
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_GetPoseHistoryNodeTransformTrajectory_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_GetPoseHistoryReference @ 14a8d73a0

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_GetPoseHistoryReference(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_GetPoseHistoryReference_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory @ 14a8d73e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchTrajectorySample @ 14a8d7420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchTrajectorySample(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectorySample.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchTrajectorySample.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectorySample.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchTrajectorySample.InnerSingleton;
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

// EPoseSearchTrajectoryFlags_StaticEnum @ 14a8d74a0

UEnum * __cdecl EPoseSearchTrajectoryFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags,(UObject *)pUVar1,
                       L"EPoseSearchTrajectoryFlags");
  }
  return Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton;
}

// Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_SetPoseHistoryNodeTransformTrajectory @ 14a8d74e0

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_SetPoseHistoryNodeTransformTrajectory
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchHistoryCollectorAnimNodeLibrary_SetPoseHistoryNodeTransformTrajectory_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14a8d7520

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchTrajectorySample,&UE::CoreUObject::Private::Construct<FPoseSearchTrajectorySample>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchTrajectorySample>,&UE::CoreUObject::Private::Destruct<FPoseSearchTrajectorySample>,&UE::CoreUObject::Private::Copy<FPoseSearchTrajectorySample>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseSearchInteractionAsset @ 14a8d7560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchInteractionAsset(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchInteractionAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchInteractionAsset.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchInteractionAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchInteractionAssetItem @ 14a8d75a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchInteractionAssetItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAssetItem.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAssetItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchInteractionAssetItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAssetItem.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchInteractionAssetItem.InnerSingleton;
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

// NewStructOps @ 14a8d7620

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchInteractionAssetItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchInteractionAssetItem,&UE::CoreUObject::Private::Construct<FPoseSearchInteractionAssetItem>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchInteractionAssetItem>,&UE::CoreUObject::Private::Destruct<FPoseSearchInteractionAssetItem>,&UE::CoreUObject::Private::Copy<FPoseSearchInteractionAssetItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Pose @ 14a8d78e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Pose(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPoseSearchBone @ 14a8d7920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseSearchBone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchBone.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseSearchBone.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseSearchBone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchBone.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseSearchBone.InnerSingleton;
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

// EPoseSearchBoneFlags_StaticEnum @ 14a8d79a0

UEnum * __cdecl EPoseSearchBoneFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags,(UObject *)pUVar1,
                       L"EPoseSearchBoneFlags");
  }
  return Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton;
}

// NewStructOps @ 14a8d79e0

void * __cdecl Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseSearchBone,&UE::CoreUObject::Private::Construct<FPoseSearchBone>,&UE::CoreUObject::Private::ConstructForTests<FPoseSearchBone>,&UE::CoreUObject::Private::Destruct<FPoseSearchBone>,&UE::CoreUObject::Private::Copy<FPoseSearchBone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseCharacterSpaceVelocities_SetBit @ 14a8d7a20

void __cdecl
Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::
NewProp_bUseCharacterSpaceVelocities_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Position @ 14a8d7a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Position(void)

{
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.OuterSingleton,
               &Z_Construct_UClass_UPoseSearchFeatureChannel_Position_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.OuterSingleton;
}

// Z_Construct_UFunction_UPoseSearchFeatureChannel_Position_BP_GetWorldPosition @ 14a8d7a70

UFunction * __cdecl
Z_Construct_UFunction_UPoseSearchFeatureChannel_Position_BP_GetWorldPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPoseSearchFeatureChannel_Position_BP_GetWorldPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDefaultWithRootBone_SetBit @ 14a8d7ab0

void __cdecl
Z_Construct_UClass_UPoseSearchFeatureChannel_Position_Statics::NewProp_bDefaultWithRootBone_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// operator<<<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_> @ 14a8d7ce0

FArchive * __cdecl
operator<<<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          *param_2)

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
      DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
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
                bVar5 = FDebug::CheckVerifyFailedImpl2
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
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18;
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 8));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
              DefaultConstructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                        (pFVar2,1);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 8));
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

// FPoseHistoryEntry,TSizedDefaultAllocator<32>_> @ 14a8d7cf0

FArchive * __cdecl
operator<<<UE::PoseSearch::FPoseHistoryEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FPoseHistoryEntry *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x48);
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
      DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>
                ((FPoseHistoryEntry *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x38e39)) {
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
              UE::PoseSearch::operator<<
                        (param_1,(FPoseHistoryEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x848,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FPoseHistoryEntry *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48);
              DefaultConstructItems<UE::PoseSearch::FPoseHistoryEntry,int>(pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
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

// FPoseMetadata,TAlignedHeapAllocator<16>_> @ 14a8d7d00

FArchive * __cdecl
operator<<<UE::PoseSearch::FPoseMetadata_TAlignedHeapAllocator<16>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_> *param_2)

{
  int *piVar1;
  FPoseMetadata *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
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
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
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
              UE::PoseSearch::operator<<
                        (param_1,(FPoseMetadata *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FPoseMetadata *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<UE::PoseSearch::FPoseMetadata,int>(pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
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

// FSearchIndexAsset,TAlignedHeapAllocator<16>_> @ 14a8d7d10

FArchive * __cdecl
operator<<<UE::PoseSearch::FSearchIndexAsset_TAlignedHeapAllocator<16>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_> *param_2)

{
  int *piVar1;
  FSearchIndexAsset *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x24);
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
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x24,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x71c72)) {
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
              UE::PoseSearch::operator<<
                        (param_1,(FSearchIndexAsset *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x24))
              ;
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                                  (0x424,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FSearchIndexAsset *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x24);
              DefaultConstructItems<UE::PoseSearch::FSearchIndexAsset,int>(pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
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

// operator*<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_> @ 14a8d7d20

Product<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>,0>
* __thiscall
Eigen::MatrixBase<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>::
operator*<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_>
          (MatrixBase<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_> *this,
          Product<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>,0>
          *__return_storage_ptr__,
          MatrixBase<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_>
          *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(this + 8);
  (__return_storage_ptr__->m_lhs)._padding_ = *(longlong *)this;
  (__return_storage_ptr__->m_lhs)._padding_ = lVar1;
  (__return_storage_ptr__->m_lhs)._padding_ = *(longlong *)(this + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  (__return_storage_ptr__->m_rhs)._padding_ = *(longlong *)param_1;
  (__return_storage_ptr__->m_rhs)._padding_ = lVar1;
  (__return_storage_ptr__->m_rhs)._padding_ = *(longlong *)(param_1 + 0x10);
  return __return_storage_ptr__;
}

// operator*<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_>_> @ 14a8d7d50

Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>
* __thiscall
Eigen::
MatrixBase<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_>
::
operator*<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>_>
          (MatrixBase<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_>
           *this,Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>
                 *__return_storage_ptr__,
          MatrixBase<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>_>
          *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)&__return_storage_ptr__->m_lhs = *(undefined8 *)this;
  *(undefined8 *)&(__return_storage_ptr__->m_lhs).field_0x8 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_lhs).field_0x10 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)&(__return_storage_ptr__->m_lhs).field_0x18 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)&(__return_storage_ptr__->m_lhs).field_0x20 = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_lhs).field_0x28 = *(undefined8 *)(this + 0x28);
  *(undefined8 *)&(__return_storage_ptr__->m_lhs).field_0x38 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)&(__return_storage_ptr__->m_lhs).field_0x40 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)&(__return_storage_ptr__->m_lhs).field_0x48 = *(undefined8 *)(this + 0x48);
  lVar2 = *(longlong *)(param_1 + 8);
  (__return_storage_ptr__->m_rhs).m_matrix._padding_ = *(longlong *)param_1;
  (__return_storage_ptr__->m_rhs).m_matrix._padding_ = lVar2;
  (__return_storage_ptr__->m_rhs).m_matrix._padding_ = *(longlong *)(param_1 + 0x10);
  return __return_storage_ptr__;
}

// CompareItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14a8d7f30

bool __cdecl
CompareItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,
          TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)&param_2->field_0x8;
    puVar2 = (undefined8 *)&param_1->field_0x8;
    do {
      if (puVar2[-1] !=
          *(longlong *)((longlong)puVar2 + (longlong)param_2 + (-8 - (longlong)param_1))) {
        return false;
      }
      iVar1 = *(int *)(puVar2 + 1);
      if (iVar1 != *(int *)(puVar3 + 1)) {
        return false;
      }
      if ((iVar1 != 0) &&
         (iVar1 = memcmp((void *)*puVar2,(void *)*puVar3,(longlong)iVar1 << 2), iVar1 != 0)) {
        return false;
      }
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,int> @ 14a8d7fc0

bool __cdecl
CompareItems<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,int>
          (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                         (lVar2 + (longlong)param_2),param_2);
      if (!bVar1) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::PoseSearch::FPoseMetadata,int> @ 14a8d8030

bool __cdecl
CompareItems<UE::PoseSearch::FPoseMetadata,int>
          (FPoseMetadata *param_1,FPoseMetadata *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 != 0) {
    pbVar2 = &param_2->field_0x8;
    pbVar1 = &param_1->field_0x8;
    do {
      if (((((*(uint *)(pbVar1 + (longlong)param_2 + (-8 - (longlong)param_1)) ^
             *(uint *)(pbVar1 + -8)) & 0x7ffffff) != 0) ||
          (((*(uint *)(pbVar1 + -4) ^ *(uint *)(pbVar2 + -4)) & 0xfffff) != 0)) ||
         (((*pbVar1 ^ *pbVar2) & 1) != 0)) {
        return false;
      }
      fVar3 = FGenericPlatformMath::LoadHalf((ushort *)(pbVar2 + 2));
      fVar4 = FGenericPlatformMath::LoadHalf((ushort *)(pbVar1 + 2));
      if (fVar4 != fVar3) {
        return false;
      }
      pbVar2 = pbVar2 + 0xc;
      pbVar1 = pbVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::PoseSearch::FSearchIndexAsset,int> @ 14a8d80e0

bool __cdecl
CompareItems<UE::PoseSearch::FSearchIndexAsset,int>
          (FSearchIndexAsset *param_1,FSearchIndexAsset *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar4 = &param_2->PermutationIdx;
    piVar3 = &param_1->PermutationIdx;
    do {
      if (((FSearchIndexAsset *)(piVar3 + -2))->SourceAssetIdx !=
          *(int *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)piVar3)) {
        return false;
      }
      bVar1 = *(byte *)(piVar4 + -1);
      bVar2 = *(byte *)(piVar3 + -1);
      if (((bVar1 ^ bVar2) & 1) != 0) {
        return false;
      }
      if (((bVar2 ^ bVar1) & 2) != 0) {
        return false;
      }
      if (((bVar2 ^ bVar1) & 4) != 0) {
        return false;
      }
      if (*piVar3 != *piVar4) {
        return false;
      }
      if ((float)piVar4[1] != (float)piVar3[1]) {
        return false;
      }
      if ((float)piVar4[2] != (float)piVar3[2]) {
        return false;
      }
      if (piVar3[3] != piVar4[3]) {
        return false;
      }
      if (piVar3[4] != piVar4[4]) {
        return false;
      }
      if (piVar3[5] != piVar4[5]) {
        return false;
      }
      if ((float)piVar4[6] != (float)piVar3[6]) {
        return false;
      }
      piVar4 = piVar4 + 9;
      piVar3 = piVar3 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int> @ 14a8d81a0

bool __cdecl
CompareItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
          (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *param_1,
          TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>::
              UEOpEquals<UE::PoseSearch::IPoseHistory_const_>
                        ((TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)
                         (lVar2 + (longlong)param_2),param_2);
      if (!bVar1) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14a8d8210

void __cdecl
ConstructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  ForAnyElementType *pFVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 8);
    puVar4 = (undefined8 *)&param_2->field_0x8;
    do {
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar4) = puVar4[-1];
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 2);
      }
      puVar4 = puVar4 + 3;
      pFVar3 = pFVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int> @ 14a8d82e0

void __cdecl
ConstructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
          (void *param_1,TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IPoseHistory **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->WeakReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14a8d8320

void __cdecl
DefaultConstructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChooserEvaluationContext,int> @ 14a8d8350

void __cdecl DefaultConstructItems<FChooserEvaluationContext,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x50);
    do {
      puVar1[-10] = 0;
      *(undefined1 *)(puVar1 + -9) = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 4;
      puVar1 = puVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FPoseHistoryEntry,int> @ 14a8d83a0

void __cdecl DefaultConstructItems<UE::PoseSearch::FPoseHistoryEntry,int>(void *param_1,int param_2)

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
      *(undefined4 *)(lVar1 + 0x34) = 0;
      lVar1 = lVar1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FPoseMetadata,int> @ 14a8d83f0

void __cdecl DefaultConstructItems<UE::PoseSearch::FPoseMetadata,int>(void *param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 8);
    do {
      *(uint *)(pbVar1 + -8) = *(uint *)(pbVar1 + -8) & 0xf8000000;
      *(uint *)(pbVar1 + -4) = *(uint *)(pbVar1 + -4) & 0xfff00000;
      *pbVar1 = *pbVar1 & 0xfe;
      *(ushort *)(pbVar1 + 2) = 0;
      FGenericPlatformMath::StoreHalf((ushort *)(pbVar1 + 2),0.0);
      pbVar1 = pbVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FSearchIndexAsset,int> @ 14a8d8450

void __cdecl DefaultConstructItems<UE::PoseSearch::FSearchIndexAsset,int>(void *param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 4);
    do {
      *pbVar1 = *pbVar1 & 0xf8;
      pbVar1[-4] = 0xff;
      pbVar1[-3] = 0xff;
      pbVar1[-2] = 0xff;
      pbVar1[-1] = 0xff;
      pbVar1[4] = 0xff;
      pbVar1[5] = 0xff;
      pbVar1[6] = 0xff;
      pbVar1[7] = 0xff;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1[0x10] = 0xff;
      pbVar1[0x11] = 0xff;
      pbVar1[0x12] = 0xff;
      pbVar1[0x13] = 0xff;
      pbVar1[0x14] = 0xff;
      pbVar1[0x15] = 0xff;
      pbVar1[0x16] = 0xff;
      pbVar1[0x17] = 0xff;
      pbVar1[0x18] = 0xff;
      pbVar1[0x19] = 0xff;
      pbVar1[0x1a] = 0xff;
      pbVar1[0x1b] = 0xff;
      pbVar1[0x1c] = 0;
      pbVar1[0x1d] = 0;
      pbVar1[0x1e] = 0x80;
      pbVar1[0x1f] = 0x3f;
      pbVar1 = pbVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::PoseSearch::FSearchResult,int> @ 14a8d84a0

void __cdecl DefaultConstructItems<UE::PoseSearch::FSearchResult,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = 0xffffffff;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0x7f7fffff;
      *(undefined4 *)(lVar1 + 8) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0xc) = 0x7f7fffff;
      *(undefined1 *)(lVar1 + 0x10) = 0;
      lVar1 = lVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14a8d84f0

void __cdecl
DestructItems<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,int param_2)

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

// DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14a8d8530

void __cdecl
DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,int param_2)

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

// DestructItems<FChooserEvaluationContext,int> @ 14a8d8570

void __cdecl
DestructItems<FChooserEvaluationContext,int>(FChooserEvaluationContext *param_1,int param_2)

{
  ForElementType<FStructView> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Params).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FStructView>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::PoseSearch::FInteractionSearchContext,int> @ 14a8d85b0

void __cdecl
DestructItems<UE::PoseSearch::FInteractionSearchContext,int>
          (FInteractionSearchContext *param_1,int param_2)

{
  ForElementType<FPoseSearchInteractionAvailability> FVar1;
  ForElementType<FPoseSearchInteractionAvailability> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->DebugAvailabilities).AllocatorInstance.SecondaryData;
    do {
      FVar1 = *pFVar2;
      if (*pFVar2 == (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FVar1 = (ForElementType<FPoseSearchInteractionAvailability>)(pFVar2 + -0x18);
      }
      DestructItems<FPoseSearchInteractionAvailability,int>
                ((FPoseSearchInteractionAvailability *)FVar1,*(int *)(pFVar2 + 1));
      if (*pFVar2 != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      if (pFVar2[-0x1a] != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FMemory::Free((void *)pFVar2[-0x1a]);
      }
      if (pFVar2[-0x26] != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FMemory::Free((void *)pFVar2[-0x26]);
      }
      FVar1 = pFVar2[-0x2c];
      if (pFVar2[-0x2c] == (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FVar1 = (ForElementType<FPoseSearchInteractionAvailability>)(pFVar2 + -0x34);
      }
      DestructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
                ((TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)FVar1,*(int *)(pFVar2 + -0x2b));
      if (pFVar2[-0x2c] != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FMemory::Free((void *)pFVar2[-0x2c]);
      }
      if (pFVar2[-0x36] != (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
        FMemory::Free((void *)pFVar2[-0x36]);
      }
      pFVar2 = pFVar2 + 0x3c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::PoseSearch::FInteractionSearchResult,int> @ 14a8d8680

void __cdecl
DestructItems<UE::PoseSearch::FInteractionSearchResult,int>
          (FInteractionSearchResult *param_1,int param_2)

{
  ForElementType<UE::Math::TTransform<double>_> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ActorRootTransforms).AllocatorInstance.SecondaryData;
    do {
      if (pFVar1[0x34] != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
        FMemory::Free((void *)pFVar1[0x34]);
      }
      if (*pFVar1 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x6c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::PoseSearch::FPoseHistoryEntry,int> @ 14a8d86e0

void __cdecl
DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>(FPoseHistoryEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ComponentSpaceScales;
    do {
      pFVar1 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data
      ;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FPoseHistoryEntry *)(pTVar2 + -2))->ComponentSpaceRotations).AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int> @ 14a8d8750

void __cdecl
DestructItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
          (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *param_1,int param_2)

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

// FindChannelRecursive<`UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime>'::__l2::<lambda_1>_> @ 14a8d8c80

UPoseSearchFeatureChannel * __cdecl
UPoseSearchSchema::
FindChannelRecursive<_UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime>_::__l2::<lambda_1>_>
          (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *param_1,<lambda_1> param_2)

{
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar1;
  int iVar2;
  TObjectPtr<UPoseSearchFeatureChannel> TVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  UPoseSearchFeatureChannel *pUVar6;
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar7;
  undefined4 uStack_2c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_28;
  undefined1 local_18 [16];
  
  pTVar7 = &param_1->DataPtr->field0_0x0;
  pTVar1 = pTVar7 + param_1->ArrayNum;
  do {
    if (pTVar7 == pTVar1) {
      return (UPoseSearchFeatureChannel *)0x0;
    }
    TVar3.field0_0x0 = (TObjectPtr<UPoseSearchFeatureChannel>_u_0)pTVar7->DebugPtr;
    if (TVar3.field0_0x0 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar4 = UPoseSearchFeatureChannel_PermutationTime::StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x30) +
           (longlong)iVar2 * 8) == &pUVar4->_padding_)) {
        return (UPoseSearchFeatureChannel *)TVar3.field0_0x0;
      }
      puVar5 = (undefined8 *)
               (**(code **)(pTVar7->DebugPtr->_padding_ + 0x2c8))(pTVar7->DebugPtr,local_18);
      local_28.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)*puVar5;
      local_28._12_4_ = uStack_2c;
      local_28.ArrayNum = *(int *)(puVar5 + 1);
      pUVar6 = FindChannelRecursive<_UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime>_::__l2::<lambda_1>_>
                         (&local_28,param_2);
      if (pUVar6 != (UPoseSearchFeatureChannel *)0x0) {
        return pUVar6;
      }
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// FindChannelRecursive<`UPoseSearchFeatureChannel_Heading::FindOrAddToSchema'::__l3::<lambda_1>_> @ 14a8d8d40

UPoseSearchFeatureChannel * __cdecl
UPoseSearchSchema::
FindChannelRecursive<_UPoseSearchFeatureChannel_Heading::FindOrAddToSchema_::__l3::<lambda_1>_>
          (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *param_1,<lambda_1> *param_2
          )

{
  TObjectPtr<UPoseSearchFeatureChannel> *pTVar1;
  int iVar2;
  TObjectPtr<UPoseSearchFeatureChannel> TVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  UPoseSearchFeatureChannel *pUVar6;
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar7;
  undefined4 uStack_6c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_68;
  undefined1 local_58 [16];
  <lambda_1> local_48;
  
  pTVar7 = &param_1->DataPtr->field0_0x0;
  pTVar1 = (TObjectPtr<UPoseSearchFeatureChannel> *)(pTVar7 + param_1->ArrayNum);
  do {
    if (pTVar7 == (TObjectPtr<UPoseSearchFeatureChannel>_u_0 *)pTVar1) {
      return (UPoseSearchFeatureChannel *)0x0;
    }
    TVar3.field0_0x0 = (TObjectPtr<UPoseSearchFeatureChannel>_u_0)pTVar7->DebugPtr;
    if (TVar3.field0_0x0 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar4 = UPoseSearchFeatureChannel_Heading::StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if ((((((iVar2 <= *(int *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x30) +
               (longlong)iVar2 * 8) == &pUVar4->_padding_)) &&
            (*(FName *)((longlong)
                        &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                         _padding_ + 4) == *param_2->BoneName)) &&
           ((*(longlong *)
              ((longlong)
               &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_ + 4)
             == 0 && (param_2->SampleTimeOffset ==
                      (float)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                             ChannelDataOffset)))) &&
          (((float)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                   ChannelCardinality == 0.0 &&
           (((EHeadingAxis)
             ((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x80))->_padding_ ==
             param_2->HeadingAxis &&
            (*(EPermutationTimeType *)
              ((longlong)
               &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x80))->_padding_ + 5)
             == param_2->PermutationTimeType)))))) &&
         ((*(FName *)((longlong)
                      &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_
                     + 4) == param_2->Role &&
          ((*(FName *)((longlong)
                       &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                        _padding_ + 4) == param_2->Role &&
           ((char)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_ !=
            '\0')))))) {
        return (UPoseSearchFeatureChannel *)TVar3.field0_0x0;
      }
      puVar5 = (undefined8 *)
               (**(code **)(pTVar7->DebugPtr->_padding_ + 0x2c8))(pTVar7->DebugPtr,local_58);
      local_48.SampleTimeOffset = param_2->SampleTimeOffset;
      local_48._4_4_ = *(undefined4 *)&param_2->field_0x4;
      local_48.BoneName = param_2->BoneName;
      local_48.Role = param_2->Role;
      local_48.HeadingAxis = param_2->HeadingAxis;
      local_48.PermutationTimeType = param_2->PermutationTimeType;
      local_48._26_6_ = *(undefined6 *)&param_2->field_0x1a;
      local_68.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)*puVar5;
      local_68._12_4_ = uStack_6c;
      local_68.ArrayNum = *(int *)(puVar5 + 1);
      pUVar6 = FindChannelRecursive<_UPoseSearchFeatureChannel_Heading::FindOrAddToSchema_::__l3::<lambda_1>_>
                         (&local_68,&local_48);
      if (pUVar6 != (UPoseSearchFeatureChannel *)0x0) {
        return pUVar6;
      }
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// FindChannelRecursive<`UPoseSearchFeatureChannel_Position::FindOrAddToSchema'::__l3::<lambda_1>_> @ 14a8d8ea0

UPoseSearchFeatureChannel * __cdecl
UPoseSearchSchema::
FindChannelRecursive<_UPoseSearchFeatureChannel_Position::FindOrAddToSchema_::__l3::<lambda_1>_>
          (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *param_1,<lambda_1> *param_2
          )

{
  TObjectPtr<UPoseSearchFeatureChannel> *pTVar1;
  int iVar2;
  TObjectPtr<UPoseSearchFeatureChannel> TVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  UPoseSearchFeatureChannel *pUVar6;
  TObjectPtr<UPoseSearchFeatureChannel>_u_0 *pTVar7;
  undefined4 uStack_6c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_68;
  undefined1 local_58 [16];
  <lambda_1> local_48;
  
  pTVar7 = &param_1->DataPtr->field0_0x0;
  pTVar1 = (TObjectPtr<UPoseSearchFeatureChannel> *)(pTVar7 + param_1->ArrayNum);
  do {
    if (pTVar7 == (TObjectPtr<UPoseSearchFeatureChannel>_u_0 *)pTVar1) {
      return (UPoseSearchFeatureChannel *)0x0;
    }
    TVar3.field0_0x0 = (TObjectPtr<UPoseSearchFeatureChannel>_u_0)pTVar7->DebugPtr;
    if (TVar3.field0_0x0 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar4 = UPoseSearchFeatureChannel_Position::StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if ((((((iVar2 <= *(int *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)TVar3.field0_0x0 + 0x10) + 0x30) +
               (longlong)iVar2 * 8) == &pUVar4->_padding_)) &&
            (*(FName *)((longlong)
                        &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                         _padding_ + 4) == *param_2->BoneName)) &&
           ((*(longlong *)
              ((longlong)
               &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_ + 4)
             == 0 && (param_2->SampleTimeOffset ==
                      (float)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                             ChannelDataOffset)))) &&
          (((float)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                   ChannelCardinality == 0.0 &&
           ((*(EPermutationTimeType *)
              ((longlong)
               &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x80))->_padding_ + 4)
             == param_2->PermutationTimeType &&
            (*(FName *)((longlong)
                        &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->
                         _padding_ + 4) == *param_2->Role)))))) &&
         ((*(FName *)((longlong)
                      &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_
                     + 4) == *param_2->Role &&
          (((char)((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x40))->_padding_ !=
            '\0' && (*(char *)((longlong)
                               &((UPoseSearchFeatureChannel *)((longlong)TVar3.field0_0x0 + 0x80))->
                                _padding_ + 4) == '\0')))))) {
        return (UPoseSearchFeatureChannel *)TVar3.field0_0x0;
      }
      puVar5 = (undefined8 *)
               (**(code **)(pTVar7->DebugPtr->_padding_ + 0x2c8))(pTVar7->DebugPtr,local_58);
      local_48.SampleTimeOffset = param_2->SampleTimeOffset;
      local_48._4_4_ = *(undefined4 *)&param_2->field_0x4;
      local_48.BoneName = param_2->BoneName;
      local_48.Role = param_2->Role;
      local_48.PermutationTimeType = param_2->PermutationTimeType;
      local_48._25_7_ = *(undefined7 *)&param_2->field_0x19;
      local_68.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)*puVar5;
      local_68._12_4_ = uStack_6c;
      local_68.ArrayNum = *(int *)(puVar5 + 1);
      pUVar6 = FindChannelRecursive<_UPoseSearchFeatureChannel_Position::FindOrAddToSchema_::__l3::<lambda_1>_>
                         (&local_68,&local_48);
      if (pUVar6 != (UPoseSearchFeatureChannel *)0x0) {
        return pUVar6;
      }
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>_>_> @ 14a8d90f0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UPoseSearchInteractionAsset::CalculateWarpTransforms_::__l74::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_virtual_void___cdecl_UPoseSearchInteractionAsset::CalculateWarpTransforms(float,TArrayView<UE::Math::TTransform<double>_const_,int>,TArrayView<UE::Math::TTransform<double>,int>,TArrayView<UMirrorDataTable_const_*_const,int>,TArrayView<bool_const_,int>)const_::_74_::<lambda_1>_>
          param_4)

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
LAB_14a8d920c:
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
                  bVar3 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>
                          ::operator()(param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]
                                      );
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>::
                        operator()(param_4.Predicate,param_1[iVar4],param_1[iVar7]);
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
      bVar3 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14a8d920c;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>_>_> @ 14a8d92f0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UPoseSearchInteractionAsset::CalculateWarpTransforms_::__l104::<lambda_2>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_virtual_void___cdecl_UPoseSearchInteractionAsset::CalculateWarpTransforms(float,TArrayView<UE::Math::TTransform<double>_const_,int>,TArrayView<UE::Math::TTransform<double>,int>,TArrayView<UMirrorDataTable_const_*_const,int>,TArrayView<bool_const_,int>)const_::_104_::<lambda_2>_>
          param_4)

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
LAB_14a8d940c:
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
                  bVar3 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>
                          ::operator()(param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]
                                      );
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>::
                        operator()(param_4.Predicate,param_1[iVar4],param_1[iVar7]);
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
      bVar3 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14a8d940c;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<UPoseSearchFeatureChannel_Position_const_*,int,FIdentityFunctor,TDereferenceWrapper<UPoseSearchFeatureChannel_Position_const_*,`UPoseSearchFeatureChannel_Trajectory::DebugDraw'::__l15::<lambda_1>_>_> @ 14a8d94f0

void __cdecl
AlgoImpl::
HeapSortInternal<UPoseSearchFeatureChannel_Position_const_*,int,FIdentityFunctor,TDereferenceWrapper<UPoseSearchFeatureChannel_Position_const_*,_UPoseSearchFeatureChannel_Trajectory::DebugDraw_::__l15::<lambda_1>_>_>
          (UPoseSearchFeatureChannel_Position **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UPoseSearchFeatureChannel_Position_const_*,_public:_virtual_void___cdecl_UPoseSearchFeatureChannel_Trajectory::DebugDraw(UE::PoseSearch::FDebugDrawParams_const_&,TArrayView<float_const_,int>)const_::_15_::<lambda_1>_>
          param_4)

{
  float *pfVar1;
  float fVar2;
  UPoseSearchFeatureChannel_Position *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
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
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14a8d95e0:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar8 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            pUVar3 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pUVar3;
            iVar11 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar11 * 2;
                iVar10 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (param_1[(longlong)iVar6 + 2]->SampleTimeOffset <=
                      param_1[iVar10]->SampleTimeOffset &&
                      param_1[iVar10]->SampleTimeOffset !=
                      param_1[(longlong)iVar6 + 2]->SampleTimeOffset) {
                    iVar10 = iVar6;
                  }
                  iVar10 = iVar10 + 1;
                }
                pUVar3 = param_1[iVar11];
                fVar2 = param_1[iVar10]->SampleTimeOffset;
                pfVar1 = &pUVar3->SampleTimeOffset;
                if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
                param_1[iVar11] = param_1[iVar10];
                param_1[iVar10] = pUVar3;
                iVar11 = iVar10;
              } while (iVar10 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar8 = lVar8 + -1;
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
      if (param_1[(longlong)iVar7 + 2]->SampleTimeOffset <= param_1[iVar9]->SampleTimeOffset &&
          param_1[iVar9]->SampleTimeOffset != param_1[(longlong)iVar7 + 2]->SampleTimeOffset) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    pUVar3 = param_1[iVar6];
    fVar2 = param_1[iVar9]->SampleTimeOffset;
    pfVar1 = &pUVar3->SampleTimeOffset;
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto LAB_14a8d95e0;
    param_1[iVar6] = param_1[iVar9];
    param_1[iVar9] = pUVar3;
    iVar7 = iVar9 * 2 + 1;
    iVar6 = iVar9;
  } while( true );
}

// HeapSortInternal<UE::PoseSearch::FPosePairSimilarity,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FPosePairSimilarity,`UE::PoseSearch::CalculateSimilarities'::__l19::<lambda_1>_>_> @ 14a8d96b0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::PoseSearch::FPosePairSimilarity,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FPosePairSimilarity,_UE::PoseSearch::CalculateSimilarities_::__l19::<lambda_1>_>_>
          (FPosePairSimilarity *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::PoseSearch::FPosePairSimilarity,_bool___cdecl_UE::PoseSearch::CalculateSimilarities(TArray<UE::PoseSearch::FPosePairSimilarity,TSizedDefaultAllocator<32>_>_&,float,int,int,TArray<float,TAlignedHeapAllocator<16>_>_const_&,TFunctionRef<TArrayView<float_const_,int>___cdecl(int,int)>)_::_19_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FPosePairSimilarity *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
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
  iVar10 = iVar6;
  iVar11 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_14a8d97c7:
      if (iVar11 == 0) {
        iVar6 = param_2 + -1;
        lVar8 = (longlong)iVar6;
        if (0 < iVar6) {
          pFVar7 = param_1 + lVar8;
          do {
            uVar1 = *(undefined8 *)param_1;
            fVar2 = param_1->Similarity;
            *(undefined8 *)param_1 = *(undefined8 *)pFVar7;
            param_1->Similarity = pFVar7->Similarity;
            *(undefined8 *)pFVar7 = uVar1;
            pFVar7->Similarity = fVar2;
            iVar10 = 0;
            if (1 < iVar6) {
              do {
                iVar11 = iVar10 * 2;
                iVar5 = iVar11 + 1;
                if (iVar11 + 2 < iVar6) {
                  if (param_1[(longlong)iVar11 + 2].Similarity <= param_1[iVar5].Similarity &&
                      param_1[iVar5].Similarity != param_1[(longlong)iVar11 + 2].Similarity) {
                    iVar5 = iVar11;
                  }
                  iVar5 = iVar5 + 1;
                }
                if (param_1[iVar5].Similarity < param_1[iVar10].Similarity ||
                    param_1[iVar5].Similarity == param_1[iVar10].Similarity) break;
                uVar1 = *(undefined8 *)(param_1 + iVar10);
                fVar2 = param_1[iVar10].Similarity;
                *(undefined8 *)(param_1 + iVar10) = *(undefined8 *)(param_1 + iVar5);
                param_1[iVar10].Similarity = param_1[iVar5].Similarity;
                *(undefined8 *)(param_1 + iVar5) = uVar1;
                param_1[iVar5].Similarity = fVar2;
                iVar10 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar8 = lVar8 + -1;
            pFVar7 = pFVar7 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar5 = iVar11 + -1;
      iVar6 = iVar10 + -2;
      iVar10 = iVar6;
      iVar11 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar9 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2].Similarity <= param_1[iVar9].Similarity &&
          param_1[iVar9].Similarity != param_1[(longlong)iVar6 + 2].Similarity) {
        iVar9 = iVar6;
      }
      iVar9 = iVar9 + 1;
    }
    if (param_1[iVar9].Similarity < param_1[iVar5].Similarity ||
        param_1[iVar9].Similarity == param_1[iVar5].Similarity) goto LAB_14a8d97c7;
    uVar1 = *(undefined8 *)(param_1 + iVar5);
    fVar2 = param_1[iVar5].Similarity;
    *(undefined8 *)(param_1 + iVar5) = *(undefined8 *)(param_1 + iVar9);
    param_1[iVar5].Similarity = param_1[iVar9].Similarity;
    iVar6 = iVar9 * 2 + 1;
    *(undefined8 *)(param_1 + iVar9) = uVar1;
    param_1[iVar9].Similarity = fVar2;
    iVar5 = iVar9;
  } while( true );
}

// InternalConstructor<UPoseSearchEventLibrary> @ 14a8d98e0

void __cdecl InternalConstructor<UPoseSearchEventLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPoseSearchEventLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel> @ 14a8d9910

void __cdecl InternalConstructor<UPoseSearchFeatureChannel>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)this = &UPoseSearchFeatureChannel::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPoseSearchFeatureChannel::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&this[1].field_0x8 =
         &UPoseSearchFeatureChannel::_vftable__for__IPoseSearchFilter__;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Curve> @ 14a8d9960

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Curve>(FObjectInitializer *param_1)

{
  int iVar1;
  UObject *this;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  FObjectInitializer *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar5 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar5);
  *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
  *(undefined ***)this = &UPoseSearchFeatureChannel_Curve::_vftable__for__UObject__;
  *(undefined ***)(this + 1) =
       &UPoseSearchFeatureChannel_Curve::_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this[1].field_0x8 =
       &UPoseSearchFeatureChannel_Curve::_vftable__for__IPoseSearchFilter__;
  FVar2 = UE::PoseSearch::DefaultRole;
  *(undefined8 *)&this[1].field_0x18 = 0;
  FVar4 = UE::PoseSearch::DefaultRole;
  lVar7 = *(longlong *)&this->field_0x10;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[1].field_0x20 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[1].field_0x24 = uVar3;
  *(undefined1 *)(this + 2) = 0xff;
  *(undefined4 *)&this[2].field_0x4 = 0;
  *(undefined2 *)&this[2].field_0x8 = 1;
  if (lVar7 != 0) {
    pUVar6 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a8d9a01;
  }
  lVar7 = 0;
LAB_14a8d9a01:
  this[2].field_0x9 = lVar7 != 0;
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Distance> @ 14a8d9a20

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Distance>(FObjectInitializer *param_1)

{
  int iVar1;
  UObject *this;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  FObjectInitializer *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar5 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar5);
  *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
  this[1].field_0x18 = 1;
  *(undefined ***)this = &UPoseSearchFeatureChannel_Distance::_vftable__for__UObject__;
  *(undefined ***)(this + 1) =
       &UPoseSearchFeatureChannel_Distance::_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this[1].field_0x8 =
       &UPoseSearchFeatureChannel_Distance::_vftable__for__IPoseSearchFilter__;
  FVar2 = UE::PoseSearch::DefaultRole;
  *(undefined8 *)&this[1].field_0x1c = 0;
  *(undefined4 *)&this[1].field_0x24 = 0x7fffffff;
  *(undefined4 *)(this + 2) = 0xffffffff;
  FVar4 = UE::PoseSearch::DefaultRole;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[2].field_0x4 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[2].field_0x8 = uVar3;
  *(undefined8 *)&this[2].field_0xc = 0;
  *(undefined4 *)&this[2].field_0x14 = 0x7fffffff;
  *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
  FVar4 = UE::PoseSearch::DefaultRole;
  lVar7 = *(longlong *)&this->field_0x10;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[2].field_0x1c = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[2].field_0x20 = uVar3;
  *(undefined4 *)&this[2].field_0x24 = 0;
  *(undefined4 *)(this + 3) = 0xffffffff;
  *(undefined8 *)&this[3].field_0x4 = 0;
  *(undefined4 *)&this[3].field_0xc = 0x10000;
  this[3].field_0x10 = 0;
  if (lVar7 != 0) {
    pUVar6 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a8d9afb;
  }
  lVar7 = 0;
LAB_14a8d9afb:
  this[3].field_0x10 = lVar7 != 0;
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_FilterCrashingLegs> @ 14a8d9b20

void __cdecl
InternalConstructor<UPoseSearchFeatureChannel_FilterCrashingLegs>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  uint uVar2;
  FName FVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)this = &UPoseSearchFeatureChannel_FilterCrashingLegs::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPoseSearchFeatureChannel_FilterCrashingLegs::
          _vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&this[1].field_0x8 =
         &UPoseSearchFeatureChannel_FilterCrashingLegs::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0x7fffffff;
    *(undefined4 *)&this[1].field_0x24 = 0xffffffff;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0x7fffffff;
    *(undefined4 *)&this[2].field_0xc = 0xffffffff;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0x7fffffff;
    *(undefined4 *)&this[2].field_0x1c = 0xffffffff;
    *(undefined8 *)&this[2].field_0x20 = 0;
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined4 *)(this + 3) = 0x7fffffff;
    *(undefined4 *)&this[3].field_0x4 = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&this[3].field_0x8 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&this[3].field_0xc = uVar2;
    *(undefined4 *)&this[3].field_0x10 = 0x3e4ccccd;
    this[3].field_0x18 = 1;
    *(undefined4 *)&this[3].field_0x1c = 0x3e99999a;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Group> @ 14a8d9bf0

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Group>(FObjectInitializer *param_1)

{
  UObject *this;
  uint uVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    uVar1 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&this[1].field_0x18 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    *(uint *)&this[1].field_0x1c = uVar1;
    *(undefined ***)this = &UPoseSearchFeatureChannel_Group::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPoseSearchFeatureChannel_Group::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)&this[1].field_0x8 =
         &UPoseSearchFeatureChannel_Group::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0xffffffff;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_GroupBase> @ 14a8d9c60

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_GroupBase>(FObjectInitializer *param_1)

{
  UObject *this;
  uint uVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)this = &UPoseSearchFeatureChannel_GroupBase::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPoseSearchFeatureChannel_GroupBase::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&this[1].field_0x8 =
         &UPoseSearchFeatureChannel_GroupBase::_vftable__for__IPoseSearchFilter__;
    uVar1 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&this[1].field_0x18 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    *(uint *)&this[1].field_0x1c = uVar1;
    *(undefined4 *)&this[1].field_0x20 = 0xffffffff;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Heading> @ 14a8d9cc0

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Heading>(FObjectInitializer *param_1)

{
  int iVar1;
  UObject *this;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  FObjectInitializer *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar5 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar5);
  *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
  this[1].field_0x18 = 1;
  *(undefined ***)this = &UPoseSearchFeatureChannel_Heading::_vftable__for__UObject__;
  *(undefined ***)(this + 1) =
       &UPoseSearchFeatureChannel_Heading::_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this[1].field_0x8 =
       &UPoseSearchFeatureChannel_Heading::_vftable__for__IPoseSearchFilter__;
  FVar2 = UE::PoseSearch::DefaultRole;
  *(undefined8 *)&this[1].field_0x1c = 0;
  *(undefined4 *)&this[1].field_0x24 = 0x7fffffff;
  *(undefined4 *)(this + 2) = 0xffffffff;
  FVar4 = UE::PoseSearch::DefaultRole;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[2].field_0x4 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[2].field_0x8 = uVar3;
  *(undefined8 *)&this[2].field_0xc = 0;
  *(undefined4 *)&this[2].field_0x14 = 0x7fffffff;
  *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
  FVar4 = UE::PoseSearch::DefaultRole;
  lVar7 = *(longlong *)&this->field_0x10;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[2].field_0x1c = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[2].field_0x20 = uVar3;
  *(undefined4 *)&this[2].field_0x24 = 0xffffffff;
  *(undefined8 *)(this + 3) = 0;
  *(undefined4 *)&this[3].field_0x8 = 0x1000000;
  *(undefined2 *)&this[3].field_0xc = 0;
  this[3].field_0xe = 0;
  if (lVar7 != 0) {
    pUVar6 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a8d9d9f;
  }
  lVar7 = 0;
LAB_14a8d9d9f:
  this[3].field_0xe = lVar7 != 0;
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Padding> @ 14a8d9dd0

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Padding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)this = &UPoseSearchFeatureChannel_Padding::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPoseSearchFeatureChannel_Padding::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&this[1].field_0x8 =
         &UPoseSearchFeatureChannel_Padding::_vftable__for__IPoseSearchFilter__;
    *(undefined4 *)&this[1].field_0x18 = 1;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_PermutationTime> @ 14a8d9e30

void __cdecl
InternalConstructor<UPoseSearchFeatureChannel_PermutationTime>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)this = &UPoseSearchFeatureChannel_PermutationTime::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPoseSearchFeatureChannel_PermutationTime::_vftable__for__IBoneReferenceSkeletonProvider__
    ;
    *(undefined ***)&this[1].field_0x8 =
         &UPoseSearchFeatureChannel_PermutationTime::_vftable__for__IPoseSearchFilter__;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Phase> @ 14a8d9e80

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Phase>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  uint uVar2;
  FName FVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)this = &UPoseSearchFeatureChannel_Phase::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPoseSearchFeatureChannel_Phase::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&this[1].field_0x8 =
         &UPoseSearchFeatureChannel_Phase::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined4 *)&this[1].field_0x20 = 0x7fffffff;
    *(undefined4 *)&this[1].field_0x24 = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&this[2].field_0x0 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&this[2].field_0x4 = uVar2;
    *(undefined2 *)&this[2].field_0x8 = 0x100;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Pose> @ 14a8d9f00

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Pose>(FObjectInitializer *param_1)

{
  FName *pFVar1;
  UObject *this;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  FObjectInitializer *pFVar9;
  FName FStackX_8;
  FName FStackX_10;
  FName FStack_38;
  FNameEntryId FStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  FName FStack_24;
  FNameEntryId FStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar9 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar9);
  uVar6 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[1].field_0x18 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  *(uint *)&this[1].field_0x1c = uVar6;
  *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
  *(undefined ***)this = &UPoseSearchFeatureChannel_Pose::_vftable__for__UObject__;
  *(undefined ***)(this + 1) =
       &UPoseSearchFeatureChannel_Pose::_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this[1].field_0x8 =
       &UPoseSearchFeatureChannel_Pose::_vftable__for__IPoseSearchFilter__;
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  this[2].field_0x22 = 0;
  *(undefined8 *)(this + 3) = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined4 *)&this[1].field_0x20 = 0xffffffff;
  *(undefined2 *)&this[2].field_0x20 = 0x101;
  FName::FName(&FStackX_8,"foot_l");
  FStack_38 = FStackX_8;
  FStack_30.Value = 0x7fffffff;
  uStack_2c = 0xffffffff;
  uStack_28 = 3;
  if ((*(FName **)(this + 2) <= &FStack_38) &&
     (&FStack_38 <
      (FName *)((longlong)*(FName **)(this + 2) + (longlong)*(int *)&this[2].field_0xc * 0x14))) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar8 = *(int *)&this[2].field_0x8;
  if (iVar8 == *(int *)&this[2].field_0xc) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,(ForAnyElementType *)(this + 2),(int *)&this[2].field_0xc);
  }
  FVar4.Number = uStack_2c;
  FVar4.ComparisonIndex.Value = FStack_30.Value;
  *(int *)&this[2].field_0x8 = iVar8 + 1;
  lVar2 = *(longlong *)(this + 2);
  pFVar1 = (FName *)(lVar2 + (longlong)iVar8 * 0x14);
  *pFVar1 = FStack_38;
  pFVar1[1] = FVar4;
  *(undefined4 *)(lVar2 + (longlong)iVar8 * 0x14 + 0x10) = uStack_28;
  FName::FName(&FStackX_10,"foot_r");
  FStack_24 = FStackX_10;
  FStack_1c.Value = 0x7fffffff;
  uStack_18 = 0xffffffff;
  uStack_14 = 3;
  if ((*(FName **)(this + 2) <= &FStack_24) &&
     (&FStack_24 <
      (FName *)((longlong)*(FName **)(this + 2) + (longlong)*(int *)&this[2].field_0xc * 0x14))) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar8 = *(int *)&this[2].field_0x8;
  if (iVar8 == *(int *)&this[2].field_0xc) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,(ForAnyElementType *)(this + 2),(int *)&this[2].field_0xc);
  }
  FVar5.Number = uStack_18;
  FVar5.ComparisonIndex.Value = FStack_1c.Value;
  *(int *)&this[2].field_0x8 = iVar8 + 1;
  lVar2 = *(longlong *)(this + 2);
  pFVar1 = (FName *)(lVar2 + (longlong)iVar8 * 0x14);
  *pFVar1 = FStack_24;
  pFVar1[1] = FVar5;
  *(undefined4 *)(lVar2 + (longlong)iVar8 * 0x14 + 0x10) = uStack_14;
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Position> @ 14a8d9f20

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Position>(FObjectInitializer *param_1)

{
  int iVar1;
  UObject *this;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  FObjectInitializer *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar5 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar5);
  *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
  this[1].field_0x18 = 1;
  *(undefined ***)this = &UPoseSearchFeatureChannel_Position::_vftable__for__UObject__;
  *(undefined ***)(this + 1) =
       &UPoseSearchFeatureChannel_Position::_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this[1].field_0x8 =
       &UPoseSearchFeatureChannel_Position::_vftable__for__IPoseSearchFilter__;
  FVar2 = UE::PoseSearch::DefaultRole;
  *(undefined8 *)&this[1].field_0x1c = 0;
  *(undefined4 *)&this[1].field_0x24 = 0x7fffffff;
  *(undefined4 *)(this + 2) = 0xffffffff;
  FVar4 = UE::PoseSearch::DefaultRole;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[2].field_0x4 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[2].field_0x8 = uVar3;
  *(undefined8 *)&this[2].field_0xc = 0;
  *(undefined4 *)&this[2].field_0x14 = 0x7fffffff;
  *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
  FVar4 = UE::PoseSearch::DefaultRole;
  lVar7 = *(longlong *)&this->field_0x10;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[2].field_0x1c = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[2].field_0x20 = uVar3;
  *(undefined4 *)&this[2].field_0x24 = 0xffffffff;
  *(undefined8 *)(this + 3) = 0;
  *(undefined4 *)&this[3].field_0x8 = 0x10000;
  this[3].field_0xc = 0;
  *(undefined4 *)&this[3].field_0x10 = 0;
  *(undefined2 *)&this[3].field_0x14 = 0;
  if (lVar7 != 0) {
    pUVar6 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a8da005;
  }
  lVar7 = 0;
LAB_14a8da005:
  this[3].field_0x15 = lVar7 != 0;
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_SamplingTime> @ 14a8da030

void __cdecl
InternalConstructor<UPoseSearchFeatureChannel_SamplingTime>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)this = &UPoseSearchFeatureChannel_SamplingTime::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UPoseSearchFeatureChannel_SamplingTime::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&this[1].field_0x8 =
         &UPoseSearchFeatureChannel_SamplingTime::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_TimeToEvent> @ 14a8da090

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_TimeToEvent>(FObjectInitializer *param_1)

{
  int iVar1;
  UObject *this;
  FObjectInitializer *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar2 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar2);
  lVar4 = *(longlong *)&this->field_0x10;
  *(undefined ***)this = &UPoseSearchFeatureChannel_TimeToEvent::_vftable__for__UObject__;
  *(undefined ***)(this + 1) =
       &UPoseSearchFeatureChannel_TimeToEvent::_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this[1].field_0x8 =
       &UPoseSearchFeatureChannel_TimeToEvent::_vftable__for__IPoseSearchFilter__;
  *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
  *(undefined8 *)&this[1].field_0x18 = 0;
  this[1].field_0x20 = 0;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14a8da119;
  }
  lVar4 = 0;
LAB_14a8da119:
  this[1].field_0x20 = lVar4 != 0;
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Trajectory> @ 14a8da140

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Trajectory>(FObjectInitializer *param_1)

{
  UObject *this;
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  FObjectInitializer *pFVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 auStack_28 [2];
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar5 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar5);
  uVar2 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[1].field_0x18 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  *(uint *)&this[1].field_0x1c = uVar2;
  *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
  *(undefined ***)this = &UPoseSearchFeatureChannel_Trajectory::_vftable__for__UObject__;
  *(undefined ***)(this + 1) =
       &UPoseSearchFeatureChannel_Trajectory::_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this[1].field_0x8 =
       &UPoseSearchFeatureChannel_Trajectory::_vftable__for__IPoseSearchFilter__;
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined4 *)&this[1].field_0x20 = 0xffffffff;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,(ForAnyElementType *)(this + 2),(int *)&this[2].field_0xc);
  *(int *)&this[2].field_0x8 = iVar4 + 1;
  *(undefined8 *)(*(longlong *)(this + 2) + (longlong)iVar4 * 8) = 0x20becccccd;
  uStack_38 = 0x9000000000;
  if ((*(undefined8 **)(this + 2) <= &uStack_38) &&
     (&uStack_38 < *(undefined8 **)(this + 2) + *(int *)&this[2].field_0xc)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this[2].field_0x8;
  if (iVar4 == *(int *)&this[2].field_0xc) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(this + 2),(int *)&this[2].field_0xc);
  }
  *(int *)&this[2].field_0x8 = iVar4 + 1;
  *(undefined8 *)(*(longlong *)(this + 2) + (longlong)iVar4 * 8) = uStack_38;
  uStack_30 = 0xa03eb33333;
  if ((*(undefined8 **)(this + 2) <= &uStack_30) &&
     (&uStack_30 < *(undefined8 **)(this + 2) + *(int *)&this[2].field_0xc)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this[2].field_0x8;
  if (iVar4 == *(int *)&this[2].field_0xc) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(this + 2),(int *)&this[2].field_0xc);
    *(int *)&this[2].field_0x8 = iVar4;
  }
  *(int *)&this[2].field_0x8 = iVar4 + 1;
  *(undefined8 *)(*(longlong *)(this + 2) + (longlong)iVar4 * 8) = uStack_30;
  auStack_28[0] = 0xb03f333333;
  if ((*(undefined8 **)(this + 2) <= auStack_28) &&
     (auStack_28 < *(undefined8 **)(this + 2) + *(int *)&this[2].field_0xc)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)&this[2].field_0x8;
  if (iVar4 == *(int *)&this[2].field_0xc) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(this + 2),(int *)&this[2].field_0xc);
  }
  *(int *)&this[2].field_0x8 = iVar4 + 1;
  *(undefined8 *)(*(longlong *)(this + 2) + (longlong)iVar4 * 8) = auStack_28[0];
  return;
}

// InternalConstructor<UPoseSearchFeatureChannel_Velocity> @ 14a8da160

void __cdecl InternalConstructor<UPoseSearchFeatureChannel_Velocity>(FObjectInitializer *param_1)

{
  int iVar1;
  UObject *this;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  FObjectInitializer *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  pFVar5 = FObjectInitializer::Get();
  UObject::UObject(this,pFVar5);
  *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
  *(undefined ***)this = &UPoseSearchFeatureChannel_Velocity::_vftable__for__UObject__;
  this[1].field_0x18 = 1;
  *(undefined ***)(this + 1) =
       &UPoseSearchFeatureChannel_Velocity::_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this[1].field_0x8 =
       &UPoseSearchFeatureChannel_Velocity::_vftable__for__IPoseSearchFilter__;
  FVar2 = UE::PoseSearch::DefaultRole;
  *(undefined8 *)&this[1].field_0x1c = 0;
  *(undefined4 *)&this[1].field_0x24 = 0x7fffffff;
  *(undefined4 *)(this + 2) = 0xffffffff;
  FVar4 = UE::PoseSearch::DefaultRole;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[2].field_0x4 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[2].field_0x8 = uVar3;
  *(undefined8 *)&this[2].field_0xc = 0;
  *(undefined4 *)&this[2].field_0x14 = 0x7fffffff;
  *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
  FVar4 = UE::PoseSearch::DefaultRole;
  lVar7 = *(longlong *)&this->field_0x10;
  UE::PoseSearch::DefaultRole.ComparisonIndex = FVar2.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole.Number = FVar2.Number;
  uVar3 = UE::PoseSearch::DefaultRole.Number;
  *(uint *)&this[2].field_0x1c = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
  UE::PoseSearch::DefaultRole = FVar4;
  *(uint *)&this[2].field_0x20 = uVar3;
  *(undefined4 *)&this[2].field_0x24 = 0xffffffff;
  *(undefined8 *)(this + 3) = 0;
  *(undefined8 *)&this[3].field_0x8 = 0x1010000;
  if (lVar7 != 0) {
    pUVar6 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a8da232;
  }
  lVar7 = 0;
LAB_14a8da232:
  this[3].field_0xf = lVar7 != 0;
  return;
}

// InternalConstructor<UPoseSearchHistoryCollectorAnimNodeLibrary> @ 14a8da260

void __cdecl
InternalConstructor<UPoseSearchHistoryCollectorAnimNodeLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPoseSearchHistoryCollectorAnimNodeLibrary__6B_;
  }
  return;
}

// InternalConstructor<UPoseSearchInteractionAsset> @ 14a8da290

void __cdecl InternalConstructor<UPoseSearchInteractionAsset>(FObjectInitializer *param_1)

{
  UMultiAnimAsset *this;
  
  this = (UMultiAnimAsset *)param_1->Obj;
  if (this != (UMultiAnimAsset *)0x0) {
    UMultiAnimAsset::UMultiAnimAsset(this,param_1);
    *(undefined ***)this = &___7UPoseSearchInteractionAsset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPoseSearchEventLibrary> @ 14a8da2d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPoseSearchEventLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchEventLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPoseSearchEventLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel> @ 14a8da380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchFeatureChannel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)pUVar1 = &UPoseSearchFeatureChannel::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UPoseSearchFeatureChannel::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UPoseSearchFeatureChannel::_vftable__for__IPoseSearchFilter__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Curve> @ 14a8da450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Curve>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_Curve::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_Curve::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_Curve::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_Curve::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[1].field_0x20 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[1].field_0x24 = uVar2;
    *(undefined1 *)(pUVar4 + 2) = 0xff;
    *(undefined4 *)&pUVar4[2].field_0x4 = 0;
    *(undefined2 *)&pUVar4[2].field_0x8 = 1;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Distance> @ 14a8da540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Distance>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_Distance::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_Distance::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_Distance::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_Distance::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    pUVar4[1].field_0x18 = 1;
    *(undefined8 *)&pUVar4[1].field_0x1c = 0;
    *(undefined4 *)&pUVar4[1].field_0x24 = 0x7fffffff;
    *(undefined4 *)(pUVar4 + 2) = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x4 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x8 = uVar2;
    *(undefined8 *)&pUVar4[2].field_0xc = 0;
    *(undefined4 *)&pUVar4[2].field_0x14 = 0x7fffffff;
    *(undefined4 *)&pUVar4[2].field_0x18 = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x1c = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x20 = uVar2;
    *(undefined4 *)&pUVar4[2].field_0x24 = 0;
    *(undefined4 *)(pUVar4 + 3) = 0xffffffff;
    *(undefined8 *)&pUVar4[3].field_0x4 = 0;
    *(undefined4 *)&pUVar4[3].field_0xc = 0x10000;
    pUVar4[3].field_0x10 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_FilterCrashingLegs> @ 14a8da670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_FilterCrashingLegs>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_FilterCrashingLegs::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_FilterCrashingLegs::_vftable__for__UObject__
    ;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_FilterCrashingLegs::
          _vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_FilterCrashingLegs::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    *(undefined4 *)&pUVar4[1].field_0x20 = 0x7fffffff;
    *(undefined4 *)&pUVar4[1].field_0x24 = 0xffffffff;
    *(undefined8 *)(pUVar4 + 2) = 0;
    *(undefined4 *)&pUVar4[2].field_0x8 = 0x7fffffff;
    *(undefined4 *)&pUVar4[2].field_0xc = 0xffffffff;
    *(undefined8 *)&pUVar4[2].field_0x10 = 0;
    *(undefined4 *)&pUVar4[2].field_0x18 = 0x7fffffff;
    *(undefined4 *)&pUVar4[2].field_0x1c = 0xffffffff;
    *(undefined8 *)&pUVar4[2].field_0x20 = 0;
    *(undefined4 *)(pUVar4 + 3) = 0x7fffffff;
    *(undefined4 *)&pUVar4[3].field_0x4 = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[3].field_0x8 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[3].field_0xc = uVar2;
    *(undefined4 *)&pUVar4[3].field_0x10 = 0x3e4ccccd;
    pUVar4[3].field_0x18 = 1;
    *(undefined4 *)&pUVar4[3].field_0x1c = 0x3e99999a;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Group> @ 14a8da7b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Group>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_Group::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_Group::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_Group::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[1].field_0x18 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[1].field_0x1c = uVar2;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_Group::_vftable__for__IPoseSearchFilter__;
    *(undefined4 *)&pUVar4[1].field_0x20 = 0xffffffff;
    *(undefined8 *)(pUVar4 + 2) = 0;
    *(undefined8 *)&pUVar4[2].field_0x8 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_GroupBase> @ 14a8da8a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_GroupBase>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_GroupBase::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_GroupBase::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_GroupBase::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_GroupBase::_vftable__for__IPoseSearchFilter__;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[1].field_0x18 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[1].field_0x1c = uVar2;
    *(undefined4 *)&pUVar4[1].field_0x20 = 0xffffffff;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Heading> @ 14a8da980

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Heading>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_Heading::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_Heading::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_Heading::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_Heading::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    pUVar4[1].field_0x18 = 1;
    *(undefined8 *)&pUVar4[1].field_0x1c = 0;
    *(undefined4 *)&pUVar4[1].field_0x24 = 0x7fffffff;
    *(undefined4 *)(pUVar4 + 2) = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x4 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x8 = uVar2;
    *(undefined8 *)&pUVar4[2].field_0xc = 0;
    *(undefined4 *)&pUVar4[2].field_0x14 = 0x7fffffff;
    *(undefined4 *)&pUVar4[2].field_0x18 = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x1c = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x20 = uVar2;
    *(undefined4 *)&pUVar4[2].field_0x24 = 0xffffffff;
    *(undefined8 *)(pUVar4 + 3) = 0;
    *(undefined4 *)&pUVar4[3].field_0x8 = 0x1000000;
    *(undefined2 *)&pUVar4[3].field_0xc = 0;
    pUVar4[3].field_0xe = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Padding> @ 14a8daab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Padding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchFeatureChannel_Padding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)pUVar1 = &UPoseSearchFeatureChannel_Padding::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UPoseSearchFeatureChannel_Padding::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UPoseSearchFeatureChannel_Padding::_vftable__for__IPoseSearchFilter__;
    *(undefined4 *)&pUVar1[1].field_0x18 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_PermutationTime> @ 14a8dab80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_PermutationTime>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchFeatureChannel_PermutationTime::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)pUVar1 = &UPoseSearchFeatureChannel_PermutationTime::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UPoseSearchFeatureChannel_PermutationTime::_vftable__for__IBoneReferenceSkeletonProvider__
    ;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UPoseSearchFeatureChannel_PermutationTime::_vftable__for__IPoseSearchFilter__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Phase> @ 14a8dac50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Phase>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_Phase::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_Phase::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_Phase::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_Phase::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    *(undefined4 *)&pUVar4[1].field_0x20 = 0x7fffffff;
    *(undefined4 *)&pUVar4[1].field_0x24 = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x0 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x4 = uVar2;
    *(undefined2 *)&pUVar4[2].field_0x8 = 0x100;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Pose> @ 14a8dad40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Pose>(FVTableHelper *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPoseSearchFeatureChannel_Pose::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    uVar1 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar2[1].field_0x18 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    *(uint *)&pUVar2[1].field_0x1c = uVar1;
    *(undefined8 *)&pUVar2[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)pUVar2 = &UPoseSearchFeatureChannel_Pose::_vftable__for__UObject__;
    *(undefined ***)(pUVar2 + 1) =
         &UPoseSearchFeatureChannel_Pose::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar2[1].field_0x8 =
         &UPoseSearchFeatureChannel_Pose::_vftable__for__IPoseSearchFilter__;
    *(undefined4 *)&pUVar2[1].field_0x20 = 0xffffffff;
    *(undefined8 *)(pUVar2 + 2) = 0;
    *(undefined8 *)&pUVar2[2].field_0x8 = 0;
    *(undefined8 *)&pUVar2[2].field_0x10 = 0;
    *(undefined8 *)&pUVar2[2].field_0x18 = 0;
    *(undefined2 *)&pUVar2[2].field_0x20 = 0x101;
    pUVar2[2].field_0x22 = 0;
    *(undefined8 *)(pUVar2 + 3) = 0;
    *(undefined8 *)&pUVar2[3].field_0x8 = 0;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Position> @ 14a8dae50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Position>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_Position::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_Position::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_Position::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_Position::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    pUVar4[1].field_0x18 = 1;
    *(undefined8 *)&pUVar4[1].field_0x1c = 0;
    *(undefined4 *)&pUVar4[1].field_0x24 = 0x7fffffff;
    *(undefined4 *)(pUVar4 + 2) = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x4 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x8 = uVar2;
    *(undefined8 *)&pUVar4[2].field_0xc = 0;
    *(undefined4 *)&pUVar4[2].field_0x14 = 0x7fffffff;
    *(undefined4 *)&pUVar4[2].field_0x18 = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x1c = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x20 = uVar2;
    *(undefined4 *)&pUVar4[2].field_0x24 = 0xffffffff;
    *(undefined8 *)(pUVar4 + 3) = 0;
    *(undefined4 *)&pUVar4[3].field_0x8 = 0x10000;
    pUVar4[3].field_0xc = 0;
    *(undefined4 *)&pUVar4[3].field_0x10 = 0;
    *(undefined2 *)&pUVar4[3].field_0x14 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_SamplingTime> @ 14a8daf80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_SamplingTime>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchFeatureChannel_SamplingTime::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)pUVar1 = &UPoseSearchFeatureChannel_SamplingTime::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UPoseSearchFeatureChannel_SamplingTime::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UPoseSearchFeatureChannel_SamplingTime::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_TimeToEvent> @ 14a8db050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_TimeToEvent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchFeatureChannel_TimeToEvent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)pUVar1 = &UPoseSearchFeatureChannel_TimeToEvent::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UPoseSearchFeatureChannel_TimeToEvent::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UPoseSearchFeatureChannel_TimeToEvent::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Trajectory> @ 14a8db120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Trajectory>(FVTableHelper *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPoseSearchFeatureChannel_Trajectory::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    uVar1 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar2[1].field_0x18 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    *(uint *)&pUVar2[1].field_0x1c = uVar1;
    *(undefined8 *)&pUVar2[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)pUVar2 = &UPoseSearchFeatureChannel_Trajectory::_vftable__for__UObject__;
    *(undefined ***)(pUVar2 + 1) =
         &UPoseSearchFeatureChannel_Trajectory::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar2[1].field_0x8 =
         &UPoseSearchFeatureChannel_Trajectory::_vftable__for__IPoseSearchFilter__;
    *(undefined4 *)&pUVar2[1].field_0x20 = 0xffffffff;
    *(undefined8 *)(pUVar2 + 2) = 0;
    *(undefined8 *)&pUVar2[2].field_0x8 = 0;
    *(undefined8 *)&pUVar2[2].field_0x10 = 0;
    *(undefined8 *)&pUVar2[2].field_0x18 = 0;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Velocity> @ 14a8db210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Velocity>(FVTableHelper *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UPoseSearchFeatureChannel_Velocity::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    FVar1 = UE::PoseSearch::DefaultRole;
    *(undefined ***)pUVar4 = &UPoseSearchFeatureChannel_Velocity::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) =
         &UPoseSearchFeatureChannel_Velocity::_vftable__for__IBoneReferenceSkeletonProvider__;
    *(undefined ***)&pUVar4[1].field_0x8 =
         &UPoseSearchFeatureChannel_Velocity::_vftable__for__IPoseSearchFilter__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0xffffffffffffffff;
    pUVar4[1].field_0x18 = 1;
    *(undefined8 *)&pUVar4[1].field_0x1c = 0;
    *(undefined4 *)&pUVar4[1].field_0x24 = 0x7fffffff;
    *(undefined4 *)(pUVar4 + 2) = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x4 = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x8 = uVar2;
    *(undefined8 *)&pUVar4[2].field_0xc = 0;
    *(undefined4 *)&pUVar4[2].field_0x14 = 0x7fffffff;
    *(undefined4 *)&pUVar4[2].field_0x18 = 0xffffffff;
    FVar3 = UE::PoseSearch::DefaultRole;
    UE::PoseSearch::DefaultRole.ComparisonIndex = FVar1.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole.Number = FVar1.Number;
    uVar2 = UE::PoseSearch::DefaultRole.Number;
    *(uint *)&pUVar4[2].field_0x1c = UE::PoseSearch::DefaultRole.ComparisonIndex.Value;
    UE::PoseSearch::DefaultRole = FVar3;
    *(uint *)&pUVar4[2].field_0x20 = uVar2;
    *(undefined4 *)&pUVar4[2].field_0x24 = 0xffffffff;
    *(undefined8 *)(pUVar4 + 3) = 0;
    *(undefined8 *)&pUVar4[3].field_0x8 = 0x1010000;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchHistoryCollectorAnimNodeLibrary> @ 14a8db330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchHistoryCollectorAnimNodeLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchHistoryCollectorAnimNodeLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPoseSearchHistoryCollectorAnimNodeLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseSearchInteractionAsset> @ 14a8db3e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPoseSearchInteractionAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseSearchInteractionAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UMultiAnimAsset::UMultiAnimAsset((UMultiAnimAsset *)pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UPoseSearchInteractionAsset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>_>_> @ 14a8db4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UPoseSearchInteractionAsset::CalculateWarpTransforms_::__l74::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_virtual_void___cdecl_UPoseSearchInteractionAsset::CalculateWarpTransforms(float,TArrayView<UE::Math::TTransform<double>_const_,int>,TArrayView<UE::Math::TTransform<double>,int>,TArrayView<UMirrorDataTable_const_*_const,int>,TArrayView<bool_const_,int>)const_::_74_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14a8db560:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_14a8db590:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x00014a8db599;
          goto LAB_14a8db5b0;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>::
                    operator()(param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_14a8db674;
      }
LAB_14a8db663:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UPoseSearchInteractionAsset::CalculateWarpTransforms_::__l74::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_14a8db674:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x00014a8db599:
  bVar2 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>::operator()
                    (param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_14a8db590;
LAB_14a8db5b0:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>::operator()
                      (param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_14a8db590;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_14a8db674;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_14a8db674;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_14a8db663;
  goto LAB_14a8db560;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>_>_> @ 14a8db730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UPoseSearchInteractionAsset::CalculateWarpTransforms_::__l104::<lambda_2>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_virtual_void___cdecl_UPoseSearchInteractionAsset::CalculateWarpTransforms(float,TArrayView<UE::Math::TTransform<double>_const_,int>,TArrayView<UE::Math::TTransform<double>,int>,TArrayView<UMirrorDataTable_const_*_const,int>,TArrayView<bool_const_,int>)const_::_104_::<lambda_2>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14a8db7f0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_14a8db820:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x00014a8db829;
          goto LAB_14a8db840;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>::
                    operator()(param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_14a8db904;
      }
LAB_14a8db8f3:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UPoseSearchInteractionAsset::CalculateWarpTransforms_::__l104::<lambda_2>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_14a8db904:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x00014a8db829:
  bVar2 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>::operator()
                    (param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_14a8db820;
LAB_14a8db840:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>::operator()
                      (param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_14a8db820;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_14a8db904;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_14a8db904;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_14a8db8f3;
  goto LAB_14a8db7f0;
}

// IntroSortInternal<UPoseSearchFeatureChannel_Position_const_*,int,FIdentityFunctor,TDereferenceWrapper<UPoseSearchFeatureChannel_Position_const_*,`UPoseSearchFeatureChannel_Trajectory::DebugDraw'::__l15::<lambda_1>_>_> @ 14a8db9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UPoseSearchFeatureChannel_Position_const_*,int,FIdentityFunctor,TDereferenceWrapper<UPoseSearchFeatureChannel_Position_const_*,_UPoseSearchFeatureChannel_Trajectory::DebugDraw_::__l15::<lambda_1>_>_>
          (UPoseSearchFeatureChannel_Position **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UPoseSearchFeatureChannel_Position_const_*,_public:_virtual_void___cdecl_UPoseSearchFeatureChannel_Trajectory::DebugDraw(UE::PoseSearch::FDebugDrawParams_const_&,TArrayView<float_const_,int>)const_::_15_::<lambda_1>_>
          param_4)

{
  float *pfVar1;
  UPoseSearchFeatureChannel_Position **ppUVar2;
  int iVar3;
  UPoseSearchFeatureChannel_Position **ppUVar4;
  UPoseSearchFeatureChannel_Position **ppUVar5;
  UPoseSearchFeatureChannel_Position ***pppUVar6;
  UPoseSearchFeatureChannel_Position **ppUVar7;
  UPoseSearchFeatureChannel_Position **ppUVar8;
  UPoseSearchFeatureChannel_Position **ppUVar9;
  UPoseSearchFeatureChannel_Position *pUVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  UPoseSearchFeatureChannel_Position **local_338;
  UPoseSearchFeatureChannel_Position **local_328;
  UPoseSearchFeatureChannel_Position **local_320;
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
    pppUVar6 = &local_328;
    do {
      ppUVar8 = pppUVar6[1];
      ppUVar4 = *pppUVar6;
      ppUVar2 = pppUVar6[2];
      iVar3 = (int)((longlong)ppUVar8 - (longlong)ppUVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppUVar2;
      ppUVar9 = ppUVar4;
      if ((int)local_338 != 0) {
LAB_14a8dba70:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppUVar5 = ppUVar8 + 1;
          pUVar10 = ppUVar9[iVar3 >> 1];
          ppUVar9[iVar3 >> 1] = *ppUVar9;
          *ppUVar9 = pUVar10;
          ppUVar4 = ppUVar9;
LAB_14a8dbaa0:
          ppUVar4 = ppUVar4 + 1;
          if (ppUVar4 <= ppUVar8) goto code_r0x00014a8dbaa9;
          goto LAB_14a8dbac0;
        }
        if (ppUVar9 < ppUVar8) {
          ppUVar2 = ppUVar9 + 1;
          do {
            ppUVar4 = ppUVar9;
            if (ppUVar2 <= ppUVar8) {
              ppUVar5 = ppUVar2;
              if (0x1f < ((longlong)ppUVar8 + (8 - (longlong)ppUVar2) & 0xfffffffffffffff8U)) {
                do {
                  fVar11 = (*ppUVar5)->SampleTimeOffset;
                  pfVar1 = &(*ppUVar4)->SampleTimeOffset;
                  pUVar10 = *ppUVar4;
                  if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
                    ppUVar4 = ppUVar5;
                    pUVar10 = *ppUVar5;
                  }
                  if (pUVar10->SampleTimeOffset < ppUVar5[1]->SampleTimeOffset) {
                    ppUVar4 = ppUVar5 + 1;
                  }
                  fVar11 = ppUVar5[2]->SampleTimeOffset;
                  pfVar1 = &(*ppUVar4)->SampleTimeOffset;
                  pUVar10 = *ppUVar4;
                  if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
                    ppUVar4 = ppUVar5 + 2;
                    pUVar10 = ppUVar5[2];
                  }
                  if (pUVar10->SampleTimeOffset < ppUVar5[3]->SampleTimeOffset) {
                    ppUVar4 = ppUVar5 + 3;
                  }
                  ppUVar5 = ppUVar5 + 4;
                } while (ppUVar5 <= ppUVar8 + -3);
              }
              for (; ppUVar5 <= ppUVar8; ppUVar5 = ppUVar5 + 1) {
                if ((*ppUVar4)->SampleTimeOffset < (*ppUVar5)->SampleTimeOffset) {
                  ppUVar4 = ppUVar5;
                }
              }
            }
            pUVar10 = *ppUVar4;
            ppUVar5 = ppUVar8 + -1;
            *ppUVar4 = *ppUVar8;
            *ppUVar8 = pUVar10;
            ppUVar8 = ppUVar5;
          } while (ppUVar9 < ppUVar5);
        }
        goto LAB_14a8dbb83;
      }
LAB_14a8dbb72:
      local_338 = ppUVar2;
      HeapSortInternal<UPoseSearchFeatureChannel_Position_const_*,int,FIdentityFunctor,TDereferenceWrapper<UPoseSearchFeatureChannel_Position_const_*,_UPoseSearchFeatureChannel_Trajectory::DebugDraw_::__l15::<lambda_1>_>_>
                (ppUVar4,iVar3,param_3,param_4);
LAB_14a8dbb83:
      pppUVar6 = pppUVar6 + -3;
    } while (&local_328 <= pppUVar6);
  }
  return;
code_r0x00014a8dbaa9:
  if ((*ppUVar4)->SampleTimeOffset < (*ppUVar9)->SampleTimeOffset ||
      (*ppUVar4)->SampleTimeOffset == (*ppUVar9)->SampleTimeOffset) goto LAB_14a8dbaa0;
LAB_14a8dbac0:
  do {
    ppUVar7 = ppUVar5;
    ppUVar5 = ppUVar7 + -1;
    if (ppUVar5 <= ppUVar9) break;
  } while ((*ppUVar9)->SampleTimeOffset < (*ppUVar5)->SampleTimeOffset ||
           (*ppUVar9)->SampleTimeOffset == (*ppUVar5)->SampleTimeOffset);
  if (ppUVar4 <= ppUVar5) {
    pUVar10 = *ppUVar4;
    *ppUVar4 = *ppUVar5;
    *ppUVar5 = pUVar10;
    goto LAB_14a8dbaa0;
  }
  pUVar10 = *ppUVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppUVar9 = *ppUVar5;
  *ppUVar5 = pUVar10;
  if ((longlong)((longlong)ppUVar5 + (-8 - (longlong)ppUVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar8 - (longlong)ppUVar4 & 0xfffffffffffffff8U)) {
    if (ppUVar4 < ppUVar8) {
      *pppUVar6 = ppUVar4;
      pppUVar6[1] = ppUVar8;
      *(int *)(pppUVar6 + 2) = (int)local_338;
      pppUVar6 = pppUVar6 + 3;
    }
    if (ppUVar5 <= ppUVar9 + 1) goto LAB_14a8dbb83;
    ppUVar8 = ppUVar7 + -2;
    ppUVar4 = ppUVar9;
  }
  else {
    if (ppUVar9 + 1 < ppUVar5) {
      *pppUVar6 = ppUVar9;
      pppUVar6[1] = ppUVar7 + -2;
      *(int *)(pppUVar6 + 2) = (int)local_338;
      pppUVar6 = pppUVar6 + 3;
    }
    if (ppUVar8 <= ppUVar4) goto LAB_14a8dbb83;
  }
  iVar3 = (int)((longlong)ppUVar8 - (longlong)ppUVar4 >> 3) + 1;
  ppUVar9 = ppUVar4;
  if ((int)local_338 == 0) goto LAB_14a8dbb72;
  goto LAB_14a8dba70;
}

// IntroSortInternal<UE::PoseSearch::FPosePairSimilarity,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FPosePairSimilarity,`UE::PoseSearch::CalculateSimilarities'::__l19::<lambda_1>_>_> @ 14a8dbcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::PoseSearch::FPosePairSimilarity,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FPosePairSimilarity,_UE::PoseSearch::CalculateSimilarities_::__l19::<lambda_1>_>_>
          (FPosePairSimilarity *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::PoseSearch::FPosePairSimilarity,_bool___cdecl_UE::PoseSearch::CalculateSimilarities(TArray<UE::PoseSearch::FPosePairSimilarity,TSizedDefaultAllocator<32>_>_&,float,int,int,TArray<float,TAlignedHeapAllocator<16>_>_const_&,TFunctionRef<TArrayView<float_const_,int>___cdecl(int,int)>)_::_19_::<lambda_1>_>
          param_4)

{
  FPosePairSimilarity *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  FPosePairSimilarity *pFVar4;
  int iVar5;
  FPosePairSimilarity *pFVar6;
  FPosePairSimilarity *pFVar7;
  FPosePairSimilarity *pFVar8;
  FPosePairSimilarity *pFVar9;
  FPosePairSimilarity *pFVar10;
  FPosePairSimilarity **ppFVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  FPosePairSimilarity *local_348;
  FPosePairSimilarity *local_338;
  FPosePairSimilarity *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    ppFVar11 = &local_338;
    do {
      pFVar6 = ppFVar11[1];
      pFVar7 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      local_348._0_4_ = (int)pFVar1;
      iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar7) / 0xc) + 1;
      pFVar10 = pFVar7;
      if ((int)local_348 != 0) {
LAB_14a8dbd90:
        if (8 < iVar5) {
          pFVar4 = pFVar6 + 1;
          iVar5 = iVar5 / 2;
          uVar2 = *(undefined8 *)(pFVar10 + iVar5);
          fVar12 = pFVar10[iVar5].Similarity;
          *(undefined8 *)(pFVar10 + iVar5) = *(undefined8 *)pFVar10;
          pFVar10[iVar5].Similarity = pFVar10->Similarity;
          *(undefined8 *)pFVar10 = uVar2;
          pFVar10->Similarity = fVar12;
          pFVar7 = pFVar10;
LAB_14a8dbdd6:
          pFVar8 = pFVar7;
          pFVar7 = pFVar8 + 1;
          if (pFVar7 <= pFVar6) goto code_r0x00014a8dbddf;
          goto LAB_14a8dbdf0;
        }
        if (pFVar10 < pFVar6) {
          pFVar1 = pFVar10 + 1;
          do {
            pFVar7 = pFVar10;
            if (pFVar1 <= pFVar6) {
              pFVar4 = pFVar1;
              if (0x2f < (ulonglong)((longlong)pFVar6 + (0xc - (longlong)pFVar1))) {
                do {
                  if (pFVar7->Similarity < pFVar4->Similarity) {
                    pFVar7 = pFVar4;
                  }
                  if (pFVar7->Similarity <= pFVar4[1].Similarity &&
                      pFVar4[1].Similarity != pFVar7->Similarity) {
                    pFVar7 = pFVar4 + 1;
                  }
                  if (pFVar7->Similarity <= pFVar4[2].Similarity &&
                      pFVar4[2].Similarity != pFVar7->Similarity) {
                    pFVar7 = pFVar4 + 2;
                  }
                  if (pFVar7->Similarity <= pFVar4[3].Similarity &&
                      pFVar4[3].Similarity != pFVar7->Similarity) {
                    pFVar7 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar6 + -3);
              }
              for (; pFVar4 <= pFVar6; pFVar4 = pFVar4 + 1) {
                if (pFVar7->Similarity < pFVar4->Similarity) {
                  pFVar7 = pFVar4;
                }
              }
            }
            uVar2 = *(undefined8 *)pFVar7;
            fVar12 = pFVar7->Similarity;
            pFVar4 = pFVar6 + -1;
            *(undefined8 *)pFVar7 = *(undefined8 *)pFVar6;
            pFVar7->Similarity = pFVar6->Similarity;
            *(undefined8 *)pFVar6 = uVar2;
            pFVar6->Similarity = fVar12;
            pFVar6 = pFVar4;
          } while (pFVar10 < pFVar4);
        }
        goto LAB_14a8dbf09;
      }
LAB_14a8dbefa:
      local_348 = pFVar1;
      HeapSortInternal<UE::PoseSearch::FPosePairSimilarity,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FPosePairSimilarity,_UE::PoseSearch::CalculateSimilarities_::__l19::<lambda_1>_>_>
                (pFVar7,iVar5,param_3,param_4);
LAB_14a8dbf09:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_338 <= ppFVar11);
  }
  return;
code_r0x00014a8dbddf:
  if (pFVar8[1].Similarity < pFVar10->Similarity || pFVar8[1].Similarity == pFVar10->Similarity)
  goto LAB_14a8dbdd6;
LAB_14a8dbdf0:
  do {
    pFVar9 = pFVar4;
    pFVar4 = pFVar9 + -1;
    if (pFVar4 <= pFVar10) break;
  } while (pFVar10->Similarity < pFVar9[-1].Similarity ||
           pFVar10->Similarity == pFVar9[-1].Similarity);
  if (pFVar7 <= pFVar4) {
    uVar2 = *(undefined8 *)pFVar7;
    fVar12 = pFVar8[1].Similarity;
    *(undefined8 *)pFVar7 = *(undefined8 *)pFVar4;
    pFVar8[1].Similarity = pFVar9[-1].Similarity;
    *(undefined8 *)pFVar4 = uVar2;
    pFVar9[-1].Similarity = fVar12;
    goto LAB_14a8dbdd6;
  }
  fVar12 = pFVar10->Similarity;
  local_348._0_4_ = (int)local_348 + -1;
  uVar2 = *(undefined8 *)pFVar10;
  *(undefined8 *)pFVar10 = *(undefined8 *)pFVar4;
  pFVar10->Similarity = pFVar9[-1].Similarity;
  *(undefined8 *)pFVar4 = uVar2;
  pFVar9[-1].Similarity = fVar12;
  lVar3 = (longlong)pFVar4 + (-0xc - (longlong)pFVar10);
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  if ((lVar3 >> 1) - (lVar3 >> 0x3f) < ((longlong)pFVar6 - (longlong)pFVar7) / 0xc) {
    if (pFVar7 < pFVar6) {
      *ppFVar11 = pFVar7;
      ppFVar11[1] = pFVar6;
      *(int *)(ppFVar11 + 2) = (int)local_348;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar4 <= pFVar10 + 1) goto LAB_14a8dbf09;
    pFVar6 = pFVar9 + -2;
    pFVar7 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar4) {
      *ppFVar11 = pFVar10;
      ppFVar11[1] = pFVar9 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_348;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar6 <= pFVar7) goto LAB_14a8dbf09;
  }
  iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar7) / 0xc) + 1;
  pFVar10 = pFVar7;
  if ((int)local_348 == 0) goto LAB_14a8dbefa;
  goto LAB_14a8dbd90;
}

// LowerBoundInternal<TTuple<unsigned_short,unsigned_short>,int,TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_> @ 14a8dc030

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<unsigned_short,unsigned_short>,int,TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_>
          (TTuple<unsigned_short,unsigned_short> *param_1,int param_2,
          TTuple<unsigned_short,unsigned_short> *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      if ((*(ushort *)(param_1 + iVar1) < *(ushort *)param_3) ||
         ((*(ushort *)(param_1 + iVar1) == *(ushort *)param_3 &&
          (*(ushort *)&param_1[iVar1].field_0x2 < *(ushort *)&param_3->field_0x2)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// Merge<int,FIdentityFunctor,TDereferenceWrapper<int,`UE::PoseSearch::InitSearchResults'::__l5::<lambda_1>_>_> @ 14a8dc0a0

void __cdecl
AlgoImpl::
Merge<int,FIdentityFunctor,TDereferenceWrapper<int,_UE::PoseSearch::InitSearchResults_::__l5::<lambda_1>_>_>
          (int *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<int,_void___cdecl_UE::PoseSearch::InitSearchResults(TArray<UE::PoseSearch::FInteractionSearchResult,TSizedDefaultAllocator<32>_>_&,TArrayView<UE::PoseSearch::FSearchResult_const_,int>,TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int>)_::_5_::<lambda_1>_>
          param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int local_58;
  int *piVar5;
  
  if (0 < param_2) {
    local_58 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar3 = 0;
      if (0 < param_2 - local_58) {
        uVar11 = param_2 - local_58;
        do {
          iVar8 = (uVar11 >> 1) + iVar3;
          bVar2 = `UE::PoseSearch::InitSearchResults'::__l5::<lambda_1>::operator()
                            (param_5.Predicate,param_1[param_2],
                             param_1[(longlong)iVar8 + (longlong)local_58]);
          if (!bVar2) {
            iVar3 = iVar8 + (uVar11 & 1);
          }
          uVar12 = uVar11 >> 1;
          uVar11 = uVar11 >> 1;
        } while (uVar12 != 0);
      }
      local_58 = local_58 + iVar3;
      if (param_2 <= local_58) {
        return;
      }
      uVar11 = param_3 - param_2;
      iVar3 = 0;
      iVar8 = 0;
      piVar1 = param_1 + local_58;
      if (0 < (int)uVar11) {
        do {
          uVar12 = uVar11 >> 1;
          bVar2 = `UE::PoseSearch::InitSearchResults'::__l5::<lambda_1>::operator()
                            (param_5.Predicate,
                             param_1[(longlong)(int)(uVar12 + iVar3) + (longlong)param_2],*piVar1);
          iVar8 = iVar3;
          if (bVar2) {
            iVar8 = uVar12 + iVar3 + (uVar11 & 1);
          }
          uVar11 = uVar12;
          iVar3 = iVar8;
        } while (uVar12 != 0);
      }
      iVar7 = (iVar8 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar7)) {
        piVar4 = piVar1 + iVar3;
        piVar9 = piVar1;
        piVar5 = piVar1 + iVar3;
        do {
          while( true ) {
            piVar6 = piVar4 + 1;
            piVar10 = piVar9 + 1;
            iVar3 = *piVar9;
            *piVar9 = *piVar4;
            *piVar4 = iVar3;
            piVar9 = piVar10;
            if (piVar6 == piVar1 + iVar7) break;
            piVar4 = piVar6;
            if (piVar10 == piVar5) {
              piVar5 = piVar6;
            }
          }
          piVar4 = piVar5;
        } while (piVar10 != piVar5);
      }
      local_58 = local_58 + 1 + iVar8;
      param_2 = param_2 + iVar8;
    } while (local_58 < param_2);
  }
  return;
}

// Merge<TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_> @ 14a8dc2a0

void __cdecl
AlgoImpl::
Merge<TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_>
          (TTuple<unsigned_short,unsigned_short> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,
          TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_> param_5)

{
  TTuple<unsigned_short,unsigned_short> *pTVar1;
  TTuple<unsigned_short,unsigned_short> TVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  TTuple<unsigned_short,unsigned_short> *pTVar6;
  TTuple<unsigned_short,unsigned_short> *pTVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  TTuple<unsigned_short,unsigned_short> *pTVar15;
  TTuple<unsigned_short,unsigned_short> *pTVar16;
  TTuple<unsigned_short,unsigned_short> *pTVar7;
  
  if (0 < param_2) {
    iVar14 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      lVar13 = (longlong)param_2;
      iVar12 = 0;
      if (0 < param_2 - iVar14) {
        uVar9 = param_2 - iVar14;
        do {
          iVar4 = (uVar9 >> 1) + iVar12;
          lVar5 = (longlong)iVar4 + (longlong)iVar14;
          if ((*(ushort *)(param_1 + lVar13) < *(ushort *)(param_1 + lVar5)) ||
             ((*(ushort *)(param_1 + lVar13) == *(ushort *)(param_1 + lVar5) &&
              (*(ushort *)&param_1[lVar13].field_0x2 < *(ushort *)&param_1[lVar5].field_0x2)))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (!bVar3) {
            iVar12 = iVar4 + (uVar9 & 1);
          }
          uVar10 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar10 != 0);
      }
      iVar14 = iVar14 + iVar12;
      if (param_2 <= iVar14) {
        return;
      }
      iVar12 = 0;
      pTVar1 = param_1 + iVar14;
      if (0 < param_3 - param_2) {
        uVar9 = param_3 - param_2;
        iVar12 = 0;
        do {
          uVar10 = uVar9 >> 1;
          lVar5 = (int)(uVar10 + iVar12) + lVar13;
          if ((*(ushort *)(param_1 + lVar5) < *(ushort *)pTVar1) ||
             ((*(ushort *)(param_1 + lVar5) == *(ushort *)pTVar1 &&
              (*(ushort *)&param_1[lVar5].field_0x2 < *(ushort *)&pTVar1->field_0x2)))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            iVar12 = uVar10 + iVar12 + (uVar9 & 1);
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
      }
      iVar11 = (iVar12 - iVar14) + param_2;
      iVar4 = param_2 - iVar14;
      if ((iVar4 != 0) && (iVar4 < iVar11)) {
        pTVar6 = pTVar1 + iVar4;
        pTVar15 = pTVar1;
        pTVar7 = pTVar1 + iVar4;
        do {
          while( true ) {
            pTVar8 = pTVar6 + 1;
            pTVar16 = pTVar15 + 1;
            TVar2 = *pTVar15;
            *pTVar15 = *pTVar6;
            *pTVar6 = TVar2;
            pTVar15 = pTVar16;
            if (pTVar8 == pTVar1 + iVar11) break;
            pTVar6 = pTVar8;
            if (pTVar16 == pTVar7) {
              pTVar7 = pTVar8;
            }
          }
          pTVar6 = pTVar7;
        } while (pTVar16 != pTVar7);
      }
      param_2 = param_2 + iVar12;
      iVar14 = iVar14 + 1 + iVar12;
    } while (iVar14 < param_2);
  }
  return;
}

// NewObject<UPoseSearchFeatureChannel_Heading> @ 14a8dc420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPoseSearchFeatureChannel_Heading * __cdecl
NewObject<UPoseSearchFeatureChannel_Heading>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel_Heading *pUVar2;
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
  pUVar1 = UPoseSearchFeatureChannel_Heading::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPoseSearchFeatureChannel_Heading *)
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

// NewObject<UPoseSearchFeatureChannel_Padding> @ 14a8dc510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPoseSearchFeatureChannel_Padding * __cdecl
NewObject<UPoseSearchFeatureChannel_Padding>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel_Padding *pUVar2;
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
  pUVar1 = UPoseSearchFeatureChannel_Padding::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPoseSearchFeatureChannel_Padding *)
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

// NewObject<UPoseSearchFeatureChannel_PermutationTime> @ 14a8dc600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPoseSearchFeatureChannel_PermutationTime * __cdecl
NewObject<UPoseSearchFeatureChannel_PermutationTime>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel_PermutationTime *pUVar2;
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
  pUVar1 = UPoseSearchFeatureChannel_PermutationTime::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPoseSearchFeatureChannel_PermutationTime *)
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

// NewObject<UPoseSearchFeatureChannel_Phase> @ 14a8dc6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPoseSearchFeatureChannel_Phase * __cdecl
NewObject<UPoseSearchFeatureChannel_Phase>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel_Phase *pUVar2;
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
  pUVar1 = UPoseSearchFeatureChannel_Phase::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPoseSearchFeatureChannel_Phase *)
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

// NewObject<UPoseSearchFeatureChannel_Position> @ 14a8dc7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPoseSearchFeatureChannel_Position * __cdecl
NewObject<UPoseSearchFeatureChannel_Position>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel_Position *pUVar2;
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
  pUVar1 = UPoseSearchFeatureChannel_Position::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPoseSearchFeatureChannel_Position *)
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

// NewObject<UPoseSearchFeatureChannel_Velocity> @ 14a8dc8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPoseSearchFeatureChannel_Velocity * __cdecl
NewObject<UPoseSearchFeatureChannel_Velocity>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel_Velocity *pUVar2;
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
  pUVar1 = UPoseSearchFeatureChannel_Velocity::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPoseSearchFeatureChannel_Velocity *)
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

// NullaryExpr<Eigen::internal::scalar_constant_op<float>_> @ 14a8dc9c0

CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_> *
__cdecl Eigen::DenseBase<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>::
        NullaryExpr<Eigen::internal::scalar_constant_op<float>_>
                  (CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>
                   *__return_storage_ptr__,long64 param_1,long64 param_2,
                  scalar_constant_op<float> *param_3)

{
  (__return_storage_ptr__->m_cols).m_value = param_2;
  (__return_storage_ptr__->m_functor).m_other = param_3->m_other;
  return __return_storage_ptr__;
}

// NullaryExpr<Eigen::internal::scalar_constant_op<float>_> @ 14a8dc9e0

CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_> *
__cdecl Eigen::DenseBase<Eigen::Matrix<float,1,-1,1,1,-1>_>::
        NullaryExpr<Eigen::internal::scalar_constant_op<float>_>
                  (CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>
                   *__return_storage_ptr__,long64 param_1,long64 param_2,
                  scalar_constant_op<float> *param_3)

{
  (__return_storage_ptr__->m_cols).m_value = param_2;
  (__return_storage_ptr__->m_functor).m_other = param_3->m_other;
  return __return_storage_ptr__;
}

// RotateInternal<TTuple<unsigned_short,unsigned_short>_> @ 14a8dd650

int __cdecl
AlgoImpl::RotateInternal<TTuple<unsigned_short,unsigned_short>_>
          (TTuple<unsigned_short,unsigned_short> *param_1,int param_2,int param_3)

{
  TTuple<unsigned_short,unsigned_short> TVar1;
  TTuple<unsigned_short,unsigned_short> *pTVar2;
  TTuple<unsigned_short,unsigned_short> *pTVar4;
  TTuple<unsigned_short,unsigned_short> *pTVar5;
  TTuple<unsigned_short,unsigned_short> *pTVar6;
  TTuple<unsigned_short,unsigned_short> *pTVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar2 = param_1 + param_3;
    pTVar5 = param_1;
    pTVar3 = param_1 + param_3;
    do {
      while( true ) {
        pTVar4 = pTVar2 + 1;
        pTVar6 = pTVar5 + 1;
        TVar1 = *pTVar5;
        *pTVar5 = *pTVar2;
        *pTVar2 = TVar1;
        pTVar5 = pTVar6;
        if (pTVar4 == param_1 + param_2) break;
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

// StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,`UE::PoseSearch::InitSearchResults'::__l5::<lambda_1>_>_> @ 14a8de040

void __cdecl
AlgoImpl::
StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,_UE::PoseSearch::InitSearchResults_::__l5::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_void___cdecl_UE::PoseSearch::InitSearchResults(TArray<UE::PoseSearch::FInteractionSearchResult,TSizedDefaultAllocator<32>_>_&,TArrayView<UE::PoseSearch::FSearchResult_const_,int>,TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int>)_::_5_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (0 < param_2) {
    lVar6 = 0;
    iVar3 = 1;
    do {
      if ((iVar3 < param_2) &&
         (bVar2 = `UE::PoseSearch::InitSearchResults'::__l5::<lambda_1>::operator()
                            (param_4.Predicate,param_1[lVar6 + 1],param_1[lVar6]), bVar2)) {
        iVar1 = param_1[lVar6];
        param_1[lVar6] = param_1[lVar6 + 1];
        param_1[lVar6 + 1] = iVar1;
      }
      iVar3 = iVar3 + 2;
      lVar6 = lVar6 + 2;
    } while (lVar6 < param_2);
  }
  iVar3 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar3 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar7 = iVar5;
        if (iVar1 <= iVar5) {
          iVar7 = iVar1;
        }
        Merge<int,FIdentityFunctor,TDereferenceWrapper<int,_UE::PoseSearch::InitSearchResults_::__l5::<lambda_1>_>_>
                  (param_1 + iVar4,iVar3,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar1;
        iVar5 = iVar5 + iVar3 * -2;
      } while (iVar4 < param_2);
      iVar3 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StableSortInternal<TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_> @ 14a8de130

void __cdecl
AlgoImpl::
StableSortInternal<TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_>
          (TTuple<unsigned_short,unsigned_short> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_> param_4)

{
  TTuple<unsigned_short,unsigned_short> TVar1;
  int iVar2;
  TTuple<unsigned_short,unsigned_short> *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (0 < param_2) {
    pTVar3 = param_1 + 1;
    iVar6 = 1;
    lVar8 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if ((iVar6 < param_2) &&
         ((*(ushort *)pTVar3 < *(ushort *)(pTVar3 + -1) ||
          ((*(ushort *)pTVar3 == *(ushort *)(pTVar3 + -1) &&
           (*(ushort *)&pTVar3->field_0x2 < *(ushort *)&pTVar3[-1].field_0x2)))))) {
        TVar1 = pTVar3[-1];
        pTVar3[-1] = *pTVar3;
        *pTVar3 = TVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar3 = pTVar3 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar5 = 0;
      iVar4 = param_2;
      do {
        iVar7 = iVar4;
        if (iVar2 <= iVar4) {
          iVar7 = iVar2;
        }
        Merge<TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_>
                  (param_1 + iVar5,iVar6,iVar7,param_3,param_4);
        iVar5 = iVar5 + iVar2;
        iVar4 = iVar4 + iVar6 * -2;
      } while (iVar5 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StaticEnum<enum_EComponentStrippingVector> @ 14a8de240

UEnum * __cdecl StaticEnum<enum_EComponentStrippingVector>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EComponentStrippingVector,(UObject *)pUVar1,
                       L"EComponentStrippingVector");
  }
  return Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton;
}

// StaticEnum<enum_EHeadingAxis> @ 14a8de280

UEnum * __cdecl StaticEnum<enum_EHeadingAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHeadingAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EHeadingAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EHeadingAxis,(UObject *)pUVar1,L"EHeadingAxis");
  }
  return Z_Registration_Info_UEnum_EHeadingAxis.OuterSingleton;
}

// StaticEnum<enum_EInputQueryPose> @ 14a8de2c0

UEnum * __cdecl StaticEnum<enum_EInputQueryPose>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EInputQueryPose,(UObject *)pUVar1,
                       L"EInputQueryPose");
  }
  return Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton;
}

// StaticEnum<enum_EPermutationTimeType> @ 14a8de300

UEnum * __cdecl StaticEnum<enum_EPermutationTimeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPermutationTimeType,(UObject *)pUVar1,
                       L"EPermutationTimeType");
  }
  return Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton;
}

// StaticEnum<enum_EPoseSearchBoneFlags> @ 14a8de340

UEnum * __cdecl StaticEnum<enum_EPoseSearchBoneFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags,(UObject *)pUVar1,
                       L"EPoseSearchBoneFlags");
  }
  return Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton;
}

// StaticEnum<enum_EPoseSearchTrajectoryFlags> @ 14a8de380

UEnum * __cdecl StaticEnum<enum_EPoseSearchTrajectoryFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags,(UObject *)pUVar1,
                       L"EPoseSearchTrajectoryFlags");
  }
  return Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton;
}

// UpperBoundInternal<TTuple<unsigned_short,unsigned_short>,int,TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_> @ 14a8de4b0

int __cdecl
AlgoImpl::
UpperBoundInternal<TTuple<unsigned_short,unsigned_short>,int,TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_>
          (TTuple<unsigned_short,unsigned_short> *param_1,int param_2,
          TTuple<unsigned_short,unsigned_short> *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      if ((*(ushort *)param_3 < *(ushort *)(param_1 + iVar1)) ||
         ((*(ushort *)param_3 == *(ushort *)(param_1 + iVar1) &&
          (*(ushort *)&param_3->field_0x2 < *(ushort *)&param_1[iVar1].field_0x2)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
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

// call_assignment_no_alias<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>,Eigen::Product<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>,0>,Eigen::internal::assign_op<float,float>_> @ 14a8de520

void __cdecl
Eigen::internal::
call_assignment_no_alias<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::Product<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>,0>,Eigen::internal::assign_op<float,float>_>
          (Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_> *param_1,
          Product<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>,0>
          *param_2,assign_op<float,float> *param_3)

{
  float fVar1;
  float local_res8 [2];
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>
  local_res10;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>,Eigen::internal::assign_op<float,float>,0>
  local_1a8;
  Transpose<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_> local_188;
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
  local_168;
  CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>
  local_118;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  
  local_188.m_matrix._padding_ = param_1->_padding_;
  fVar1 = 0.0;
  local_188.m_matrix._padding_ = param_1->_padding_;
  local_1a8.m_dst =
       (evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_> *)&local_188;
  local_1a8.m_src = &local_res10;
  local_1a8.m_functor = (assign_op<float,float> *)local_res8;
  local_res10.m_functor.m_other = 0.0;
  local_1a8.m_dstExpr = param_1;
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,-1,1,1,-1>_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
  ::run(&local_1a8);
  local_res8[0] = 1.0;
  if ((param_2->m_rhs)._padding_ == 1) {
    local_168._16_8_ = (param_2->m_lhs)._padding_;
    local_168._40_8_ = (param_2->m_lhs)._padding_;
    local_118.m_rhs._8_8_ = (param_2->m_rhs)._padding_;
    local_168._0_8_ = (param_2->m_lhs)._padding_;
    local_168._32_8_ = (param_2->m_rhs)._padding_;
    local_118.m_rhs._72_8_ = (param_2->m_rhs)._padding_;
    local_118.m_lhs.m_matrix._64_8_ = 0;
    local_118.m_rhs._24_8_ = (param_2->m_rhs)._padding_;
    local_168._48_8_ = (param_2->m_rhs)._padding_;
    local_168._24_8_ = (param_2->m_lhs)._padding_;
    local_118.m_lhs.m_matrix._8_8_ = local_168._8_8_;
    local_118.m_lhs.m_matrix._24_8_ = (param_2->m_lhs)._padding_;
    local_118.m_lhs.m_matrix._32_8_ = (param_2->m_lhs)._padding_;
    local_118.m_rhs._40_8_ = (param_2->m_rhs)._padding_;
    local_118.m_rhs._16_8_ = local_58;
    local_118.m_rhs._56_8_ = 0;
    local_118.m_rhs._64_8_ = 0;
    if (local_118.m_rhs._8_8_ != 0) {
      local_168._8_8_ = local_168._0_8_;
      local_118.m_lhs.m_matrix._0_8_ = local_168._0_8_;
      local_118.m_lhs.m_matrix._16_8_ = local_168._16_8_;
      local_118.m_lhs.m_matrix._40_8_ = local_168._24_8_;
      local_118.m_lhs.m_matrix._72_8_ = local_168._40_8_;
      local_118.m_rhs._0_8_ = local_168._32_8_;
      local_118.m_rhs._32_8_ = local_168._48_8_;
      local_68 = local_168._32_8_;
      lStack_60 = local_118.m_rhs._8_8_;
      fVar1 = redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_,-1,1,1>_const_>_>,3,0>
              ::
              run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
                        (&local_168,(scalar_sum_op<float,float> *)local_res8,&local_118);
    }
    *(float *)param_1->_padding_ = fVar1 + *(float *)param_1->_padding_;
  }
  else {
    local_1a8.m_dst =
         (evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_> *)
         param_1->_padding_;
    local_1a8.m_src =
         (evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>
          *)param_1->_padding_;
    local_1a8.m_functor = (assign_op<float,float> *)param_1->_padding_;
    local_188.m_matrix._padding_ = (param_2->m_lhs)._padding_;
    local_188.m_matrix._padding_ = (param_2->m_lhs)._padding_;
    local_188.m_matrix._padding_ = (param_2->m_lhs)._padding_;
    local_168._0_8_ = (param_2->m_rhs)._padding_;
    local_168._8_8_ = (param_2->m_rhs)._padding_;
    local_168._16_8_ = (param_2->m_rhs)._padding_;
    gemv_dense_selector<2,1,1>::
    run<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>_>
              ((Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>
                *)&local_168,&local_188,
               (Transpose<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_> *)
               &local_1a8,local_res8);
  }
  return;
}

// call_assignment_no_alias<Eigen::Matrix<float,1,-1,1,1,-1>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,1,Eigen::Stride<0,0>_>_const_,1,-1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>,Eigen::internal::assign_op<float,float>_> @ 14a8de710

void __cdecl
Eigen::internal::
call_assignment_no_alias<Eigen::Matrix<float,1,_1,1,1,_1>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>,Eigen::internal::assign_op<float,float>_>
          (Matrix<float,1,_1,1,1,_1> *param_1,
          CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>
          *param_2,assign_op<float,float> *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> local_res8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
  local_68;
  undefined1 local_48 [32];
  longlong local_28;
  
  binary_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,1,Eigen::Stride<0,0>_>_const_,1,-1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>,Eigen::internal::IndexBased,Eigen::internal::IndexBased,float,float>
  ::Data::Data((Data *)local_48,param_2);
  lVar4 = (param_2->m_rhs)._padding_;
  if (*(longlong *)&param_1->field_0x8 != lVar4) {
    PlainObjectBase<Eigen::Matrix<float,1,-1,1,1,-1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<float,1,_1,1,1,_1>_> *)param_1,1,lVar4);
  }
  local_res8 = *(evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *)param_1;
  local_68.m_dst = &local_res8;
  local_68.m_src =
       (evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>
        *)local_48;
  lVar4 = *(longlong *)&param_1->field_0x8;
  lVar11 = 0;
  uVar13 = (ulonglong)((uint)(lVar4 >> 0x3f) & 3) + lVar4 & 0xfffffffffffffffc;
  lVar12 = lVar11;
  if (0 < (longlong)uVar13) {
    do {
      pfVar1 = (float *)(local_48._8_8_ + lVar11 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(lVar12 + local_28);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      lVar12 = lVar12 + 0x10;
      pfVar3 = (float *)((longlong)local_res8 + lVar11 * 4);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar5 + fVar8;
      pfVar3[2] = fVar6 + fVar9;
      pfVar3[3] = fVar7 + fVar10;
      lVar11 = lVar11 + 4;
    } while (lVar11 < (longlong)uVar13);
  }
  local_68.m_functor = param_3;
  local_68.m_dstExpr = param_1;
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (&local_68,uVar13,lVar4);
  FMemory_Free((void *)local_48._16_8_);
  return;
}

// call_assignment_no_alias<Eigen::Matrix<float,1,-1,1,1,-1>,Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>,Eigen::internal::assign_op<float,float>_> @ 14a8de810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Eigen::internal::
call_assignment_no_alias<Eigen::Matrix<float,1,_1,1,1,_1>,Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>,Eigen::internal::assign_op<float,float>_>
          (Matrix<float,1,_1,1,1,_1> *param_1,
          CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>
          *param_2,assign_op<float,float> *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> local_res8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
  local_48;
  evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>
  local_28;
  
  local_28._8_8_ = (param_2->m_xpr)._padding_;
  local_28._24_8_ = (param_2->m_xpr)._padding_;
  if (*(longlong *)&param_1->field_0x8 != local_28._24_8_) {
    PlainObjectBase<Eigen::Matrix<float,1,-1,1,1,-1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<float,1,_1,1,1,_1>_> *)param_1,1,local_28._24_8_);
  }
  auVar2 = ___xmm_3f8000003f8000003f8000003f800000;
  local_res8 = *(evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *)param_1;
  local_48.m_dst = &local_res8;
  local_48.m_src = &local_28;
  lVar1 = *(longlong *)&param_1->field_0x8;
  lVar3 = 0;
  uVar4 = (ulonglong)((uint)(lVar1 >> 0x3f) & 3) + lVar1 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar4) {
    do {
      auVar5 = divps(auVar2,*(undefined1 (*) [16])(local_28._8_8_ + lVar3 * 4));
      *(undefined1 (*) [16])((longlong)local_res8 + lVar3 * 4) = auVar5;
      lVar3 = lVar3 + 4;
    } while (lVar3 < (longlong)uVar4);
  }
  local_48.m_functor = param_3;
  local_48.m_dstExpr = param_1;
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (&local_48,uVar4,lVar1);
  return;
}

// dot<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_,-1,1,1>_> @ 14a8de8e0

/* WARNING: Type propagation algorithm not settling */

float __thiscall
Eigen::
MatrixBase<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_>
::
dot<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_>
          (MatrixBase<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_>
           *this,MatrixBase<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_>
                 *param_1)

{
  float fVar1;
  scalar_sum_op<float,float> local_res8 [32];
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
  local_f8;
  undefined1 local_c0 [16];
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_a8 = *(undefined8 *)(this + 0x10);
  local_a0 = *(undefined8 *)(this + 0x18);
  uStack_98 = *(undefined8 *)(this + 0x20);
  local_78 = *(undefined8 *)(this + 0x40);
  local_f8._8_8_ = *(undefined8 *)this;
  uStack_b0 = *(undefined8 *)(this + 8);
  local_f8._32_8_ = *(undefined8 *)param_1;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  local_f8._24_8_ = *(undefined8 *)(this + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  local_f8._48_8_ = *(undefined8 *)(param_1 + 0x20);
  local_70 = *(undefined8 *)(this + 0x48);
  local_30 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_40 = *(undefined8 *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0.0;
  }
  local_c0._8_8_ = local_f8._8_8_;
  local_90 = local_f8._24_8_;
  local_68 = local_f8._32_8_;
  uStack_48 = local_f8._48_8_;
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_,-1,1,1>_const_>_>,3,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
                    (&local_f8,local_res8,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>
                      *)local_c0);
  return fVar1;
}

// dot<Eigen::Block<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,-1,1,0>_> @ 14a8de9c0

float __thiscall
Eigen::
MatrixBase<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_const_,1,-1,1>_>
::
dot<Eigen::Block<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,_1,1,0>_>
          (MatrixBase<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_,1,_1,1>_>
           *this,MatrixBase<Eigen::Block<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,_1,1,0>_>
                 *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  pfVar3 = *(float **)param_1;
  if (lVar2 != 0) {
    lVar4 = 1;
    fVar5 = **(float **)this * *pfVar3;
    if (1 < lVar2) {
      do {
        pfVar3 = pfVar3 + *(longlong *)(param_1 + 0x20);
        pfVar1 = *(float **)this + lVar4;
        lVar4 = lVar4 + 1;
        fVar5 = fVar5 + *pfVar1 * *pfVar3;
      } while (lVar4 < lVar2);
    }
    return fVar5;
  }
  return 0.0;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14a8dea50

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,-1,1,0>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,_1,1,0>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  
  pfVar9 = *(float **)(this + 0x88);
  pfVar10 = *(float **)(this + 8);
  lVar11 = *(longlong *)(this + 0x90);
  lVar12 = *(longlong *)(this + 0xa8);
  lVar14 = 1;
  fVar17 = *pfVar9 * *pfVar10;
  if (1 < lVar11) {
    if (3 < lVar11 + -1) {
      pfVar16 = pfVar9 + lVar12 * 3;
      pfVar15 = pfVar10 + 3;
      lVar13 = (lVar11 - 5U >> 2) + 1;
      lVar14 = lVar13 * 4 + 1;
      do {
        pfVar4 = pfVar16 + lVar12 * -2;
        pfVar1 = pfVar15 + -2;
        pfVar5 = pfVar16 + -lVar12;
        pfVar2 = pfVar15 + -1;
        pfVar6 = pfVar16 + lVar12;
        pfVar3 = pfVar15 + 1;
        fVar7 = *pfVar16;
        fVar8 = *pfVar15;
        pfVar16 = pfVar16 + lVar12 * 4;
        pfVar15 = pfVar15 + 4;
        fVar17 = *pfVar4 * *pfVar1 + fVar17 + *pfVar5 * *pfVar2 + fVar7 * fVar8 + *pfVar6 * *pfVar3;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      if (lVar11 <= lVar14) {
        return fVar17;
      }
    }
    do {
      lVar13 = lVar12 * lVar14;
      pfVar15 = pfVar10 + lVar14;
      lVar14 = lVar14 + 1;
      fVar17 = fVar17 + pfVar9[lVar13] * *pfVar15;
    } while (lVar14 < lVar11);
  }
  return fVar17;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14a8deb60

float __thiscall
Eigen::
DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_,-1,1,1>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
  local_48;
  
  local_48._8_8_ = *(undefined8 *)(this + 8);
  local_48._24_8_ = *(undefined8 *)(this + 0x30);
  local_48._32_8_ = *(undefined8 *)(this + 0x58);
  local_48._48_8_ = *(undefined8 *)(this + 0x78);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_,-1,1,1>_const_>_>,3,0>
          ::
          run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
                    (&local_48,param_1,
                     (CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>
                      *)this);
  return fVar1;
}

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14a8deba0

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float fVar1;
  redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_48;
  
  local_48._16_8_ = *(undefined8 *)(this + 0x10);
  local_48._32_8_ = *(undefined8 *)(this + 0x18);
  local_48._40_8_ = *(undefined8 *)(this + 0x30);
  local_48._56_8_ = *(undefined8 *)(this + 0x38);
  fVar1 = internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                    (&local_48,param_1,
                     (CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>
                      *)this);
  return fVar1;
}

// run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_,-1,1,1>_const_>_> @ 14a8debe0

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,1,-1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_,-1,1,1>_const_>_>,3,0>
::
run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
          (redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<float,float>,Eigen::Transpose<Eigen::Block<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,1,_1,1>_const_>_const_,Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_,_1,1,1>_const_>
          *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar16 = *(longlong *)&(param_3->m_rhs).field_0x8;
  uVar15 = (uint)(lVar16 >> 0x3f);
  pfVar6 = *(float **)&param_1->field_0x20;
  lVar11 = (longlong)(lVar16 + (ulonglong)(uVar15 & 7)) >> 3;
  lVar14 = lVar11 * 8;
  uVar17 = (ulonglong)(uVar15 & 3) + lVar16 & 0xfffffffffffffffc;
  if (uVar17 != 0) {
    pfVar7 = *(float **)&param_1->field_0x8;
    fVar18 = *pfVar6 * *pfVar7;
    fVar19 = pfVar6[1] * pfVar7[1];
    fVar20 = pfVar6[2] * pfVar7[2];
    fVar21 = pfVar6[3] * pfVar7[3];
    if (4 < (longlong)uVar17) {
      fVar22 = pfVar7[4] * pfVar6[4];
      fVar23 = pfVar7[5] * pfVar6[5];
      fVar24 = pfVar7[6] * pfVar6[6];
      fVar25 = pfVar7[7] * pfVar6[7];
      if (8 < lVar14) {
        lVar13 = (lVar14 - 9U >> 3) + 1;
        pfVar12 = pfVar7 + 0xc;
        do {
          pfVar2 = (float *)((longlong)pfVar12 + ((longlong)pfVar6 - (longlong)pfVar7) + -0x10);
          fVar8 = *pfVar12;
          pfVar9 = pfVar12 + 1;
          pfVar10 = pfVar12 + 2;
          pfVar1 = pfVar12 + 3;
          fVar18 = fVar18 + pfVar12[-4] * *pfVar2;
          fVar19 = fVar19 + pfVar12[-3] * pfVar2[1];
          fVar20 = fVar20 + pfVar12[-2] * pfVar2[2];
          fVar21 = fVar21 + pfVar12[-1] * pfVar2[3];
          pfVar2 = (float *)((longlong)pfVar12 + ((longlong)pfVar6 - (longlong)pfVar7));
          pfVar12 = pfVar12 + 8;
          fVar22 = fVar22 + *pfVar2 * fVar8;
          fVar23 = fVar23 + pfVar2[1] * *pfVar9;
          fVar24 = fVar24 + pfVar2[2] * *pfVar10;
          fVar25 = fVar25 + pfVar2[3] * *pfVar1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      fVar18 = fVar18 + fVar22;
      fVar19 = fVar19 + fVar23;
      fVar20 = fVar20 + fVar24;
      fVar21 = fVar21 + fVar25;
      if (lVar14 < (longlong)uVar17) {
        pfVar12 = pfVar7 + lVar11 * 8;
        pfVar2 = pfVar6 + lVar11 * 8;
        fVar18 = fVar18 + *pfVar12 * *pfVar2;
        fVar19 = fVar19 + pfVar12[1] * pfVar2[1];
        fVar20 = fVar20 + pfVar12[2] * pfVar2[2];
        fVar21 = fVar21 + pfVar12[3] * pfVar2[3];
      }
    }
    fVar18 = fVar20 + fVar18 + fVar21 + fVar19;
    if ((longlong)uVar17 < lVar16) {
      if (3 < (longlong)(lVar16 - uVar17)) {
        pfVar12 = pfVar7 + uVar17 + 1;
        lVar11 = (longlong)pfVar6 - (longlong)pfVar7;
        lVar14 = ((lVar16 - uVar17) - 4 >> 2) + 1;
        uVar17 = uVar17 + lVar14 * 4;
        do {
          pfVar2 = pfVar12 + -1;
          pfVar3 = (float *)((longlong)pfVar12 + lVar11 + -4);
          pfVar1 = (float *)((longlong)pfVar12 + lVar11);
          fVar19 = *pfVar12;
          pfVar9 = pfVar12 + 1;
          pfVar4 = (float *)((longlong)pfVar12 + lVar11 + 4);
          pfVar10 = pfVar12 + 2;
          pfVar5 = (float *)((longlong)pfVar12 + lVar11 + 8);
          pfVar12 = pfVar12 + 4;
          fVar18 = *pfVar2 * *pfVar3 + fVar18 + *pfVar1 * fVar19 + *pfVar9 * *pfVar4 +
                   *pfVar10 * *pfVar5;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        if (lVar16 <= (longlong)uVar17) {
          return fVar18;
        }
      }
      pfVar12 = pfVar7 + uVar17;
      lVar16 = lVar16 - uVar17;
      do {
        pfVar2 = (float *)((longlong)pfVar12 + ((longlong)pfVar6 - (longlong)pfVar7));
        fVar19 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        fVar18 = fVar18 + *pfVar2 * fVar19;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    return fVar18;
  }
  pfVar7 = *(float **)&param_1->field_0x8;
  lVar14 = 1;
  fVar18 = *pfVar6 * *pfVar7;
  if (1 < lVar16) {
    if (3 < lVar16 + -1) {
      lVar11 = (longlong)pfVar6 - (longlong)pfVar7;
      lVar13 = (lVar16 - 5U >> 2) + 1;
      pfVar12 = pfVar7 + 2;
      lVar14 = lVar13 * 4 + 1;
      do {
        pfVar3 = (float *)(lVar11 + -4 + (longlong)pfVar12);
        pfVar2 = pfVar12 + -1;
        fVar19 = *pfVar12;
        pfVar1 = (float *)(lVar11 + (longlong)pfVar12);
        pfVar4 = (float *)(lVar11 + 8 + (longlong)pfVar12);
        pfVar9 = pfVar12 + 2;
        pfVar5 = (float *)(lVar11 + 4 + (longlong)pfVar12);
        pfVar10 = pfVar12 + 1;
        pfVar12 = pfVar12 + 4;
        fVar18 = *pfVar3 * *pfVar2 + fVar18 + fVar19 * *pfVar1 + *pfVar5 * *pfVar10 +
                 *pfVar4 * *pfVar9;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      if (lVar16 <= lVar14) {
        return fVar18;
      }
    }
    do {
      pfVar12 = pfVar7 + lVar14;
      pfVar2 = pfVar6 + lVar14;
      lVar14 = lVar14 + 1;
      fVar18 = fVar18 + *pfVar12 * *pfVar2;
    } while (lVar14 < lVar16);
  }
  return fVar18;
}

// run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_> @ 14a8dee50

float __cdecl
Eigen::internal::
redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,3,0>
::
run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
          (redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
           *param_1,scalar_sum_op<float,float> *param_2,
          CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>
          *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar14 = (param_3->m_xpr).m_rhs._padding_;
  uVar12 = (uint)(lVar14 >> 0x3f);
  lVar6 = (longlong)(lVar14 + (ulonglong)(uVar12 & 7)) >> 3;
  lVar10 = lVar6 * 8;
  uVar13 = (ulonglong)(uVar12 & 3) + lVar14 & 0xfffffffffffffffc;
  if (uVar13 == 0) {
    lVar10 = 1;
    pfVar11 = *(float **)&param_1->field_0x28;
    fVar19 = **(float **)&param_1->field_0x10 - *pfVar11;
    fVar19 = fVar19 * fVar19;
    if (1 < lVar14) {
      if (3 < lVar14 + -1) {
        pfVar9 = pfVar11 + 2;
        lVar6 = (longlong)*(float **)&param_1->field_0x10 - (longlong)pfVar11;
        lVar7 = (lVar14 - 5U >> 2) + 1;
        lVar10 = lVar7 * 4 + 1;
        do {
          fVar20 = *(float *)(lVar6 + -4 + (longlong)pfVar9) - pfVar9[-1];
          fVar22 = *(float *)(lVar6 + (longlong)pfVar9) - *pfVar9;
          fVar21 = *(float *)(lVar6 + 4 + (longlong)pfVar9) - pfVar9[1];
          fVar15 = *(float *)(lVar6 + 8 + (longlong)pfVar9) - pfVar9[2];
          pfVar9 = pfVar9 + 4;
          fVar19 = fVar19 + fVar20 * fVar20 + fVar22 * fVar22 + fVar21 * fVar21 + fVar15 * fVar15;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar10 < lVar14) {
        lVar14 = lVar14 - lVar10;
        pfVar11 = (float *)(*(longlong *)&param_1->field_0x28 + lVar10 * 4);
        do {
          fVar20 = *(float *)((*(longlong *)&param_1->field_0x10 - *(longlong *)&param_1->field_0x28
                              ) + (longlong)pfVar11) - *pfVar11;
          pfVar11 = pfVar11 + 1;
          fVar19 = fVar19 + fVar20 * fVar20;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
  }
  else {
    pfVar11 = *(float **)&param_1->field_0x28;
    pfVar9 = *(float **)&param_1->field_0x10;
    fVar19 = (*pfVar9 - *pfVar11) * (*pfVar9 - *pfVar11);
    fVar20 = (pfVar9[1] - pfVar11[1]) * (pfVar9[1] - pfVar11[1]);
    fVar21 = (pfVar9[2] - pfVar11[2]) * (pfVar9[2] - pfVar11[2]);
    fVar22 = (pfVar9[3] - pfVar11[3]) * (pfVar9[3] - pfVar11[3]);
    if (4 < (longlong)uVar13) {
      fVar15 = (pfVar9[4] - pfVar11[4]) * (pfVar9[4] - pfVar11[4]);
      fVar16 = (pfVar9[5] - pfVar11[5]) * (pfVar9[5] - pfVar11[5]);
      fVar17 = (pfVar9[6] - pfVar11[6]) * (pfVar9[6] - pfVar11[6]);
      fVar18 = (pfVar9[7] - pfVar11[7]) * (pfVar9[7] - pfVar11[7]);
      if (8 < lVar10) {
        lVar7 = (lVar10 - 9U >> 3) + 1;
        pfVar8 = pfVar9 + 0xc;
        do {
          pfVar2 = (float *)((longlong)pfVar8 + ((longlong)pfVar11 - (longlong)pfVar9) + -0x10);
          pfVar1 = (float *)((longlong)pfVar8 + ((longlong)pfVar11 - (longlong)pfVar9));
          fVar19 = fVar19 + (pfVar8[-4] - *pfVar2) * (pfVar8[-4] - *pfVar2);
          fVar20 = fVar20 + (pfVar8[-3] - pfVar2[1]) * (pfVar8[-3] - pfVar2[1]);
          fVar21 = fVar21 + (pfVar8[-2] - pfVar2[2]) * (pfVar8[-2] - pfVar2[2]);
          fVar22 = fVar22 + (pfVar8[-1] - pfVar2[3]) * (pfVar8[-1] - pfVar2[3]);
          fVar3 = *pfVar8;
          pfVar2 = pfVar8 + 1;
          pfVar4 = pfVar8 + 2;
          pfVar5 = pfVar8 + 3;
          pfVar8 = pfVar8 + 8;
          fVar15 = fVar15 + (fVar3 - *pfVar1) * (fVar3 - *pfVar1);
          fVar16 = fVar16 + (*pfVar2 - pfVar1[1]) * (*pfVar2 - pfVar1[1]);
          fVar17 = fVar17 + (*pfVar4 - pfVar1[2]) * (*pfVar4 - pfVar1[2]);
          fVar18 = fVar18 + (*pfVar5 - pfVar1[3]) * (*pfVar5 - pfVar1[3]);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      fVar19 = fVar19 + fVar15;
      fVar20 = fVar20 + fVar16;
      fVar21 = fVar21 + fVar17;
      fVar22 = fVar22 + fVar18;
      if (lVar10 < (longlong)uVar13) {
        pfVar8 = pfVar9 + lVar6 * 8;
        pfVar1 = pfVar11 + lVar6 * 8;
        fVar19 = fVar19 + (*pfVar8 - *pfVar1) * (*pfVar8 - *pfVar1);
        fVar20 = fVar20 + (pfVar8[1] - pfVar1[1]) * (pfVar8[1] - pfVar1[1]);
        fVar21 = fVar21 + (pfVar8[2] - pfVar1[2]) * (pfVar8[2] - pfVar1[2]);
        fVar22 = fVar22 + (pfVar8[3] - pfVar1[3]) * (pfVar8[3] - pfVar1[3]);
      }
    }
    fVar19 = fVar21 + fVar19 + fVar22 + fVar20;
    if ((longlong)uVar13 < lVar14) {
      if (3 < (longlong)(lVar14 - uVar13)) {
        pfVar8 = pfVar11 + uVar13 + 1;
        lVar6 = (longlong)pfVar9 - (longlong)pfVar11;
        lVar10 = ((lVar14 - uVar13) - 4 >> 2) + 1;
        uVar13 = uVar13 + lVar10 * 4;
        do {
          fVar20 = *(float *)((longlong)pfVar8 + lVar6 + -4) - pfVar8[-1];
          fVar22 = *(float *)((longlong)pfVar8 + lVar6) - *pfVar8;
          fVar21 = *(float *)((longlong)pfVar8 + lVar6 + 4) - pfVar8[1];
          fVar15 = *(float *)((longlong)pfVar8 + lVar6 + 8) - pfVar8[2];
          pfVar8 = pfVar8 + 4;
          fVar19 = fVar19 + fVar20 * fVar20 + fVar22 * fVar22 + fVar21 * fVar21 + fVar15 * fVar15;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (lVar14 <= (longlong)uVar13) {
          return fVar19;
        }
      }
      pfVar8 = pfVar11 + uVar13;
      lVar14 = lVar14 - uVar13;
      do {
        fVar20 = *(float *)((longlong)pfVar8 + ((longlong)pfVar9 - (longlong)pfVar11)) - *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar19 = fVar19 + fVar20 * fVar20;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      return fVar19;
    }
  }
  return fVar19;
}

// run<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>_> @ 14a8df100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
Eigen::internal::gemv_dense_selector<2,1,1>::
run<Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>_>
          (Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>
           *param_1,
          Transpose<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_>
          *param_2,Transpose<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>
                   *param_3,float *param_4)

{
  ulong64 uVar1;
  float fVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  long64 lVar6;
  void *pvVar7;
  longlong lVar8;
  void *pvVar9;
  ulonglong uVar10;
  void *pvVar11;
  undefined1 *puVar12;
  undefined1 auStack_d8 [64];
  void *local_98;
  undefined8 local_90;
  const_blas_data_mapper<float,__int64,1> local_88;
  ulonglong local_78;
  longlong local_58;
  ulonglong local_48;
  
  puVar12 = auStack_d8;
  local_48 = __security_cookie.value ^ (ulonglong)&local_98;
  lVar5 = (param_1->m_matrix)._padding_;
  lVar6 = (param_1->m_matrix)._padding_;
  pvVar7 = (void *)(param_2->m_matrix)._padding_;
  fVar2 = *param_4;
  local_58 = (param_1->m_matrix)._padding_;
  uVar3 = (param_2->m_matrix)._padding_;
  local_78 = uVar3;
  if (0x3fffffffffffffff < uVar3) {
    ::operator_new(0xffffffffffffffff);
  }
  pvVar9 = pvVar7;
  if (pvVar7 == (void *)0x0) {
    uVar1 = uVar3 * 4;
    if (uVar1 < 0x20001) {
      uVar10 = uVar1 + 0x1e;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pvVar9 = (void *)((longlong)&local_90 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_d8 + -(uVar10 & 0xfffffffffffffff0);
    }
    else {
      pvVar9 = FMemory_Malloc(uVar1,0x10);
      puVar12 = auStack_d8;
      if (pvVar9 == (void *)0x0) {
        ::operator_new(0xffffffffffffffff);
        puVar12 = auStack_d8;
      }
    }
  }
  lVar8 = local_58;
  lVar4 = (param_3->m_matrix)._padding_;
  *(float *)(puVar12 + 0x30) = fVar2;
  local_88._0_8_ = lVar5;
  *(undefined8 *)(puVar12 + 0x28) = 1;
  local_88._8_8_ = lVar6;
  local_98 = pvVar9;
  local_90 = 1;
  *(longlong *)(puVar12 + 0x20) = lVar4;
  *(undefined8 *)(puVar12 + -8) = 0x14a8df244;
  general_matrix_vector_product<__int64,float,Eigen::internal::const_blas_data_mapper<float,__int64,1>,1,0,float,Eigen::internal::const_blas_data_mapper<float,__int64,0>,0,0>
  ::run(lVar8,lVar6,&local_88,(const_blas_data_mapper<float,__int64,0> *)&local_98,
        *(float **)(puVar12 + 0x20),*(long64 *)(puVar12 + 0x28),*(float *)(puVar12 + 0x30));
  if (0x20000 < uVar3 * 4) {
    pvVar11 = (void *)0x0;
    if (pvVar7 == (void *)0x0) {
      pvVar11 = pvVar9;
    }
    *(undefined8 *)(puVar12 + -8) = 0x14a8df262;
    FMemory_Free(pvVar11);
  }
  *(undefined8 *)(puVar12 + -8) = 0x14a8df26e;
  return;
}

// run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_> @ 14a8df2b0

void __cdecl
Eigen::internal::unaligned_dense_assignment_loop<0>::
run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
           *param_1,long64 param_2,long64 param_3)

{
  evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  *peVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  if (param_2 < param_3) {
    peVar1 = param_1->m_src;
    lVar2 = *(longlong *)param_1->m_dst;
    if (3 < param_3 - param_2) {
      lVar6 = *(longlong *)&peVar1->field_0x30;
      lVar7 = *(longlong *)&peVar1->field_0x18 - lVar6;
      pfVar4 = (float *)(lVar6 + (param_2 + 1) * 4);
      lVar5 = *(longlong *)&peVar1->field_0x48 - lVar6;
      lVar6 = lVar2 - lVar6;
      lVar3 = ((param_3 - param_2) - 4U >> 2) + 1;
      param_2 = param_2 + lVar3 * 4;
      do {
        fVar8 = (*(float *)((longlong)pfVar4 + lVar7 + -4) - pfVar4[-1]) *
                *(float *)((longlong)pfVar4 + lVar5 + -4);
        *(float *)((longlong)pfVar4 + lVar6 + -4) = fVar8 * fVar8;
        fVar8 = (*(float *)((longlong)pfVar4 + lVar7) - *pfVar4) *
                *(float *)((longlong)pfVar4 + lVar5);
        *(float *)((longlong)pfVar4 + lVar6) = fVar8 * fVar8;
        fVar8 = (*(float *)((longlong)pfVar4 + lVar7 + 4) - pfVar4[1]) *
                *(float *)((longlong)pfVar4 + lVar5 + 4);
        *(float *)((longlong)pfVar4 + lVar6 + 4) = fVar8 * fVar8;
        fVar8 = (*(float *)((longlong)pfVar4 + lVar7 + 8) - pfVar4[2]) *
                *(float *)((longlong)pfVar4 + lVar5 + 8);
        *(float *)((longlong)pfVar4 + lVar6 + 8) = fVar8 * fVar8;
        pfVar4 = pfVar4 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if (param_3 <= param_2) {
        return;
      }
    }
    lVar6 = *(longlong *)&peVar1->field_0x30;
    lVar3 = *(longlong *)&peVar1->field_0x18;
    lVar5 = *(longlong *)&peVar1->field_0x48;
    pfVar4 = (float *)(lVar6 + param_2 * 4);
    lVar7 = param_3 - param_2;
    do {
      fVar8 = (*(float *)((lVar3 - lVar6) + (longlong)pfVar4) - *pfVar4) *
              *(float *)((lVar5 - lVar6) + (longlong)pfVar4);
      *(float *)((lVar2 - lVar6) + (longlong)pfVar4) = fVar8 * fVar8;
      pfVar4 = pfVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_> @ 14a8df3f0

void __cdecl
Eigen::internal::unaligned_dense_assignment_loop<0>::
run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
           *param_1,long64 param_2,long64 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  
  uVar31 = param_3 - param_2;
  if (param_3 <= param_2) {
    return;
  }
  if (1 < uVar31) {
    lVar8 = *(longlong *)&param_1->m_src->field_0x20;
    lVar9 = *(longlong *)&param_1->m_src->field_0x8;
    lVar10 = *(longlong *)param_1->m_dst;
    uVar1 = lVar10 + param_2 * 4;
    uVar2 = lVar10 + (param_3 + -1) * 4;
    if ((((ulonglong)(lVar8 + (param_3 + -1) * 4) < uVar1) ||
        (uVar2 < (ulonglong)(lVar8 + param_2 * 4))) &&
       (((ulonglong)(lVar9 + (param_3 + -1) * 4) < uVar1 ||
        (uVar2 < (ulonglong)(lVar9 + param_2 * 4))))) {
      if (0xf < uVar31) {
        uVar30 = (uint)((longlong)uVar31 >> 0x3f) & 0xf;
        lVar29 = param_2 * 4 + 0x20;
        do {
          pfVar3 = (float *)(lVar29 + -0x20 + lVar8);
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          param_2 = param_2 + 0x10;
          pfVar4 = (float *)(lVar29 + -0x20 + lVar9);
          fVar14 = pfVar4[1];
          fVar15 = pfVar4[2];
          fVar16 = pfVar4[3];
          pfVar5 = (float *)(lVar29 + -0x10 + lVar9);
          fVar17 = *pfVar5;
          fVar18 = pfVar5[1];
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + -0x10 + lVar8);
          fVar21 = *pfVar5;
          fVar22 = pfVar5[1];
          fVar23 = pfVar5[2];
          fVar24 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + lVar8);
          fVar25 = *pfVar5;
          fVar26 = pfVar5[1];
          fVar27 = pfVar5[2];
          fVar28 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + -0x20 + lVar10);
          *pfVar5 = *pfVar4 - *pfVar3;
          pfVar5[1] = fVar14 - fVar11;
          pfVar5[2] = fVar15 - fVar12;
          pfVar5[3] = fVar16 - fVar13;
          pfVar5 = (float *)(lVar29 + lVar9);
          fVar11 = *pfVar5;
          fVar12 = pfVar5[1];
          fVar13 = pfVar5[2];
          fVar14 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + -0x10 + lVar10);
          *pfVar5 = fVar17 - fVar21;
          pfVar5[1] = fVar18 - fVar22;
          pfVar5[2] = fVar19 - fVar23;
          pfVar5[3] = fVar20 - fVar24;
          pfVar5 = (float *)(lVar29 + 0x10 + lVar9);
          fVar15 = *pfVar5;
          fVar16 = pfVar5[1];
          fVar17 = pfVar5[2];
          fVar18 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + 0x10 + lVar8);
          fVar19 = *pfVar5;
          fVar20 = pfVar5[1];
          fVar21 = pfVar5[2];
          fVar22 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + lVar10);
          *pfVar5 = fVar11 - fVar25;
          pfVar5[1] = fVar12 - fVar26;
          pfVar5[2] = fVar13 - fVar27;
          pfVar5[3] = fVar14 - fVar28;
          pfVar5 = (float *)(lVar29 + 0x10 + lVar10);
          *pfVar5 = fVar15 - fVar19;
          pfVar5[1] = fVar16 - fVar20;
          pfVar5[2] = fVar17 - fVar21;
          pfVar5[3] = fVar18 - fVar22;
          lVar29 = lVar29 + 0x40;
        } while (param_2 < (longlong)
                           (param_3 - ((ulonglong)((uint)uVar31 + uVar30 & 0xf) - (ulonglong)uVar30)
                           ));
        if (((byte)uVar31 & 0xf) < 2) goto LAB_14a8df54d;
      }
      do {
        uVar6 = *(undefined8 *)(lVar9 + param_2 * 4);
        uVar7 = *(undefined8 *)(lVar8 + param_2 * 4);
        *(ulonglong *)(lVar10 + param_2 * 4) =
             CONCAT44((float)((ulonglong)uVar6 >> 0x20) - (float)((ulonglong)uVar7 >> 0x20),
                      (float)uVar6 - (float)uVar7);
        param_2 = param_2 + 2;
      } while (param_2 < (longlong)
                         (param_3 -
                         (((ulonglong)((uint)uVar31 & 1) ^ (longlong)uVar31 >> 0x3f) -
                         ((longlong)uVar31 >> 0x3f))));
    }
  }
LAB_14a8df54d:
  if (param_2 < param_3) {
    lVar8 = *(longlong *)&param_1->m_src->field_0x20;
    lVar9 = *(longlong *)&param_1->m_src->field_0x8;
    lVar10 = *(longlong *)param_1->m_dst;
    if (3 < param_3 - param_2) {
      lVar29 = param_2 * 4;
      do {
        *(float *)(lVar10 + param_2 * 4) =
             *(float *)(lVar9 + param_2 * 4) - *(float *)(lVar8 + param_2 * 4);
        *(float *)(lVar10 + 4 + param_2 * 4) =
             *(float *)(lVar9 + 4 + param_2 * 4) - *(float *)(lVar8 + 4 + param_2 * 4);
        pfVar5 = (float *)(lVar9 + 8 + lVar29);
        lVar29 = lVar29 + 0x10;
        *(float *)(lVar10 + 8 + param_2 * 4) = *pfVar5 - *(float *)(lVar8 + 8 + param_2 * 4);
        *(float *)(lVar10 + 0xc + param_2 * 4) =
             *(float *)(lVar9 + 0xc + param_2 * 4) - *(float *)(lVar8 + 0xc + param_2 * 4);
        param_2 = param_2 + 4;
      } while (param_2 < param_3 + -3);
      if (param_3 <= param_2) {
        return;
      }
    }
    do {
      *(float *)(lVar10 + param_2 * 4) =
           *(float *)(lVar9 + param_2 * 4) - *(float *)(lVar8 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

// run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_> @ 14a8df610

void __cdecl
Eigen::internal::unaligned_dense_assignment_loop<0>::
run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
           *param_1,long64 param_2,long64 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  
  uVar31 = param_3 - param_2;
  if (param_3 <= param_2) {
    return;
  }
  if (1 < uVar31) {
    lVar8 = *(longlong *)&param_1->m_src->field_0x8;
    lVar9 = *(longlong *)&param_1->m_src->field_0x20;
    lVar10 = *(longlong *)param_1->m_dst;
    uVar1 = lVar10 + param_2 * 4;
    uVar2 = lVar10 + (param_3 + -1) * 4;
    if ((((ulonglong)(lVar8 + (param_3 + -1) * 4) < uVar1) ||
        (uVar2 < (ulonglong)(lVar8 + param_2 * 4))) &&
       (((ulonglong)(lVar9 + (param_3 + -1) * 4) < uVar1 ||
        (uVar2 < (ulonglong)(lVar9 + param_2 * 4))))) {
      if (0xf < uVar31) {
        uVar30 = (uint)((longlong)uVar31 >> 0x3f) & 0xf;
        lVar29 = param_2 * 4 + 0x20;
        do {
          pfVar3 = (float *)(lVar29 + -0x20 + lVar9);
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          param_2 = param_2 + 0x10;
          pfVar4 = (float *)(lVar29 + -0x20 + lVar8);
          fVar14 = pfVar4[1];
          fVar15 = pfVar4[2];
          fVar16 = pfVar4[3];
          pfVar5 = (float *)(lVar29 + -0x10 + lVar8);
          fVar17 = *pfVar5;
          fVar18 = pfVar5[1];
          fVar19 = pfVar5[2];
          fVar20 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + -0x10 + lVar9);
          fVar21 = *pfVar5;
          fVar22 = pfVar5[1];
          fVar23 = pfVar5[2];
          fVar24 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + lVar8);
          fVar25 = *pfVar5;
          fVar26 = pfVar5[1];
          fVar27 = pfVar5[2];
          fVar28 = pfVar5[3];
          pfVar5 = (float *)(lVar29 + -0x20 + lVar10);
          *pfVar5 = *pfVar4 * *pfVar3;
          pfVar5[1] = fVar14 * fVar11;
          pfVar5[2] = fVar15 * fVar12;
          pfVar5[3] = fVar16 * fVar13;
          pfVar3 = (float *)(lVar29 + lVar9);
          fVar11 = *pfVar3;
          fVar12 = pfVar3[1];
          fVar13 = pfVar3[2];
          fVar14 = pfVar3[3];
          pfVar3 = (float *)(lVar29 + -0x10 + lVar10);
          *pfVar3 = fVar17 * fVar21;
          pfVar3[1] = fVar18 * fVar22;
          pfVar3[2] = fVar19 * fVar23;
          pfVar3[3] = fVar20 * fVar24;
          pfVar3 = (float *)(lVar29 + 0x10 + lVar8);
          fVar15 = *pfVar3;
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar18 = pfVar3[3];
          pfVar3 = (float *)(lVar29 + 0x10 + lVar9);
          fVar19 = *pfVar3;
          fVar20 = pfVar3[1];
          fVar21 = pfVar3[2];
          fVar22 = pfVar3[3];
          pfVar3 = (float *)(lVar29 + lVar10);
          *pfVar3 = fVar11 * fVar25;
          pfVar3[1] = fVar12 * fVar26;
          pfVar3[2] = fVar13 * fVar27;
          pfVar3[3] = fVar14 * fVar28;
          pfVar3 = (float *)(lVar29 + 0x10 + lVar10);
          *pfVar3 = fVar15 * fVar19;
          pfVar3[1] = fVar16 * fVar20;
          pfVar3[2] = fVar17 * fVar21;
          pfVar3[3] = fVar18 * fVar22;
          lVar29 = lVar29 + 0x40;
        } while (param_2 < (longlong)
                           (param_3 - ((ulonglong)((uint)uVar31 + uVar30 & 0xf) - (ulonglong)uVar30)
                           ));
        if (((byte)uVar31 & 0xf) < 2) goto LAB_14a8df76d;
      }
      do {
        uVar6 = *(undefined8 *)(lVar8 + param_2 * 4);
        uVar7 = *(undefined8 *)(lVar9 + param_2 * 4);
        *(ulonglong *)(lVar10 + param_2 * 4) =
             CONCAT44((float)((ulonglong)uVar6 >> 0x20) * (float)((ulonglong)uVar7 >> 0x20),
                      (float)uVar6 * (float)uVar7);
        param_2 = param_2 + 2;
      } while (param_2 < (longlong)
                         (param_3 -
                         (((ulonglong)((uint)uVar31 & 1) ^ (longlong)uVar31 >> 0x3f) -
                         ((longlong)uVar31 >> 0x3f))));
    }
  }
LAB_14a8df76d:
  if (param_2 < param_3) {
    lVar8 = *(longlong *)&param_1->m_src->field_0x8;
    lVar9 = *(longlong *)&param_1->m_src->field_0x20;
    lVar10 = *(longlong *)param_1->m_dst;
    if (3 < param_3 - param_2) {
      lVar29 = param_2 * 4;
      do {
        lVar29 = lVar29 + 0x10;
        *(float *)(lVar10 + param_2 * 4) =
             *(float *)(lVar9 + param_2 * 4) * *(float *)(lVar8 + param_2 * 4);
        *(float *)(lVar10 + 4 + param_2 * 4) =
             *(float *)(lVar8 + 4 + param_2 * 4) * *(float *)(lVar9 + 4 + param_2 * 4);
        *(float *)(lVar10 + 8 + param_2 * 4) =
             *(float *)(lVar9 + -8 + lVar29) * *(float *)(lVar8 + 8 + param_2 * 4);
        *(float *)(lVar10 + 0xc + param_2 * 4) =
             *(float *)(lVar8 + 0xc + param_2 * 4) * *(float *)(lVar9 + 0xc + param_2 * 4);
        param_2 = param_2 + 4;
      } while (param_2 < param_3 + -3);
      if (param_3 <= param_2) {
        return;
      }
    }
    do {
      *(float *)(lVar10 + param_2 * 4) =
           *(float *)(lVar8 + param_2 * 4) * *(float *)(lVar9 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

// run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,-1,1,1,-1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,-1,1,1,-1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_> @ 14a8df830

void __cdecl
Eigen::internal::unaligned_dense_assignment_loop<0>::
run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
           *param_1,long64 param_2,long64 param_3)

{
  evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_>_>
  *peVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 < param_3) {
    peVar1 = param_1->m_src;
    lVar2 = *(longlong *)param_1->m_dst;
    if (3 < param_3 - param_2) {
      pfVar3 = (float *)(lVar2 + (param_2 + 2) * 4);
      lVar6 = -lVar2 + -8;
      lVar5 = ((param_3 - param_2) - 4U >> 2) + 1;
      lVar4 = lVar6 + (longlong)pfVar3;
      param_2 = param_2 + lVar5 * 4;
      do {
        lVar4 = lVar4 + 0x10;
        pfVar3[-2] = *(float *)((longlong)pfVar3 + *(longlong *)&peVar1->field_0x8 + lVar6) *
                     *(float *)(*(longlong *)&peVar1->field_0x10 + -0x10 + lVar4);
        pfVar3[-1] = *(float *)((longlong)pfVar3 + *(longlong *)&peVar1->field_0x10 + 4 + lVar6) *
                     *(float *)((longlong)pfVar3 + *(longlong *)&peVar1->field_0x8 + -lVar2 + -4);
        *pfVar3 = *(float *)((longlong)pfVar3 + (*(longlong *)&peVar1->field_0x8 - lVar2)) *
                  *(float *)((longlong)pfVar3 + (*(longlong *)&peVar1->field_0x10 - lVar2));
        pfVar3[1] = *(float *)((longlong)pfVar3 + *(longlong *)&peVar1->field_0x10 + (4 - lVar2)) *
                    *(float *)((longlong)pfVar3 + *(longlong *)&peVar1->field_0x8 + (4 - lVar2));
        pfVar3 = pfVar3 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if (param_3 <= param_2) {
        return;
      }
    }
    do {
      *(float *)(lVar2 + param_2 * 4) =
           *(float *)(*(longlong *)&peVar1->field_0x10 + param_2 * 4) *
           *(float *)(*(longlong *)&peVar1->field_0x8 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

// run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,-1,1,1,-1>_>_>,Eigen::internal::assign_op<float,float>,0>_> @ 14a8df980

void __cdecl
Eigen::internal::unaligned_dense_assignment_loop<0>::
run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>,Eigen::internal::assign_op<float,float>,0>_>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>,Eigen::internal::assign_op<float,float>,0>
           *param_1,long64 param_2,long64 param_3)

{
  float fVar1;
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>
  *peVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  long64 lVar6;
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>
  *peVar7;
  
  uVar3 = param_3 - param_2;
  if (param_2 < param_3) {
    lVar6 = param_2;
    if (3 < uVar3) {
      peVar2 = param_1->m_src;
      fVar1 = (peVar2->m_functor).m_other;
      peVar7 = (evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>
                *)(*(longlong *)param_1->m_dst + param_2 * 4);
      if ((peVar2 < peVar7) ||
         ((evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>
           *)(*(longlong *)param_1->m_dst + (param_3 + -1) * 4) < peVar2)) {
        uVar5 = (uint)((longlong)uVar3 >> 0x3f) & 3;
        lVar4 = param_3 - ((ulonglong)((int)uVar3 + uVar5 & 3) - (ulonglong)uVar5);
        do {
          lVar6 = lVar6 + 4;
        } while (lVar6 < lVar4);
        lVar4 = (lVar4 - param_2) + 3;
        for (lVar4 = ((longlong)((ulonglong)((uint)(lVar4 >> 0x3f) & 3) + lVar4) >> 2 &
                     0xfffffffffffffffU) << 2; lVar4 != 0; lVar4 = lVar4 + -1) {
          (peVar7->m_functor).m_other = fVar1;
          peVar7 = (evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>
                    *)&peVar7->m_wrapper;
        }
        if (param_3 <= lVar6) {
          return;
        }
      }
    }
    peVar7 = param_1->m_src;
    lVar4 = *(longlong *)param_1->m_dst;
    if (3 < param_3 - lVar6) {
      do {
        *(float *)(lVar4 + lVar6 * 4) = (peVar7->m_functor).m_other;
        *(float *)(lVar4 + 4 + lVar6 * 4) = (peVar7->m_functor).m_other;
        *(float *)(lVar4 + 8 + lVar6 * 4) = (peVar7->m_functor).m_other;
        *(float *)(lVar4 + 0xc + lVar6 * 4) = (peVar7->m_functor).m_other;
        lVar6 = lVar6 + 4;
      } while (lVar6 < param_3 + -3);
      if (param_3 <= lVar6) {
        return;
      }
    }
    do {
      *(float *)(lVar4 + lVar6 * 4) = (peVar7->m_functor).m_other;
      lVar6 = lVar6 + 1;
    } while (lVar6 < param_3);
  }
  return;
}

// run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,-1,1,1,-1>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,1,Eigen::Stride<0,0>_>_const_,1,-1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_> @ 14a8dfa80

void __cdecl
Eigen::internal::unaligned_dense_assignment_loop<0>::
run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
           *param_1,long64 param_2,long64 param_3)

{
  float *pfVar1;
  evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>
  *peVar2;
  evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *peVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  
  if (param_2 < param_3) {
    peVar2 = param_1->m_src;
    peVar3 = param_1->m_dst;
    lVar4 = *(longlong *)&peVar2->field_0x20;
    if (param_3 - param_2 < 4) goto LAB_14a8dfb91;
    pfVar7 = (float *)(lVar4 + (param_2 + 2) * 4);
    lVar8 = -lVar4 + -8;
    lVar6 = ((param_3 - param_2) - 4U >> 2) + 1;
    lVar5 = lVar8 + (longlong)pfVar7;
    param_2 = param_2 + lVar6 * 4;
    do {
      pfVar1 = (float *)(*(longlong *)&peVar2->field_0x8 + lVar5);
      lVar5 = lVar5 + 0x10;
      *(float *)((longlong)pfVar7 + (longlong)*peVar3 + lVar8) = *pfVar1 + pfVar7[-2];
      *(float *)((longlong)pfVar7 + (longlong)*peVar3 + -lVar4 + -4) =
           *(float *)((longlong)pfVar7 + *(longlong *)&peVar2->field_0x8 + 4 + lVar8) + pfVar7[-1];
      *(float *)((longlong)pfVar7 + ((longlong)*peVar3 - lVar4)) =
           *(float *)((longlong)pfVar7 + (*(longlong *)&peVar2->field_0x8 - lVar4)) + *pfVar7;
      *(float *)((longlong)pfVar7 + (longlong)*peVar3 + (4 - lVar4)) =
           *(float *)((longlong)pfVar7 + *(longlong *)&peVar2->field_0x8 + (4 - lVar4)) + pfVar7[1];
      lVar6 = lVar6 + -1;
      pfVar7 = pfVar7 + 4;
    } while (lVar6 != 0);
    for (; param_2 < param_3; param_2 = param_2 + 1) {
LAB_14a8dfb91:
      *(float *)((longlong)*peVar3 + param_2 * 4) =
           *(float *)(lVar4 + param_2 * 4) +
           *(float *)(*(longlong *)&peVar2->field_0x8 + param_2 * 4);
    }
  }
  return;
}

// run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,-1,1,1,-1>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_> @ 14a8dfbd0

void __cdecl
Eigen::internal::unaligned_dense_assignment_loop<0>::
run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_inverse_op<float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
           *param_1,long64 param_2,long64 param_3)

{
  evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *peVar1;
  evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *peVar2;
  ulonglong uVar3;
  longlong lVar4;
  evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *peVar5;
  evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> eVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar16;
  float fVar17;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  float fVar18;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar9 = param_3 - param_2;
  if (param_3 <= param_2) {
    return;
  }
  if (1 < uVar9) {
    lVar4 = *(longlong *)&param_1->m_src->field_0x8;
    peVar5 = param_1->m_dst;
    eVar6 = *peVar5;
    peVar1 = (evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *)((longlong)eVar6 + param_2 * 4);
    peVar2 = (evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *)((longlong)eVar6 + (param_3 + -1) * 4);
    if ((((evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *)(lVar4 + (param_3 + -1) * 4) < peVar1) ||
        (peVar2 < (evaluator<Eigen::Matrix<float,1,_1,1,1,_1>_> *)(lVar4 + param_2 * 4))) &&
       ((peVar5 < peVar1 || (peVar2 < peVar5)))) {
      if (0xf < uVar9) {
        uVar8 = (uint)((longlong)uVar9 >> 0x3f) & 0xf;
        lVar7 = param_2 * 4 + 0x20;
        do {
          auVar13 = *(undefined1 (*) [16])(lVar7 + -0x20 + lVar4);
          param_2 = param_2 + 0x10;
          auVar11 = rcpps(in_XMM2,auVar13);
          fVar10 = auVar11._0_4_;
          fVar16 = auVar11._4_4_;
          fVar17 = auVar11._8_4_;
          fVar18 = auVar11._12_4_;
          auVar11 = *(undefined1 (*) [16])(lVar7 + -0x10 + lVar4);
          auVar12._0_4_ = (fVar10 + fVar10) - fVar10 * fVar10 * auVar13._0_4_;
          auVar12._4_4_ = (fVar16 + fVar16) - fVar16 * fVar16 * auVar13._4_4_;
          auVar12._8_4_ = (fVar17 + fVar17) - fVar17 * fVar17 * auVar13._8_4_;
          auVar12._12_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * auVar13._12_4_;
          *(undefined1 (*) [16])(lVar7 + -0x20 + (longlong)eVar6) = auVar12;
          auVar13 = rcpps(auVar12,auVar11);
          fVar10 = auVar13._0_4_;
          fVar16 = auVar13._4_4_;
          fVar17 = auVar13._8_4_;
          fVar18 = auVar13._12_4_;
          auVar13 = *(undefined1 (*) [16])(lVar7 + lVar4);
          auVar14._0_4_ = (fVar10 + fVar10) - fVar10 * fVar10 * auVar11._0_4_;
          auVar14._4_4_ = (fVar16 + fVar16) - fVar16 * fVar16 * auVar11._4_4_;
          auVar14._8_4_ = (fVar17 + fVar17) - fVar17 * fVar17 * auVar11._8_4_;
          auVar14._12_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * auVar11._12_4_;
          *(undefined1 (*) [16])(lVar7 + -0x10 + (longlong)eVar6) = auVar14;
          auVar11 = rcpps(auVar14,auVar13);
          fVar10 = auVar11._0_4_;
          fVar16 = auVar11._4_4_;
          fVar17 = auVar11._8_4_;
          fVar18 = auVar11._12_4_;
          auVar11 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar4);
          auVar15._0_4_ = (fVar10 + fVar10) - fVar10 * fVar10 * auVar13._0_4_;
          auVar15._4_4_ = (fVar16 + fVar16) - fVar16 * fVar16 * auVar13._4_4_;
          auVar15._8_4_ = (fVar17 + fVar17) - fVar17 * fVar17 * auVar13._8_4_;
          auVar15._12_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * auVar13._12_4_;
          *(undefined1 (*) [16])(lVar7 + (longlong)eVar6) = auVar15;
          auVar13 = rcpps(auVar15,auVar11);
          fVar10 = auVar13._0_4_;
          fVar16 = auVar13._4_4_;
          fVar17 = auVar13._8_4_;
          fVar18 = auVar13._12_4_;
          in_XMM2._0_4_ = (fVar10 + fVar10) - fVar10 * fVar10 * auVar11._0_4_;
          in_XMM2._4_4_ = (fVar16 + fVar16) - fVar16 * fVar16 * auVar11._4_4_;
          in_XMM2._8_4_ = (fVar17 + fVar17) - fVar17 * fVar17 * auVar11._8_4_;
          in_XMM2._12_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * auVar11._12_4_;
          *(undefined1 (*) [16])(lVar7 + 0x10 + (longlong)eVar6) = in_XMM2;
          lVar7 = lVar7 + 0x40;
        } while (param_2 < (longlong)
                           (param_3 - ((ulonglong)((uint)uVar9 + uVar8 & 0xf) - (ulonglong)uVar8)));
        if (((byte)uVar9 & 0xf) < 2) goto LAB_14a8dfd56;
      }
      eVar6 = *peVar5;
      do {
        uVar3 = *(ulonglong *)(lVar4 + param_2 * 4);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar3;
        auVar13 = rcpps(in_XMM2,auVar13);
        fVar10 = auVar13._0_4_;
        fVar16 = auVar13._4_4_;
        fVar17 = auVar13._8_4_;
        fVar18 = auVar13._12_4_;
        in_XMM2._0_8_ =
             CONCAT44((fVar16 + fVar16) - fVar16 * fVar16 * (float)(uVar3 >> 0x20),
                      (fVar10 + fVar10) - fVar10 * fVar10 * (float)uVar3);
        in_XMM2._8_4_ = (fVar17 + fVar17) - fVar17 * fVar17 * 0.0;
        in_XMM2._12_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * 0.0;
        *(undefined8 *)((longlong)eVar6 + param_2 * 4) = in_XMM2._0_8_;
        param_2 = param_2 + 2;
      } while (param_2 < (longlong)
                         (param_3 -
                         (((ulonglong)((uint)uVar9 & 1) ^ (longlong)uVar9 >> 0x3f) -
                         ((longlong)uVar9 >> 0x3f))));
    }
  }
LAB_14a8dfd56:
  fVar10 = __real_3f800000;
  if (param_2 < param_3) {
    peVar1 = param_1->m_dst;
    lVar4 = *(longlong *)&param_1->m_src->field_0x8;
    if (3 < param_3 - param_2) {
      lVar7 = param_2 * 4;
      do {
        *(float *)(lVar7 + (longlong)*peVar1) = fVar10 / *(float *)(lVar4 + param_2 * 4);
        *(float *)((longlong)*peVar1 + 4 + param_2 * 4) =
             fVar10 / *(float *)(lVar4 + 4 + param_2 * 4);
        *(float *)((longlong)*peVar1 + 8 + param_2 * 4) =
             fVar10 / *(float *)(lVar4 + 8 + param_2 * 4);
        *(float *)((longlong)*peVar1 + 0xc + param_2 * 4) =
             fVar10 / *(float *)(lVar4 + 0xc + param_2 * 4);
        param_2 = param_2 + 4;
        lVar7 = lVar7 + 0x10;
      } while (param_2 < param_3 + -3);
      if (param_3 <= param_2) {
        return;
      }
    }
    do {
      *(float *)((longlong)*peVar1 + param_2 * 4) = fVar10 / *(float *)(lVar4 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

// Data @ 14a8dfec0

Data * __thiscall
Eigen::internal::
binary_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,-1,-1,1,-1,-1>_const_,1,Eigen::Stride<0,0>_>_const_,1,-1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,-1,-1,0,-1,-1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>,Eigen::internal::IndexBased,Eigen::internal::IndexBased,float,float>
::Data::Data(Data *this,
            CwiseBinaryOp<Eigen::internal::scalar_sum_op<float,float>,Eigen::Product<Eigen::Block<Eigen::Map<Eigen::Matrix<float,_1,_1,1,_1,_1>_const_,1,Eigen::Stride<0,0>_>_const_,1,_1,1>,Eigen::Transpose<Eigen::Map<Eigen::Matrix<float,_1,_1,0,_1,_1>_const_,0,Eigen::Stride<0,0>_>_const_>,0>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>
            *param_1)

{
  long64 lVar1;
  void *_Dst;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  size_t _Size;
  float fVar8;
  byte local_198 [8];
  const_blas_data_mapper<float,__int64,1> local_190;
  const_blas_data_mapper<float,__int64,0> local_180 [2];
  long64 local_160;
  
  *(undefined8 *)&this->lhsImpl = 0;
  lVar1 = (param_1->m_lhs).m_rhs.m_matrix._padding_;
  *(undefined8 *)&(this->lhsImpl).field_0x8 = 0;
  *(undefined8 *)&(this->lhsImpl).field_0x10 = 0;
  PlainObjectBase<Eigen::Matrix<float,1,-1,1,1,-1>_>::resize
            ((PlainObjectBase<Eigen::Matrix<float,1,_1,1,1,_1>_> *)&(this->lhsImpl).field_0x8,1,
             lVar1);
  _Dst = *(void **)&(this->lhsImpl).field_0x8;
  fVar8 = 0.0;
  *(void **)&this->lhsImpl = _Dst;
  lVar6 = *(longlong *)&(this->lhsImpl).field_0x10;
  uVar7 = 0;
  local_198[0] = 0;
  local_198[1] = 0;
  local_198[2] = 0;
  local_198[3] = 0;
  if (0 < lVar6) {
    local_198[4] = 0;
    local_198[5] = 0;
    local_198[6] = 0;
    local_198[7] = 0;
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 1;
      if (local_198[lVar3] != local_198[lVar3 + 4]) {
        uVar7 = -(uint)(local_198[lVar3] < local_198[lVar3 + 4]) | 1;
        break;
      }
      lVar3 = lVar4;
    } while (lVar4 != 4);
    if (uVar7 == 0) {
      _Size = lVar6 * 4;
    }
    else {
      _Size = lVar6 << 2;
    }
    memset(_Dst,0,_Size);
  }
  if ((param_1->m_lhs).m_rhs.m_matrix._padding_ == 1) {
    lVar6 = (param_1->m_lhs).m_rhs.m_matrix._padding_;
    pfVar5 = *(float **)&(param_1->m_lhs).m_lhs;
    pfVar2 = (float *)(param_1->m_lhs).m_rhs.m_matrix._padding_;
    if ((lVar6 != 0) && (fVar8 = *pfVar2 * *pfVar5, 1 < lVar6)) {
      lVar6 = lVar6 + -1;
      do {
        pfVar2 = pfVar2 + (param_1->m_lhs).m_rhs.m_matrix._padding_;
        pfVar5 = pfVar5 + 1;
        fVar8 = fVar8 + *pfVar2 * *pfVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    pfVar5 = *(float **)&(this->lhsImpl).field_0x8;
    *pfVar5 = fVar8 + *pfVar5;
  }
  else {
    local_160 = (param_1->m_lhs).m_rhs.m_matrix._padding_;
    local_180[0]._0_8_ = (param_1->m_lhs).m_rhs.m_matrix._padding_;
    local_180[0]._8_8_ = (param_1->m_lhs).m_rhs.m_matrix._padding_;
    local_190._0_8_ = *(undefined8 *)&(param_1->m_lhs).m_lhs;
    local_190._8_8_ = 1;
    general_matrix_vector_product<__int64,float,Eigen::internal::const_blas_data_mapper<float,__int64,0>,0,0,float,Eigen::internal::const_blas_data_mapper<float,__int64,1>,0,0>
    ::run(local_180[0]._8_8_,local_160,local_180,&local_190,*(float **)&(this->lhsImpl).field_0x8,1,
          __real_3f800000);
  }
  *(longlong *)&this->rhsImpl = (param_1->m_rhs)._padding_;
  *(longlong *)&(this->rhsImpl).field_0x10 = (param_1->m_rhs)._padding_;
  return this;
}

// ~TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::__l7::<lambda_1>,1,1> @ 14a8e2b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::__l7::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::PoseSearch::FInteractionIsland::LogTickDependencies_::__l7::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::`7'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
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

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e551c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPoseSearchFeatureChannel *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e552c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPoseSearchFeatureChannel *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e553c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Curve::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Curve::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Curve *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Curve *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e554c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Curve::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Curve::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Curve *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Curve *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e555c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Distance::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Distance::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Distance *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Distance *)
                      &this[-1].OriginBone.CachedCompactPoseIndex,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e556c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Distance::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Distance::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Distance *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Distance *)&this[-1].OriginBone.BoneName.Number,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e557c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UPoseSearchFeatureChannel_FilterCrashingLegs::`vector deleting destructor'`adjustor{40}'
   (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_FilterCrashingLegs *)&this[-1].RightFoot,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e558c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UPoseSearchFeatureChannel_FilterCrashingLegs::`vector deleting destructor'`adjustor{48}'
   (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_FilterCrashingLegs *)&this[-1].LeftFoot.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e559c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Group::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Group::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Group *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Group *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e55ac

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Group::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Group::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Group *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Group *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e55bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_GroupBase::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_GroupBase::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_GroupBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_GroupBase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e55cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_GroupBase::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_GroupBase::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_GroupBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_GroupBase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e55dc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Heading::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Heading::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Heading *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Heading *)&this[-1].OriginBone.BoneName.Number,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e55ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Heading::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Heading::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Heading *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Heading *)&this[-1].SampleRole.Number,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e55fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Padding::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Padding::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Padding *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Padding *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e560c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Padding::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Padding::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Padding *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Padding *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e561c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_PermutationTime::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_PermutationTime::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_PermutationTime *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_PermutationTime *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e562c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_PermutationTime::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_PermutationTime::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_PermutationTime *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_PermutationTime *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e563c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Phase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Phase::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Phase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Phase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e564c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Phase::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Phase::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Phase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Phase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e565c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Pose::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Pose::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Pose *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Pose *)&this[-1].SchemaBoneIdx,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e566c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Pose::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Pose::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Pose *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Pose *)&this[-1].SampledBones.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e567c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Position::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Position::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Position *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Position *)
                      &this[-1].OriginBone.CachedCompactPoseIndex,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e568c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Position::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Position::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Position *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Position *)&this[-1].OriginBone.BoneName.Number,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e569c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_SamplingTime::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_SamplingTime::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_SamplingTime *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_SamplingTime *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e56ac

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_SamplingTime::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_SamplingTime::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_SamplingTime *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_SamplingTime *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e56bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_TimeToEvent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_TimeToEvent::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_TimeToEvent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_TimeToEvent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e56cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_TimeToEvent::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_TimeToEvent::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_TimeToEvent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_TimeToEvent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e56dc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Trajectory::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Trajectory::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Trajectory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Trajectory *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e56ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Trajectory::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Trajectory::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Trajectory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Trajectory *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14a8e56fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Velocity::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Velocity::_vector_deleting_destructor__adjustor_40__
          (UPoseSearchFeatureChannel_Velocity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Velocity *)&this[-1].OriginBone.BoneName.Number,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14a8e570c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseSearchFeatureChannel_Velocity::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseSearchFeatureChannel_Velocity::_vector_deleting_destructor__adjustor_48__
          (UPoseSearchFeatureChannel_Velocity *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseSearchFeatureChannel_Velocity *)&this[-1].SampleRole.Number,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a8e5720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::__l7::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::`7'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8e5770

void * __thiscall
UE::PoseSearch::FAIPComponentSpacePoseProvider::_scalar_deleting_destructor_
          (FAIPComponentSpacePoseProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComponentSpacePoseProvider_PoseSearch_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8e57b0

void * __thiscall
UE::PoseSearch::FComponentSpacePoseProvider::_scalar_deleting_destructor_
          (FComponentSpacePoseProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComponentSpacePoseProvider_PoseSearch_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8e57f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::PoseSearch::FInteractionIsland::FPostTickFunction::_scalar_deleting_destructor_
          (FPostTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8e5830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::PoseSearch::FInteractionIsland::FPreTickFunction::_scalar_deleting_destructor_
          (FPreTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8e5870

void * __thiscall
UPoseSearchEventLibrary::_scalar_deleting_destructor_(UPoseSearchEventLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPoseSearchEventLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a8e58d0

void * __thiscall
UPoseSearchFeatureChannel::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5950

void * __thiscall
UPoseSearchFeatureChannel_Curve::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Curve *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e59d0

void * __thiscall
UPoseSearchFeatureChannel_Distance::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Distance *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5a50

void * __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5ad0

void * __thiscall
UPoseSearchFeatureChannel_Group::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Group *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  pFVar1 = (this->SubChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5b80

void * __thiscall
UPoseSearchFeatureChannel_GroupBase::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_GroupBase *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5c00

void * __thiscall
UPoseSearchFeatureChannel_Heading::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Heading *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5c80

void * __thiscall
UPoseSearchFeatureChannel_Padding::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Padding *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5d00

void * __thiscall
UPoseSearchFeatureChannel_PermutationTime::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_PermutationTime *this,uint param_1)

{
  *(undefined ***)this = &UPoseSearchFeatureChannel::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &___7IPoseSearchFilter__6B_;
  *(undefined ***)&this->field_0x28 = &___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5d80

void * __thiscall
UPoseSearchFeatureChannel_Phase::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Phase *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5e00

void * __thiscall
UPoseSearchFeatureChannel_Pose::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Pose *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  pFVar1 = (this->SubChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SchemaBoneIdx).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SampledBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5ed0

void * __thiscall
UPoseSearchFeatureChannel_Position::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Position *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5f50

void * __thiscall
UPoseSearchFeatureChannel_SamplingTime::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_SamplingTime *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e5fd0

void * __thiscall
UPoseSearchFeatureChannel_TimeToEvent::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_TimeToEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e6050

void * __thiscall
UPoseSearchFeatureChannel_Trajectory::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Trajectory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  pFVar1 = (this->SubChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e6110

void * __thiscall
UPoseSearchFeatureChannel_Velocity::_scalar_deleting_destructor_
          (UPoseSearchFeatureChannel_Velocity *this,uint param_1)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
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

// `scalar_deleting_destructor' @ 14a8e6190

void * __thiscall
UPoseSearchHistoryCollectorAnimNodeLibrary::_scalar_deleting_destructor_
          (UPoseSearchHistoryCollectorAnimNodeLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UPoseSearchHistoryCollectorAnimNodeLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14a8e61f0

void * __thiscall
UPoseSearchInteractionAsset::_scalar_deleting_destructor_
          (UPoseSearchInteractionAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPoseSearchInteractionAsset__6B_;
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMultiAnimAsset::~UMultiAnimAsset((UMultiAnimAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// ComputeThighsSideAndForward @ 14a8ee780

void __cdecl
ComputeThighsSideAndForward
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double local_58;
  
  dVar5 = __real_3ff0000000000000;
  uVar6 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  uVar7 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  local_58 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar4 = (double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6;
  if (dVar4 == __real_3ff0000000000000) {
    if (local_58 != 0.0) {
LAB_14a8ee832:
      local_58 = 0.0;
    }
  }
  else {
    if (__real_3f1a36e2e0000000 <= dVar4) {
      uVar6 = (double)uVar6 * (__real_3ff0000000000000 / SQRT(dVar4));
      uVar7 = (double)uVar7 * (__real_3ff0000000000000 / SQRT(dVar4));
      goto LAB_14a8ee832;
    }
    local_58 = UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::LeftVector.field0_0x0._8_8_;
  }
  auVar2._8_4_ = (int)uVar7;
  auVar2._0_8_ = uVar6;
  auVar2._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined1 (*) [16])&param_3->field0_0x0 = auVar2;
  (param_3->field0_0x0)._s_0.Z = local_58;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  uVar6 = dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
          local_58 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  uVar7 = local_58 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
          dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  local_58 = dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
             dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar4 = (double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6;
  if (dVar4 == dVar5) {
    if (local_58 == 0.0) goto LAB_14a8ee913;
  }
  else {
    if (dVar4 < __real_3f1a36e2e0000000) {
      local_58 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      uVar7 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      goto LAB_14a8ee913;
    }
    dVar5 = dVar5 / SQRT(dVar4);
    uVar6 = (double)uVar6 * dVar5;
    uVar7 = (double)uVar7 * dVar5;
  }
  local_58 = 0.0;
LAB_14a8ee913:
  auVar3._8_4_ = (int)uVar7;
  auVar3._0_8_ = uVar6;
  auVar3._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined1 (*) [16])&param_4->field0_0x0 = auVar3;
  (param_4->field0_0x0)._s_0.Z = local_58;
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchEvent @ 14a8f3e70

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchEvent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel @ 14a8f3e80

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Curve @ 14a8f3e90

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Curve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Distance @ 14a8f3ea0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Distance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_FilterCrashingLegs @ 14a8f3eb0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_FilterCrashingLegs(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Group @ 14a8f3ec0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Group(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Heading @ 14a8f3ed0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Heading(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Padding @ 14a8f3ee0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Padding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_PermutationTime @ 14a8f3ef0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_PermutationTime(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Phase @ 14a8f3f00

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Phase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Pose @ 14a8f3f10

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Pose(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Position @ 14a8f3f20

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Position(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_SamplingTime @ 14a8f3f30

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_SamplingTime(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_TimeToEvent @ 14a8f3f40

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_TimeToEvent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Trajectory @ 14a8f3f50

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Trajectory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Velocity @ 14a8f3f60

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Velocity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchHistory @ 14a8f3f70

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchHistory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchHistoryAttribute @ 14a8f3f80

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchHistoryAttribute(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchHistoryCollectorAnimNodeLibrary @ 14a8f3f90

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchHistoryCollectorAnimNodeLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseSearchInteractionAsset @ 14a8f3fa0

void __cdecl EmptyLinkFunctionForGeneratedCodePoseSearchInteractionAsset(void)

{
  return;
}

// GetTypeHash @ 14a8ff8b0

uint __cdecl GetTypeHash(FPoseHistoryAnimationAttribute *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((uint)((ulonglong)param_1->PoseHistory >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->PoseHistory >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  uVar3 = ((param_1->ScopeObject).WeakPtr.ObjectSerialNumber ^
          (param_1->ScopeObject).WeakPtr.ObjectIndex) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar3) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar2 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// Z_Construct_UClass_UPoseSearchEventLibrary_NoRegister @ 14a90a6c0

UClass * __cdecl Z_Construct_UClass_UPoseSearchEventLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchEventLibrary",
               &Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton,
               UPoseSearchEventLibrary::StaticRegisterNativesUPoseSearchEventLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchEventLibrary>
               ,InternalVTableHelperCtorCaller<UPoseSearchEventLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Curve_NoRegister @ 14a90a780

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Curve_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Curve",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton,
               UPoseSearchFeatureChannel_Curve::StaticRegisterNativesUPoseSearchFeatureChannel_Curve
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_Curve>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Curve>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Distance_NoRegister @ 14a90a840

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Distance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Distance",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton,
               UPoseSearchFeatureChannel_Distance::
               StaticRegisterNativesUPoseSearchFeatureChannel_Distance,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Distance>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Distance>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_NoRegister @ 14a90a900

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_FilterCrashingLegs",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.
                InnerSingleton,
               UPoseSearchFeatureChannel_FilterCrashingLegs::
               StaticRegisterNativesUPoseSearchFeatureChannel_FilterCrashingLegs,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_FilterCrashingLegs>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_FilterCrashingLegs>,
               local_res8,UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase_NoRegister @ 14a90a9c0

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_GroupBase",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton,
               UPoseSearchFeatureChannel_GroupBase::
               StaticRegisterNativesUPoseSearchFeatureChannel_GroupBase,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_GroupBase>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_GroupBase>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Group_NoRegister @ 14a90aa80

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Group_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Group",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton,
               UPoseSearchFeatureChannel_Group::StaticRegisterNativesUPoseSearchFeatureChannel_Group
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_Group>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Group>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Group.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_NoRegister @ 14a90ab40

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Heading",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton,
               UPoseSearchFeatureChannel_Heading::
               StaticRegisterNativesUPoseSearchFeatureChannel_Heading,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Heading>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Heading>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Padding_NoRegister @ 14a90ac00

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Padding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Padding",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton,
               UPoseSearchFeatureChannel_Padding::
               StaticRegisterNativesUPoseSearchFeatureChannel_Padding,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Padding>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Padding>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_NoRegister @ 14a90acc0

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_PermutationTime",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton,
               UPoseSearchFeatureChannel_PermutationTime::
               StaticRegisterNativesUPoseSearchFeatureChannel_PermutationTime,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_PermutationTime>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_PermutationTime>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_NoRegister @ 14a90ad80

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Phase",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton,
               UPoseSearchFeatureChannel_Phase::StaticRegisterNativesUPoseSearchFeatureChannel_Phase
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_Phase>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Phase>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister @ 14a90ae40

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Pose",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton,
               UPoseSearchFeatureChannel_Pose::StaticRegisterNativesUPoseSearchFeatureChannel_Pose,
               0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_Pose>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Pose>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Position_NoRegister @ 14a90af00

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Position_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Position",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton,
               UPoseSearchFeatureChannel_Position::
               StaticRegisterNativesUPoseSearchFeatureChannel_Position,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Position>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Position>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_NoRegister @ 14a90afc0

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_SamplingTime",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton,
               UPoseSearchFeatureChannel_SamplingTime::
               StaticRegisterNativesUPoseSearchFeatureChannel_SamplingTime,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_SamplingTime>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_SamplingTime>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_TimeToEvent_NoRegister @ 14a90b080

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_TimeToEvent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_TimeToEvent",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton,
               UPoseSearchFeatureChannel_TimeToEvent::
               StaticRegisterNativesUPoseSearchFeatureChannel_TimeToEvent,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_TimeToEvent>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_TimeToEvent>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister @ 14a90b140

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Trajectory",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton,
               UPoseSearchFeatureChannel_Trajectory::
               StaticRegisterNativesUPoseSearchFeatureChannel_Trajectory,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Trajectory>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Trajectory>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_NoRegister @ 14a90b200

UClass * __cdecl Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Velocity",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton,
               UPoseSearchFeatureChannel_Velocity::
               StaticRegisterNativesUPoseSearchFeatureChannel_Velocity,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Velocity>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Velocity>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_NoRegister @ 14a90b2c0

UClass * __cdecl Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchHistoryCollectorAnimNodeLibrary",
               &Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton
               ,UPoseSearchHistoryCollectorAnimNodeLibrary::
                StaticRegisterNativesUPoseSearchHistoryCollectorAnimNodeLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchHistoryCollectorAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchHistoryCollectorAnimNodeLibrary>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton;
}

// Z_Construct_UClass_UPoseSearchInteractionAsset_NoRegister @ 14a90b380

UClass * __cdecl Z_Construct_UClass_UPoseSearchInteractionAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionAsset",
               &Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton,
               UPoseSearchInteractionAsset::StaticRegisterNativesUPoseSearchInteractionAsset,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchInteractionAsset>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionAsset>,local_res8,
               UMultiAnimAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton;
}

// Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags @ 14a90b440

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags(void)

{
  if (Z_Registration_Info_UEnum_EPoseSearchBoneFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPoseSearchBoneFlags.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPoseSearchBoneFlags.InnerSingleton;
}

// Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags @ 14a90b480

UEnum * __cdecl Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags(void)

{
  if (Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.InnerSingleton,
               &Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPoseHistoryAnimationAttribute @ 14a90b4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseHistoryAnimationAttribute(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseHistoryAnimationAttribute.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseHistoryAnimationAttribute.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseHistoryAnimationAttribute_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseHistoryAnimationAttribute.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseHistoryAnimationAttribute.InnerSingleton;
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

// noalias @ 14a90be20

NoAlias<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::MatrixBase>
__thiscall
Eigen::MatrixBase<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>::noalias
          (MatrixBase<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_> *this)

{
  Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_> *in_RDX;
  
  in_RDX->_padding_ = (longlong)this;
  return (NoAlias<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>,Eigen::MatrixBase>
          )in_RDX;
}

// resize @ 14a90be30

void __thiscall
Eigen::PlainObjectBase<Eigen::Matrix<float,1,-1,1,1,-1>_>::resize
          (PlainObjectBase<Eigen::Matrix<float,1,_1,1,1,_1>_> *this,long64 param_1,long64 param_2)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  ulonglong uVar3;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
     SUB168((auVar1 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(param_2),0) < param_1)) {
    ::operator_new(0xffffffffffffffff);
  }
  uVar3 = param_1 * param_2;
  if (uVar3 - (this->m_storage).m_cols != 0) {
    FMemory_Free((this->m_storage).m_data);
    if ((longlong)uVar3 < 1) {
      (this->m_storage).m_data = (float *)0x0;
    }
    else {
      if (0x3fffffffffffffff < uVar3) {
        ::operator_new(0xffffffffffffffff);
      }
      pfVar2 = FMemory_Malloc(uVar3 * 4,0x10);
      if ((pfVar2 == (float *)0x0) && (uVar3 * 4 != 0)) {
        ::operator_new(0xffffffffffffffff);
      }
      (this->m_storage).m_data = pfVar2;
    }
  }
  (this->m_storage).m_cols = param_2;
  return;
}

// run @ 14a90bf10

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
::run(generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
      *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  *peVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = param_1->m_dstExpr->_padding_;
  uVar5 = param_1->m_dstExpr->_padding_;
  uVar8 = uVar5;
  if (((uVar7 & 3) == 0) &&
     (uVar7 = (ulonglong)(-(int)(uVar7 >> 2) & 3), (longlong)uVar7 < (longlong)uVar5)) {
    uVar8 = uVar7;
  }
  lVar1 = uVar8 + ((longlong)
                   ((uVar5 - uVar8) + (ulonglong)((uint)((longlong)(uVar5 - uVar8) >> 0x3f) & 3)) >>
                  2) * 4;
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,0,uVar8);
  if ((longlong)uVar8 < lVar1) {
    lVar9 = uVar8 * 4;
    do {
      peVar6 = param_1->m_src;
      pfVar2 = (float *)(*(longlong *)&peVar6->field_0x30 + uVar8 * 4);
      pfVar3 = (float *)(*(longlong *)&peVar6->field_0x18 + uVar8 * 4);
      pfVar4 = (float *)(*(longlong *)&peVar6->field_0x48 + lVar9);
      lVar9 = lVar9 + 0x10;
      fVar10 = (*pfVar3 - *pfVar2) * *pfVar4;
      fVar11 = (pfVar3[1] - pfVar2[1]) * pfVar4[1];
      fVar12 = (pfVar3[2] - pfVar2[2]) * pfVar4[2];
      fVar13 = (pfVar3[3] - pfVar2[3]) * pfVar4[3];
      pfVar2 = (float *)(*(longlong *)param_1->m_dst + uVar8 * 4);
      *pfVar2 = fVar10 * fVar10;
      pfVar2[1] = fVar11 * fVar11;
      pfVar2[2] = fVar12 * fVar12;
      pfVar2[3] = fVar13 * fVar13;
      uVar8 = uVar8 + 4;
    } while ((longlong)uVar8 < lVar1);
  }
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,lVar1,uVar5);
  return;
}

// run @ 14a90bff0

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
::run(generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
      *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar12 = param_1->m_dstExpr->_padding_;
  uVar5 = param_1->m_dstExpr->_padding_;
  uVar13 = uVar5;
  if (((uVar12 & 3) == 0) &&
     (uVar12 = (ulonglong)(-(int)(uVar12 >> 2) & 3), (longlong)uVar12 < (longlong)uVar5)) {
    uVar13 = uVar12;
  }
  lVar1 = uVar13 + ((longlong)
                    ((uVar5 - uVar13) + (ulonglong)((uint)((longlong)(uVar5 - uVar13) >> 0x3f) & 3))
                   >> 2) * 4;
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,0,uVar13);
  if ((longlong)uVar13 < lVar1) {
    lVar14 = uVar13 * 4;
    do {
      pfVar2 = (float *)(*(longlong *)&param_1->m_src->field_0x8 + uVar13 * 4);
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      pfVar3 = (float *)(*(longlong *)&param_1->m_src->field_0x20 + lVar14);
      fVar9 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar11 = pfVar3[3];
      lVar14 = lVar14 + 0x10;
      pfVar4 = (float *)(*(longlong *)param_1->m_dst + uVar13 * 4);
      *pfVar4 = *pfVar2 - *pfVar3;
      pfVar4[1] = fVar6 - fVar9;
      pfVar4[2] = fVar7 - fVar10;
      pfVar4[3] = fVar8 - fVar11;
      uVar13 = uVar13 + 4;
    } while ((longlong)uVar13 < lVar1);
  }
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,lVar1,uVar5);
  return;
}

// run @ 14a90c0c0

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
::run(generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
      *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar12 = param_1->m_dstExpr->_padding_;
  uVar5 = param_1->m_dstExpr->_padding_;
  uVar13 = uVar5;
  if (((uVar12 & 3) == 0) &&
     (uVar12 = (ulonglong)(-(int)(uVar12 >> 2) & 3), (longlong)uVar12 < (longlong)uVar5)) {
    uVar13 = uVar12;
  }
  lVar1 = uVar13 + ((longlong)
                    ((uVar5 - uVar13) + (ulonglong)((uint)((longlong)(uVar5 - uVar13) >> 0x3f) & 3))
                   >> 2) * 4;
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,0,uVar13);
  if ((longlong)uVar13 < lVar1) {
    lVar14 = uVar13 * 4;
    do {
      lVar14 = lVar14 + 0x10;
      pfVar2 = (float *)(*(longlong *)&param_1->m_src->field_0x8 + uVar13 * 4);
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      pfVar4 = (float *)(*(longlong *)&param_1->m_src->field_0x20 + -0x10 + lVar14);
      fVar9 = pfVar4[1];
      fVar10 = pfVar4[2];
      fVar11 = pfVar4[3];
      pfVar3 = (float *)(*(longlong *)param_1->m_dst + uVar13 * 4);
      *pfVar3 = *pfVar2 * *pfVar4;
      pfVar3[1] = fVar6 * fVar9;
      pfVar3[2] = fVar7 * fVar10;
      pfVar3[3] = fVar8 * fVar11;
      uVar13 = uVar13 + 4;
    } while ((longlong)uVar13 < lVar1);
  }
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_,Eigen::ArrayWrapper<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>_const_,1,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,lVar1,uVar5);
  return;
}

// run @ 14a90c190

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,-1,1,1,-1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,-1,1,1,-1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
::run(generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
      *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar12 = param_1->m_dstExpr->_padding_;
  uVar5 = param_1->m_dstExpr->_padding_;
  uVar13 = uVar5;
  if (((uVar12 & 3) == 0) &&
     (uVar12 = (ulonglong)(-(int)(uVar12 >> 2) & 3), (longlong)uVar12 < (longlong)uVar5)) {
    uVar13 = uVar12;
  }
  lVar1 = uVar13 + ((longlong)
                    ((uVar5 - uVar13) + (ulonglong)((uint)((longlong)(uVar5 - uVar13) >> 0x3f) & 3))
                   >> 2) * 4;
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,0,uVar13);
  if ((longlong)uVar13 < lVar1) {
    lVar14 = uVar13 * 4;
    do {
      lVar14 = lVar14 + 0x10;
      pfVar2 = (float *)(*(longlong *)&param_1->m_src->field_0x8 + uVar13 * 4);
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      pfVar4 = (float *)(*(longlong *)&param_1->m_src->field_0x10 + -0x10 + lVar14);
      fVar9 = pfVar4[1];
      fVar10 = pfVar4[2];
      fVar11 = pfVar4[3];
      pfVar3 = (float *)(*(longlong *)param_1->m_dst + uVar13 * 4);
      *pfVar3 = *pfVar2 * *pfVar4;
      pfVar3[1] = fVar6 * fVar9;
      pfVar3[2] = fVar7 * fVar10;
      pfVar3[3] = fVar8 * fVar11;
      uVar13 = uVar13 + 4;
    } while ((longlong)uVar13 < lVar1);
  }
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_,Eigen::ArrayWrapper<Eigen::Matrix<float,1,_1,1,1,_1>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,lVar1,uVar5);
  return;
}

// run @ 14a90c260

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,-1,1,1,-1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,-1,1,1,-1>_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
::run(generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>,Eigen::internal::assign_op<float,float>,0>
      *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1->m_dstExpr->_padding_;
  uVar4 = param_1->m_dstExpr->_padding_;
  uVar6 = uVar4;
  if (((uVar5 & 3) == 0) &&
     (uVar5 = (ulonglong)(-(int)(uVar5 >> 2) & 3), (longlong)uVar5 < (longlong)uVar4)) {
    uVar6 = uVar5;
  }
  lVar1 = uVar6 + ((longlong)
                   ((uVar4 - uVar6) + (ulonglong)((uint)((longlong)(uVar4 - uVar6) >> 0x3f) & 3)) >>
                  2) * 4;
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,0,uVar6);
  for (; (longlong)uVar6 < lVar1; uVar6 = uVar6 + 4) {
    fVar3 = (param_1->m_src->m_functor).m_other;
    pfVar2 = (float *)(*(longlong *)param_1->m_dst + uVar6 * 4);
    *pfVar2 = fVar3;
    pfVar2[1] = fVar3;
    pfVar2[2] = fVar3;
    pfVar2[3] = fVar3;
  }
  unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,1,_1,1,1,_1>,1,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,1,_1,1,1,_1>_>_>,Eigen::internal::assign_op<float,float>,0>_>
            (param_1,lVar1,uVar4);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimPoseHistoryDebugDrawPose'' @ 150421870

void __cdecl
UE::PoseSearch::_dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawPose__(void)

{
  CVarAnimPoseHistoryDebugDrawPose._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimPoseHistoryDebugDrawPose);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimPoseHistoryDebugDrawTrajectory'' @ 150421890

void __cdecl
UE::PoseSearch::_dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawTrajectory__(void)

{
  CVarAnimPoseHistoryDebugDrawTrajectory._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimPoseHistoryDebugDrawTrajectory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples'' @ 1504218b0

void __cdecl
UE::PoseSearch::
_dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples__(void)

{
  CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples'' @ 1504218d0

void __cdecl
UE::PoseSearch::
_dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples__
          (void)

{
  CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimPoseHistoryDebugDrawTrajectoryThickness'' @ 1504218f0

void __cdecl
UE::PoseSearch::_dynamic_atexit_destructor_for__CVarAnimPoseHistoryDebugDrawTrajectoryThickness__
          (void)

{
  CVarAnimPoseHistoryDebugDrawTrajectoryThickness._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimPoseHistoryDebugDrawTrajectoryThickness);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPoseSearchInteractionDiagnoseTickDependencies'' @ 150421910

void __cdecl
UE::PoseSearch::_dynamic_atexit_destructor_for__CVarPoseSearchInteractionDiagnoseTickDependencies__
          (void)

{
  CVarPoseSearchInteractionDiagnoseTickDependencies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPoseSearchInteractionDiagnoseTickDependencies);
  return;
}

// `dynamic_atexit_destructor_for_'LogPoseSearch'' @ 150421930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPoseSearch__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPoseSearch);
  return;
}

