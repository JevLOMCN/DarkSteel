// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 530

// Attributes'' @ 1410d6810

void __cdecl `dynamic_initializer_for_'UE::Anim::FAttributes::Attributes__(void)

{
  ::FName::FName(&UE::Anim::FAttributes::Attributes,"Attributes");
  return;
}

// Curves'' @ 1410d6830

void __cdecl `dynamic_initializer_for_'UE::Anim::FAttributes::Curves__(void)

{
  ::FName::FName(&UE::Anim::FAttributes::Curves,"Curves");
  return;
}

// DefaultMarkerNames'' @ 1410d6850

void __cdecl `dynamic_initializer_for_'FMarkerTickContext::DefaultMarkerNames__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMarkerTickContext::DefaultMarkerNames__);
  return;
}

// Null'' @ 1410d6870

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValue::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__);
  return;
}

// Null'' @ 1410d6890

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__);
  return;
}

// Pose'' @ 1410d68b0

void __cdecl `dynamic_initializer_for_'UE::Anim::FAttributes::Pose__(void)

{
  ::FName::FName(&UE::Anim::FAttributes::Pose,"Pose");
  return;
}

// TypeName'' @ 1410d68d0

void __cdecl `dynamic_initializer_for_'UE::Anim::FActiveStateMachineScope::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FActiveStateMachineScope::TypeName,L"FActiveStateMachineScope");
  return;
}

// TypeName'' @ 1410d68f0

void __cdecl `dynamic_initializer_for_'UE::Anim::FAnimBlendDebugScope::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FAnimBlendDebugScope::TypeName,L"UE::Anim::FAnimBlendDebugScope");
  return;
}

// TypeName'' @ 1410d6910

void __cdecl `dynamic_initializer_for_'UE::Anim::FAnimNotifyMontageInstanceContext::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FAnimNotifyMontageInstanceContext::TypeName,
                 L"FAnimNotifyMontageInstanceContext");
  return;
}

// TypeName'' @ 1410d6930

void __cdecl `dynamic_initializer_for_'UE::Anim::FAnimNotifyStateMachineContext::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FAnimNotifyStateMachineContext::TypeName,
                 L"FAnimNotifyStateMachineContext");
  return;
}

// `dynamic_initializer_for_'AverageFPS'' @ 1410d6950

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__AverageFPS__(void)

{
  ::FString::FString(&AverageFPS.Key,L"AverageFPS");
  atexit(_dynamic_atexit_destructor_for__AverageFPS__);
  return;
}

// `dynamic_initializer_for_'CVarAccumulateLocalSpaceAdditivePose'' @ 1410d6980

void __cdecl _dynamic_initializer_for__CVarAccumulateLocalSpaceAdditivePose__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAccumulateLocalSpaceAdditivePose,L"a.AccumulateLocalSpaceAdditivePose.ISPC",
             &bAnim_AccumulateLocalSpaceAdditivePose_ISPC_Enabled,
             L"Whether to use ISPC optimizations for accumulating local space additive pose",0);
  atexit(_dynamic_atexit_destructor_for__CVarAccumulateLocalSpaceAdditivePose__);
  return;
}

// `dynamic_initializer_for_'CVarBlendCurvesISPCEnabled'' @ 1410d69d0

void __cdecl _dynamic_initializer_for__CVarBlendCurvesISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlendCurvesISPCEnabled,L"a.BlendCurves.ISPC",&bAnim_BlendCurves_ISPC_Enabled,
             L"Whether to use ISPC optimizations for curve blending",0);
  atexit(_dynamic_atexit_destructor_for__CVarBlendCurvesISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarBlendPoseAccumulateISPCEnabled'' @ 1410d6a20

void __cdecl _dynamic_initializer_for__CVarBlendPoseAccumulateISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlendPoseAccumulateISPCEnabled,L"a.BlendPoseAccumulate.ISPC",
             &bAnim_BlendPoseAccumulate_ISPC_Enabled,
             L"Whether to use ISPC optimizations for accumulation pose blending",0);
  atexit(_dynamic_atexit_destructor_for__CVarBlendPoseAccumulateISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarBlendPoseOverwriteISPCEnabled'' @ 1410d6a70

void __cdecl _dynamic_initializer_for__CVarBlendPoseOverwriteISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlendPoseOverwriteISPCEnabled,L"a.BlendPoseOverwrite.ISPC",
             &bAnim_BlendPoseOverwrite_ISPC_Enabled,
             L"Whether to use ISPC optimizations for over-write pose blending",0);
  atexit(_dynamic_atexit_destructor_for__CVarBlendPoseOverwriteISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarBlendPosesPerBoneFilter'' @ 1410d6ac0

void __cdecl _dynamic_initializer_for__CVarBlendPosesPerBoneFilter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlendPosesPerBoneFilter,L"a.BlendPosesPerBoneFilter.ISPC",
             &bAnim_BlendPosesPerBoneFilter_ISPC_Enabled,
             L"Whether to use ISPC optimizations for blending poses with a per-bone filter",0);
  atexit(_dynamic_atexit_destructor_for__CVarBlendPosesPerBoneFilter__);
  return;
}

// `dynamic_initializer_for_'CVarCompressionJsonOutput'' @ 1410d6b10

void __cdecl _dynamic_initializer_for__CVarCompressionJsonOutput__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCompressionJsonOutput,L"a.Compression.CompressibleDataOutput",
             &GCompressionJsonOutput,
             L"Whether to output any JSON file containing the compressible data. (comma delimited)\n position: output track positional data\n rotation: output track rotational data\n scale: output track scale data\n curve: output rich curve data\n"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarCompressionJsonOutput__);
  return;
}

// `dynamic_initializer_for_'CVarConvertMeshRotationPoseToLocalSpace'' @ 1410d6b60

void __cdecl _dynamic_initializer_for__CVarConvertMeshRotationPoseToLocalSpace__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarConvertMeshRotationPoseToLocalSpace,L"a.ConvertMeshRotationPoseToLocalSpace.ISPC",
             &bAnim_ConvertMeshRotationPoseToLocalSpace_ISPC_Enabled,
             L"Whether to use ISPC optimizations for converting mesh space rotations to local space"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarConvertMeshRotationPoseToLocalSpace__);
  return;
}

// `dynamic_initializer_for_'CVarConvertPoseToAdditiveISPCEnabled'' @ 1410d6bb0

void __cdecl _dynamic_initializer_for__CVarConvertPoseToAdditiveISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarConvertPoseToAdditiveISPCEnabled,L"a.ConvertPoseToAdditive.ISPC",
             &bAnim_ConvertPoseToAdditive_ISPC_Enabled,
             L"Whether to use ISPC optimizations for converting poses to additive poses",0);
  atexit(_dynamic_atexit_destructor_for__CVarConvertPoseToAdditiveISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarConvertPoseToMeshRotationISPCEnabled'' @ 1410d6c00

void __cdecl _dynamic_initializer_for__CVarConvertPoseToMeshRotationISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarConvertPoseToMeshRotationISPCEnabled,L"a.ConvertPoseToMeshRotation.ISPC",
             &bAnim_ConvertPoseToMeshRotation_ISPC_Enabled,
             L"Whether to use ISPC optimizations for converting local space rotations to mesh space"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarConvertPoseToMeshRotationISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarLerpBoneTransformsISPCEnabled'' @ 1410d6c50

void __cdecl _dynamic_initializer_for__CVarLerpBoneTransformsISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLerpBoneTransformsISPCEnabled,L"a.LerpBoneTransforms.ISPC",
             &bAnim_LerpBoneTransforms_ISPC_Enabled,
             L"Whether to use ISPC optimizations for interpolating bone transforms",0);
  atexit(_dynamic_atexit_destructor_for__CVarLerpBoneTransformsISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarMemoryForAnimBankAssetCompile'' @ 1410d6ca0

void __cdecl _dynamic_initializer_for__CVarMemoryForAnimBankAssetCompile__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x200;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMemoryForAnimBankAssetCompile,L"Memory.MemoryForAnimBankAssetCompile",local_res8,
             L"Memory in MiB set aside for a AnimBank asset compile job\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMemoryForAnimBankAssetCompile__);
  return;
}

// `dynamic_initializer_for_'CVarRPCDoSAnalyticsMaxRPCs'' @ 1410d6cf0

void __cdecl _dynamic_initializer_for__CVarRPCDoSAnalyticsMaxRPCs__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x14;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRPCDoSAnalyticsMaxRPCs,L"net.RPCDoSAnalyticsMaxRPCs",local_res8,
             L"The top \'x\' number of RPC\'s to include in RPC DoS analytics, ranked by RPC rate per Second."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRPCDoSAnalyticsMaxRPCs__);
  return;
}

// `dynamic_initializer_for_'CVarSpoofFailedAnimationChunkLoad'' @ 1410d6d40

void __cdecl _dynamic_initializer_for__CVarSpoofFailedAnimationChunkLoad__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSpoofFailedAnimationChunkLoad,L"a.Streaming.SpoofFailedChunkLoad",
             &SpoofFailedAnimationChunkLoad,
             L"Forces failing to load streamed animation chunks.\n0: Not Enabled, 1: Enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarSpoofFailedAnimationChunkLoad__);
  return;
}

// `dynamic_initializer_for_'EngineTickCount'' @ 1410d6d90

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__EngineTickCount__(void)

{
  ::FString::FString(&EngineTickCount.Key,L"EngineTickCount");
  atexit(_dynamic_atexit_destructor_for__EngineTickCount__);
  return;
}

// `dynamic_initializer_for_'GCompressionJsonOutput'' @ 1410d6dc0

void __cdecl _dynamic_initializer_for__GCompressionJsonOutput__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCompressionJsonOutput__);
  return;
}

// `dynamic_initializer_for_'GModifyRPCDoSAnalytics'' @ 1410d6de0

void __cdecl _dynamic_initializer_for__GModifyRPCDoSAnalytics__(void)

{
  atexit(_dynamic_atexit_destructor_for__GModifyRPCDoSAnalytics__);
  return;
}

// `dynamic_initializer_for_'GModifyRPCDoSEscalationAnalytics'' @ 1410d6e00

void __cdecl _dynamic_initializer_for__GModifyRPCDoSEscalationAnalytics__(void)

{
  atexit(_dynamic_atexit_destructor_for__GModifyRPCDoSEscalationAnalytics__);
  return;
}

// `dynamic_initializer_for_'IsCrashing'' @ 1410d6e20

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__IsCrashing__(void)

{
  ::FString::FString(&IsCrashing.Key,L"IsCrash");
  atexit(_dynamic_atexit_destructor_for__IsCrashing__);
  return;
}

// `dynamic_initializer_for_'IsCrcMissing'' @ 1410d6e50

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__IsCrcMissing__(void)

{
  ::FString::FString(&IsCrcMissing.Key,L"IsCrcMissing");
  atexit(_dynamic_atexit_destructor_for__IsCrcMissing__);
  return;
}

// `dynamic_initializer_for_'IsGpuCrash'' @ 1410d6e80

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__IsGpuCrash__(void)

{
  ::FString::FString(&IsGpuCrash.Key,L"GPUCrash");
  atexit(_dynamic_atexit_destructor_for__IsGpuCrash__);
  return;
}

// `dynamic_initializer_for_'IsLowDriveSpace'' @ 1410d6eb0

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__IsLowDriveSpace__(void)

{
  ::FString::FString(&IsLowDriveSpace.Key,L"IsLowDriveSpace");
  atexit(_dynamic_atexit_destructor_for__IsLowDriveSpace__);
  return;
}

// `dynamic_initializer_for_'IsTerminating'' @ 1410d6ee0

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__IsTerminating__(void)

{
  ::FString::FString(&IsTerminating.Key,L"IsTerminating");
  atexit(_dynamic_atexit_destructor_for__IsTerminating__);
  return;
}

// `dynamic_initializer_for_'IsUserLoggingOut'' @ 1410d6f10

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__IsUserLoggingOut__(void)

{
  ::FString::FString(&IsUserLoggingOut.Key,
                     &FAnalyticsSessionSummaryManager::IsUserLoggingOutProperty.Key);
  atexit(_dynamic_atexit_destructor_for__IsUserLoggingOut__);
  return;
}

// `dynamic_initializer_for_'IsVanilla'' @ 1410d6f40

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__IsVanilla__(void)

{
  ::FString::FString(&IsVanilla.Key,L"IsVanilla");
  atexit(_dynamic_atexit_destructor_for__IsVanilla__);
  return;
}

// `dynamic_initializer_for_'LastTickTimestamp'' @ 1410d6f70

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__LastTickTimestamp__(void)

{
  ::FString::FString(&LastTickTimestamp.Key,L"LastTickTimestamp");
  atexit(_dynamic_atexit_destructor_for__LastTickTimestamp__);
  return;
}

// `dynamic_initializer_for_'LogAnimBank'' @ 1410d6fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimBank__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAnimBank,L"LogAnimBank",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimBank__);
  return;
}

// `dynamic_initializer_for_'LogAnimation'' @ 1410d6fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimation__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAnimation,L"LogAnimation",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimation__);
  return;
}

// `dynamic_initializer_for_'LogAnimationCompression'' @ 1410d7020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimationCompression__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnimationCompression,L"LogAnimationCompression",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimationCompression__);
  return;
}

// `dynamic_initializer_for_'LogRootMotion'' @ 1410d7060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRootMotion__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRootMotion,L"LogRootMotion",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogRootMotion__);
  return;
}

// `dynamic_initializer_for_'MonitorExitCode'' @ 1410d70a0

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__MonitorExitCode__(void)

{
  ::FString::FString(&MonitorExitCode.Key,L"MonitorExitCode");
  atexit(_dynamic_atexit_destructor_for__MonitorExitCode__);
  return;
}

// `dynamic_initializer_for_'RunningOnBattery'' @ 1410d70d0

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__RunningOnBattery__(void)

{
  ::FString::FString(&RunningOnBattery.Key,L"RunningOnBattery");
  atexit(_dynamic_atexit_destructor_for__RunningOnBattery__);
  return;
}

// `dynamic_initializer_for_'SessionDurationSecs'' @ 1410d7100

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__SessionDurationSecs__(void)

{
  ::FString::FString(&SessionDurationSecs.Key,L"SessionDuration");
  atexit(_dynamic_atexit_destructor_for__SessionDurationSecs__);
  return;
}

// `dynamic_initializer_for_'SessionTickCount'' @ 1410d7130

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__SessionTickCount__(void)

{
  ::FString::FString(&SessionTickCount.Key,L"SessionTickCount");
  atexit(_dynamic_atexit_destructor_for__SessionTickCount__);
  return;
}

// `dynamic_initializer_for_'ShutdownType'' @ 1410d7160

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__ShutdownType__(void)

{
  ::FString::FString(&ShutdownType.Key,
                     &FAnalyticsSessionSummaryManager::ShutdownTypeCodeProperty.Key);
  atexit(_dynamic_atexit_destructor_for__ShutdownType__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose'' @ 1410d7190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose ==
      (FThreadSafeStaticStat<FStat_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccumulateMeshSpaceRotAdditiveToLocalPose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose,
               *pFVar1,L"AccumulateMeshSpaceRotAdditiveToLocalPose","STATGROUP_Anim",
               "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlendPosesPerBoneFilter'' @ 1410d7220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlendPosesPerBoneFilter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlendPosesPerBoneFilter ==
      (FThreadSafeStaticStat<FStat_STAT_BlendPosesPerBoneFilter>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlendPosesPerBoneFilter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendPosesPerBoneFilter,*pFVar1,
               L"BlendPosesPerBoneFilter","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BuildAnimTrackPairs'' @ 1410d72b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BuildAnimTrackPairs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BuildAnimTrackPairs == (FThreadSafeStaticStat<FStat_STAT_BuildAnimTrackPairs>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_BuildAnimTrackPairs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildAnimTrackPairs,*pFVar1,
               L"Build Anim Track Pairs","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ConvertMeshRotPoseToLocalSpace'' @ 1410d7340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ConvertMeshRotPoseToLocalSpace__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ConvertMeshRotPoseToLocalSpace ==
      (FThreadSafeStaticStat<FStat_STAT_ConvertMeshRotPoseToLocalSpace>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ConvertMeshRotPoseToLocalSpace");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ConvertMeshRotPoseToLocalSpace,*pFVar1,
               L"ConvertMeshRotPoseToLocalSpace","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ConvertPoseToMeshRot'' @ 1410d73d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ConvertPoseToMeshRot__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ConvertPoseToMeshRot ==
      (FThreadSafeStaticStat<FStat_STAT_ConvertPoseToMeshRot>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ConvertPoseToMeshRot");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ConvertPoseToMeshRot,*pFVar1,
               L"ConvertPoseToMeshRot","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExtractPoseFromAnimData'' @ 1410d7460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExtractPoseFromAnimData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExtractPoseFromAnimData ==
      (FThreadSafeStaticStat<FStat_STAT_ExtractPoseFromAnimData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExtractPoseFromAnimData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExtractPoseFromAnimData,*pFVar1,
               L"Extract Pose From Anim Data","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Timestamp'' @ 1410d74f0

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__Timestamp__(void)

{
  ::FString::FString(&Timestamp.Key,L"Timestamp");
  atexit(_dynamic_atexit_destructor_for__Timestamp__);
  return;
}

// `dynamic_initializer_for_'UnknownUserActivity'' @ 1410d7520

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__UnknownUserActivity__(void)

{
  ::FString::FString(&UnknownUserActivity,L"Unknown");
  atexit(_dynamic_atexit_destructor_for__UnknownUserActivity__);
  return;
}

// `dynamic_initializer_for_'UserActivity'' @ 1410d7550

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__UserActivity__(void)

{
  ::FString::FString(&UserActivity.Key,L"CurrentUserActivity");
  atexit(_dynamic_atexit_destructor_for__UserActivity__);
  return;
}

// `dynamic_initializer_for_'WasDebuggerIgnored'' @ 1410d7580

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__WasDebuggerIgnored__(void)

{
  ::FString::FString(&WasDebuggerIgnored.Key,L"WasDebuggerIgnored");
  atexit(_dynamic_atexit_destructor_for__WasDebuggerIgnored__);
  return;
}

// `dynamic_initializer_for_'WasEverDebugged'' @ 1410d75b0

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__WasEverDebugged__(void)

{
  ::FString::FString(&WasEverDebugged.Key,L"WasDebugged");
  atexit(_dynamic_atexit_destructor_for__WasEverDebugged__);
  return;
}

// `dynamic_initializer_for_'WasShutdown'' @ 1410d75e0

void __cdecl EngineAnalyticsProperties::_dynamic_initializer_for__WasShutdown__(void)

{
  ::FString::FString(&WasShutdown.Key,L"WasShutdown");
  atexit(_dynamic_atexit_destructor_for__WasShutdown__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h__Script_Engine_3864659694'' @ 1410d7610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h__Script_Engine_3864659694__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace1D_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h__Script_Engine_2346437257'' @ 1410d7650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h__Script_Engine_2346437257__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h__Script_Engine_2060228196'' @ 1410d7690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h__Script_Engine_2060228196__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBank_h__Script_Engine_Statics
             ::ScriptStructInfo,6,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h__Script_Engine_1341690393'' @ 1410d76e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h__Script_Engine_1341690393__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h__Script_Engine_Statics
             ::ScriptStructInfo,6,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h__Script_Engine_3004396656'' @ 1410d7730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h__Script_Engine_3004396656__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h__Script_Engine_3311097067'' @ 1410d7770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h__Script_Engine_3311097067__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h__Script_Engine_261889880'' @ 1410d77b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h__Script_Engine_261889880__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h__Script_Engine_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h__Script_Engine_2349405217'' @ 1410d7800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h__Script_Engine_2349405217__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h__Script_Engine_1423173561'' @ 1410d7850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h__Script_Engine_1423173561__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h__Script_Engine_1218600456'' @ 1410d7890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h__Script_Engine_1218600456__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h__Script_Engine_1612048240'' @ 1410d78d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h__Script_Engine_1612048240__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h__Script_Engine_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationRecordingSettings_h__Script_Engine_4256431465'' @ 1410d7920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationRecordingSettings_h__Script_Engine_4256431465__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationRecordingSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h__Script_Engine_3107494749'' @ 1410d7960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h__Script_Engine_3107494749__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h__Script_Engine_1453716942'' @ 1410d79a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h__Script_Engine_1453716942__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h__Script_Engine_2531893067'' @ 1410d79e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h__Script_Engine_2531893067__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h__Script_Engine_405301208'' @ 1410d7a30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h__Script_Engine_405301208__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h__Script_Engine_4031015272'' @ 1410d7a70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h__Script_Engine_4031015272__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UClass_AAmbientSound @ 1473c69b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AAmbientSound(void)

{
  if (Z_Registration_Info_UClass_AAmbientSound.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AAmbientSound.OuterSingleton,
               &Z_Construct_UClass_AAmbientSound_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AAmbientSound.OuterSingleton;
}

// Z_Construct_UFunction_AAmbientSound_AdjustVolume @ 1473c69f0

UFunction * __cdecl Z_Construct_UFunction_AAmbientSound_AdjustVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAmbientSound_FadeIn @ 1473c6a30

UFunction * __cdecl Z_Construct_UFunction_AAmbientSound_FadeIn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimBank @ 1473c6a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimBank(void)

{
  if (Z_Registration_Info_UClass_UAnimBank.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimBank.OuterSingleton,
               &Z_Construct_UClass_UAnimBank_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimBank.OuterSingleton;
}

// Z_Construct_UClass_UAnimBankData @ 1473c6ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimBankData(void)

{
  if (Z_Registration_Info_UClass_UAnimBankData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimBankData.OuterSingleton,
               &Z_Construct_UClass_UAnimBankData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimBankData.OuterSingleton;
}

// Z_Construct_UFunction_AAmbientSound_FadeOut @ 1473c6af0

UFunction * __cdecl Z_Construct_UFunction_AAmbientSound_FadeOut(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FAnimBankItem @ 1473c6b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimBankItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimBankItem.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimBankItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimBankItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimBankItem.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimBankItem.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase @ 1473c6bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptorBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptorBase.InnerSingleton
               ,&Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptorBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptorBase.InnerSingleton;
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

// NewProp_bLooping_SetBit @ 1473c6c30

void __cdecl
Z_Construct_UScriptStruct_FAnimBankSequence_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) | 1;
  return;
}

// NewProp_bAutoStart_SetBit @ 1473c6c40

void __cdecl
Z_Construct_UScriptStruct_FAnimBankSequence_Statics::NewProp_bAutoStart_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) | 2;
  return;
}

// NewStructOps @ 1473c6c50

void * __cdecl Z_Construct_UScriptStruct_FAnimBankSequence_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimBankSequence,&UE::CoreUObject::Private::Construct<FAnimBankSequence>,&UE::CoreUObject::Private::ConstructForTests<FAnimBankSequence>,&UE::CoreUObject::Private::Destruct<FAnimBankSequence>,&UE::CoreUObject::Private::Copy<FAnimBankSequence>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AAmbientSound_Play @ 1473c6c90

UFunction * __cdecl Z_Construct_UFunction_AAmbientSound_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAmbientSound_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAmbientSound_Stop @ 1473c6cd0

UFunction * __cdecl Z_Construct_UFunction_AAmbientSound_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AAmbientSound_Stop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1473c6d10

void * __cdecl Z_Construct_UScriptStruct_FAnimBankItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimBankItem,&UE::CoreUObject::Private::Construct<FAnimBankItem>,&UE::CoreUObject::Private::ConstructForTests<FAnimBankItem>,&UE::CoreUObject::Private::Destruct<FAnimBankItem>,&UE::CoreUObject::Private::Copy<FAnimBankItem>,&UE::CoreUObject::Private::GetStructTypeHash<FAnimBankItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473c6ea0

void * __cdecl Z_Construct_UScriptStruct_FSoftAnimBankItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoftAnimBankItem,&UE::CoreUObject::Private::Construct<FSoftAnimBankItem>,&UE::CoreUObject::Private::ConstructForTests<FSoftAnimBankItem>,&UE::CoreUObject::Private::Destruct<FSoftAnimBankItem>,&UE::CoreUObject::Private::Copy<FSoftAnimBankItem>,&UE::CoreUObject::Private::GetStructTypeHash<FSoftAnimBankItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCastShadow_SetBit @ 1473c6ee0

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::NewProp_bCastShadow_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 1;
  return;
}

// NewProp_bCastDynamicShadow_SetBit @ 1473c6ef0

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bCastDynamicShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 2;
  return;
}

// NewProp_bCastStaticShadow_SetBit @ 1473c6f00

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bCastStaticShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 4;
  return;
}

// NewProp_bCastVolumetricTranslucentShadow_SetBit @ 1473c6f10

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bCastVolumetricTranslucentShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 8;
  return;
}

// NewProp_bCastContactShadow_SetBit @ 1473c6f20

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bCastContactShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x10;
  return;
}

// NewProp_bSelfShadowOnly_SetBit @ 1473c6f30

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bSelfShadowOnly_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  return;
}

// NewProp_bCastFarShadow_SetBit @ 1473c6f40

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::NewProp_bCastFarShadow_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x40;
  return;
}

// NewProp_bCastInsetShadow_SetBit @ 1473c6f50

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bCastInsetShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x80;
  return;
}

// NewProp_bCastCinematicShadow_SetBit @ 1473c6f60

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bCastCinematicShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 1;
  return;
}

// NewProp_bCastShadowAsTwoSided_SetBit @ 1473c6f70

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bCastShadowAsTwoSided_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 2;
  return;
}

// NewProp_bVisibleInRayTracing_SetBit @ 1473c6f80

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bVisibleInRayTracing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// NewProp_bAffectDynamicIndirectLighting_SetBit @ 1473c6f90

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bAffectDynamicIndirectLighting_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  return;
}

// NewProp_bAffectDistanceFieldLighting_SetBit @ 1473c6fa0

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bAffectDistanceFieldLighting_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bIsInstanceDataGPUOnly_SetBit @ 1473c6fb0

void __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::
NewProp_bIsInstanceDataGPUOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewStructOps @ 1473c6fc0

void * __cdecl
Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptorBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkinnedMeshComponentDescriptorBase,&UE::CoreUObject::Private::Construct<FSkinnedMeshComponentDescriptorBase>,&UE::CoreUObject::Private::ConstructForTests<FSkinnedMeshComponentDescriptorBase>,&UE::CoreUObject::Private::Destruct<FSkinnedMeshComponentDescriptorBase>,&UE::CoreUObject::Private::Copy<FSkinnedMeshComponentDescriptorBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473c7200

void * __cdecl Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkinnedMeshComponentDescriptor,&UE::CoreUObject::Private::Construct<FSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::Destruct<FSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::Copy<FSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FSkinnedMeshComponentDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473c7380

void * __cdecl
Z_Construct_UScriptStruct_FSoftSkinnedMeshComponentDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoftSkinnedMeshComponentDescriptor,&UE::CoreUObject::Private::Construct<FSoftSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FSoftSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::Destruct<FSoftSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::Copy<FSoftSkinnedMeshComponentDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FSoftSkinnedMeshComponentDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimationAsset_NoRegister @ 1473c7ba0

UClass * __cdecl Z_Construct_UClass_UAnimationAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationAsset",
               &Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton,
               UAnimationAsset::StaticRegisterNativesUAnimationAsset,0x80,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationAsset>,InternalVTableHelperCtorCaller<UAnimationAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationAsset.InnerSingleton;
}

// NewStructOps @ 1473c8100

void * __cdecl Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEncounteredStateMachineStack,&UE::CoreUObject::Private::Construct<FEncounteredStateMachineStack>,&UE::CoreUObject::Private::ConstructForTests<FEncounteredStateMachineStack>,&UE::CoreUObject::Private::Destruct<FEncounteredStateMachineStack>,&UE::CoreUObject::Private::Copy<FEncounteredStateMachineStack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimClassInterface @ 1473c84b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimClassInterface(void)

{
  if (Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton,
               &Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton;
}

// NewProp_bImplemented_SetBit @ 1473c84f0

void __cdecl
Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewStructOps @ 1473c8500

void * __cdecl Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimBlueprintFunction,&UE::CoreUObject::Private::Construct<FAnimBlueprintFunction>,&UE::CoreUObject::Private::ConstructForTests<FAnimBlueprintFunction>,&UE::CoreUObject::Private::Destruct<FAnimBlueprintFunction>,&UE::CoreUObject::Private::Copy<FAnimBlueprintFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimBlueprintGeneratedClass @ 1473c8540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimBlueprintGeneratedClass(void)

{
  if (Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.OuterSingleton,
               &Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.OuterSingleton;
}

// Z_Construct_UClass_UAnimBlueprintGeneratedStruct @ 1473c8580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimBlueprintGeneratedStruct(void)

{
  if (Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.OuterSingleton,
               &Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimGraphBlendOptions @ 1473c85c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimGraphBlendOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimGraphBlendOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimGraphBlendOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimGraphBlendOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimGraphBlendOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCachedPoseIndices @ 1473c8640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedPoseIndices(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedPoseIndices.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedPoseIndices.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedPoseIndices.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCachedPoseIndices.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGraphAssetPlayerInformation @ 1473c86c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGraphAssetPlayerInformation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGraphAssetPlayerInformation.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGraphAssetPlayerInformation.InnerSingleton,
               &Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGraphAssetPlayerInformation.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGraphAssetPlayerInformation.InnerSingleton;
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

// NewStructOps @ 1473c8740

void * __cdecl Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateMachineStateDebugData,&UE::CoreUObject::Private::Construct<FStateMachineStateDebugData>,&UE::CoreUObject::Private::ConstructForTests<FStateMachineStateDebugData>,&UE::CoreUObject::Private::Destruct<FStateMachineStateDebugData>,&UE::CoreUObject::Private::Copy<FStateMachineStateDebugData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473c8780

void * __cdecl Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedPoseIndices,&UE::CoreUObject::Private::Construct<FCachedPoseIndices>,&UE::CoreUObject::Private::ConstructForTests<FCachedPoseIndices>,&UE::CoreUObject::Private::Destruct<FCachedPoseIndices>,&UE::CoreUObject::Private::Copy<FCachedPoseIndices>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimCompress @ 1473c8940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCompress(void)

{
  if (Z_Registration_Info_UClass_UAnimCompress.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCompress.OuterSingleton,
               &Z_Construct_UClass_UAnimCompress_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCompress.OuterSingleton;
}

// NewStructOps @ 1473c8980

void * __cdecl Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateMachineDebugData,&UE::CoreUObject::Private::Construct<FStateMachineDebugData>,&UE::CoreUObject::Private::ConstructForTests<FStateMachineDebugData>,&UE::CoreUObject::Private::Destruct<FStateMachineDebugData>,&UE::CoreUObject::Private::Copy<FStateMachineDebugData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bNeedsSkeleton_SetBit @ 1473c8c50

void __cdecl Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewStructOps @ 1473c8c60

void * __cdecl Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGraphAssetPlayerInformation,&UE::CoreUObject::Private::Construct<FGraphAssetPlayerInformation>,&UE::CoreUObject::Private::ConstructForTests<FGraphAssetPlayerInformation>,&UE::CoreUObject::Private::Destruct<FGraphAssetPlayerInformation>,&UE::CoreUObject::Private::Copy<FGraphAssetPlayerInformation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAimOffsetBlendSpace @ 1473c8ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAimOffsetBlendSpace(void)

{
  if (Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton,
               &Z_Construct_UClass_UAimOffsetBlendSpace_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton;
}

// NewStructOps @ 1473c8ce0

void * __cdecl Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationFrameSnapshot,&UE::CoreUObject::Private::Construct<FAnimationFrameSnapshot>,&UE::CoreUObject::Private::ConstructForTests<FAnimationFrameSnapshot>,&UE::CoreUObject::Private::Destruct<FAnimationFrameSnapshot>,&UE::CoreUObject::Private::Copy<FAnimationFrameSnapshot>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473c8d50

void * __cdecl Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimGraphBlendOptions,&UE::CoreUObject::Private::Construct<FAnimGraphBlendOptions>,&UE::CoreUObject::Private::ConstructForTests<FAnimGraphBlendOptions>,&UE::CoreUObject::Private::Destruct<FAnimGraphBlendOptions>,&UE::CoreUObject::Private::Copy<FAnimGraphBlendOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473c8e30

void * __cdecl Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimBlueprintDebugData,&UE::CoreUObject::Private::Construct<FAnimBlueprintDebugData>,&UE::CoreUObject::Private::ConstructForTests<FAnimBlueprintDebugData>,&UE::CoreUObject::Private::Destruct<FAnimBlueprintDebugData>,&UE::CoreUObject::Private::Copy<FAnimBlueprintDebugData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473c9020

void * __cdecl Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimBlueprintMutableData,&UE::CoreUObject::Private::Construct<FAnimBlueprintMutableData>,&UE::CoreUObject::Private::ConstructForTests<FAnimBlueprintMutableData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimBank_NoRegister @ 1473c92b0

UClass * __cdecl Z_Construct_UClass_UAnimBank_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBank",&Z_Registration_Info_UClass_UAnimBank.InnerSingleton,
               UAnimBank::StaticRegisterNativesUAnimBank,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimBank>,InternalVTableHelperCtorCaller<UAnimBank>,
               local_res8,UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBank.InnerSingleton;
}

// NewStructOps @ 1473c9370

void * __cdecl Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimBlueprintConstantData,&UE::CoreUObject::Private::Construct<FAnimBlueprintConstantData>,&UE::CoreUObject::Private::ConstructForTests<FAnimBlueprintConstantData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAimOffsetBlendSpace1D @ 1473c93b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAimOffsetBlendSpace1D(void)

{
  if (Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.OuterSingleton,
               &Z_Construct_UClass_UAimOffsetBlendSpace1D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.OuterSingleton;
}

// NewProp_bRecordInWorldSpace_SetBit @ 1473c9a00

void __cdecl
Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordInWorldSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bRemoveRootAnimation_SetBit @ 1473c9a10

void __cdecl
Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRemoveRootAnimation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bAutoSaveAsset_SetBit @ 1473c9a20

void __cdecl
Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bAutoSaveAsset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bRecordTransforms_SetBit @ 1473c9a30

void __cdecl
Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordTransforms_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bRecordMorphTargets_SetBit @ 1473c9a60

void __cdecl
Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMorphTargets_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_bRecordAttributeCurves_SetBit @ 1473c9a70

void __cdecl
Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordAttributeCurves_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x16) = 1;
  return;
}

// NewProp_bRecordMaterialCurves_SetBit @ 1473c9aa0

void __cdecl
Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bRecordMaterialCurves_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  return;
}

// NewProp_bTransactRecording_SetBit @ 1473c9ac0

void __cdecl
Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewProp_bTransactRecording_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 1473c9ad0

void * __cdecl Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationRecordingSettings,&UE::CoreUObject::Private::Construct<FAnimationRecordingSettings>,&UE::CoreUObject::Private::ConstructForTests<FAnimationRecordingSettings>,&UE::CoreUObject::Private::Destruct<FAnimationRecordingSettings>,&UE::CoreUObject::Private::Copy<FAnimationRecordingSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimComposite @ 1473c9c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimComposite(void)

{
  if (Z_Registration_Info_UClass_UAnimComposite.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimComposite.OuterSingleton,
               &Z_Construct_UClass_UAnimComposite_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimComposite.OuterSingleton;
}

// Z_Construct_UClass_UAnimCompositeBase @ 1473c9c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCompositeBase(void)

{
  if (Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton,
               &Z_Construct_UClass_UAnimCompositeBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimTrack @ 1473c9cd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimTrack.InnerSingleton;
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

// Z_Construct_UClass_UAnimationAsset @ 1473c9f00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationAsset(void)

{
  if (Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton,
               &Z_Construct_UClass_UAnimationAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EAnimGroupRole @ 1473c9f40

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimGroupRole(void)

{
  if (Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAnimSyncMethod @ 1473c9fc0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimSyncMethod(void)

{
  if (Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton;
}

// NewStructOps @ 1473ca000

void * __cdecl Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendSampleData,&UE::CoreUObject::Private::Construct<FBlendSampleData>,&UE::CoreUObject::Private::ConstructForTests<FBlendSampleData>,&UE::CoreUObject::Private::Destruct<FBlendSampleData>,&UE::CoreUObject::Private::Copy<FBlendSampleData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// AnimationKeyFormat_StaticEnum @ 1473ca100

UEnum * __cdecl AnimationKeyFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_AnimationKeyFormat,(UObject *)pUVar1,
                       L"AnimationKeyFormat");
  }
  return Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton;
}

// NewStructOps @ 1473ca180

void * __cdecl Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationErrorStats,&UE::CoreUObject::Private::Construct<FAnimationErrorStats>,&UE::CoreUObject::Private::ConstructForTests<FAnimationErrorStats>,&UE::CoreUObject::Private::Destruct<FAnimationErrorStats>,&UE::CoreUObject::Private::Copy<FAnimationErrorStats>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473ca200

void * __cdecl Z_Construct_UScriptStruct_FBlendFilter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendFilter,&UE::CoreUObject::Private::Construct<FBlendFilter>,&UE::CoreUObject::Private::ConstructForTests<FBlendFilter>,&UE::CoreUObject::Private::Destruct<FBlendFilter>,&UE::CoreUObject::Private::Copy<FBlendFilter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473ca240

void * __cdecl Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimCompressedCurveIndexedName,&UE::CoreUObject::Private::Construct<FAnimCompressedCurveIndexedName>,&UE::CoreUObject::Private::ConstructForTests<FAnimCompressedCurveIndexedName>,&UE::CoreUObject::Private::Destruct<FAnimCompressedCurveIndexedName>,&UE::CoreUObject::Private::Copy<FAnimCompressedCurveIndexedName>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473ca280

void * __cdecl Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMarkerSyncAnimPosition,&UE::CoreUObject::Private::Construct<FMarkerSyncAnimPosition>,&UE::CoreUObject::Private::ConstructForTests<FMarkerSyncAnimPosition>,&UE::CoreUObject::Private::Destruct<FMarkerSyncAnimPosition>,&UE::CoreUObject::Private::Copy<FMarkerSyncAnimPosition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473ca4b0

void * __cdecl Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimTickRecord,&UE::CoreUObject::Private::Construct<FAnimTickRecord>,&UE::CoreUObject::Private::ConstructForTests<FAnimTickRecord>,&UE::CoreUObject::Private::Destruct<FAnimTickRecord>,&UE::CoreUObject::Private::Copy<FAnimTickRecord>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EAnimGroupRole_StaticEnum @ 1473ca4f0

UEnum * __cdecl EAnimGroupRole_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimGroupRole,(UObject *)pUVar1,L"EAnimGroupRole");
  }
  return Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton;
}

// EAnimSyncGroupScope_StaticEnum @ 1473ca530

UEnum * __cdecl EAnimSyncGroupScope_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimSyncGroupScope,(UObject *)pUVar1,
                       L"EAnimSyncGroupScope");
  }
  return Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton;
}

// EAnimSyncMethod_StaticEnum @ 1473ca570

UEnum * __cdecl EAnimSyncMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimSyncMethod,(UObject *)pUVar1,L"EAnimSyncMethod"
                      );
  }
  return Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton;
}

