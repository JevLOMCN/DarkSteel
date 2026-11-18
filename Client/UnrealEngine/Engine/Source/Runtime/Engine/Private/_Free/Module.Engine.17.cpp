// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 438

// ActiveSoundTraceDelegate'' @ 1410d4dd0

void __cdecl `dynamic_initializer_for_'FActiveSound::ActiveSoundTraceDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FActiveSound::ActiveSoundTraceDelegate__);
  return;
}

// TraceToActiveSoundMap'' @ 1410d4df0

void __cdecl `dynamic_initializer_for_'FActiveSound::TraceToActiveSoundMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FActiveSound::TraceToActiveSoundMap__);
  return;
}

// `dynamic_initializer_for_'CVarAllowTexture2DArrayAssetCreation'' @ 1410d4e10

void __cdecl _dynamic_initializer_for__CVarAllowTexture2DArrayAssetCreation__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowTexture2DArrayAssetCreation,L"r.AllowTexture2DArrayCreation",local_res8,
             L"Enable UTexture2DArray assets",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowTexture2DArrayAssetCreation__);
  return;
}

// `dynamic_initializer_for_'CVarAudioLinkSpatializeAllSounds'' @ 1410d4e60

void __cdecl _dynamic_initializer_for__CVarAudioLinkSpatializeAllSounds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioLinkSpatializeAllSounds,L"au.AudioLink.SpatializeAllSounds",
             &bAudioLinkSpatializeAllSoundsCVar,L"0 (off), !=0 (on)",0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioLinkSpatializeAllSounds__);
  return;
}

// `dynamic_initializer_for_'CVarAudioOcclusionEnabled'' @ 1410d4eb0

void __cdecl _dynamic_initializer_for__CVarAudioOcclusionEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioOcclusionEnabled,L"au.DisableOcclusion",&AudioOcclusionDisabledCvar,
             L"Disables (1) or enables (0) audio occlusion.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioOcclusionEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarDecrementSlotIndexOnStarted'' @ 1410d4f00

void __cdecl _dynamic_initializer_for__CVarDecrementSlotIndexOnStarted__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDecrementSlotIndexOnStarted,L"au.Quartz.DecrementSlotIndexOnStarted",
             &DecrementSlotIndexOnStartedCvar,
             L"Defaults to 1 to enable the delegate leak fix.  Set to 0 to revert to pre-fix behavior.\n1: New Behavior, 0: Old Behavior"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDecrementSlotIndexOnStarted__);
  return;
}

// `dynamic_initializer_for_'CVarEnabled'' @ 1410d4f50

void __cdecl
LevelStreaming::AsyncRegisterLevelContext::_dynamic_initializer_for__CVarEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnabled,L"LevelStreaming.AsyncRegisterLevelContext.Enabled",&bEnabled,
             L"Whether to allow level streaming to add primitives to the scene asynchronously while components are being incrementally registered."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarFocusDependsOnSpatialization'' @ 1410d4fa0

void __cdecl _dynamic_initializer_for__CVarFocusDependsOnSpatialization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFocusDependsOnSpatialization,L"au.FocusData.FocusDependsOnSpatialization",
             &FocusDependsOnSpatializationCVar,
             L"When set to 1, focus factor on attenuation settings will not be enabled if spatialization is not enabled on the attenuation setting.\n0: Focus and Spatialization are orthogonal, 1: Focus will be disabled if spatialization is not also enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFocusDependsOnSpatialization__);
  return;
}

// `dynamic_initializer_for_'CVarGatherInteriorDataFromAudioVolumes'' @ 1410d4ff0

void __cdecl _dynamic_initializer_for__CVarGatherInteriorDataFromAudioVolumes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGatherInteriorDataFromAudioVolumes,L"au.InteriorData.UseAudioVolumes",
             &GatherInteriorDataFromAudioVolumesCVar,
             L"When set to 1, allows gathering of interior data from audio volumes (Legacy).\n0: Disabled, 1: Enabled (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGatherInteriorDataFromAudioVolumes__);
  return;
}

// `dynamic_initializer_for_'CVarGatherInteriorDataFromIActiveSoundUpdate'' @ 1410d5040

void __cdecl _dynamic_initializer_for__CVarGatherInteriorDataFromIActiveSoundUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGatherInteriorDataFromIActiveSoundUpdate,L"au.InteriorData.UseIActiveSoundUpdate",
             &GatherInteriorDataFromIActiveSoundUpdateCVar,
             L"When set to 1, allows gathering of interior data from subsystems that implement the IActiveSoundUpdate interface.\n0: Disabled, 1: Enabled (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGatherInteriorDataFromIActiveSoundUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarIncludeModulationInConcurrencyEvaluation'' @ 1410d5090

void __cdecl _dynamic_initializer_for__CVarIncludeModulationInConcurrencyEvaluation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIncludeModulationInConcurrencyEvaluation,L"au.Concurrency.IncludeVolumeModulation"
             ,&IncludeModulationInConcurrencyEvaluationCVar,
             L"0: Ignore Audio Modulation Volume when evaluating concurrency (Default), 1: Apply Modulation Destination to logical volume for one-shots only, 2: Apply Modulation Destination to logical volume on all sounds."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIncludeModulationInConcurrencyEvaluation__);
  return;
}

// `dynamic_initializer_for_'CVarInitializeFocusFactorOnFirstUpdateCVar'' @ 1410d50e0

void __cdecl _dynamic_initializer_for__CVarInitializeFocusFactorOnFirstUpdateCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInitializeFocusFactorOnFirstUpdateCVar,
             L"au.FocusData.InitializeFocusFactorOnFirstUpdate",
             &InitializeFocusFactorOnFirstUpdateCVar,
             L"When set to 1, focus factor will be initialized on first update to the proper value, instead of interpolating from 0 to the proper value.\n0: Disabled, 1: Enabled (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarInitializeFocusFactorOnFirstUpdateCVar__);
  return;
}

// `dynamic_initializer_for_'CVarOverrideSeekStartTime'' @ 1410d5130

void __cdecl _dynamic_initializer_for__CVarOverrideSeekStartTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOverrideSeekStartTime,L"au.Virtualization.OverrideSeekStartTimeMode",
             &OverrideSeekStartTimeCVar,
             L"Optionally force all sounds with virtualization mode set to \'Seek Start Time\' to another Virtualization Mode.\n0: Leave as-is at \'Seek Start Time\', 1: Set to \'Disabled\', 2: Set to \'Play When Silent\', 3: Set to \'Restart\'"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOverrideSeekStartTime__);
  return;
}

// `dynamic_initializer_for_'CVarPrimitiveBatchSize'' @ 1410d5180

void __cdecl
LevelStreaming::AsyncRegisterLevelContext::_dynamic_initializer_for__CVarPrimitiveBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrimitiveBatchSize,L"LevelStreaming.AsyncRegisterLevelContext.PrimitiveBatchSize",
             &PrimitiveBatchSize,
             L"The number of primitives before starting adding them to the scene during the incremental component registration.\nUsed when LevelStreaming.AsyncRegisterLevelContext.Enabled is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPrimitiveBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarSupportsTexture2DArrayStreaming'' @ 1410d51d0

void __cdecl _dynamic_initializer_for__CVarSupportsTexture2DArrayStreaming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSupportsTexture2DArrayStreaming,L"r.SupportsTexture2DArrayStreaming",
             &GSupportsTexture2DArrayStreaming,L"Enable Support of Texture2DArray Streaming\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarSupportsTexture2DArrayStreaming__);
  return;
}

// `dynamic_initializer_for_'CVarUseAsyncOcclusionTraces'' @ 1410d5220

void __cdecl _dynamic_initializer_for__CVarUseAsyncOcclusionTraces__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseAsyncOcclusionTraces,L"au.UseAsyncOcclusionTraces",
             &bUseAsyncOcclusionTracesCVar,
             L"0: Run sound occlusion traces from the audio device update, 1: Run sound occlusion traces through the gt async trace api."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseAsyncOcclusionTraces__);
  return;
}

// `dynamic_initializer_for_'LogAudioQuartz'' @ 1410d5270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioQuartz__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAudioQuartz,L"LogAudioQuartz",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioQuartz__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1410d52b0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AttributeCurve_h__Script_Engine_4108491044'' @ 1410d52d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AttributeCurve_h__Script_Engine_4108491044__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AttributeCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h__Script_Engine_482855084'' @ 1410d5310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h__Script_Engine_482855084__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h__Script_Engine_3156435059'' @ 1410d5360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h__Script_Engine_3156435059__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h__Script_Engine_84980414'' @ 1410d53a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h__Script_Engine_84980414__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h__Script_Engine_2182775466'' @ 1410d53f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h__Script_Engine_2182775466__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureStreamingTypes_h__Script_Engine_1743637205'' @ 1410d5430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureStreamingTypes_h__Script_Engine_1743637205__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureStreamingTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h__Script_Engine_917335273'' @ 1410d5470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h__Script_Engine_917335273__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h__Script_Engine_693371492'' @ 1410d54b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h__Script_Engine_693371492__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h__Script_Engine_241229535'' @ 1410d54f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h__Script_Engine_241229535__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h__Script_Engine_1904413400'' @ 1410d5530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h__Script_Engine_1904413400__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h__Script_Engine_3846631428'' @ 1410d5580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h__Script_Engine_3846631428__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h__Script_Engine_2877086651'' @ 1410d55d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h__Script_Engine_2877086651__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h__Script_Engine_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h__Script_Engine_Statics
             ::EnumInfo,6);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h__Script_Engine_2255845072'' @ 1410d5620

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h__Script_Engine_2255845072__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h__Script_Engine_726433010'' @ 1410d5670

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h__Script_Engine_726433010__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h__Script_Engine_3999675806'' @ 1410d56c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h__Script_Engine_3999675806__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h__Script_Engine_3097321826'' @ 1410d5700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h__Script_Engine_3097321826__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_Materials_MaterialExpressionMaterialSample_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h__Script_Engine_2861591148'' @ 1410d5740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h__Script_Engine_2861591148__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_TransformProviderData_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h__Script_Engine_1135608179'' @ 1410d5780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h__Script_Engine_1135608179__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h__Script_Engine_1068964672'' @ 1410d57c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h__Script_Engine_1068964672__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h__Script_Engine_4018745536'' @ 1410d5800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h__Script_Engine_4018745536__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_ATriggerSphere @ 1473352d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ATriggerSphere(void)

{
  if (Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton,
               &Z_Construct_UClass_ATriggerSphere_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton;
}

// Z_Construct_UClass_UTwitterIntegrationBase @ 147335b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTwitterIntegrationBase(void)

{
  if (Z_Registration_Info_UClass_UTwitterIntegrationBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTwitterIntegrationBase.OuterSingleton,
               &Z_Construct_UClass_UTwitterIntegrationBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTwitterIntegrationBase.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ETwitterRequestMethod @ 147335b80

UEnum * __cdecl Z_Construct_UEnum_Engine_ETwitterRequestMethod(void)

{
  if (Z_Registration_Info_UEnum_ETwitterRequestMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETwitterRequestMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETwitterRequestMethod.InnerSingleton;
}

// ETwitterRequestMethod_StaticEnum @ 147335bc0

UEnum * __cdecl ETwitterRequestMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterRequestMethod,(UObject *)pUVar1,
                       L"ETwitterRequestMethod");
  }
  return Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton;
}

// ETwitterIntegrationDelegate_StaticEnum @ 147335c00

UEnum * __cdecl ETwitterIntegrationDelegate_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate,(UObject *)pUVar1,
                       L"ETwitterIntegrationDelegate");
  }
  return Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 147335c40

void __cdecl
Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts @ 147335c50

UFunction * __cdecl Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147335c90

void __cdecl
Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI @ 147335ca0

UFunction * __cdecl Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName @ 147335ce0

UFunction * __cdecl Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTexture2DArray @ 147335d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTexture2DArray(void)

{
  if (Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton,
               &Z_Construct_UClass_UTexture2DArray_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton;
}

// Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts @ 147335d60

UFunction * __cdecl Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTwitterIntegrationBase_Init @ 147335da0

UFunction * __cdecl Z_Construct_UFunction_UTwitterIntegrationBase_Init(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147335de0

void __cdecl
Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI @ 147335df0

UFunction * __cdecl Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147335e70

void __cdecl
Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest @ 147335e80

UFunction * __cdecl Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UVectorFieldAnimated @ 1473361c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVectorFieldAnimated(void)

{
  if (Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton,
               &Z_Construct_UClass_UVectorFieldAnimated_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton;
}

// Z_Construct_UClass_UVectorFieldStatic_NoRegister @ 147336200

UClass * __cdecl Z_Construct_UClass_UVectorFieldStatic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldStatic",
               &Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton,
               UVectorFieldStatic::StaticRegisterNativesUVectorFieldStatic,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UVectorFieldStatic>,
               InternalVTableHelperCtorCaller<UVectorFieldStatic>,local_res8,
               UVectorField::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EVectorFieldConstructionOp @ 1473362c0

UEnum * __cdecl Z_Construct_UEnum_Engine_EVectorFieldConstructionOp(void)

{
  if (Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton,
               &Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton;
}

// EVectorFieldConstructionOp_StaticEnum @ 147336300

UEnum * __cdecl EVectorFieldConstructionOp_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp,(UObject *)pUVar1,
                       L"EVectorFieldConstructionOp");
  }
  return Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton;
}

// NewProp_bLoop_SetBit @ 147336400

void __cdecl Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x90) = *(uint *)((longlong)param_1 + 0x90) | 1;
  return;
}

// Z_Construct_UClass_UTimelineComponent @ 1473364b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTimelineComponent(void)