// NewStructOps @ 1473ca5b0

void * __cdecl Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimGroupInstance,&UE::CoreUObject::Private::Construct<FAnimGroupInstance>,&UE::CoreUObject::Private::ConstructForTests<FAnimGroupInstance>,&UE::CoreUObject::Private::Destruct<FAnimGroupInstance>,&UE::CoreUObject::Private::Copy<FAnimGroupInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasRootMotion_SetBit @ 1473ca620

void __cdecl
Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1473ca640

void * __cdecl Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRootMotionMovementParams,&UE::CoreUObject::Private::Construct<FRootMotionMovementParams>,&UE::CoreUObject::Private::ConstructForTests<FRootMotionMovementParams>,&UE::CoreUObject::Private::Destruct<FRootMotionMovementParams>,&UE::CoreUObject::Private::Copy<FRootMotionMovementParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473ca6c0

void * __cdecl Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationGroupReference,&UE::CoreUObject::Private::Construct<FAnimationGroupReference>,&UE::CoreUObject::Private::ConstructForTests<FAnimationGroupReference>,&UE::CoreUObject::Private::Destruct<FAnimationGroupReference>,&UE::CoreUObject::Private::Copy<FAnimationGroupReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimBoneCompressionCodec @ 1473ca740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimBoneCompressionCodec(void)

{
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimBoneCompressionCodec.OuterSingleton,
               &Z_Construct_UClass_UAnimBoneCompressionCodec_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec.OuterSingleton;
}

// Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass @ 1473ca780

UFunction * __cdecl Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimationSettings @ 1473ca7c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationSettings(void)

{
  if (Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton,
               &Z_Construct_UClass_UAnimationSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton;
}

// Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport @ 1473ca830

UFunction * __cdecl
Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationAsset_GetPlayLength @ 1473ca870

UFunction * __cdecl Z_Construct_UFunction_UAnimationAsset_GetPlayLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ForceRecompression_SetBit @ 1473ca900

void __cdecl
Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bForceBelowThreshold_SetBit @ 1473ca910

void __cdecl
Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit @ 1473ca920

void __cdecl
Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  return;
}

// NewProp_bRaiseMaxErrorToExisting_SetBit @ 1473ca930

void __cdecl
Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x53) = 1;
  return;
}

// NewProp_bEnablePerformanceLog_SetBit @ 1473ca940

void __cdecl
Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// NewProp_bStripAnimationDataOnDedicatedServer_SetBit @ 1473ca950

void __cdecl
Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x55) = 1;
  return;
}

// NewProp_bTickAnimationOnSkeletalMeshInit_SetBit @ 1473ca960

void __cdecl
Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x56) = 1;
  return;
}

// NewProp_bEnforceSupportedFrameRates_SetBit @ 1473ca970

void __cdecl
Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnforceSupportedFrameRates_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// Z_Construct_UEnum_Engine_EAlphaBlendOption @ 1473caa80

UEnum * __cdecl Z_Construct_UEnum_Engine_EAlphaBlendOption(void)

{
  if (Z_Registration_Info_UEnum_EAlphaBlendOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAlphaBlendOption.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAlphaBlendOption.InnerSingleton;
}

// EAlphaBlendOption_StaticEnum @ 1473cabc0

UEnum * __cdecl EAlphaBlendOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAlphaBlendOption,(UObject *)pUVar1,
                       L"EAlphaBlendOption");
  }
  return Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton;
}

// NewStructOps @ 1473cac70

void * __cdecl Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAlphaBlendArgs,&UE::CoreUObject::Private::Construct<FAlphaBlendArgs>,&UE::CoreUObject::Private::ConstructForTests<FAlphaBlendArgs>,&UE::CoreUObject::Private::Destruct<FAlphaBlendArgs>,&UE::CoreUObject::Private::Copy<FAlphaBlendArgs>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FAnimSegment @ 1473cb010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSegment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSegment.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSegment.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSegment_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSegment.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSegment.InnerSingleton;
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

// NewStructOps @ 1473cb090

void * __cdecl Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRootMotionExtractionStep,&UE::CoreUObject::Private::Construct<FRootMotionExtractionStep>,&UE::CoreUObject::Private::ConstructForTests<FRootMotionExtractionStep>,&UE::CoreUObject::Private::Destruct<FRootMotionExtractionStep>,&UE::CoreUObject::Private::Copy<FRootMotionExtractionStep>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimBoneCompressionSettings @ 1473cb0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimBoneCompressionSettings(void)

{
  if (Z_Registration_Info_UClass_UAnimBoneCompressionSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimBoneCompressionSettings.OuterSingleton,
               &Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionSettings.OuterSingleton;
}

// NewStructOps @ 1473cb190

void * __cdecl Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAlphaBlend,&UE::CoreUObject::Private::Construct<FAlphaBlend>,&UE::CoreUObject::Private::ConstructForTests<FAlphaBlend>,&UE::CoreUObject::Private::Destruct<FAlphaBlend>,&UE::CoreUObject::Private::Copy<FAlphaBlend>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473cb1d0

void * __cdecl Z_Construct_UScriptStruct_FAnimSegment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSegment,&UE::CoreUObject::Private::Construct<FAnimSegment>,&UE::CoreUObject::Private::ConstructForTests<FAnimSegment>,&UE::CoreUObject::Private::Destruct<FAnimSegment>,&UE::CoreUObject::Private::Copy<FAnimSegment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1473cb2c0

void * __cdecl Z_Construct_UScriptStruct_FAnimTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimTrack,&UE::CoreUObject::Private::Construct<FAnimTrack>,&UE::CoreUObject::Private::ConstructForTests<FAnimTrack>,&UE::CoreUObject::Private::Destruct<FAnimTrack>,&UE::CoreUObject::Private::Copy<FAnimTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister @ 1473cb300

UClass * __cdecl Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBoneCompressionCodec",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton,
               UAnimBoneCompressionCodec::StaticRegisterNativesUAnimBoneCompressionCodec,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBoneCompressionCodec>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton;
}

// TQuat<double>_>,TSizedDefaultAllocator<32>_> @ 1473cb700

FArchive * __cdecl
operator<<<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
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
  TQuat<double> *pTVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
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
                (0x40,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
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
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pTVar9 = (TQuat<double> *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x40);
              UE::Math::operator<<(param_1,pTVar9);
              UE::Math::operator<<(param_1,pTVar9 + 1);
              uVar10 = uVar10 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1040,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar9 = (TQuat<double> *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40)
              ;
              DefaultConstructItems<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,int>
                        (pTVar9,1);
              UE::Math::operator<<(param_1,pTVar9);
              UE::Math::operator<<(param_1,pTVar9 + 1);
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

// operator<<<FAnimBankEntry,TSizedDefaultAllocator<32>_> @ 1473cb710

FArchive * __cdecl
operator<<<FAnimBankEntry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FAnimBankEntry,TSizedDefaultAllocator<32>_> *param_2)

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
  FAnimBankEntry *pFVar10;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FAnimBankEntry,int>
                ((FAnimBankEntry *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
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
              operator<<(param_1,(FAnimBankEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x80));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FAnimBankEntry,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x880,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FAnimBankEntry *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x80);
              DefaultConstructItems<FAnimBankEntry,int>(pFVar10,1);
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

// operator<<<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> @ 1473cb720

FArchive * __cdecl
operator<<<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FAnimCompressedCurveIndexedName *pFVar2;
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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
              operator<<(param_1,(FAnimCompressedCurveIndexedName *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FAnimCompressedCurveIndexedName *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<FAnimCompressedCurveIndexedName,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
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

// operator<<<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> @ 1473cb730

FArchive * __cdecl
operator<<<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
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
              uVar14 = uVar14 + 4;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
              DefaultConstructItems<FTrackToSkeletonMap,int>(pFVar10,1);
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

// AddElement<TSizedDefaultAllocator<32>,FString,unsigned_char> @ 1473cb740

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,unsigned_char>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          uchar *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%u");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,FString,int> @ 1473cb8a0

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,int>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          int *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%d");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,FString,double> @ 1473cb9f0

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,double>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          double *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  local_18.Data.ArrayMax = local_20._4_4_;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_const_&>
            ((FAnalyticsEventAttribute *)
             ((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30),&local_18,param_3);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,FString,wchar_t_const_*> @ 1473cbb00

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,wchar_t_const_*>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          wchar_t **param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::FString(&this->AttrValueString,*param_3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment> @ 1473cbc50

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          FJsonFragment *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar3 = L"null";
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (1 < (param_3->FragmentString).Data.ArrayNum) {
    pwVar3 = (wchar_t *)(param_3->FragmentString).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&this->AttrValueString,pwVar3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64> @ 1473cbdb0

void __cdecl
ImplMakeAnalyticsEventAttributeArray::
AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          ulong64 *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%llu");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// BlendPosePerBone<1> @ 1473ccb90

void __cdecl
BlendPosePerBone<1>(TArrayView<int,int> *param_1,FBlendSampleData *param_2,FCompactPose *param_3,
                   FCompactPose *param_4)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  uint uVar29;
  
  uVar3 = *(uint *)&param_4->field_0x8;
  uVar17 = 0;
  fVar35 = param_2->TotalWeight;
  if (__real_3f800000 <= param_2->TotalWeight) {
    fVar35 = __real_3f800000;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  if (uVar3 != 0) {
    lVar18 = 0;
    lVar20 = 0;
    do {
      uVar29 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar29 = ~uVar17 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar29 = param_1->DataPtr[lVar18];
      if (((uVar29 == 0xffffffff) || ((int)uVar29 < 0)) ||
         ((param_2->PerBoneBlendData).ArrayNum <= (int)uVar29)) {
        uVar29 = 0;
        if ((int)uVar17 < *(int *)&param_3->field_0x8) {
          uVar29 = ~uVar17 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar19 = *(longlong *)param_3;
        uVar29 = 0;
        if ((int)uVar17 < *(int *)&param_4->field_0x8) {
          uVar29 = ~uVar17 >> 0x1f;
        }
        fVar23 = fVar35;
        if ((uVar29 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar32 = 0;
        if ((int)uVar29 < (param_2->PerBoneBlendData).ArrayNum) {
          uVar32 = ~uVar29 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar23 = *(float *)((param_2->PerBoneBlendData).AllocatorInstance.Data +
                           (longlong)(int)uVar29 * 4);
        uVar29 = 0;
        if ((int)uVar17 < *(int *)&param_3->field_0x8) {
          uVar29 = ~uVar17 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar19 = *(longlong *)param_3;
        uVar29 = 0;
        if ((int)uVar17 < *(int *)&param_4->field_0x8) {
          uVar29 = ~uVar17 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar4 = *(longlong *)param_4;
      uVar17 = uVar17 + 1;
      dVar11 = (double)fVar23;
      dVar12 = (double)fVar23;
      lVar18 = lVar18 + 1;
      dVar14 = (double)fVar23;
      dVar15 = (double)fVar23;
      dVar33 = dVar11 * *(double *)(lVar4 + lVar20);
      dVar34 = dVar12 * ((double *)(lVar4 + lVar20))[1];
      pdVar1 = (double *)(lVar4 + 0x10 + lVar20);
      dVar8 = dVar14 * *pdVar1;
      dVar9 = dVar15 * pdVar1[1];
      auVar25._8_4_ = SUB84(dVar9,0);
      auVar25._0_8_ = dVar8;
      auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      pdVar1 = (double *)(lVar20 + 0x10 + lVar19);
      dVar24 = dVar8 * *pdVar1 + dVar33 * *(double *)(lVar20 + lVar19);
      dVar30 = auVar25._8_8_ * pdVar1[1] + dVar34 * ((double *)(lVar20 + lVar19))[1];
      uVar21 = -(ulonglong)(0.0 <= dVar30 + dVar24);
      uVar22 = -(ulonglong)(0.0 <= dVar24 + dVar30);
      uVar32 = (uint)(uVar22 >> 0x20);
      uVar29 = (uint)(uVar21 >> 0x20);
      auVar26._0_8_ = (ulonglong)dVar33 & uVar21;
      auVar26._8_4_ = (undefined4)((ulonglong)dVar34 & uVar22);
      auVar26._12_4_ = (undefined4)(((ulonglong)dVar34 & uVar22) >> 0x20);
      auVar31._0_4_ = ~(uint)uVar21 & SUB84(0.0 - dVar33,0);
      auVar31._4_4_ = ~uVar29 & (uint)((ulonglong)(0.0 - dVar33) >> 0x20);
      auVar31._8_4_ = ~(uint)uVar22 & SUB84(0.0 - dVar34,0);
      auVar31._12_4_ = ~uVar32 & (uint)((ulonglong)(0.0 - dVar34) >> 0x20);
      dVar24 = ((double *)(lVar20 + lVar19))[1];
      *(double *)(lVar20 + lVar19) = SUB168(auVar31 | auVar26,0) + *(double *)(lVar20 + lVar19);
      ((double *)(lVar20 + lVar19))[1] = SUB168(auVar31 | auVar26,8) + dVar24;
      auVar27._0_4_ = ~(uint)uVar21 & SUB84(0.0 - dVar8,0);
      auVar27._4_4_ = ~uVar29 & (uint)((ulonglong)(0.0 - dVar8) >> 0x20);
      auVar27._8_4_ = ~(uint)uVar22 & SUB84(0.0 - dVar9,0);
      auVar27._12_4_ = ~uVar32 & (uint)((ulonglong)(0.0 - dVar9) >> 0x20);
      auVar7._8_4_ = (int)((ulonglong)dVar9 & uVar22);
      auVar7._0_8_ = (ulonglong)dVar8 & uVar21;
      auVar7._12_4_ = (int)(((ulonglong)dVar9 & uVar22) >> 0x20);
      pdVar1 = (double *)(lVar20 + 0x10 + lVar19);
      dVar24 = pdVar1[1];
      pdVar2 = (double *)(lVar20 + 0x10 + lVar19);
      *pdVar2 = SUB168(auVar27 | auVar7,0) + *pdVar1;
      pdVar2[1] = SUB168(auVar27 | auVar7,8) + dVar24;
      pdVar1 = (double *)(lVar4 + 0x20 + lVar20);
      pdVar2 = (double *)(lVar4 + 0x30 + lVar20);
      dVar8 = *pdVar2;
      dVar9 = pdVar2[1];
      auVar28._8_4_ = SUB84(dVar15,0);
      auVar28._0_8_ = dVar14;
      auVar28._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      pdVar2 = (double *)(lVar20 + 0x20 + lVar19);
      dVar24 = dVar12 * pdVar1[1] + pdVar2[1];
      auVar6._8_4_ = SUB84(dVar24,0);
      auVar6._0_8_ = dVar11 * *pdVar1 + *pdVar2;
      auVar6._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      *(undefined1 (*) [16])(lVar20 + 0x20 + lVar19) = auVar6;
      pdVar1 = (double *)(lVar20 + 0x30 + lVar19);
      dVar24 = pdVar1[1];
      pdVar2 = (double *)(lVar20 + 0x30 + lVar19);
      *pdVar2 = dVar14 * dVar8 + *pdVar1;
      pdVar2[1] = auVar28._8_8_ * dVar9 + dVar24;
      pdVar1 = (double *)(lVar4 + 0x40 + lVar20);
      pdVar2 = (double *)(lVar4 + 0x50 + lVar20);
      dVar8 = *pdVar2;
      dVar9 = pdVar2[1];
      pdVar2 = (double *)(lVar20 + 0x40 + lVar19);
      dVar24 = dVar12 * pdVar1[1] + pdVar2[1];
      auVar10._8_4_ = SUB84(dVar24,0);
      auVar10._0_8_ = dVar11 * *pdVar1 + *pdVar2;
      auVar10._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      *(undefined1 (*) [16])(lVar20 + 0x40 + lVar19) = auVar10;
      pdVar1 = (double *)(lVar20 + 0x50 + lVar19);
      dVar24 = dVar15 * dVar9 + pdVar1[1];
      auVar13._8_4_ = SUB84(dVar24,0);
      auVar13._0_8_ = dVar14 * dVar8 + *pdVar1;
      auVar13._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      *(undefined1 (*) [16])(lVar20 + 0x50 + lVar19) = auVar13;
      lVar20 = lVar20 + 0x60;
    } while (uVar17 != uVar3);
  }
  return;
}

// BlendPosePerBone<0> @ 1473ccf50

void __cdecl
BlendPosePerBone<0>(TArrayView<int,int> *param_1,FBlendSampleData *param_2,FCompactPose *param_3,
                   FCompactPose *param_4)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  
  uVar3 = *(uint *)&param_4->field_0x8;
  uVar30 = 0;
  fVar35 = param_2->TotalWeight;
  if (__real_3f800000 <= param_2->TotalWeight) {
    fVar35 = __real_3f800000;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  if (uVar3 != 0) {
    lVar33 = 0;
    lVar31 = 0;
    do {
      uVar28 = 0;
      if ((int)uVar30 < param_1->ArrayNum) {
        uVar28 = ~uVar30 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar27 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar28 = param_1->DataPtr[lVar33];
      if (((uVar28 == 0xffffffff) || ((int)uVar28 < 0)) ||
         ((param_2->PerBoneBlendData).ArrayNum <= (int)uVar28)) {
        uVar28 = 0;
        if ((int)uVar30 < *(int *)&param_3->field_0x8) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar27 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar32 = *(longlong *)param_3;
        uVar28 = 0;
        if ((int)uVar30 < *(int *)&param_4->field_0x8) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        fVar34 = fVar35;
        if ((uVar28 == 0) &&
           (bVar27 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar29 = 0;
        if ((int)uVar28 < (param_2->PerBoneBlendData).ArrayNum) {
          uVar29 = ~uVar28 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar27 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar34 = *(float *)((param_2->PerBoneBlendData).AllocatorInstance.Data +
                           (longlong)(int)uVar28 * 4);
        uVar28 = 0;
        if ((int)uVar30 < *(int *)&param_3->field_0x8) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar27 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar32 = *(longlong *)param_3;
        uVar28 = 0;
        if ((int)uVar30 < *(int *)&param_4->field_0x8) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar27 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar4 = *(longlong *)param_4;
      uVar30 = uVar30 + 1;
      lVar33 = lVar33 + 1;
      dVar20 = (double)fVar34;
      dVar21 = (double)fVar34;
      pdVar1 = (double *)(lVar4 + 0x10 + lVar31);
      dVar22 = *pdVar1;
      pdVar2 = (double *)(lVar4 + 0x20 + lVar31);
      dVar23 = *pdVar2;
      dVar11 = pdVar2[1];
      pdVar2 = (double *)(lVar4 + 0x30 + lVar31);
      dVar24 = *pdVar2;
      dVar13 = pdVar2[1];
      pdVar2 = (double *)(lVar4 + 0x40 + lVar31);
      dVar25 = *pdVar2;
      dVar15 = pdVar2[1];
      pdVar2 = (double *)(lVar4 + 0x50 + lVar31);
      dVar26 = *pdVar2;
      dVar17 = pdVar2[1];
      dVar18 = (double)fVar34;
      dVar19 = (double)fVar34;
      dVar7 = ((double *)(lVar4 + lVar31))[1] * dVar21;
      dVar9 = pdVar1[1] * dVar19;
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = *(double *)(lVar4 + lVar31) * dVar20;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(lVar32 + lVar31) = auVar6;
      auVar8._8_4_ = SUB84(dVar9,0);
      auVar8._0_8_ = dVar22 * dVar18;
      auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(lVar32 + 0x10 + lVar31) = auVar8;
      dVar11 = dVar11 * dVar21;
      dVar13 = dVar13 * dVar19;
      auVar10._8_4_ = SUB84(dVar11,0);
      auVar10._0_8_ = dVar23 * dVar20;
      auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(lVar32 + 0x20 + lVar31) = auVar10;
      auVar12._8_4_ = SUB84(dVar13,0);
      auVar12._0_8_ = dVar24 * dVar18;
      auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(lVar32 + 0x30 + lVar31) = auVar12;
      dVar15 = dVar15 * dVar21;
      dVar17 = dVar17 * dVar19;
      auVar14._8_4_ = SUB84(dVar15,0);
      auVar14._0_8_ = dVar25 * dVar20;
      auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *(undefined1 (*) [16])(lVar32 + 0x40 + lVar31) = auVar14;
      auVar16._8_4_ = SUB84(dVar17,0);
      auVar16._0_8_ = dVar26 * dVar18;
      auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      *(undefined1 (*) [16])(lVar32 + 0x50 + lVar31) = auVar16;
      lVar31 = lVar31 + 0x60;
    } while (uVar30 != uVar3);
  }
  return;
}

// ByteSwapArray<FMemoryReader,int> @ 1473cd260

void __cdecl
ByteSwapArray<FMemoryReader,int>
          (FMemoryReader *param_1,uchar **param_2,TArrayView<int,int> *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3->ArrayNum) {
    do {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,*param_2,4);
      *param_2 = *param_2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3->ArrayNum);
  }
  return;
}

// ByteSwapArray<FMemoryWriter,int> @ 1473cd2d0

void __cdecl
ByteSwapArray<FMemoryWriter,int>
          (FMemoryWriter *param_1,uchar **param_2,TArrayView<int,int> *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3->ArrayNum) {
    do {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,*param_2,4);
      *param_2 = *param_2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3->ArrayNum);
  }
  return;
}

// ByteSwapCodecData<FMemoryReader> @ 1473cd340

void __cdecl
ByteSwapCodecData<FMemoryReader>
          (AnimEncoding *param_1,FMemoryReader *param_2,FUECompressedAnimData *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001473cd34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_3,param_2);
  return;
}

// ByteSwapCodecData<FMemoryWriter> @ 1473cd360

void __cdecl
ByteSwapCodecData<FMemoryWriter>
          (AnimEncoding *param_1,FMemoryWriter *param_2,FUECompressedAnimData *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001473cd36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 8))(param_1,param_3,param_2);
  return;
}

// CastChecked<UAnimationSettings,UObject> @ 1473cd560

UAnimationSettings * __cdecl CastChecked<UAnimationSettings,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UAnimationSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UAnimationSettings::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UAnimationSettings *)param_1;
  }
  pFVar3 = GetTypeName<UAnimationSettings>(&local_28);
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

// CompareItems<FMaxRPCDoSEscalation,int> @ 1473cd620

bool __cdecl
CompareItems<FMaxRPCDoSEscalation,int>
          (FMaxRPCDoSEscalation *param_1,FMaxRPCDoSEscalation *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    piVar3 = &(param_2->PlayerUID).Data.ArrayNum;
    piVar2 = &(param_1->PlayerUID).Data.ArrayNum;
    do {
      iVar1 = piVar2[-4];
      if (iVar1 == piVar3[-4]) {
        if (1 < iVar1) {
          iVar1 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(piVar2 + -6),
                             *(wchar_t **)
                              ((longlong)piVar2 + (longlong)param_2 + (-0x18 - (longlong)param_1)));
          bVar4 = iVar1 == 0;
          goto LAB_1473cd676;
        }
      }
      else {
        bVar4 = iVar1 + piVar3[-4] == 1;
LAB_1473cd676:
        if (!bVar4) {
          return false;
        }
      }
      iVar1 = *piVar2;
      if (iVar1 == *piVar3) {
        if (1 < iVar1) {
          iVar1 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)
                             (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar2 + -2))->
                             AllocatorInstance).Data,
                             (wchar_t *)
                             (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar3 + -2))->
                             AllocatorInstance).Data);
          bVar4 = iVar1 == 0;
          goto LAB_1473cd6a4;
        }
      }
      else {
        bVar4 = iVar1 + *piVar3 == 1;
LAB_1473cd6a4:
        if (!bVar4) {
          return false;
        }
      }
      if (piVar2[2] != piVar3[2]) {
        return false;
      }
      iVar1 = piVar2[6];
      if (iVar1 == piVar3[6]) {
        if (1 < iVar1) {
          iVar1 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(piVar2 + 4),*(wchar_t **)(piVar3 + 4));
          bVar4 = iVar1 == 0;
          goto LAB_1473cd6e0;
        }
      }
      else {
        bVar4 = iVar1 + piVar3[6] == 1;
LAB_1473cd6e0:
        if (!bVar4) {
          return false;
        }
      }
      if (piVar2[8] != piVar3[8]) {
        return false;
      }
      iVar1 = piVar2[0xc];
      if (iVar1 == piVar3[0xc]) {
        if (1 < iVar1) {
          iVar1 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(piVar2 + 10),*(wchar_t **)(piVar3 + 10));
          bVar4 = iVar1 == 0;
          goto LAB_1473cd714;
        }
      }
      else {
        bVar4 = iVar1 + piVar3[0xc] == 1;
LAB_1473cd714:
        if (!bVar4) {
          return false;
        }
      }
      piVar3 = piVar3 + 0x14;
      piVar2 = piVar2 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TSharedPtr<FRPCAnalytics,1>,int> @ 1473cd750

bool __cdecl
CompareItems<TSharedPtr<FRPCAnalytics,1>,int>
          (TSharedPtr<FRPCAnalytics,1> *param_1,TSharedPtr<FRPCAnalytics,1> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(FRPCAnalytics **)(lVar1 + (longlong)param_2) != param_2->Object) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FAnimBankItem,FAnimBankItem,int> @ 1473cd780

void __cdecl
ConstructItems<FAnimBankItem,FAnimBankItem,int>(void *param_1,FAnimBankItem *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 8) = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1));
      }
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_1 + lVar1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimSegment,FAnimSegment,int> @ 1473cd800

void __cdecl
ConstructItems<FAnimSegment,FAnimSegment,int>(void *param_1,FAnimSegment *param_2,int param_3)