{
  if (Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton,
               &Z_Construct_UClass_UTimelineComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ETimelineLengthMode @ 1473364f0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETimelineLengthMode(void)

{
  if (Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature @ 147336530

UFunction * __cdecl Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature @ 147336570

UFunction * __cdecl Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature @ 1473365b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature @ 1473365f0

UFunction * __cdecl Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FTimeline @ 1473366f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimeline(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTimeline.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTimeline.InnerSingleton,
               &Z_Construct_UScriptStruct_FTimeline_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTimeline.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTimeline.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTimelineEventEntry @ 147336770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimelineEventEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTimelineEventEntry.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTimelineEventEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTimelineEventEntry.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTimelineEventEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTimelineFloatTrack @ 1473367f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimelineFloatTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTimelineFloatTrack.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTimelineFloatTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTimelineFloatTrack.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTimelineFloatTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTimelineLinearColorTrack @ 147336870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimelineLinearColorTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTimelineLinearColorTrack.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTimelineLinearColorTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTimelineLinearColorTrack.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTimelineLinearColorTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTimelineVectorTrack @ 1473368f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimelineVectorTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTimelineVectorTrack.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTimelineVectorTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTimelineVectorTrack.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTimelineVectorTrack.InnerSingleton;
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

// Z_Construct_UClass_UVectorFieldComponent @ 147336a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVectorFieldComponent(void)

{
  if (Z_Registration_Info_UClass_UVectorFieldComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVectorFieldComponent.OuterSingleton,
               &Z_Construct_UClass_UVectorFieldComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVectorFieldComponent.OuterSingleton;
}

// ETimelineLengthMode_StaticEnum @ 147336a90

UEnum * __cdecl ETimelineLengthMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineLengthMode,(UObject *)pUVar1,
                       L"ETimelineLengthMode");
  }
  return Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton;
}

// Z_Construct_UFunction_UVectorFieldComponent_SetIntensity @ 147336ad0

UFunction * __cdecl Z_Construct_UFunction_UVectorFieldComponent_SetIntensity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ETimelineDirection_StaticEnum @ 147336b10

UEnum * __cdecl ETimelineDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineDirection,(UObject *)pUVar1,
                       L"ETimelineDirection");
  }
  return Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton;
}

// NewProp_bPreviewVectorField_SetBit @ 147336b50

void __cdecl
Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x558) = *(uint *)((longlong)param_1 + 0x558) | 1;
  return;
}

// NewStructOps @ 147336b60

void * __cdecl Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTimelineEventEntry,&UE::CoreUObject::Private::Construct<FTimelineEventEntry>,&UE::CoreUObject::Private::ConstructForTests<FTimelineEventEntry>,&UE::CoreUObject::Private::Destruct<FTimelineEventEntry>,&UE::CoreUObject::Private::Copy<FTimelineEventEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147336ba0

void * __cdecl Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTimelineVectorTrack,&UE::CoreUObject::Private::Construct<FTimelineVectorTrack>,&UE::CoreUObject::Private::ConstructForTests<FTimelineVectorTrack>,&UE::CoreUObject::Private::Destruct<FTimelineVectorTrack>,&UE::CoreUObject::Private::Copy<FTimelineVectorTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147336be0

void * __cdecl Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTimelineFloatTrack,&UE::CoreUObject::Private::Construct<FTimelineFloatTrack>,&UE::CoreUObject::Private::ConstructForTests<FTimelineFloatTrack>,&UE::CoreUObject::Private::Destruct<FTimelineFloatTrack>,&UE::CoreUObject::Private::Copy<FTimelineFloatTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147336d60

void * __cdecl Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTimelineLinearColorTrack,&UE::CoreUObject::Private::Construct<FTimelineLinearColorTrack>,&UE::CoreUObject::Private::ConstructForTests<FTimelineLinearColorTrack>,&UE::CoreUObject::Private::Destruct<FTimelineLinearColorTrack>,&UE::CoreUObject::Private::Copy<FTimelineLinearColorTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLooping_SetBit @ 147336da0

void __cdecl Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 1;
  return;
}

// NewProp_bReversePlayback_SetBit @ 147336db0

void __cdecl
Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 2;
  return;
}

// NewProp_bPlaying_SetBit @ 147336dc0

void __cdecl Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 4;
  return;
}

// NewStructOps @ 147336dd0

void * __cdecl Z_Construct_UScriptStruct_FTimeline_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTimeline,&UE::CoreUObject::Private::Construct<FTimeline>,&UE::CoreUObject::Private::ConstructForTests<FTimeline>,&UE::CoreUObject::Private::Destruct<FTimeline>,&UE::CoreUObject::Private::SerializeArchive<FTimeline>,&UE::CoreUObject::Private::PostSerialize<FTimeline>,&UE::CoreUObject::Private::Copy<FTimeline>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UVectorFieldStatic @ 147336e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVectorFieldStatic(void)

{
  if (Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton,
               &Z_Construct_UClass_UVectorFieldStatic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton;
}

// Z_Construct_UFunction_UTimelineComponent_AddEvent @ 147336e50

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_AddEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowCPUAccess_SetBit @ 147336e90

void __cdecl
Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  return;
}

// Z_Construct_UFunction_UTimelineComponent_AddInterpFloat @ 147336ea0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_AddInterpFloat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESplitScreenType_StaticEnum @ 147336ee0

UEnum * __cdecl ESplitScreenType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESplitScreenType,(UObject *)pUVar1,
                       L"ESplitScreenType");
  }
  return Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton;
}

// Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor @ 147336f20

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType @ 147336f60

UEnum * __cdecl Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType(void)

{
  if (Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EQuartzCommandQuantization @ 147336fa0

UEnum * __cdecl Z_Construct_UEnum_Engine_EQuartzCommandQuantization(void)

{
  if (Z_Registration_Info_UEnum_EQuartzCommandQuantization.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EQuartzCommandQuantization.InnerSingleton,
               &Z_Construct_UEnum_Engine_EQuartzCommandQuantization_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EQuartzCommandQuantization.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization @ 147336fe0

UEnum * __cdecl Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization(void)

{
  if (Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.InnerSingleton,
               &Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EQuarztQuantizationReference @ 147337020

UEnum * __cdecl Z_Construct_UEnum_Engine_EQuarztQuantizationReference(void)

{
  if (Z_Registration_Info_UEnum_EQuarztQuantizationReference.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EQuarztQuantizationReference.InnerSingleton,
               &Z_Construct_UEnum_Engine_EQuarztQuantizationReference_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EQuarztQuantizationReference.InnerSingleton;
}

// Z_Construct_UScriptStruct_FQuartzPulseOverrideStep @ 147337060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQuartzPulseOverrideStep(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FQuartzPulseOverrideStep.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FQuartzPulseOverrideStep.InnerSingleton,
               &Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FQuartzPulseOverrideStep.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FQuartzPulseOverrideStep.InnerSingleton;
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

// Z_Construct_UScriptStruct_FQuartzTimeSignature @ 1473370e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQuartzTimeSignature(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FQuartzTimeSignature.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FQuartzTimeSignature.InnerSingleton,
               &Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FQuartzTimeSignature.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FQuartzTimeSignature.InnerSingleton;
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

// EQuartzCommandQuantization_StaticEnum @ 147337160

UEnum * __cdecl EQuartzCommandQuantization_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandQuantization,(UObject *)pUVar1,
                       L"EQuartzCommandQuantization");
  }
  return Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton;
}

// Z_Construct_UFunction_UTimelineComponent_AddInterpVector @ 1473371a0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_AddInterpVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1473372a0

void __cdecl
Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation @ 1473372c0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EQuartzTimeSignatureQuantization_StaticEnum @ 147337310

UEnum * __cdecl EQuartzTimeSignatureQuantization_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization,(UObject *)pUVar1,
                       L"EQuartzTimeSignatureQuantization");
  }
  return Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton;
}

// Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition @ 147337450

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147337490

void * __cdecl Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FQuartzPulseOverrideStep,&UE::CoreUObject::Private::Construct<FQuartzPulseOverrideStep>,&UE::CoreUObject::Private::ConstructForTests<FQuartzPulseOverrideStep>,&UE::CoreUObject::Private::Destruct<FQuartzPulseOverrideStep>,&UE::CoreUObject::Private::Copy<FQuartzPulseOverrideStep>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface @ 1473374d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface(void)

{
  if (Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton,
               &Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton;
}

// Z_Construct_UFunction_UTimelineComponent_GetPlayRate @ 147337510

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_GetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength @ 147337560

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_GetTimelineLength @ 1473375a0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_GetTimelineLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1473375e0

void * __cdecl Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FQuartzTimeSignature,&UE::CoreUObject::Private::Construct<FQuartzTimeSignature>,&UE::CoreUObject::Private::ConstructForTests<FQuartzTimeSignature>,&UE::CoreUObject::Private::Destruct<FQuartzTimeSignature>,&UE::CoreUObject::Private::Copy<FQuartzTimeSignature>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 147337620

void __cdecl
Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTimelineComponent_IsLooping @ 1473376f0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_IsLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147337730

void __cdecl
Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTimelineComponent_IsPlaying @ 147337740

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_IsPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147337780

void * __cdecl Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FQuartzTransportTimeStamp,&UE::CoreUObject::Private::Construct<FQuartzTransportTimeStamp>,&UE::CoreUObject::Private::ConstructForTests<FQuartzTransportTimeStamp>,&UE::CoreUObject::Private::Destruct<FQuartzTransportTimeStamp>,&UE::CoreUObject::Private::Copy<FQuartzTransportTimeStamp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 1473377c0

void __cdecl
Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTimelineComponent_IsReversing @ 1473377d0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_IsReversing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWindDirectionalSourceComponent @ 147337810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWindDirectionalSourceComponent(void)

{
  if (Z_Registration_Info_UClass_UWindDirectionalSourceComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWindDirectionalSourceComponent.OuterSingleton,
               &Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWindDirectionalSourceComponent.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EWindSourceType @ 147337850

UEnum * __cdecl Z_Construct_UEnum_Engine_EWindSourceType(void)

{
  if (Z_Registration_Info_UEnum_EWindSourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWindSourceType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWindSourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWindSourceType.InnerSingleton;
}

// EWindSourceType_StaticEnum @ 147337890

UEnum * __cdecl EWindSourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWindSourceType,(UObject *)pUVar1,L"EWindSourceType"
                      );
  }
  return Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton;
}

// Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline @ 1473378d0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount @ 147337910

UFunction * __cdecl Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_Play @ 147337950

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UTimelineComponent_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EQuartzDelegateType_StaticEnum @ 147337990

UEnum * __cdecl EQuartzDelegateType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzDelegateType,(UObject *)pUVar1,
                       L"EQuartzDelegateType");
  }
  return Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton;
}

// Z_Construct_UFunction_UTimelineComponent_PlayFromStart @ 1473379d0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_PlayFromStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EQuarztQuantizationReference_StaticEnum @ 147337a10

UEnum * __cdecl EQuarztQuantizationReference_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuarztQuantizationReference,(UObject *)pUVar1,
                       L"EQuarztQuantizationReference");
  }
  return Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton;
}

// Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount @ 147337a60

UFunction * __cdecl Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_Reverse @ 147337ab0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_Reverse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd @ 147337b40

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EQuartzCommandDelegateSubType_StaticEnum @ 147337b80

UEnum * __cdecl EQuartzCommandDelegateSubType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType,(UObject *)pUVar1,
                       L"EQuartzCommandDelegateSubType");
  }
  return Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton;
}

// Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius @ 147337bc0

UFunction * __cdecl Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EQuartzCommandType_StaticEnum @ 147337fd0

UEnum * __cdecl EQuartzCommandType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandType,(UObject *)pUVar1,
                       L"EQuartzCommandType");
  }
  return Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton;
}

// Z_Construct_UClass_UMaterialExpressionMaterialSample @ 147338010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionMaterialSample(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.OuterSingleton,
               &Z_Construct_UClass_UMaterialExpressionMaterialSample_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.OuterSingleton;
}

// Z_Construct_UFunction_UTimelineComponent_SetFloatCurve @ 147338050

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetFloatCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed @ 147338090

UFunction * __cdecl Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewIgnoreTimeDilation_SetBit @ 1473380d0

void __cdecl
Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::
NewProp_bNewIgnoreTimeDilation_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength @ 1473380e0

UFunction * __cdecl Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation @ 147338120

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType @ 147338160

UFunction * __cdecl Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve @ 1473381a0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewLooping_SetBit @ 1473381e0

void __cdecl
Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bPointWind_SetBit @ 1473381f0

void __cdecl
Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x264) = *(uint *)((longlong)param_1 + 0x264) | 1;
  return;
}

// Z_Construct_UFunction_UTimelineComponent_SetLooping @ 147338200

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_SetNewTime @ 147338240

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetNewTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFireEvents_SetBit @ 147338280

void __cdecl
Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bFireUpdate_SetBit @ 147338290

void __cdecl
Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition @ 1473382a0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_SetPlayRate @ 1473382e0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIgnoreLevelChange_SetBit @ 147338320

void __cdecl
Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewProp_bIgnoreLevelChange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 147338330

void * __cdecl Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FQuartzClockSettings,&UE::CoreUObject::Private::Construct<FQuartzClockSettings>,&UE::CoreUObject::Private::ConstructForTests<FQuartzClockSettings>,&UE::CoreUObject::Private::Destruct<FQuartzClockSettings>,&UE::CoreUObject::Private::Copy<FQuartzClockSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc @ 147338370

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_SetTimelineLength @ 1473383b0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetTimelineLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode @ 147338430

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFireOnClockStart_SetBit @ 147338470

void __cdecl
Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bFireOnClockStart_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bCancelCommandIfClockIsNotRunning_SetBit @ 147338480

void __cdecl
Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::
NewProp_bCancelCommandIfClockIsNotRunning_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bResetClockOnQueued_SetBit @ 147338490

void __cdecl
Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResetClockOnQueued_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// NewProp_bResumeClockOnQueued_SetBit @ 1473384a0

void __cdecl
Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewProp_bResumeClockOnQueued_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 1473384b0

void * __cdecl Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FQuartzQuantizationBoundary,&UE::CoreUObject::Private::Construct<FQuartzQuantizationBoundary>,&UE::CoreUObject::Private::ConstructForTests<FQuartzQuantizationBoundary>,&UE::CoreUObject::Private::Destruct<FQuartzQuantizationBoundary>,&UE::CoreUObject::Private::Copy<FQuartzQuantizationBoundary>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc @ 1473384f0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_SetVectorCurve @ 147338570

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_SetVectorCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTimelineComponent_Stop @ 1473385b0

UFunction * __cdecl Z_Construct_UFunction_UTimelineComponent_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UTimelineComponent_Stop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIgnoreTimeDilation_SetBit @ 1473385f0

void __cdecl
Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x170) = *(uint *)((longlong)param_1 + 0x170) | 1;
  return;
}

// NewStructOps @ 147338640

void * __cdecl Z_Construct_UScriptStruct_FActorContainerPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorContainerPath,&UE::CoreUObject::Private::Construct<FActorContainerPath>,&UE::CoreUObject::Private::ConstructForTests<FActorContainerPath>,&UE::CoreUObject::Private::Destruct<FActorContainerPath>,&UE::CoreUObject::Private::Copy<FActorContainerPath>,&UE::CoreUObject::Private::GetStructTypeHash<FActorContainerPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147338b60

void * __cdecl Z_Construct_UScriptStruct_FActorContainerID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorContainerID,&UE::CoreUObject::Private::Construct<FActorContainerID>,&UE::CoreUObject::Private::ConstructForTests<FActorContainerID>,&UE::CoreUObject::Private::Destruct<FActorContainerID>,&UE::CoreUObject::Private::Copy<FActorContainerID>,&UE::CoreUObject::Private::GetStructTypeHash<FActorContainerID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter @ 147338ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton;
}

// `scalar_deleting_destructor' @ 147338de0

void * __thiscall FAttributeCurve::_scalar_deleting_destructor_(FAttributeCurve *this,uint param_1)

{
  ~FAttributeCurve(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// Z_Construct_UClass_UTransformProviderData @ 147338ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransformProviderData(void)

{
  if (Z_Registration_Info_UClass_UTransformProviderData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransformProviderData.OuterSingleton,
               &Z_Construct_UClass_UTransformProviderData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransformProviderData.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 147338f10

void __cdecl
Z_Construct_UClass_UTransformProviderData_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UScriptStruct_FAttributeKey @ 147339110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAttributeKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAttributeKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAttributeKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FAttributeKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAttributeKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAttributeKey.InnerSingleton;
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

// NewStructOps @ 147339190

void * __cdecl Z_Construct_UScriptStruct_FAttributeKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAttributeKey,&UE::CoreUObject::Private::Construct<FAttributeKey>,&UE::CoreUObject::Private::ConstructForTests<FAttributeKey>,&UE::CoreUObject::Private::Destruct<FAttributeKey>,&UE::CoreUObject::Private::Copy<FAttributeKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllowInvalidTexelFactorWhenUnregistered_SetBit @ 1473391d0

void __cdecl
Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::
NewProp_bAllowInvalidTexelFactorWhenUnregistered_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 1;
  return;
}

// NewProp_bAffectedByComponentScale_SetBit @ 1473391e0

void __cdecl
Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::
NewProp_bAffectedByComponentScale_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 2;
  return;
}

// NewStructOps @ 1473391f0

void * __cdecl
Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStreamingRenderAssetPrimitiveInfo,&UE::CoreUObject::Private::Construct<FStreamingRenderAssetPrimitiveInfo>,&UE::CoreUObject::Private::ConstructForTests<FStreamingRenderAssetPrimitiveInfo>,&UE::CoreUObject::Private::Destruct<FStreamingRenderAssetPrimitiveInfo>,&UE::CoreUObject::Private::Copy<FStreamingRenderAssetPrimitiveInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShouldInterpolate_SetBit @ 147339350

void __cdecl
Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_bShouldInterpolate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewStructOps @ 147339360

void * __cdecl Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAttributeCurve,&UE::CoreUObject::Private::Construct<FAttributeCurve>,&UE::CoreUObject::Private::ConstructForTests<FAttributeCurve>,&UE::CoreUObject::Private::Destruct<FAttributeCurve>,&UE::CoreUObject::Private::SerializeArchive<FAttributeCurve>,&UE::CoreUObject::Private::Copy<FAttributeCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147339460

void * __cdecl Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStreamingTextureBuildInfo,&UE::CoreUObject::Private::Construct<FStreamingTextureBuildInfo>,&UE::CoreUObject::Private::ConstructForTests<FStreamingTextureBuildInfo>,&UE::CoreUObject::Private::Destruct<FStreamingTextureBuildInfo>,&UE::CoreUObject::Private::Copy<FStreamingTextureBuildInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ATriggerBox @ 1473394a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ATriggerBox(void)

{
  if (Z_Registration_Info_UClass_ATriggerBox.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ATriggerBox.OuterSingleton,
               &Z_Construct_UClass_ATriggerBox_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ATriggerBox.OuterSingleton;
}

// ESoundWaveLoadingBehavior_StaticEnum @ 1473394e0

UEnum * __cdecl ESoundWaveLoadingBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior,(UObject *)pUVar1,
                       L"ESoundWaveLoadingBehavior");
  }
  return Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton;
}

// Z_Construct_UClass_ATriggerCapsule @ 147339750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ATriggerCapsule(void)

{
  if (Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton,
               &Z_Construct_UClass_ATriggerCapsule_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton;
}

// operator<<<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator> @ 147339990

FArchive * __cdecl
operator<<<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
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
  
  operator<<<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14733d07e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14733d07e:
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
        goto LAB_14733d15b;
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
LAB_14733d15b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        uVar8 = (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3 & *piVar1 - 1U;
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

// operator<<<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator> @ 1473399a0

FArchive * __cdecl
operator<<<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
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
  
  operator<<<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14733d32e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14733d32e:
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
        goto LAB_14733d40b;
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
LAB_14733d40b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        uVar8 = (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3 & *piVar1 - 1U;
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

// operator<<<FAttributeKey,TSizedDefaultAllocator<32>_> @ 1473399b0

FArchive * __cdecl
operator<<<FAttributeKey,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FAttributeKey,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  uVar12 = 0;
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
      DestructItems<FAttributeKey,int>
                ((FAttributeKey *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
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
          uVar14 = uVar12;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar13 = (uint)uVar12;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(undefined4 *)pFVar10 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              uVar14 = uVar14 + 0x18;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FAttributeKey,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
              DefaultConstructItems<FAttributeKey,int>(pFVar10,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(uint *)pFVar10 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1473399c0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<unsigned___int64,unsigned_int> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<unsigned___int64,unsigned_int> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        goto LAB_147339cbc;
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
LAB_147339cbc:
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
        operator<<<unsigned___int64,unsigned_int>
                  (param_1,(TTuple<unsigned___int64,unsigned_int> *)
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
    pTVar12 = (TTuple<unsigned___int64,unsigned_int> *)0x0;
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
        pTVar8 = (TTuple<unsigned___int64,unsigned_int> *)0x0;
        if (local_78.Pointer != (TTuple<unsigned___int64,unsigned_int> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<unsigned___int64,unsigned_int>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<unsigned___int64,unsigned_int> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147339d30

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<unsigned___int64,FWaveInstance_*> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<unsigned___int64,FWaveInstance_*> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        goto LAB_14733a02c;
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
LAB_14733a02c:
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
        operator<<<unsigned___int64,FWaveInstance_*>
                  (param_1,(TTuple<unsigned___int64,FWaveInstance_*> *)
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
    pTVar12 = (TTuple<unsigned___int64,FWaveInstance_*> *)0x0;
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
        pTVar8 = (TTuple<unsigned___int64,FWaveInstance_*> *)0x0;
        if (local_78.Pointer != (TTuple<unsigned___int64,FWaveInstance_*> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<unsigned___int64,FWaveInstance_*>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<unsigned___int64,FWaveInstance_*> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<unsigned___int64,unsigned_int> @ 14733a0a0

FArchive * __cdecl
operator<<<unsigned___int64,unsigned_int>
          (FArchive *param_1,TTuple<unsigned___int64,unsigned_int> *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined8 *)**(longlong **)&param_1->field_0x8;
  if ((undefined8 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    *(undefined8 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->field_0x8;
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// operator<<<unsigned___int64,FWaveInstance_*> @ 14733a170

FArchive * __cdecl
operator<<<unsigned___int64,FWaveInstance_*>
          (FArchive *param_1,TTuple<unsigned___int64,FWaveInstance_*> *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)**(longlong **)&param_1->field_0x8;
  if ((undefined8 *)(*(longlong **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    *(undefined8 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  operator<<(param_1,*(FWaveInstance **)&param_2->field_0x8);
  return param_1;
}

// ConstructItems<FAttributeKey,FAttributeKey,int> @ 14733aa10

void __cdecl
ConstructItems<FAttributeKey,FAttributeKey,int>(void *param_1,FAttributeKey *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  TWrappedAttribute<TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 8);
    pTVar4 = &param_2->Value;
    do {
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar4) =
           *(undefined4 *)((longlong)(pTVar4 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      iVar2 = (pTVar4->StructMemory).ArrayNum;
      _Src = (pTVar4->StructMemory).AllocatorInstance.Data;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2);
      }
      pTVar4 = (TWrappedAttribute<TSizedDefaultAllocator<32>_> *)((longlong)(pTVar4 + 1) + 8);
      pFVar3 = pFVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAudioVolumeSubmixSendSettings,FAudioVolumeSubmixSendSettings,int> @ 14733aae0

void __cdecl
ConstructItems<FAudioVolumeSubmixSendSettings,FAudioVolumeSubmixSendSettings,int>
          (void *param_1,FAudioVolumeSubmixSendSettings *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FSoundSubmixSendInfo *pFVar3;
  int *piVar4;
  EAudioVolumeLocationState *pEVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x14);
    pEVar5 = &param_2->SourceLocationState_DEPRECATED;
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      pEVar5[(longlong)param_1 + (-1 - (longlong)param_2)] =
           ((FAudioVolumeSubmixSendSettings *)(pEVar5 + -1))->ListenerLocationState;
      *(EAudioVolumeLocationState *)((longlong)piVar4 + -0x13) = *pEVar5;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(pEVar5 + 0xf);
      pFVar3 = (FSoundSubmixSendInfo *)
               (((TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *)(pEVar5 + 7))->
               AllocatorInstance).Data;
      piVar4[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,iVar2,0,pFVar1,iVar2,piVar4);
        ConstructItems<FSoundSubmixSendInfo,FSoundSubmixSendInfo,int>(pFVar1->Data,pFVar3,iVar2);
      }
      pEVar5 = pEVar5 + 0x18;
      piVar4 = piVar4 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTimelineEventEntry,FTimelineEventEntry,int> @ 14733abc0

void __cdecl
ConstructItems<FTimelineEventEntry,FTimelineEventEntry,int>
          (void *param_1,FTimelineEventEntry *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  FReadAccessScope local_28;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 0x14;
    puVar2 = (undefined8 *)&(param_2->EventFunc).field_0x10;
    do {
      *(undefined4 *)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar2) =
           *(undefined4 *)(puVar2 + -3);
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar2 + -2),&local_28);
      *(undefined8 *)(lVar1 + -4) = puVar2[-1];
      *(undefined8 *)(lVar1 + 4) = *puVar2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      puVar2 = puVar2 + 4;
      lVar1 = lVar1 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTimelineFloatTrack,FTimelineFloatTrack,int> @ 14733ac70

void __cdecl
ConstructItems<FTimelineFloatTrack,FTimelineFloatTrack,int>
          (void *param_1,FTimelineFloatTrack *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  longlong lVar3;
  FReadAccessScope local_28;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)&(param_2->InterpFunc).field_0x10;
    lVar3 = (longlong)param_1 + 0x14;
    do {
      pUVar1 = (UObject *)puVar2[-3];
      *(UObject **)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined8 *)(lVar3 + 4) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar2 + -2),&local_28);
      *(undefined8 *)(lVar3 + -4) = puVar2[-1];
      *(undefined8 *)(lVar3 + 4) = *puVar2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined8 *)(lVar3 + 0xc) = puVar2[1];
      *(undefined8 *)(lVar3 + 0x14) = puVar2[2];
      *(undefined8 *)(lVar3 + 0x1c) = puVar2[3];
      *(undefined8 *)(lVar3 + 0x24) = 0;
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      *(undefined4 *)(lVar3 + 0x34) = 0;
      TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(lVar3 + 0x24),
                 (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar2 + 4));
      lVar3 = lVar3 + 0x50;
      puVar2 = puVar2 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTimelineLinearColorTrack,FTimelineLinearColorTrack,int> @ 14733ad60

void __cdecl
ConstructItems<FTimelineLinearColorTrack,FTimelineLinearColorTrack,int>
          (void *param_1,FTimelineLinearColorTrack *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  longlong lVar3;
  FReadAccessScope local_28;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)&(param_2->InterpFunc).field_0x10;
    lVar3 = (longlong)param_1 + 0x14;
    do {
      pUVar1 = (UObject *)puVar2[-3];
      *(UObject **)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined8 *)(lVar3 + 4) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar2 + -2),&local_28);
      *(undefined8 *)(lVar3 + -4) = puVar2[-1];
      *(undefined8 *)(lVar3 + 4) = *puVar2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined8 *)(lVar3 + 0xc) = puVar2[1];
      *(undefined8 *)(lVar3 + 0x14) = puVar2[2];
      *(undefined8 *)(lVar3 + 0x1c) = puVar2[3];
      *(undefined8 *)(lVar3 + 0x24) = 0;
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      *(undefined4 *)(lVar3 + 0x34) = 0;
      TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *)(lVar3 + 0x24),
                 (TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *)(puVar2 + 4));
      lVar3 = lVar3 + 0x50;
      puVar2 = puVar2 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTimelineVectorTrack,FTimelineVectorTrack,int> @ 14733ae50

void __cdecl
ConstructItems<FTimelineVectorTrack,FTimelineVectorTrack,int>
          (void *param_1,FTimelineVectorTrack *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  longlong lVar3;
  FReadAccessScope local_28;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)&(param_2->InterpFunc).field_0x10;
    lVar3 = (longlong)param_1 + 0x14;
    do {
      pUVar1 = (UObject *)puVar2[-3];
      *(UObject **)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined8 *)(lVar3 + 4) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar2 + -2),&local_28);
      *(undefined8 *)(lVar3 + -4) = puVar2[-1];
      *(undefined8 *)(lVar3 + 4) = *puVar2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined8 *)(lVar3 + 0xc) = puVar2[1];
      *(undefined8 *)(lVar3 + 0x14) = puVar2[2];
      *(undefined8 *)(lVar3 + 0x1c) = puVar2[3];
      *(undefined8 *)(lVar3 + 0x24) = 0;
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      *(undefined4 *)(lVar3 + 0x34) = 0;
      TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy> *)
                 (lVar3 + 0x24),
                 (TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy> *)
                 (puVar2 + 4));
      lVar3 = lVar3 + 0x50;
      puVar2 = puVar2 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FAttributeKey,int> @ 14733b140

void __cdecl DefaultConstructItems<FAttributeKey,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FQuartzTickableObject::FCommandDelegateGameThreadData,int> @ 14733b170

void __cdecl
DefaultConstructItems<FQuartzTickableObject::FCommandDelegateGameThreadData,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,int> @ 14733b1a0

void __cdecl
DestructItems<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,int>
          (TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      if ((FRHIResource *)puVar1[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar1[1]);
      }
      if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)*puVar1);
      }
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<enum_EShaderFrequency,FString>,int> @ 14733b1f0