{
  bool *pbVar1;
  UObject *pUVar2;
  float *pfVar3;
  float *pfVar4;
  
  if (param_3 != 0) {
    pfVar3 = (float *)((longlong)param_1 + 0xc);
    pfVar4 = &param_2->AnimStartTime;
    do {
      pUVar2 = *(UObject **)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)pfVar3);
      *(UObject **)(pfVar3 + -3) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      pfVar3[-1] = pfVar4[-1];
      *pfVar3 = *pfVar4;
      pfVar3[1] = pfVar4[1];
      pfVar3[2] = pfVar4[2];
      pfVar3[3] = pfVar4[3];
      pbVar1 = (bool *)(pfVar4 + 4);
      pfVar4 = pfVar4 + 8;
      *(bool *)(pfVar3 + 4) = *pbVar1;
      pfVar3 = pfVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimTickRecord,FAnimTickRecord,int> @ 1473cd8a0

void __cdecl
ConstructItems<FAnimTickRecord,FAnimTickRecord,int>
          (void *param_1,FAnimTickRecord *param_2,int param_3)

{
  float *pfVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  
  if (param_3 != 0) {
    pfVar5 = (float *)((longlong)param_1 + 0x10);
    pfVar6 = &param_2->PlayRateMultiplier;
    do {
      pUVar2 = *(UObject **)((longlong)pfVar5 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(UObject **)(pfVar5 + -4) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(float **)(pfVar5 + -2) = *(float **)(pfVar6 + -2);
      *pfVar5 = *pfVar6;
      pfVar5[1] = pfVar6[1];
      pfVar5[2] = pfVar6[2];
      *(bool *)(pfVar5 + 3) = *(bool *)(pfVar6 + 3);
      *(bool *)((longlong)pfVar5 + 0xd) = *(bool *)((longlong)pfVar6 + 0xd);
      *(bool *)((longlong)pfVar5 + 0xe) = *(bool *)((longlong)pfVar6 + 0xe);
      *(bool *)((longlong)pfVar5 + 0xf) = *(bool *)((longlong)pfVar6 + 0xf);
      *(bool *)(pfVar5 + 4) = *(bool *)(pfVar6 + 4);
      *(bool *)((longlong)pfVar5 + 0x11) = *(bool *)((longlong)pfVar6 + 0x11);
      *(UMirrorDataTable **)(pfVar5 + 6) = *(UMirrorDataTable **)(pfVar6 + 6);
      *(TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        **)(pfVar5 + 8) =
           ((TSharedPtr<TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>,1>
             *)(pfVar6 + 8))->Object;
      pTVar3 = ((FSharedReferencer<1> *)(pfVar6 + 10))->ReferenceController;
      *(TReferenceControllerBase<1> **)(pfVar5 + 10) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar4 = *(undefined8 *)(pfVar6 + 0xe);
      *(FBlendFilter **)(pfVar5 + 0xc) =
           (((FAnimTickRecord_u_64 *)(pfVar6 + 0xc))->BlendSpace).BlendFilter;
      *(undefined8 *)(pfVar5 + 0xe) = uVar4;
      uVar4 = *(undefined8 *)(pfVar6 + 0x12);
      *(undefined8 *)(pfVar5 + 0x10) = *(undefined8 *)(pfVar6 + 0x10);
      *(undefined8 *)(pfVar5 + 0x12) = uVar4;
      uVar4 = *(undefined8 *)(pfVar6 + 0xe);
      *(FBlendFilter **)(pfVar5 + 0xc) =
           (((FAnimTickRecord_u_64 *)(pfVar6 + 0xc))->BlendSpace).BlendFilter;
      *(undefined8 *)(pfVar5 + 0xe) = uVar4;
      *(FDeltaTimeRecord **)(pfVar5 + 0x14) = *(FDeltaTimeRecord **)(pfVar6 + 0x14);
      *(FMarkerTickRecord **)(pfVar5 + 0x16) = *(FMarkerTickRecord **)(pfVar6 + 0x16);
      *(bool *)(pfVar5 + 0x18) = *(bool *)(pfVar6 + 0x18);
      pfVar1 = pfVar6 + 0x19;
      pfVar6 = pfVar6 + 0x1e;
      pfVar5[0x19] = *pfVar1;
      pfVar5 = pfVar5 + 0x1e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FRPCAnalytics,1>,TSharedPtr<FRPCAnalytics,1>,int> @ 1473cd9b0

void __cdecl
ConstructItems<TSharedPtr<FRPCAnalytics,1>,TSharedPtr<FRPCAnalytics,1>,int>
          (void *param_1,TSharedPtr<FRPCAnalytics,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FRPCAnalytics **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DefaultConstructItems<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,int> @ 1473cd9f0

void __cdecl
DefaultConstructItems<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
    *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
    *(undefined8 *)((longlong)param_1 + 0x38) = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0x40);
  }
  return;
}

// DefaultConstructItems<FAnimBankEntry,int> @ 1473cda30

void __cdecl DefaultConstructItems<FAnimBankEntry,int>(void *param_1,int param_2)

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
      *(undefined4 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 0x60) = 0x3f800000;
      *(undefined8 *)(lVar1 + 0x68) = 0;
      lVar1 = lVar1 + 0x80;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FAnimCompressedCurveIndexedName,int> @ 1473cda80

void __cdecl DefaultConstructItems<FAnimCompressedCurveIndexedName,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLoadedAnimationChunk,int> @ 1473cdab0

void __cdecl DefaultConstructItems<FLoadedAnimationChunk,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0xbff0000000000000;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNetConnAnalyticsVars::FPerNetConnData,int> @ 1473cdb00

void __cdecl
DefaultConstructItems<FNetConnAnalyticsVars::FPerNetConnData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int> @ 1473cdb30

void __cdecl
DefaultConstructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FTrackToSkeletonMap,int> @ 1473cdb60

void __cdecl DefaultConstructItems<FTrackToSkeletonMap,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DestructItems<TSoftObjectPtr<UUserDefinedStruct>,int> @ 1473cdba0

void __cdecl
DestructItems<TSoftObjectPtr<UUserDefinedStruct>,int>
          (TSoftObjectPtr<UUserDefinedStruct> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimBankEntry,int> @ 1473cdbe0

void __cdecl DestructItems<FAnimBankEntry,int>(FAnimBankEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RotationKeys;
    do {
      pFVar1 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FAnimBankEntry *)(pTVar2 + -1))->PositionKeys).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimBlueprintFunction,int> @ 1473cdc40

void __cdecl DestructItems<FAnimBlueprintFunction,int>(FAnimBlueprintFunction *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAnimBlueprintFunction::FInputPropertyData,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->InputPropertyData;
    do {
      pFVar1 = (((TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance
               ).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      pFVar1 = (((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + -4) + 8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FAnimBlueprintFunction::FInputPropertyData,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 7) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimNodeData,int> @ 1473cdcc0

void __cdecl DestructItems<FAnimNodeData,int>(FAnimNodeData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Entries;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimNotifyEvent,int> @ 1473cdd00

void __cdecl DestructItems<FAnimNotifyEvent,int>(FAnimNotifyEvent *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (param_1->EndLink)._padding_ = (longlong)&___7FAnimLinkableElement__6B_;
    param_1->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAnimTickRecord,int> @ 1473cdd30

void __cdecl DestructItems<FAnimTickRecord,int>(FAnimTickRecord *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ContextData).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBakedAnimationState,int> @ 1473cdd70

void __cdecl DestructItems<FBakedAnimationState,int>(FBakedAnimationState *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FBakedStateExitTransition,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Transitions;
    do {
      DestructItems<FBakedStateExitTransition,int>
                ((FBakedStateExitTransition *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FBakedAnimationState *)(pTVar2 + -2))->PlayerNodeIndices).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBakedAnimationStateMachine,int> @ 1473cdde0

void __cdecl
DestructItems<FBakedAnimationStateMachine,int>(FBakedAnimationStateMachine *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FBakedAnimationState,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->States;
    do {
      pFVar1 = (((TArray<FAnimationTransitionBetweenStates,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FBakedAnimationState,int>
                ((FBakedAnimationState *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FBakedAnimationState,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBakedStateExitTransition,int> @ 1473cde40

void __cdecl
DestructItems<FBakedStateExitTransition,int>(FBakedStateExitTransition *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PoseEvaluatorLinks;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCustomAttributeSetting,int> @ 1473cde80

void __cdecl
DestructItems<FCustomAttributeSetting,int>(FCustomAttributeSetting *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Meaning).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,int> @ 1473cded0

void __cdecl
DestructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,int>
          (FFailedPingCounter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PingAddress).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FLoadedAnimationChunk,int> @ 1473cdf10

void __cdecl DestructItems<FLoadedAnimationChunk,int>(FLoadedAnimationChunk *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if ((param_1->CompressedAnimData != (TAtomic<FCompressedAnimSequence_*>)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("CompressedAnimData == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimationStreaming.h"
                           ,0x2b,L"Animation chunk compressed data ptr not null (%p), Index: %u"),
       bVar2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<FMaxRPCDoSEscalation,int> @ 1473cdf80

void __cdecl DestructItems<FMaxRPCDoSEscalation,int>(FMaxRPCDoSEscalation *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->MaxSeverityCategory;
    do {
      pFVar1 = (((FString *)((longlong)(pFVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pFVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -2) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -3) + 8));
      }
      pFVar2 = pFVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNetConnAnalyticsVars::FPerNetConnData,int> @ 1473cdff0

void __cdecl
DestructItems<FNetConnAnalyticsVars::FPerNetConnData,int>(FPerNetConnData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong lVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar4 = &param_1->ClientCloseReasons;
    DestructItems<FString,int>((FString *)(pTVar4->AllocatorInstance).Data,pTVar4->ArrayNum);
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pvVar2 = *(void **)((longlong)(pTVar4 + -1) + 8);
    if (pvVar2 != (void *)0x0) {
      lVar3 = *(longlong *)((longlong)pvVar2 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
      }
      if (*(void **)((longlong)pvVar2 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 0x18));
      }
      operator_delete(pvVar2,0x30);
    }
    param_1 = (FPerNetConnData *)(pTVar4 + 1);
  }
  return;
}

// DestructItems<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int> @ 1473ce080

void __cdecl
DestructItems<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int>
          (FReasonCounter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ReasonStr).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FRPCAnalytics,1>,int> @ 1473ce0c0

void __cdecl
DestructItems<TSharedPtr<FRPCAnalytics,1>,int>(TSharedPtr<FRPCAnalytics,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int> @ 1473ce100

void __cdecl
DestructItems<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int>
          (TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
           *param_1,int param_2)

{
  IAnimNotifyEventContextDataInterface *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IAnimNotifyEventContextDataInterface *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FBoneData,int> @ 1473ce140

void __cdecl DestructItems<FBoneData,int>(FBoneData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->BonesToRoot;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<UAnimationSettings> @ 1473ce6a0

FString * __cdecl GetTypeName<UAnimationSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UAnimationSettings::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>_>_> @ 1473ce6e0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FCompressedAnimSequence::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_void___cdecl_FCompressedAnimSequence::RebuildCurveIndexTable(void)_::_2_::<lambda_1>_>
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
LAB_1473ce7fc:
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
                  bVar3 = `FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>::
                          operator()(param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>::
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
      bVar3 = `FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_1473ce7fc;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FAnimTickRecord,int,FIdentityFunctor,TDereferenceWrapper<FAnimTickRecord,TLess<void>_>_> @ 1473ce8e0

void __cdecl
AlgoImpl::
HeapSortInternal<FAnimTickRecord,int,FIdentityFunctor,TDereferenceWrapper<FAnimTickRecord,TLess<void>_>_>
          (FAnimTickRecord *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnimTickRecord,TLess<void>_> param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  float *pfVar4;
  TObjectPtr<UAnimationAsset>_u_0 TVar5;
  float *pfVar6;
  undefined8 uVar7;
  UMirrorDataTable *pUVar8;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FBlendFilter *pFVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FDeltaTimeRecord *pFVar15;
  FMarkerTickRecord *pFVar16;
  undefined8 uVar17;
  UMirrorDataTable *pUVar18;
  TReferenceControllerBase<1> *pTVar19;
  FMarkerTickRecord *pFVar20;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar22;
  FAnimTickRecord *pFVar23;
  FAnimTickRecord *pFVar24;
  float fVar25;
  undefined6 uVar26;
  undefined3 uVar27;
  float fVar28;
  float fVar29;
  bool bVar30;
  bool bVar31;
  undefined6 uVar32;
  bool bVar33;
  undefined3 uVar34;
  float fVar35;
  float fVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  float fVar44;
  bool bVar45;
  int iVar46;
  int iVar47;
  longlong lVar48;
  FAnimTickRecord *pFVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  
  if (param_2 < 0) {
    bVar45 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar45) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar45 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar45) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar46 = (param_2 + -2) / 2;
  iVar47 = iVar46 * 2 + 1;
  iVar51 = iVar47;
  iVar52 = iVar46;
  do {
    while (param_2 <= iVar47) {
LAB_1473cea99:
      if (iVar52 == 0) {
        iVar47 = param_2 + -1;
        lVar48 = (longlong)iVar47;
        if (0 < iVar47) {
          pFVar49 = param_1 + lVar48;
          do {
            pfVar4 = pFVar49->TimeAccumulator;
            bVar43 = param_1->bCanUseMarkerSync;
            uVar34 = *(undefined3 *)&param_1->field_0x71;
            fVar44 = param_1->LeaderScore;
            TVar5 = (param_1->SourceAsset).field0_0x0;
            pfVar6 = param_1->TimeAccumulator;
            fVar29 = param_1->PlayRateMultiplier;
            fVar35 = param_1->EffectiveBlendWeight;
            fVar36 = param_1->RootMotionWeightModifier;
            bVar37 = param_1->bLooping;
            bVar38 = param_1->bIsEvaluator;
            bVar39 = param_1->bRequestedInertialization;
            bVar40 = param_1->bOverridePositionWhenJoiningSyncGroupAsLeader;
            bVar41 = param_1->bIsExclusiveLeader;
            bVar42 = param_1->bActiveContext;
            uVar32 = *(undefined6 *)&param_1->field_0x22;
            pUVar8 = param_1->MirrorDataTable;
            pTVar9 = (param_1->ContextData).Object;
            pTVar10 = (param_1->ContextData).SharedReferenceCount.ReferenceController;
            pFVar11 = (param_1->field13_0x40).BlendSpace.BlendFilter;
            pTVar21 = (param_1->field13_0x40).BlendSpace.BlendSampleDataCache;
            uVar7 = *(undefined8 *)((longlong)&param_1->field13_0x40 + 0x10);
            uVar12 = *(undefined8 *)((longlong)&param_1->field13_0x40 + 0x18);
            pFVar15 = param_1->DeltaTimeRecord;
            pFVar16 = param_1->MarkerTickRecord;
            (param_1->SourceAsset).field0_0x0 = (pFVar49->SourceAsset).field0_0x0;
            param_1->TimeAccumulator = pfVar4;
            fVar25 = pFVar49->EffectiveBlendWeight;
            fVar28 = pFVar49->RootMotionWeightModifier;
            bVar45 = pFVar49->bLooping;
            bVar30 = pFVar49->bIsEvaluator;
            bVar31 = pFVar49->bRequestedInertialization;
            bVar33 = pFVar49->bOverridePositionWhenJoiningSyncGroupAsLeader;
            param_1->PlayRateMultiplier = pFVar49->PlayRateMultiplier;
            param_1->EffectiveBlendWeight = fVar25;
            param_1->RootMotionWeightModifier = fVar28;
            param_1->bLooping = bVar45;
            param_1->bIsEvaluator = bVar30;
            param_1->bRequestedInertialization = bVar31;
            param_1->bOverridePositionWhenJoiningSyncGroupAsLeader = bVar33;
            bVar45 = pFVar49->bActiveContext;
            uVar26 = *(undefined6 *)&pFVar49->field_0x22;
            pUVar18 = pFVar49->MirrorDataTable;
            param_1->bIsExclusiveLeader = pFVar49->bIsExclusiveLeader;
            param_1->bActiveContext = bVar45;
            *(undefined6 *)&param_1->field_0x22 = uVar26;
            param_1->MirrorDataTable = pUVar18;
            pTVar19 = (pFVar49->ContextData).SharedReferenceCount.ReferenceController;
            (param_1->ContextData).Object = (pFVar49->ContextData).Object;
            (param_1->ContextData).SharedReferenceCount.ReferenceController = pTVar19;
            pTVar22 = (pFVar49->field13_0x40).BlendSpace.BlendSampleDataCache;
            (param_1->field13_0x40).BlendSpace.BlendFilter =
                 (pFVar49->field13_0x40).BlendSpace.BlendFilter;
            (param_1->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar22;
            uVar13 = *(undefined8 *)((longlong)&pFVar49->field13_0x40 + 0x18);
            *(undefined8 *)((longlong)&param_1->field13_0x40 + 0x10) =
                 *(undefined8 *)((longlong)&pFVar49->field13_0x40 + 0x10);
            *(undefined8 *)((longlong)&param_1->field13_0x40 + 0x18) = uVar13;
            pFVar20 = pFVar49->MarkerTickRecord;
            param_1->DeltaTimeRecord = pFVar49->DeltaTimeRecord;
            param_1->MarkerTickRecord = pFVar20;
            uVar27 = *(undefined3 *)&pFVar49->field_0x71;
            fVar25 = pFVar49->LeaderScore;
            param_1->bCanUseMarkerSync = pFVar49->bCanUseMarkerSync;
            *(undefined3 *)&param_1->field_0x71 = uVar27;
            param_1->LeaderScore = fVar25;
            (pFVar49->SourceAsset).field0_0x0 = TVar5;
            pFVar49->TimeAccumulator = pfVar6;
            pFVar49->PlayRateMultiplier = fVar29;
            pFVar49->EffectiveBlendWeight = fVar35;
            pFVar49->RootMotionWeightModifier = fVar36;
            pFVar49->bLooping = bVar37;
            pFVar49->bIsEvaluator = bVar38;
            pFVar49->bRequestedInertialization = bVar39;
            pFVar49->bOverridePositionWhenJoiningSyncGroupAsLeader = bVar40;
            pFVar49->bIsExclusiveLeader = bVar41;
            pFVar49->bActiveContext = bVar42;
            *(undefined6 *)&pFVar49->field_0x22 = uVar32;
            pFVar49->MirrorDataTable = pUVar8;
            (pFVar49->ContextData).Object = pTVar9;
            (pFVar49->ContextData).SharedReferenceCount.ReferenceController = pTVar10;
            (pFVar49->field13_0x40).BlendSpace.BlendFilter = pFVar11;
            (pFVar49->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar21;
            *(undefined8 *)((longlong)&pFVar49->field13_0x40 + 0x10) = uVar7;
            *(undefined8 *)((longlong)&pFVar49->field13_0x40 + 0x18) = uVar12;
            pFVar49->DeltaTimeRecord = pFVar15;
            pFVar49->MarkerTickRecord = pFVar16;
            pFVar49->bCanUseMarkerSync = bVar43;
            *(undefined3 *)&pFVar49->field_0x71 = uVar34;
            pFVar49->LeaderScore = fVar44;
            iVar51 = 0;
            if (1 < iVar47) {
              do {
                iVar52 = iVar51 * 2;
                iVar46 = iVar52 + 1;
                if (iVar52 + 2 < iVar47) {
                  if (param_1[iVar46].LeaderScore <= param_1[(longlong)iVar52 + 2].LeaderScore &&
                      param_1[(longlong)iVar52 + 2].LeaderScore != param_1[iVar46].LeaderScore) {
                    iVar46 = iVar52;
                  }
                  iVar46 = iVar46 + 1;
                }
                if (param_1[iVar51].LeaderScore <= param_1[iVar46].LeaderScore) break;
                pfVar4 = param_1[iVar46].TimeAccumulator;
                pFVar23 = param_1 + iVar51;
                bVar33 = pFVar23->bCanUseMarkerSync;
                uVar34 = *(undefined3 *)&pFVar23->field_0x71;
                fVar35 = pFVar23->LeaderScore;
                TVar5 = param_1[iVar51].SourceAsset.field0_0x0;
                pfVar6 = param_1[iVar51].TimeAccumulator;
                pFVar23 = param_1 + iVar51;
                fVar28 = pFVar23->PlayRateMultiplier;
                fVar29 = pFVar23->EffectiveBlendWeight;
                uVar7 = *(undefined8 *)(&pFVar23->PlayRateMultiplier + 2);
                pFVar23 = param_1 + iVar51;
                bVar30 = pFVar23->bIsExclusiveLeader;
                bVar31 = pFVar23->bActiveContext;
                uVar32 = *(undefined6 *)&pFVar23->field_0x22;
                pUVar8 = *(UMirrorDataTable **)(&pFVar23->bIsExclusiveLeader + 8);
                pTVar9 = param_1[iVar51].ContextData.Object;
                pTVar10 = param_1[iVar51].ContextData.SharedReferenceCount.ReferenceController;
                pFVar11 = param_1[iVar51].field13_0x40.BlendSpace.BlendFilter;
                uVar12 = *(undefined8 *)((longlong)&param_1[iVar51].field13_0x40 + 8);
                puVar1 = (undefined8 *)((longlong)&param_1[iVar51].field13_0x40 + 0x10);
                uVar13 = *puVar1;
                uVar14 = puVar1[1];
                pFVar15 = param_1[iVar51].DeltaTimeRecord;
                pFVar16 = (FMarkerTickRecord *)(&param_1[iVar51].DeltaTimeRecord)[1];
                param_1[iVar51].SourceAsset.field0_0x0 = param_1[iVar46].SourceAsset.field0_0x0;
                param_1[iVar51].TimeAccumulator = pfVar4;
                pFVar23 = param_1 + iVar46;
                fVar25 = pFVar23->EffectiveBlendWeight;
                uVar17 = *(undefined8 *)(&pFVar23->PlayRateMultiplier + 2);
                pFVar24 = param_1 + iVar51;
                pFVar24->PlayRateMultiplier = pFVar23->PlayRateMultiplier;
                pFVar24->EffectiveBlendWeight = fVar25;
                *(undefined8 *)(&pFVar24->PlayRateMultiplier + 2) = uVar17;
                pFVar23 = param_1 + iVar46;
                bVar45 = pFVar23->bActiveContext;
                uVar26 = *(undefined6 *)&pFVar23->field_0x22;
                pUVar18 = *(UMirrorDataTable **)(&pFVar23->bIsExclusiveLeader + 8);
                pFVar24 = param_1 + iVar51;
                pFVar24->bIsExclusiveLeader = pFVar23->bIsExclusiveLeader;
                pFVar24->bActiveContext = bVar45;
                *(undefined6 *)&pFVar24->field_0x22 = uVar26;
                *(UMirrorDataTable **)(&pFVar24->bIsExclusiveLeader + 8) = pUVar18;
                pTVar19 = param_1[iVar46].ContextData.SharedReferenceCount.ReferenceController;
                param_1[iVar51].ContextData.Object = param_1[iVar46].ContextData.Object;
                param_1[iVar51].ContextData.SharedReferenceCount.ReferenceController = pTVar19;
                uVar17 = *(undefined8 *)((longlong)&param_1[iVar46].field13_0x40 + 8);
                param_1[iVar51].field13_0x40.BlendSpace.BlendFilter =
                     param_1[iVar46].field13_0x40.BlendSpace.BlendFilter;
                *(undefined8 *)((longlong)&param_1[iVar51].field13_0x40 + 8) = uVar17;
                puVar1 = (undefined8 *)((longlong)&param_1[iVar46].field13_0x40 + 0x10);
                uVar17 = puVar1[1];
                puVar2 = (undefined8 *)((longlong)&param_1[iVar51].field13_0x40 + 0x10);
                *puVar2 = *puVar1;
                puVar2[1] = uVar17;
                pFVar20 = (FMarkerTickRecord *)(&param_1[iVar46].DeltaTimeRecord)[1];
                param_1[iVar51].DeltaTimeRecord = param_1[iVar46].DeltaTimeRecord;
                (&param_1[iVar51].DeltaTimeRecord)[1] = (FDeltaTimeRecord *)pFVar20;
                pFVar23 = param_1 + iVar46;
                uVar27 = *(undefined3 *)&pFVar23->field_0x71;
                fVar25 = pFVar23->LeaderScore;
                pFVar24 = param_1 + iVar51;
                pFVar24->bCanUseMarkerSync = pFVar23->bCanUseMarkerSync;
                *(undefined3 *)&pFVar24->field_0x71 = uVar27;
                pFVar24->LeaderScore = fVar25;
                param_1[iVar46].SourceAsset.field0_0x0 = TVar5;
                param_1[iVar46].TimeAccumulator = pfVar6;
                pFVar23 = param_1 + iVar46;
                pFVar23->PlayRateMultiplier = fVar28;
                pFVar23->EffectiveBlendWeight = fVar29;
                *(undefined8 *)(&pFVar23->PlayRateMultiplier + 2) = uVar7;
                pFVar23 = param_1 + iVar46;
                pFVar23->bIsExclusiveLeader = bVar30;
                pFVar23->bActiveContext = bVar31;
                *(undefined6 *)&pFVar23->field_0x22 = uVar32;
                *(UMirrorDataTable **)(&pFVar23->bIsExclusiveLeader + 8) = pUVar8;
                param_1[iVar46].ContextData.Object = pTVar9;
                param_1[iVar46].ContextData.SharedReferenceCount.ReferenceController = pTVar10;
                param_1[iVar46].field13_0x40.BlendSpace.BlendFilter = pFVar11;
                *(undefined8 *)((longlong)&param_1[iVar46].field13_0x40 + 8) = uVar12;
                puVar1 = (undefined8 *)((longlong)&param_1[iVar46].field13_0x40 + 0x10);
                *puVar1 = uVar13;
                puVar1[1] = uVar14;
                param_1[iVar46].DeltaTimeRecord = pFVar15;
                (&param_1[iVar46].DeltaTimeRecord)[1] = (FDeltaTimeRecord *)pFVar16;
                pFVar23 = param_1 + iVar46;
                pFVar23->bCanUseMarkerSync = bVar33;
                *(undefined3 *)&pFVar23->field_0x71 = uVar34;
                pFVar23->LeaderScore = fVar35;
                iVar51 = iVar46;
              } while (iVar46 * 2 + 1 < iVar47);
            }
            iVar47 = iVar47 + -1;
            lVar48 = lVar48 + -1;
            pFVar49 = pFVar49 + -1;
          } while (0 < lVar48);
        }
        return;
      }
      iVar46 = iVar52 + -1;
      iVar47 = iVar51 + -2;
      iVar51 = iVar47;
      iVar52 = iVar46;
    }
    iVar47 = iVar46 * 2;
    iVar50 = iVar47 + 1;
    if (iVar47 + 2 < param_2) {
      if (param_1[iVar50].LeaderScore <= param_1[(longlong)iVar47 + 2].LeaderScore &&
          param_1[(longlong)iVar47 + 2].LeaderScore != param_1[iVar50].LeaderScore) {
        iVar50 = iVar47;
      }
      iVar50 = iVar50 + 1;
    }
    if (param_1[iVar46].LeaderScore <= param_1[iVar50].LeaderScore) goto LAB_1473cea99;
    pfVar4 = param_1[iVar50].TimeAccumulator;
    iVar47 = iVar50 * 2 + 1;
    pFVar49 = param_1 + iVar46;
    bVar33 = pFVar49->bCanUseMarkerSync;
    uVar34 = *(undefined3 *)&pFVar49->field_0x71;
    fVar35 = pFVar49->LeaderScore;
    TVar5 = param_1[iVar46].SourceAsset.field0_0x0;
    pfVar6 = param_1[iVar46].TimeAccumulator;
    pFVar49 = param_1 + iVar46;
    fVar28 = pFVar49->PlayRateMultiplier;
    fVar29 = pFVar49->EffectiveBlendWeight;
    uVar7 = *(undefined8 *)(&pFVar49->PlayRateMultiplier + 2);
    pFVar49 = param_1 + iVar46;
    bVar30 = pFVar49->bIsExclusiveLeader;
    bVar31 = pFVar49->bActiveContext;
    uVar32 = *(undefined6 *)&pFVar49->field_0x22;
    pUVar8 = *(UMirrorDataTable **)(&pFVar49->bIsExclusiveLeader + 8);
    pTVar9 = param_1[iVar46].ContextData.Object;
    pTVar10 = param_1[iVar46].ContextData.SharedReferenceCount.ReferenceController;
    pFVar11 = param_1[iVar46].field13_0x40.BlendSpace.BlendFilter;
    uVar12 = *(undefined8 *)((longlong)&param_1[iVar46].field13_0x40 + 8);
    puVar1 = (undefined8 *)((longlong)&param_1[iVar46].field13_0x40 + 0x10);
    uVar13 = *puVar1;
    uVar14 = puVar1[1];
    pFVar15 = param_1[iVar46].DeltaTimeRecord;
    pFVar16 = (FMarkerTickRecord *)(&param_1[iVar46].DeltaTimeRecord)[1];
    param_1[iVar46].SourceAsset.field0_0x0 = param_1[iVar50].SourceAsset.field0_0x0;
    param_1[iVar46].TimeAccumulator = pfVar4;
    pFVar49 = param_1 + iVar50;
    fVar25 = pFVar49->EffectiveBlendWeight;
    uVar17 = *(undefined8 *)(&pFVar49->PlayRateMultiplier + 2);
    pFVar23 = param_1 + iVar46;
    pFVar23->PlayRateMultiplier = pFVar49->PlayRateMultiplier;
    pFVar23->EffectiveBlendWeight = fVar25;
    *(undefined8 *)(&pFVar23->PlayRateMultiplier + 2) = uVar17;
    pFVar49 = param_1 + iVar50;
    bVar45 = pFVar49->bActiveContext;
    uVar26 = *(undefined6 *)&pFVar49->field_0x22;
    pUVar18 = *(UMirrorDataTable **)(&pFVar49->bIsExclusiveLeader + 8);
    pFVar23 = param_1 + iVar46;
    pFVar23->bIsExclusiveLeader = pFVar49->bIsExclusiveLeader;
    pFVar23->bActiveContext = bVar45;
    *(undefined6 *)&pFVar23->field_0x22 = uVar26;
    *(UMirrorDataTable **)(&pFVar23->bIsExclusiveLeader + 8) = pUVar18;
    pTVar19 = param_1[iVar50].ContextData.SharedReferenceCount.ReferenceController;
    param_1[iVar46].ContextData.Object = param_1[iVar50].ContextData.Object;
    param_1[iVar46].ContextData.SharedReferenceCount.ReferenceController = pTVar19;
    uVar17 = *(undefined8 *)((longlong)&param_1[iVar50].field13_0x40 + 8);
    param_1[iVar46].field13_0x40.BlendSpace.BlendFilter =
         param_1[iVar50].field13_0x40.BlendSpace.BlendFilter;
    *(undefined8 *)((longlong)&param_1[iVar46].field13_0x40 + 8) = uVar17;
    puVar1 = (undefined8 *)((longlong)&param_1[iVar50].field13_0x40 + 0x10);
    uVar17 = puVar1[1];
    puVar2 = (undefined8 *)((longlong)&param_1[iVar46].field13_0x40 + 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar17;
    pFVar20 = (FMarkerTickRecord *)(&param_1[iVar50].DeltaTimeRecord)[1];
    param_1[iVar46].DeltaTimeRecord = param_1[iVar50].DeltaTimeRecord;
    (&param_1[iVar46].DeltaTimeRecord)[1] = (FDeltaTimeRecord *)pFVar20;
    pFVar49 = param_1 + iVar50;
    uVar27 = *(undefined3 *)&pFVar49->field_0x71;
    fVar25 = pFVar49->LeaderScore;
    pFVar23 = param_1 + iVar46;
    pFVar23->bCanUseMarkerSync = pFVar49->bCanUseMarkerSync;
    *(undefined3 *)&pFVar23->field_0x71 = uVar27;
    pFVar23->LeaderScore = fVar25;
    param_1[iVar50].SourceAsset.field0_0x0 = TVar5;
    param_1[iVar50].TimeAccumulator = pfVar6;
    pFVar49 = param_1 + iVar50;
    pFVar49->PlayRateMultiplier = fVar28;
    pFVar49->EffectiveBlendWeight = fVar29;
    *(undefined8 *)(&pFVar49->PlayRateMultiplier + 2) = uVar7;
    pFVar49 = param_1 + iVar50;
    pFVar49->bIsExclusiveLeader = bVar30;
    pFVar49->bActiveContext = bVar31;
    *(undefined6 *)&pFVar49->field_0x22 = uVar32;
    *(UMirrorDataTable **)(&pFVar49->bIsExclusiveLeader + 8) = pUVar8;
    param_1[iVar50].ContextData.Object = pTVar9;
    param_1[iVar50].ContextData.SharedReferenceCount.ReferenceController = pTVar10;
    param_1[iVar50].field13_0x40.BlendSpace.BlendFilter = pFVar11;
    *(undefined8 *)((longlong)&param_1[iVar50].field13_0x40 + 8) = uVar12;
    puVar1 = (undefined8 *)((longlong)&param_1[iVar50].field13_0x40 + 0x10);
    *puVar1 = uVar13;
    puVar1[1] = uVar14;
    param_1[iVar50].DeltaTimeRecord = pFVar15;
    (&param_1[iVar50].DeltaTimeRecord)[1] = (FDeltaTimeRecord *)pFVar16;
    pFVar49 = param_1 + iVar50;
    pFVar49->bCanUseMarkerSync = bVar33;
    *(undefined3 *)&pFVar49->field_0x71 = uVar34;
    pFVar49->LeaderScore = fVar35;
    iVar46 = iVar50;
  } while( true );
}

// HeapSortInternal<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,int,FIdentityFunctor,TDereferenceWrapper<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,`FNetConnAnalyticsData::SendAnalytics'::__l48::<lambda_3>_>_> @ 1473ceca0

void __cdecl
AlgoImpl::
HeapSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,_FNetConnAnalyticsData::SendAnalytics_::__l48::<lambda_3>_>_>
          (FFailedPingCounter *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_5_::FFailedPingCounter,_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_48_::<lambda_3>_>
          param_4)

{
  FFailedPingCounter *pFVar1;
  FFailedPingCounter *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FFailedPingCounter *pFVar17;
  longlong lVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar19 = iVar14;
  iVar15 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_1473cedad:
      if (iVar15 == 0) {
        iVar14 = param_2 + -1;
        lVar18 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar17 = param_1 + lVar18;
          do {
            iVar19 = (pFVar17->PingAddress).Data.ArrayNum;
            iVar13 = (pFVar17->PingAddress).Data.ArrayMax;
            iVar5 = param_1->Counter;
            uVar11 = *(undefined4 *)&param_1->field_0x14;
            pFVar4 = (param_1->PingAddress).Data.AllocatorInstance.Data;
            iVar15 = (param_1->PingAddress).Data.ArrayNum;
            iVar16 = (param_1->PingAddress).Data.ArrayMax;
            (param_1->PingAddress).Data.AllocatorInstance.Data =
                 (pFVar17->PingAddress).Data.AllocatorInstance.Data;
            (param_1->PingAddress).Data.ArrayNum = iVar19;
            (param_1->PingAddress).Data.ArrayMax = iVar13;
            uVar7 = *(undefined4 *)&pFVar17->field_0x14;
            param_1->Counter = pFVar17->Counter;
            *(undefined4 *)&param_1->field_0x14 = uVar7;
            (pFVar17->PingAddress).Data.AllocatorInstance.Data = pFVar4;
            (pFVar17->PingAddress).Data.ArrayNum = iVar15;
            (pFVar17->PingAddress).Data.ArrayMax = iVar16;
            pFVar17->Counter = iVar5;
            *(undefined4 *)&pFVar17->field_0x14 = uVar11;
            iVar19 = 0;
            if (1 < iVar14) {
              do {
                iVar13 = iVar19 * 2;
                iVar15 = iVar13 + 1;
                if (iVar13 + 2 < iVar14) {
                  if (param_1[(longlong)iVar13 + 2].Counter < param_1[iVar15].Counter) {
                    iVar15 = iVar13;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar1 = param_1 + iVar15;
                if (pFVar1->Counter <= param_1[iVar19].Counter) break;
                iVar13 = (pFVar1->PingAddress).Data.ArrayNum;
                iVar16 = (pFVar1->PingAddress).Data.ArrayMax;
                iVar8 = param_1[iVar19].Counter;
                uVar11 = *(undefined4 *)&param_1[iVar19].field_0x14;
                pFVar2 = param_1 + iVar19;
                pFVar4 = (pFVar2->PingAddress).Data.AllocatorInstance.Data;
                iVar5 = (pFVar2->PingAddress).Data.ArrayNum;
                iVar6 = (pFVar2->PingAddress).Data.ArrayMax;
                pFVar2 = param_1 + iVar19;
                (pFVar2->PingAddress).Data.AllocatorInstance.Data =
                     (pFVar1->PingAddress).Data.AllocatorInstance.Data;
                (pFVar2->PingAddress).Data.ArrayNum = iVar13;
                (pFVar2->PingAddress).Data.ArrayMax = iVar16;
                uVar7 = *(undefined4 *)&pFVar1->field_0x14;
                param_1[iVar19].Counter = pFVar1->Counter;
                *(undefined4 *)&param_1[iVar19].field_0x14 = uVar7;
                (pFVar1->PingAddress).Data.AllocatorInstance.Data = pFVar4;
                (pFVar1->PingAddress).Data.ArrayNum = iVar5;
                (pFVar1->PingAddress).Data.ArrayMax = iVar6;
                pFVar1->Counter = iVar8;
                *(undefined4 *)&pFVar1->field_0x14 = uVar11;
                iVar19 = iVar15;
              } while (iVar15 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar18 = lVar18 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar13 = iVar15 + -1;
      iVar14 = iVar19 + -2;
      iVar19 = iVar14;
      iVar15 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar16 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Counter < param_1[iVar16].Counter) {
        iVar16 = iVar14;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar17 = param_1 + iVar16;
    if (pFVar17->Counter <= param_1[iVar13].Counter) goto LAB_1473cedad;
    iVar5 = (pFVar17->PingAddress).Data.ArrayNum;
    iVar6 = (pFVar17->PingAddress).Data.ArrayMax;
    iVar14 = iVar16 * 2 + 1;
    iVar10 = param_1[iVar13].Counter;
    uVar11 = *(undefined4 *)&param_1[iVar13].field_0x14;
    pFVar1 = param_1 + iVar13;
    pFVar4 = (pFVar1->PingAddress).Data.AllocatorInstance.Data;
    iVar8 = (pFVar1->PingAddress).Data.ArrayNum;
    iVar9 = (pFVar1->PingAddress).Data.ArrayMax;
    pFVar1 = param_1 + iVar13;
    (pFVar1->PingAddress).Data.AllocatorInstance.Data =
         (pFVar17->PingAddress).Data.AllocatorInstance.Data;
    (pFVar1->PingAddress).Data.ArrayNum = iVar5;
    (pFVar1->PingAddress).Data.ArrayMax = iVar6;
    uVar7 = *(undefined4 *)&pFVar17->field_0x14;
    param_1[iVar13].Counter = pFVar17->Counter;
    *(undefined4 *)&param_1[iVar13].field_0x14 = uVar7;
    (pFVar17->PingAddress).Data.AllocatorInstance.Data = pFVar4;
    (pFVar17->PingAddress).Data.ArrayNum = iVar8;
    (pFVar17->PingAddress).Data.ArrayMax = iVar9;
    pFVar17->Counter = iVar10;
    *(undefined4 *)&pFVar17->field_0x14 = uVar11;
    iVar13 = iVar16;
  } while( true );
}

// HeapSortInternal<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,`FNetConnAnalyticsData::SendAnalytics'::__l33::<lambda_2>_>_> @ 1473ceec0

void __cdecl
AlgoImpl::
HeapSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,_FNetConnAnalyticsData::SendAnalytics_::__l33::<lambda_2>_>_>
          (FReasonCounter *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_5_::FReasonCounter,_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_33_::<lambda_2>_>
          param_4)

{
  FReasonCounter *pFVar1;
  FReasonCounter *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FReasonCounter *pFVar17;
  longlong lVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar19 = iVar14;
  iVar15 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_1473cefcd:
      if (iVar15 == 0) {
        iVar14 = param_2 + -1;
        lVar18 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar17 = param_1 + lVar18;
          do {
            iVar19 = (pFVar17->ReasonStr).Data.ArrayNum;
            iVar13 = (pFVar17->ReasonStr).Data.ArrayMax;
            iVar5 = param_1->Counter;
            uVar11 = *(undefined4 *)&param_1->field_0x14;
            pFVar4 = (param_1->ReasonStr).Data.AllocatorInstance.Data;
            iVar15 = (param_1->ReasonStr).Data.ArrayNum;
            iVar16 = (param_1->ReasonStr).Data.ArrayMax;
            (param_1->ReasonStr).Data.AllocatorInstance.Data =
                 (pFVar17->ReasonStr).Data.AllocatorInstance.Data;
            (param_1->ReasonStr).Data.ArrayNum = iVar19;
            (param_1->ReasonStr).Data.ArrayMax = iVar13;
            uVar7 = *(undefined4 *)&pFVar17->field_0x14;
            param_1->Counter = pFVar17->Counter;
            *(undefined4 *)&param_1->field_0x14 = uVar7;
            (pFVar17->ReasonStr).Data.AllocatorInstance.Data = pFVar4;
            (pFVar17->ReasonStr).Data.ArrayNum = iVar15;
            (pFVar17->ReasonStr).Data.ArrayMax = iVar16;
            pFVar17->Counter = iVar5;
            *(undefined4 *)&pFVar17->field_0x14 = uVar11;
            iVar19 = 0;
            if (1 < iVar14) {
              do {
                iVar13 = iVar19 * 2;
                iVar15 = iVar13 + 1;
                if (iVar13 + 2 < iVar14) {
                  if (param_1[(longlong)iVar13 + 2].Counter < param_1[iVar15].Counter) {
                    iVar15 = iVar13;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar1 = param_1 + iVar15;
                if (pFVar1->Counter <= param_1[iVar19].Counter) break;
                iVar13 = (pFVar1->ReasonStr).Data.ArrayNum;
                iVar16 = (pFVar1->ReasonStr).Data.ArrayMax;
                iVar8 = param_1[iVar19].Counter;
                uVar11 = *(undefined4 *)&param_1[iVar19].field_0x14;
                pFVar2 = param_1 + iVar19;
                pFVar4 = (pFVar2->ReasonStr).Data.AllocatorInstance.Data;
                iVar5 = (pFVar2->ReasonStr).Data.ArrayNum;
                iVar6 = (pFVar2->ReasonStr).Data.ArrayMax;
                pFVar2 = param_1 + iVar19;
                (pFVar2->ReasonStr).Data.AllocatorInstance.Data =
                     (pFVar1->ReasonStr).Data.AllocatorInstance.Data;
                (pFVar2->ReasonStr).Data.ArrayNum = iVar13;
                (pFVar2->ReasonStr).Data.ArrayMax = iVar16;
                uVar7 = *(undefined4 *)&pFVar1->field_0x14;
                param_1[iVar19].Counter = pFVar1->Counter;
                *(undefined4 *)&param_1[iVar19].field_0x14 = uVar7;
                (pFVar1->ReasonStr).Data.AllocatorInstance.Data = pFVar4;
                (pFVar1->ReasonStr).Data.ArrayNum = iVar5;
                (pFVar1->ReasonStr).Data.ArrayMax = iVar6;
                pFVar1->Counter = iVar8;
                *(undefined4 *)&pFVar1->field_0x14 = uVar11;
                iVar19 = iVar15;
              } while (iVar15 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar18 = lVar18 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar13 = iVar15 + -1;
      iVar14 = iVar19 + -2;
      iVar19 = iVar14;
      iVar15 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar16 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Counter < param_1[iVar16].Counter) {
        iVar16 = iVar14;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar17 = param_1 + iVar16;
    if (pFVar17->Counter <= param_1[iVar13].Counter) goto LAB_1473cefcd;
    iVar5 = (pFVar17->ReasonStr).Data.ArrayNum;
    iVar6 = (pFVar17->ReasonStr).Data.ArrayMax;
    iVar14 = iVar16 * 2 + 1;
    iVar10 = param_1[iVar13].Counter;
    uVar11 = *(undefined4 *)&param_1[iVar13].field_0x14;
    pFVar1 = param_1 + iVar13;
    pFVar4 = (pFVar1->ReasonStr).Data.AllocatorInstance.Data;
    iVar8 = (pFVar1->ReasonStr).Data.ArrayNum;
    iVar9 = (pFVar1->ReasonStr).Data.ArrayMax;
    pFVar1 = param_1 + iVar13;
    (pFVar1->ReasonStr).Data.AllocatorInstance.Data =
         (pFVar17->ReasonStr).Data.AllocatorInstance.Data;
    (pFVar1->ReasonStr).Data.ArrayNum = iVar5;
    (pFVar1->ReasonStr).Data.ArrayMax = iVar6;
    uVar7 = *(undefined4 *)&pFVar17->field_0x14;
    param_1[iVar13].Counter = pFVar17->Counter;
    *(undefined4 *)&param_1[iVar13].field_0x14 = uVar7;
    (pFVar17->ReasonStr).Data.AllocatorInstance.Data = pFVar4;
    (pFVar17->ReasonStr).Data.ArrayNum = iVar8;
    (pFVar17->ReasonStr).Data.ArrayMax = iVar9;
    pFVar17->Counter = iVar10;
    *(undefined4 *)&pFVar17->field_0x14 = uVar11;
    iVar13 = iVar16;
  } while( true );
}

// HeapSortInternal<TSharedPtr<FRPCAnalytics,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FRPCAnalytics,1>,`FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>_>_> @ 1473cf0e0

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FRPCAnalytics,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FRPCAnalytics,1>,_FRPCDoSAnalyticsVars::CommitAnalytics_::__l2::<lambda_1>_>_>
          (TSharedPtr<FRPCAnalytics,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FRPCAnalytics,1>,_public:_void___cdecl_FRPCDoSAnalyticsVars::CommitAnalytics(FRPCDoSAnalyticsVars_&)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FRPCAnalytics *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TSharedPtr<FRPCAnalytics,1> *pTVar11;
  TSharedPtr<FRPCAnalytics,1> *pTVar12;
  int iVar13;
  TSharedPtr<FRPCAnalytics,1> *pTVar14;
  
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
  iVar13 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1473cf207:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar11 = param_1 + lVar10;
          do {
            pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
            iVar13 = 0;
            pFVar2 = param_1->Object;
            pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
            param_1->Object = pTVar11->Object;
            (param_1->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar11->Object = pFVar2;
            (pTVar11->SharedReferenceCount).ReferenceController = pTVar4;
            if (1 < iVar7) {
              do {
                iVar9 = iVar13 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar12 = param_1 + iVar6;
                pTVar14 = param_1 + iVar13;
                bVar5 = `FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,pTVar14,pTVar12);
                if (!bVar5) break;
                pFVar2 = pTVar14->Object;
                pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
                pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
                pTVar14->Object = pTVar12->Object;
                (pTVar14->SharedReferenceCount).ReferenceController = pTVar4;
                pTVar12->Object = pFVar2;
                (pTVar12->SharedReferenceCount).ReferenceController = pTVar3;
                iVar13 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar13 + -2;
      iVar13 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar11 = param_1 + iVar8;
    pTVar12 = param_1 + iVar6;
    bVar5 = `FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pTVar12,pTVar11);
    if (!bVar5) goto LAB_1473cf207;
    pFVar2 = pTVar12->Object;
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    iVar7 = iVar8 * 2 + 1;
    pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
    pTVar12->Object = pTVar11->Object;
    (pTVar12->SharedReferenceCount).ReferenceController = pTVar4;
    pTVar11->Object = pFVar2;
    (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
    iVar6 = iVar8;
  } while( true );
}

// InitArrayView<unsigned_char> @ 1473cf310

void __cdecl InitArrayView<unsigned_char>(TArrayView<unsigned_char,int> *param_1,uchar **param_2)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_c;
  
  puVar2 = *param_2;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->DataPtr = puVar2;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar1);
  *param_2 = *param_2 + param_1->ArrayNum;
  return;
}

// InitArrayView<int> @ 1473cf380

void __cdecl InitArrayView<int>(TArrayView<int,int> *param_1,uchar **param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_c;
  
  piVar2 = (int *)*param_2;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->DataPtr = piVar2;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar1);
  *param_2 = *param_2 + (longlong)param_1->ArrayNum * 4;
  return;
}

// InternalConstructor<AAmbientSound> @ 1473cf3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AAmbientSound>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AAmbientSound__6B_;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,L"AudioComponent0");
    FVar2 = *pFVar3;
    pUVar4 = Z_Construct_UClass_UAudioComponent_NoRegister();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    pUVar5[3].field_0x22 = pUVar5[3].field_0x22 | 8;
    pbVar1 = (byte *)(this[1]._padding_ + 0x4c8);
    *pbVar1 = *pbVar1 | 2;
    pbVar1 = (byte *)(this[1]._padding_ + 0x4c8);
    *pbVar1 = *pbVar1 | 4;
    *(undefined1 *)(this[1]._padding_ + 0x1ab) = 2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this[1]._padding_);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
    this->bReplicates = '\0';
    AActor::SetHidden(this,true);
    AActor::SetCanBeDamaged(this,false);
    return;
  }
  return;
}

// InternalConstructor<UAimOffsetBlendSpace1D> @ 1473cf510

void __cdecl InternalConstructor<UAimOffsetBlendSpace1D>(FObjectInitializer *param_1)

{
  UBlendSpace1D *this;
  
  this = (UBlendSpace1D *)param_1->Obj;
  if (this != (UBlendSpace1D *)0x0) {
    UBlendSpace1D::UBlendSpace1D(this,param_1);
    this->_padding_ = (longlong)&UAimOffsetBlendSpace1D::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAimOffsetBlendSpace1D::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAimOffsetBlendSpace1D::_vftable__for__IInterface_PreviewMeshProvider__;
    this->_padding_ = (longlong)&___7UAimOffsetBlendSpace1D__6B_;
  }
  return;
}

// InternalConstructor<UAimOffsetBlendSpace> @ 1473cf570

void __cdecl InternalConstructor<UAimOffsetBlendSpace>(FObjectInitializer *param_1)

{
  UBlendSpace *this;
  
  this = (UBlendSpace *)param_1->Obj;
  if (this != (UBlendSpace *)0x0) {
    UBlendSpace::UBlendSpace(this,param_1);
    this->_padding_ = (longlong)&UAimOffsetBlendSpace::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAimOffsetBlendSpace::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAimOffsetBlendSpace::_vftable__for__IInterface_PreviewMeshProvider__;
    this->_padding_ = (longlong)&___7UAimOffsetBlendSpace__6B_;
  }
  return;
}

// InternalConstructor<UAnimBank> @ 1473cf5d0

void __cdecl InternalConstructor<UAnimBank>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UAnimBank::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UAnimBank::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this[1].field_0x8 = &UAnimBank::_vftable__for__IInterface_PreviewMeshProvider__
    ;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined ***)&this[3].field_0x8 = &___7UAnimBank__6B_;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this[6].field_0x18);
    return;
  }
  return;
}

// InternalConstructor<UAnimBankData> @ 1473cf6d0

void __cdecl InternalConstructor<UAnimBankData>(FObjectInitializer *param_1)

{
  UTransformProviderData *this;
  
  this = (UTransformProviderData *)param_1->Obj;
  if (this != (UTransformProviderData *)0x0) {
    UTransformProviderData::UTransformProviderData(this,param_1);
    this->_padding_ = (longlong)&___7UAnimBankData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAnimBlueprintGeneratedClass> @ 1473cf710

void __cdecl InternalConstructor<UAnimBlueprintGeneratedClass>(FObjectInitializer *param_1)

{
  if ((UAnimBlueprintGeneratedClass *)param_1->Obj != (UAnimBlueprintGeneratedClass *)0x0) {
    UAnimBlueprintGeneratedClass::UAnimBlueprintGeneratedClass
              ((UAnimBlueprintGeneratedClass *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimBlueprintGeneratedStruct> @ 1473cf730

void __cdecl InternalConstructor<UAnimBlueprintGeneratedStruct>(FObjectInitializer *param_1)

{
  UScriptStruct *this;
  
  this = (UScriptStruct *)param_1->Obj;
  if (this != (UScriptStruct *)0x0) {
    UScriptStruct::UScriptStruct(this,param_1);
    this->_padding_ = (longlong)&___7UAnimBlueprintGeneratedStruct__6B_;
  }
  return;
}

// InternalConstructor<UAnimBoneCompressionCodec> @ 1473cf760

void __cdecl InternalConstructor<UAnimBoneCompressionCodec>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimBoneCompressionCodec__6B_;
    FString::FString((FString *)(this + 1),L"None");
    return;
  }
  return;
}

// InternalConstructor<UAnimBoneCompressionSettings> @ 1473cf7b0

void __cdecl InternalConstructor<UAnimBoneCompressionSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimBoneCompressionSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UAnimClassInterface> @ 1473cf7f0

void __cdecl InternalConstructor<UAnimClassInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAnimClassInterface__6B_;
  }
  return;
}

// InternalConstructor<UAnimComposite> @ 1473cf820

void __cdecl InternalConstructor<UAnimComposite>(FObjectInitializer *param_1)

{
  UAnimSequenceBase *this;
  
  this = (UAnimSequenceBase *)param_1->Obj;
  if (this != (UAnimSequenceBase *)0x0) {
    UAnimSequenceBase::UAnimSequenceBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 60000;
    this->_padding_ = (longlong)&UAnimComposite::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimComposite::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimComposite::_vftable__for__IInterface_PreviewMeshProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UAnimCompositeBase> @ 1473cf890

void __cdecl InternalConstructor<UAnimCompositeBase>(FObjectInitializer *param_1)

{
  UAnimSequenceBase *this;
  
  this = (UAnimSequenceBase *)param_1->Obj;
  if (this != (UAnimSequenceBase *)0x0) {
    UAnimSequenceBase::UAnimSequenceBase(this,param_1);
    this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__IInterface_PreviewMeshProvider__
    ;
    *(undefined4 *)&this[1]._padding_ = 60000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UAnimCompress> @ 1473cf8f0

void __cdecl InternalConstructor<UAnimCompress>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimBoneCompressionCodec__6B_;
    FString::FString((FString *)(this + 1),L"None");
    *(undefined2 *)&this[1].field_0x14 = 0x100;
    *(undefined ***)this = &___7UAnimCompress__6B_;
  }
  return;
}

// InternalConstructor<UAnimationAsset> @ 1473cf940

void __cdecl InternalConstructor<UAnimationAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UAnimationAsset::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UAnimationAsset::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this[1].field_0x8 =
         &UAnimationAsset::_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UAnimationSettings> @ 1473cf9b0

void __cdecl InternalConstructor<UAnimationSettings>(FObjectInitializer *param_1)

{
  if ((UAnimationSettings *)param_1->Obj != (UAnimationSettings *)0x0) {
    UAnimationSettings::UAnimationSettings((UAnimationSettings *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<AAmbientSound> @ 1473cf9d0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AAmbientSound>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AAmbientSound::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AAmbientSound__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAimOffsetBlendSpace1D> @ 1473cfa90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAimOffsetBlendSpace1D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlendSpace1D *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAimOffsetBlendSpace1D::GetPrivateStaticClass();
  this = (UBlendSpace1D *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlendSpace1D *)0x0) {
    UBlendSpace1D::UBlendSpace1D(this,param_1);
    this->_padding_ = (longlong)&UAimOffsetBlendSpace1D::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAimOffsetBlendSpace1D::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAimOffsetBlendSpace1D::_vftable__for__IInterface_PreviewMeshProvider__;
    this->_padding_ = (longlong)&___7UAimOffsetBlendSpace1D__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAimOffsetBlendSpace> @ 1473cfb60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAimOffsetBlendSpace>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlendSpace *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAimOffsetBlendSpace::GetPrivateStaticClass();
  this = (UBlendSpace *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlendSpace *)0x0) {
    UBlendSpace::UBlendSpace(this,param_1);
    this->_padding_ = (longlong)&UAimOffsetBlendSpace::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAimOffsetBlendSpace::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAimOffsetBlendSpace::_vftable__for__IInterface_PreviewMeshProvider__;
    this->_padding_ = (longlong)&___7UAimOffsetBlendSpace__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimBank> @ 1473cfc30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimBank>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimBank::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &UAnimBank::_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)(pUVar1 + 1) = &UAnimBank::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UAnimBank::_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined ***)&pUVar1[3].field_0x8 = &___7UAnimBank__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&pUVar1[6].field_0x18);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimBankData> @ 1473cfdb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimBankData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTransformProviderData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimBankData::GetPrivateStaticClass();
  this = (UTransformProviderData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTransformProviderData *)0x0) {
    UTransformProviderData::UTransformProviderData(this,param_1);
    this->_padding_ = (longlong)&___7UAnimBankData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedClass> @ 1473cfe70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimBlueprintGeneratedClass::GetPrivateStaticClass();
  pUVar3 = (UAnimBlueprintGeneratedClass *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UAnimBlueprintGeneratedClass *)0x0) {
    pUVar3 = UAnimBlueprintGeneratedClass::UAnimBlueprintGeneratedClass(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedStruct> @ 1473cff10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedStruct>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UScriptStruct *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimBlueprintGeneratedStruct::GetPrivateStaticClass();
  this = (UScriptStruct *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UScriptStruct *)0x0) {
    UScriptStruct::UScriptStruct(this,param_1);
    this->_padding_ = (longlong)&___7UAnimBlueprintGeneratedStruct__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec> @ 1473cffc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimBoneCompressionCodec::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimBoneCompressionCodec__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimBoneCompressionSettings> @ 1473d0080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimBoneCompressionSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimBoneCompressionSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimBoneCompressionSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimClassInterface> @ 1473d0140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimClassInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimClassInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimClassInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimComposite> @ 1473d01f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimComposite>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimSequenceBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimComposite::GetPrivateStaticClass();
  this = (UAnimSequenceBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimSequenceBase *)0x0) {
    UAnimSequenceBase::UAnimSequenceBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 60000;
    this->_padding_ = (longlong)&UAnimComposite::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimComposite::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimComposite::_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCompositeBase> @ 1473d02e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimCompositeBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimSequenceBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCompositeBase::GetPrivateStaticClass();
  this = (UAnimSequenceBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimSequenceBase *)0x0) {
    UAnimSequenceBase::UAnimSequenceBase(this,param_1);
    this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__IInterface_PreviewMeshProvider__
    ;
    *(undefined4 *)&this[1]._padding_ = 60000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimCompress> @ 1473d03c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimCompress>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCompress::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UAnimCompress__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimationAsset> @ 1473d0480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimationAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &UAnimationAsset::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UAnimationAsset::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UAnimationAsset::_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimationSettings> @ 1473d0570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimationSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UAnimationSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex = 0;
    this[2].CategoryName.Number = 0;
    this[2].SectionName.ComparisonIndex = 0;
    this[2].SectionName.Number = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].CategoryName.ComparisonIndex = 0;
    this[3].CategoryName.Number = 0;
    this[3].SectionName.ComparisonIndex.Value = 0;
    this[3].SectionName.Number = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4].CategoryName.ComparisonIndex = 0;
    this[4].CategoryName.Number = 0;
    this[4].SectionName.ComparisonIndex = 0;
    this[4].SectionName.Number = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 60000;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>_>_> @ 1473d06f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FCompressedAnimSequence::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_void___cdecl_FCompressedAnimSequence::RebuildCurveIndexTable(void)_::_2_::<lambda_1>_>
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
LAB_1473d07b0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_1473d07e0:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x0001473d07e9;
          goto LAB_1473d0800;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_1473d08c4;
      }
LAB_1473d08b3:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FCompressedAnimSequence::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_1473d08c4:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x0001473d07e9:
  bVar2 = `FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_1473d07e0;
LAB_1473d0800:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `FCompressedAnimSequence::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_1473d07e0;
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
    if (piVar8 <= piVar10 + 1) goto LAB_1473d08c4;
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
    if (piVar4 <= piVar5) goto LAB_1473d08c4;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_1473d08b3;
  goto LAB_1473d07b0;
}

// IntroSortInternal<FAnimTickRecord,int,FIdentityFunctor,TDereferenceWrapper<FAnimTickRecord,TLess<void>_>_> @ 1473d0980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAnimTickRecord,int,FIdentityFunctor,TDereferenceWrapper<FAnimTickRecord,TLess<void>_>_>
          (FAnimTickRecord *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnimTickRecord,TLess<void>_> param_4)

{
  FAnimTickRecord *pFVar1;
  float *pfVar2;
  TObjectPtr<UAnimationAsset>_u_0 TVar3;
  float *pfVar4;
  UMirrorDataTable *pUVar5;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FBlendFilter *pFVar8;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FDeltaTimeRecord *pFVar12;
  FMarkerTickRecord *pFVar13;
  UMirrorDataTable *pUVar14;
  TReferenceControllerBase<1> *pTVar15;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar16;
  undefined8 uVar17;
  FMarkerTickRecord *pFVar18;
  TObjectPtr<UAnimationAsset>_u_0 TVar19;
  float fVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined6 uVar25;
  undefined3 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  undefined6 uVar36;
  bool bVar37;
  undefined3 uVar38;
  float fVar39;
  FAnimTickRecord *pFVar40;
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  FAnimTickRecord *pFVar44;
  FAnimTickRecord *pFVar45;
  FAnimTickRecord *pFVar46;
  FAnimTickRecord *pFVar47;
  FAnimTickRecord *pFVar48;
  FAnimTickRecord **ppFVar49;
  float fVar50;
  undefined1 auStack_3b8 [48];
  FAnimTickRecord *local_388;
  FAnimTickRecord *local_378;
  FAnimTickRecord *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar50 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar50;
    memset(local_360,0,0x2e8);
    ppFVar49 = &local_378;
    do {
      pFVar45 = ppFVar49[1];
      pFVar40 = *ppFVar49;
      pFVar1 = ppFVar49[2];
      local_388._0_4_ = (int)pFVar1;
      lVar42 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar45 - (longlong)pFVar40),
                      8) + ((longlong)pFVar45 - (longlong)pFVar40);
      iVar41 = ((int)(lVar42 >> 6) - (int)(lVar42 >> 0x3f)) + 1;
      pFVar48 = pFVar40;
      if ((int)local_388 != 0) {
LAB_1473d0a70:
        if (8 < iVar41) {
          pfVar2 = pFVar48->TimeAccumulator;
          pFVar44 = pFVar45 + 1;
          pFVar40 = pFVar48 + iVar41 / 2;
          TVar3 = (pFVar40->SourceAsset).field0_0x0;
          pfVar4 = pFVar40->TimeAccumulator;
          fVar27 = pFVar40->PlayRateMultiplier;
          fVar28 = pFVar40->EffectiveBlendWeight;
          fVar29 = pFVar40->RootMotionWeightModifier;
          bVar30 = pFVar40->bLooping;
          bVar31 = pFVar40->bIsEvaluator;
          bVar32 = pFVar40->bRequestedInertialization;
          bVar33 = pFVar40->bOverridePositionWhenJoiningSyncGroupAsLeader;
          bVar34 = pFVar40->bIsExclusiveLeader;
          bVar35 = pFVar40->bActiveContext;
          uVar36 = *(undefined6 *)&pFVar40->field_0x22;
          pUVar5 = pFVar40->MirrorDataTable;
          pTVar6 = (pFVar40->ContextData).Object;
          pTVar7 = (pFVar40->ContextData).SharedReferenceCount.ReferenceController;
          pFVar8 = (pFVar40->field13_0x40).BlendSpace.BlendFilter;
          pTVar9 = (pFVar40->field13_0x40).BlendSpace.BlendSampleDataCache;
          uVar10 = *(undefined8 *)((longlong)&pFVar40->field13_0x40 + 0x10);
          uVar11 = *(undefined8 *)((longlong)&pFVar40->field13_0x40 + 0x18);
          pFVar12 = pFVar40->DeltaTimeRecord;
          pFVar13 = pFVar40->MarkerTickRecord;
          bVar37 = pFVar40->bCanUseMarkerSync;
          uVar38 = *(undefined3 *)&pFVar40->field_0x71;
          fVar39 = pFVar40->LeaderScore;
          (pFVar40->SourceAsset).field0_0x0 = (pFVar48->SourceAsset).field0_0x0;
          pFVar40->TimeAccumulator = pfVar2;
          fVar50 = pFVar48->EffectiveBlendWeight;
          fVar20 = pFVar48->RootMotionWeightModifier;
          bVar21 = pFVar48->bLooping;
          bVar22 = pFVar48->bIsEvaluator;
          bVar23 = pFVar48->bRequestedInertialization;
          bVar24 = pFVar48->bOverridePositionWhenJoiningSyncGroupAsLeader;
          pFVar40->PlayRateMultiplier = pFVar48->PlayRateMultiplier;
          pFVar40->EffectiveBlendWeight = fVar50;
          pFVar40->RootMotionWeightModifier = fVar20;
          pFVar40->bLooping = bVar21;
          pFVar40->bIsEvaluator = bVar22;
          pFVar40->bRequestedInertialization = bVar23;
          pFVar40->bOverridePositionWhenJoiningSyncGroupAsLeader = bVar24;
          bVar21 = pFVar48->bActiveContext;
          uVar25 = *(undefined6 *)&pFVar48->field_0x22;
          pUVar14 = pFVar48->MirrorDataTable;
          pFVar40->bIsExclusiveLeader = pFVar48->bIsExclusiveLeader;
          pFVar40->bActiveContext = bVar21;
          *(undefined6 *)&pFVar40->field_0x22 = uVar25;
          pFVar40->MirrorDataTable = pUVar14;
          pTVar15 = (pFVar48->ContextData).SharedReferenceCount.ReferenceController;
          (pFVar40->ContextData).Object = (pFVar48->ContextData).Object;
          (pFVar40->ContextData).SharedReferenceCount.ReferenceController = pTVar15;
          pTVar16 = (pFVar48->field13_0x40).BlendSpace.BlendSampleDataCache;
          (pFVar40->field13_0x40).BlendSpace.BlendFilter =
               (pFVar48->field13_0x40).BlendSpace.BlendFilter;
          (pFVar40->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar16;
          uVar17 = *(undefined8 *)((longlong)&pFVar48->field13_0x40 + 0x18);
          *(undefined8 *)((longlong)&pFVar40->field13_0x40 + 0x10) =
               *(undefined8 *)((longlong)&pFVar48->field13_0x40 + 0x10);
          *(undefined8 *)((longlong)&pFVar40->field13_0x40 + 0x18) = uVar17;
          pFVar18 = pFVar48->MarkerTickRecord;
          pFVar40->DeltaTimeRecord = pFVar48->DeltaTimeRecord;
          pFVar40->MarkerTickRecord = pFVar18;
          uVar26 = *(undefined3 *)&pFVar48->field_0x71;
          fVar50 = pFVar48->LeaderScore;
          pFVar40->bCanUseMarkerSync = pFVar48->bCanUseMarkerSync;
          *(undefined3 *)&pFVar40->field_0x71 = uVar26;
          pFVar40->LeaderScore = fVar50;
          (pFVar48->SourceAsset).field0_0x0 = TVar3;
          pFVar48->TimeAccumulator = pfVar4;
          pFVar48->PlayRateMultiplier = fVar27;
          pFVar48->EffectiveBlendWeight = fVar28;
          pFVar48->RootMotionWeightModifier = fVar29;
          pFVar48->bLooping = bVar30;
          pFVar48->bIsEvaluator = bVar31;
          pFVar48->bRequestedInertialization = bVar32;
          pFVar48->bOverridePositionWhenJoiningSyncGroupAsLeader = bVar33;
          pFVar48->bIsExclusiveLeader = bVar34;
          pFVar48->bActiveContext = bVar35;
          *(undefined6 *)&pFVar48->field_0x22 = uVar36;
          pFVar48->MirrorDataTable = pUVar5;
          (pFVar48->ContextData).Object = pTVar6;
          (pFVar48->ContextData).SharedReferenceCount.ReferenceController = pTVar7;
          (pFVar48->field13_0x40).BlendSpace.BlendFilter = pFVar8;
          (pFVar48->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar9;
          *(undefined8 *)((longlong)&pFVar48->field13_0x40 + 0x10) = uVar10;
          *(undefined8 *)((longlong)&pFVar48->field13_0x40 + 0x18) = uVar11;
          pFVar48->DeltaTimeRecord = pFVar12;
          pFVar48->MarkerTickRecord = pFVar13;
          pFVar48->bCanUseMarkerSync = bVar37;
          *(undefined3 *)&pFVar48->field_0x71 = uVar38;
          pFVar48->LeaderScore = fVar39;
          pFVar40 = pFVar48;
LAB_1473d0b23:
          pFVar46 = pFVar40;
          pFVar40 = pFVar46 + 1;
          if (pFVar40 <= pFVar45) goto code_r0x0001473d0b2c;
          goto LAB_1473d0b40;
        }
        if (pFVar48 < pFVar45) {
          pFVar1 = pFVar48 + 1;
          do {
            pFVar40 = pFVar48;
            if (pFVar1 <= pFVar45) {
              pFVar44 = pFVar1;
              if (0x1df < (ulonglong)((longlong)pFVar45 + (0x78 - (longlong)pFVar1))) {
                do {
                  if (pFVar44->LeaderScore < pFVar40->LeaderScore) {
                    pFVar40 = pFVar44;
                  }
                  if (pFVar44[1].LeaderScore < pFVar40->LeaderScore) {
                    pFVar40 = pFVar44 + 1;
                  }
                  if (pFVar44[2].LeaderScore < pFVar40->LeaderScore) {
                    pFVar40 = pFVar44 + 2;
                  }
                  if (pFVar44[3].LeaderScore < pFVar40->LeaderScore) {
                    pFVar40 = pFVar44 + 3;
                  }
                  pFVar44 = pFVar44 + 4;
                } while (pFVar44 <= pFVar45 + -3);
              }
              for (; pFVar44 <= pFVar45; pFVar44 = pFVar44 + 1) {
                if (pFVar44->LeaderScore < pFVar40->LeaderScore) {
                  pFVar40 = pFVar44;
                }
              }
            }
            TVar3 = (pFVar40->SourceAsset).field0_0x0;
            pfVar2 = pFVar40->TimeAccumulator;
            pFVar44 = pFVar45 + -1;
            bVar37 = pFVar40->bCanUseMarkerSync;
            uVar38 = *(undefined3 *)&pFVar40->field_0x71;
            fVar39 = pFVar40->LeaderScore;
            fVar27 = pFVar40->PlayRateMultiplier;
            fVar28 = pFVar40->EffectiveBlendWeight;
            fVar29 = pFVar40->RootMotionWeightModifier;
            bVar30 = pFVar40->bLooping;
            bVar31 = pFVar40->bIsEvaluator;
            bVar32 = pFVar40->bRequestedInertialization;
            bVar33 = pFVar40->bOverridePositionWhenJoiningSyncGroupAsLeader;
            pfVar4 = pFVar45->TimeAccumulator;
            bVar34 = pFVar40->bIsExclusiveLeader;
            bVar35 = pFVar40->bActiveContext;
            uVar36 = *(undefined6 *)&pFVar40->field_0x22;
            pUVar5 = pFVar40->MirrorDataTable;
            pTVar6 = (pFVar40->ContextData).Object;
            pTVar7 = (pFVar40->ContextData).SharedReferenceCount.ReferenceController;
            pFVar8 = (pFVar40->field13_0x40).BlendSpace.BlendFilter;
            pTVar9 = (pFVar40->field13_0x40).BlendSpace.BlendSampleDataCache;
            uVar10 = *(undefined8 *)((longlong)&pFVar40->field13_0x40 + 0x10);
            uVar11 = *(undefined8 *)((longlong)&pFVar40->field13_0x40 + 0x18);
            pFVar12 = pFVar40->DeltaTimeRecord;
            pFVar13 = pFVar40->MarkerTickRecord;
            (pFVar40->SourceAsset).field0_0x0 = (pFVar45->SourceAsset).field0_0x0;
            pFVar40->TimeAccumulator = pfVar4;
            fVar50 = pFVar45->EffectiveBlendWeight;
            fVar20 = pFVar45->RootMotionWeightModifier;
            bVar21 = pFVar45->bLooping;
            bVar22 = pFVar45->bIsEvaluator;
            bVar23 = pFVar45->bRequestedInertialization;
            bVar24 = pFVar45->bOverridePositionWhenJoiningSyncGroupAsLeader;
            pFVar40->PlayRateMultiplier = pFVar45->PlayRateMultiplier;
            pFVar40->EffectiveBlendWeight = fVar50;
            pFVar40->RootMotionWeightModifier = fVar20;
            pFVar40->bLooping = bVar21;
            pFVar40->bIsEvaluator = bVar22;
            pFVar40->bRequestedInertialization = bVar23;
            pFVar40->bOverridePositionWhenJoiningSyncGroupAsLeader = bVar24;
            bVar21 = pFVar45->bActiveContext;
            uVar25 = *(undefined6 *)&pFVar45->field_0x22;
            pUVar14 = pFVar45->MirrorDataTable;
            pFVar40->bIsExclusiveLeader = pFVar45->bIsExclusiveLeader;
            pFVar40->bActiveContext = bVar21;
            *(undefined6 *)&pFVar40->field_0x22 = uVar25;
            pFVar40->MirrorDataTable = pUVar14;
            pTVar15 = (pFVar45->ContextData).SharedReferenceCount.ReferenceController;
            (pFVar40->ContextData).Object = (pFVar45->ContextData).Object;
            (pFVar40->ContextData).SharedReferenceCount.ReferenceController = pTVar15;
            pTVar16 = (pFVar45->field13_0x40).BlendSpace.BlendSampleDataCache;
            (pFVar40->field13_0x40).BlendSpace.BlendFilter =
                 (pFVar45->field13_0x40).BlendSpace.BlendFilter;
            (pFVar40->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar16;
            uVar17 = *(undefined8 *)((longlong)&pFVar45->field13_0x40 + 0x18);
            *(undefined8 *)((longlong)&pFVar40->field13_0x40 + 0x10) =
                 *(undefined8 *)((longlong)&pFVar45->field13_0x40 + 0x10);
            *(undefined8 *)((longlong)&pFVar40->field13_0x40 + 0x18) = uVar17;
            pFVar18 = pFVar45->MarkerTickRecord;
            pFVar40->DeltaTimeRecord = pFVar45->DeltaTimeRecord;
            pFVar40->MarkerTickRecord = pFVar18;
            uVar26 = *(undefined3 *)&pFVar45->field_0x71;
            fVar50 = pFVar45->LeaderScore;
            pFVar40->bCanUseMarkerSync = pFVar45->bCanUseMarkerSync;
            *(undefined3 *)&pFVar40->field_0x71 = uVar26;
            pFVar40->LeaderScore = fVar50;
            (pFVar45->SourceAsset).field0_0x0 = TVar3;
            pFVar45->TimeAccumulator = pfVar2;
            pFVar45->PlayRateMultiplier = fVar27;
            pFVar45->EffectiveBlendWeight = fVar28;
            pFVar45->RootMotionWeightModifier = fVar29;
            pFVar45->bLooping = bVar30;
            pFVar45->bIsEvaluator = bVar31;
            pFVar45->bRequestedInertialization = bVar32;
            pFVar45->bOverridePositionWhenJoiningSyncGroupAsLeader = bVar33;
            pFVar45->bIsExclusiveLeader = bVar34;
            pFVar45->bActiveContext = bVar35;
            *(undefined6 *)&pFVar45->field_0x22 = uVar36;
            pFVar45->MirrorDataTable = pUVar5;
            (pFVar45->ContextData).Object = pTVar6;
            (pFVar45->ContextData).SharedReferenceCount.ReferenceController = pTVar7;
            (pFVar45->field13_0x40).BlendSpace.BlendFilter = pFVar8;
            (pFVar45->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar9;
            *(undefined8 *)((longlong)&pFVar45->field13_0x40 + 0x10) = uVar10;
            *(undefined8 *)((longlong)&pFVar45->field13_0x40 + 0x18) = uVar11;
            pFVar45->DeltaTimeRecord = pFVar12;
            pFVar45->MarkerTickRecord = pFVar13;
            pFVar45->bCanUseMarkerSync = bVar37;
            *(undefined3 *)&pFVar45->field_0x71 = uVar38;
            pFVar45->LeaderScore = fVar39;
            pFVar45 = pFVar44;
          } while (pFVar48 < pFVar44);
        }
        goto LAB_1473d0d63;
      }
LAB_1473d0d54:
      local_388 = pFVar1;
      HeapSortInternal<FAnimTickRecord,int,FIdentityFunctor,TDereferenceWrapper<FAnimTickRecord,TLess<void>_>_>
                (pFVar40,iVar41,param_3,param_4);
LAB_1473d0d63:
      ppFVar49 = ppFVar49 + -3;
    } while (&local_378 <= ppFVar49);
  }
  return;
code_r0x0001473d0b2c:
  if (pFVar48->LeaderScore <= pFVar46[1].LeaderScore) goto LAB_1473d0b23;
LAB_1473d0b40:
  do {
    pFVar47 = pFVar44;
    pFVar44 = pFVar47 + -1;
    if (pFVar44 <= pFVar48) break;
  } while (pFVar47[-1].LeaderScore <= pFVar48->LeaderScore);
  TVar3 = (pFVar44->SourceAsset).field0_0x0;
  pfVar2 = pFVar47[-1].TimeAccumulator;
  if (pFVar40 <= pFVar44) {
    TVar19 = (pFVar40->SourceAsset).field0_0x0;
    pfVar4 = pFVar46[1].TimeAccumulator;
    fVar27 = pFVar46[1].PlayRateMultiplier;
    fVar28 = pFVar46[1].EffectiveBlendWeight;
    fVar29 = pFVar46[1].RootMotionWeightModifier;
    bVar30 = pFVar46[1].bLooping;
    bVar31 = pFVar46[1].bIsEvaluator;
    bVar32 = pFVar46[1].bRequestedInertialization;
    bVar33 = pFVar46[1].bOverridePositionWhenJoiningSyncGroupAsLeader;
    bVar34 = pFVar46[1].bIsExclusiveLeader;
    bVar35 = pFVar46[1].bActiveContext;
    uVar36 = *(undefined6 *)&pFVar46[1].field_0x22;
    pUVar5 = pFVar46[1].MirrorDataTable;
    pTVar6 = pFVar46[1].ContextData.Object;
    pTVar7 = pFVar46[1].ContextData.SharedReferenceCount.ReferenceController;
    pFVar8 = pFVar46[1].field13_0x40.BlendSpace.BlendFilter;
    pTVar9 = pFVar46[1].field13_0x40.BlendSpace.BlendSampleDataCache;
    uVar10 = *(undefined8 *)((longlong)&pFVar46[1].field13_0x40 + 0x10);
    uVar11 = *(undefined8 *)((longlong)&pFVar46[1].field13_0x40 + 0x18);
    pFVar12 = pFVar46[1].DeltaTimeRecord;
    pFVar13 = pFVar46[1].MarkerTickRecord;
    bVar37 = pFVar46[1].bCanUseMarkerSync;
    uVar38 = *(undefined3 *)&pFVar46[1].field_0x71;
    fVar39 = pFVar46[1].LeaderScore;
    (pFVar40->SourceAsset).field0_0x0 = TVar3;
    pFVar46[1].TimeAccumulator = pfVar2;
    fVar50 = pFVar47[-1].EffectiveBlendWeight;
    fVar20 = pFVar47[-1].RootMotionWeightModifier;
    bVar21 = pFVar47[-1].bLooping;
    bVar22 = pFVar47[-1].bIsEvaluator;
    bVar23 = pFVar47[-1].bRequestedInertialization;
    bVar24 = pFVar47[-1].bOverridePositionWhenJoiningSyncGroupAsLeader;
    pFVar46[1].PlayRateMultiplier = pFVar47[-1].PlayRateMultiplier;
    pFVar46[1].EffectiveBlendWeight = fVar50;
    pFVar46[1].RootMotionWeightModifier = fVar20;
    pFVar46[1].bLooping = bVar21;
    pFVar46[1].bIsEvaluator = bVar22;
    pFVar46[1].bRequestedInertialization = bVar23;
    pFVar46[1].bOverridePositionWhenJoiningSyncGroupAsLeader = bVar24;
    bVar21 = pFVar47[-1].bActiveContext;
    uVar25 = *(undefined6 *)&pFVar47[-1].field_0x22;
    pUVar14 = pFVar47[-1].MirrorDataTable;
    pFVar46[1].bIsExclusiveLeader = pFVar47[-1].bIsExclusiveLeader;
    pFVar46[1].bActiveContext = bVar21;
    *(undefined6 *)&pFVar46[1].field_0x22 = uVar25;
    pFVar46[1].MirrorDataTable = pUVar14;
    pTVar15 = pFVar47[-1].ContextData.SharedReferenceCount.ReferenceController;
    pFVar46[1].ContextData.Object = pFVar47[-1].ContextData.Object;
    pFVar46[1].ContextData.SharedReferenceCount.ReferenceController = pTVar15;
    pTVar16 = pFVar47[-1].field13_0x40.BlendSpace.BlendSampleDataCache;
    pFVar46[1].field13_0x40.BlendSpace.BlendFilter = pFVar47[-1].field13_0x40.BlendSpace.BlendFilter
    ;
    pFVar46[1].field13_0x40.BlendSpace.BlendSampleDataCache = pTVar16;
    uVar17 = *(undefined8 *)((longlong)&pFVar47[-1].field13_0x40 + 0x18);
    *(undefined8 *)((longlong)&pFVar46[1].field13_0x40 + 0x10) =
         *(undefined8 *)((longlong)&pFVar47[-1].field13_0x40 + 0x10);
    *(undefined8 *)((longlong)&pFVar46[1].field13_0x40 + 0x18) = uVar17;
    pFVar18 = pFVar47[-1].MarkerTickRecord;
    pFVar46[1].DeltaTimeRecord = pFVar47[-1].DeltaTimeRecord;
    pFVar46[1].MarkerTickRecord = pFVar18;
    uVar26 = *(undefined3 *)&pFVar47[-1].field_0x71;
    fVar50 = pFVar47[-1].LeaderScore;
    pFVar46[1].bCanUseMarkerSync = pFVar47[-1].bCanUseMarkerSync;
    *(undefined3 *)&pFVar46[1].field_0x71 = uVar26;
    pFVar46[1].LeaderScore = fVar50;
    (pFVar44->SourceAsset).field0_0x0 = TVar19;
    pFVar47[-1].TimeAccumulator = pfVar4;
    pFVar47[-1].PlayRateMultiplier = fVar27;
    pFVar47[-1].EffectiveBlendWeight = fVar28;
    pFVar47[-1].RootMotionWeightModifier = fVar29;
    pFVar47[-1].bLooping = bVar30;
    pFVar47[-1].bIsEvaluator = bVar31;
    pFVar47[-1].bRequestedInertialization = bVar32;
    pFVar47[-1].bOverridePositionWhenJoiningSyncGroupAsLeader = bVar33;
    pFVar47[-1].bIsExclusiveLeader = bVar34;
    pFVar47[-1].bActiveContext = bVar35;
    *(undefined6 *)&pFVar47[-1].field_0x22 = uVar36;
    pFVar47[-1].MirrorDataTable = pUVar5;
    pFVar47[-1].ContextData.Object = pTVar6;
    pFVar47[-1].ContextData.SharedReferenceCount.ReferenceController = pTVar7;
    pFVar47[-1].field13_0x40.BlendSpace.BlendFilter = pFVar8;
    pFVar47[-1].field13_0x40.BlendSpace.BlendSampleDataCache = pTVar9;
    *(undefined8 *)((longlong)&pFVar47[-1].field13_0x40 + 0x10) = uVar10;
    *(undefined8 *)((longlong)&pFVar47[-1].field13_0x40 + 0x18) = uVar11;
    pFVar47[-1].DeltaTimeRecord = pFVar12;
    pFVar47[-1].MarkerTickRecord = pFVar13;
    pFVar47[-1].bCanUseMarkerSync = bVar37;
    *(undefined3 *)&pFVar47[-1].field_0x71 = uVar38;
    pFVar47[-1].LeaderScore = fVar39;
    goto LAB_1473d0b23;
  }
  TVar19 = (pFVar48->SourceAsset).field0_0x0;
  pfVar4 = pFVar48->TimeAccumulator;
  fVar27 = pFVar48->PlayRateMultiplier;
  fVar28 = pFVar48->EffectiveBlendWeight;
  fVar29 = pFVar48->RootMotionWeightModifier;
  bVar30 = pFVar48->bLooping;
  bVar31 = pFVar48->bIsEvaluator;
  bVar32 = pFVar48->bRequestedInertialization;
  bVar33 = pFVar48->bOverridePositionWhenJoiningSyncGroupAsLeader;
  local_388._0_4_ = (int)local_388 + -1;
  bVar34 = pFVar48->bIsExclusiveLeader;
  bVar35 = pFVar48->bActiveContext;
  uVar36 = *(undefined6 *)&pFVar48->field_0x22;
  pUVar5 = pFVar48->MirrorDataTable;
  lVar42 = (longlong)pFVar44 + (-0x78 - (longlong)pFVar48);
  pTVar6 = (pFVar48->ContextData).Object;
  pTVar7 = (pFVar48->ContextData).SharedReferenceCount.ReferenceController;
  pFVar8 = (pFVar48->field13_0x40).BlendSpace.BlendFilter;
  pTVar9 = (pFVar48->field13_0x40).BlendSpace.BlendSampleDataCache;
  uVar10 = *(undefined8 *)((longlong)&pFVar48->field13_0x40 + 0x10);
  uVar11 = *(undefined8 *)((longlong)&pFVar48->field13_0x40 + 0x18);
  pFVar12 = pFVar48->DeltaTimeRecord;
  pFVar13 = pFVar48->MarkerTickRecord;
  bVar37 = pFVar48->bCanUseMarkerSync;
  uVar38 = *(undefined3 *)&pFVar48->field_0x71;
  fVar39 = pFVar48->LeaderScore;
  (pFVar48->SourceAsset).field0_0x0 = TVar3;
  pFVar48->TimeAccumulator = pfVar2;
  fVar50 = pFVar47[-1].EffectiveBlendWeight;
  fVar20 = pFVar47[-1].RootMotionWeightModifier;
  bVar21 = pFVar47[-1].bLooping;
  bVar22 = pFVar47[-1].bIsEvaluator;
  bVar23 = pFVar47[-1].bRequestedInertialization;
  bVar24 = pFVar47[-1].bOverridePositionWhenJoiningSyncGroupAsLeader;
  pFVar48->PlayRateMultiplier = pFVar47[-1].PlayRateMultiplier;
  pFVar48->EffectiveBlendWeight = fVar50;
  pFVar48->RootMotionWeightModifier = fVar20;
  pFVar48->bLooping = bVar21;
  pFVar48->bIsEvaluator = bVar22;
  pFVar48->bRequestedInertialization = bVar23;
  pFVar48->bOverridePositionWhenJoiningSyncGroupAsLeader = bVar24;
  bVar21 = pFVar47[-1].bActiveContext;
  uVar25 = *(undefined6 *)&pFVar47[-1].field_0x22;
  pUVar14 = pFVar47[-1].MirrorDataTable;
  pFVar48->bIsExclusiveLeader = pFVar47[-1].bIsExclusiveLeader;
  pFVar48->bActiveContext = bVar21;
  *(undefined6 *)&pFVar48->field_0x22 = uVar25;
  pFVar48->MirrorDataTable = pUVar14;
  pTVar15 = pFVar47[-1].ContextData.SharedReferenceCount.ReferenceController;
  lVar42 = lVar42 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar42),8);
  (pFVar48->ContextData).Object = pFVar47[-1].ContextData.Object;
  (pFVar48->ContextData).SharedReferenceCount.ReferenceController = pTVar15;
  pTVar16 = pFVar47[-1].field13_0x40.BlendSpace.BlendSampleDataCache;
  (pFVar48->field13_0x40).BlendSpace.BlendFilter = pFVar47[-1].field13_0x40.BlendSpace.BlendFilter;
  (pFVar48->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar16;
  uVar17 = *(undefined8 *)((longlong)&pFVar47[-1].field13_0x40 + 0x18);
  *(undefined8 *)((longlong)&pFVar48->field13_0x40 + 0x10) =
       *(undefined8 *)((longlong)&pFVar47[-1].field13_0x40 + 0x10);
  *(undefined8 *)((longlong)&pFVar48->field13_0x40 + 0x18) = uVar17;
  pFVar18 = pFVar47[-1].MarkerTickRecord;
  pFVar48->DeltaTimeRecord = pFVar47[-1].DeltaTimeRecord;
  pFVar48->MarkerTickRecord = pFVar18;
  lVar43 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar45 - (longlong)pFVar40),8) +
           ((longlong)pFVar45 - (longlong)pFVar40);
  uVar26 = *(undefined3 *)&pFVar47[-1].field_0x71;
  fVar50 = pFVar47[-1].LeaderScore;
  pFVar48->bCanUseMarkerSync = pFVar47[-1].bCanUseMarkerSync;
  *(undefined3 *)&pFVar48->field_0x71 = uVar26;
  pFVar48->LeaderScore = fVar50;
  (pFVar44->SourceAsset).field0_0x0 = TVar19;
  pFVar47[-1].TimeAccumulator = pfVar4;
  pFVar47[-1].PlayRateMultiplier = fVar27;
  pFVar47[-1].EffectiveBlendWeight = fVar28;
  pFVar47[-1].RootMotionWeightModifier = fVar29;
  pFVar47[-1].bLooping = bVar30;
  pFVar47[-1].bIsEvaluator = bVar31;
  pFVar47[-1].bRequestedInertialization = bVar32;
  pFVar47[-1].bOverridePositionWhenJoiningSyncGroupAsLeader = bVar33;
  pFVar47[-1].bIsExclusiveLeader = bVar34;
  pFVar47[-1].bActiveContext = bVar35;
  *(undefined6 *)&pFVar47[-1].field_0x22 = uVar36;
  pFVar47[-1].MirrorDataTable = pUVar5;
  pFVar47[-1].ContextData.Object = pTVar6;
  pFVar47[-1].ContextData.SharedReferenceCount.ReferenceController = pTVar7;
  pFVar47[-1].field13_0x40.BlendSpace.BlendFilter = pFVar8;
  pFVar47[-1].field13_0x40.BlendSpace.BlendSampleDataCache = pTVar9;
  *(undefined8 *)((longlong)&pFVar47[-1].field13_0x40 + 0x10) = uVar10;
  *(undefined8 *)((longlong)&pFVar47[-1].field13_0x40 + 0x18) = uVar11;
  pFVar47[-1].DeltaTimeRecord = pFVar12;
  pFVar47[-1].MarkerTickRecord = pFVar13;
  pFVar47[-1].bCanUseMarkerSync = bVar37;
  *(undefined3 *)&pFVar47[-1].field_0x71 = uVar38;
  pFVar47[-1].LeaderScore = fVar39;
  if ((lVar42 >> 6) - (lVar42 >> 0x3f) < (lVar43 >> 6) - (lVar43 >> 0x3f)) {
    if (pFVar40 < pFVar45) {
      *ppFVar49 = pFVar40;
      ppFVar49[1] = pFVar45;
      *(int *)(ppFVar49 + 2) = (int)local_388;
      ppFVar49 = ppFVar49 + 3;
    }
    if (pFVar44 <= pFVar48 + 1) goto LAB_1473d0d63;
    pFVar45 = pFVar47 + -2;
    pFVar40 = pFVar48;
  }
  else {
    if (pFVar48 + 1 < pFVar44) {
      *ppFVar49 = pFVar48;
      ppFVar49[1] = pFVar47 + -2;
      *(int *)(ppFVar49 + 2) = (int)local_388;
      ppFVar49 = ppFVar49 + 3;
    }
    if (pFVar45 <= pFVar40) goto LAB_1473d0d63;
  }
  lVar42 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar45 - (longlong)pFVar40),8) +
           ((longlong)pFVar45 - (longlong)pFVar40);
  iVar41 = ((int)(lVar42 >> 6) - (int)(lVar42 >> 0x3f)) + 1;
  pFVar48 = pFVar40;
  if ((int)local_388 == 0) goto LAB_1473d0d54;
  goto LAB_1473d0a70;
}

// IntroSortInternal<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,int,FIdentityFunctor,TDereferenceWrapper<`FNetConnAnalyticsData::SendAnalytics'::__l5::FFailedPingCounter,`FNetConnAnalyticsData::SendAnalytics'::__l48::<lambda_3>_>_> @ 1473d0f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,_FNetConnAnalyticsData::SendAnalytics_::__l48::<lambda_3>_>_>
          (FFailedPingCounter *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_5_::FFailedPingCounter,_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_48_::<lambda_3>_>
          param_4)

{
  FFailedPingCounter *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  FFailedPingCounter *pFVar15;
  FFailedPingCounter *pFVar16;
  FFailedPingCounter *pFVar17;
  FFailedPingCounter *pFVar18;
  FFailedPingCounter *pFVar19;
  FFailedPingCounter *pFVar20;
  FFailedPingCounter **ppFVar21;
  float fVar22;
  undefined1 auStack_378 [48];
  FFailedPingCounter *local_348;
  FFailedPingCounter *local_338;
  FFailedPingCounter *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar22;
    memset(local_320,0,0x2e8);
    ppFVar21 = &local_338;
    do {
      pFVar15 = ppFVar21[1];
      pFVar20 = *ppFVar21;
      pFVar1 = ppFVar21[2];
      local_348._0_4_ = (int)pFVar1;
      iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar20) / 0x18) + 1;
      pFVar19 = pFVar20;
      if ((int)local_348 != 0) {
LAB_1473d0ff0:
        if (8 < iVar14) {
          iVar6 = (pFVar19->PingAddress).Data.ArrayNum;
          iVar7 = (pFVar19->PingAddress).Data.ArrayMax;
          pFVar17 = pFVar15 + 1;
          iVar14 = iVar14 / 2;
          pFVar20 = pFVar19 + iVar14;
          pFVar2 = (pFVar20->PingAddress).Data.AllocatorInstance.Data;
          iVar9 = (pFVar20->PingAddress).Data.ArrayNum;
          iVar10 = (pFVar20->PingAddress).Data.ArrayMax;
          iVar11 = pFVar19[iVar14].Counter;
          uVar12 = *(undefined4 *)&pFVar19[iVar14].field_0x14;
          pFVar20 = pFVar19 + iVar14;
          (pFVar20->PingAddress).Data.AllocatorInstance.Data =
               (pFVar19->PingAddress).Data.AllocatorInstance.Data;
          (pFVar20->PingAddress).Data.ArrayNum = iVar6;
          (pFVar20->PingAddress).Data.ArrayMax = iVar7;
          uVar8 = *(undefined4 *)&pFVar19->field_0x14;
          pFVar19[iVar14].Counter = pFVar19->Counter;
          *(undefined4 *)&pFVar19[iVar14].field_0x14 = uVar8;
          (pFVar19->PingAddress).Data.AllocatorInstance.Data = pFVar2;
          (pFVar19->PingAddress).Data.ArrayNum = iVar9;
          (pFVar19->PingAddress).Data.ArrayMax = iVar10;
          pFVar19->Counter = iVar11;
          *(undefined4 *)&pFVar19->field_0x14 = uVar12;
          pFVar20 = pFVar19;
LAB_1473d1040:
          pFVar16 = pFVar20;
          pFVar20 = pFVar16 + 1;
          if (pFVar20 <= pFVar15) goto code_r0x0001473d1049;
          goto LAB_1473d1053;
        }
        for (; pFVar20 = pFVar19, pFVar1 = pFVar19, pFVar19 < pFVar15; pFVar15 = pFVar15 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar15) {
            if (pFVar20->Counter < pFVar1->Counter) {
              pFVar20 = pFVar1;
            }
          }
          pFVar2 = (pFVar20->PingAddress).Data.AllocatorInstance.Data;
          iVar7 = (pFVar20->PingAddress).Data.ArrayNum;
          iVar9 = (pFVar20->PingAddress).Data.ArrayMax;
          iVar10 = pFVar20->Counter;
          uVar12 = *(undefined4 *)&pFVar20->field_0x14;
          iVar14 = (pFVar15->PingAddress).Data.ArrayNum;
          iVar6 = (pFVar15->PingAddress).Data.ArrayMax;
          (pFVar20->PingAddress).Data.AllocatorInstance.Data =
               (pFVar15->PingAddress).Data.AllocatorInstance.Data;
          (pFVar20->PingAddress).Data.ArrayNum = iVar14;
          (pFVar20->PingAddress).Data.ArrayMax = iVar6;
          uVar8 = *(undefined4 *)&pFVar15->field_0x14;
          pFVar20->Counter = pFVar15->Counter;
          *(undefined4 *)&pFVar20->field_0x14 = uVar8;
          (pFVar15->PingAddress).Data.AllocatorInstance.Data = pFVar2;
          (pFVar15->PingAddress).Data.ArrayNum = iVar7;
          (pFVar15->PingAddress).Data.ArrayMax = iVar9;
          pFVar15->Counter = iVar10;
          *(undefined4 *)&pFVar15->field_0x14 = uVar12;
        }
        goto LAB_1473d1175;
      }
LAB_1473d1166:
      local_348 = pFVar1;
      HeapSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FFailedPingCounter,_FNetConnAnalyticsData::SendAnalytics_::__l48::<lambda_3>_>_>
                (pFVar20,iVar14,param_3,param_4);
LAB_1473d1175:
      ppFVar21 = ppFVar21 + -3;
    } while (&local_338 <= ppFVar21);
  }
  return;
code_r0x0001473d1049:
  if (pFVar16[1].Counter <= pFVar19->Counter) goto LAB_1473d1040;
LAB_1473d1053:
  do {
    pFVar18 = pFVar17;
    pFVar17 = pFVar18 + -1;
    if (pFVar17 <= pFVar19) break;
  } while (pFVar19->Counter <= pFVar18[-1].Counter);
  pFVar2 = (pFVar17->PingAddress).Data.AllocatorInstance.Data;
  uVar3 = pFVar18[-1].PingAddress.Data.ArrayNum;
  uVar4 = pFVar18[-1].PingAddress.Data.ArrayMax;
  if (pFVar20 <= pFVar17) {
    pFVar5 = (pFVar20->PingAddress).Data.AllocatorInstance.Data;
    iVar14 = pFVar16[1].PingAddress.Data.ArrayNum;
    iVar6 = pFVar16[1].PingAddress.Data.ArrayMax;
    iVar7 = pFVar16[1].Counter;
    uVar12 = *(undefined4 *)&pFVar16[1].field_0x14;
    (pFVar20->PingAddress).Data.AllocatorInstance.Data = pFVar2;
    pFVar16[1].PingAddress.Data.ArrayNum = uVar3;
    pFVar16[1].PingAddress.Data.ArrayMax = uVar4;
    uVar8 = *(undefined4 *)&pFVar18[-1].field_0x14;
    pFVar16[1].Counter = pFVar18[-1].Counter;
    *(undefined4 *)&pFVar16[1].field_0x14 = uVar8;
    (pFVar17->PingAddress).Data.AllocatorInstance.Data = pFVar5;
    pFVar18[-1].PingAddress.Data.ArrayNum = iVar14;
    pFVar18[-1].PingAddress.Data.ArrayMax = iVar6;
    pFVar18[-1].Counter = iVar7;
    *(undefined4 *)&pFVar18[-1].field_0x14 = uVar12;
    goto LAB_1473d1040;
  }
  pFVar5 = (pFVar19->PingAddress).Data.AllocatorInstance.Data;
  iVar14 = (pFVar19->PingAddress).Data.ArrayNum;
  iVar6 = (pFVar19->PingAddress).Data.ArrayMax;
  iVar7 = pFVar19->Counter;
  uVar12 = *(undefined4 *)&pFVar19->field_0x14;
  lVar13 = (longlong)pFVar17 + (-0x18 - (longlong)pFVar19);
  local_348._0_4_ = (int)local_348 + -1;
  lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
  (pFVar19->PingAddress).Data.AllocatorInstance.Data = pFVar2;
  (pFVar19->PingAddress).Data.ArrayNum = uVar3;
  (pFVar19->PingAddress).Data.ArrayMax = uVar4;
  uVar8 = *(undefined4 *)&pFVar18[-1].field_0x14;
  pFVar19->Counter = pFVar18[-1].Counter;
  *(undefined4 *)&pFVar19->field_0x14 = uVar8;
  (pFVar17->PingAddress).Data.AllocatorInstance.Data = pFVar5;
  pFVar18[-1].PingAddress.Data.ArrayNum = iVar14;
  pFVar18[-1].PingAddress.Data.ArrayMax = iVar6;
  pFVar18[-1].Counter = iVar7;
  *(undefined4 *)&pFVar18[-1].field_0x14 = uVar12;
  if ((lVar13 >> 2) - (lVar13 >> 0x3f) < ((longlong)pFVar15 - (longlong)pFVar20) / 0x18) {
    if (pFVar20 < pFVar15) {
      *ppFVar21 = pFVar20;
      ppFVar21[1] = pFVar15;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar17 <= pFVar19 + 1) goto LAB_1473d1175;
    pFVar15 = pFVar18 + -2;
    pFVar20 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar17) {
      *ppFVar21 = pFVar19;
      ppFVar21[1] = pFVar18 + -2;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar15 <= pFVar20) goto LAB_1473d1175;
  }
  iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar20) / 0x18) + 1;
  pFVar19 = pFVar20;
  if ((int)local_348 == 0) goto LAB_1473d1166;
  goto LAB_1473d0ff0;
}

// IntroSortInternal<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<`FNetConnAnalyticsData::SendAnalytics'::__l5::FReasonCounter,`FNetConnAnalyticsData::SendAnalytics'::__l33::<lambda_2>_>_> @ 1473d1230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,_FNetConnAnalyticsData::SendAnalytics_::__l33::<lambda_2>_>_>
          (FReasonCounter *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_5_::FReasonCounter,_public:_virtual_void___cdecl_FNetConnAnalyticsData::SendAnalytics(void)_::_33_::<lambda_2>_>
          param_4)

{
  FReasonCounter *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  FReasonCounter *pFVar15;
  FReasonCounter *pFVar16;
  FReasonCounter *pFVar17;
  FReasonCounter *pFVar18;
  FReasonCounter *pFVar19;
  FReasonCounter *pFVar20;
  FReasonCounter **ppFVar21;
  float fVar22;
  undefined1 auStack_378 [48];
  FReasonCounter *local_348;
  FReasonCounter *local_338;
  FReasonCounter *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar22;
    memset(local_320,0,0x2e8);
    ppFVar21 = &local_338;
    do {
      pFVar15 = ppFVar21[1];
      pFVar20 = *ppFVar21;
      pFVar1 = ppFVar21[2];
      local_348._0_4_ = (int)pFVar1;
      iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar20) / 0x18) + 1;
      pFVar19 = pFVar20;
      if ((int)local_348 != 0) {
LAB_1473d1300:
        if (8 < iVar14) {
          iVar6 = (pFVar19->ReasonStr).Data.ArrayNum;
          iVar7 = (pFVar19->ReasonStr).Data.ArrayMax;
          pFVar17 = pFVar15 + 1;
          iVar14 = iVar14 / 2;
          pFVar20 = pFVar19 + iVar14;
          pFVar2 = (pFVar20->ReasonStr).Data.AllocatorInstance.Data;
          iVar9 = (pFVar20->ReasonStr).Data.ArrayNum;
          iVar10 = (pFVar20->ReasonStr).Data.ArrayMax;
          iVar11 = pFVar19[iVar14].Counter;
          uVar12 = *(undefined4 *)&pFVar19[iVar14].field_0x14;
          pFVar20 = pFVar19 + iVar14;
          (pFVar20->ReasonStr).Data.AllocatorInstance.Data =
               (pFVar19->ReasonStr).Data.AllocatorInstance.Data;
          (pFVar20->ReasonStr).Data.ArrayNum = iVar6;
          (pFVar20->ReasonStr).Data.ArrayMax = iVar7;
          uVar8 = *(undefined4 *)&pFVar19->field_0x14;
          pFVar19[iVar14].Counter = pFVar19->Counter;
          *(undefined4 *)&pFVar19[iVar14].field_0x14 = uVar8;
          (pFVar19->ReasonStr).Data.AllocatorInstance.Data = pFVar2;
          (pFVar19->ReasonStr).Data.ArrayNum = iVar9;
          (pFVar19->ReasonStr).Data.ArrayMax = iVar10;
          pFVar19->Counter = iVar11;
          *(undefined4 *)&pFVar19->field_0x14 = uVar12;
          pFVar20 = pFVar19;
LAB_1473d1350:
          pFVar16 = pFVar20;
          pFVar20 = pFVar16 + 1;
          if (pFVar20 <= pFVar15) goto code_r0x0001473d1359;
          goto LAB_1473d1363;
        }
        for (; pFVar20 = pFVar19, pFVar1 = pFVar19, pFVar19 < pFVar15; pFVar15 = pFVar15 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar15) {
            if (pFVar20->Counter < pFVar1->Counter) {
              pFVar20 = pFVar1;
            }
          }
          pFVar2 = (pFVar20->ReasonStr).Data.AllocatorInstance.Data;
          iVar7 = (pFVar20->ReasonStr).Data.ArrayNum;
          iVar9 = (pFVar20->ReasonStr).Data.ArrayMax;
          iVar10 = pFVar20->Counter;
          uVar12 = *(undefined4 *)&pFVar20->field_0x14;
          iVar14 = (pFVar15->ReasonStr).Data.ArrayNum;
          iVar6 = (pFVar15->ReasonStr).Data.ArrayMax;
          (pFVar20->ReasonStr).Data.AllocatorInstance.Data =
               (pFVar15->ReasonStr).Data.AllocatorInstance.Data;
          (pFVar20->ReasonStr).Data.ArrayNum = iVar14;
          (pFVar20->ReasonStr).Data.ArrayMax = iVar6;
          uVar8 = *(undefined4 *)&pFVar15->field_0x14;
          pFVar20->Counter = pFVar15->Counter;
          *(undefined4 *)&pFVar20->field_0x14 = uVar8;
          (pFVar15->ReasonStr).Data.AllocatorInstance.Data = pFVar2;
          (pFVar15->ReasonStr).Data.ArrayNum = iVar7;
          (pFVar15->ReasonStr).Data.ArrayMax = iVar9;
          pFVar15->Counter = iVar10;
          *(undefined4 *)&pFVar15->field_0x14 = uVar12;
        }
        goto LAB_1473d1485;
      }
LAB_1473d1476:
      local_348 = pFVar1;
      HeapSortInternal<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,int,FIdentityFunctor,TDereferenceWrapper<_FNetConnAnalyticsData::SendAnalytics_::__l5::FReasonCounter,_FNetConnAnalyticsData::SendAnalytics_::__l33::<lambda_2>_>_>
                (pFVar20,iVar14,param_3,param_4);
LAB_1473d1485:
      ppFVar21 = ppFVar21 + -3;
    } while (&local_338 <= ppFVar21);
  }
  return;
code_r0x0001473d1359:
  if (pFVar16[1].Counter <= pFVar19->Counter) goto LAB_1473d1350;
LAB_1473d1363:
  do {
    pFVar18 = pFVar17;
    pFVar17 = pFVar18 + -1;
    if (pFVar17 <= pFVar19) break;
  } while (pFVar19->Counter <= pFVar18[-1].Counter);
  pFVar2 = (pFVar17->ReasonStr).Data.AllocatorInstance.Data;
  uVar3 = pFVar18[-1].ReasonStr.Data.ArrayNum;
  uVar4 = pFVar18[-1].ReasonStr.Data.ArrayMax;
  if (pFVar20 <= pFVar17) {
    pFVar5 = (pFVar20->ReasonStr).Data.AllocatorInstance.Data;
    iVar14 = pFVar16[1].ReasonStr.Data.ArrayNum;
    iVar6 = pFVar16[1].ReasonStr.Data.ArrayMax;
    iVar7 = pFVar16[1].Counter;
    uVar12 = *(undefined4 *)&pFVar16[1].field_0x14;
    (pFVar20->ReasonStr).Data.AllocatorInstance.Data = pFVar2;
    pFVar16[1].ReasonStr.Data.ArrayNum = uVar3;
    pFVar16[1].ReasonStr.Data.ArrayMax = uVar4;
    uVar8 = *(undefined4 *)&pFVar18[-1].field_0x14;
    pFVar16[1].Counter = pFVar18[-1].Counter;
    *(undefined4 *)&pFVar16[1].field_0x14 = uVar8;
    (pFVar17->ReasonStr).Data.AllocatorInstance.Data = pFVar5;
    pFVar18[-1].ReasonStr.Data.ArrayNum = iVar14;
    pFVar18[-1].ReasonStr.Data.ArrayMax = iVar6;
    pFVar18[-1].Counter = iVar7;
    *(undefined4 *)&pFVar18[-1].field_0x14 = uVar12;
    goto LAB_1473d1350;
  }
  pFVar5 = (pFVar19->ReasonStr).Data.AllocatorInstance.Data;
  iVar14 = (pFVar19->ReasonStr).Data.ArrayNum;
  iVar6 = (pFVar19->ReasonStr).Data.ArrayMax;
  iVar7 = pFVar19->Counter;
  uVar12 = *(undefined4 *)&pFVar19->field_0x14;
  lVar13 = (longlong)pFVar17 + (-0x18 - (longlong)pFVar19);
  local_348._0_4_ = (int)local_348 + -1;
  lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
  (pFVar19->ReasonStr).Data.AllocatorInstance.Data = pFVar2;
  (pFVar19->ReasonStr).Data.ArrayNum = uVar3;
  (pFVar19->ReasonStr).Data.ArrayMax = uVar4;
  uVar8 = *(undefined4 *)&pFVar18[-1].field_0x14;
  pFVar19->Counter = pFVar18[-1].Counter;
  *(undefined4 *)&pFVar19->field_0x14 = uVar8;
  (pFVar17->ReasonStr).Data.AllocatorInstance.Data = pFVar5;
  pFVar18[-1].ReasonStr.Data.ArrayNum = iVar14;
  pFVar18[-1].ReasonStr.Data.ArrayMax = iVar6;
  pFVar18[-1].Counter = iVar7;
  *(undefined4 *)&pFVar18[-1].field_0x14 = uVar12;
  if ((lVar13 >> 2) - (lVar13 >> 0x3f) < ((longlong)pFVar15 - (longlong)pFVar20) / 0x18) {
    if (pFVar20 < pFVar15) {
      *ppFVar21 = pFVar20;
      ppFVar21[1] = pFVar15;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar17 <= pFVar19 + 1) goto LAB_1473d1485;
    pFVar15 = pFVar18 + -2;
    pFVar20 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar17) {
      *ppFVar21 = pFVar19;
      ppFVar21[1] = pFVar18 + -2;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar15 <= pFVar20) goto LAB_1473d1485;
  }
  iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar20) / 0x18) + 1;
  pFVar19 = pFVar20;
  if ((int)local_348 == 0) goto LAB_1473d1476;
  goto LAB_1473d1300;
}

// IntroSortInternal<TSharedPtr<FRPCAnalytics,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FRPCAnalytics,1>,`FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>_>_> @ 1473d1540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FRPCAnalytics,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FRPCAnalytics,1>,_FRPCDoSAnalyticsVars::CommitAnalytics_::__l2::<lambda_1>_>_>
          (TSharedPtr<FRPCAnalytics,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FRPCAnalytics,1>,_public:_void___cdecl_FRPCDoSAnalyticsVars::CommitAnalytics(FRPCDoSAnalyticsVars_&)_::_2_::<lambda_1>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FRPCAnalytics *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FRPCAnalytics,1> *pTVar6;
  TSharedPtr<FRPCAnalytics,1> *pTVar7;
  TSharedPtr<FRPCAnalytics,1> *pTVar8;
  TSharedPtr<FRPCAnalytics,1> **ppTVar9;
  int iVar10;
  TSharedPtr<FRPCAnalytics,1> *pTVar11;
  TSharedPtr<FRPCAnalytics,1> *pTVar12;
  TSharedPtr<FRPCAnalytics,1> *pTVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  TSharedPtr<FRPCAnalytics,1> *local_358;
  TSharedPtr<FRPCAnalytics,1> *local_348;
  TSharedPtr<FRPCAnalytics,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppTVar9 = &local_348;
    do {
      pTVar13 = ppTVar9[1];
      pTVar12 = *ppTVar9;
      local_358 = ppTVar9[2];
      iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
      pTVar11 = pTVar12;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1473d1600:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar13 + 1;
          pFVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pFVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_1473d1630:
          pTVar8 = pTVar12;
          pTVar12 = pTVar8 + 1;
          if (pTVar12 <= pTVar13) goto code_r0x0001473d1639;
          goto LAB_1473d1650;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar13; pTVar13 = pTVar13 + -1) {
          while (pTVar8 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar13) {
            bVar4 = `FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,pTVar8,pTVar12);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar8;
            }
          }
          pFVar2 = pTVar8->Object;
          pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
          pTVar8->Object = pTVar13->Object;
          (pTVar8->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar13->Object = pFVar2;
          (pTVar13->SharedReferenceCount).ReferenceController = pTVar1;
        }
        goto LAB_1473d171f;
      }
LAB_1473d170e:
      HeapSortInternal<TSharedPtr<FRPCAnalytics,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FRPCAnalytics,1>,_FRPCDoSAnalyticsVars::CommitAnalytics_::__l2::<lambda_1>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_1473d171f:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_348 <= ppTVar9);
  }
  return;
code_r0x0001473d1639:
  bVar4 = `FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,pTVar11,pTVar12);
  if (!bVar4) goto LAB_1473d1630;
LAB_1473d1650:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    bVar4 = `FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,pTVar6,pTVar11);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pFVar2 = pTVar12->Object;
    pTVar3 = pTVar8[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar8[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pFVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_1473d1630;
  }
  pFVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  iVar10 = iVar10 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pFVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar13 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar13) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar13;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_1473d171f;
    pTVar13 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar9 = pTVar11;
      ppTVar9[1] = pTVar7 + -2;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar13 <= pTVar12) goto LAB_1473d171f;
  }
  iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (iVar10 == 0) goto LAB_1473d170e;
  goto LAB_1473d1600;
}

// NewObject<UInstancedSkinnedMeshComponent> @ 1473d17e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInstancedSkinnedMeshComponent * __cdecl
NewObject<UInstancedSkinnedMeshComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInstancedSkinnedMeshComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
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
  pUVar2 = (UInstancedSkinnedMeshComponent *)
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

// SerializeEnum<enum_AnimationCompressionFormat> @ 1473d28a0

void __cdecl
SerializeEnum<enum_AnimationCompressionFormat>
          (FArchive *param_1,AnimationCompressionFormat *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 local_res8 [32];
  
  local_res8[0] = (undefined1)*param_2;
  plVar3 = *(longlong **)&param_1->field_0x8;
  pbVar1 = (byte *)*plVar3 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if (pbVar1 <= (byte *)plVar3[1]) {
      *plVar3 = *plVar3 + 1;
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    return;
  }
  if (pbVar1 <= (byte *)plVar3[1]) {
    bVar2 = *(byte *)*plVar3;
    *plVar3 = *plVar3 + 1;
    *param_2 = (uint)bVar2;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  *param_2 = (uint)(byte)local_res8[0];
  return;
}

// SerializeEnum<enum_AnimationKeyFormat> @ 1473d2940

void __cdecl SerializeEnum<enum_AnimationKeyFormat>(FArchive *param_1,AnimationKeyFormat *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 local_res8 [32];
  
  local_res8[0] = (undefined1)*param_2;
  plVar3 = *(longlong **)&param_1->field_0x8;
  pbVar1 = (byte *)*plVar3 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if (pbVar1 <= (byte *)plVar3[1]) {
      *plVar3 = *plVar3 + 1;
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    return;
  }
  if (pbVar1 <= (byte *)plVar3[1]) {
    bVar2 = *(byte *)*plVar3;
    *plVar3 = *plVar3 + 1;
    *param_2 = (uint)bVar2;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  *param_2 = (uint)(byte)local_res8[0];
  return;
}

// SerializeView<unsigned_char> @ 1473d29e0

void __cdecl SerializeView<unsigned_char>(FArchive *param_1,TArrayView<unsigned_char,int> *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint local_res8 [8];
  undefined4 uStack_c;
  
  local_res8[0] = param_2->ArrayNum;
  plVar2 = *(longlong **)&param_1->field_0x8;
  puVar1 = (uint *)*plVar2 + 1;
  if ((param_1->field_0x28 & 1) != 0) {
    if ((uint *)plVar2[1] < puVar1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar4 = local_res8[0];
    if ((int)local_res8[0] < 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->DataPtr = (uchar *)0x0;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_c,uVar4);
    return;
  }
  if (puVar1 <= (uint *)plVar2[1]) {
    *plVar2 = *plVar2 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,local_res8);
  return;
}

// SerializeView<int> @ 1473d2ad0

void __cdecl SerializeView<int>(FArchive *param_1,TArrayView<int,int> *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint local_res8 [8];
  undefined4 uStack_c;
  
  local_res8[0] = param_2->ArrayNum;
  plVar2 = *(longlong **)&param_1->field_0x8;
  puVar1 = (uint *)*plVar2 + 1;
  if ((param_1->field_0x28 & 1) != 0) {
    if ((uint *)plVar2[1] < puVar1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar4 = local_res8[0];
    if ((int)local_res8[0] < 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->DataPtr = (int *)0x0;
    *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_c,uVar4);
    return;
  }
  if (puVar1 <= (uint *)plVar2[1]) {
    *plVar2 = *plVar2 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,local_res8);
  return;
}

// StaticEnum<enum_AnimationKeyFormat> @ 1473d2bc0

UEnum * __cdecl StaticEnum<enum_AnimationKeyFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_AnimationKeyFormat,(UObject *)pUVar1,
                       L"AnimationKeyFormat");
  }
  return Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton;
}

// StaticEnum<enum_EAlphaBlendOption> @ 1473d2c00

UEnum * __cdecl StaticEnum<enum_EAlphaBlendOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAlphaBlendOption,(UObject *)pUVar1,
                       L"EAlphaBlendOption");
  }
  return Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton;
}

// StaticEnum<enum_EAnimSyncGroupScope> @ 1473d2c40

UEnum * __cdecl StaticEnum<enum_EAnimSyncGroupScope>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimSyncGroupScope,(UObject *)pUVar1,
                       L"EAnimSyncGroupScope");
  }
  return Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton;
}

// StaticEnum<enum_EAnimSyncMethod> @ 1473d2c80

UEnum * __cdecl StaticEnum<enum_EAnimSyncMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimSyncMethod,(UObject *)pUVar1,L"EAnimSyncMethod"
                      );
  }
  return Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton;
}

// StaticEnum<enum_EAnimGroupRole::Type> @ 1473d2cc0

UEnum * __cdecl StaticEnum<enum_EAnimGroupRole::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimGroupRole,(UObject *)pUVar1,L"EAnimGroupRole");
  }
  return Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton;
}

// Union<`TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::CombinePreserved<TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1473d2d00

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::CombinePreserved<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  int *piVar2;
  ECurveElementFlags EVar3;
  float fVar4;
  FName FVar5;
  FName FVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  FCurveElement *pFVar11;
  FCurveElement *pFVar12;
  FCurveElement *pFVar13;
  ECurveElementFlags *pEVar14;
  FCurveElement *pFVar15;
  FCurveElement *pFVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  FIdentityFunctor local_res8;
  
  if ((param_1 == param_2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar18 = *piVar1;
  if (iVar10 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_1->Elements).AllocatorInstance.Data,iVar18,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_2->Elements).AllocatorInstance.Data,(param_2->Elements).ArrayNum,local_res8,
                 (FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar8 = iVar10;
    if (iVar10 < iVar18) {
      iVar8 = iVar18;
    }
    uVar19 = iVar8 / 2 + iVar8;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if ((param_1->Elements).ArrayMax < (int)uVar19) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,*piVar1,piVar2);
    }
    pFVar11 = (param_1->Elements).AllocatorInstance.Data;
    pFVar16 = (param_2->Elements).AllocatorInstance.Data;
    pFVar15 = pFVar16 + iVar10;
    pFVar13 = pFVar11 + iVar18;
    if (pFVar11 != pFVar13) {
      if (pFVar16 == pFVar15) {
        return;
      }
      do {
        while( true ) {
          FVar5 = pFVar16->Name;
          FVar6 = pFVar11->Name;
          if (FVar6 != FVar5) break;
          pFVar11 = pFVar11 + 1;
          pFVar16 = pFVar16 + 1;
          if ((pFVar11 == pFVar13) || (pFVar16 == pFVar15)) goto LAB_1473d2efa;
        }
        iVar10 = FVar6.ComparisonIndex.Value.Value - FVar5.ComparisonIndex.Value;
        if (iVar10 == 0) {
          iVar10 = FVar6.Number - FVar5.Number;
        }
        if (iVar10 < 0) {
          pFVar11 = pFVar11 + 1;
          bVar9 = pFVar11 == pFVar13;
        }
        else {
          pFVar13 = (param_1->Elements).AllocatorInstance.Data;
          iVar10 = *piVar1;
          if (iVar10 == *piVar2) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar2);
          }
          pFVar12 = (param_1->Elements).AllocatorInstance.Data;
          iVar18 = (int)((longlong)pFVar11 - (longlong)pFVar13 >> 4);
          *piVar1 = iVar10 + 1;
          pFVar12 = pFVar12 + iVar18;
          memmove(pFVar12 + 1,pFVar12,(longlong)(iVar10 - iVar18) << 4);
          pFVar12 = (param_1->Elements).AllocatorInstance.Data;
          iVar10 = *piVar1;
          fVar4 = pFVar16->Value;
          pFVar11 = pFVar12 + iVar18;
          (pFVar11->Name).ComparisonIndex = 0;
          (pFVar11->Name).Number = 0;
          pFVar11->Value = 0.0;
          pFVar11->Flags = None;
          *(undefined3 *)&pFVar11->field_0xd = 0;
          pFVar12[iVar18].Value = fVar4;
          EVar3 = pFVar16->Flags;
          pFVar13 = pFVar12 + iVar10;
          pFVar16 = pFVar16 + 1;
          pFVar12[iVar18].Name = FVar5;
          pFVar11 = pFVar12 + (longlong)iVar18 + 1;
          pFVar12[iVar18].Flags = EVar3;
          bVar9 = pFVar16 == pFVar15;
        }
      } while (!bVar9);
    }
LAB_1473d2efa:
    if (pFVar16 < pFVar15) {
      iVar10 = *piVar1;
      iVar18 = (int)((longlong)pFVar15 - (longlong)pFVar16 >> 4);
      uVar19 = iVar10 + iVar18;
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if (*piVar2 < (int)uVar19) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar10,piVar2);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1,piVar2);
      pFVar11 = (param_1->Elements).AllocatorInstance.Data + iVar10;
      lVar17 = (longlong)pFVar16 - (longlong)pFVar11;
      pEVar14 = &pFVar16->Flags;
      do {
        FVar5 = *(FName *)(lVar17 + (longlong)pFVar11);
        pFVar16 = pFVar11 + 1;
        (pFVar11->Name).ComparisonIndex = 0;
        (pFVar11->Name).Number = 0;
        pFVar11->Value = 0.0;
        pFVar11->Flags = None;
        *(undefined3 *)&pFVar11->field_0xd = 0;
        pFVar11->Name = FVar5;
        pFVar11->Value = *(float *)(pEVar14 + -4);
        pFVar11->Flags = *pEVar14;
        pFVar11 = pFVar16;
        pEVar14 = pEVar14 + 0x10;
      } while ((FCurveElement *)(lVar17 + (longlong)pFVar16) < pFVar15);
    }
  }
  return;
}

// Union<`TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::UseMaxValue<TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1473d2fd0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::UseMaxValue<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  int *piVar2;
  ECurveElementFlags EVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FCurveElement *pFVar10;
  FCurveElement *pFVar11;
  FCurveElement *pFVar12;
  ECurveElementFlags *pEVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  FIdentityFunctor local_res8;
  
  if ((param_1 == param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar17 = *piVar1;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_1->Elements).AllocatorInstance.Data,iVar17,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_2->Elements).AllocatorInstance.Data,(param_2->Elements).ArrayNum,local_res8,
                 (FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar17) {
      iVar7 = iVar17;
    }
    uVar18 = iVar7 / 2 + iVar7;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if ((param_1->Elements).ArrayMax < (int)uVar18) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,*piVar1,piVar2);
    }
    pFVar10 = (param_1->Elements).AllocatorInstance.Data;
    pFVar15 = (param_2->Elements).AllocatorInstance.Data;
    pFVar14 = pFVar15 + iVar9;
    pFVar12 = pFVar10 + iVar17;
    if (pFVar10 != pFVar12) {
      if (pFVar15 == pFVar14) {
        return;
      }
      do {
        while( true ) {
          FVar4 = pFVar15->Name;
          FVar5 = pFVar10->Name;
          if (FVar5 != FVar4) break;
          fVar19 = pFVar15->Value;
          if (pFVar15->Value <= pFVar10->Value) {
            fVar19 = pFVar10->Value;
          }
          EVar3 = pFVar15->Flags;
          pFVar15 = pFVar15 + 1;
          pFVar10->Value = fVar19;
          pFVar10->Flags = pFVar10->Flags | EVar3;
          pFVar10 = pFVar10 + 1;
          if ((pFVar10 == pFVar12) || (pFVar15 == pFVar14)) goto LAB_1473d31e0;
        }
        iVar9 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
        if (iVar9 == 0) {
          iVar9 = FVar5.Number - FVar4.Number;
        }
        if (iVar9 < 0) {
          pFVar10 = pFVar10 + 1;
          bVar8 = pFVar10 == pFVar12;
        }
        else {
          pFVar12 = (param_1->Elements).AllocatorInstance.Data;
          iVar9 = *piVar1;
          if (iVar9 == *piVar2) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                              (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar2);
          }
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          iVar17 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4);
          *piVar1 = iVar9 + 1;
          pFVar11 = pFVar11 + iVar17;
          memmove(pFVar11 + 1,pFVar11,(longlong)(iVar9 - iVar17) << 4);
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          iVar9 = *piVar1;
          fVar19 = pFVar15->Value;
          pFVar10 = pFVar11 + iVar17;
          (pFVar10->Name).ComparisonIndex = 0;
          (pFVar10->Name).Number = 0;
          pFVar10->Value = 0.0;
          pFVar10->Flags = None;
          *(undefined3 *)&pFVar10->field_0xd = 0;
          pFVar11[iVar17].Value = fVar19;
          EVar3 = pFVar15->Flags;
          pFVar12 = pFVar11 + iVar9;
          pFVar15 = pFVar15 + 1;
          pFVar11[iVar17].Name = FVar4;
          pFVar10 = pFVar11 + (longlong)iVar17 + 1;
          pFVar11[iVar17].Flags = EVar3;
          bVar8 = pFVar15 == pFVar14;
        }
      } while (!bVar8);
    }
LAB_1473d31e0:
    if (pFVar15 < pFVar14) {
      iVar9 = *piVar1;
      iVar17 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
      uVar18 = iVar17 + iVar9;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if (*piVar2 < (int)uVar18) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar9,piVar2);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar17,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1,piVar2);
      pFVar10 = (param_1->Elements).AllocatorInstance.Data + iVar9;
      lVar16 = (longlong)pFVar15 - (longlong)pFVar10;
      pEVar13 = &pFVar15->Flags;
      do {
        FVar4 = *(FName *)(lVar16 + (longlong)pFVar10);
        pFVar15 = pFVar10 + 1;
        (pFVar10->Name).ComparisonIndex = 0;
        (pFVar10->Name).Number = 0;
        pFVar10->Value = 0.0;
        pFVar10->Flags = None;
        *(undefined3 *)&pFVar10->field_0xd = 0;
        pFVar10->Name = FVar4;
        pFVar10->Value = *(float *)(pEVar13 + -4);
        pFVar10->Flags = *pEVar13;
        pFVar10 = pFVar15;
        pEVar13 = pEVar13 + 0x10;
      } while ((FCurveElement *)(lVar16 + (longlong)pFVar15) < pFVar14);
    }
  }
  return;
}

// Union<`TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::UseMinValue<TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1473d32c0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::UseMinValue<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  int *piVar2;
  ECurveElementFlags EVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FCurveElement *pFVar10;
  FCurveElement *pFVar11;
  FCurveElement *pFVar12;
  ECurveElementFlags *pEVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  FIdentityFunctor local_res8;
  
  if ((param_1 == param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar17 = *piVar1;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_1->Elements).AllocatorInstance.Data,iVar17,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_2->Elements).AllocatorInstance.Data,(param_2->Elements).ArrayNum,local_res8,
                 (FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar17) {
      iVar7 = iVar17;
    }
    uVar18 = iVar7 / 2 + iVar7;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if ((param_1->Elements).ArrayMax < (int)uVar18) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,*piVar1,piVar2);
    }
    pFVar10 = (param_1->Elements).AllocatorInstance.Data;
    pFVar15 = (param_2->Elements).AllocatorInstance.Data;
    pFVar14 = pFVar15 + iVar9;
    pFVar12 = pFVar10 + iVar17;
    if (pFVar10 != pFVar12) {
      if (pFVar15 == pFVar14) {
        return;
      }
      do {
        while( true ) {
          FVar4 = pFVar15->Name;
          FVar5 = pFVar10->Name;
          if (FVar5 != FVar4) break;
          fVar19 = pFVar15->Value;
          if (pFVar10->Value <= pFVar15->Value) {
            fVar19 = pFVar10->Value;
          }
          EVar3 = pFVar15->Flags;
          pFVar15 = pFVar15 + 1;
          pFVar10->Value = fVar19;
          pFVar10->Flags = pFVar10->Flags | EVar3;
          pFVar10 = pFVar10 + 1;
          if ((pFVar10 == pFVar12) || (pFVar15 == pFVar14)) goto LAB_1473d34d0;
        }
        iVar9 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
        if (iVar9 == 0) {
          iVar9 = FVar5.Number - FVar4.Number;
        }
        if (iVar9 < 0) {
          pFVar10 = pFVar10 + 1;
          bVar8 = pFVar10 == pFVar12;
        }
        else {
          pFVar12 = (param_1->Elements).AllocatorInstance.Data;
          iVar9 = *piVar1;
          if (iVar9 == *piVar2) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                              (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar2);
          }
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          iVar17 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4);
          *piVar1 = iVar9 + 1;
          pFVar11 = pFVar11 + iVar17;
          memmove(pFVar11 + 1,pFVar11,(longlong)(iVar9 - iVar17) << 4);
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          iVar9 = *piVar1;
          fVar19 = pFVar15->Value;
          pFVar10 = pFVar11 + iVar17;
          (pFVar10->Name).ComparisonIndex = 0;
          (pFVar10->Name).Number = 0;
          pFVar10->Value = 0.0;
          pFVar10->Flags = None;
          *(undefined3 *)&pFVar10->field_0xd = 0;
          pFVar11[iVar17].Value = fVar19;
          EVar3 = pFVar15->Flags;
          pFVar12 = pFVar11 + iVar9;
          pFVar15 = pFVar15 + 1;
          pFVar11[iVar17].Name = FVar4;
          pFVar10 = pFVar11 + (longlong)iVar17 + 1;
          pFVar11[iVar17].Flags = EVar3;
          bVar8 = pFVar15 == pFVar14;
        }
      } while (!bVar8);
    }
LAB_1473d34d0:
    if (pFVar15 < pFVar14) {
      iVar9 = *piVar1;
      iVar17 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
      uVar18 = iVar17 + iVar9;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if (*piVar2 < (int)uVar18) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar9,piVar2);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar17,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1,piVar2);
      pFVar10 = (param_1->Elements).AllocatorInstance.Data + iVar9;
      lVar16 = (longlong)pFVar15 - (longlong)pFVar10;
      pEVar13 = &pFVar15->Flags;
      do {
        FVar4 = *(FName *)(lVar16 + (longlong)pFVar10);
        pFVar15 = pFVar10 + 1;
        (pFVar10->Name).ComparisonIndex = 0;
        (pFVar10->Name).Number = 0;
        pFVar10->Value = 0.0;
        pFVar10->Flags = None;
        *(undefined3 *)&pFVar10->field_0xd = 0;
        pFVar10->Name = FVar4;
        pFVar10->Value = *(float *)(pEVar13 + -4);
        pFVar10->Flags = *pEVar13;
        pFVar10 = pFVar15;
        pEVar13 = pEVar13 + 0x10;
      } while ((FCurveElement *)(lVar16 + (longlong)pFVar15) < pFVar14);
    }
  }
  return;
}

// Union<`TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1473d35b0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  ECurveElementFlags EVar5;
  FName FVar6;
  FName FVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  FCurveElement *pFVar12;
  FCurveElement *pFVar13;
  FCurveElement *pFVar14;
  ECurveElementFlags *pEVar15;
  FCurveElement *pFVar16;
  FCurveElement *pFVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  FIdentityFunctor local_res8;
  
  if ((param_1 == param_2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x10a,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar19 = *piVar1;
  if (iVar11 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_1->Elements).AllocatorInstance.Data,iVar19,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_2->Elements).AllocatorInstance.Data,(param_2->Elements).ArrayNum,local_res8,
                 (FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar9 = iVar11;
    if (iVar11 < iVar19) {
      iVar9 = iVar19;
    }
    uVar20 = iVar9 / 2 + iVar9;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if ((param_1->Elements).ArrayMax < (int)uVar20) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar20,(ForElementType<UE::Anim::FCurveElement> *)param_1,*piVar1,piVar2);
    }
    pFVar12 = (param_1->Elements).AllocatorInstance.Data;
    pFVar17 = (param_2->Elements).AllocatorInstance.Data;
    pFVar16 = pFVar17 + iVar11;
    pFVar14 = pFVar12 + iVar19;
    if (pFVar12 != pFVar14) {
      if (pFVar17 == pFVar16) {
        return;
      }
      do {
        while( true ) {
          FVar6 = pFVar17->Name;
          FVar7 = pFVar12->Name;
          if (FVar7 != FVar6) break;
          EVar5 = pFVar17->Flags;
          pfVar3 = &pFVar17->Value;
          pFVar17 = pFVar17 + 1;
          pFVar12->Value = param_3.Weight * *pfVar3 + pFVar12->Value;
          pFVar12->Flags = pFVar12->Flags | EVar5;
          pFVar12 = pFVar12 + 1;
          if ((pFVar12 == pFVar14) || (pFVar17 == pFVar16)) goto LAB_1473d37e0;
        }
        iVar11 = FVar7.ComparisonIndex.Value.Value - FVar6.ComparisonIndex.Value;
        if (iVar11 == 0) {
          iVar11 = FVar7.Number - FVar6.Number;
        }
        if (iVar11 < 0) {
          pFVar12 = pFVar12 + 1;
          bVar10 = pFVar12 == pFVar14;
        }
        else {
          pFVar14 = (param_1->Elements).AllocatorInstance.Data;
          iVar11 = *piVar1;
          if (iVar11 == *piVar2) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar2);
          }
          pFVar13 = (param_1->Elements).AllocatorInstance.Data;
          iVar19 = (int)((longlong)pFVar12 - (longlong)pFVar14 >> 4);
          *piVar1 = iVar11 + 1;
          pFVar13 = pFVar13 + iVar19;
          memmove(pFVar13 + 1,pFVar13,(longlong)(iVar11 - iVar19) << 4);
          pFVar13 = (param_1->Elements).AllocatorInstance.Data;
          iVar11 = *piVar1;
          fVar4 = pFVar17->Value;
          EVar5 = pFVar17->Flags;
          pFVar17 = pFVar17 + 1;
          pFVar12 = pFVar13 + iVar19;
          (pFVar12->Name).ComparisonIndex = 0;
          (pFVar12->Name).Number = 0;
          pFVar12->Value = 0.0;
          pFVar12->Flags = None;
          *(undefined3 *)&pFVar12->field_0xd = 0;
          pFVar12 = pFVar13 + (longlong)iVar19 + 1;
          pFVar13[iVar19].Value = param_3.Weight * fVar4;
          pFVar14 = pFVar13 + iVar11;
          pFVar13[iVar19].Name = FVar6;
          bVar10 = pFVar17 == pFVar16;
          pFVar13[iVar19].Flags = EVar5;
        }
      } while (!bVar10);
    }