void __cdecl
DestructItems<TTuple<enum_EShaderFrequency,FString>,int>
          (TTuple<EShaderFrequency,FString> *param_1,int param_2)

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

// DestructItems<FAttributeKey,int> @ 14733b230

void __cdecl DestructItems<FAttributeKey,int>(FAttributeKey *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TWrappedAttribute<TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Value;
    do {
      pFVar1 = (pTVar2->StructMemory).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TWrappedAttribute<TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAudioVolumeSubmixOverrideSettings,int> @ 14733b270

void __cdecl
DestructItems<FAudioVolumeSubmixOverrideSettings,int>
          (FAudioVolumeSubmixOverrideSettings *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TObjectPtr<USoundEffectSubmixPreset>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->SubmixEffectChain;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAudioVolumeSubmixSendSettings,int> @ 14733b2b0

void __cdecl
DestructItems<FAudioVolumeSubmixSendSettings,int>
          (FAudioVolumeSubmixSendSettings *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->SubmixSends;
    DestructItems<FSoundSubmixSendInfo,int>
              ((FSoundSubmixSendInfo *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FAudioVolumeSubmixSendSettings *)(pTVar2 + 1);
  }
  return;
}

// DestructItems<FQuartzTickableObject::FCommandDelegateGameThreadData,int> @ 14733b300

void __cdecl
DestructItems<FQuartzTickableObject::FCommandDelegateGameThreadData,int>
          (FCommandDelegateGameThreadData *param_1,int param_2)

{
  void *pvVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pvVar1 = *(void **)&(param_1->MulticastDelegate).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTimelineEventEntry,int> @ 14733b350

void __cdecl DestructItems<FTimelineEventEntry,int>(FTimelineEventEntry *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&param_1->EventFunc);
    param_1 = (FTimelineEventEntry *)(&param_1->EventFunc + 1);
  }
  return;
}

// DestructItems<FTimelineFloatTrack,int> @ 14733b390

void __cdecl DestructItems<FTimelineFloatTrack,int>(FTimelineFloatTrack *param_1,int param_2)

{
  FOnTimelineFloat *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->InterpFunc;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this + 2));
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    param_1 = (FTimelineFloatTrack *)(this + 3);
  }
  return;
}

// DestructItems<FTimelineLinearColorTrack,int> @ 14733b3d0

void __cdecl
DestructItems<FTimelineLinearColorTrack,int>(FTimelineLinearColorTrack *param_1,int param_2)

{
  FOnTimelineLinearColor *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->InterpFunc;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this + 2));
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    param_1 = (FTimelineLinearColorTrack *)(this + 3);
  }
  return;
}

// DestructItems<FTimelineVectorTrack,int> @ 14733b410

void __cdecl DestructItems<FTimelineVectorTrack,int>(FTimelineVectorTrack *param_1,int param_2)

{
  FOnTimelineVector *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->InterpFunc;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this + 2));
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    param_1 = (FTimelineVectorTrack *)(this + 3);
  }
  return;
}

// DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int> @ 14733b450

void __cdecl
DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
          (TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *param_1,int param_2)

{
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *pTVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar1 = (param_1->AllocatorInstance).Data;
    if (pTVar1 != (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pTVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TFunction<void___cdecl(FQuartzTickableObject_*)>,int> @ 14733b490

void __cdecl
DestructItems<TFunction<void___cdecl(FQuartzTickableObject_*)>,int>
          (TFunction<void___cdecl(FQuartzTickableObject_*)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<ATriggerBox> @ 14733bdc0

void __cdecl InternalConstructor<ATriggerBox>(FObjectInitializer *param_1)

{
  if ((ATriggerBox *)param_1->Obj != (ATriggerBox *)0x0) {
    ATriggerBox::ATriggerBox((ATriggerBox *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ATriggerCapsule> @ 14733bde0

void __cdecl InternalConstructor<ATriggerCapsule>(FObjectInitializer *param_1)

{
  if ((ATriggerCapsule *)param_1->Obj != (ATriggerCapsule *)0x0) {
    ATriggerCapsule::ATriggerCapsule((ATriggerCapsule *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ATriggerSphere> @ 14733be00

void __cdecl InternalConstructor<ATriggerSphere>(FObjectInitializer *param_1)

{
  if ((ATriggerSphere *)param_1->Obj != (ATriggerSphere *)0x0) {
    ATriggerSphere::ATriggerSphere((ATriggerSphere *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMaterialExpressionMaterialSample> @ 14733be20

void __cdecl InternalConstructor<UMaterialExpressionMaterialSample>(FObjectInitializer *param_1)

{
  UMaterialExpression *this;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionMaterialSample__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UTexture2DArray> @ 14733be60

void __cdecl InternalConstructor<UTexture2DArray>(FObjectInitializer *param_1)

{
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UTexture2DArray::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTexture2DArray::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTexture2DArray::_vftable__for__IInterface_AsyncCompilation__;
  }
  return;
}

// InternalConstructor<UTimelineComponent> @ 14733bec0

void __cdecl InternalConstructor<UTimelineComponent>(FObjectInitializer *param_1)

{
  if ((UTimelineComponent *)param_1->Obj != (UTimelineComponent *)0x0) {
    UTimelineComponent::UTimelineComponent((UTimelineComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UTransformProviderData> @ 14733bee0

void __cdecl InternalConstructor<UTransformProviderData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UTransformProviderData__6B_;
  }
  return;
}

// InternalConstructor<UTwitterIntegrationBase> @ 14733bf10

void __cdecl InternalConstructor<UTwitterIntegrationBase>(FObjectInitializer *param_1)

{
  if ((UTwitterIntegrationBase *)param_1->Obj != (UTwitterIntegrationBase *)0x0) {
    UTwitterIntegrationBase::UTwitterIntegrationBase
              ((UTwitterIntegrationBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UVectorFieldAnimated> @ 14733bf30

void __cdecl InternalConstructor<UVectorFieldAnimated>(FObjectInitializer *param_1)

{
  if ((UVectorFieldAnimated *)param_1->Obj != (UVectorFieldAnimated *)0x0) {
    UVectorFieldAnimated::UVectorFieldAnimated((UVectorFieldAnimated *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UVectorFieldComponent> @ 14733bf50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UVectorFieldComponent>(FObjectInitializer *param_1)

{
  if ((UVectorFieldComponent *)param_1->Obj != (UVectorFieldComponent *)0x0) {
    UVectorFieldComponent::UVectorFieldComponent((UVectorFieldComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UVectorFieldStatic> @ 14733bf70

void __cdecl InternalConstructor<UVectorFieldStatic>(FObjectInitializer *param_1)

{
  if ((UVectorFieldStatic *)param_1->Obj != (UVectorFieldStatic *)0x0) {
    UVectorFieldStatic::UVectorFieldStatic((UVectorFieldStatic *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UVisualLoggerDebugSnapshotInterface> @ 14733bf90

void __cdecl InternalConstructor<UVisualLoggerDebugSnapshotInterface>(FObjectInitializer *param_1)

{
  if ((UVisualLoggerDebugSnapshotInterface *)param_1->Obj !=
      (UVisualLoggerDebugSnapshotInterface *)0x0) {
    UVisualLoggerDebugSnapshotInterface::UVisualLoggerDebugSnapshotInterface
              ((UVisualLoggerDebugSnapshotInterface *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWindDirectionalSourceComponent> @ 14733bfb0

void __cdecl InternalConstructor<UWindDirectionalSourceComponent>(FObjectInitializer *param_1)

{
  if ((UWindDirectionalSourceComponent *)param_1->Obj != (UWindDirectionalSourceComponent *)0x0) {
    UWindDirectionalSourceComponent::UWindDirectionalSourceComponent
              ((UWindDirectionalSourceComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWorldPartitionEditorLoaderAdapter> @ 14733bfd0

void __cdecl InternalConstructor<UWorldPartitionEditorLoaderAdapter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UWorldPartitionEditorLoaderAdapter::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UWorldPartitionEditorLoaderAdapter::_vftable__for__IWorldPartitionActorLoaderInterface__;
  }
  return;
}

// InternalVTableHelperCtorCaller<ATriggerBox> @ 14733c010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ATriggerBox>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ATriggerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ATriggerBox::GetPrivateStaticClass();
  this = (ATriggerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ATriggerBase *)0x0) {
    ATriggerBase::ATriggerBase(this,param_1);
    this->_padding_ = (longlong)&___7ATriggerBox__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ATriggerCapsule> @ 14733c0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ATriggerCapsule>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ATriggerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ATriggerCapsule::GetPrivateStaticClass();
  this = (ATriggerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ATriggerBase *)0x0) {
    ATriggerBase::ATriggerBase(this,param_1);
    this->_padding_ = (longlong)&___7ATriggerCapsule__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ATriggerSphere> @ 14733c170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ATriggerSphere>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ATriggerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ATriggerSphere::GetPrivateStaticClass();
  this = (ATriggerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ATriggerBase *)0x0) {
    ATriggerBase::ATriggerBase(this,param_1);
    this->_padding_ = (longlong)&___7ATriggerSphere__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionMaterialSample> @ 14733c220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionMaterialSample>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionMaterialSample::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionMaterialSample__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTexture2DArray> @ 14733c2e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTexture2DArray>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTexture2DArray::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTexture2DArray::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTexture2DArray::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTexture2DArray::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTimelineComponent> @ 14733c3b0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UTimelineComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTimelineComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UTimelineComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UTimelineComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTimelineComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    FTimeline::FTimeline((FTimeline *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransformProviderData> @ 14733c480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTransformProviderData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTransformProviderData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTransformProviderData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTwitterIntegrationBase> @ 14733c530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTwitterIntegrationBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPlatformInterfaceBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTwitterIntegrationBase::GetPrivateStaticClass();
  this = (UPlatformInterfaceBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPlatformInterfaceBase *)0x0) {
    UPlatformInterfaceBase::UPlatformInterfaceBase(this,param_1);
    this->_padding_ = (longlong)&___7UTwitterIntegrationBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVectorFieldAnimated> @ 14733c5e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVectorFieldAnimated>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UVectorField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVectorFieldAnimated::GetPrivateStaticClass();
  this = (UVectorField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UVectorField *)0x0) {
    UVectorField::UVectorField(this,param_1);
    this->_padding_ = (longlong)&___7UVectorFieldAnimated__6B_;
    this[1]._padding_ = 0;
    this[1].Bounds.Min.field0_0x0._s_0.Y = 0.0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVectorFieldComponent> @ 14733c6a0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UVectorFieldComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVectorFieldComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UVectorFieldComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UVectorFieldComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UVectorFieldComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UVectorFieldComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UVectorFieldComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &UVectorFieldComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)&this->field_0x548 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVectorFieldStatic> @ 14733c7a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVectorFieldStatic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UVectorField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVectorFieldStatic::GetPrivateStaticClass();
  this = (UVectorField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UVectorField *)0x0) {
    UVectorField::UVectorField(this,param_1);
    this->_padding_ = (longlong)&___7UVectorFieldStatic__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Bounds.Min.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 5) = 0xffffffff;
    *(undefined1 *)((longlong)&this[1].Bounds.Min.field0_0x0 + 1) = 0xff;
    this[1].Bounds.Min.field0_0x0._s_0.Y = (double)FIoChunkId::InvalidChunkId.Id._0_8_;
    *(undefined4 *)((longlong)&this[1].Bounds.Min.field0_0x0 + 0x10) =
         FIoChunkId::InvalidChunkId.Id._8_4_;
    this[1].Bounds.Max.field0_0x0._s_0.X = 0.0;
    this[1].Bounds.Max.field0_0x0._s_0.Y = 0.0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVisualLoggerDebugSnapshotInterface> @ 14733c8a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UVisualLoggerDebugSnapshotInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVisualLoggerDebugSnapshotInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UVisualLoggerDebugSnapshotInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWindDirectionalSourceComponent> @ 14733c950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWindDirectionalSourceComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWindDirectionalSourceComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UWindDirectionalSourceComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWindDirectionalSourceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWindDirectionalSourceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionEditorLoaderAdapter> @ 14733ca10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionEditorLoaderAdapter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionEditorLoaderAdapter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UWorldPartitionEditorLoaderAdapter::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UWorldPartitionEditorLoaderAdapter::_vftable__for__IWorldPartitionActorLoaderInterface__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShared<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1> @ 14733cad0

TSharedRef<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
* __cdecl MakeShared<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                    (TSharedRef<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  *pTVar4;
  
  pTVar3 = operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object =
         (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
          *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TQuartzCommandQueue_VIMetronomeEventListener_Quartz_Audio__VICommandListener_23_VIQueueCommandListener_23__PrivateDefs_Quartz_Audio___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = 0;
    __return_storage_ptr__->Object =
         (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
          *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UTexture2DArray> @ 14733cb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTexture2DArray * __cdecl
NewObject<UTexture2DArray>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTexture2DArray *pUVar2;
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
  pUVar1 = UTexture2DArray::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTexture2DArray *)
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

// StaticEnum<enum_EQuartzCommandDelegateSubType> @ 14733d7b0

UEnum * __cdecl StaticEnum<enum_EQuartzCommandDelegateSubType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandDelegateSubType,(UObject *)pUVar1,
                       L"EQuartzCommandDelegateSubType");
  }
  return Z_Registration_Info_UEnum_EQuartzCommandDelegateSubType.OuterSingleton;
}

// StaticEnum<enum_EQuartzCommandQuantization> @ 14733d7f0

UEnum * __cdecl StaticEnum<enum_EQuartzCommandQuantization>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandQuantization,(UObject *)pUVar1,
                       L"EQuartzCommandQuantization");
  }
  return Z_Registration_Info_UEnum_EQuartzCommandQuantization.OuterSingleton;
}

// StaticEnum<enum_EQuartzCommandType> @ 14733d830

UEnum * __cdecl StaticEnum<enum_EQuartzCommandType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzCommandType,(UObject *)pUVar1,
                       L"EQuartzCommandType");
  }
  return Z_Registration_Info_UEnum_EQuartzCommandType.OuterSingleton;
}

// StaticEnum<enum_EQuartzDelegateType> @ 14733d870

UEnum * __cdecl StaticEnum<enum_EQuartzDelegateType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzDelegateType,(UObject *)pUVar1,
                       L"EQuartzDelegateType");
  }
  return Z_Registration_Info_UEnum_EQuartzDelegateType.OuterSingleton;
}

// StaticEnum<enum_EQuartzTimeSignatureQuantization> @ 14733d8b0

UEnum * __cdecl StaticEnum<enum_EQuartzTimeSignatureQuantization>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuartzTimeSignatureQuantization,(UObject *)pUVar1,
                       L"EQuartzTimeSignatureQuantization");
  }
  return Z_Registration_Info_UEnum_EQuartzTimeSignatureQuantization.OuterSingleton;
}

// StaticEnum<enum_EQuarztQuantizationReference> @ 14733d8f0

UEnum * __cdecl StaticEnum<enum_EQuarztQuantizationReference>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EQuarztQuantizationReference,(UObject *)pUVar1,
                       L"EQuarztQuantizationReference");
  }
  return Z_Registration_Info_UEnum_EQuarztQuantizationReference.OuterSingleton;
}

// StaticEnum<enum_ESoundWaveLoadingBehavior> @ 14733d930

UEnum * __cdecl StaticEnum<enum_ESoundWaveLoadingBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior,(UObject *)pUVar1,
                       L"ESoundWaveLoadingBehavior");
  }
  return Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton;
}

// StaticEnum<enum_ETimelineLengthMode> @ 14733d970

UEnum * __cdecl StaticEnum<enum_ETimelineLengthMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineLengthMode,(UObject *)pUVar1,
                       L"ETimelineLengthMode");
  }
  return Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton;
}

// StaticEnum<enum_ETwitterIntegrationDelegate> @ 14733d9b0

UEnum * __cdecl StaticEnum<enum_ETwitterIntegrationDelegate>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate,(UObject *)pUVar1,
                       L"ETwitterIntegrationDelegate");
  }
  return Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton;
}

// StaticEnum<enum_ETwitterRequestMethod> @ 14733d9f0

UEnum * __cdecl StaticEnum<enum_ETwitterRequestMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterRequestMethod,(UObject *)pUVar1,
                       L"ETwitterRequestMethod");
  }
  return Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton;
}

// StaticEnum<enum_EVectorFieldConstructionOp> @ 14733da30

UEnum * __cdecl StaticEnum<enum_EVectorFieldConstructionOp>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp,(UObject *)pUVar1,
                       L"EVectorFieldConstructionOp");
  }
  return Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton;
}

// StaticEnum<enum_EWindSourceType> @ 14733da70

UEnum * __cdecl StaticEnum<enum_EWindSourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWindSourceType,(UObject *)pUVar1,L"EWindSourceType"
                      );
  }
  return Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton;
}

// StaticEnum<enum_ESplitScreenType::Type> @ 14733dab0

UEnum * __cdecl StaticEnum<enum_ESplitScreenType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESplitScreenType,(UObject *)pUVar1,
                       L"ESplitScreenType");
  }
  return Z_Registration_Info_UEnum_ESplitScreenType.OuterSingleton;
}

// StaticEnum<enum_ETimelineDirection::Type> @ 14733daf0

UEnum * __cdecl StaticEnum<enum_ETimelineDirection::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineDirection,(UObject *)pUVar1,
                       L"ETimelineDirection");
  }
  return Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton;
}