LAB_1473d37e0:
    if (pFVar17 < pFVar16) {
      iVar11 = *piVar1;
      iVar19 = (int)((longlong)pFVar16 - (longlong)pFVar17 >> 4);
      uVar20 = iVar19 + iVar11;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      if (*piVar2 < (int)uVar20) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar20,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar11,piVar2);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1,piVar2);
      pFVar12 = (param_1->Elements).AllocatorInstance.Data + iVar11;
      lVar18 = (longlong)pFVar17 - (longlong)pFVar12;
      pEVar15 = &pFVar17->Flags;
      do {
        FVar6 = *(FName *)(lVar18 + (longlong)pFVar12);
        pFVar17 = pFVar12 + 1;
        (pFVar12->Name).ComparisonIndex = 0;
        (pFVar12->Name).Number = 0;
        pFVar12->Value = 0.0;
        pFVar12->Flags = None;
        *(undefined3 *)&pFVar12->field_0xd = 0;
        pFVar12->Name = FVar6;
        fVar4 = *(float *)(pEVar15 + -4);
        pFVar12->Flags = *pEVar15;
        pFVar12->Value = param_3.Weight * fVar4;
        pFVar12 = pFVar17;
        pEVar15 = pEVar15 + 0x10;
      } while ((FCurveElement *)(lVar18 + (longlong)pFVar17) < pFVar16);
    }
  }
  return;
}

// Union<`TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Lerp<TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l11::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1473d38d0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Lerp<TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l11::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_2,
          TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_3,
          <lambda_1> param_4)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ECurveElementFlags EVar5;
  int iVar6;
  FName FVar7;
  FCurveElement *pFVar8;
  code *pcVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  ECurveElementFlags *pEVar16;
  uint uVar17;
  FCurveElement *pFVar18;
  longlong lVar19;
  FCurveElement *pFVar20;
  FIdentityFunctor local_res8;
  FCurveElement local_38;
  
  if ((param_1 == param_2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&OutResultValueArray != (void*)&InValueArray0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x1a0,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_1 == param_3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&OutResultValueArray != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x1a1,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_2 == param_3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x1a2,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  piVar1 = &(param_1->Elements).ArrayMax;
  (param_1->Elements).ArrayNum = 0;
  if ((param_1->Elements).ArrayMax < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar1);
  }
  iVar13 = (param_2->Elements).ArrayNum;
  iVar6 = (param_3->Elements).ArrayNum;
  if (param_2->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((param_2->Elements).AllocatorInstance.Data,iVar13,local_res8,
               (FElementSortPredicate)local_res8);
    param_2->bSorted = true;
  }
  if (param_3->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((param_3->Elements).AllocatorInstance.Data,(param_3->Elements).ArrayNum,local_res8,
               (FElementSortPredicate)local_res8);
    param_3->bSorted = true;
  }
  iVar10 = iVar6;
  if (iVar6 < iVar13) {
    iVar10 = iVar13;
  }
  uVar17 = iVar10 / 2 + iVar10;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*piVar1 < (int)uVar17) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,uVar17,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (param_1->Elements).ArrayNum,piVar1);
  }
  pFVar15 = (param_2->Elements).AllocatorInstance.Data;
  pFVar14 = (param_3->Elements).AllocatorInstance.Data;
  pFVar18 = pFVar15 + iVar13;
  pFVar20 = pFVar14 + iVar6;
  if (pFVar15 != pFVar18) {
    if (pFVar14 != pFVar20) {
      do {
        local_38.Name = pFVar14->Name;
        FVar7 = pFVar15->Name;
        local_38.Value = *param_4.Alpha;
        if (FVar7 == local_38.Name) {
          pfVar2 = &pFVar14->Value;
          pEVar16 = &pFVar14->Flags;
          pFVar14 = pFVar14 + 1;
          local_38.Flags = *pEVar16 | pFVar15->Flags;
          local_38.Value = (*pfVar2 - pFVar15->Value) * local_38.Value + pFVar15->Value;
          pFVar15 = pFVar15 + 1;
          if ((pFVar15 == pFVar18) || (pFVar14 == pFVar20)) {
            bVar11 = true;
            local_38.Name = FVar7;
          }
          else {
            bVar11 = false;
            local_38.Name = FVar7;
          }
        }
        else {
          iVar13 = FVar7.ComparisonIndex.Value.Value - local_38.Name.ComparisonIndex.Value;
          if (iVar13 == 0) {
            iVar13 = FVar7.Number - local_38.Name.Number;
          }
          if (iVar13 < 0) {
            pfVar2 = &pFVar15->Value;
            local_38.Flags = pFVar15->Flags;
            pFVar15 = pFVar15 + 1;
            bVar11 = pFVar15 == pFVar18;
            local_38.Value = *pfVar2 - local_38.Value * *pfVar2;
            local_38.Name = FVar7;
          }
          else {
            local_38.Value = local_38.Value * pFVar14->Value;
            local_38.Flags = pFVar14->Flags;
            pFVar14 = pFVar14 + 1;
            bVar11 = pFVar14 == pFVar20;
          }
        }
        pFVar8 = (param_1->Elements).AllocatorInstance.Data;
        if (((pFVar8 <= &local_38) && (&local_38 < pFVar8 + *piVar1)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar13 = (param_1->Elements).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
        }
        (param_1->Elements).ArrayNum = iVar13 + 1;
        pFVar8 = (param_1->Elements).AllocatorInstance.Data + iVar13;
        pFVar8->Name = local_38.Name;
        pFVar8->Value = local_38.Value;
        pFVar8->Flags = local_38.Flags;
        *(int3 *)&pFVar8->field_0xd = local_38._13_3_;
      } while (!bVar11);
    }
    if (pFVar15 < pFVar18) {
      iVar13 = (param_1->Elements).ArrayNum;
      iVar6 = (int)((longlong)pFVar18 - (longlong)pFVar15 >> 4);
      uVar17 = iVar13 + iVar6;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar17) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar17,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar13,
                   &(param_1->Elements).ArrayMax);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar6,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                 &(param_1->Elements).ArrayNum,&(param_1->Elements).ArrayMax);
      pEVar16 = &pFVar15->Flags;
      pFVar14 = (param_1->Elements).AllocatorInstance.Data + iVar13;
      lVar19 = (longlong)pFVar15 - (longlong)pFVar14;
      do {
        FVar7 = *(FName *)(lVar19 + (longlong)pFVar14);
        fVar3 = *(float *)(pEVar16 + -4);
        (pFVar14->Name).ComparisonIndex = 0;
        (pFVar14->Name).Number = 0;
        pFVar14->Value = 0.0;
        pFVar14->Flags = None;
        *(undefined3 *)&pFVar14->field_0xd = 0;
        pFVar14->Name = FVar7;
        EVar5 = *pEVar16;
        pFVar14->Value = 0.0;
        pEVar16 = pEVar16 + 0x10;
        fVar4 = *param_4.Alpha;
        pFVar14->Flags = EVar5;
        pFVar14->Value = fVar3 - fVar3 * fVar4;
        pFVar14 = pFVar14 + 1;
      } while ((FCurveElement *)(lVar19 + (longlong)pFVar14) < pFVar18);
      goto LAB_1473d3d69;
    }
  }
  if (pFVar14 < pFVar20) {
    iVar13 = (param_1->Elements).ArrayNum;
    iVar6 = (int)((longlong)pFVar20 - (longlong)pFVar14 >> 4);
    uVar17 = iVar13 + iVar6;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((param_1->Elements).ArrayMax < (int)uVar17) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar17,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar13,
                 &(param_1->Elements).ArrayMax);
    }
    Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,iVar6,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               &(param_1->Elements).ArrayNum,&(param_1->Elements).ArrayMax);
    pFVar15 = (param_1->Elements).AllocatorInstance.Data + iVar13;
    lVar19 = (longlong)pFVar14 - (longlong)pFVar15;
    pEVar16 = &pFVar14->Flags;
    do {
      FVar7 = *(FName *)(lVar19 + (longlong)pFVar15);
      pFVar14 = pFVar15 + 1;
      (pFVar15->Name).ComparisonIndex = 0;
      (pFVar15->Name).Number = 0;
      pFVar15->Value = 0.0;
      pFVar15->Flags = None;
      *(undefined3 *)&pFVar15->field_0xd = 0;
      pFVar15->Name = FVar7;
      EVar5 = *pEVar16;
      fVar3 = *(float *)(pEVar16 + -4);
      pFVar15->Value = 0.0;
      fVar4 = *param_4.Alpha;
      pFVar15->Flags = EVar5;
      pFVar15->Value = fVar3 * fVar4;
      pFVar15 = pFVar14;
      pEVar16 = pEVar16 + 0x10;
    } while ((FCurveElement *)(lVar19 + (longlong)pFVar14) < pFVar20);
  }
LAB_1473d3d69:
  param_1->bSorted = true;
  return;
}

// Union<`TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::LerpTo<TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l11::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1473d3db0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::LerpTo<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l11::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ECurveElementFlags EVar5;
  FName FVar6;
  FName FVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  FCurveElement *pFVar12;
  FCurveElement *pFVar13;
  FCurveElement *pFVar14;
  ECurveElementFlags *pEVar15;
  FCurveElement *pFVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  FCurveElement *pFVar20;
  longlong lVar21;
  FIdentityFunctor local_res8;
  
  if ((param_1 == param_2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x10a,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = (param_2->Elements).ArrayNum;
  piVar18 = &(param_1->Elements).ArrayNum;
  iVar17 = *piVar18;
  if (iVar11 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_1->Elements).AllocatorInstance.Data,iVar17,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_2->Elements).AllocatorInstance.Data,(param_2->Elements).ArrayNum,local_res8,
                 (FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar9 = iVar11;
    if (iVar11 < iVar17) {
      iVar9 = iVar17;
    }
    uVar19 = iVar9 / 2 + iVar9;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    piVar1 = &(param_1->Elements).ArrayMax;
    if ((param_1->Elements).ArrayMax < (int)uVar19) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,*piVar18,piVar1);
    }
    pFVar12 = (param_1->Elements).AllocatorInstance.Data;
    pFVar20 = (param_2->Elements).AllocatorInstance.Data;
    pFVar14 = pFVar12 + iVar17;
    pFVar16 = pFVar20 + iVar11;
    if (pFVar12 != pFVar14) {
      if (pFVar20 == pFVar16) {
        return;
      }
      do {
        while( true ) {
          piVar18 = &(param_1->Elements).ArrayNum;
          FVar6 = pFVar20->Name;
          FVar7 = pFVar12->Name;
          if (FVar7 != FVar6) break;
          pfVar2 = &pFVar20->Value;
          EVar5 = pFVar20->Flags;
          pFVar20 = pFVar20 + 1;
          pFVar12->Value = (*pfVar2 - pFVar12->Value) * *param_3.Alpha + pFVar12->Value;
          pFVar12->Flags = pFVar12->Flags | EVar5;
          pFVar12 = pFVar12 + 1;
          if ((pFVar12 == pFVar14) || (pFVar20 == pFVar16)) goto LAB_1473d3ff0;
        }
        iVar11 = FVar7.ComparisonIndex.Value.Value - FVar6.ComparisonIndex.Value;
        if (iVar11 == 0) {
          iVar11 = FVar7.Number - FVar6.Number;
        }
        if (iVar11 < 0) {
          pFVar12->Value = pFVar12->Value - pFVar12->Value * *param_3.Alpha;
          pFVar12 = pFVar12 + 1;
          bVar10 = pFVar12 == pFVar14;
        }
        else {
          pFVar14 = (param_1->Elements).AllocatorInstance.Data;
          iVar11 = *piVar18;
          if (iVar11 == *piVar1) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
          }
          pFVar13 = (param_1->Elements).AllocatorInstance.Data;
          *piVar18 = iVar11 + 1;
          iVar17 = (int)((longlong)pFVar12 - (longlong)pFVar14 >> 4);
          pFVar13 = pFVar13 + iVar17;
          memmove(pFVar13 + 1,pFVar13,(longlong)(iVar11 - iVar17) << 4);
          pFVar13 = (param_1->Elements).AllocatorInstance.Data;
          iVar11 = (param_1->Elements).ArrayNum;
          EVar5 = pFVar20->Flags;
          pFVar12 = pFVar13 + iVar17;
          (pFVar12->Name).ComparisonIndex = 0;
          (pFVar12->Name).Number = 0;
          pFVar12->Value = 0.0;
          pFVar12->Flags = None;
          *(undefined3 *)&pFVar12->field_0xd = 0;
          pFVar13[iVar17].Value = 0.0;
          fVar3 = pFVar20->Value;
          pFVar12 = pFVar13 + (longlong)iVar17 + 1;
          pFVar13[iVar17].Name = FVar6;
          pFVar14 = pFVar13 + iVar11;
          fVar4 = *param_3.Alpha;
          pFVar20 = pFVar20 + 1;
          pFVar13[iVar17].Flags = EVar5;
          bVar10 = pFVar20 == pFVar16;
          pFVar13[iVar17].Value = fVar3 * fVar4;
        }
      } while (!bVar10);
    }
LAB_1473d3ff0:
    piVar18 = &(param_1->Elements).ArrayNum;
    if (pFVar20 < pFVar16) {
      iVar11 = *piVar18;
      iVar17 = (int)((longlong)pFVar16 - (longlong)pFVar20 >> 4);
      uVar19 = iVar17 + iVar11;
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if (*piVar1 < (int)uVar19) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar11,piVar1);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar17,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar18,piVar1);
      pFVar12 = (param_1->Elements).AllocatorInstance.Data + iVar11;
      lVar21 = (longlong)pFVar20 - (longlong)pFVar12;
      pEVar15 = &pFVar20->Flags;
      do {
        FVar6 = *(FName *)(lVar21 + (longlong)pFVar12);
        pFVar20 = pFVar12 + 1;
        (pFVar12->Name).ComparisonIndex = 0;
        (pFVar12->Name).Number = 0;
        pFVar12->Value = 0.0;
        pFVar12->Flags = None;
        *(undefined3 *)&pFVar12->field_0xd = 0;
        pFVar12->Name = FVar6;
        EVar5 = *pEVar15;
        fVar3 = *(float *)(pEVar15 + -4);
        pFVar12->Value = 0.0;
        fVar4 = *param_3.Alpha;
        pFVar12->Flags = EVar5;
        pFVar12->Value = fVar3 * fVar4;
        pFVar12 = pFVar20;
        pEVar15 = pEVar15 + 0x10;
      } while ((FCurveElement *)(lVar21 + (longlong)pFVar20) < pFVar16);
    }
  }
  return;
}

// WriteArray<unsigned_char> @ 1473d40e0

void __cdecl
WriteArray<unsigned_char>
          (FMemoryWriter *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001473d40ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  return;
}

// WriteArray<int> @ 1473d4100

void __cdecl
WriteArray<int>(FMemoryWriter *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001473d410e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum << 2);
  return;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FCompressedAnimSequence_*>_> @ 1473d4450

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FCompressedAnimSequence_*>_>
          (_Atomic_padded<FCompressedAnimSequence_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FCompressedAnimSequence_*>_> @ 1473d4460

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FCompressedAnimSequence_*>_>
          (_Atomic_padded<FCompressedAnimSequence_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,FCompressedAnimSequence_*> @ 1473d4470

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,FCompressedAnimSequence_*>(FCompressedAnimSequence **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`FStreamingAnimationData::BeginPendingRequests'::__l26::<lambda_1>,0,1> @ 1473d9620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamingAnimationData::BeginPendingRequests'::__l26::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FStreamingAnimationData::BeginPendingRequests_::__l26::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStreamingAnimationData::BeginPendingRequests'::`26'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// operator<< @ 1473db8c0

FArchive * __cdecl operator<<(FArchive *param_1,FAnimBankEntry *param_2)

{
  float *pfVar1;
  uint *puVar2;
  longlong *plVar3;
  float *pfVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  FArchive *pFVar8;
  undefined1 *puVar9;
  float local_res8 [2];
  
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PositionKeys);
  TArrayPrivateFriend::Serialize<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->RotationKeys);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ScalingKeys);
  pFVar8 = UE::Math::operator<<(param_1,&(param_2->SampledBounds).Origin);
  UE::Math::operator<<(pFVar8,&(param_2->SampledBounds).BoxExtent);
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\BoxSphereBounds.h"
                         ,0x1a2,L"float -> double conversion applied outside of load!");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar6)();
        return pFVar8;
      }
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    (param_2->SampledBounds).SphereRadius = (double)local_res8[0];
  }
  else {
    operator<<(param_1,&(param_2->SampledBounds).SphereRadius);
  }
  puVar9 = &param_1->field_0x2a;
  pfVar1 = &param_2->Position;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar9 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->PlayRate;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar9 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->FrameCount;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar9 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->KeyCount;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar9 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->Flags;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar5 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar9 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 1473dbb40

FArchive * __cdecl operator<<(FArchive *param_1,FAnimCompressedCurveIndexedName *param_2)

{
  int *piVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  if ((param_1->field_0x2b & 4) != 0) {
    piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
    if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      param_2->CurveIndex = *piVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return param_1;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->CurveIndex,4);
      return param_1;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->CurveIndex);
  }
  return param_1;
}

// operator<< @ 1473dbbd0

FArchive * __cdecl operator<<(FArchive *param_1,FAnimationErrorStats *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->AverageError = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &param_2->MaxError;
  puVar2 = &param_1->field_0x2a;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &param_2->MaxErrorTime;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->MaxErrorBone;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar5 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 1473dbd30

FArchive * __cdecl operator<<(FArchive *param_1,FCompressedOffsetData *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  FArchive *this;
  
  puVar1 = &param_2->field_0x10;
  this = TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                   (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)param_2);
  puVar2 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return param_1;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)puVar1);
  return param_1;
}

// operator<< @ 1473dbdc0