// get<1,TTuple<enum_EQuartzCommandQuantization,double>_> @ 14733db30

double * __cdecl
get<1,TTuple<enum_EQuartzCommandQuantization,double>_>
          (TTuple<EQuartzCommandQuantization,double> *param_1)

{
  return (double *)&param_1->field_0x8;
}

// get<0,TTuple<enum_EQuartzCommandQuantization,double>_> @ 14733db40

EQuartzCommandQuantization * __cdecl
get<0,TTuple<enum_EQuartzCommandQuantization,double>_>
          (TTuple<EQuartzCommandQuantization,double> *param_1)

{
  return (EQuartzCommandQuantization *)param_1;
}

// FThreadSafeStaticStat<`FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_SkeletalMesh> @ 14733dc80

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const_::_2_::FStat_FCancelIORequestsTask_SkeletalMesh>
* __thiscall
FThreadSafeStaticStat<`FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_SkeletalMesh>
::
FThreadSafeStaticStat<_FSkeletalMeshStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_SkeletalMesh>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FCancelIORequestsTask_SkeletalMesh");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FCancelIORequestsTask_SkeletalMesh","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// TExecutableTask<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::__l2::<lambda_1>_> @ 14733dda0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_void___cdecl_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>_&,FSceneInterface_*)_::_2_::<lambda_1>_>
* __thiscall
UE::Tasks::Private::
TExecutableTask<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::__l2::<lambda_1>_>::
TExecutableTask<_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch_::__l2::<lambda_1>_>
          (void *this,wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  atomic<unsigned_char> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  FAddPrimitivesTask *pFVar3;
  bool bVar4;
  ulong64 uVar5;
  TExecutableTask<_public:_void___cdecl_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>_&,FSceneInterface_*)_::_2_::<lambda_1>_>
  *pTVar6;
  FTask *pFVar7;
  ETaskPriority EVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)this = &___7FTaskBase_Private_Tasks_UE__6B_;
  *(undefined4 *)((longlong)this + 0x30) = 2;
  *(undefined4 *)((longlong)this + 0x34) = 1;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined1 *)((longlong)this + 0x45) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0xffffffff;
  uVar5 = TaskTrace::GenerateTaskId();
  *(ulong64 *)((longlong)this + 0x50) = uVar5;
  this_00 = (atomic<unsigned_char> *)((longlong)this + 0x70);
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined4 *)((longlong)this + 0x68) = 0;
  *(undefined4 *)((longlong)this + 0x6c) = 1;
  *this_00 = (atomic<unsigned_char>)0x1;
  *(undefined ***)((longlong)this + 0xa0) =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)((longlong)this + 0xb0) = 0xe800000000000020;
  *(undefined8 *)((longlong)this + 0xa8) = 0;
  *(undefined8 *)((longlong)this + 0xc0) = 0;
  *(undefined4 *)((longlong)this + 200) = 0;
  *(undefined4 *)((longlong)this + 0xcc) = 1;
  *(undefined2 *)((longlong)this + 0xd0) = 0;
  LOCK();
  aVar1 = *this_00;
  *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)this_00);
  }
  *(undefined ***)this =
       &TExecutableTaskBase<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::`2'::<lambda_1>,void,void>
        ::_vftable_;
  if (((*(ulonglong *)((longlong)this + 0xb0) & 0x20) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TExecutableTask<_public:_void___cdecl_FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch(TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>_&,FSceneInterface_*)_::_2_::<lambda_1>_>
              *)(*pcVar2)();
    return pTVar6;
  }
  (**(code **)(*(longlong *)((longlong)this + 0xa0) + 0x18))
            ((longlong)this + 0xa0,(longlong)this + 0x78);
  *(void **)((longlong)this + 0x78) = this;
  *(undefined ***)((longlong)this + 0xa0) =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(void **)((longlong)this + 0x80) = this;
  pFVar7 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar7 == (FTask *)0x0) {
    EVar8 = Default;
    if (param_3 != Inherit) {
      EVar8 = param_3;
    }
  }
  else {
    if (param_3 == Inherit) {
      param_3 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar7->field_0x38 >> 0x3b);
    }
    uVar9 = *(undefined8 *)&pFVar7->field_0x30;
    EVar8 = param_3;
  }
  *(undefined8 *)((longlong)this + 0xa8) = uVar9;
  *(ulonglong *)((longlong)this + 0xb0) =
       ((longlong)(char)EVar8 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  *(EExtendedTaskPriority *)((longlong)this + 0x44) = param_4;
  FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)((longlong)this + 8));
  pFVar3 = param_2->__this;
  *(FSceneInterface **)((longlong)this + 0xd8) = param_2->InScene;
  *(FAddPrimitivesTask **)((longlong)this + 0xe0) = pFVar3;
  *(undefined ***)this =
       &TExecutableTask<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::`2'::<lambda_1>_>::
        _vftable_;
  return this;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO'::__l2::<lambda_1>,0,0> @ 147341010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamOut::FSkeletalMeshStreamOut'::__l2::<lambda_1>,0,0> @ 147341030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::FSkeletalMeshStreamOut'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamOut::FSkeletalMeshStreamOut_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::FSkeletalMeshStreamOut'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FActiveSound::CreateVirtualCopy'::__l2::<lambda_1>,1,0> @ 147341050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::CreateVirtualCopy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FActiveSound::CreateVirtualCopy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::CreateVirtualCopy'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCancelIO'::__l2::<lambda_1>,0,0> @ 147341070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCancelIO'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::DoCancelIO_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCancelIO'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_1>,0,0> @ 147341090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::DoCreateBuffers_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_1>,0,0> @ 1473410b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::DoInitiateIO_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_1>,0,0> @ 1473410d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::DoSerializeLODData_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1> @ 1473410f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FQuartzGameThreadSubscriber::PushEvent_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1> @ 147341110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FQuartzGameThreadSubscriber::PushEvent_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1> @ 147341130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FQuartzGameThreadSubscriber::PushEvent_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x78),
             *(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x58));
  return;
}

// ~TFunction_OwnedObject<`FActiveSound::OcclusionTraceDone'::__l18::<lambda_1>,1,1> @ 147341180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::OcclusionTraceDone'::__l18::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FActiveSound::OcclusionTraceDone_::__l18::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::OcclusionTraceDone'::`18'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FActiveSound::MarkPendingDestroy'::__l37::<lambda_1>,1,0> @ 1473411a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::MarkPendingDestroy'::__l37::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FActiveSound::MarkPendingDestroy_::__l37::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::MarkPendingDestroy'::`37'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l38::<lambda_1>,0,0> @ 1473411c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l38::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamOut::WaitForReferences_::__l38::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`38'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l11::<lambda_1>,1,0> @ 1473411e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l11::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FActiveSound::UpdateWaveInstances_::__l11::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`11'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::SetIORequest'::__l15::<lambda_1>,0,0> @ 147341200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::SetIORequest'::__l15::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::SetIORequest_::__l15::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::SetIORequest'::`15'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l2::<lambda_2>,0,0> @ 147341220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_2>,0,0> @ 147341240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::DoCreateBuffers_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_2>,0,0> @ 147341260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::DoInitiateIO_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_2>,0,0> @ 147341280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamIn_IO::DoSerializeLODData_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l38::<lambda_2>,0,0> @ 1473412a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l38::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamOut::WaitForReferences_::__l38::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`38'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l114::<lambda_2>,1,1> @ 1473412c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l114::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FActiveSound::UpdateWaveInstances_::__l114::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`114'::<lambda_2>,1,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l2::<lambda_3>,0,0> @ 1473412e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FActiveSound::CheckOcclusion'::__l35::<lambda_3>,1,1> @ 147341300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::CheckOcclusion'::__l35::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FActiveSound::CheckOcclusion_::__l35::<lambda_3>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::CheckOcclusion'::`35'::<lambda_3>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l43::<lambda_3>,0,0> @ 147341320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l43::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamOut::WaitForReferences_::__l43::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`43'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l121::<lambda_3>,1,1> @ 147341340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l121::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FActiveSound::UpdateWaveInstances_::__l121::<lambda_3>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`121'::<lambda_3>,1,1>::_vftable_
  ;
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l43::<lambda_4>,0,0> @ 147341380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l43::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FSkeletalMeshStreamOut::WaitForReferences_::__l43::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`43'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// operator<< @ 1473429c0

FArchive * __cdecl operator<<(FArchive *param_1,FActiveSound *param_2)

{
  if ((param_1->field_0x28 & 5) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&param_2->Sound);
    TSetPrivateFriend::
    Serialize<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
                        *)&param_2->WaveInstances);
    TSetPrivateFriend::
    Serialize<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                        *)&param_2->SoundNodeOffsetMap);
  }
  return param_1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 147343780

/* [thunk]:public: virtual void * __ptr64 __cdecl
   Audio::Quartz::PrivateDefs::TVisitorPatternBase<class
   Audio::Quartz::IMetronomeEventListener,class Audio::Quartz::ICommandListener,class
   Audio::Quartz::IQueueCommandListener>::TElementBase<class
   Audio::Quartz::IMetronomeEventListener,class Audio::Quartz::ICommandListener,class
   Audio::Quartz::IQueueCommandListener>::`vector deleting destructor'`adjustor{8}' (unsigned int)
   __ptr64 */

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::
TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::_vector_deleting_destructor__adjustor_8__
          (TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                       *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 147343790

/* [thunk]:public: virtual void * __ptr64 __cdecl
   Audio::Quartz::PrivateDefs::TVisitorPatternBase<class
   Audio::Quartz::IMetronomeEventListener,class Audio::Quartz::ICommandListener,class
   Audio::Quartz::IQueueCommandListener>::TElementBase<class
   Audio::Quartz::IMetronomeEventListener,class Audio::Quartz::ICommandListener,class
   Audio::Quartz::IQueueCommandListener>::`vector deleting destructor'`adjustor{16}' (unsigned int)
   __ptr64 */

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::
TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::_vector_deleting_destructor__adjustor_16__
          (TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                       *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 1473437a0

/* [thunk]:public: virtual void * __ptr64 __cdecl
   Audio::Quartz::PrivateDefs::TVisitorPatternBase<class
   Audio::Quartz::IMetronomeEventListener,class Audio::Quartz::ICommandListener,class
   Audio::Quartz::IQueueCommandListener>::TElementBase<class
   Audio::Quartz::IMetronomeEventListener,class Audio::Quartz::ICommandListener,class
   Audio::Quartz::IQueueCommandListener>::`vector deleting destructor'`adjustor{24}' (unsigned int)
   __ptr64 */

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::
TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::_vector_deleting_destructor__adjustor_24__
          (TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                       *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1473437b0

/* [thunk]:public: virtual void * __ptr64 __cdecl FQuartzTickableObject::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FQuartzTickableObject::_vector_deleting_destructor__adjustor_8__
          (FQuartzTickableObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FQuartzTickableObject *)
                      &this[-1].QuartzSubscriptionToken.TickableObjectManagerPtr.WeakReferenceCount,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 1473437c0

/* [thunk]:public: virtual void * __ptr64 __cdecl FQuartzTickableObject::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FQuartzTickableObject::_vector_deleting_destructor__adjustor_16__
          (FQuartzTickableObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FQuartzTickableObject *)
                      &this[-1].QuartzSubscriptionToken.TickableObjectManagerPtr,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 1473437d0

/* [thunk]:public: virtual void * __ptr64 __cdecl FQuartzTickableObject::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FQuartzTickableObject::_vector_deleting_destructor__adjustor_24__
          (FQuartzTickableObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FQuartzTickableObject *)&this[-1].QuartzSubscriptionToken,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1473437e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UTexture2DArray::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTexture2DArray::_vector_deleting_destructor__adjustor_224__(UTexture2DArray *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTexture2DArray *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1473437f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UTexture2DArray::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTexture2DArray::_vector_deleting_destructor__adjustor_232__(UTexture2DArray *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTexture2DArray *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147343808

/* [thunk]:public: virtual void * __ptr64 __cdecl UTimelineComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UTimelineComponent::_vector_deleting_destructor__adjustor_40__
          (UTimelineComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UTimelineComponent *)&this[-1].TheTimeline.TimelineFinishFuncStatic,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 147343818

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UVectorFieldComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UVectorFieldComponent::_vector_deleting_destructor__adjustor_592__
          (UVectorFieldComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UVectorFieldComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14734382c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UVectorFieldComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UVectorFieldComponent::_vector_deleting_destructor__adjustor_600__
          (UVectorFieldComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UVectorFieldComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 147343840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UVectorFieldComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UVectorFieldComponent::_vector_deleting_destructor__adjustor_608__
          (UVectorFieldComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UVectorFieldComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147343854

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UVectorFieldComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UVectorFieldComponent::_vector_deleting_destructor__adjustor_40__
          (UVectorFieldComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UVectorFieldComponent *)&this[-1].VectorField,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147343864

/* [thunk]:public: virtual void * __ptr64 __cdecl UWindDirectionalSourceComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWindDirectionalSourceComponent::_vector_deleting_destructor__adjustor_40__
          (UWindDirectionalSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWindDirectionalSourceComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147343874

/* [thunk]:public: virtual void * __ptr64 __cdecl UWorldPartitionEditorLoaderAdapter::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWorldPartitionEditorLoaderAdapter::_vector_deleting_destructor__adjustor_40__
          (UWorldPartitionEditorLoaderAdapter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWorldPartitionEditorLoaderAdapter *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147343890

void * __thiscall
FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask>::_scalar_deleting_destructor_
          (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FSkeletalMeshStreamIn_IO *this_00;
  undefined8 *puVar3;
  
  this_00 = (this->Task).PendingUpdate.Reference;
  if (this_00 != (FSkeletalMeshStreamIn_IO *)0x0) {
    FRenderAssetUpdate::Release((FRenderAssetUpdate *)this_00);
  }
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343910

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343940

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::
TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::_scalar_deleting_destructor_
          (TElementBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343970

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::__l2::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 1473439e0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343a20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FShaderCompileJob_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FShaderCompileJob_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFShaderCompileJob___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343a60

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
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UPrimitiveComponent_const_*),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UPrimitiveComponent_const_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NPEBVUPrimitiveComponent___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::FSkeletalMeshStreamOut'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::FSkeletalMeshStreamOut'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::CreateVirtualCopy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::CreateVirtualCopy'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCancelIO'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCancelIO'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FQuartzGameThreadSubscriber::PushEvent'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((longlong)this + 0x78),
             *(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x58));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::OcclusionTraceDone'::__l18::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::OcclusionTraceDone'::`18'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::MarkPendingDestroy'::__l37::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::MarkPendingDestroy'::`37'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l38::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`38'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l11::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`11'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::SetIORequest'::__l15::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::SetIORequest'::`15'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l38::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`38'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147343fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l114::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`114'::<lambda_2>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::CheckOcclusion'::__l35::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::CheckOcclusion'::`35'::<lambda_3>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l43::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`43'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473440d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::__l121::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`121'::<lambda_3>,1,1>::_vftable_
  ;
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::__l43::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`43'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344180

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473441c0

void * __thiscall
TRenderAssetUpdate<FSkelMeshUpdateContext>::_scalar_deleting_destructor_
          (TRenderAssetUpdate<FSkelMeshUpdateContext> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344240

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::TVisitWithLambda<Audio::Quartz::ICommandListener>::_scalar_deleting_destructor_
          (TVisitWithLambda<Audio::Quartz::ICommandListener> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Lambda != 0) {
    plVar1 = *(longlong **)&(this->Lambda).field_0x28;
    plVar2 = (longlong *)&(this->Lambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473442a0

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::TVisitWithLambda<Audio::Quartz::IQueueCommandListener>::_scalar_deleting_destructor_
          (TVisitWithLambda<Audio::Quartz::IQueueCommandListener> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Lambda != 0) {
    plVar1 = *(longlong **)&(this->Lambda).field_0x28;
    plVar2 = (longlong *)&(this->Lambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344300

void * __thiscall ATriggerBox::_scalar_deleting_destructor_(ATriggerBox *this,uint param_1)

{
  *(undefined ***)this = &___7ATriggerBox__6B_;
  ATriggerBase::~ATriggerBase((ATriggerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344360

void * __thiscall ATriggerCapsule::_scalar_deleting_destructor_(ATriggerCapsule *this,uint param_1)

{
  *(undefined ***)this = &___7ATriggerCapsule__6B_;
  ATriggerBase::~ATriggerBase((ATriggerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473443c0

void * __thiscall ATriggerSphere::_scalar_deleting_destructor_(ATriggerSphere *this,uint param_1)

{
  *(undefined ***)this = &___7ATriggerSphere__6B_;
  ATriggerBase::~ATriggerBase((ATriggerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344420

void * __thiscall FActiveSound::_scalar_deleting_destructor_(FActiveSound *this,uint param_1)

{
  ~FActiveSound(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x990);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344460

void * __thiscall
FQuartzTickableObject::_scalar_deleting_destructor_(FQuartzTickableObject *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  FMetronomeDelegateGameThreadData *this_00;
  longlong lVar6;
  
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__ICommandListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQueueCommandListener__;
  FQuartzSubscriptionToken::Unsubscribe(&this->QuartzSubscriptionToken);
  FQuartzSubscriptionToken::Unsubscribe(&this->QuartzSubscriptionToken);
  pTVar3 = (this->QuartzSubscriptionToken).TickableObjectManagerPtr.WeakReferenceCount.
           ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommandQueuePtr).SharedReferenceCount.ReferenceController);
  DestructItems<TFunction<void___cdecl(FQuartzTickableObject_*)>,int>
            ((TFunction<void___cdecl(FQuartzTickableObject_*)> *)
             (this->TempCommandQueue).AllocatorInstance.Data,(this->TempCommandQueue).ArrayNum);
  pFVar4 = (this->TempCommandQueue).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this_00 = (FMetronomeDelegateGameThreadData *)&this->QuantizedCommandDelegates;
  DestructItems<FQuartzTickableObject::FCommandDelegateGameThreadData,int>
            ((FCommandDelegateGameThreadData *)
             (((TArray<FQuartzTickableObject::FCommandDelegateGameThreadData,TSizedDefaultAllocator<32>_>
                *)this_00)->AllocatorInstance).Data,(this->QuantizedCommandDelegates).ArrayNum);
  pFVar4 = (((TArray<FQuartzTickableObject::FCommandDelegateGameThreadData,TSizedDefaultAllocator<32>_>
              *)this_00)->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  lVar6 = 0x12;
  do {
    pvVar5 = *(void **)&this_00[-1].MulticastDelegate.field_0x8;
    this_00 = this_00 + -1;
    lVar6 = lVar6 + -1;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
  } while (lVar6 != 0);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473445a0

void * __thiscall
FSkeletalMeshStreamIn::_scalar_deleting_destructor_(FSkeletalMeshStreamIn *this,uint param_1)

{
  ~FSkeletalMeshStreamIn(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473445e0

void * __thiscall
FSkeletalMeshStreamIn_IO::_scalar_deleting_destructor_(FSkeletalMeshStreamIn_IO *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this = &___7FSkeletalMeshStreamIn_IO__6B_;
  this_00 = (this->BulkData).CorePtr.Reference;
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if (this->BulkDataRequest != (FBulkDataBatchRequest)0x0) {
    (**(code **)(*(longlong *)this->BulkDataRequest + 0x10))();
  }
  FSkeletalMeshStreamIn::~FSkeletalMeshStreamIn((FSkeletalMeshStreamIn *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x810);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344680

void * __thiscall
FSkeletalMeshStreamOut::_scalar_deleting_destructor_(FSkeletalMeshStreamOut *this,uint param_1)

{
  *(undefined ***)this = &___7FSkeletalMeshStreamOut__6B_;
  FSkeletalMeshUpdate::~FSkeletalMeshUpdate((FSkeletalMeshUpdate *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473446d0

void * __thiscall
FSkeletalMeshUpdate::_scalar_deleting_destructor_(FSkeletalMeshUpdate *this,uint param_1)

{
  ~FSkeletalMeshUpdate(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344710

void * __thiscall
Audio::Quartz::ICommandListener::_scalar_deleting_destructor_(ICommandListener *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344740

void * __thiscall
Audio::Quartz::PrivateDefs::
TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
::IListenerBase::_scalar_deleting_destructor_(IListenerBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344770

void * __thiscall
Audio::Quartz::IMetronomeEventListener::_scalar_deleting_destructor_
          (IMetronomeEventListener *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473447a0

void * __thiscall
Audio::Quartz::IQueueCommandListener::_scalar_deleting_destructor_
          (IQueueCommandListener *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473447d0

void * __thiscall
ISoundModulatable::_scalar_deleting_destructor_(ISoundModulatable *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344800

void * __thiscall
UMaterialExpressionMaterialSample::_scalar_deleting_destructor_
          (UMaterialExpressionMaterialSample *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialSample__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344860

void * __thiscall UTexture2DArray::_scalar_deleting_destructor_(UTexture2DArray *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473448e0

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
UTimelineComponent::_scalar_deleting_destructor_(UTimelineComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FTimeline::~FTimeline(&this->TheTimeline);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344970

void * __thiscall
UTransformProviderData::_scalar_deleting_destructor_(UTransformProviderData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTransformProviderData__6B_;
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

// `scalar_deleting_destructor' @ 1473449d0

void * __thiscall
UTwitterIntegrationBase::_scalar_deleting_destructor_(UTwitterIntegrationBase *this,uint param_1)

{
  *(undefined ***)this = &___7UTwitterIntegrationBase__6B_;
  UPlatformInterfaceBase::~UPlatformInterfaceBase((UPlatformInterfaceBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344a30

void * __thiscall
UVectorFieldAnimated::_scalar_deleting_destructor_(UVectorFieldAnimated *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UVectorFieldAnimated__6B_;
  UVectorField::~UVectorField((UVectorField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UVectorFieldComponent::_scalar_deleting_destructor_(UVectorFieldComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x570);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344b30

void * __thiscall
UVectorFieldStatic::_scalar_deleting_destructor_(UVectorFieldStatic *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVectorFieldStatic__6B_;
  pFVar1 = (this->CPUData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBulkData::~FBulkData((FBulkData *)&this->SourceData);
  UVectorField::~UVectorField((UVectorField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344bb0

void * __thiscall
UVisualLoggerDebugSnapshotInterface::_scalar_deleting_destructor_
          (UVisualLoggerDebugSnapshotInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 147344c10

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
UWindDirectionalSourceComponent::_scalar_deleting_destructor_
          (UWindDirectionalSourceComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147344c90

void * __thiscall
UWorldPartitionEditorLoaderAdapter::_scalar_deleting_destructor_
          (UWorldPartitionEditorLoaderAdapter *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IWorldPartitionActorLoaderInterface__6B_;
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

// EmptyLinkFunctionForGeneratedCodeAttributeCurve @ 14734c210

void __cdecl EmptyLinkFunctionForGeneratedCodeAttributeCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialSample @ 14734c220

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialSample(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeQuartzQuantizationUtilities @ 14734c230

void __cdecl EmptyLinkFunctionForGeneratedCodeQuartzQuantizationUtilities(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundWaveLoadingBehavior @ 14734c240

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundWaveLoadingBehavior(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTexture2DArray @ 14734c250

void __cdecl EmptyLinkFunctionForGeneratedCodeTexture2DArray(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureStreamingTypes @ 14734c260

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureStreamingTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTimelineComponent @ 14734c270

void __cdecl EmptyLinkFunctionForGeneratedCodeTimelineComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformProviderData @ 14734c280

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformProviderData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTriggerBox @ 14734c290

void __cdecl EmptyLinkFunctionForGeneratedCodeTriggerBox(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTriggerCapsule @ 14734c2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeTriggerCapsule(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTriggerSphere @ 14734c2b0

void __cdecl EmptyLinkFunctionForGeneratedCodeTriggerSphere(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTwitterIntegrationBase @ 14734c2c0

void __cdecl EmptyLinkFunctionForGeneratedCodeTwitterIntegrationBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVectorFieldAnimated @ 14734c2d0

void __cdecl EmptyLinkFunctionForGeneratedCodeVectorFieldAnimated(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVectorFieldComponent @ 14734c2e0

void __cdecl EmptyLinkFunctionForGeneratedCodeVectorFieldComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVectorFieldStatic @ 14734c2f0

void __cdecl EmptyLinkFunctionForGeneratedCodeVectorFieldStatic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeViewportSplitScreen @ 14734c300

void __cdecl EmptyLinkFunctionForGeneratedCodeViewportSplitScreen(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVisualLoggerDebugSnapshotInterface @ 14734c310

void __cdecl EmptyLinkFunctionForGeneratedCodeVisualLoggerDebugSnapshotInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWindDirectionalSourceComponent @ 14734c320

void __cdecl EmptyLinkFunctionForGeneratedCodeWindDirectionalSourceComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionActorContainerID @ 14734c330

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionActorContainerID(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorLoaderAdapter @ 14734c340

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorLoaderAdapter(void)

{
  return;
}

// EnumToString @ 14734c510

wchar_t * __cdecl EnumToString(ESoundWaveLoadingBehavior param_1)

{
  wchar_t *pwVar1;
  
  if (LoadOnDemand < param_1) {
    if (param_1 != ForceInline) {
      pwVar1 = L"ESoundWaveLoadingBehavior::Uninitialized";
      if (param_1 != Uninitialized) {
        pwVar1 = L"Unknown";
      }
      return pwVar1;
    }
    return L"ESoundWaveLoadingBehavior::ForceInline";
  }
  if (param_1 == LoadOnDemand) {
    return L"ESoundWaveLoadingBehavior::LoadOnDemand";
  }
  if (param_1 == Inherited) {
    return L"ESoundWaveLoadingBehavior::Inherited";
  }
  if (param_1 != RetainOnLoad) {
    if (param_1 != PrimeOnLoad) {
      return L"Unknown";
    }
    return L"ESoundWaveLoadingBehavior::PrimeOnLoad";
  }
  return L"ESoundWaveLoadingBehavior::RetainOnLoad";
}

// FOnQuartzCommandEventBP_DelegateWrapper @ 14734cd20

void __cdecl
FOnQuartzCommandEventBP_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EQuartzCommandDelegateSubType param_2,FName param_3)

{
  EQuartzCommandDelegateSubType local_18 [4];
  FName local_14;
  
  local_18[0] = param_2;
  local_14 = param_3;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_18);
  return;
}

// FOnQuartzCommandEvent_DelegateWrapper @ 14734cd50

void __cdecl
FOnQuartzCommandEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EQuartzCommandDelegateSubType param_2,FName param_3)

{
  EQuartzCommandDelegateSubType local_18 [4];
  FName local_14;
  
  local_18[0] = param_2;
  local_14 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_18);
  return;
}

// FOnQuartzMetronomeEventBP_DelegateWrapper @ 14734cd80

void __cdecl
FOnQuartzMetronomeEventBP_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2,
          EQuartzCommandQuantization param_3,int param_4,int param_5,float param_6)

{
  FName local_28;
  EQuartzCommandQuantization local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_14 = param_6;
  local_18 = param_5;
  local_28 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_28);
  return;
}

// FOnQuartzMetronomeEvent_DelegateWrapper @ 14734cdc0

void __cdecl
FOnQuartzMetronomeEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2,
          EQuartzCommandQuantization param_3,int param_4,int param_5,float param_6)

{
  FName local_28;
  EQuartzCommandQuantization local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_14 = param_6;
  local_18 = param_5;
  local_28 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FOnTimelineEvent_DelegateWrapper @ 14734ce00

void __cdecl FOnTimelineEvent_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,(void *)0x0);
  return;
}

// FOnTimelineFloat_DelegateWrapper @ 14734ce10

void __cdecl
FOnTimelineFloat_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return;
}

// FOnTimelineLinearColor_DelegateWrapper @ 14734ce30

void __cdecl
FOnTimelineLinearColor_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FLinearColor *param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *(undefined8 *)&param_2->field0_0x0;
  uStack_10 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  return;
}

// FOnTimelineVector_DelegateWrapper @ 14734ce60

void __cdecl
FOnTimelineVector_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,TVector<double> *param_2)

{
  double local_28;
  double dStack_20;
  double local_18;
  
  local_28 = (param_2->field0_0x0)._s_0.X;
  dStack_20 = (param_2->field0_0x0)._s_0.Y;
  local_18 = (param_2->field0_0x0)._s_0.Z;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_28);
  return;
}

// FormatUnsupportedMaterialDomainError @ 14734d810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
MaterialExpressionUtils::FormatUnsupportedMaterialDomainError
          (FString *__return_storage_ptr__,FMaterialExternalCodeDeclaration *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  void *pvVar3;
  FString *pFVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 auStack_8d8 [32];
  wchar_t *local_8b8;
  undefined1 local_8a8 [4];
  uint local_8a4;
  FName *local_8a0;
  FString *local_898;
  FString local_890;
  FString local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8d8;
  pFVar9 = (param_1->Domains).AllocatorInstance.Data;
  local_868.Base = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.CurPos = local_848;
  local_8a4 = (param_1->Domains).ArrayNum;
  uVar6 = (ulonglong)(int)local_8a4;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  pFVar1 = pFVar9 + uVar6;
  local_8a0 = param_2;
  local_898 = __return_storage_ptr__;
  do {
    iVar10 = 0;
    if ((param_1->Domains).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<TEnumAsByte<enum_EMaterialDomain>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_8a8);
    }
    if (pFVar9 == pFVar1) {
      if (local_868.End < local_868.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
      }
      pwVar8 = local_868.Base;
      *local_868.CurPos = L'\0';
      ::FName::ToString(local_8a0,&local_880);
      ::FName::ToString(&param_1->Name,&local_890);
      pFVar4 = local_898;
      local_8b8 = pwVar8;
      ::FString::PrintfImpl
                (local_898,
                 L"External code \'%s\' (asset: %s) is only available in the following material domains: %s"
                );
      if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_890.Data.AllocatorInstance.Data);
      }
      if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_880.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      return pFVar4;
    }
    FVar2 = *pFVar9;
    if (0 < (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1)) {
      if (local_868.End < local_868.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,2);
      }
      pvVar3 = FGenericPlatformString::Memcpy(local_868.CurPos,L", ",4);
      local_868.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
    }
    pFVar4 = MaterialDomainString(&local_890,(uint)(byte)FVar2);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar8 = L"";
LAB_14734d914:
      sVar5 = wcslen(pwVar8);
      iVar10 = (int)sVar5;
    }
    else {
      pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_14734d914;
    }
    uVar7 = (ulong64)iVar10;
    if (local_868.End < local_868.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar7);
    }
    if (iVar10 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy(local_868.CurPos,pwVar8,uVar7 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar3 + uVar7 * 2);
    }
    if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_890.Data.AllocatorInstance.Data);
    }
    uVar6 = (ulonglong)local_8a4;
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// GetLogFrequencyClamped @ 14734f700

float __cdecl
Audio::GetLogFrequencyClamped(float param_1,TVector2<double> *param_2,TVector2<double> *param_3)

{
  double dVar1;
  double _X;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 uVar7;
  double dVar6;
  uint uVar8;
  uint uVar9;
  double dVar10;
  
  _X = (double)param_1;
  if (_X < (param_2->field0_0x0)._s_0.X || _X == (param_2->field0_0x0)._s_0.X) {
    return (float)(param_3->field0_0x0)._s_0.X;
  }
  if (_X < (param_2->field0_0x0)._s_0.Y) {
    iVar2 = _isnan(_X);
    if (iVar2 == 0) {
      dVar5 = log((param_3->field0_0x0)._s_0.Y);
      uVar3 = SUB84(dVar5,0);
      uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (__real_47eff933c0000000 <= dVar5) {
        uVar3 = SUB84(__real_47eff933c0000000,0);
        uVar7 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
      }
      dVar6 = log((param_3->field0_0x0)._s_0.X);
      dVar5 = (param_2->field0_0x0)._s_0.Y;
      dVar1 = (param_2->field0_0x0)._s_0.X;
      if (dVar6 <= __real_3e45798ee0000000) {
        dVar6 = __real_3e45798ee0000000;
      }
      dVar10 = dVar5 - dVar1;
      uVar8 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar9 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
          (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a) {
        dVar1 = (_X - dVar1) / dVar10;
      }
      else {
        dVar1 = __real_3ff0000000000000;
        if (_X < dVar5) {
          dVar1 = 0.0;
        }
      }
      fVar4 = expf((float)(((double)CONCAT44(uVar7,uVar3) - dVar6) * dVar1 + dVar6));
      return fVar4;
    }
    return (float)(param_3->field0_0x0)._s_0.X;
  }
  return (float)(param_3->field0_0x0)._s_0.Y;
}

// GetTypeHash @ 147350f40

uint __cdecl GetTypeHash(FActorContainerPath *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  int iVar8;
  FGuid local_28;
  FGuid local_18;
  
  iVar8 = (param_1->ContainerGuids).ArrayNum;
  if (iVar8 < 1) {
    return 0;
  }
  pFVar1 = (param_1->ContainerGuids).AllocatorInstance.Data;
  uVar5 = 1;
  local_28._0_8_ = *(undefined8 *)pFVar1;
  local_28._8_8_ = *(undefined8 *)(pFVar1 + 8);
  if (1 < iVar8) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar8) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
      pFVar6 = FGuid::Combine(&local_18,&local_28,
                              (FGuid *)((param_1->ContainerGuids).AllocatorInstance.Data +
                                       (longlong)(int)uVar5 * 0x10));
      iVar8 = (param_1->ContainerGuids).ArrayNum;
      uVar5 = uVar5 + 1;
      local_28.A = pFVar6->A;
      local_28.B = pFVar6->B;
      local_28.C = pFVar6->C;
      local_28.D = pFVar6->D;
    } while ((int)uVar5 < iVar8);
  }
  uVar7 = CityHash64((char *)&local_28,0x10);
  return (uint)uVar7;
}

// TimeSignatureQuantizationToCommandQuantization @ 14735a140

EQuartzCommandQuantization __cdecl
TimeSignatureQuantizationToCommandQuantization(EQuartzTimeSignatureQuantization *param_1)

{
  EQuartzTimeSignatureQuantization EVar1;
  
  EVar1 = *param_1;
  if (EVar1 == HalfNote) {
    return HalfNote;
  }
  if (EVar1 == QuarterNote) {
    return QuarterNote;
  }
  if (EVar1 == EighthNote) {
    return EighthNote;
  }
  if (EVar1 != SixteenthNote) {
    if (EVar1 != ThirtySecondNote) {
      return Count;
    }
    return ThirtySecondNote;
  }
  return SixteenthNote;
}

// Z_Construct_UClass_ATriggerBox_NoRegister @ 14735fb10

UClass * __cdecl Z_Construct_UClass_ATriggerBox_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerBox",
               &Z_Registration_Info_UClass_ATriggerBox.InnerSingleton,
               ATriggerBox::StaticRegisterNativesATriggerBox,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ATriggerBox>,
               InternalVTableHelperCtorCaller<ATriggerBox>,local_res8,ATriggerBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerBox.InnerSingleton;
}

// Z_Construct_UClass_ATriggerCapsule_NoRegister @ 14735fbd0

UClass * __cdecl Z_Construct_UClass_ATriggerCapsule_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerCapsule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerCapsule",
               &Z_Registration_Info_UClass_ATriggerCapsule.InnerSingleton,
               ATriggerCapsule::StaticRegisterNativesATriggerCapsule,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATriggerCapsule>,InternalVTableHelperCtorCaller<ATriggerCapsule>,
               local_res8,ATriggerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerCapsule.InnerSingleton;
}

// Z_Construct_UClass_ATriggerSphere_NoRegister @ 14735fc90

UClass * __cdecl Z_Construct_UClass_ATriggerSphere_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerSphere",
               &Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton,
               ATriggerSphere::StaticRegisterNativesATriggerSphere,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATriggerSphere>,InternalVTableHelperCtorCaller<ATriggerSphere>,
               local_res8,ATriggerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerSphere.InnerSingleton;
}

// Z_Construct_UClass_UMaterialExpressionMaterialSample_NoRegister @ 14735fd50

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionMaterialSample_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialSample",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton,
               UMaterialExpressionMaterialSample::
               StaticRegisterNativesUMaterialExpressionMaterialSample,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialSample>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton;
}

// Z_Construct_UClass_UTexture2DArray_NoRegister @ 14735fe10

UClass * __cdecl Z_Construct_UClass_UTexture2DArray_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2DArray",
               &Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton,
               UTexture2DArray::StaticRegisterNativesUTexture2DArray,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTexture2DArray>,
               InternalVTableHelperCtorCaller<UTexture2DArray>,local_res8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton;
}

// Z_Construct_UClass_UTimelineComponent_NoRegister @ 14735fed0

UClass * __cdecl Z_Construct_UClass_UTimelineComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TimelineComponent",
               &Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton,
               UTimelineComponent::StaticRegisterNativesUTimelineComponent,0x178,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UTimelineComponent>,
               InternalVTableHelperCtorCaller<UTimelineComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimelineComponent.InnerSingleton;
}

// Z_Construct_UClass_UTransformProviderData_NoRegister @ 14735ff90

UClass * __cdecl Z_Construct_UClass_UTransformProviderData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransformProviderData",
               &Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton,
               UTransformProviderData::StaticRegisterNativesUTransformProviderData,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransformProviderData>,
               InternalVTableHelperCtorCaller<UTransformProviderData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton;
}

// Z_Construct_UClass_UTwitterIntegrationBase_NoRegister @ 147360040

UClass * __cdecl Z_Construct_UClass_UTwitterIntegrationBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TwitterIntegrationBase",
               &Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton,
               UTwitterIntegrationBase::StaticRegisterNativesUTwitterIntegrationBase,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTwitterIntegrationBase>,
               InternalVTableHelperCtorCaller<UTwitterIntegrationBase>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton;
}

// Z_Construct_UClass_UVectorFieldAnimated_NoRegister @ 147360100

UClass * __cdecl Z_Construct_UClass_UVectorFieldAnimated_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldAnimated",
               &Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton,
               UVectorFieldAnimated::StaticRegisterNativesUVectorFieldAnimated,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVectorFieldAnimated>,
               InternalVTableHelperCtorCaller<UVectorFieldAnimated>,local_res8,
               UVectorField::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton;
}

// Z_Construct_UClass_UVectorFieldComponent_NoRegister @ 1473601c0

UClass * __cdecl Z_Construct_UClass_UVectorFieldComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldComponent",
               &Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton,
               UVectorFieldComponent::StaticRegisterNativesUVectorFieldComponent,0x570,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UVectorFieldComponent>,
               InternalVTableHelperCtorCaller<UVectorFieldComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldComponent.InnerSingleton;
}

// Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister @ 147360280

UClass * __cdecl Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerDebugSnapshotInterface",
               &Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton,
               UVisualLoggerDebugSnapshotInterface::
               StaticRegisterNativesUVisualLoggerDebugSnapshotInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UVisualLoggerDebugSnapshotInterface>,
               InternalVTableHelperCtorCaller<UVisualLoggerDebugSnapshotInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton;
}

// Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister @ 147360340

UClass * __cdecl Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WindDirectionalSourceComponent",
               &Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton,
               UWindDirectionalSourceComponent::StaticRegisterNativesUWindDirectionalSourceComponent
               ,0x270,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWindDirectionalSourceComponent>,
               InternalVTableHelperCtorCaller<UWindDirectionalSourceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister @ 147360400

UClass * __cdecl Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorLoaderAdapter",
               &Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton,
               UWorldPartitionEditorLoaderAdapter::
               StaticRegisterNativesUWorldPartitionEditorLoaderAdapter,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionEditorLoaderAdapter>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorLoaderAdapter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature @ 1473604b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature @ 1473604f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature @ 147360530

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature @ 147360570

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EQuartzCommandType @ 1473605b0

UEnum * __cdecl Z_Construct_UEnum_Engine_EQuartzCommandType(void)

{
  if (Z_Registration_Info_UEnum_EQuartzCommandType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EQuartzCommandType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EQuartzCommandType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EQuartzCommandType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EQuartzDelegateType @ 1473605f0

UEnum * __cdecl Z_Construct_UEnum_Engine_EQuartzDelegateType(void)

{
  if (Z_Registration_Info_UEnum_EQuartzDelegateType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EQuartzDelegateType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EQuartzDelegateType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EQuartzDelegateType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior @ 147360630

UEnum * __cdecl Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior(void)

{
  if (Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESplitScreenType @ 147360670

UEnum * __cdecl Z_Construct_UEnum_Engine_ESplitScreenType(void)

{
  if (Z_Registration_Info_UEnum_ESplitScreenType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESplitScreenType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESplitScreenType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESplitScreenType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETimelineDirection @ 1473606b0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETimelineDirection(void)

{
  if (Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETimelineDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate @ 1473606f0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate(void)

{
  if (Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.InnerSingleton;
}

// Z_Construct_UScriptStruct_FActorContainerID @ 147360730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorContainerID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorContainerID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorContainerID.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorContainerID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorContainerID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorContainerID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FActorContainerPath @ 1473607b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorContainerPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorContainerPath.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorContainerPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorContainerPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorContainerPath.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FActorContainerPath.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAttributeCurve @ 147360830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAttributeCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAttributeCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAttributeCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FAttributeCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAttributeCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAttributeCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FQuartzClockSettings @ 1473608b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQuartzClockSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FQuartzClockSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FQuartzClockSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FQuartzClockSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FQuartzClockSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FQuartzClockSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FQuartzQuantizationBoundary @ 147360930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQuartzQuantizationBoundary(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FQuartzQuantizationBoundary.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FQuartzQuantizationBoundary.InnerSingleton,
               &Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FQuartzQuantizationBoundary.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FQuartzQuantizationBoundary.InnerSingleton;
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

// Z_Construct_UScriptStruct_FQuartzTransportTimeStamp @ 1473609b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQuartzTransportTimeStamp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FQuartzTransportTimeStamp.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FQuartzTransportTimeStamp.InnerSingleton,
               &Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FQuartzTransportTimeStamp.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FQuartzTransportTimeStamp.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo @ 147360a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStreamingRenderAssetPrimitiveInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStreamingRenderAssetPrimitiveInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStreamingRenderAssetPrimitiveInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStreamingRenderAssetPrimitiveInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStreamingTextureBuildInfo @ 147360ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStreamingTextureBuildInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStreamingTextureBuildInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStreamingTextureBuildInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStreamingTextureBuildInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStreamingTextureBuildInfo.InnerSingleton;
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

// ActiveSoundTraceDelegate'' @ 1503e5930

void __cdecl `dynamic_atexit_destructor_for_'FActiveSound::ActiveSoundTraceDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FActiveSound::ActiveSoundTraceDelegate,(FWriteAccessScope *)&local_28);
  if ((FActiveSound::ActiveSoundTraceDelegate._16_4_ != 0) &&
     (FActiveSound::ActiveSoundTraceDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FActiveSound::ActiveSoundTraceDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FActiveSound::ActiveSoundTraceDelegate.field_0x8,0,0,0x10);
    FActiveSound::ActiveSoundTraceDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FActiveSound::ActiveSoundTraceDelegate._8_8_ != 0) {
    FMemory::Free((void *)FActiveSound::ActiveSoundTraceDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FActiveSound::ActiveSoundTraceDelegate);
  return;
}

// TraceToActiveSoundMap'' @ 1503e59d0

void __cdecl `dynamic_atexit_destructor_for_'FActiveSound::TraceToActiveSoundMap__(void)

{
  FActiveSound::TraceToActiveSoundMap._72_4_ = 0;
  if (FActiveSound::TraceToActiveSoundMap._64_8_ != 0) {
    FMemory::Free((void *)FActiveSound::TraceToActiveSoundMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FTraceHandle,FActiveSound::FAsyncTraceDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTraceHandle,FActiveSound::FAsyncTraceDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTraceHandle,FActiveSound::FAsyncTraceDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FActiveSound::TraceToActiveSoundMap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowTexture2DArrayAssetCreation'' @ 1503e5a10

void __cdecl _dynamic_atexit_destructor_for__CVarAllowTexture2DArrayAssetCreation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowTexture2DArrayAssetCreation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioLinkSpatializeAllSounds'' @ 1503e5a30

void __cdecl _dynamic_atexit_destructor_for__CVarAudioLinkSpatializeAllSounds__(void)

{
  CVarAudioLinkSpatializeAllSounds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAudioLinkSpatializeAllSounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioOcclusionEnabled'' @ 1503e5a50

void __cdecl _dynamic_atexit_destructor_for__CVarAudioOcclusionEnabled__(void)

{
  CVarAudioOcclusionEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAudioOcclusionEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDecrementSlotIndexOnStarted'' @ 1503e5a70

void __cdecl _dynamic_atexit_destructor_for__CVarDecrementSlotIndexOnStarted__(void)

{
  CVarDecrementSlotIndexOnStarted._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDecrementSlotIndexOnStarted);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnabled'' @ 1503e5a90

void __cdecl
LevelStreaming::AsyncRegisterLevelContext::_dynamic_atexit_destructor_for__CVarEnabled__(void)

{
  CVarEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFocusDependsOnSpatialization'' @ 1503e5ab0

void __cdecl _dynamic_atexit_destructor_for__CVarFocusDependsOnSpatialization__(void)

{
  CVarFocusDependsOnSpatialization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFocusDependsOnSpatialization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGatherInteriorDataFromAudioVolumes'' @ 1503e5ad0

void __cdecl _dynamic_atexit_destructor_for__CVarGatherInteriorDataFromAudioVolumes__(void)

{
  CVarGatherInteriorDataFromAudioVolumes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGatherInteriorDataFromAudioVolumes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGatherInteriorDataFromIActiveSoundUpdate'' @ 1503e5af0

void __cdecl _dynamic_atexit_destructor_for__CVarGatherInteriorDataFromIActiveSoundUpdate__(void)

{
  CVarGatherInteriorDataFromIActiveSoundUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGatherInteriorDataFromIActiveSoundUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIncludeModulationInConcurrencyEvaluation'' @ 1503e5b10

void __cdecl _dynamic_atexit_destructor_for__CVarIncludeModulationInConcurrencyEvaluation__(void)

{
  CVarIncludeModulationInConcurrencyEvaluation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIncludeModulationInConcurrencyEvaluation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInitializeFocusFactorOnFirstUpdateCVar'' @ 1503e5b30

void __cdecl _dynamic_atexit_destructor_for__CVarInitializeFocusFactorOnFirstUpdateCVar__(void)

{
  CVarInitializeFocusFactorOnFirstUpdateCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarInitializeFocusFactorOnFirstUpdateCVar);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOverrideSeekStartTime'' @ 1503e5b50

void __cdecl _dynamic_atexit_destructor_for__CVarOverrideSeekStartTime__(void)

{
  CVarOverrideSeekStartTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOverrideSeekStartTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrimitiveBatchSize'' @ 1503e5b70

void __cdecl
LevelStreaming::AsyncRegisterLevelContext::_dynamic_atexit_destructor_for__CVarPrimitiveBatchSize__
          (void)

{
  CVarPrimitiveBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrimitiveBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSupportsTexture2DArrayStreaming'' @ 1503e5b90

void __cdecl _dynamic_atexit_destructor_for__CVarSupportsTexture2DArrayStreaming__(void)

{
  CVarSupportsTexture2DArrayStreaming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSupportsTexture2DArrayStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseAsyncOcclusionTraces'' @ 1503e5bb0

void __cdecl _dynamic_atexit_destructor_for__CVarUseAsyncOcclusionTraces__(void)

{
  CVarUseAsyncOcclusionTraces._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseAsyncOcclusionTraces);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503e5bd0

void __cdecl
``FSkeletalMeshStreamIn::CreateBuffers'::__l15::<lambda_1>::operator()<FName>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503e5bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioQuartz'' @ 1503e5bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioQuartz__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioQuartz);
  return;
}