FArchive * __cdecl operator<<(FArchive *param_1,AnimationCompressionFormat *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = (undefined1)*param_2;
  plVar3 = *(longlong **)&param_1->field_0x8;
  pbVar1 = (byte *)*plVar3 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if (pbVar1 <= (byte *)plVar3[1]) {
      *plVar3 = *plVar3 + 1;
      return param_1;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    return param_1;
  }
  if (pbVar1 <= (byte *)plVar3[1]) {
    bVar2 = *(byte *)*plVar3;
    *plVar3 = *plVar3 + 1;
    *param_2 = (uint)bVar2;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  *param_2 = (uint)(byte)local_res8[0];
  return param_1;
}

// operator<< @ 1473dbe90

FArchive * __cdecl operator<<(FArchive *param_1,AnimationKeyFormat *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = (undefined1)*param_2;
  plVar3 = *(longlong **)&param_1->field_0x8;
  pbVar1 = (byte *)*plVar3 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if (pbVar1 <= (byte *)plVar3[1]) {
      *plVar3 = *plVar3 + 1;
      return param_1;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    return param_1;
  }
  if (pbVar1 <= (byte *)plVar3[1]) {
    bVar2 = *(byte *)*plVar3;
    *plVar3 = *plVar3 + 1;
    *param_2 = (uint)bVar2;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  *param_2 = (uint)(byte)local_res8[0];
  return param_1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1473de914

/* [thunk]:public: virtual void * __ptr64 __cdecl UAimOffsetBlendSpace1D::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAimOffsetBlendSpace1D::_vector_deleting_destructor__adjustor_40__
          (UAimOffsetBlendSpace1D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAimOffsetBlendSpace1D *)&this[-1].field_0x1a0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1473de924

/* [thunk]:public: virtual void * __ptr64 __cdecl UAimOffsetBlendSpace1D::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAimOffsetBlendSpace1D::_vector_deleting_destructor__adjustor_48__
          (UAimOffsetBlendSpace1D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAimOffsetBlendSpace1D *)&this[-1].field_0x198,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1473de934

/* [thunk]:public: virtual void * __ptr64 __cdecl UAimOffsetBlendSpace::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAimOffsetBlendSpace::_vector_deleting_destructor__adjustor_40__
          (UAimOffsetBlendSpace *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAimOffsetBlendSpace *)&this[-1].field_0x198,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1473de944

/* [thunk]:public: virtual void * __ptr64 __cdecl UAimOffsetBlendSpace::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAimOffsetBlendSpace::_vector_deleting_destructor__adjustor_48__
          (UAimOffsetBlendSpace *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAimOffsetBlendSpace *)&this[-1].field_0x190,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1473de954

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimBank::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimBank::_vector_deleting_destructor__adjustor_40__(UAnimBank *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimBank *)&this[-1].Data.Mapping.RotationKeys.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1473de964

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimBank::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAnimBank::_vector_deleting_destructor__adjustor_48__(UAnimBank *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimBank *)&this[-1].Data.Mapping.RotationKeys,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{128}' @ 1473de974

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimBank::`vector deleting
   destructor'`adjustor{128}' (unsigned int) __ptr64 */

void * __thiscall
UAnimBank::_vector_deleting_destructor__adjustor_128__(UAnimBank *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimBank *)&this[-1].Data,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{520}' @ 1473de988

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimBlueprintGeneratedClass::`vector deleting
   destructor'`adjustor{520}' (unsigned int) __ptr64 */

void * __thiscall
UAnimBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_520__
          (UAnimBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimBlueprintGeneratedClass *)
                      &this[-1].OrderedSavedPoseIndicesMap.field_0x30,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{880}' @ 1473de99c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimBlueprintGeneratedClass::`vector deleting
   destructor'`adjustor{880}' (unsigned int) __ptr64 */

void * __thiscall
UAnimBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_880__
          (UAnimBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimBlueprintGeneratedClass *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1473de9b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimComposite::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimComposite::_vector_deleting_destructor__adjustor_40__(UAnimComposite *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimComposite *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1473de9c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimComposite::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAnimComposite::_vector_deleting_destructor__adjustor_48__(UAnimComposite *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimComposite *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1473de9d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimCompositeBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimCompositeBase::_vector_deleting_destructor__adjustor_40__
          (UAnimCompositeBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimCompositeBase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1473de9e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimCompositeBase::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAnimCompositeBase::_vector_deleting_destructor__adjustor_48__
          (UAnimCompositeBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimCompositeBase *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1473de9f0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimationAsset::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimationAsset::_vector_deleting_destructor__adjustor_40__(UAnimationAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimationAsset *)&this[-1].SkeletonVirtualBoneGuid.C,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1473dea00

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimationAsset::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAnimationAsset::_vector_deleting_destructor__adjustor_48__(UAnimationAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimationAsset *)&this[-1].SkeletonVirtualBoneGuid,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1473dea10

void * __thiscall
IBaseDelegateInstance<void___cdecl(FUserActivity_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FUserActivity_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dea40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(FUserActivity_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(FUserActivity_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dea70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473deaa0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dead0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473deb00

void * __thiscall
TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FEngineAnalyticsSessionSummary,void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473deb30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FUserActivity_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FUserActivity_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473deb60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(unsigned___int64_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(unsigned___int64_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NAEA_K_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473deba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FDateTime_const_*,FDateTime_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FDateTime_const_*,FDateTime_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NPEBUFDateTime__AEBU1__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473debe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(unsigned___int64_const_*,unsigned___int64_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(unsigned___int64_const_*,unsigned___int64_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEB_KAEB_K_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dec20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamingAnimationData::BeginPendingRequests'::__l26::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStreamingAnimationData::BeginPendingRequests'::`26'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dec60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473deca0

void * __thiscall
TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::_scalar_deleting_destructor_
          (TThreadSingleton<FBlendPosesPerBoneFilterScratchArea> *this,uint param_1)

{
  ~TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dece0

void * __thiscall
TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>::_scalar_deleting_destructor_
          (TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea> *this,uint param_1)

{
  ~TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473ded20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AAmbientSound::_scalar_deleting_destructor_(AAmbientSound *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AAmbientSound__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473ded80

void * __thiscall
UE::Anim::FActiveStateMachineScope::_scalar_deleting_destructor_
          (FActiveStateMachineScope *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dedb0

void * __thiscall
`FNetConnAnalyticsData::SendAnalytics'::__l5::FAnalyticsJsonWriter::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
  ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dedf0

void * __thiscall
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::FAnalyticsJsonWriter::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
  ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dee30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FAnimBankDataRenderProxy::_scalar_deleting_destructor_(FAnimBankDataRenderProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAnimBankDataRenderProxy__6B_;
  pFVar1 = (this->AnimBankItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimBankHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimBankIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTransformProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473deeb0

void * __thiscall
UE::Anim::FAnimBlendDebugScope::_scalar_deleting_destructor_
          (FAnimBlendDebugScope *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473deee0

void * __thiscall
FAnimLinkableElement::_scalar_deleting_destructor_(FAnimLinkableElement *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473def20

void * __thiscall
UE::Anim::FAnimNotifyMontageInstanceContext::_scalar_deleting_destructor_
          (FAnimNotifyMontageInstanceContext *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473def50

void * __thiscall
UE::Anim::FAnimNotifyStateMachineContext::_scalar_deleting_destructor_
          (FAnimNotifyStateMachineContext *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473def80

void * __thiscall
FAnimationStreamingManager::_scalar_deleting_destructor_
          (FAnimationStreamingManager *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FAnimationStreamingManager__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined4 *)&(this->StreamingAnimations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StreamingAnimations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UAnimStreamable_*,FStreamingAnimationData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StreamingAnimations);
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df000

void * __thiscall
FBlendPosesPerBoneFilterScratchArea::_scalar_deleting_destructor_
          (FBlendPosesPerBoneFilterScratchArea *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SourceWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaxPoseWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->TargetScales != (void *)0x0) {
    FMemory::Free(*(void **)&this->TargetScales);
  }
  if (*(void **)&this->BlendScales != (void *)0x0) {
    FMemory::Free(*(void **)&this->BlendScales);
  }
  if (*(void **)&this->SourceScales != (void *)0x0) {
    FMemory::Free(*(void **)&this->SourceScales);
  }
  if (*(void **)&this->TargetRotations != (void *)0x0) {
    FMemory::Free(*(void **)&this->TargetRotations);
  }
  if (*(void **)&this->BlendRotations != (void *)0x0) {
    FMemory::Free(*(void **)&this->BlendRotations);
  }
  if (*(void **)&this->SourceRotations != (void *)0x0) {
    FMemory::Free(*(void **)&this->SourceRotations);
  }
  TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::
  ~TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>
            ((TThreadSingleton<FBlendPosesPerBoneFilterScratchArea> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df0d0

void * __thiscall
FEngineAnalyticsSessionSummary::_scalar_deleting_destructor_
          (FEngineAnalyticsSessionSummary *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Store).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df110

void * __thiscall
UE::Anim::Decompression::FGetBonePoseScratchArea::_scalar_deleting_destructor_
          (FGetBonePoseScratchArea *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->AnimatedCompactRotations).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->OrientAndScaleRetargetingPairs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AnimRelativeRetargetingPairs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AnimScaleRetargetingPairs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TranslationPairs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RotationScalePairs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>::
  ~TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea>
            ((TThreadSingleton<UE::Anim::Decompression::FGetBonePoseScratchArea> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df1b0

void * __thiscall
FSkinnedMeshComponentDescriptor::_scalar_deleting_destructor_
          (FSkinnedMeshComponentDescriptor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df1f0

void * __thiscall
FSkinnedMeshComponentDescriptorBase::_scalar_deleting_destructor_
          (FSkinnedMeshComponentDescriptorBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df230

void * __thiscall
FSoftSkinnedMeshComponentDescriptor::_scalar_deleting_destructor_
          (FSoftSkinnedMeshComponentDescriptor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSoftSkinnedMeshComponentDescriptor__6B_;
  pvVar1 = *(void **)&(this->TransformProvider).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SkinnedAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7FSkinnedMeshComponentDescriptorBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df2a0

void * __thiscall
FTransformProviderRenderProxy::_scalar_deleting_destructor_
          (FTransformProviderRenderProxy *this,uint param_1)

{
  *this = (FTransformProviderRenderProxy)&___7FTransformProviderRenderProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df2e0

void * __thiscall
FUECompressedAnimData::_scalar_deleting_destructor_(FUECompressedAnimData *this,uint param_1)

{
  *(undefined ***)this = &___7ICompressedAnimData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df320

void * __thiscall
IAnimClassInterface::_scalar_deleting_destructor_(IAnimClassInterface *this,uint param_1)

{
  *this = (IAnimClassInterface)&___7IAnimClassInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df360

void * __thiscall
UE::Anim::IAnimNotifyEventContextDataInterface::_scalar_deleting_destructor_
          (IAnimNotifyEventContextDataInterface *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df390

void * __thiscall
IAnimationStreamingManager::_scalar_deleting_destructor_
          (IAnimationStreamingManager *this,uint param_1)

{
  *(undefined ***)this = &___7IStreamingManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df3d0

void * __thiscall
ICompressedAnimData::_scalar_deleting_destructor_(ICompressedAnimData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ICompressedAnimData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df410

void * __thiscall
IInterface_AsyncCompilation::_scalar_deleting_destructor_
          (IInterface_AsyncCompilation *this,uint param_1)

{
  *this = (IInterface_AsyncCompilation)&___7IInterface_AsyncCompilation__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df450

void * __thiscall
IInterface_PreviewMeshProvider::_scalar_deleting_destructor_
          (IInterface_PreviewMeshProvider *this,uint param_1)

{
  *this = (IInterface_PreviewMeshProvider)&___7IInterface_PreviewMeshProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df490

void * __thiscall
IStreamingManager::_scalar_deleting_destructor_(IStreamingManager *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df4d0

void * __thiscall
UAimOffsetBlendSpace1D::_scalar_deleting_destructor_(UAimOffsetBlendSpace1D *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined ***)&this->field_0x80 = &___7UAimOffsetBlendSpace1D__6B_;
  UBlendSpace1D::~UBlendSpace1D((UBlendSpace1D *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df560

void * __thiscall
UAimOffsetBlendSpace::_scalar_deleting_destructor_(UAimOffsetBlendSpace *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined ***)&this->field_0x80 = &___7UAimOffsetBlendSpace__6B_;
  UBlendSpace::~UBlendSpace((UBlendSpace *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df5f0

void * __thiscall UAnimBank::_scalar_deleting_destructor_(UAnimBank *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&___7UAnimBank__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  DestructItems<FAnimBankEntry,int>
            ((FAnimBankEntry *)(this->Data).Entries.AllocatorInstance.Data,
             (this->Data).Entries.ArrayNum);
  pFVar1 = (this->Data).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSkinnedAssetMapping::~FSkinnedAssetMapping(&(this->Data).Mapping);
  this->_padding_ = (longlong)&___7IInterface_AsyncCompilation__6B_;
  UAnimationAsset::~UAnimationAsset((UAnimationAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df6d0

void * __thiscall UAnimBankData::_scalar_deleting_destructor_(UAnimBankData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimBankData__6B_;
  pFVar1 = (this->AnimBankItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTransformProviderData::~UTransformProviderData((UTransformProviderData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df740

void * __thiscall
UAnimBlueprintGeneratedClass::_scalar_deleting_destructor_
          (UAnimBlueprintGeneratedClass *this,uint param_1)

{
  ~UAnimBlueprintGeneratedClass(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df7a0

void * __thiscall
UAnimBlueprintGeneratedStruct::_scalar_deleting_destructor_
          (UAnimBlueprintGeneratedStruct *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimBlueprintGeneratedStruct__6B_;
  UScriptStruct::~UScriptStruct((UScriptStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df800

void * __thiscall
UAnimBoneCompressionCodec::_scalar_deleting_destructor_
          (UAnimBoneCompressionCodec *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec__6B_;
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 1473df870

void * __thiscall
UAnimBoneCompressionSettings::_scalar_deleting_destructor_
          (UAnimBoneCompressionSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimBoneCompressionSettings__6B_;
  pFVar1 = (this->Codecs).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 1473df8e0

void * __thiscall
UAnimClassInterface::_scalar_deleting_destructor_(UAnimClassInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1473df940

void * __thiscall UAnimComposite::_scalar_deleting_destructor_(UAnimComposite *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->AnimationTrack).AnimSegments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__IInterface_PreviewMeshProvider__;
  UAnimSequenceBase::~UAnimSequenceBase((UAnimSequenceBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473df9f0

void * __thiscall
UAnimCompositeBase::_scalar_deleting_destructor_(UAnimCompositeBase *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  UAnimSequenceBase::~UAnimSequenceBase((UAnimSequenceBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dfa70

void * __thiscall UAnimCompress::_scalar_deleting_destructor_(UAnimCompress *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 1473dfae0

void * __thiscall UAnimationAsset::_scalar_deleting_destructor_(UAnimationAsset *this,uint param_1)

{
  ~UAnimationAsset(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1473dfb40

void * __thiscall
UAnimationSettings::_scalar_deleting_destructor_(UAnimationSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAnimationSettings__6B_;
  pFVar1 = (this->MirrorFindReplaceExpressions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UUserDefinedStruct>,int>
            ((TSoftObjectPtr<UUserDefinedStruct> *)
             (this->UserDefinedStructAttributes).AllocatorInstance.Data,
             (this->UserDefinedStructAttributes).ArrayNum);
  pFVar1 = (this->UserDefinedStructAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->TransformAttributeNames).AllocatorInstance.Data,
             (this->TransformAttributeNames).ArrayNum);
  pFVar1 = (this->TransformAttributeNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AttributeBlendModes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AttributeBlendModes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_ECustomAttributeBlendType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_ECustomAttributeBlendType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AttributeBlendModes);
  DestructItems<FString,int>
            ((FString *)(this->BoneNamesWithCustomAttributes).AllocatorInstance.Data,
             (this->BoneNamesWithCustomAttributes).ArrayNum);
  pFVar1 = (this->BoneNamesWithCustomAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomAttributeSetting,int>
            ((FCustomAttributeSetting *)(this->BoneCustomAttributesNames).AllocatorInstance.Data,
             (this->BoneCustomAttributesNames).ArrayNum);
  pFVar1 = (this->BoneCustomAttributesNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data,
             (this->KeyEndEffectorsMatchNameArray).ArrayNum);
  pFVar1 = (this->KeyEndEffectorsMatchNameArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// BlendCurves @ 1473e3230

void __cdecl
BlendCurves(TArrayView<FBlendedCurve_const_*_const,int> *param_1,
           TArrayView<float_const_,int> *param_2,FBlendedCurve *param_3)

{
  float fVar1;
  <lambda_1> <Var2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  FBlendedCurve **ppFVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar3 = param_1->ArrayNum;
  if (0 < iVar3) {
    pfVar7 = TArrayView<float_const_,int>::operator[](param_2,0);
    fVar1 = *pfVar7;
    ppFVar8 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,0);
    TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
    Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
               (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar8,fVar1);
    fVar1 = __real_3727c5ac;
    uVar9 = 1;
    if (1 < iVar3) {
      lVar10 = 4;
      lVar11 = 8;
      do {
        uVar6 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar3 = param_1->ArrayNum;
        <Var2.Weight = *(float *)((longlong)param_2->DataPtr + lVar10);
        uVar6 = 0;
        if ((int)uVar9 < iVar3) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (fVar1 < <Var2.Weight) {
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                     *(TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> **)
                      (lVar11 + (longlong)param_1->DataPtr),<Var2);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 4;
        lVar11 = lVar11 + 8;
      } while ((int)uVar9 < iVar3);
    }
  }
  return;
}

// BlendCurves @ 1473e33d0

void __cdecl
BlendCurves(TArrayView<FBlendedCurve_const_*_const,int> *param_1,
           TArrayView<float_const_,int> *param_2,FBlendedCurve *param_3,Type param_4)

{
  float *pfVar1;
  int iVar2;
  code *pcVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  uint uVar8;
  FBlendedCurve **ppFVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  <lambda_1> local_res8;
  ForAnyElementType local_c8;
  int local_c0 [2];
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<float_const_,int> local_a8;
  TArrayView<FBlendedCurve_const_*_const,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<FBlendedCurve_const_*_const,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<FBlendedCurve_const_*_const,int> local_58 [3];
  
  iVar2 = param_1->ArrayNum;
  if (0 < iVar2) {
    if (param_4 == BlendByWeight) {
      local_a8.DataPtr = param_2->DataPtr;
      local_a8.ArrayNum = param_2->ArrayNum;
      local_a8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_98.DataPtr = param_1->DataPtr;
      local_98.ArrayNum = param_1->ArrayNum;
      local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
      BlendCurves(&local_98,&local_a8,param_3);
      return;
    }
    if (param_4 == NormalizeByWeight) {
      pfVar11 = param_2->DataPtr;
      uVar14 = 0;
      iVar2 = param_2->ArrayNum;
      fVar24 = 0.0;
      pfVar10 = pfVar11 + iVar2;
      uVar16 = (longlong)iVar2 & 0x3fffffffffffffff;
      if (pfVar10 < pfVar11) {
        uVar16 = uVar14;
      }
      if ((uVar16 != 0) && (7 < uVar16)) {
        fVar24 = 0.0;
        fVar17 = 0.0;
        fVar18 = 0.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar22 = 0.0;
        fVar23 = 0.0;
        uVar12 = uVar14;
        do {
          uVar12 = uVar12 + 8;
          fVar24 = fVar24 + *pfVar11;
          fVar17 = fVar17 + pfVar11[1];
          fVar18 = fVar18 + pfVar11[2];
          fVar19 = fVar19 + pfVar11[3];
          pfVar1 = pfVar11 + 4;
          pfVar4 = pfVar11 + 5;
          pfVar5 = pfVar11 + 6;
          pfVar6 = pfVar11 + 7;
          pfVar11 = pfVar11 + 8;
          fVar20 = fVar20 + *pfVar1;
          fVar21 = fVar21 + *pfVar4;
          fVar22 = fVar22 + *pfVar5;
          fVar23 = fVar23 + *pfVar6;
        } while (uVar12 != (uVar16 & 0xfffffffffffffff8));
        fVar24 = fVar18 + fVar22 + fVar24 + fVar20 + fVar19 + fVar23 + fVar17 + fVar21;
      }
      for (; pfVar11 != pfVar10; pfVar11 = pfVar11 + 1) {
        fVar24 = fVar24 + *pfVar11;
      }
      if (fVar24 <= __real_3727c5ac) {
        local_68.DataPtr = param_2->DataPtr;
        local_68.ArrayNum = param_2->ArrayNum;
        local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
        local_58[0].DataPtr = param_1->DataPtr;
        local_58[0].ArrayNum = param_1->ArrayNum;
        local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
        BlendCurves(local_58,&local_68,param_3);
      }
      else {
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_c0[0] = 0;
        local_c0[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,&local_c8,local_c0,local_c0 + 1);
        if (0 < iVar2) {
          fVar24 = __real_3f800000 / fVar24;
          uVar16 = uVar14;
          do {
            uVar13 = (uint)uVar14;
            uVar8 = 0;
            if ((int)uVar13 < param_2->ArrayNum) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar17 = *(float *)(uVar16 + (longlong)param_2->DataPtr);
            uVar8 = 0;
            if ((int)uVar13 < local_c0[0]) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar14 = (ulonglong)(uVar13 + 1);
            *(float *)(local_c8.Data + uVar16) = fVar24 * fVar17;
            uVar16 = uVar16 + 4;
          } while ((int)(uVar13 + 1) < param_2->ArrayNum);
        }
        iVar2 = local_c0[0];
        local_b8 = local_c8.Data;
        if ((local_c0[0] < 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_78.DataPtr = param_1->DataPtr;
        local_78.ArrayNum = param_1->ArrayNum;
        local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
        iStack_b0 = iVar2;
        local_88._12_4_ = uStack_ac;
        local_88.ArrayNum = iVar2;
        local_88.DataPtr = (float *)local_b8;
        BlendCurves(&local_78,&local_88,param_3);
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
      }
    }
    else if (param_4 == UseMaxValue) {
      if ((param_2->ArrayNum < 1) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar24 = *param_2->DataPtr;
      ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,0);
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                 (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,fVar24
                );
      iVar2 = param_1->ArrayNum;
      iVar15 = 1;
      if (1 < iVar2) {
        do {
          ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,iVar15);
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::UseMaxValue<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                     (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,
                     local_res8);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar2);
      }
    }
    else if (param_4 == UseMinValue) {
      pfVar10 = TArrayView<float_const_,int>::operator[](param_2,0);
      fVar24 = *pfVar10;
      ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,0);
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                 (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,fVar24
                );
      iVar15 = 1;
      if (1 < iVar2) {
        do {
          ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,iVar15);
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::UseMinValue<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                     (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,
                     local_res8);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar2);
      }
    }
    else if (param_4 == UseBasePose) {
      pfVar10 = TArrayView<float_const_,int>::operator[](param_2,0);
      fVar24 = *pfVar10;
      ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,0);
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                 (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,fVar24
                );
    }
    else if (param_4 == DoNotOverride) {
      pfVar10 = TArrayView<float_const_,int>::operator[](param_2,0);
      fVar24 = *pfVar10;
      ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,0);
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                 (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,fVar24
                );
      iVar15 = 1;
      if (1 < iVar2) {
        do {
          ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,iVar15);
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::CombinePreserved<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                     (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,
                     local_res8);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar2);
      }
    }
    else {
      pfVar10 = TArrayView<float_const_,int>::operator[](param_2,0);
      fVar24 = *pfVar10;
      ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,0);
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                 (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,fVar24
                );
      iVar15 = 1;
      if (1 < iVar2) {
        do {
          ppFVar9 = TArrayView<FBlendedCurve_const_*_const,int>::operator[](param_1,iVar15);
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                     (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)*ppFVar9,
                     local_res8);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar2);
      }
    }
  }
  return;
}

// DecompressPose @ 1473f5ec0

void __cdecl
DecompressPose(FCompactPose *param_1,FCompressedAnimSequence *param_2,FAnimExtractContext *param_3,
              USkeleton *param_4,float param_5,EAnimInterpolationType param_6,bool param_7,
              TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_8,
              FName param_9,FRootMotionReset *param_10)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FAnimSequenceDecompressionContext local_78;
  
  pTVar3 = USkeleton::GetRefLocalPoses(param_4,(FName)0x0);
  local_78.CompressedAnimData = (param_2->CompressedDataStructure).Ptr;
  local_78.SequenceLength = param_5;
  local_78.Interpolation = param_6;
  local_78.AnimName = param_9;
  local_78.Time = 0.0;
  local_78.RelativePos = 0.0;
  local_78.RefPoses.ArrayNum = pTVar3->ArrayNum;
  local_78.RefPoses.DataPtr = (TTransform<double> *)(pTVar3->AllocatorInstance).Data;
  if (local_78.RefPoses.ArrayNum < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78.TrackToSkeletonMap.DataPtr =
       (FTrackToSkeletonMap *)(param_2->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data;
  local_78.TrackToSkeletonMap.ArrayNum = (param_2->CompressedTrackToSkeletonMapTable).ArrayNum;
  if (local_78.TrackToSkeletonMap.ArrayNum < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78.SamplingRate.Numerator = 60000;
  local_78.SamplingRate.Denominator = 1;
  local_78.SamplingTime.FrameNumber.Value = 0;
  local_78.SamplingTime.SubFrame = 0.0;
  local_78.NumberOfFrames = 0;
  local_78.SourceSkeleton = (USkeleton *)0x0;
  local_78.AdditiveType = AAT_None;
  local_78.bAdditiveAnimation = false;
  UE::Anim::Decompression::DecompressPose(param_1,param_2,param_3,&local_78,param_8,param_10);
  return;
}

// DecompressPose @ 1473f6020

void __cdecl
DecompressPose(FCompactPose *param_1,FCompressedAnimSequence *param_2,FAnimExtractContext *param_3,
              USkeleton *param_4,float param_5,EAnimInterpolationType param_6,bool param_7,
              FName param_8,FName param_9,FRootMotionReset *param_10)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FAnimSequenceDecompressionContext local_88;
  
  pTVar3 = USkeleton::GetRefLocalPoses(param_4,param_8);
  pTVar4 = USkeleton::GetRefLocalPoses(param_4,(FName)0x0);
  local_88.Interpolation = param_6;
  local_88.AnimName = param_9;
  local_88.CompressedAnimData = (param_2->CompressedDataStructure).Ptr;
  local_88.SequenceLength = param_5;
  local_88.Time = 0.0;
  local_88.RelativePos = 0.0;
  local_88.RefPoses.ArrayNum = pTVar4->ArrayNum;
  local_88.RefPoses.DataPtr = (TTransform<double> *)(pTVar4->AllocatorInstance).Data;
  if (local_88.RefPoses.ArrayNum < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88.TrackToSkeletonMap.DataPtr =
       (FTrackToSkeletonMap *)(param_2->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data;
  local_88.TrackToSkeletonMap.ArrayNum = (param_2->CompressedTrackToSkeletonMapTable).ArrayNum;
  if (local_88.TrackToSkeletonMap.ArrayNum < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88.SamplingRate.Numerator = 60000;
  local_88.SamplingRate.Denominator = 1;
  local_88.SamplingTime.FrameNumber.Value = 0;
  local_88.SamplingTime.SubFrame = 0.0;
  local_88.NumberOfFrames = 0;
  local_88.SourceSkeleton = (USkeleton *)0x0;
  local_88.AdditiveType = AAT_None;
  local_88.bAdditiveAnimation = false;
  UE::Anim::Decompression::DecompressPose(param_1,param_2,param_3,&local_88,pTVar3,param_10);
  return;
}

// EmptyLinkFunctionForGeneratedCodeActiveStateMachineScope @ 1473f9980

void __cdecl EmptyLinkFunctionForGeneratedCodeActiveStateMachineScope(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace1D @ 1473f9990

void __cdecl EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace1D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace @ 1473f99a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAlphaBlend @ 1473f99b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAlphaBlend(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAmbientSound @ 1473f99c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAmbientSound(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimBank @ 1473f99d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimBank(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimBlueprintGeneratedClass @ 1473f99e0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimBlueprintGeneratedClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec @ 1473f99f0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionSettings @ 1473f9a00

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimClassInterface @ 1473f9a10

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimClassInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimComposite @ 1473f9a20

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimComposite(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCompositeBase @ 1473f9a30

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompositeBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCompress @ 1473f9a40

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompress(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimCompressionTypes @ 1473f9a50

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCompressionTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationAsset @ 1473f9a60

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationRecordingSettings @ 1473f9a70

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationRecordingSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationSettings @ 1473f9a80

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationSettings(void)

{
  return;
}

// EnsureDependenciesAreLoaded @ 1473f9c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl EnsureDependenciesAreLoaded(UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  UObjectBaseUtility *this;
  int iVar2;
  FReferenceFinder *pFVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_d0;
  FString local_c0;
  FString local_b0;
  FReferenceFinder local_98;
  ulonglong local_18;
  
  if (param_1 != (UObject *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
    if (((*(uint *)&param_1->field_0x8 >> 10 & 1) != 0) && (2 < (byte)LogAnimationCompression._0_1_)
       ) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_c0,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    UObject::ConditionalPreload(param_1);
    if ((*(uint *)&param_1->field_0x8 >> 0xc & 1) != 0) {
      if (2 < (byte)LogAnimationCompression._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_c0,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      UObject::ConditionalPostLoad(param_1);
    }
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    pFVar3 = FReferenceFinder::FReferenceFinder(&local_98,&local_d0,param_1,false,true,true,true);
    (**(code **)(pFVar3->_padding_ + 0xa0))(pFVar3,param_1,0,0);
    FReferenceFinder::~FReferenceFinder(&local_98);
    iVar2 = local_d0.ArrayNum;
    uVar4 = (ulonglong)local_d0.ArrayNum;
    pFVar1 = local_d0.AllocatorInstance.Data + uVar4 * 8;
    FVar5.Data = local_d0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_d8);
      }
      if (FVar5.Data == pFVar1) break;
      this = *(UObjectBaseUtility **)FVar5.Data;
      if (((*(uint *)&this->field_0x8 >> 10 & 1) != 0) && (2 < (byte)LogAnimationCompression._0_1_))
      {
        UObjectBaseUtility::GetPathName(this,&local_c0,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      UObject::ConditionalPreload((UObject *)this);
      if ((*(uint *)&this->field_0x8 >> 0xc & 1) != 0) {
        if (2 < (byte)LogAnimationCompression._0_1_) {
          UObjectBaseUtility::GetPathName(this,&local_b0,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>
                    (&LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        UObject::ConditionalPostLoad((UObject *)this);
      }
      uVar4 = local_d0._8_8_ & 0xffffffff;
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
  }
  return;
}

// GetAverageFPS @ 147400250

float __cdecl EngineAnalyticsProperties::GetAverageFPS(void)

{
  return GAverageFPS;
}

// GetDefaultAnimationCompressionSettings @ 147401860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl GetDefaultAnimationCompressionSettings(wchar_t *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  FConfigSection *this;
  FName *pFVar5;
  FConfigValue *pFVar6;
  TStringView<wchar_t> *pTVar7;
  size_t sVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FUObjectItem *this_00;
  int iVar11;
  UObject *pUVar12;
  longlong lVar13;
  FName local_res18;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  pUVar12 = (UObject *)0x0;
  iVar11 = 0;
  local_res18.ComparisonIndex.Value = 0;
  this = FConfigCacheIni::GetSection(GConfig,L"Animation.DefaultObjectSettings",false,&GEngineIni);
  if (this == (FConfigSection *)0x0) {
LAB_147401ac8:
    if (param_2) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    else if (2 < (byte)LogAnimationCompression._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    return (UObject *)0x0;
  }
  pFVar5 = FName::FName(&local_res18,param_1);
  pFVar6 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)this,*pFVar5);
  if (pFVar6 == (FConfigValue *)0x0) goto LAB_147401ac8;
  if (pFVar6->bExpandOnDemand == false) {
    iVar1 = (pFVar6->SavedValue).Data.ArrayNum;
    pFVar2 = (pFVar6->SavedValue).Data.AllocatorInstance.Data;
    local_38.DataPtr = (wchar_t *)0x0;
    local_38.Size = iVar1;
    if (iVar1 == 0) {
      local_38.Size = 0;
      local_38._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,(int *)&local_38.field_0xc);
      memcpy(local_38.DataPtr,pFVar2,(longlong)iVar1 * 2);
    }
    pTVar7 = &local_38;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    pTVar7 = (TStringView<wchar_t> *)
             FConfigValue::ExpandValue((FString *)&local_28,&pFVar6->SavedValue);
    bVar4 = true;
    bVar3 = false;
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = pTVar7->Size;
  lVar13 = (longlong)local_40;
  pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar7->DataPtr)->AllocatorInstance).
           Data;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pFVar2,lVar13 * 2);
  }
  if ((bVar3) && (local_38.DataPtr != (wchar_t *)0x0)) {
    FMemory::Free(local_38.DataPtr);
  }
  if ((bVar4) && (local_28.DataPtr != (wchar_t *)0x0)) {
    FMemory::Free(local_28.DataPtr);
  }
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  if (local_40 == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)local_48.Data;
    if (local_48.Data == (FScriptContainerElement *)0x0) goto LAB_1474019f9;
  }
  sVar8 = wcslen(local_28.DataPtr);
  iVar11 = (int)sVar8;
LAB_1474019f9:
  local_28.Size = iVar11;
  pUVar9 = Z_Construct_UClass_UObject_NoRegister();
  pUVar10 = StaticLoadObject(pUVar9,(UObject *)0x0,&local_28,&local_38,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  if (pUVar10 == (UObject *)0x0) {
    pUVar10 = pUVar12;
    if (param_2) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    else if (2 < (byte)LogAnimationCompression._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
  }
  else {
    EnsureDependenciesAreLoaded(pUVar10);
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar10->field_0xc);
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  if (local_48.Data == (FScriptContainerElement *)0x0) {
    return pUVar10;
  }
  FMemory::Free(local_48.Data);
  return pUVar10;
}

// GetEngineTickCount @ 147401d90

ulong64 __cdecl EngineAnalyticsProperties::GetEngineTickCount(void)

{
  return GFrameCounter;
}

// GetProjectName @ 147403eb0

FString * __cdecl
EngineAnalyticsProperties::GetProjectName
          (FString *__return_storage_ptr__,UGeneralProjectSettings *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  FString local_28;
  
  ::FString::FString(__return_storage_ptr__,GInternalProjectName);
  iVar5 = (__return_storage_ptr__->Data).ArrayNum;
  iVar2 = 0;
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = iVar2;
  }
  if (iVar3 == 0) {
LAB_147404008:
    if ((iVar5 < 2) && (__return_storage_ptr__ != &param_1->ProjectName)) {
      iVar5 = (param_1->ProjectName).Data.ArrayNum;
      piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
      pFVar7 = (param_1->ProjectName).Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = iVar5;
      if ((iVar5 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,*piVar1,(ForAnyElementType *)__return_storage_ptr__,iVar5,piVar1);
        if (iVar5 != 0) {
          memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,pFVar7,(longlong)iVar5 * 2);
        }
      }
    }
    return __return_storage_ptr__;
  }
  iVar3 = (param_1->ProjectName).Data.ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = iVar2;
  }
  if (iVar4 == 0) goto LAB_147404008;
  if (iVar3 == iVar5) {
    if (iVar3 < 2) {
      return __return_storage_ptr__;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->ProjectName).Data.AllocatorInstance.Data,
                       (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
    bVar8 = iVar5 == 0;
  }
  else {
    bVar8 = iVar5 + iVar3 == 1;
  }
  if (bVar8) {
    return __return_storage_ptr__;
  }
  iVar5 = (param_1->ProjectName).Data.ArrayNum;
  iVar3 = (__return_storage_ptr__->Data).ArrayNum;
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = iVar2;
  }
  local_28.Data.ArrayNum = iVar3;
  if ((iVar3 == 0) && (iVar4 != -1)) {
    pFVar7 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    iVar5 = iVar4 + 2;
LAB_147403f80:
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar5 == 0) {
      local_28.Data.ArrayMax = 0;
      goto LAB_147403fd6;
    }
  }
  else {
    pFVar7 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    iVar5 = iVar4 + 1;
    if (iVar3 == 0) goto LAB_147403f80;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar6 = iVar3 + iVar5;
  if ((int)uVar6 < iVar3) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar6,0,(ForAnyElementType *)&local_28,iVar3,&local_28.Data.ArrayMax);
  if (iVar3 != 0) {
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar7,(longlong)iVar3 * 2);
  }
LAB_147403fd6:
  ::FString::PathAppend
            (&local_28,(wchar_t *)(param_1->ProjectName).Data.AllocatorInstance.Data,iVar4);
  ::FString::operator=(__return_storage_ptr__,&local_28);
  if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_28.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetTypeHash @ 147405a10

uint __cdecl GetTypeHash(FAnimBankItem *param_1)

{
  UAnimBank *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1->SequenceIndex;
  pUVar1 = (param_1->BankAsset).field0_0x0.DebugPtr;
  uVar2 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar4 = (uVar2 >> 0x10 ^ uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  return (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 147405ad0

uint __cdecl GetTypeHash(FSoftAnimBankItem *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_1->SequenceIndex;
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UAnimBank::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_147405b0f;
  }
  pUVar2 = (UObject *)0x0;
LAB_147405b0f:
  uVar4 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar7 = (uVar4 >> 0x10 ^ uVar4) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar6 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar5 = (uVar4 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar4 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar6 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  return (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf;
}

// GetUserActivityString @ 147405cb0

FString * __cdecl
EngineAnalyticsProperties::GetUserActivityString
          (FString *__return_storage_ptr__,FUserActivity *param_1)

{
  FString *pFVar1;
  
  pFVar1 = &UnknownUserActivity;
  if (1 < (param_1->ActionName).Data.ArrayNum) {
    pFVar1 = &param_1->ActionName;
  }
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// IsCrcExecutableMissing @ 1474077f0

bool __cdecl EngineAnalyticsProperties::IsCrcExecutableMissing(void)

{
  int iVar1;
  char cVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  IFileManager *pIVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_18;
  
  pwVar3 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_58,pwVar3);
  pwVar3 = FWindowsPlatformProcess::GetBinariesSubdirectory();
  iVar1 = local_58.Data.ArrayNum;
  FVar6.Data = local_58.Data.AllocatorInstance.Data;
  local_68.ArrayNum = local_58.Data.ArrayNum;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar10 = (10 - (uint)(local_58.Data.ArrayNum != 0)) + local_58.Data.ArrayNum;
  if ((int)uVar10 < local_58.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  iVar9 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10,0,&local_68.AllocatorInstance,local_58.Data.ArrayNum,&local_68.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_68.AllocatorInstance.Data,FVar6.Data,(longlong)iVar1 * 2);
  }
  ::FString::PathAppend((FString *)&local_68,L"Binaries",8);
  sVar4 = wcslen(pwVar3);
  iVar1 = (int)sVar4;
  if ((local_68.ArrayNum != 0) || (iVar8 = 2, iVar1 == -1)) {
    iVar8 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,&local_68,iVar8 + iVar1);
  ::FString::PathAppend((FString *)&local_48,pwVar3,iVar1);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_18,&local_48,0x1d - (uint)(local_48.ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_18,L"CrashReportClientEditor.exe",0x1b);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  pwVar3 = FWindowsPlatformProcess::GetBinariesSubdirectory();
  iVar1 = local_58.Data.ArrayNum;
  FVar6.Data = local_58.Data.AllocatorInstance.Data;
  local_68.ArrayNum = local_58.Data.ArrayNum;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar10 = (10 - (uint)(local_58.Data.ArrayNum != 0)) + local_58.Data.ArrayNum;
  if ((int)uVar10 < local_58.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  iVar8 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10,0,&local_68.AllocatorInstance,local_58.Data.ArrayNum,&local_68.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_68.AllocatorInstance.Data,FVar6.Data,(longlong)iVar1 * 2);
  }
  ::FString::PathAppend((FString *)&local_68,L"Binaries",8);
  sVar4 = wcslen(pwVar3);
  iVar1 = (int)sVar4;
  if ((local_68.ArrayNum != 0) || (iVar1 == -1)) {
    iVar8 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,&local_68,iVar1 + iVar8);
  ::FString::PathAppend((FString *)&local_48,pwVar3,iVar1);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,&local_48,0x2f - (uint)(local_48.ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_28,L"CrashReportClientEditor-Win64-Development.exe",0x2d);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  pwVar3 = FWindowsPlatformProcess::GetBinariesSubdirectory();
  FVar6.Data = local_58.Data.AllocatorInstance.Data;
  local_68.ArrayNum = local_58.Data.ArrayNum;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar10 = (10 - (uint)(local_58.Data.ArrayNum != 0)) + local_58.Data.ArrayNum;
  if ((int)uVar10 < local_58.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10,0,&local_68.AllocatorInstance,local_58.Data.ArrayNum,&local_68.ArrayMax);
  if (local_58.Data.ArrayNum != 0) {
    memcpy(local_68.AllocatorInstance.Data,FVar6.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  ::FString::PathAppend((FString *)&local_68,L"Binaries",8);
  sVar4 = wcslen(pwVar3);
  iVar1 = (int)sVar4;
  if ((local_68.ArrayNum != 0) || (iVar1 == -1)) {
    iVar9 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,&local_68,iVar1 + iVar9);
  ::FString::PathAppend((FString *)&local_48,pwVar3,iVar1);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,&local_48,0x29 - (uint)(local_48.ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_38,L"CrashReportClientEditor-Win64-Debug.exe",0x27);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  pIVar5 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.ArrayNum != 0) {
    FVar6.Data = local_18.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,FVar6.Data);
  if (cVar2 == '\0') {
    pIVar5 = IFileManager::Get();
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.ArrayNum != 0) {
      FVar6.Data = local_28.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,FVar6.Data);
    if (cVar2 == '\0') {
      pIVar5 = IFileManager::Get();
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_38.ArrayNum != 0) {
        FVar6.Data = local_38.AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,FVar6.Data);
      if (cVar2 == '\0') {
        bVar7 = true;
        goto LAB_147407bb6;
      }
    }
  }
  bVar7 = false;
LAB_147407bb6:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// ShouldOverwriteShutdownType @ 147419970

bool __cdecl EngineAnalyticsProperties::ShouldOverwriteShutdownType(int *param_1,int *param_2)

{
  if (*param_2 != 3) {
    if (*param_1 == 3) {
      return false;
    }
    if (*param_2 != 2) {
      return *param_1 != 2;
    }
  }
  return true;
}

// ValidateUObjectLoaded @ 14741c000

void __cdecl ValidateUObjectLoaded(UObject *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  if ((*(uint *)&param_1->field_0x8 >> 10 & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_18,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None);
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!Obj->HasAnyFlags(RF_NeedLoad)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                       ,0x4c9,L"Failed to load %s in %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValuePtrToContainerUObjectPtr @ 14741c0d0

UObject * __cdecl ValuePtrToContainerUObjectPtr(FProperty *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  ulonglong uVar5;
  UObjectBase *this;
  ulonglong uVar6;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if ((param_1->ArrayDim <= param_3) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex < Property->ArrayDim",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimClassInterface.cpp"
                         ,0x81,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if ((param_2 == (void *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("ValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimClassInterface.cpp"
                         ,0x82,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  this = (UObjectBase *)
         ((longlong)param_2 - (longlong)(param_3 * param_1->ElementSize + param_1->Offset_Internal))
  ;
  bVar2 = UObjectBase::IsValidLowLevel(this);
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("((const UObject*)ContainerPtr)->IsValidLowLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimClassInterface.cpp"
                         ,0x86,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if (((this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("((const UObject*)ContainerPtr)->GetClass() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimClassInterface.cpp"
                         ,0x87,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&param_1->_padding_,pUVar4);
  if (((!bVar2) || ((param_1->_padding_ & 0xfffffffffffffffeU) == 0)) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Property->GetOwner<UClass>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimClassInterface.cpp"
                         ,0x88,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&param_1->_padding_,pUVar4);
  uVar6 = 0;
  uVar5 = uVar6;
  if (bVar2) {
    uVar5 = param_1->_padding_ & 0xfffffffffffffffe;
  }
  pUVar4 = (this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
  if (((int)pUVar4->_padding_ < *(int *)(uVar5 + 0x38)) ||
     (*(longlong *)(pUVar4->_padding_ + (longlong)*(int *)(uVar5 + 0x38) * 8) != uVar5 + 0x30)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&param_1->_padding_,pUVar4);
    if (bVar2) {
      uVar6 = param_1->_padding_ & 0xfffffffffffffffe;
    }
    local_res8 = *(FName *)(uVar6 + 0x18);
    FName::ToString(&local_res8,&local_40);
    bVar2 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar2) {
      FName::ToString((FName *)&param_1->_padding_,&local_70);
    }
    else {
      FString::FString(&local_70,L"None");
    }
    local_res10 = (FName)((this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr)->_padding_;
    FName::ToString(&local_res10,&local_50);
    local_res20 = (this->NamePrivate).Name;
    FName::ToString(&local_res20,&local_60);
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("((const UObject*)ContainerPtr)->IsA(Property->GetOwner<UClass>())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimClassInterface.cpp"
                       ,0x8f,
                       L"\'%s\' is of class \'%s\' however property \'%s\' belongs to class \'%s\'")
    ;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  return (UObject *)this;
}

// Z_Construct_UClass_AAmbientSound_NoRegister @ 14741c3b0

UClass * __cdecl Z_Construct_UClass_AAmbientSound_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAmbientSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AmbientSound",
               &Z_Registration_Info_UClass_AAmbientSound.InnerSingleton,
               AAmbientSound::StaticRegisterNativesAAmbientSound,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AAmbientSound>,InternalVTableHelperCtorCaller<AAmbientSound>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAmbientSound.InnerSingleton;
}

// Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister @ 14741c470

UClass * __cdecl Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AimOffsetBlendSpace1D",
               &Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton,
               UAimOffsetBlendSpace1D::StaticRegisterNativesUAimOffsetBlendSpace1D,0x1c8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAimOffsetBlendSpace1D>,
               InternalVTableHelperCtorCaller<UAimOffsetBlendSpace1D>,local_res8,
               UBlendSpace1D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton;
}

// Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister @ 14741c530

UClass * __cdecl Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AimOffsetBlendSpace",
               &Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton,
               UAimOffsetBlendSpace::StaticRegisterNativesUAimOffsetBlendSpace,0x1c0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAimOffsetBlendSpace>,
               InternalVTableHelperCtorCaller<UAimOffsetBlendSpace>,local_res8,
               UBlendSpace::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton;
}

// Z_Construct_UClass_UAnimBankData_NoRegister @ 14741c5f0

UClass * __cdecl Z_Construct_UClass_UAnimBankData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBankData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBankData",
               &Z_Registration_Info_UClass_UAnimBankData.InnerSingleton,
               UAnimBankData::StaticRegisterNativesUAnimBankData,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBankData>,
               InternalVTableHelperCtorCaller<UAnimBankData>,local_res8,
               UTransformProviderData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBankData.InnerSingleton;
}

// Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister @ 14741c6b0

UClass * __cdecl Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton,
               UAnimBlueprintGeneratedClass::StaticRegisterNativesUAnimBlueprintGeneratedClass,0x5d8
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton;
}

// Z_Construct_UClass_UAnimBlueprintGeneratedStruct_NoRegister @ 14741c770

UClass * __cdecl Z_Construct_UClass_UAnimBlueprintGeneratedStruct_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprintGeneratedStruct",
               &Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton,
               UAnimBlueprintGeneratedStruct::StaticRegisterNativesUAnimBlueprintGeneratedStruct,
               0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBlueprintGeneratedStruct>,
               InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedStruct>,local_res8,
               UScriptStruct::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton;
}

// Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister @ 14741c830

UClass * __cdecl Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBoneCompressionSettings",
               &Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton,
               UAnimBoneCompressionSettings::StaticRegisterNativesUAnimBoneCompressionSettings,0x38,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBoneCompressionSettings>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionSettings.InnerSingleton;
}

// Z_Construct_UClass_UAnimClassInterface_NoRegister @ 14741c8e0

UClass * __cdecl Z_Construct_UClass_UAnimClassInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimClassInterface",
               &Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton,
               UAnimClassInterface::StaticRegisterNativesUAnimClassInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimClassInterface>,
               InternalVTableHelperCtorCaller<UAnimClassInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton;
}

// Z_Construct_UClass_UAnimCompositeBase_NoRegister @ 14741c9a0

UClass * __cdecl Z_Construct_UClass_UAnimCompositeBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompositeBase",
               &Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton,
               UAnimCompositeBase::StaticRegisterNativesUAnimCompositeBase,0xb8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCompositeBase>,
               InternalVTableHelperCtorCaller<UAnimCompositeBase>,local_res8,
               UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompositeBase.InnerSingleton;
}

// Z_Construct_UClass_UAnimComposite_NoRegister @ 14741ca60

UClass * __cdecl Z_Construct_UClass_UAnimComposite_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimComposite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimComposite",
               &Z_Registration_Info_UClass_UAnimComposite.InnerSingleton,
               UAnimComposite::StaticRegisterNativesUAnimComposite,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimComposite>,
               InternalVTableHelperCtorCaller<UAnimComposite>,local_res8,
               UAnimCompositeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimComposite.InnerSingleton;
}

// Z_Construct_UClass_UAnimCompress_NoRegister @ 14741cb20

UClass * __cdecl Z_Construct_UClass_UAnimCompress_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress",
               &Z_Registration_Info_UClass_UAnimCompress.InnerSingleton,
               UAnimCompress::StaticRegisterNativesUAnimCompress,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCompress>,InternalVTableHelperCtorCaller<UAnimCompress>,
               local_res8,UAnimBoneCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress.InnerSingleton;
}

// Z_Construct_UClass_UAnimationSettings_NoRegister @ 14741cbe0

UClass * __cdecl Z_Construct_UClass_UAnimationSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationSettings",
               &Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton,
               UAnimationSettings::StaticRegisterNativesUAnimationSettings,0x148,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationSettings>,
               InternalVTableHelperCtorCaller<UAnimationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSettings.InnerSingleton;
}

// Z_Construct_UEnum_Engine_AnimationKeyFormat @ 14741cca0

UEnum * __cdecl Z_Construct_UEnum_Engine_AnimationKeyFormat(void)

{
  if (Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton,
               &Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAnimSyncGroupScope @ 14741cce0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimSyncGroupScope(void)

{
  if (Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAlphaBlend @ 14741cd20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAlphaBlend(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAlphaBlend.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAlphaBlend.InnerSingleton,
               &Z_Construct_UScriptStruct_FAlphaBlend_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAlphaBlend.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAlphaBlend.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAlphaBlendArgs @ 14741cda0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAlphaBlendArgs(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAlphaBlendArgs.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAlphaBlendArgs.InnerSingleton,
               &Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAlphaBlendArgs.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAlphaBlendArgs.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimBankSequence @ 14741ce20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimBankSequence(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimBankSequence.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimBankSequence.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimBankSequence_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimBankSequence.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimBankSequence.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimBlueprintConstantData @ 14741cea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimBlueprintConstantData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintConstantData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimBlueprintConstantData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintConstantData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimBlueprintConstantData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimBlueprintDebugData @ 14741cf20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimBlueprintDebugData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintDebugData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimBlueprintDebugData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintDebugData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimBlueprintDebugData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimBlueprintFunction @ 14741cfa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimBlueprintFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintFunction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimBlueprintFunction.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintFunction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimBlueprintFunction.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimBlueprintMutableData @ 14741d020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimBlueprintMutableData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName @ 14741d0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimCompressedCurveIndexedName.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimCompressedCurveIndexedName.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimCompressedCurveIndexedName.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimCompressedCurveIndexedName.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimGroupInstance @ 14741d120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimGroupInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimGroupInstance.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimGroupInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimGroupInstance.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimGroupInstance.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimTickRecord @ 14741d1a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimTickRecord(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimTickRecord.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimTickRecord.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimTickRecord_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimTickRecord.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimTickRecord.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationErrorStats @ 14741d220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationErrorStats(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationErrorStats.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationErrorStats.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationErrorStats.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimationErrorStats.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationFrameSnapshot @ 14741d2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationFrameSnapshot(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationFrameSnapshot.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationFrameSnapshot.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationFrameSnapshot.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationFrameSnapshot.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationGroupReference @ 14741d320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationGroupReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationGroupReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationGroupReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationGroupReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationGroupReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationRecordingSettings @ 14741d3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationRecordingSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationRecordingSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationRecordingSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationRecordingSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationRecordingSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationRecordingSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendFilter @ 14741d420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendFilter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendFilter.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendFilter.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendFilter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendFilter.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendFilter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendSampleData @ 14741d4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendSampleData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendSampleData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendSampleData.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendSampleData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendSampleData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendSampleData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEncounteredStateMachineStack @ 14741d520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEncounteredStateMachineStack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEncounteredStateMachineStack.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEncounteredStateMachineStack.InnerSingleton,
               &Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEncounteredStateMachineStack.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEncounteredStateMachineStack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMarkerSyncAnimPosition @ 14741d5a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMarkerSyncAnimPosition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMarkerSyncAnimPosition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMarkerSyncAnimPosition.InnerSingleton,
               &Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMarkerSyncAnimPosition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMarkerSyncAnimPosition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRootMotionExtractionStep @ 14741d620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRootMotionExtractionStep(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionExtractionStep.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRootMotionExtractionStep.InnerSingleton,
               &Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRootMotionExtractionStep.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRootMotionExtractionStep.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRootMotionMovementParams @ 14741d6a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRootMotionMovementParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionMovementParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRootMotionMovementParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRootMotionMovementParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRootMotionMovementParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptor @ 14741d720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.InnerSingleton,
               &Z_Construct_UScriptStruct_FSkinnedMeshComponentDescriptor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSkinnedMeshComponentDescriptor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoftAnimBankItem @ 14741d7a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoftAnimBankItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoftAnimBankItem.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoftAnimBankItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoftAnimBankItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoftAnimBankItem.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoftAnimBankItem.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoftSkinnedMeshComponentDescriptor @ 14741d820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoftSkinnedMeshComponentDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.InnerSingleton
               ,&Z_Construct_UScriptStruct_FSoftSkinnedMeshComponentDescriptor_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoftSkinnedMeshComponentDescriptor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateMachineDebugData @ 14741d8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateMachineDebugData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateMachineDebugData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateMachineDebugData.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateMachineDebugData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateMachineDebugData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateMachineStateDebugData @ 14741d920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateMachineStateDebugData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateMachineStateDebugData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateMachineStateDebugData.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateMachineStateDebugData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateMachineStateDebugData.InnerSingleton;
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

// GetTransformFromArray @ 14741e1a0

uchar * __cdecl GetTransformFromArray(uchar *param_1,int param_2,int param_3)

{
  FCompactPose *this;
  TTransform<double> *pTVar1;
  FCompactPoseBoneIndex local_res18 [4];
  
  this = TArrayView<FCompactPose_const_,int>::operator[]
                   ((TArrayView<FCompactPose_const_,int> *)param_1,param_2);
  local_res18[0] = (FCompactPoseBoneIndex)param_3;
  pTVar1 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                     ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,local_res18);
  return (uchar *)pTVar1;
}

// DefaultMarkerNames'' @ 1503e6250

void __cdecl `dynamic_atexit_destructor_for_'FMarkerTickContext::DefaultMarkerNames__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FMarkerTickContext::DefaultMarkerNames.AllocatorInstance.Data;
  if (FMarkerTickContext::DefaultMarkerNames.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FMarkerTickContext::DefaultMarkerNames.AllocatorInstance.Data !=
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

// Null'' @ 1503e6270

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer(&UE::DerivedData::FValue::Null.Data.CompressedData);
  return;
}

// Null'' @ 1503e6290

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer
            ((FCompositeBuffer *)&UE::DerivedData::FValueWithId::Null._padding_);
  return;
}

// `dynamic_atexit_destructor_for_'AverageFPS'' @ 1503e62b0

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__AverageFPS__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AverageFPS.Key.Data.AllocatorInstance.Data;
  if (AverageFPS.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AverageFPS.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarAccumulateLocalSpaceAdditivePose'' @ 1503e62d0

void __cdecl _dynamic_atexit_destructor_for__CVarAccumulateLocalSpaceAdditivePose__(void)

{
  CVarAccumulateLocalSpaceAdditivePose._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAccumulateLocalSpaceAdditivePose);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlendCurvesISPCEnabled'' @ 1503e62f0

void __cdecl _dynamic_atexit_destructor_for__CVarBlendCurvesISPCEnabled__(void)

{
  CVarBlendCurvesISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBlendCurvesISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlendPoseAccumulateISPCEnabled'' @ 1503e6310

void __cdecl _dynamic_atexit_destructor_for__CVarBlendPoseAccumulateISPCEnabled__(void)

{
  CVarBlendPoseAccumulateISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBlendPoseAccumulateISPCEnabled)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlendPoseOverwriteISPCEnabled'' @ 1503e6330

void __cdecl _dynamic_atexit_destructor_for__CVarBlendPoseOverwriteISPCEnabled__(void)

{
  CVarBlendPoseOverwriteISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBlendPoseOverwriteISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlendPosesPerBoneFilter'' @ 1503e6350

void __cdecl _dynamic_atexit_destructor_for__CVarBlendPosesPerBoneFilter__(void)

{
  CVarBlendPosesPerBoneFilter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBlendPosesPerBoneFilter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompressionJsonOutput'' @ 1503e6370

void __cdecl _dynamic_atexit_destructor_for__CVarCompressionJsonOutput__(void)

{
  CVarCompressionJsonOutput._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCompressionJsonOutput);
  return;
}

// `dynamic_atexit_destructor_for_'CVarConvertMeshRotationPoseToLocalSpace'' @ 1503e6390

void __cdecl _dynamic_atexit_destructor_for__CVarConvertMeshRotationPoseToLocalSpace__(void)

{
  CVarConvertMeshRotationPoseToLocalSpace._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarConvertMeshRotationPoseToLocalSpace);
  return;
}

// `dynamic_atexit_destructor_for_'CVarConvertPoseToAdditiveISPCEnabled'' @ 1503e63b0

void __cdecl _dynamic_atexit_destructor_for__CVarConvertPoseToAdditiveISPCEnabled__(void)

{
  CVarConvertPoseToAdditiveISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarConvertPoseToAdditiveISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarConvertPoseToMeshRotationISPCEnabled'' @ 1503e63d0

void __cdecl _dynamic_atexit_destructor_for__CVarConvertPoseToMeshRotationISPCEnabled__(void)

{
  CVarConvertPoseToMeshRotationISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarConvertPoseToMeshRotationISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLerpBoneTransformsISPCEnabled'' @ 1503e63f0

void __cdecl _dynamic_atexit_destructor_for__CVarLerpBoneTransformsISPCEnabled__(void)

{
  CVarLerpBoneTransformsISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLerpBoneTransformsISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMemoryForAnimBankAssetCompile'' @ 1503e6410

void __cdecl _dynamic_atexit_destructor_for__CVarMemoryForAnimBankAssetCompile__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMemoryForAnimBankAssetCompile);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRPCDoSAnalyticsMaxRPCs'' @ 1503e6430

void __cdecl _dynamic_atexit_destructor_for__CVarRPCDoSAnalyticsMaxRPCs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRPCDoSAnalyticsMaxRPCs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSpoofFailedAnimationChunkLoad'' @ 1503e6450

void __cdecl _dynamic_atexit_destructor_for__CVarSpoofFailedAnimationChunkLoad__(void)

{
  CVarSpoofFailedAnimationChunkLoad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSpoofFailedAnimationChunkLoad);
  return;
}

// `dynamic_atexit_destructor_for_'EZAttrib_AnalyticsSeverityCategory'' @ 1503e6470

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_AnalyticsSeverityCategory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_AnalyticsSeverityCategory.Data.AllocatorInstance.Data;
  if (EZAttrib_AnalyticsSeverityCategory.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_AnalyticsSeverityCategory.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_AnalyticsSeverityIndex'' @ 1503e6490

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_AnalyticsSeverityIndex__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_AnalyticsSeverityIndex.Data.AllocatorInstance.Data;
  if (EZAttrib_AnalyticsSeverityIndex.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (EZAttrib_AnalyticsSeverityIndex.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'EZAttrib_BlockedCount'' @ 1503e64b0

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_BlockedCount__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_BlockedCount.Data.AllocatorInstance.Data;
  if (EZAttrib_BlockedCount.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_BlockedCount.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_ClientCloseReasons'' @ 1503e64d0

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_ClientCloseReasons__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_ClientCloseReasons.Data.AllocatorInstance.Data;
  if (EZAttrib_ClientCloseReasons.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_ClientCloseReasons.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_CloseReasons'' @ 1503e64f0

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_CloseReasons__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_CloseReasons.Data.AllocatorInstance.Data;
  if (EZAttrib_CloseReasons.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_CloseReasons.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_Count'' @ 1503e6510

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_Count__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_Count.Data.AllocatorInstance.Data;
  if (EZAttrib_Count.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_Count.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_FailedPingICMP'' @ 1503e6530

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_FailedPingICMP__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_FailedPingICMP.Data.AllocatorInstance.Data;
  if (EZAttrib_FailedPingICMP.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_FailedPingICMP.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_FailedPingUDP'' @ 1503e6550

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_FailedPingUDP__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_FailedPingUDP.Data.AllocatorInstance.Data;
  if (EZAttrib_FailedPingUDP.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_FailedPingUDP.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_FilteredRPCs'' @ 1503e6570

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_FilteredRPCs__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_FilteredRPCs.Data.AllocatorInstance.Data;
  if (EZAttrib_FilteredRPCs.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_FilteredRPCs.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_FullClientCloseReasons'' @ 1503e6590

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_FullClientCloseReasons__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_FullClientCloseReasons.Data.AllocatorInstance.Data;
  if (EZAttrib_FullClientCloseReasons.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (EZAttrib_FullClientCloseReasons.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'EZAttrib_FullCloseReasons'' @ 1503e65b0

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_FullCloseReasons__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_FullCloseReasons.Data.AllocatorInstance.Data;
  if (EZAttrib_FullCloseReasons.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_FullCloseReasons.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_GameThreadCPU'' @ 1503e65d0

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_GameThreadCPU__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_GameThreadCPU.Data.AllocatorInstance.Data;
  if (EZAttrib_GameThreadCPU.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_GameThreadCPU.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_IP'' @ 1503e65f0

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_IP__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_IP.Data.AllocatorInstance.Data;
  if (EZAttrib_IP.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_IP.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxAnalyticsSeverityCategory'' @ 1503e6610

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxAnalyticsSeverityCategory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxAnalyticsSeverityIndex'' @ 1503e6630

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxAnalyticsSeverityIndex__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxAnalyticsSeverityIndex.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxAnalyticsSeverityIndex.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_MaxAnalyticsSeverityIndex.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxCountPerSec'' @ 1503e6650

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxCountPerSec__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxCountPerSec.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxCountPerSec.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_MaxCountPerSec.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxPlayerSeverity'' @ 1503e6670

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxPlayerSeverity__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxPlayerSeverity.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxPlayerSeverity.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_MaxPlayerSeverity.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxSeverityCategory'' @ 1503e6690

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxSeverityCategory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxSeverityCategory.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxSeverityCategory.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_MaxSeverityCategory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxSeverityIndex'' @ 1503e66b0

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxSeverityIndex__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxSeverityIndex.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxSeverityIndex.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_MaxSeverityIndex.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxSinglePacketRPCTime'' @ 1503e66d0

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxSinglePacketRPCTime__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxSinglePacketRPCTime.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxSinglePacketRPCTime.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (EZAttrib_MaxSinglePacketRPCTime.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxTimeGameThreadCPU'' @ 1503e66f0

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxTimeGameThreadCPU__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxTimeGameThreadCPU.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxTimeGameThreadCPU.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_MaxTimeGameThreadCPU.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_MaxTimePerSec'' @ 1503e6710

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_MaxTimePerSec__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_MaxTimePerSec.Data.AllocatorInstance.Data;
  if (EZAttrib_MaxTimePerSec.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_MaxTimePerSec.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutAckOnlyCount'' @ 1503e6730

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutAckOnlyCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutAckOnlyCount.Data.AllocatorInstance.Data;
  if (EZAttrib_OutAckOnlyCount.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutAckOnlyCount.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutKeepAliveCount'' @ 1503e6750

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutKeepAliveCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutKeepAliveCount.Data.AllocatorInstance.Data;
  if (EZAttrib_OutKeepAliveCount.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutKeepAliveCount.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutOfOrderPacketsDuplicateCount'' @ 1503e6770

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutOfOrderPacketsDuplicateCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutOfOrderPacketsDuplicateCount.Data.AllocatorInstance.Data;
  if (EZAttrib_OutOfOrderPacketsDuplicateCount.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutOfOrderPacketsDuplicateCount.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutOfOrderPacketsLostCount'' @ 1503e6790

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutOfOrderPacketsLostCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutOfOrderPacketsLostCount.Data.AllocatorInstance.Data;
  if (EZAttrib_OutOfOrderPacketsLostCount.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutOfOrderPacketsLostCount.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_OutOfOrderPacketsRecoveredCount'' @ 1503e67b0

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_OutOfOrderPacketsRecoveredCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_OutOfOrderPacketsRecoveredCount.Data.AllocatorInstance.Data;
  if (EZAttrib_OutOfOrderPacketsRecoveredCount.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_OutOfOrderPacketsRecoveredCount.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_PlayerIP'' @ 1503e67d0

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_PlayerIP__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_PlayerIP.Data.AllocatorInstance.Data;
  if (EZAttrib_PlayerIP.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_PlayerIP.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_PlayerIP'' @ 1503e67f0

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_PlayerIP__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_PlayerIP.Data.AllocatorInstance.Data;
  if (EZAttrib_PlayerIP.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_PlayerIP.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_PlayerUID'' @ 1503e6810

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_PlayerUID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_PlayerUID.Data.AllocatorInstance.Data;
  if (EZAttrib_PlayerUID.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_PlayerUID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_PlayerUID'' @ 1503e6830

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_PlayerUID__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_PlayerUID.Data.AllocatorInstance.Data;
  if (EZAttrib_PlayerUID.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_PlayerUID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_RPCGroup'' @ 1503e6850

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_RPCGroup__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_RPCGroup.Data.AllocatorInstance.Data;
  if (EZAttrib_RPCGroup.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_RPCGroup.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_RPCGroupTime'' @ 1503e6870

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_RPCGroupTime__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_RPCGroupTime.Data.AllocatorInstance.Data;
  if (EZAttrib_RPCGroupTime.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_RPCGroupTime.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_RPCName'' @ 1503e6890

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_RPCName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_RPCName.Data.AllocatorInstance.Data;
  if (EZAttrib_RPCName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_RPCName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_RPCs'' @ 1503e68b0

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_RPCs__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_RPCs.Data.AllocatorInstance.Data;
  if (EZAttrib_RPCs.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_RPCs.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_Reason'' @ 1503e68d0

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZAttrib_Reason__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_Reason.Data.AllocatorInstance.Data;
  if (EZAttrib_Reason.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_Reason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_RecoveredFaults'' @ 1503e68f0

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_RecoveredFaults__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_RecoveredFaults.Data.AllocatorInstance.Data;
  if (EZAttrib_RecoveredFaults.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_RecoveredFaults.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_SinglePacketGameThreadCPU'' @ 1503e6910

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_SinglePacketGameThreadCPU__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_SinglePacketGameThreadCPU.Data.AllocatorInstance.Data;
  if (EZAttrib_SinglePacketGameThreadCPU.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_SinglePacketGameThreadCPU.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'EZAttrib_SinglePacketRPCCount'' @ 1503e6930

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_SinglePacketRPCCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_SinglePacketRPCCount.Data.AllocatorInstance.Data;
  if (EZAttrib_SinglePacketRPCCount.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_SinglePacketRPCCount.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_WorstCountPerSec'' @ 1503e6950

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_WorstCountPerSec__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_WorstCountPerSec.Data.AllocatorInstance.Data;
  if (EZAttrib_WorstCountPerSec.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_WorstCountPerSec.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZAttrib_WorstTimePerSec'' @ 1503e6970

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZAttrib_WorstTimePerSec__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZAttrib_WorstTimePerSec.Data.AllocatorInstance.Data;
  if (EZAttrib_WorstTimePerSec.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZAttrib_WorstTimePerSec.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZEventName'' @ 1503e6990

void __cdecl
`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
_dynamic_atexit_destructor_for__EZEventName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZEventName.Data.AllocatorInstance.Data;
  if (EZEventName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZEventName'' @ 1503e69b0

void __cdecl
`FNetConnAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZEventName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZEventName.Data.AllocatorInstance.Data;
  if (EZEventName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EZEventName'' @ 1503e69d0

void __cdecl
`FRPCDoSAnalyticsData::SendAnalytics'::__l5::_dynamic_atexit_destructor_for__EZEventName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EZEventName.Data.AllocatorInstance.Data;
  if (EZEventName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EZEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EngineTickCount'' @ 1503e69f0

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__EngineTickCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EngineTickCount.Key.Data.AllocatorInstance.Data;
  if (EngineTickCount.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EngineTickCount.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GCompressionJsonOutput'' @ 1503e6a10

void __cdecl _dynamic_atexit_destructor_for__GCompressionJsonOutput__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GCompressionJsonOutput.Data.AllocatorInstance.Data;
  if (GCompressionJsonOutput.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GCompressionJsonOutput.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GModifyRPCDoSAnalytics'' @ 1503e6a30

void __cdecl _dynamic_atexit_destructor_for__GModifyRPCDoSAnalytics__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)GModifyRPCDoSAnalytics._8_8_,
             GModifyRPCDoSAnalytics._16_4_);
  if (GModifyRPCDoSAnalytics._8_8_ != 0) {
    FMemory::Free((void *)GModifyRPCDoSAnalytics._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&GModifyRPCDoSAnalytics);
  return;
}

// `dynamic_atexit_destructor_for_'GModifyRPCDoSEscalationAnalytics'' @ 1503e6a70

void __cdecl _dynamic_atexit_destructor_for__GModifyRPCDoSEscalationAnalytics__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             GModifyRPCDoSEscalationAnalytics._8_8_,GModifyRPCDoSEscalationAnalytics._16_4_);
  if (GModifyRPCDoSEscalationAnalytics._8_8_ != 0) {
    FMemory::Free((void *)GModifyRPCDoSEscalationAnalytics._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&GModifyRPCDoSEscalationAnalytics);
  return;
}

// `dynamic_atexit_destructor_for_'IsCrashing'' @ 1503e6ab0

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__IsCrashing__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IsCrashing.Key.Data.AllocatorInstance.Data;
  if (IsCrashing.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IsCrashing.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IsCrcMissing'' @ 1503e6ad0

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__IsCrcMissing__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IsCrcMissing.Key.Data.AllocatorInstance.Data;
  if (IsCrcMissing.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IsCrcMissing.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IsGpuCrash'' @ 1503e6af0

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__IsGpuCrash__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IsGpuCrash.Key.Data.AllocatorInstance.Data;
  if (IsGpuCrash.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IsGpuCrash.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IsLowDriveSpace'' @ 1503e6b10

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__IsLowDriveSpace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IsLowDriveSpace.Key.Data.AllocatorInstance.Data;
  if (IsLowDriveSpace.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IsLowDriveSpace.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IsTerminating'' @ 1503e6b30

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__IsTerminating__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IsTerminating.Key.Data.AllocatorInstance.Data;
  if (IsTerminating.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IsTerminating.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IsUserLoggingOut'' @ 1503e6b50

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__IsUserLoggingOut__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IsUserLoggingOut.Key.Data.AllocatorInstance.Data;
  if (IsUserLoggingOut.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IsUserLoggingOut.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IsVanilla'' @ 1503e6b70

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__IsVanilla__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IsVanilla.Key.Data.AllocatorInstance.Data;
  if (IsVanilla.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IsVanilla.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LastTickTimestamp'' @ 1503e6b90

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__LastTickTimestamp__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LastTickTimestamp.Key.Data.AllocatorInstance.Data;
  if (LastTickTimestamp.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LastTickTimestamp.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogAnimBank'' @ 1503e6bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimBank__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimBank);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimation'' @ 1503e6bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimation__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimation);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimationCompression'' @ 1503e6bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimationCompression__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimationCompression);
  return;
}

// `dynamic_atexit_destructor_for_'LogRootMotion'' @ 1503e6c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRootMotion__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRootMotion);
  return;
}

// `dynamic_atexit_destructor_for_'MonitorExitCode'' @ 1503e6c30

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__MonitorExitCode__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MonitorExitCode.Key.Data.AllocatorInstance.Data;
  if (MonitorExitCode.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MonitorExitCode.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RunningOnBattery'' @ 1503e6c50

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__RunningOnBattery__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RunningOnBattery.Key.Data.AllocatorInstance.Data;
  if (RunningOnBattery.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RunningOnBattery.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SessionDurationSecs'' @ 1503e6c70

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__SessionDurationSecs__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SessionDurationSecs.Key.Data.AllocatorInstance.Data;
  if (SessionDurationSecs.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SessionDurationSecs.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SessionTickCount'' @ 1503e6c90

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__SessionTickCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SessionTickCount.Key.Data.AllocatorInstance.Data;
  if (SessionTickCount.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SessionTickCount.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShutdownType'' @ 1503e6cb0

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__ShutdownType__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ShutdownType.Key.Data.AllocatorInstance.Data;
  if (ShutdownType.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ShutdownType.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Timestamp'' @ 1503e6cd0

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__Timestamp__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Timestamp.Key.Data.AllocatorInstance.Data;
  if (Timestamp.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Timestamp.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'UnknownUserActivity'' @ 1503e6cf0

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__UnknownUserActivity__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UnknownUserActivity.Data.AllocatorInstance.Data;
  if (UnknownUserActivity.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UnknownUserActivity.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'UserActivity'' @ 1503e6d10

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__UserActivity__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UserActivity.Key.Data.AllocatorInstance.Data;
  if (UserActivity.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UserActivity.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WasDebuggerIgnored'' @ 1503e6d30

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__WasDebuggerIgnored__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WasDebuggerIgnored.Key.Data.AllocatorInstance.Data;
  if (WasDebuggerIgnored.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WasDebuggerIgnored.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WasEverDebugged'' @ 1503e6d50

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__WasEverDebugged__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WasEverDebugged.Key.Data.AllocatorInstance.Data;
  if (WasEverDebugged.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WasEverDebugged.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WasShutdown'' @ 1503e6d70

void __cdecl EngineAnalyticsProperties::_dynamic_atexit_destructor_for__WasShutdown__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = WasShutdown.Key.Data.AllocatorInstance.Data;
  if (WasShutdown.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (WasShutdown.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

