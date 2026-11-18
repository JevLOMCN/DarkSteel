// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 585

// ProceduralRenderingSynchronizationQueues'' @ 141098c90

void __cdecl
`dynamic_initializer_for_'Audio::FSynchronizedProceduralDecodeHandle::
ProceduralRenderingSynchronizationQueues__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Audio::FSynchronizedProceduralDecodeHandle::
         ProceduralRenderingSynchronizationQueues__);
  return;
}

// SynchronizationQuequesLockCs'' @ 141098cb0

void __cdecl
`dynamic_initializer_for_'Audio::FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs__
          (void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &Audio::FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs,4000);
  atexit(`dynamic_atexit_destructor_for_'Audio::FSynchronizedProceduralDecodeHandle::
         SynchronizationQuequesLockCs__);
  return;
}

// `dynamic_initializer_for_'CVarAudioCommandExecTimeMsWarningThreshold'' @ 141098ce0

void __cdecl _dynamic_initializer_for__CVarAudioCommandExecTimeMsWarningThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioCommandExecTimeMsWarningThreshold,
             L"au.AudioThreadCommand.ExecutionTimeWarningThresholdInMs",
             &AudioCommandExecTimeMsWarningThresholdCvar,
             L"If a command took longer to execute than this number (in milliseconds) then we log a warning"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioCommandExecTimeMsWarningThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarAudioMixerPatchBufferBlocks'' @ 141098d30

void __cdecl _dynamic_initializer_for__CVarAudioMixerPatchBufferBlocks__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioMixerPatchBufferBlocks,L"au.PatchBufferBlocks",&AudioMixerPatchBufferBlocks,
             L"Determines the number of blocks that fit in a patch buffer.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioMixerPatchBufferBlocks__);
  return;
}

// `dynamic_initializer_for_'CVarAudioMixerPerSourceResampling'' @ 141098d80

void __cdecl _dynamic_initializer_for__CVarAudioMixerPerSourceResampling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioMixerPerSourceResampling,L"au.PerSourceResampling",&PerSourceResampling,
             L"Use new source rendering code path, with each source getting a dedicated resampler if needed.\n0: Disabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioMixerPerSourceResampling__);
  return;
}

// `dynamic_initializer_for_'CVarBypassAudioPlugins'' @ 141098dd0

void __cdecl _dynamic_initializer_for__CVarBypassAudioPlugins__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBypassAudioPlugins,L"au.BypassAudioPlugins",&BypassAudioPluginsCvar,
             L"Bypasses any audio plugin processing.\n0: Not Disabled, 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarBypassAudioPlugins__);
  return;
}

// `dynamic_initializer_for_'CVarCommandBufferFlushWaitTimeMs'' @ 141098e20

void __cdecl _dynamic_initializer_for__CVarCommandBufferFlushWaitTimeMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCommandBufferFlushWaitTimeMs,L"au.CommandBufferFlushWaitTimeMs",
             &CommandBufferFlushWaitTimeMsCvar,
             L"How long to wait for the command buffer flush to complete.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarCommandBufferFlushWaitTimeMs__);
  return;
}

// `dynamic_initializer_for_'CVarCommandBufferInitialCapacity'' @ 141098e70

void __cdecl _dynamic_initializer_for__CVarCommandBufferInitialCapacity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCommandBufferInitialCapacity,L"au.CommandBufferInitialCapacity",
             &CommandBufferInitialCapacityCvar,
             L"How many elements to initialize the command buffer capacity with",0);
  atexit(_dynamic_atexit_destructor_for__CVarCommandBufferInitialCapacity__);
  return;
}

// `dynamic_initializer_for_'CVarCommandBufferMaxSizeMb'' @ 141098ec0

void __cdecl _dynamic_initializer_for__CVarCommandBufferMaxSizeMb__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCommandBufferMaxSizeMb,L"au.CommandBufferMaxSizeInMb",
             &CommandBufferMaxSizeInMbCvar,
             L"How big to allow the command buffer to grow before ignoring more commands",0);
  atexit(_dynamic_atexit_destructor_for__CVarCommandBufferMaxSizeMb__);
  return;
}

// `dynamic_initializer_for_'CVarDebugGeneratorAmp'' @ 141098f10

void __cdecl _dynamic_initializer_for__CVarDebugGeneratorAmp__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugGeneratorAmp,L"au.Debug.Generator.Amp",&DebugGeneratorAmpCVar,
             L"Sets.\nDefault: 0.2f",0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugGeneratorAmp__);
  return;
}

// `dynamic_initializer_for_'CVarDebugGeneratorChannel'' @ 141098f60

void __cdecl _dynamic_initializer_for__CVarDebugGeneratorChannel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugGeneratorChannel,L"au.Debug.Generator.Channel",&DebugGeneratorChannelCVar,
             L"Sets channel output index of debug audio.  If number provided is above supported number, uses left.\n0: Left, 1: Right, etc."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugGeneratorChannel__);
  return;
}

// `dynamic_initializer_for_'CVarDebugGeneratorEnable'' @ 141098fb0

void __cdecl _dynamic_initializer_for__CVarDebugGeneratorEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugGeneratorEnable,L"au.Debug.Generator",&DebugGeneratorEnableCVar,
             L"Enables/disables debug sound generation.\n0: Disabled, 1: SinTone, 2: WhiteNoise",0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugGeneratorEnable__);
  return;
}

// `dynamic_initializer_for_'CVarDebugGeneratorFreq'' @ 141099000

void __cdecl _dynamic_initializer_for__CVarDebugGeneratorFreq__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugGeneratorFreq,L"au.Debug.Generator.Freq",&DebugGeneratorFreqCVar,
             L"Sets debug sound generation frequency.\n0: Not Disabled, 1: SinTone, 2: WhiteNoise",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarDebugGeneratorFreq__);
  return;
}

// `dynamic_initializer_for_'CVarDirectProceduralRendering'' @ 141099050

void __cdecl Audio::_dynamic_initializer_for__CVarDirectProceduralRendering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDirectProceduralRendering,L"au.DirectProceduralRendering",
             &DirectProceduralRenderingCVar,
             L"Render procedural sources (e.g. MetaSounds) on demand on the render thread, instead of using background tasks.\nIt is only safe to change this setting when there are no sounds playing.\n0: Disabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDirectProceduralRendering__);
  return;
}

// `dynamic_initializer_for_'CVarDisableDistanceAttenuation'' @ 1410990a0

void __cdecl _dynamic_initializer_for__CVarDisableDistanceAttenuation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableDistanceAttenuation,L"au.DisableDistanceAttenuation",
             &DisableDistanceAttenuationCvar,
             L"Disables using any Distance Attenuation.\n0: Not Disabled, 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableDistanceAttenuation__);
  return;
}

// `dynamic_initializer_for_'CVarDisableEnvelopeFollowing'' @ 1410990f0

void __cdecl _dynamic_initializer_for__CVarDisableEnvelopeFollowing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableEnvelopeFollowing,L"au.DisableEnvelopeFollowing",
             &DisableEnvelopeFollowingCvar,
             L"Disables using the envlope follower for source envelope tracking.\n0: Not Disabled, 1: Disabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableEnvelopeFollowing__);
  return;
}

// `dynamic_initializer_for_'CVarDisableFiltering'' @ 141099140

void __cdecl _dynamic_initializer_for__CVarDisableFiltering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableFiltering,L"au.DisableFiltering",&DisableFilteringCvar,
             L"Disables using the per-source lowpass and highpass filter.\n0: Not Disabled, 1: Disabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableFiltering__);
  return;
}

// `dynamic_initializer_for_'CVarDisableHPFiltering'' @ 141099190

void __cdecl _dynamic_initializer_for__CVarDisableHPFiltering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableHPFiltering,L"au.DisableHPFiltering",&DisableHPFilteringCvar,
             L"Disables using the per-source highpass filter.\n0: Not Disabled, 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableHPFiltering__);
  return;
}

// `dynamic_initializer_for_'CVarDisableParallelSourceProcessing'' @ 1410991e0

void __cdecl _dynamic_initializer_for__CVarDisableParallelSourceProcessing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableParallelSourceProcessing,L"au.DisableParallelSourceProcessing",
             &DisableParallelSourceProcessingCvar,
             L"Disables using  tasks for processing sources.\n0: Not Disabled, 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableParallelSourceProcessing__);
  return;
}

// `dynamic_initializer_for_'CVarDisableSourceEffects'' @ 141099230

void __cdecl _dynamic_initializer_for__CVarDisableSourceEffects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableSourceEffects,L"au.DisableSourceEffects",&DisableSourceEffectsCvar,
             L"Disables using any source effects.\n0: Not Disabled, 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableSourceEffects__);
  return;
}

// `dynamic_initializer_for_'CVarDisableSubmixEQ'' @ 141099280

void __cdecl _dynamic_initializer_for__CVarDisableSubmixEQ__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableSubmixEQ,L"au.DisableSubmixEffectEQ",&DisableSubmixEffectEQCvar,
             L"Disables the eq submix (true by default as of 5.0).\n0: Not Disabled, 1: Disabled",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarDisableSubmixEQ__);
  return;
}

// `dynamic_initializer_for_'CVarDisableSubmixMutationLock'' @ 1410992d0

void __cdecl _dynamic_initializer_for__CVarDisableSubmixMutationLock__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableSubmixMutationLock,L"au.DisableSubmixMutationLock",
             &DisableSubmixMutationLockCVar,
             L"Disables the submix mutation lock.\n0: Not Disabled (Default), 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableSubmixMutationLock__);
  return;
}

// `dynamic_initializer_for_'CVarDumpCallstackOnStallDiagnostics'' @ 141099320

void __cdecl _dynamic_initializer_for__CVarDumpCallstackOnStallDiagnostics__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpCallstackOnStallDiagnostics,L"au.DumpCallstackOnStallDiagnostics",
             &bDumpCallstackOnStallDiagnostics,
             L"Whether to dump the callstack to the log as part of stall diagnostics (default = true)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpCallstackOnStallDiagnostics__);
  return;
}

// `dynamic_initializer_for_'CVarEnableAudibleDefaultEndpointSubmixes'' @ 141099370

void __cdecl _dynamic_initializer_for__CVarEnableAudibleDefaultEndpointSubmixes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableAudibleDefaultEndpointSubmixes,L"au.submix.audibledefaultendpoints",
             &EnableAudibleDefaultEndpointSubmixesCVar,
             L"Allows audio sent to defaulted (typically silent) endpoint submixes to be audible via master. (useful for debugging)\n0: Disabled (Default), 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableAudibleDefaultEndpointSubmixes__);
  return;
}

// `dynamic_initializer_for_'CVarFloatCompareMaxScale'' @ 1410993c0

void __cdecl _dynamic_initializer_for__CVarFloatCompareMaxScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFloatCompareMaxScale,L"au.FloatCompareMaxScale",&FloatCompareMaxScaleCVar,
             L"Maximum parameter float compare tolerance",0);
  atexit(_dynamic_atexit_destructor_for__CVarFloatCompareMaxScale__);
  return;
}

// `dynamic_initializer_for_'CVarFloatCompareMinScale'' @ 141099410

void __cdecl _dynamic_initializer_for__CVarFloatCompareMinScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFloatCompareMinScale,L"au.FloatCompareMinScale",&FloatCompareMinScaleCVar,
             L"Minimum parameter float compare tolerance",0);
  atexit(_dynamic_atexit_destructor_for__CVarFloatCompareMinScale__);
  return;
}

// `dynamic_initializer_for_'CVarFlushCommandBufferOnTimeout'' @ 141099460

void __cdecl _dynamic_initializer_for__CVarFlushCommandBufferOnTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFlushCommandBufferOnTimeout,L"au.FlushCommandBufferOnTimeout",
             &FlushCommandBufferOnTimeoutCvar,
             L"When set to 1, flushes audio render thread synchronously when our fence has timed out.\n0: Not Disabled, 1: Disabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFlushCommandBufferOnTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarForceAudioLinkOnAllSources'' @ 1410994b0

void __cdecl _dynamic_initializer_for__CVarForceAudioLinkOnAllSources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceAudioLinkOnAllSources,L"au.AudioLink.ForceOnAllSource",
             &bForceAudioLinkOnAllSourcesCVAr,
             L"0 (off), 1 (enabled). Will force AudioLink on all Sources (if the plugin is enabled)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceAudioLinkOnAllSources__);
  return;
}

// `dynamic_initializer_for_'CVarForceSyncAudioDecodes'' @ 141099500

void __cdecl _dynamic_initializer_for__CVarForceSyncAudioDecodes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceSyncAudioDecodes,L"au.ForceSyncAudioDecodes",&ForceSyncAudioDecodesCvar,
             L"Disables using async tasks for processing sources.\n0: Not Disabled, 1: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceSyncAudioDecodes__);
  return;
}

// `dynamic_initializer_for_'CVarForceSynchronizedAudioTaskKick'' @ 141099550

void __cdecl _dynamic_initializer_for__CVarForceSynchronizedAudioTaskKick__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceSynchronizedAudioTaskKick,L"au.ForceSynchronizedAudioTaskKick",
             &ForceSynchronizedAudioTaskKickCvar,
             L"Force all Audio Tasks created in one \"audio render frame\" to be queued until they can all be \"kicked\" at once at the end of the frame.\n0: Don\'t Force, 1: Force"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceSynchronizedAudioTaskKick__);
  return;
}

// `dynamic_initializer_for_'CVarLogCmdQueueWhenNumberReached'' @ 1410995a0

void __cdecl _dynamic_initializer_for__CVarLogCmdQueueWhenNumberReached__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogCmdQueueWhenNumberReached,L"au.debug.LogCmdQueueWhenReached",
             &LogCmdQueueWhenNumberReachedCVar,
             L"When number of commands in queue is reached, it will dump the command list to the log."
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarLogCmdQueueWhenNumberReached__);
  return;
}

// `dynamic_initializer_for_'CVarMuteAudio'' @ 1410995f0

void __cdecl _dynamic_initializer_for__CVarMuteAudio__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMuteAudio,L"au.MuteAudio",&bMuteAudioCVar,
             L"Mutes the audio output in the final output without effecting audio engine behavior.\n1: Mutes the final submix. 0: Does not mute the final submix."
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarMuteAudio__);
  return;
}

// `dynamic_initializer_for_'CVarNumCmdsConsideredFullCVar'' @ 141099640

void __cdecl _dynamic_initializer_for__CVarNumCmdsConsideredFullCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNumCmdsConsideredFullCVar,L"au.NumCmdsConsideredFullCVar",
             &NumCmdsConsideredFullCVar,L"Num of commands in the queue is considered full",0);
  atexit(_dynamic_atexit_destructor_for__CVarNumCmdsConsideredFullCVar__);
  return;
}

// `dynamic_initializer_for_'CVarUseAudioRenderScheduler'' @ 141099690

void __cdecl AudioMixerCVars::_dynamic_initializer_for__CVarUseAudioRenderScheduler__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseAudioRenderScheduler,L"au.UseRenderScheduler",&UseRenderScheduler,
             L"Use audio rendering scheduler to handle render dependencies.\n0: Disabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseAudioRenderScheduler__);
  return;
}

// `dynamic_initializer_for_'CVarUseListenerOverrideForSpread'' @ 1410996e0

void __cdecl _dynamic_initializer_for__CVarUseListenerOverrideForSpread__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseListenerOverrideForSpread,L"au.UseListenerOverrideForSpread",
             &UseListenerOverrideForSpreadCVar,
             L"Zero attenuation override distance stereo panning\n0: Use actual distance, 1: use listener override"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseListenerOverrideForSpread__);
  return;
}

// `dynamic_initializer_for_'ChannelMapCache'' @ 141099730

void __cdecl Audio::_dynamic_initializer_for__ChannelMapCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__ChannelMapCache__);
  return;
}

// `dynamic_initializer_for_'DumpSubmixCmd'' @ 141099750

void __cdecl Audio::_dynamic_initializer_for__DumpSubmixCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,Audio::<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&DumpSubmixCmd,L"au.submix.drawgraph",
             L"Draws the submix heirarchy for this world to the debug output",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__DumpSubmixCmd__);
  return;
}

// `dynamic_initializer_for_'GModulationSetMaxPitchRange'' @ 141099880

void __cdecl _dynamic_initializer_for__GModulationSetMaxPitchRange__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = <lambda_29>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GModulationSetMaxPitchRange,L"au.Modulation.SetPitchRange",
             L"Sets max final modulation range of pitch (in semitones). Default: 96 semitones (+/- 4 octaves)"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GModulationSetMaxPitchRange__);
  return;
}

// `dynamic_initializer_for_'GSetAudioMixerSourceFadeMin'' @ 1410999c0

void __cdecl _dynamic_initializer_for__GSetAudioMixerSourceFadeMin__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = <lambda_28>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GSetAudioMixerSourceFadeMin,L"au.SourceFadeMin",
             L"Sets the length (in samples) of minimum fade when a sound source is stopped. Must be divisible by 4 (vectorization requirement). Ignored for some procedural source types. (Default: 512, Min: 4). \n"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GSetAudioMixerSourceFadeMin__);
  return;
}

// `dynamic_initializer_for_'LogEveryAudioThreadCommand'' @ 141099b00

void __cdecl _dynamic_initializer_for__LogEveryAudioThreadCommand__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&LogEveryAudioThreadCommand,L"au.AudioThreadCommand.LogEveryExecution",
             &LogEveryAudioThreadCommandCvar,
             L"Extremely verbose logging of each Audio Thread command caller and it\'s execution time"
             ,0);
  atexit(_dynamic_atexit_destructor_for__LogEveryAudioThreadCommand__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioMixer'' @ 141099b50

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioMixer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioMixer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioMixer",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioMixerModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RecordingData'' @ 141099ba0

void __cdecl _dynamic_initializer_for__RecordingData__(void)

{
  atexit(_dynamic_atexit_destructor_for__RecordingData__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerHRTF'' @ 141099bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerHRTF__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerHRTF == (FThreadSafeStaticStat<FStat_STAT_AudioMixerHRTF>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerHRTF");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerHRTF,*pFVar1,L"HRTF",
               "STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,true,ST_int64,true,false
               ,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSourceBuffers'' @ 141099c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSourceBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSourceBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSourceBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSourceBuffers,*pFVar1,
               L"Source Buffers","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSourceEffectBuffers'' @ 141099ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSourceEffectBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSourceEffectBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceEffectBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSourceEffectBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSourceEffectBuffers,*pFVar1,
               L"Source Effect Buffers","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSourceManagerUpdate'' @ 141099d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSourceManagerUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSourceManagerUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceManagerUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSourceManagerUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSourceManagerUpdate,*pFVar1,
               L"Source Manager Update","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerSourceOutputBuffers'' @ 141099e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerSourceOutputBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerSourceOutputBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceOutputBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerSourceOutputBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSourceOutputBuffers,*pFVar1,
               L"Source Output Buffers","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'VorbisChannelMapCache'' @ 141099e90

void __cdecl Audio::_dynamic_initializer_for__VorbisChannelMapCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__VorbisChannelMapCache__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h__Script_AudioMixer_1746819876'' @ 141099eb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h__Script_AudioMixer_1746819876__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h__Script_AudioMixer_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h__Script_AudioMixer_307209350'' @ 141099f00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h__Script_AudioMixer_307209350__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h__Script_AudioMixer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h__Script_AudioMixer_2207910746'' @ 141099f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h__Script_AudioMixer_2207910746__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h__Script_AudioMixer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h__Script_AudioMixer_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h__Script_AudioMixer_1103486577'' @ 141099f90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h__Script_AudioMixer_1103486577__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h__Script_AudioMixer_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h__Script_AudioMixer_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h__Script_AudioMixer_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerDevice_h__Script_AudioMixer_1588666656'' @ 141099fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerDevice_h__Script_AudioMixer_1588666656__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioMixer",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerDevice_h__Script_AudioMixer_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioMixer'' @ 14109a030

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioMixer__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x8a03bfab;
  local_res8[0].DeclarationsHash = 0xf211a374;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioMixer,L"/Script/AudioMixer",
             &Z_Registration_Info_UPackage__Script_AudioMixer,local_res8);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAudioMixerSourceManager_TotalQdCmds'' @ 14109a070

void __cdecl _dynamic_initializer_for____GTraceCounterAudioMixerSourceManager_TotalQdCmds__(void)

{
  __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AudioSourceManager Qd Cmds",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAudioMixerSourceManager_TotalQdCmds__);
  return;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects @ 1464cea40

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString @ 1464cea80

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices @ 1464ceac0

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName @ 1464ceb00

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies @ 1464ceb40

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain @ 1464ceb80

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies @ 1464cebc0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1464cec00

void __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive @ 1464cec10

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings @ 1464cec50

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings @ 1464cec90

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings @ 1464cecd0

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput @ 1464ced10

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback @ 1464ced50

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback @ 1464ced90

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RegisterAudioBusToSubmix @ 1464cedd0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RegisterAudioBusToSubmix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RegisterAudioBusToSubmix_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect @ 1464cee10

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature @ 1464cee50

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature @ 1464cee90

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature @ 1464ceed0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature @ 1464cef10

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature @ 1464cef50

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature @ 1464cef90

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature @ 1464cefd0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain @ 1464cf010

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AudioMixer @ 1464cf050

UPackage * __cdecl Z_Construct_UPackage__Script_AudioMixer(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioMixer.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioMixer.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioMixer.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect @ 1464cf090

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex @ 1464cf0d0

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset @ 1464cf110

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex @ 1464cf150

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix @ 1464cf190

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect @ 1464cf1d0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput @ 1464cf2d0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bBypassed_SetBit @ 1464cf310

void __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::
NewProp_bBypassed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry @ 1464cf320

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioDeviceNotificationSubsystem @ 1464cf360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioDeviceNotificationSubsystem(void)

{
  if (Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.OuterSingleton,
               &Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.OuterSingleton;
}

// Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole @ 1464cf3a0

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole(void)

{
  if (Z_Registration_Info_UEnum_EAudioDeviceChangedRole.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioDeviceChangedRole.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioDeviceChangedRole.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState @ 1464cf3e0

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState(void)

{
  if (Z_Registration_Info_UEnum_EAudioDeviceChangedState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioDeviceChangedState.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioDeviceChangedState.InnerSingleton;
}

// EAudioDeviceChangedRole_StaticEnum @ 1464cf420

UEnum * __cdecl EAudioDeviceChangedRole_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole,(UObject *)pUVar1,
                       L"EAudioDeviceChangedRole");
  }
  return Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride @ 1464cf460

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EAudioDeviceChangedState_StaticEnum @ 1464cf4a0

UEnum * __cdecl EAudioDeviceChangedState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState,(UObject *)pUVar1,
                       L"EAudioDeviceChangedState");
  }
  return Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput @ 1464cf6f0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1464cf780

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,Audio::<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,Audio::<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus @ 1464cf7b0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput @ 1464cf7f0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput @ 1464cf830

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus @ 1464cf870

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput @ 1464cf8b0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice @ 1464cf8f0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache @ 1464cf930

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_UnregisterAudioBusFromSubmix @ 1464cf970

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_UnregisterAudioBusFromSubmix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_UnregisterAudioBusFromSubmix_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ESourceManagerRenderThreadPhase_StaticEnum @ 1464cfa70

UEnum * __cdecl ESourceManagerRenderThreadPhase_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase,
                       (UObject *)pUVar1,L"ESourceManagerRenderThreadPhase");
  }
  return Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1464cfed0

void * __thiscall
FAudioMixerModule::_scalar_deleting_destructor_(FAudioMixerModule *this,uint param_1)

{
  *this = (FAudioMixerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ERequiredSubmixes_StaticEnum @ 1464cff10

UEnum * __cdecl ERequiredSubmixes_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ERequiredSubmixes,(UObject *)pUVar1,
                       L"ERequiredSubmixes");
  }
  return Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton;
}

// Z_Construct_UClass_UAudioMixerBlueprintLibrary @ 1464d0010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMixerBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType @ 1464d0050

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType(void)

{
  if (Z_Registration_Info_UEnum_EAudioMixerChannelType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioMixerChannelType.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioMixerChannelType.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType @ 1464d0090

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType(void)

{
  if (Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_EMusicalNoteName @ 1464d00d0

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_EMusicalNoteName(void)

{
  if (Z_Registration_Info_UEnum_EMusicalNoteName.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMusicalNoteName.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMusicalNoteName.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState @ 1464d0110

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState(void)

{
  if (Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAudioOutputDeviceInfo @ 1464d0150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioOutputDeviceInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioOutputDeviceInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioOutputDeviceInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioOutputDeviceInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioOutputDeviceInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSwapAudioOutputResult @ 1464d01d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSwapAudioOutputResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSwapAudioOutputResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSwapAudioOutputResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSwapAudioOutputResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSwapAudioOutputResult.InnerSingleton;
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

// NewProp_WasCancelled_SetBit @ 1464d0250

void __cdecl
Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::
NewProp_WasCancelled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// EMusicalNoteName_StaticEnum @ 1464d0260

UEnum * __cdecl EMusicalNoteName_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EMusicalNoteName,(UObject *)pUVar1,
                       L"EMusicalNoteName");
  }
  return Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton;
}

// EAudioMixerStreamDataFormatType_StaticEnum @ 1464d02a0

UEnum * __cdecl EAudioMixerStreamDataFormatType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType,
                       (UObject *)pUVar1,L"EAudioMixerStreamDataFormatType");
  }
  return Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton;
}

// EAudioMixerChannelType_StaticEnum @ 1464d02e0

UEnum * __cdecl EAudioMixerChannelType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType,(UObject *)pUVar1,
                       L"EAudioMixerChannelType");
  }
  return Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton;
}

// ESwapAudioOutputDeviceResultState_StaticEnum @ 1464d0320

UEnum * __cdecl ESwapAudioOutputDeviceResultState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState,
                       (UObject *)pUVar1,L"ESwapAudioOutputDeviceResultState");
  }
  return Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton;
}

// NewStructOps @ 1464d0360

void * __cdecl Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSwapAudioOutputResult,&UE::CoreUObject::Private::Construct<FSwapAudioOutputResult>,&UE::CoreUObject::Private::ConstructForTests<FSwapAudioOutputResult>,&UE::CoreUObject::Private::Destruct<FSwapAudioOutputResult>,&UE::CoreUObject::Private::Copy<FSwapAudioOutputResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsSystemDefault_SetBit @ 1464d03a0

void __cdecl
Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsSystemDefault_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 1;
  return;
}

// NewProp_bIsCurrentDevice_SetBit @ 1464d03b0

void __cdecl
Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsCurrentDevice_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 2;
  return;
}

// NewStructOps @ 1464d03c0

void * __cdecl Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioOutputDeviceInfo,&UE::CoreUObject::Private::Construct<FAudioOutputDeviceInfo>,&UE::CoreUObject::Private::ConstructForTests<FAudioOutputDeviceInfo>,&UE::CoreUObject::Private::Destruct<FAudioOutputDeviceInfo>,&UE::CoreUObject::Private::Copy<FAudioOutputDeviceInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect @ 1464d0400

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain @ 1464d0440

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect @ 1464d0480

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects @ 1464d04c0

UFunction * __cdecl Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride @ 1464d0500

UFunction * __cdecl
Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioBusSubsystem @ 1464d0540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioBusSubsystem(void)

{
  if (Z_Registration_Info_UClass_UAudioBusSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioBusSubsystem.OuterSingleton,
               &Z_Construct_UClass_UAudioBusSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioBusSubsystem.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 1464d0580

void __cdecl
``Audio::FMixerSourceManager::Init'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(void)

{
  undefined1 local_res8 [32];
  
                    /* WARNING: Subroutine does not return */
  operator()(local_res8);
}

// <lambda_invoker_cdecl> @ 1464d05a0

void __cdecl
``Audio::FMixerSourceManager::Init'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(void)

{
  undefined1 local_res8 [32];
  
                    /* WARNING: Subroutine does not return */
  operator()(local_res8);
}

// <lambda_invoker_cdecl> @ 1464d05c0

void __cdecl
<lambda_28>::<lambda_invoker_cdecl>(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    iVar3 = 4;
    if (4 < iVar2) {
      iVar3 = iVar2;
    }
    AudioMixerSourceFadeMinCVar = iVar3 + 3U & 0xfffffffc;
  }
  return;
}

// <lambda_invoker_cdecl> @ 1464d0610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
<lambda_29>::<lambda_invoker_cdecl>(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *_Str;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  
  if (param_1->ArrayNum < 1) {
    fVar3 = MinModulationPitchRangeFreqCVar;
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_set_m_1512c9310,
                 (FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    dVar4 = _wtof(_Str);
    fVar3 = __real_3f800000;
    fVar5 = (float)dVar4 * __real_3f000000;
    fVar2 = __real_3f800000;
    if (fVar5 != 0.0) {
      fVar2 = powf(__real_40000000,fVar5 * __real_3daaaaab);
    }
    fVar5 = (float)dVar4 * __real_bf000000;
    MaxModulationPitchRangeFreqCVar = fVar2;
    if (fVar5 != 0.0) {
      fVar3 = powf(__real_40000000,fVar5 * __real_3daaaaab);
    }
  }
  MinModulationPitchRangeFreqCVar = fVar3;
  return;
}

// CastChecked<USoundSourceBus,USoundWave> @ 1464d1900

USoundSourceBus * __cdecl CastChecked<USoundSourceBus,USoundWave>(USoundWave *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USoundWave *)0x0) {
    pFVar3 = GetTypeName<USoundSourceBus>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_USoundSourceBus_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (USoundSourceBus *)param_1;
  }
  pFVar3 = GetTypeName<USoundSourceBus>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USoundWave>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int> @ 1464d19c0

void __cdecl
ConstructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int>
          (void *param_1,TTuple<EBusSendType,FSoundSourceBusSendInfo> *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    puVar3 = (undefined8 *)&param_2->field_0x10;
    do {
      *(undefined1 *)(puVar2 + -2) =
           *(undefined1 *)((longlong)puVar2 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(puVar3 + -1);
      pUVar1 = (UObject *)*puVar3;
      *puVar2 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      pUVar1 = (UObject *)puVar3[1];
      puVar2[1] = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar3 + 3);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0x1c);
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
      FRichCurve::FRichCurve((FRichCurve *)(puVar2 + 5),(FRichCurve *)(puVar3 + 5));
      pUVar1 = (UObject *)puVar3[0x15];
      puVar2[0x15] = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      puVar3 = puVar3 + 0x18;
      puVar2 = puVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAudioOutputDeviceInfo,FAudioOutputDeviceInfo,int> @ 1464d1ac0

void __cdecl
ConstructItems<FAudioOutputDeviceInfo,FAudioOutputDeviceInfo,int>
          (void *param_1,FAudioOutputDeviceInfo *param_2,int param_3)

{
  FString *pFVar1;
  byte *pbVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  byte bVar4;
  int *this;
  FString *pFVar5;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x10);
    pFVar5 = &param_2->DeviceId;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar5),
                       (FString *)(pFVar5 + -1));
      FString::FString((FString *)this,pFVar5);
      pFVar1 = (FString *)(this + 8);
      *(int *)&(((FString *)(this + 4))->Data).AllocatorInstance.Data = *(int *)(pFVar5 + 1);
      this[5] = *(int *)((longlong)(pFVar5 + 1) + 4);
      *(EAudioMixerStreamDataFormatType *)(this + 6) =
           *(EAudioMixerStreamDataFormatType *)((longlong)(pFVar5 + 1) + 8);
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = ((TArray<EAudioMixerChannelType,TSizedDefaultAllocator<32>_> *)(pFVar5 + 2))->ArrayNum
      ;
      _Src = (((TArray<EAudioMixerChannelType,TSizedDefaultAllocator<32>_> *)(pFVar5 + 2))->
             AllocatorInstance).Data;
      this[10] = iVar3;
      if (iVar3 == 0) {
        this[0xb] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,this + 0xb);
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
      }
      bVar4 = (*(byte *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data ^
              *(byte *)(pFVar5 + 3)) & 1 ^
              *(byte *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data;
      *(byte *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data = bVar4;
      pbVar2 = (byte *)(pFVar5 + 3);
      pFVar5 = (FString *)((longlong)(pFVar5 + 4) + 8);
      *(byte *)&(((FString *)(this + 0xc))->Data).AllocatorInstance.Data =
           (bVar4 ^ *pbVar2) & 2 ^ bVar4;
      this = this + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Audio::FInitAudioBusSend,Audio::FInitAudioBusSend,int> @ 1464d1be0

void __cdecl
ConstructItems<Audio::FInitAudioBusSend,Audio::FInitAudioBusSend,int>
          (void *param_1,FInitAudioBusSend *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar1 = (int *)((longlong)param_1 + 8);
    piVar2 = &param_2->BusChannels;
    do {
      piVar1[-2] = *(int *)((longlong)piVar1 + (longlong)param_2 + (-8 - (longlong)param_1));
      piVar1[-1] = piVar2[-1];
      *piVar1 = *piVar2;
      FString::FString((FString *)(piVar1 + 2),(FString *)(piVar2 + 2));
      piVar2 = piVar2 + 8;
      piVar1 = piVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Audio::FMixerSourceSubmixSend,Audio::FMixerSourceSubmixSend,int> @ 1464d1c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
ConstructItems<Audio::FMixerSourceSubmixSend,Audio::FMixerSourceSubmixSend,int>
          (void *param_1,FMixerSourceSubmixSend *param_2,int param_3)

{
  ISoundfieldFactory **ppIVar1;
  TReferenceControllerBase<1> *pTVar2;
  float *pfVar3;
  float *pfVar4;
  
  if (param_3 != 0) {
    pfVar4 = &param_2->SendLevel;
    pfVar3 = (float *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(pfVar3 + -4) =
           *(undefined8 *)((longlong)pfVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pTVar2 = ((FWeakReferencer<1> *)(pfVar4 + -2))->ReferenceController;
      *(TReferenceControllerBase<1> **)(pfVar3 + -2) = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
        UNLOCK();
      }
      *pfVar3 = *pfVar4;
      *(bool *)(pfVar3 + 1) = *(bool *)(pfVar4 + 1);
      pfVar3[2] = pfVar4[2];
      ppIVar1 = (ISoundfieldFactory **)(pfVar4 + 4);
      pfVar4 = pfVar4 + 10;
      *(ISoundfieldFactory **)(pfVar3 + 4) = *ppIVar1;
      pfVar3 = pfVar3 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int> @ 1464d1cc0

void __cdecl
ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
          (void *param_1,FQuartzGameThreadSubscriber *param_2,int param_3)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool *pbVar6;
  char *pcVar7;
  
  if (param_3 != 0) {
    pcVar7 = (char *)((longlong)param_1 + 8);
    pbVar6 = &(param_2->Offset).OffsetInMilliseconds.bIsSet;
    do {
      *pcVar7 = '\0';
      bVar2 = *pbVar6;
      *pcVar7 = bVar2;
      if (bVar2 != false) {
        *(double *)(pbVar6 + (longlong)param_1 + (-8 - (longlong)param_2)) =
             ((TOptional<double> *)(pbVar6 + -8))->TypedValue;
      }
      pcVar7[0x18] = '\0';
      cVar3 = pbVar6[0x18];
      pcVar7[0x18] = cVar3;
      if (cVar3 != '\0') {
        uVar5 = *(undefined8 *)(pbVar6 + 0x10);
        *(undefined8 *)(pcVar7 + 8) = *(undefined8 *)(pbVar6 + 8);
        *(undefined8 *)(pcVar7 + 0x10) = uVar5;
      }
      *(undefined8 *)(pcVar7 + 0x20) = *(undefined8 *)(pbVar6 + 0x20);
      lVar4 = *(longlong *)(pbVar6 + 0x28);
      *(longlong *)(pcVar7 + 0x28) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pcVar7[0x30] = pbVar6[0x30];
      pcVar7[0x31] = pbVar6[0x31];
      pcVar1 = pbVar6 + 0x34;
      pbVar6 = pbVar6 + 0x40;
      *(undefined4 *)(pcVar7 + 0x34) = *(undefined4 *)pcVar1;
      pcVar7 = pcVar7 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int> @ 1464d1d60

void __cdecl
ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
          (void *param_1,FSourceEffectChainEntry *param_2,int param_3)

{
  undefined1 *puVar1;
  USoundEffectSourcePreset *pUVar2;
  uint *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (uint *)((longlong)param_1 + 8);
    do {
      pUVar2 = (param_2->Preset).field0_0x0.DebugPtr;
      *(USoundEffectSourcePreset **)(puVar3 + -2) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (USoundEffectSourcePreset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      param_2 = param_2 + 1;
      *puVar3 = *puVar3 ^ (*puVar3 ^ param_2->bBypass) & 1;
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<Audio::FMixerSubmix,1>,TSharedPtr<Audio::FMixerSubmix,1>,int> @ 1464d1dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedPtr<Audio::FMixerSubmix,1>,TSharedPtr<Audio::FMixerSubmix,1>,int>
          (void *param_1,TSharedPtr<Audio::FMixerSubmix,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FMixerSubmix **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FSoundEffectSource,1>,TSharedPtr<FSoundEffectSource,1>,int> @ 1464d1e10

void __cdecl
ConstructItems<TSharedPtr<FSoundEffectSource,1>,TSharedPtr<FSoundEffectSource,1>,int>
          (void *param_1,TSharedPtr<FSoundEffectSource,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FSoundEffectSource **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TSharedPtr<FSoundEffectSubmix,1>,TSharedPtr<FSoundEffectSubmix,1>,int> @ 1464d1e50

void __cdecl
ConstructItems<TSharedPtr<FSoundEffectSubmix,1>,TSharedPtr<FSoundEffectSubmix,1>,int>
          (void *param_1,TSharedPtr<FSoundEffectSubmix,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FSoundEffectSubmix **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int> @ 1464d1e90

void __cdecl
ConstructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
          (void *param_1,
          TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          *param_2,int param_3)

{
  UObjectBase *this;
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = 0;
      this = *(UObjectBase **)(lVar1 + (longlong)param_1);
      if (this != (UObjectBase *)0x0) {
        UObjectBase::AddRef(this);
        *(UObjectBase **)param_1 = this;
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FMixerSourceManager::FSourceInfo,int> @ 1464d2020

void __cdecl
DefaultConstructItems<Audio::FMixerSourceManager::FSourceInfo,int>(void *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  FInlineEnvelopeFollowerInitParams local_48;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)((longlong)param_1 + 0xf8);
    do {
      *(undefined4 *)(puVar4 + -0xe) = 0;
      *(undefined4 *)((longlong)puVar4 + -0x6c) = 0;
      piVar1 = (int *)((longlong)puVar4 + -0x6c);
      puVar4[-0x1f] = &___7FSourceInfo_FMixerSourceManager_Audio__6B_;
      puVar4[-0x1d] = 0;
      puVar4[-0x1c] = 0;
      puVar4[-0x1a] = 0;
      puVar4[-0x19] = 0;
      puVar4[-0x18] = 0;
      puVar4[-0x17] = 0;
      puVar4[-0x16] = 0;
      puVar4[-0x15] = 0;
      puVar4[-0x14] = 0;
      puVar4[-0x13] = 0;
      puVar4[-0x12] = 0;
      puVar4[-0x11] = 0;
      *(undefined4 *)(puVar4 + -0x10) = 0;
      puVar4[-0xf] = 0;
      *(undefined4 *)((longlong)puVar4 + -100) = 0;
      *(undefined4 *)(puVar4 + -0xc) = 0;
      *(undefined4 *)(puVar4 + -0xd) = 1;
      LOCK();
      *(undefined4 *)((longlong)puVar4 + -100) = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)(puVar4 + -0xc) = 0;
      UNLOCK();
      *(int *)(puVar4 + -0xe) = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(puVar4 + -0xf),0,piVar1);
      }
      iVar2 = *(int *)(puVar4 + -0xd);
      iVar3 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar2,(ForAnyElementType *)(puVar4 + -0xf),(int *)(puVar4 + -0xe),
                         piVar1);
      memset((void *)(puVar4[-0xf] + (longlong)iVar3 * 4),0,(longlong)iVar2 << 2);
      puVar4[-0xb] = 0;
      puVar4[-10] = 0;
      puVar4[-9] = 0;
      puVar4[-8] = 0;
      puVar4[-5] = 0;
      puVar4[-4] = 0;
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *(undefined1 *)(puVar4 + 5) = 1;
      Audio::FInterpolatedLPF::FInterpolatedLPF((FInterpolatedLPF *)(puVar4 + 0xb));
      Audio::FInterpolatedHPF::FInterpolatedHPF((FInterpolatedHPF *)(puVar4 + 0x13));
      puVar4[0x1c] = 0;
      puVar4[0x1d] = 0;
      puVar4[0x1e] = 0;
      puVar4[0x1f] = 0;
      puVar4[0x21] = 0;
      puVar4[0x22] = 0;
      FSpatializationParams::FSpatializationParams((FSpatializationParams *)(puVar4 + 0x25));
      puVar4[0x45] = 0;
      *(undefined4 *)(puVar4 + 0x46) = 0;
      puVar4[0x47] = 0;
      puVar4[0x48] = 0;
      local_48.SampleRate = 48000.0;
      local_48.AttackTimeMsec = 10.0;
      local_48.ReleaseTimeMsec = 100.0;
      local_48.Mode = Peak;
      local_48.bIsAnalog = true;
      local_48.AnalysisWindowMsec = 5.0;
      Audio::FInlineEnvelopeFollower::FInlineEnvelopeFollower
                ((FInlineEnvelopeFollower *)(puVar4 + 0x49),&local_48);
      Audio::FModulationDestination::FModulationDestination
                ((FModulationDestination *)(puVar4 + 0x50));
      Audio::FModulationDestination::FModulationDestination
                ((FModulationDestination *)(puVar4 + 0x52));
      Audio::FModulationDestination::FModulationDestination
                ((FModulationDestination *)(puVar4 + 0x54));
      Audio::FModulationDestination::FModulationDestination
                ((FModulationDestination *)(puVar4 + 0x56));
      FSpatializationParams::FSpatializationParams((FSpatializationParams *)(puVar4 + 0x5b));
      puVar4[0x7b] = 0;
      puVar4[0x7c] = 0;
      puVar4[0x7d] = 0;
      puVar4[0x7e] = 0;
      puVar4[0x7f] = 0;
      puVar4[0x80] = 0;
      puVar4[0x81] = 0;
      puVar4[0x82] = 0;
      puVar4[0x83] = 0;
      puVar4[0x84] = 0;
      Audio::FRuntimeResampler::FRuntimeResampler((FRuntimeResampler *)(puVar4 + 0x89),1);
      puVar4[0x98] = 0;
      puVar4[0x99] = 0;
      puVar4 = puVar4 + 0xba;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int> @ 1464d2350

void __cdecl
DestructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int>
          (TTuple<EBusSendType,FSoundSourceBusSendInfo> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0xa8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1[-0xe] = &___7FIndexedCurve__6B_;
      if ((void *)puVar1[-3] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-3]);
      }
      *(undefined4 *)(puVar1 + -4) = 0;
      if ((void *)puVar1[-5] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-5]);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0xd));
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int> @ 1464d23e0

void __cdecl
DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int>
          (FAudioMixerThreadCommand *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Function).field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAudioOutputDeviceInfo,int> @ 1464d2430

void __cdecl DestructItems<FAudioOutputDeviceInfo,int>(FAudioOutputDeviceInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->DeviceId;
    do {
      pFVar1 = (((TArray<EAudioMixerChannelType,TSizedDefaultAllocator<32>_> *)(pFVar2 + 2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FAudioOutputDeviceInfo *)(pFVar2 + -1))->Name).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FAudioPlatformDeviceInfo,int> @ 1464d2490

void __cdecl
DestructItems<Audio::FAudioPlatformDeviceInfo,int>(FAudioPlatformDeviceInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->DeviceId;
    do {
      pFVar1 = (((TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)(pFVar2 + 2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FAudioPlatformDeviceInfo *)(pFVar2 + -1))->Name).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FMixerSource::FDynamicBusSendInfo,int> @ 1464d24f0

void __cdecl
DestructItems<Audio::FMixerSource::FDynamicBusSendInfo,int>
          (FDynamicBusSendInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->CustomSendLevelCurve).EditorCurveData.Keys;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ((FRichCurve *)(pTVar2 + -7))->_padding_ = (longlong)&___7FIndexedCurve__6B_;
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      *(undefined4 *)(pTVar2 + -2) = 0;
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&((FRichCurve *)(pTVar2 + -7))->_padding_);
      if (*(void **)((longlong)(pTVar2 + -10) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -10) + 8));
      }
      pTVar2 = pTVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FInitAudioBusSend,int> @ 1464d25a0

void __cdecl DestructItems<Audio::FInitAudioBusSend,int>(FInitAudioBusSend *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->AudioBusName;
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

// DestructItems<Audio::FMixerSourceSubmixSend,int> @ 1464d25e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
DestructItems<Audio::FMixerSourceSubmixSend,int>(FMixerSourceSubmixSend *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->Submix).WeakReferenceCount;
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
      pFVar4 = pFVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UAudioBusSubsystem::FPendingConnection,int> @ 1464d2630

void __cdecl
DestructItems<UAudioBusSubsystem::FPendingConnection,int>(FPendingConnection *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar3 = (ulonglong)(param_1->PatchVariant).TypeIndex;
    if ((1 < uVar3) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<Audio::FQuartzGameThreadSubscriber,int> @ 1464d26c0

void __cdecl
DestructItems<Audio::FQuartzGameThreadSubscriber,int>
          (FQuartzGameThreadSubscriber *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Queue).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FMixerSourceManager::FSourceInfo,int> @ 1464d2700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
DestructItems<Audio::FMixerSourceManager::FSourceInfo,int>(FSourceInfo *param_1,int param_2)

{
  ForElementType<float_*> *pFVar1;
  ForElementType<float_*> *pFVar2;
  ForElementType<float_*> *pFVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->Resampler).TempOutputPointers.AllocatorInstance.SecondaryData;
    do {
      pFVar2[-0xb4] = (ForElementType<float_*>)&___7FSourceInfo_FMixerSourceManager_Audio__6B_;
      if (pFVar2[3] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[3]);
      }
      if (*pFVar2 != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      if (pFVar2[-4] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-4]);
      }
      if (pFVar2[-8] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-8]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0x11]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0x13]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0x16]);
      if (pFVar2[-0x1a] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0x1a]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0x3e]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0x40]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0x42]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0x44]);
      if (pFVar2[-0x4e] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0x4e]);
      }
      if (pFVar2[-0x77] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0x77]);
      }
      DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                ((TSharedPtr<FSoundEffectSource,1> *)pFVar2[-0x79],*(int *)(pFVar2 + -0x78));
      if (pFVar2[-0x79] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0x79]);
      }
      if (pFVar2[-0x80] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0x80]);
      }
      if (pFVar2[-0x88] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0x88]);
      }
      pFVar3 = pFVar2 + -0x92;
      lVar4 = 2;
      do {
        pFVar1 = pFVar3 + -2;
        pFVar3 = pFVar3 + -2;
        lVar4 = lVar4 + -1;
        if (*pFVar1 != (ForElementType<float_*>)0x0) {
          FMemory::Free((void *)*pFVar1);
        }
      } while (lVar4 != 0);
      DestructItems<Audio::FMixerSourceSubmixSend,int>
                ((FMixerSourceSubmixSend *)pFVar2[-0x9a],*(int *)(pFVar2 + -0x99));
      if (pFVar2[-0x9a] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0x9a]);
      }
      if (pFVar2[-0x9e] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0x9e]);
      }
      if (pFVar2[-0xa0] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0xa0]);
      }
      if (pFVar2[-0xa4] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0xa4]);
      }
      if (pFVar2[-0xa7] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0xa7]);
      }
      if (pFVar2[-0xa9] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0xa9]);
      }
      if (pFVar2[-0xab] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0xab]);
      }
      if (pFVar2[-0xad] != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)pFVar2[-0xad]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0xae]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2[-0xb1]);
      pFVar2 = pFVar2 + 0xba;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FAudioRenderScheduler::FStepEntry,int> @ 1464d2960

void __cdecl
DestructItems<Audio::FAudioRenderScheduler::FStepEntry,int>(FStepEntry *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<short> FVar3;
  ForElementType<short> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->Prerequisites).AllocatorInstance.SecondaryData;
    do {
      FVar3 = pFVar4[3];
      if (FVar3 != (ForElementType<short>)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)FVar3 + 0x30);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)FVar3)(FVar3,1);
        }
      }
      if (*pFVar4 != (ForElementType<short>)0x0) {
        FMemory::Free((void *)*pFVar4);
      }
      pFVar4 = pFVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>,int> @ 1464d29c0

void __cdecl
DestructItems<TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>,int>
          (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<Audio::FMixerSourceBuffer,1>,int> @ 1464d2a00

void __cdecl
DestructItems<TSharedPtr<Audio::FMixerSourceBuffer,1>,int>
          (TSharedPtr<Audio::FMixerSourceBuffer,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int> @ 1464d2a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
          (TSharedPtr<Audio::FMixerSubmix,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FSoundEffectSource,1>,int> @ 1464d2a80

void __cdecl
DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
          (TSharedPtr<FSoundEffectSource,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int> @ 1464d2ac0

void __cdecl
DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
          (TSharedPtr<FSoundEffectSubmix,1> *param_1,int param_2)

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

// DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int> @ 1464d2b00

void __cdecl
DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
          (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(param_1->Object);
      param_1->Object = (UObject *)0x0;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FMixerSourceSubmixOutputBuffer,int> @ 1464d2b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<Audio::FMixerSourceSubmixOutputBuffer,int>
          (FMixerSourceSubmixOutputBuffer *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    Audio::FMixerSourceSubmixOutputBuffer::~FMixerSourceSubmixOutputBuffer(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FPatchInput,int> @ 1464d2b90

void __cdecl DestructItems<Audio::FPatchInput,int>(FPatchInput *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    Audio::FPatchInput::~FPatchInput(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,`Audio::FMixerDevice::DrawSubmixes'::__l3::<lambda_1>_> @ 1464d4b30

FString * __cdecl
AlgoImpl::
FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,_Audio::FMixerDevice::DrawSubmixes_::__l3::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) {
      return (FString *)0x0;
    }
    if (*(int *)&pFVar4[8].field_0x0 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->
               AllocatorInstance).Data;
    }
    bVar2 = FParse::Param(pwVar3,L"Instances");
    if (bVar2) break;
    pFVar4 = pFVar4 + 0x10;
  }
  return (FString *)pFVar4;
}

// FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,`Audio::FMixerDevice::DrawSubmixes'::__l8::<lambda_2>_> @ 1464d4bc0

FString * __cdecl
AlgoImpl::
FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,_Audio::FMixerDevice::DrawSubmixes_::__l8::<lambda_2>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,<lambda_2> param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) {
      return (FString *)0x0;
    }
    if (*(int *)&pFVar4[8].field_0x0 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->
               AllocatorInstance).Data;
    }
    bVar2 = FParse::Param(pwVar3,L"Map");
    if (bVar2) break;
    pFVar4 = pFVar4 + 0x10;
  }
  return (FString *)pFVar4;
}

// GetFullNameForCastLogError<USoundWave> @ 1464d5150

FString * __cdecl
GetFullNameForCastLogError<USoundWave>(FString *__return_storage_ptr__,USoundWave *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeHash<Audio::FMixerSubmix_const_,1> @ 1464d5210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

uint __cdecl
GetTypeHash<Audio::FMixerSubmix_const_,1>(TWeakPtr<Audio::FMixerSubmix_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<USoundSourceBus> @ 1464d5240

FString * __cdecl GetTypeName<USoundSourceBus>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_USoundSourceBus_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<Audio::FChannelPositionInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,`Audio::FMixerDevice::InitializeChannelAzimuthMap'::__l2::FCompareByAzimuth>_> @ 1464d5280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<Audio::FChannelPositionInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::__l2::FCompareByAzimuth>_>
          (FChannelPositionInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FChannelPositionInfo,_private:_void___cdecl_Audio::FMixerDevice::InitializeChannelAzimuthMap(int)_::_2_::FCompareByAzimuth>
          param_4)

{
  FChannelPositionInfo *pFVar1;
  FChannelPositionInfo *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Type TVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  FChannelPositionInfo *pFVar18;
  
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
  iVar16 = iVar13;
  iVar17 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_1464d5373:
      if (iVar17 == 0) {
        iVar13 = param_2 + -1;
        lVar15 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar18 = param_1 + lVar15;
          do {
            fVar4 = pFVar18->Azimuth;
            fVar5 = pFVar18->Elevation;
            fVar6 = pFVar18->Radius;
            iVar16 = 0;
            TVar7 = param_1->Channel;
            fVar8 = param_1->Azimuth;
            fVar9 = param_1->Elevation;
            fVar10 = param_1->Radius;
            param_1->Channel = pFVar18->Channel;
            param_1->Azimuth = fVar4;
            param_1->Elevation = fVar5;
            param_1->Radius = fVar6;
            pFVar18->Channel = TVar7;
            pFVar18->Azimuth = fVar8;
            pFVar18->Elevation = fVar9;
            pFVar18->Radius = fVar10;
            if (1 < iVar13) {
              do {
                iVar17 = iVar16 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar13) {
                  if (param_1[(longlong)iVar17 + 2].Azimuth <= param_1[iVar12].Azimuth &&
                      param_1[iVar12].Azimuth != param_1[(longlong)iVar17 + 2].Azimuth) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                if (param_1[iVar12].Azimuth < param_1[iVar16].Azimuth ||
                    param_1[iVar12].Azimuth == param_1[iVar16].Azimuth) break;
                pFVar1 = param_1 + iVar16;
                TVar7 = pFVar1->Channel;
                fVar8 = pFVar1->Azimuth;
                fVar9 = pFVar1->Elevation;
                fVar10 = pFVar1->Radius;
                pFVar1 = param_1 + iVar12;
                fVar4 = pFVar1->Azimuth;
                fVar5 = pFVar1->Elevation;
                fVar6 = pFVar1->Radius;
                pFVar2 = param_1 + iVar16;
                pFVar2->Channel = pFVar1->Channel;
                pFVar2->Azimuth = fVar4;
                pFVar2->Elevation = fVar5;
                pFVar2->Radius = fVar6;
                pFVar1 = param_1 + iVar12;
                pFVar1->Channel = TVar7;
                pFVar1->Azimuth = fVar8;
                pFVar1->Elevation = fVar9;
                pFVar1->Radius = fVar10;
                iVar16 = iVar12;
              } while (iVar12 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar15 = lVar15 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar12 = iVar17 + -1;
      iVar13 = iVar16 + -2;
      iVar16 = iVar13;
      iVar17 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar14 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (param_1[(longlong)iVar13 + 2].Azimuth <= param_1[iVar14].Azimuth &&
          param_1[iVar14].Azimuth != param_1[(longlong)iVar13 + 2].Azimuth) {
        iVar14 = iVar13;
      }
      iVar14 = iVar14 + 1;
    }
    if (param_1[iVar14].Azimuth < param_1[iVar12].Azimuth ||
        param_1[iVar14].Azimuth == param_1[iVar12].Azimuth) goto LAB_1464d5373;
    pFVar18 = param_1 + iVar12;
    TVar7 = pFVar18->Channel;
    fVar8 = pFVar18->Azimuth;
    fVar9 = pFVar18->Elevation;
    fVar10 = pFVar18->Radius;
    pFVar18 = param_1 + iVar14;
    fVar4 = pFVar18->Azimuth;
    fVar5 = pFVar18->Elevation;
    fVar6 = pFVar18->Radius;
    pFVar1 = param_1 + iVar12;
    pFVar1->Channel = pFVar18->Channel;
    pFVar1->Azimuth = fVar4;
    pFVar1->Elevation = fVar5;
    pFVar1->Radius = fVar6;
    iVar13 = iVar14 * 2 + 1;
    pFVar18 = param_1 + iVar14;
    pFVar18->Channel = TVar7;
    pFVar18->Azimuth = fVar8;
    pFVar18->Elevation = fVar9;
    pFVar18->Radius = fVar10;
    iVar12 = iVar14;
  } while( true );
}

// InternalConstructor<UAudioBusSubsystem> @ 1464d5450

void __cdecl InternalConstructor<UAudioBusSubsystem>(FObjectInitializer *param_1)

{
  UAudioEngineSubsystem *this;
  
  this = (UAudioEngineSubsystem *)param_1->Obj;
  if (this != (UAudioEngineSubsystem *)0x0) {
    UAudioEngineSubsystem::UAudioEngineSubsystem(this);
    *(undefined ***)this = &___7UAudioBusSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x28 = 0;
    *(undefined4 *)&this[3].field_0x2c = 0x80;
    *(undefined4 *)(this + 4) = 0xffffffff;
    *(undefined4 *)&this[4].field_0x4 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001464d54fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[4].field_0x20,4000);
    return;
  }
  return;
}

// InternalConstructor<UAudioDeviceNotificationSubsystem> @ 1464d5520

void __cdecl InternalConstructor<UAudioDeviceNotificationSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined8 *)&this[2].field_0x8 = 2;
    *(undefined ***)this = &UAudioDeviceNotificationSubsystem::_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) =
         &UAudioDeviceNotificationSubsystem::
          _vftable__for__Audio__IAudioMixerDeviceChangedListener__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x28 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)&this[7].field_0x28 = 0;
    *(undefined8 *)&this[3].field_0x10 = 2;
    *(undefined8 *)&this[4].field_0x18 = 2;
    *(undefined8 *)&this[5].field_0x20 = 2;
    *(undefined8 *)&this[6].field_0x28 = 2;
    *(undefined8 *)(this + 8) = 2;
  }
  return;
}

// InternalConstructor<UAudioMixerBlueprintLibrary> @ 1464d5680

void __cdecl InternalConstructor<UAudioMixerBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAudioMixerBlueprintLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioBusSubsystem> @ 1464d56b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioBusSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioBusSubsystem::GetPrivateStaticClass();
  this = (UAudioEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioEngineSubsystem *)0x0) {
    UAudioEngineSubsystem::UAudioEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UAudioBusSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x28 = 0;
    *(undefined4 *)&this[3].field_0x2c = 0x80;
    *(undefined4 *)(this + 4) = 0xffffffff;
    *(undefined4 *)&this[4].field_0x4 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[4].field_0x20,4000);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioDeviceNotificationSubsystem> @ 1464d57f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioDeviceNotificationSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioDeviceNotificationSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UAudioDeviceNotificationSubsystem::_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) =
         &UAudioDeviceNotificationSubsystem::
          _vftable__for__Audio__IAudioMixerDeviceChangedListener__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 2;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 2;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 2;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x28 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 2;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x28 = 2;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)&this[7].field_0x28 = 0;
    *(undefined8 *)(this + 8) = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMixerBlueprintLibrary> @ 1464d5800

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioMixerBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMixerBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioMixerBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<Audio::FChannelPositionInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,`Audio::FMixerDevice::InitializeChannelAzimuthMap'::__l2::FCompareByAzimuth>_> @ 1464d58b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<Audio::FChannelPositionInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::__l2::FCompareByAzimuth>_>
          (FChannelPositionInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Audio::FChannelPositionInfo,_private:_void___cdecl_Audio::FMixerDevice::InitializeChannelAzimuthMap(int)_::_2_::FCompareByAzimuth>
          param_4)

{
  FChannelPositionInfo *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  Type TVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  FChannelPositionInfo *pFVar13;
  FChannelPositionInfo *pFVar14;
  FChannelPositionInfo *pFVar15;
  FChannelPositionInfo **ppFVar16;
  FChannelPositionInfo *pFVar17;
  FChannelPositionInfo *pFVar18;
  FChannelPositionInfo *pFVar19;
  float fVar20;
  undefined1 auStack_368 [48];
  FChannelPositionInfo *local_338;
  FChannelPositionInfo *local_328;
  FChannelPositionInfo *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar20;
    memset(local_310,0,0x2e8);
    ppFVar16 = &local_328;
    do {
      pFVar18 = ppFVar16[1];
      pFVar15 = *ppFVar16;
      pFVar1 = ppFVar16[2];
      iVar12 = (int)((longlong)pFVar18 - (longlong)pFVar15 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar19 = pFVar15;
      if ((int)local_338 != 0) {
LAB_1464d5960:
        if (8 < iVar12) {
          fVar20 = pFVar19->Azimuth;
          fVar6 = pFVar19->Elevation;
          fVar7 = pFVar19->Radius;
          pFVar13 = pFVar18 + 1;
          pFVar15 = pFVar19 + iVar12 / 2;
          TVar8 = pFVar15->Channel;
          fVar9 = pFVar15->Azimuth;
          fVar10 = pFVar15->Elevation;
          fVar11 = pFVar15->Radius;
          pFVar15 = pFVar19 + iVar12 / 2;
          pFVar15->Channel = pFVar19->Channel;
          pFVar15->Azimuth = fVar20;
          pFVar15->Elevation = fVar6;
          pFVar15->Radius = fVar7;
          pFVar19->Channel = TVar8;
          pFVar19->Azimuth = fVar9;
          pFVar19->Elevation = fVar10;
          pFVar19->Radius = fVar11;
          pFVar15 = pFVar19;
LAB_1464d5990:
          pFVar14 = pFVar15;
          pFVar15 = pFVar14 + 1;
          if (pFVar15 <= pFVar18) goto code_r0x0001464d5999;
          goto LAB_1464d59a5;
        }
        if (pFVar19 < pFVar18) {
          pFVar1 = pFVar19 + 1;
          do {
            pFVar15 = pFVar19;
            if (pFVar1 <= pFVar18) {
              pFVar13 = pFVar1;
              if (0x3f < ((longlong)pFVar18 + (0x10 - (longlong)pFVar1) & 0xfffffffffffffff0U)) {
                do {
                  if (pFVar15->Azimuth < pFVar13->Azimuth) {
                    pFVar15 = pFVar13;
                  }
                  if (pFVar15->Azimuth <= pFVar13[1].Azimuth &&
                      pFVar13[1].Azimuth != pFVar15->Azimuth) {
                    pFVar15 = pFVar13 + 1;
                  }
                  if (pFVar15->Azimuth <= pFVar13[2].Azimuth &&
                      pFVar13[2].Azimuth != pFVar15->Azimuth) {
                    pFVar15 = pFVar13 + 2;
                  }
                  if (pFVar15->Azimuth <= pFVar13[3].Azimuth &&
                      pFVar13[3].Azimuth != pFVar15->Azimuth) {
                    pFVar15 = pFVar13 + 3;
                  }
                  pFVar13 = pFVar13 + 4;
                } while (pFVar13 <= pFVar18 + -3);
              }
              for (; pFVar13 <= pFVar18; pFVar13 = pFVar13 + 1) {
                if (pFVar15->Azimuth < pFVar13->Azimuth) {
                  pFVar15 = pFVar13;
                }
              }
            }
            TVar8 = pFVar15->Channel;
            fVar9 = pFVar15->Azimuth;
            fVar10 = pFVar15->Elevation;
            fVar11 = pFVar15->Radius;
            pFVar13 = pFVar18 + -1;
            fVar20 = pFVar18->Azimuth;
            fVar6 = pFVar18->Elevation;
            fVar7 = pFVar18->Radius;
            pFVar15->Channel = pFVar18->Channel;
            pFVar15->Azimuth = fVar20;
            pFVar15->Elevation = fVar6;
            pFVar15->Radius = fVar7;
            pFVar18->Channel = TVar8;
            pFVar18->Azimuth = fVar9;
            pFVar18->Elevation = fVar10;
            pFVar18->Radius = fVar11;
            pFVar18 = pFVar13;
          } while (pFVar19 < pFVar13);
        }
        goto LAB_1464d5a69;
      }
LAB_1464d5a58:
      local_338 = pFVar1;
      HeapSortInternal<Audio::FChannelPositionInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::__l2::FCompareByAzimuth>_>
                (pFVar15,iVar12,param_3,param_4);
LAB_1464d5a69:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_328 <= ppFVar16);
  }
  return;
code_r0x0001464d5999:
  if (pFVar14[1].Azimuth < pFVar19->Azimuth || pFVar14[1].Azimuth == pFVar19->Azimuth)
  goto LAB_1464d5990;
LAB_1464d59a5:
  do {
    pFVar17 = pFVar13;
    pFVar13 = pFVar17 + -1;
    if (pFVar13 <= pFVar19) break;
  } while (pFVar19->Azimuth < pFVar17[-1].Azimuth || pFVar19->Azimuth == pFVar17[-1].Azimuth);
  uVar2 = pFVar13->Channel;
  uVar3 = pFVar13->Azimuth;
  uVar4 = pFVar17[-1].Elevation;
  uVar5 = pFVar17[-1].Radius;
  if (pFVar15 <= pFVar13) {
    TVar8 = pFVar15->Channel;
    fVar20 = pFVar15->Azimuth;
    fVar6 = pFVar14[1].Elevation;
    fVar7 = pFVar14[1].Radius;
    pFVar15->Channel = uVar2;
    pFVar15->Azimuth = (float)uVar3;
    pFVar14[1].Elevation = (float)uVar4;
    pFVar14[1].Radius = (float)uVar5;
    pFVar13->Channel = TVar8;
    pFVar13->Azimuth = fVar20;
    pFVar17[-1].Elevation = fVar6;
    pFVar17[-1].Radius = fVar7;
    goto LAB_1464d5990;
  }
  TVar8 = pFVar19->Channel;
  fVar20 = pFVar19->Azimuth;
  fVar6 = pFVar19->Elevation;
  fVar7 = pFVar19->Radius;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar19->Channel = uVar2;
  pFVar19->Azimuth = (float)uVar3;
  pFVar19->Elevation = (float)uVar4;
  pFVar19->Radius = (float)uVar5;
  pFVar13->Channel = TVar8;
  pFVar13->Azimuth = fVar20;
  pFVar17[-1].Elevation = fVar6;
  pFVar17[-1].Radius = fVar7;
  if ((longlong)((longlong)pFVar13 + (-0x10 - (longlong)pFVar19) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar18 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar18) {
      *ppFVar16 = pFVar15;
      ppFVar16[1] = pFVar18;
      *(int *)(ppFVar16 + 2) = (int)local_338;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar13 <= pFVar19 + 1) goto LAB_1464d5a69;
    pFVar18 = pFVar17 + -2;
    pFVar15 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar13) {
      *ppFVar16 = pFVar19;
      ppFVar16[1] = pFVar17 + -2;
      *(int *)(ppFVar16 + 2) = (int)local_338;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar18 <= pFVar15) goto LAB_1464d5a69;
  }
  iVar12 = (int)((longlong)pFVar18 - (longlong)pFVar15 >> 4) + 1;
  pFVar19 = pFVar15;
  if ((int)local_338 == 0) goto LAB_1464d5a58;
  goto LAB_1464d5960;
}

// NewObject<USoundSubmix> @ 1464d5ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundSubmix * __cdecl
NewObject<USoundSubmix>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  USoundSubmix *pUVar2;
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
  pUVar1 = Z_Construct_UClass_USoundSubmix_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (USoundSubmix *)
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

// Reverse<TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_> @ 1464d6960

void __cdecl
AlgoImpl::Reverse<TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>
          (TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId> *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      uVar1 = *(undefined8 *)&pTVar4->field_0x8;
      uVar2 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)&param_1->field_0x8;
      *(undefined8 *)param_1 = *(undefined8 *)pTVar4;
      *(undefined8 *)&param_1->field_0x8 = uVar1;
      param_1 = param_1 + 1;
      *(undefined8 *)pTVar4 = uVar2;
      *(undefined8 *)&pTVar4->field_0x8 = uVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// StaticEnum<enum_EAudioDeviceChangedRole> @ 1464d69b0

UEnum * __cdecl StaticEnum<enum_EAudioDeviceChangedRole>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole,(UObject *)pUVar1,
                       L"EAudioDeviceChangedRole");
  }
  return Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton;
}

// StaticEnum<enum_EAudioDeviceChangedState> @ 1464d69f0

UEnum * __cdecl StaticEnum<enum_EAudioDeviceChangedState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState,(UObject *)pUVar1,
                       L"EAudioDeviceChangedState");
  }
  return Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton;
}

// StaticEnum<enum_EAudioMixerChannelType> @ 1464d6a30

UEnum * __cdecl StaticEnum<enum_EAudioMixerChannelType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType,(UObject *)pUVar1,
                       L"EAudioMixerChannelType");
  }
  return Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton;
}

// StaticEnum<enum_EAudioMixerStreamDataFormatType> @ 1464d6a70

UEnum * __cdecl StaticEnum<enum_EAudioMixerStreamDataFormatType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType,
                       (UObject *)pUVar1,L"EAudioMixerStreamDataFormatType");
  }
  return Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton;
}

// StaticEnum<enum_EMusicalNoteName> @ 1464d6ab0

UEnum * __cdecl StaticEnum<enum_EMusicalNoteName>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_EMusicalNoteName,(UObject *)pUVar1,
                       L"EMusicalNoteName");
  }
  return Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton;
}

// StaticEnum<enum_ERequiredSubmixes> @ 1464d6af0

UEnum * __cdecl StaticEnum<enum_ERequiredSubmixes>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ERequiredSubmixes,(UObject *)pUVar1,
                       L"ERequiredSubmixes");
  }
  return Z_Registration_Info_UEnum_ERequiredSubmixes.OuterSingleton;
}

// StaticEnum<enum_ESourceManagerRenderThreadPhase> @ 1464d6b30

UEnum * __cdecl StaticEnum<enum_ESourceManagerRenderThreadPhase>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase,
                       (UObject *)pUVar1,L"ESourceManagerRenderThreadPhase");
  }
  return Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton;
}

// StaticEnum<enum_ESwapAudioOutputDeviceResultState> @ 1464d6b70

UEnum * __cdecl StaticEnum<enum_ESwapAudioOutputDeviceResultState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState,
                       (UObject *)pUVar1,L"ESwapAudioOutputDeviceResultState");
  }
  return Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton;
}

// Transform<TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_>,TArray<FAudioOutputDeviceInfo,TSizedDefaultAllocator<32>_>_&,`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l17::<lambda_2>_> @ 1464d6bb0

/* WARNING: Removing unreachable block (ram,0x0001464d6d4e) */
/* WARNING: Removing unreachable block (ram,0x0001464d6d5c) */
/* WARNING: Removing unreachable block (ram,0x0001464d6d6a) */

void __cdecl
Algo::
Transform<TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_>,TArray<FAudioOutputDeviceInfo,TSizedDefaultAllocator<32>_>_&,_UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices_::__l17::<lambda_2>_>
          (TArray<Audio::FAudioPlatformDeviceInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FAudioOutputDeviceInfo,TSizedDefaultAllocator<32>_> *param_2,<lambda_2> param_3)

{
  FAudioPlatformDeviceInfo *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FAudioOutputDeviceInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  FAudioPlatformDeviceInfo *pFVar10;
  undefined1 local_res8 [8];
  FAudioOutputDeviceInfo local_78;
  
  iVar3 = param_1->ArrayNum;
  pFVar10 = (FAudioPlatformDeviceInfo *)(param_1->AllocatorInstance).Data;
  pFVar1 = pFVar10 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FAudioPlatformDeviceInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    FAudioOutputDeviceInfo::FAudioOutputDeviceInfo(&local_78,pFVar10);
    pFVar4 = (FAudioOutputDeviceInfo *)(param_2->AllocatorInstance).Data;
    if (((pFVar4 <= &local_78) && (&local_78 < pFVar4 + param_2->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar9;
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar5 = (param_2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x48) = 0;
    pFVar5 = pFVar5 + (longlong)iVar9 * 0x48;
    *(FScriptContainerElement **)pFVar5 = local_78.Name.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + 8) = local_78.Name.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_78.Name.Data.ArrayMax;
    *(undefined8 *)(pFVar5 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar5 + 0x10) = local_78.DeviceId.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + 0x18) = local_78.DeviceId.Data.ArrayNum;
    *(int *)(pFVar5 + 0x1c) = local_78.DeviceId.Data.ArrayMax;
    *(int *)(pFVar5 + 0x20) = local_78.NumChannels;
    *(int *)(pFVar5 + 0x24) = local_78.SampleRate;
    *(undefined8 *)(pFVar5 + 0x30) = 0;
    pFVar5[0x28] = (FScriptContainerElement)local_78.Format;
    *(FScriptContainerElement **)(pFVar5 + 0x30) =
         local_78.OutputChannelArray.AllocatorInstance.Data;
    *(int *)(pFVar5 + 0x38) = local_78.OutputChannelArray.ArrayNum;
    *(int *)(pFVar5 + 0x3c) = local_78.OutputChannelArray.ArrayMax;
    bVar8 = local_78.bIsSystemDefault;
    FVar2 = pFVar5[0x40];
    pFVar5[0x40] = (FScriptContainerElement)((byte)FVar2 & 0xfe | bVar8);
    pFVar5[0x40] = (FScriptContainerElement)((byte)FVar2 & 0xfc | bVar8 | local_78._64_1_ & 2);
    local_78.OutputChannelArray.ArrayNum = 0;
    local_78.OutputChannelArray.ArrayMax = 0;
    local_78.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.DeviceId.Data.ArrayNum = 0;
    local_78.DeviceId.Data.ArrayMax = 0;
    local_78.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Name.Data.ArrayNum = 0;
    local_78.Name.Data.ArrayMax = 0;
    local_78.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10 = pFVar10 + 1;
  }
  return;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_ESourceManagerRenderThreadPhase>_> @ 1464d6ee0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_ESourceManagerRenderThreadPhase>_>
          (_Atomic_padded<ESourceManagerRenderThreadPhase> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_ESourceManagerRenderThreadPhase>_> @ 1464d6ef0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_ESourceManagerRenderThreadPhase>_>
          (_Atomic_padded<ESourceManagerRenderThreadPhase> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>_> @ 1464d6f00

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>_> @ 1464d6f10

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>_> @ 1464d6f20

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>_> @ 1464d6f30

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>_> @ 1464d6f40

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>_> @ 1464d6f50

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<char,enum_ESourceManagerRenderThreadPhase> @ 1464d6f60

char __cdecl
std::_Atomic_reinterpret_as<char,enum_ESourceManagerRenderThreadPhase>
          (ESourceManagerRenderThreadPhase *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*> @ 1464d6f70

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> @ 1464d6f80

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> @ 1464d6f90

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// get<1,TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_&> @ 1464d6fa0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::FMixerAudioBus,1> * __cdecl
get<1,TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_&>
          (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *param_1)

{
  return (TSharedPtr<Audio::FMixerAudioBus,1> *)&param_1->field_0x8;
}

// get<1,TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_const_&> @ 1464d6fb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::FMixerAudioBus,1> * __cdecl
get<1,TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_const_&>
          (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *param_1)

{
  return (TSharedPtr<Audio::FMixerAudioBus,1> *)&param_1->field_0x8;
}

// get<0,TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_&> @ 1464d6fc0

FAudioBusKey * __cdecl
get<0,TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_&>
          (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *param_1)

{
  return (FAudioBusKey *)param_1;
}

// get<0,TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_const_&> @ 1464d6fd0

FAudioBusKey * __cdecl
get<0,TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_const_&>
          (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *param_1)

{
  return (FAudioBusKey *)param_1;
}

// FThreadSafeStaticStat<`Audio::FAsyncDecodeWorker::GetStatId'::__l2::FStat_FAsyncDecodeWorker> @ 1464d73b0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const_::_2_::FStat_FAsyncDecodeWorker>
* __thiscall
FThreadSafeStaticStat<`Audio::FAsyncDecodeWorker::GetStatId'::__l2::FStat_FAsyncDecodeWorker>::
FThreadSafeStaticStat<_Audio::FAsyncDecodeWorker::GetStatId_::__l2::FStat_FAsyncDecodeWorker>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FAsyncDecodeWorker");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FAsyncDecodeWorker","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,1,0> @ 1464da2c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<__Audio::FMixerSourceManager::ResetSourceEffectChain_::__l6::<lambda_1>::operator()_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::`6'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
            (*(TSharedPtr<FSoundEffectSource,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>,1,1> @ 1464da300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__UAudioMixerBlueprintLibrary::PrimeSoundForPlayback_::__l25::<lambda_1>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::`25'::<lambda_1>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,0,1> @ 1464da320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::AddMainSubmixEffect_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1> @ 1464da340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  ::Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1> @ 1464da360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,0,0> @ 1464da380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::ClearMainSubmixEffects_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>,0,1> @ 1464da3a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::ClearSubmixSendInfo_::__l2::<lambda_1>,0,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001464da3ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>,0,1> @ 1464da3e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::InitSource_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::`2'::<lambda_1>,0,1>::
        _vftable_;
  `Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>,1,1> @ 1464da400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// ~TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>,1,1> @ 1464da420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// ~TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>,1,1> @ 1464da440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UAudioDeviceNotificationSubsystem::OnDeviceAdded_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>,1,1> @ 1464da460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UAudioDeviceNotificationSubsystem::OnDeviceRemoved_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>,1,1> @ 1464da480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UAudioDeviceNotificationSubsystem::OnDeviceStateChanged_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>,1,1> @ 1464da4a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UAudioDeviceNotificationSubsystem::OnDeviceSwitched_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>,0,0> @ 1464da4c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::Pause_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::__l2::<lambda_1>,0,0> @ 1464da4e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::Play_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1> @ 1464da500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::RegisterSubmixBufferListener_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1> @ 1464da520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::RegisterSubmixBufferListener_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>,0,0> @ 1464da560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::ReleaseSourceId_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,0,0> @ 1464da580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::RemoveMainSubmixEffect_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>,0,1> @ 1464da5a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetBusSendInfo_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::`2'::<lambda_1>,0,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x20);
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

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>,0,1> @ 1464da5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetChannelMap_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::`2'::<lambda_1>,0,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>,0,0> @ 1464da5e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetDistanceAttenuation_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>,0,0> @ 1464da600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetHPFFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>,0,0> @ 1464da620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetLPFFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,0,1> @ 1464da640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetListenerTransforms_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>,0,0> @ 1464da660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetModHPFFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>,0,0> @ 1464da680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetModLPFFrequency_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>,0,0> @ 1464da6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetModPitch_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>,0,0> @ 1464da6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetModVolume_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>,0,1> @ 1464da6e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetModulationRouting_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x40));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>,0,0> @ 1464da730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetPitch_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>,0,1> @ 1464da750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetSourceBufferListener_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>,0,1> @ 1464da770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetSpatializationParams_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>,0,1> @ 1464da790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetSubmixSendInfo_::__l2::<lambda_1>,0,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001464da7ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>,0,0> @ 1464da7d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::SetVolume_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>,0,1> @ 1464da7f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::StartAudioBus_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::`2'::<lambda_1>,0,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x20);
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

// ~TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,1> @ 1464da810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::__l2::<lambda_1>,0,0> @ 1464da830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::Stop_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,0,0> @ 1464da850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::StopAudioBus_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>,0,0> @ 1464da870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::StopFade_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,0> @ 1464da890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1> @ 1464da8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::UnregisterSubmixBufferListener_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1> @ 1464da8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::UnregisterSubmixBufferListener_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x20);
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

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,0,0> @ 1464da8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::UpdateDeviceChannelCount_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>,1,1> @ 1464da910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::UpdateSourceEffectChain_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::`2'::<lambda_1>,1,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,0,1> @ 1464da930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::UpdateSourceEffectChain_::__l2::<lambda_1>,0,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// ~TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1> @ 1464da950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__Audio::FMixerSourceManager::Init_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1> @ 1464da970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::AddEnvelopeFollowerDelegate_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1> @ 1464da990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::AddSpectralAnalysisDelegate_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::__l5::<lambda_1>,0,1> @ 1464da9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::AddSubmixEffect_::__l5::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::`5'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::__l5::<lambda_1>,0,1> @ 1464daa00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::ClearSubmixEffectChainOverride_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,0,0> @ 1464daa20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::ClearSubmixEffects_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::`5'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0> @ 1464daa40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1> @ 1464daa60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged_::__l5::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0> @ 1464daa80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1> @ 1464daaa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged_::__l5::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// ~TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>,1,0> @ 1464daac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::PauseRecording_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::`5'::<lambda_1>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1> @ 1464daae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1> @ 1464dab00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::RemoveSpectralAnalysisDelegate_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,0,1> @ 1464dab20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::RemoveSubmixEffect_::__l5::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::`5'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,0,1> @ 1464dab40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::RemoveSubmixEffectAtIndex_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::__l5::<lambda_1>,0,1> @ 1464dab60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::ReplaceSoundEffectSubmix_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>,1,0> @ 1464dab90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::ResumeRecording_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l5::<lambda_1>,1,1> @ 1464dabb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixAutoDisable_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l5::<lambda_1>,1,1> @ 1464dabd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixAutoDisableTime_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l5::<lambda_1>,1,1> @ 1464dabf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixDryLevel_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>,0,1> @ 1464dac10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixEffectChainOverride_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
            (*(TSharedPtr<FSoundEffectSubmix,1> **)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l5::<lambda_1>,1,1> @ 1464dac60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixModulationBaseLevels_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l5::<lambda_1>,1,1> @ 1464dac80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixOutputVolume_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l5::<lambda_1>,1,1> @ 1464daca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixWetDryLevel_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l5::<lambda_1>,1,1> @ 1464dacc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixWetLevel_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l5::<lambda_1>,1,1> @ 1464dace0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UAudioBusSubsystem::StartAudioBus_::__l5::<lambda_1>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::`5'::<lambda_1>,1,1>::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// ~TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>,1,0> @ 1464dad00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::StartEnvelopeFollowing_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>,1,1> @ 1464dad20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::StartRecording_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::`5'::<lambda_1>,1,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>,1,1> @ 1464dad40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::StartSpectrumAnalysis_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::`5'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>,1,0> @ 1464dad60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UAudioBusSubsystem::StopAudioBus_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>,1,0> @ 1464dad80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::StopEnvelopeFollowing_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>,1,0> @ 1464dada0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::StopSpectrumAnalysis_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>,1,1> @ 1464dadc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::UpdateSubmixModulationSettings_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  `Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>,1,0> @ 1464dade0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::ResetSourceEffectChain_::__l6::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::`6'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
            (*(TSharedPtr<FSoundEffectSource,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l8::<lambda_1>,1,1> @ 1464dae20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l8::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices_::__l8::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l8::<lambda_1>,1,1> @ 1464dae40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l8::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName_::__l8::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l8::<lambda_1>,1,1> @ 1464dae60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::SwapAudioOutputDevice_::__l8::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>,1,1> @ 1464daea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::UnregisterSoundSubmix_::__l8::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::`8'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::__l10::<lambda_1>,0,1> @ 1464daec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::__l10::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::AddPatchInputForAudioBus_::__l10::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::`10'::<lambda_1>,0,1>
        ::_vftable_;
  ::Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::__l10::<lambda_1>,0,1> @ 1464daee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::__l10::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Audio::FMixerSourceManager::AddPatchOutputForAudioBus_::__l10::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::`10'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>,0,1> @ 1464daf00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::LoadPluginSoundSubmixes_::__l25::<lambda_1>,0,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::`25'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001464daf41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,0,1> @ 1464daf60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::PrimeSoundForPlayback_::__l25::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::`25'::<lambda_1>,0,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>,1,1> @ 1464daf80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::RegisterSoundSubmix_::__l29::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::`29'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::__l46::<lambda_1>,1,1> @ 1464dafa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::__l46::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::UpdateHardware_::__l46::<lambda_1>,1,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::`46'::<lambda_1>,1,1>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001464dafca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,1,1> @ 1464dafe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix_::__l47::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::`47'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,1,1> @ 1464db000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix_::__l47::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::`47'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>,0,0> @ 1464db020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::StopRecordingOutput_::__l51::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::`51'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::__l74::<lambda_1>,1,0> @ 1464db040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::__l74::<lambda_1>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::InitSoundSubmixes_::__l74::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::`74'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,1,0> @ 1464db060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,1,0>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SendSubmixesAlivePing_::__l5::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::`5'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l8::<lambda_2>,0,1> @ 1464db080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l8::<lambda_2>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixAutoDisable_::__l8::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l8::<lambda_2>,0,1> @ 1464db0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l8::<lambda_2>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixAutoDisableTime_::__l8::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::`8'::<lambda_2>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l8::<lambda_2>,0,1> @ 1464db0c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l8::<lambda_2>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixDryLevel_::__l8::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l8::<lambda_2>,0,1> @ 1464db0e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l8::<lambda_2>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixModulationBaseLevels_::__l8::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::`8'::<lambda_2>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l8::<lambda_2>,0,1> @ 1464db100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l8::<lambda_2>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixOutputVolume_::__l8::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>,0,1> @ 1464db120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixWetDryLevel_::__l8::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l8::<lambda_2>,0,1> @ 1464db140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l8::<lambda_2>,0,1>::
~TFunction_OwnedObject<_Audio::FMixerDevice::SetSubmixWetLevel_::__l8::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l13::<lambda_2>,0,1> @ 1464db160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l13::<lambda_2>,0,1>::
~TFunction_OwnedObject<_UAudioBusSubsystem::StartAudioBus_::__l13::<lambda_2>,0,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::`13'::<lambda_2>,0,1>::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// ~TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l13::<lambda_2>,0,0> @ 1464db180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l13::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UAudioBusSubsystem::StopAudioBus_::__l13::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::`13'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>,1,1> @ 1464db1a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName_::__l14::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::`14'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>,1,1> @ 1464db1e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>,1,1>::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::SwapAudioOutputDevice_::__l14::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::`14'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>,1,1> @ 1464db230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>,1,1>
::
~TFunction_OwnedObject<_UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices_::__l2::<lambda_3>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::`2'::<lambda_3>,1,1>
        ::_vftable_;
  DestructItems<FAudioOutputDeviceInfo,int>
            (*(FAudioOutputDeviceInfo **)((longlong)this + 0x20),*(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  return;
}

// operator() @ 1464ddcb0

void __thiscall
``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  TSharedPtr<FSoundEffectBase,1> local_18;
  
  iVar1 = *(int *)((longlong)this + 8);
  puVar2 = *(undefined8 **)this;
  puVar3 = puVar2 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FSoundEffectSource,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar2 == puVar3) break;
    local_18.Object = (FSoundEffectBase *)*puVar2;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    USoundEffectPreset::UnregisterInstance(&local_18);
    puVar2 = puVar2 + 2;
  }
  return;
}

// operator() @ 1464ddd40

void __thiscall
``Audio::FMixerSourceManager::Init'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

// operator() @ 1464ddd50

void __thiscall
``Audio::FMixerSourceManager::Init'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

// `vector_deleting_destructor'`adjustor{2720}' @ 1464e8460

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FMixerDevice::`vector deleting
   destructor'`adjustor{2720}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FMixerDevice::_vector_deleting_destructor__adjustor_2720__(FMixerDevice *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMixerDevice *)&this[-1].field_0x420,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{168}' @ 1464e8474

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FMixerSource::`vector deleting
   destructor'`adjustor{168}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FMixerSource::_vector_deleting_destructor__adjustor_168__(FMixerSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMixerSource *)&this[-1].SpatializationParams.NormalizedOmniRadius,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1464e8488

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioDeviceNotificationSubsystem::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAudioDeviceNotificationSubsystem::_vector_deleting_destructor__adjustor_48__
          (UAudioDeviceNotificationSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioDeviceNotificationSubsystem *)&this[-1].DeviceSwitched.field_0x8,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1464e84a0

void * __thiscall
FAsyncTask<Audio::FAsyncDecodeWorker>::_scalar_deleting_destructor_
          (FAsyncTask<Audio::FAsyncDecodeWorker> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Task).ProceduralTaskData.SoundGenerator.SharedReferenceCount.ReferenceController
            );
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e84f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Audio::FMixerSourceManager::Init'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8520

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Audio::FMixerSourceManager::Init'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8550

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Audio::FMixerSourceManager::Init'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Audio::FMixerSourceManager::Init'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e85b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e85e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerDevice,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8610

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8640

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FMixerSourceManager,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8670

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``Audio::FMixerSourceManager::GenerateSourceAudio'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1464e86e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`Audio::FMixerSourceManager::GenerateSourceAudio'::__l8::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 1464e8750

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``Audio::FMixerSourceManager::GenerateSourceAudio'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8790

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Audio::FMixerSourceManager::GenerateSourceAudio'::__l8::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e87d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Audio::FMixerSourceManager::ResetSourceEffectChain'::`6'::<lambda_1>::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
            (*(TSharedPtr<FSoundEffectSource,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::`25'::<lambda_1>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e88d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  ::Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e89b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::`2'::<lambda_1>,0,1>::
        _vftable_;
  `Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x330);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8df0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e8fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e90a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x40));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e91a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e91e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e92e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e93a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e93e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e94b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e94f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e95d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x40));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::`5'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e96e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::`5'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e97c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e98a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::`5'::<lambda_1>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e98e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::`5'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e99d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
            (*(TSharedPtr<FSoundEffectSubmix,1> **)((longlong)this + 0x18),
             *(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::`5'::<lambda_1>,1,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::`5'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  `Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::`6'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
            (*(TSharedPtr<FSoundEffectSource,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l8::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464e9fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l8::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::`8'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::__l10::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::`10'::<lambda_1>,0,1>
        ::_vftable_;
  ::Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::__l10::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::`10'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::`25'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  plVar3 = *(longlong **)((longlong)this + 0x10);
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
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::__l25::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::PrimeSoundForPlayback'::`25'::<lambda_1>,0,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::`29'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::__l46::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::`46'::<lambda_1>,1,1>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x18);
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
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea2c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::__l47::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::RegisterAudioBusToSubmix'::`47'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::__l47::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::UnregisterAudioBusFromSubmix'::`47'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::__l51::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::StopRecordingOutput'::`51'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::__l74::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::`74'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea3c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::`5'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l8::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l8::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::`8'::<lambda_2>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::__l8::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l8::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::`8'::<lambda_2>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l8::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea5e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::__l8::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::`8'::<lambda_2>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::__l13::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::`13'::<lambda_2>,0,1>::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::__l13::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::`13'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea6c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::__l14::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName'::`14'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::__l14::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::SwapAudioOutputDevice'::`14'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::__l2::<lambda_3>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices'::`2'::<lambda_3>,1,1>
        ::_vftable_;
  DestructItems<FAudioOutputDeviceInfo,int>
            (*(FAudioOutputDeviceInfo **)((longlong)this + 0x20),*(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea810

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Audio::FModulationDestination::FModulationDestinationData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FModulationDestination::FModulationDestinationData,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea850

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<float,TAlignedHeapAllocator<16>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<float,TAlignedHeapAllocator<16>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea890

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FMixerAudioBus,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FMixerAudioBus,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea8d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FMixerSubmix,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FMixerSubmix,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea910

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FMixerSourceBuffer,SharedPointerInternals::DefaultDeleter<Audio::FMixerSourceBuffer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FMixerSourceBuffer,SharedPointerInternals::DefaultDeleter<Audio::FMixerSourceBuffer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea950

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSoundEffectSource,SharedPointerInternals::DefaultDeleter<FSoundEffectSource>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSoundEffectSource,SharedPointerInternals::DefaultDeleter<FSoundEffectSource>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea990

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSoundEffectSubmix,SharedPointerInternals::DefaultDeleter<FSoundEffectSubmix>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSoundEffectSubmix,SharedPointerInternals::DefaultDeleter<FSoundEffectSubmix>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ea9d0

void * __thiscall
FAudioEffectParameters::_scalar_deleting_destructor_(FAudioEffectParameters *this,uint param_1)

{
  *this = (FAudioEffectParameters)&___7FAudioEffectParameters__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eaa10

void * __thiscall
FAudioEffectsManager::_scalar_deleting_destructor_(FAudioEffectsManager *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAudioEffectsManager__6B_;
  (this->DestinationEQEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->CurrentEQEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->SourceEQEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->DestinationReverbEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->PrevReverbEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->CurrentReverbEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->SourceReverbEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eaa80

void * __thiscall
Audio::FAudioMixerEffectsManager::_scalar_deleting_destructor_
          (FAudioMixerEffectsManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FAudioMixerEffectsManager_Audio__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InvalidEQEffect).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InvalidReverbEffect).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->MasterReverbWetLevelCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->MasterReverbWetLevelCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->MasterReverbWetLevelCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->MasterReverbWetLevelCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->MasterReverbWetLevelCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MasterReverbWetLevelCurve).EditorCurveData._padding_);
  this->_padding_ = (longlong)&___7FAudioEffectsManager__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  this->_padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eab80

void * __thiscall
Audio::FDecodeHandle::_scalar_deleting_destructor_(FDecodeHandle *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FDecodeHandleBase_Audio__6B_;
  if (*(FAsyncTaskBase **)&this->field_0x8 != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)&this->field_0x8,true,false);
    plVar1 = *(longlong **)&this->field_0x8;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  *(undefined ***)this = &___7IAudioTask_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eac00

void * __thiscall
Audio::FDecodeHandleBase::_scalar_deleting_destructor_(FDecodeHandleBase *this,uint param_1)

{
  FAsyncTask<Audio::FAsyncDecodeWorker> *pFVar1;
  
  this->_padding_ = (longlong)&___7FDecodeHandleBase_Audio__6B_;
  if (this->Task != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Task,true,false);
    pFVar1 = this->Task;
    if (pFVar1 != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  this->_padding_ = (longlong)&___7IAudioTask_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eac80

void * __thiscall
Audio::FHeaderDecodeHandle::_scalar_deleting_destructor_(FHeaderDecodeHandle *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FDecodeHandleBase_Audio__6B_;
  if (*(FAsyncTaskBase **)&this->field_0x8 != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)&this->field_0x8,true,false);
    plVar1 = *(longlong **)&this->field_0x8;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  *(undefined ***)this = &___7IAudioTask_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ead00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FMixerAudioBus::_scalar_deleting_destructor_(FMixerAudioBus *this,uint param_1)

{
  ~FMixerAudioBus(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464ead40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall Audio::FMixerBuffer::_scalar_deleting_destructor_(FMixerBuffer *this,uint param_1)

{
  ICompressedAudioInfo *pIVar1;
  
  this->_padding_ = (longlong)&___7FMixerBuffer_Audio__6B_;
  if ((char)this->_padding_ != '\0') {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  pIVar1 = this->DecompressionState;
  if (pIVar1 != (ICompressedAudioInfo *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    this->DecompressionState = (ICompressedAudioInfo *)0x0;
  }
  if (((this->BufferType == PCM) ||
      ((this->BufferType == PCMPreview && (this->bIsDynamicResource != false)))) &&
     (this->Data != (uchar *)0x0)) {
    FMemory::Free(this->Data);
  }
  FSoundBuffer::~FSoundBuffer((FSoundBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eadf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall Audio::FMixerDevice::_scalar_deleting_destructor_(FMixerDevice *this,uint param_1)

{
  ~FMixerDevice(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xec0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eae30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall Audio::FMixerSource::_scalar_deleting_destructor_(FMixerSource *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  bool bVar8;
  void *pvVar9;
  
  this->_padding_ = (longlong)&_vftable__for__FSoundSource__;
  this->_padding_ = (longlong)&_vftable__for__Audio__ISourceListener__;
  FreeResources(this);
  (this->PreviousSubmixSends).HashSize = 0;
  FVar3 = (this->PreviousSubmixSends).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<Audio::FMixerSubmix,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreviousSubmixSends).Elements);
  DestructItems<Audio::FMixerSource::FDynamicBusSendInfo,int>
            ((FDynamicBusSendInfo *)(this->DynamicBusSendInfos).AllocatorInstance.Data,
             (this->DynamicBusSendInfos).ArrayNum);
  pFVar4 = (this->DynamicBusSendInfos).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ChannelMapLock);
  if (BVar7 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar6)();
      return pvVar9;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ChannelMapLock);
  }
  pFVar4 = (this->ChannelMap).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->PreviousSubmixResolved).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioLink).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MixerSourceBuffer).SharedReferenceCount.ReferenceController);
  FSoundSource::~FSoundSource((FSoundSource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eaf80

void * __thiscall
Audio::FMixerSourceBuffer::_scalar_deleting_destructor_(FMixerSourceBuffer *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ICompressedAudioInfo *pIVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  FMixerSourceBuffer *local_res8;
  
  lpCriticalSection = &this->SoundWaveCritSec;
  this->_padding_ = (longlong)&___7FMixerSourceBuffer_Audio__6B_;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    OnEndGenerate(this);
    pIVar1 = this->DecompressionState;
    if (pIVar1 != (ICompressedAudioInfo *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
      this->DecompressionState = (ICompressedAudioInfo *)0x0;
    }
    if (this->SoundWave != (USoundWave *)0x0) {
      local_res8 = this;
      USoundWave::RemovePlayingSource(this->SoundWave,(ISoundWaveClient **)&local_res8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->DecodeTaskCritSec);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->CachedRealtimeFirstBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->SoundGenerator).SharedReferenceCount.ReferenceController);
    pTVar3 = (this->BufferQueue).Tail;
    while (pTVar3 != (TNode *)0x0) {
      (this->BufferQueue).Tail = pTVar3->NextNode;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar3->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar3,0x18);
      pTVar3 = (this->BufferQueue).Tail;
    }
    DestructItems<TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>,int>
              ((TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)
               (this->SourceVoiceBuffers).AllocatorInstance.Data,(this->SourceVoiceBuffers).ArrayNum
              );
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    this->_padding_ = (longlong)&___7ISoundWaveClient__6B_;
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x130);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// `scalar_deleting_destructor' @ 1464eb0c0

void * __thiscall
Audio::FProceduralDecodeHandle::_scalar_deleting_destructor_
          (FProceduralDecodeHandle *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FDecodeHandleBase_Audio__6B_;
  if (*(FAsyncTaskBase **)&this->field_0x8 != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)&this->field_0x8,true,false);
    plVar1 = *(longlong **)&this->field_0x8;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  *(undefined ***)this = &___7IAudioTask_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb140

void * __thiscall FSoundBuffer::_scalar_deleting_destructor_(FSoundBuffer *this,uint param_1)

{
  ~FSoundBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb180

void * __thiscall FSoundSource::_scalar_deleting_destructor_(FSoundSource *this,uint param_1)

{
  ~FSoundSource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
Audio::FMixerSourceManager::FSourceInfo::_scalar_deleting_destructor_
          (FSourceInfo *this,uint param_1)

{
  ~FSourceInfo(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x5d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb200

void * __thiscall
Audio::FSynchronizedProceduralDecodeHandle::_scalar_deleting_destructor_
          (FSynchronizedProceduralDecodeHandle *this,uint param_1)

{
  longlong *plVar1;
  
  this->_padding_ = (longlong)&___7FDecodeHandleBase_Audio__6B_;
  if ((FAsyncTaskBase *)this->_padding_ != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->_padding_,true,false);
    plVar1 = (longlong *)this->_padding_;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  this->_padding_ = (longlong)&___7IAudioTask_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb280

void * __thiscall
Audio::IAudioMixerRenderStep::_scalar_deleting_destructor_(IAudioMixerRenderStep *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb2b0

void * __thiscall Audio::IAudioTask::_scalar_deleting_destructor_(IAudioTask *this,uint param_1)

{
  *this = (IAudioTask)&___7IAudioTask_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb2f0

void * __thiscall
ISoundWaveClient::_scalar_deleting_destructor_(ISoundWaveClient *this,uint param_1)

{
  *this = (ISoundWaveClient)&___7ISoundWaveClient__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb330

void * __thiscall
Audio::ISourceListener::_scalar_deleting_destructor_(ISourceListener *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb360

void * __thiscall
UAudioBusSubsystem::_scalar_deleting_destructor_(UAudioBusSubsystem *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SoundInstanceConnectionMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoundInstanceConnectionMap);
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveAudioBuses_GameThread).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveAudioBuses_GameThread);
  DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->DefaultAudioBuses).AllocatorInstance.Data,(this->DefaultAudioBuses).ArrayNum)
  ;
  pFVar2 = (this->DefaultAudioBuses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAudioEngineSubsystem::~UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb440

void * __thiscall
UAudioDeviceNotificationSubsystem::_scalar_deleting_destructor_
          (UAudioDeviceNotificationSubsystem *this,uint param_1)

{
  ~UAudioDeviceNotificationSubsystem(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464eb4a0

void * __thiscall
UAudioMixerBlueprintLibrary::_scalar_deleting_destructor_
          (UAudioMixerBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioMixerBlueprintLibrary__6B_;
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

// CreateAudioTask @ 1464f7b40

IAudioTask * __cdecl Audio::CreateAudioTask(uint param_1,FDecodeAudioTaskData *param_2)

{
  FDecodeHandle *pFVar1;
  
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FDecodeHandle *)0x0) {
    pFVar1 = FDecodeHandle::FDecodeHandle(pFVar1,param_2);
    return (IAudioTask *)pFVar1;
  }
  return (IAudioTask *)0x0;
}

// CreateAudioTask @ 1464f7b80

IAudioTask * __cdecl Audio::CreateAudioTask(uint param_1,FHeaderParseAudioTaskData *param_2)

{
  FHeaderDecodeHandle *pFVar1;
  
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FHeaderDecodeHandle *)0x0) {
    pFVar1 = FHeaderDecodeHandle::FHeaderDecodeHandle(pFVar1,param_2);
    return (IAudioTask *)pFVar1;
  }
  return (IAudioTask *)0x0;
}

// CreateAudioTask @ 1464f7bc0

IAudioTask * __cdecl Audio::CreateAudioTask(uint param_1,FProceduralAudioTaskData *param_2)

{
  ISoundGenerator *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  IAudioTask *pIVar6;
  FAsyncTask<Audio::FAsyncDecodeWorker> *this;
  IAudioTask this_00;
  FSynchronizedProceduralDecodeHandle *pFVar7;
  
  if ((ForceSynchronizedAudioTaskKickCvar == 0) &&
     ((pIVar1 = (param_2->SoundGenerator).Object, pIVar1 == (ISoundGenerator *)0x0 ||
      (iVar4 = (**(code **)(pIVar1->_padding_ + 0x38))(), iVar4 == 0)))) {
    pIVar6 = ::operator_new(0x10);
    this_00 = (IAudioTask)0x0;
    if (pIVar6 == (IAudioTask *)0x0) {
      return (IAudioTask *)0x0;
    }
    pIVar6[1] = (IAudioTask)0x0;
    *pIVar6 = (IAudioTask)&___7FProceduralDecodeHandle_Audio__6B_;
    this = ::operator_new(0x100);
    if (this != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
      this_00 = (IAudioTask)
                FAsyncTask<Audio::FAsyncDecodeWorker>::
                FAsyncTask<Audio::FAsyncDecodeWorker><Audio::FProceduralAudioTaskData_const_&>
                          (this,param_2);
    }
    pIVar6[1] = this_00;
    if ((ForceSyncAudioDecodesCvar == 0) && (param_2->bForceSyncDecode == false)) {
      FAsyncTaskBase::Start
                ((FAsyncTaskBase *)this_00,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
      return pIVar6;
    }
    FAsyncTaskBase::Start((FAsyncTaskBase *)this_00,true,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
    return pIVar6;
  }
  if (((param_2->SoundGenerator).Object == (ISoundGenerator *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pIVar6 = (IAudioTask *)(*pcVar2)();
    return pIVar6;
  }
  uVar5 = (**(code **)(((param_2->SoundGenerator).Object)->_padding_ + 0x38))();
  if (uVar5 == 0) {
    uVar5 = param_1;
  }
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 == (FSynchronizedProceduralDecodeHandle *)0x0) {
    return (IAudioTask *)0x0;
  }
  pFVar7 = FSynchronizedProceduralDecodeHandle::FSynchronizedProceduralDecodeHandle
                     (pFVar7,param_2,uVar5);
  return (IAudioTask *)pFVar7;
}

// CreateSynchronizedAudioTaskQueue @ 1464f90e0

void __cdecl Audio::CreateSynchronizedAudioTaskQueue(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  uint *puVar4;
  longlong lVar5;
  uint local_res8 [2];
  TKeyInitializer<unsigned_int_const_&> local_res10;
  uint *local_res18 [2];
  
  local_res8[0] = param_1;
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._8_4_ !=
      FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar5 = 0x154bfa788;
    if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar5 = FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar1 = *(uint *)(lVar5 + (ulonglong)
                              (FSynchronizedProceduralDecodeHandle::
                               ProceduralRenderingSynchronizationQueues._72_4_ - 1 & local_res8[0])
                              * 4);
    while (uVar1 != 0xffffffff) {
      puVar4 = (uint *)((longlong)(int)uVar1 * 0x20 +
                       FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues
                       ._0_8_);
      if (*puVar4 == local_res8[0]) {
        puVar2 = puVar4 + 2;
        if (puVar4 == (uint *)0x0) {
          puVar2 = (uint *)0x0;
        }
        if (puVar2 != (uint *)0x0) goto LAB_1464f91cc;
        break;
      }
      uVar1 = puVar4[6];
    }
  }
  local_res18[0] = local_res8;
  TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues,
             &local_res10,(bool *)local_res18);
  pTVar3 = TMapBase<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&FSynchronizedProceduralDecodeHandle::
                             ProceduralRenderingSynchronizationQueues,local_res8[0]);
  if (pTVar3->ArrayMax < 0x80) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x80,&pTVar3->AllocatorInstance,pTVar3->ArrayNum,&pTVar3->ArrayMax);
  }
LAB_1464f91cc:
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  return;
}

// DataFormatAsString @ 1464f9300

FString * __cdecl
DataFormatAsString(FString *__return_storage_ptr__,EAudioMixerStreamDataFormatType param_1)

{
  if (param_1 == Unknown) {
    FString::FString(__return_storage_ptr__,"Unknown");
    return __return_storage_ptr__;
  }
  if (param_1 == Float) {
    FString::FString(__return_storage_ptr__,"Float");
    return __return_storage_ptr__;
  }
  if (param_1 == Int16) {
    FString::FString(__return_storage_ptr__,"Int16");
    return __return_storage_ptr__;
  }
  if (param_1 != Unsupported) {
    FString::FString(__return_storage_ptr__,"Invalid Format Type");
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,"Unsupported");
  return __return_storage_ptr__;
}

// DestroySynchronizedAudioTaskQueue @ 1464fb270

void __cdecl Audio::DestroySynchronizedAudioTaskQueue(uint param_1,bool param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint local_res18 [4];
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  if (param_2) {
    FSynchronizedProceduralDecodeHandle::KickQueuedTasks(param_1);
  }
  if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._8_4_ !=
      FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar4 = 0x154bfa788;
    if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar4 = FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)
                              (FSynchronizedProceduralDecodeHandle::
                               ProceduralRenderingSynchronizationQueues._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar3 = (uint *)((longlong)(int)uVar1 * 0x20 +
                       FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues
                       ._0_8_);
      if (*puVar3 == param_1) {
        puVar2 = puVar3 + 2;
        if (puVar3 == (uint *)0x0) {
          puVar2 = (uint *)0x0;
        }
        if (puVar2 != (uint *)0x0) {
          local_res18[0] = param_1;
          TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&FSynchronizedProceduralDecodeHandle::
                         ProceduralRenderingSynchronizationQueues,param_1,local_res18);
        }
        break;
      }
      uVar1 = puVar3[6];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001464fb332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  return;
}

// DrawSubmixHeirarchy @ 1464fc980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
Audio::DrawSubmixHeirarchy
          (USoundSubmixBase *param_1,TSharedPtr<Audio::FMixerSubmix,1> *param_2,
          FMixerDevice *param_3,int param_4,FOutputDevice *param_5,wchar_t *param_6)

{
  atomic<int> *paVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar9;
  FDynamicChildSubmix *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 local_res8 [8];
  TSharedPtr<Audio::FMixerSubmix,1> *local_res10;
  undefined1 local_e8;
  undefined1 local_e7 [7];
  FString local_e0;
  FString local_d0;
  FName local_c0;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  TSharedPtr<Audio::FMixerSubmix,1> local_80;
  TWeakPtr<Audio::FMixerSubmix,1> local_70;
  TSharedPtr<Audio::FMixerSubmix,1> local_60;
  TWeakPtr<Audio::FMixerSubmix,1> local_50;
  
  local_res10 = param_2;
  if (param_1 != (USoundSubmixBase *)0x0) {
    iVar5 = param_4 * 3;
    if (((iVar5 < 0) || (0xff < iVar5)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ::FString::FString(&local_90,
                       L"                                                                                                                                                                                                                                                               "
                       + (0xff - (longlong)iVar5));
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    pUVar8 = Z_Construct_UClass_USoundSubmix_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar8->_padding_)) {
      plVar11 = *(longlong **)&param_1[1].DynamicChildSubmixes.field_0x28;
      iVar5 = *(int *)&param_1[1].DynamicChildSubmixes.field_0x30;
      plVar2 = plVar11 + iVar5;
      while( true ) {
        if (*(int *)&param_1[1].DynamicChildSubmixes.field_0x30 != iVar5) {
          `TCheckedPointerIterator<TObjectPtr<USoundEffectSubmixPreset>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (plVar11 == plVar2) break;
        if (*plVar11 == 0) {
          ::FString::FString(&local_d0,L"None");
        }
        else {
          local_c0 = *(FName *)(*plVar11 + 0x18);
          ::FName::ToString(&local_c0,&local_d0);
        }
        ::FString::PrintfImpl(&local_b0,L"[%s]");
        iVar13 = 0;
        if (local_b0.Data.ArrayNum != 0) {
          iVar13 = local_b0.Data.ArrayNum + -1;
        }
        ::FString::AppendChars(&local_e0,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar13);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        plVar11 = plVar11 + 1;
      }
    }
    local_b8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_b8,&local_a0);
    FOutputDevice::LogfImpl(param_5,L"%sName=%s,Instance=0x%p,Id=%u,Fx=%s,[%s]");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    pFVar12 = (param_1->ChildSubmixes).AllocatorInstance.Data;
    iVar5 = (param_1->ChildSubmixes).ArrayNum;
    pFVar3 = pFVar12 + (longlong)iVar5 * 8;
    while( true ) {
      if ((param_1->ChildSubmixes).ArrayNum != iVar5) {
        `TCheckedPointerIterator<TObjectPtr<USoundSubmixBase>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_e8);
      }
      if (pFVar12 == pFVar3) break;
      pTVar9 = FMixerDevice::GetSubmixInstance(param_3,&local_70,*(USoundSubmixBase **)pFVar12);
      TSharedPtr<Audio::FMixerSubmix,1>::TSharedPtr<Audio::FMixerSubmix,1><Audio::FMixerSubmix>
                (&local_80,pTVar9);
      DrawSubmixHeirarchy(*(USoundSubmixBase **)pFVar12,&local_80,param_3,param_4 + 1,param_5,
                          L"Static");
      if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar4 == (atomic<int>)0x1) &&
           (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0))
        {
          (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_70.WeakReferenceCount.ReferenceController,1);
        }
      }
      pFVar12 = pFVar12 + 8;
    }
    pFVar10 = TMapBase<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
              ::FindOrAddImpl<unsigned_int_const_&>
                        ((TMapBase<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
                          *)&param_1->DynamicChildSubmixes,*(uint *)&param_3->field_0xa0,
                         (uint *)&param_3->field_0xa0);
    pFVar12 = (pFVar10->ChildSubmixes).AllocatorInstance.Data;
    iVar5 = (pFVar10->ChildSubmixes).ArrayNum;
    pFVar3 = pFVar12 + (longlong)iVar5 * 8;
    while( true ) {
      if ((pFVar10->ChildSubmixes).ArrayNum != iVar5) {
        `TCheckedPointerIterator<TObjectPtr<USoundSubmixBase>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_e7);
      }
      if (pFVar12 == pFVar3) break;
      pTVar9 = FMixerDevice::GetSubmixInstance(param_3,&local_50,*(USoundSubmixBase **)pFVar12);
      TSharedPtr<Audio::FMixerSubmix,1>::TSharedPtr<Audio::FMixerSubmix,1><Audio::FMixerSubmix>
                (&local_60,pTVar9);
      DrawSubmixHeirarchy(*(USoundSubmixBase **)pFVar12,&local_60,param_3,param_4 + 1,param_5,
                          L"Dynamic");
      if (local_50.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_50.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar4 == (atomic<int>)0x1) &&
           (local_50.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0))
        {
          (**(code **)((local_50.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_50.WeakReferenceCount.ReferenceController,1);
        }
      }
      pFVar12 = pFVar12 + 8;
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res10->SharedReferenceCount).ReferenceController);
  return;
}

// DrawSubmixInstances @ 1464fcd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl Audio::DrawSubmixInstances(FMixerSubmix *param_1,int param_2,FOutputDevice *param_3)

{
  undefined1 *puVar1;
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FMixerSubmix *pFVar6;
  code *pcVar7;
  atomic<int> aVar8;
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *pTVar9;
  bool bVar10;
  atomic<int> aVar11;
  longlong lVar12;
  int iVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  FString local_d0;
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  if (param_1 != (FMixerSubmix *)0x0) {
    iVar4 = param_2 * 3;
    if (((iVar4 < 0) || (0xff < iVar4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                            ,0x272,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    ::FString::FString(&local_d0,
                       L"                                                                                                                                                                                                                                                               "
                       + (0xff - (longlong)iVar4));
    FOutputDevice::LogfImpl(param_3,L"%sName=%s,Instance=0x%p,Id=%u");
    iVar4 = *(int *)&(param_1->ChildSubmixes).field_0x28;
    puVar1 = &(param_1->ChildSubmixes).field_0x10;
    iStack_b8 = 0;
    pTVar2 = &param_1->ChildSubmixes;
    local_a0 = 0;
    uStack_b4 = 1;
    iStack_a4 = 0;
    if (iVar4 != 0) {
      puVar18 = *(uint **)&(param_1->ChildSubmixes).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        lVar12 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        iStack_a4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_1464fce9e;
        uVar16 = puVar18[lVar12 + 1];
      }
      uStack_b4 = -uVar16 & uVar16;
      uVar3 = (ulonglong)uStack_b4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_a4 = local_a0 + -1 + (int)lVar12;
      if (iVar4 < iStack_a4) {
        iStack_a4 = iVar4;
      }
    }
LAB_1464fce9e:
    uStack_9c = local_44;
    iStack_98 = *(int *)&(param_1->ChildSubmixes).field_0x8 -
                *(int *)&(param_1->ChildSubmixes).field_0x34;
    uVar16 = *(uint *)&(param_1->ChildSubmixes).field_0x28;
    uStack_a8 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
    uVar15 = uVar16 & 0xffffffe0;
    TStack_88.CurrentBitIndex = iStack_a4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = local_a0;
    uStack_68 = CONCAT44(uStack_94,iStack_98);
    local_c0 = pTVar2;
    local_b0 = puVar1;
    local_90 = pTVar2;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = *(uint *)&(param_1->ChildSubmixes).field_0x28;
    if (uVar16 != uVar5) {
      puVar17 = *(undefined1 **)&(param_1->ChildSubmixes).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar12 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1464fcfb0;
        uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar16 = (int)lVar12 + -1 + uVar15;
      if ((int)uVar5 < (int)uVar16) {
        uVar16 = uVar5;
      }
    }
LAB_1464fcfb0:
    while( true ) {
      pTVar9 = local_90;
      if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_88.CurrentBitIndex == uVar16) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2)
         ) break;
      lVar12 = (longlong)TStack_88.CurrentBitIndex * 0x38 + *(longlong *)pTVar9;
      pTVar14 = *(TReferenceControllerBase<1> **)(lVar12 + 0x10);
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        aVar8 = pTVar14->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) {
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1464fd003;
          }
          LOCK();
          aVar11 = pTVar14->SharedReferenceCount;
          bVar10 = aVar8 == aVar11;
          if (bVar10) {
            pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar11 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar11;
        } while (!bVar10);
        pFVar6 = *(FMixerSubmix **)(lVar12 + 8);
        if (pFVar6 != (FMixerSubmix *)0x0) {
          DrawSubmixInstances(pFVar6,param_2 + 1,param_3);
        }
      }
LAB_1464fd003:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioBusSubsystem @ 1464fd9c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioBusSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioDeviceNotificationSubsystem @ 1464fd9d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioDeviceNotificationSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMixerBlueprintLibrary @ 1464fd9e0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMixerBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMixerDevice @ 1464fd9f0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMixerDevice(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMixerSourceManager @ 1464fda00

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMixerSourceManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMixer_init @ 1464fda10

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMixer_init(void)

{
  return;
}

// FOnAudioDefaultDeviceChanged_DelegateWrapper @ 1464fe120

void __cdecl
FOnAudioDefaultDeviceChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EAudioDeviceChangedRole param_2,FString *param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  EAudioDeviceChangedRole local_28 [8];
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    uVar1 = (param_3->Data).ArrayNum;
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_20.Data.ArrayMax = 0;
    local_20.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_20,uVar1,&local_20.Data.ArrayMax);
      memcpy(local_20.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// FOnAudioDeviceChange_DelegateWrapper @ 1464fe1d0

void __cdecl
FOnAudioDeviceChange_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// FOnAudioDeviceStateChanged_DelegateWrapper @ 1464fe280

void __cdecl
FOnAudioDeviceStateChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2,
          EAudioDeviceChangedState param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_28;
  EAudioDeviceChangedState local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (&local_28 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_28.Data.ArrayMax = 0;
    local_28.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_28,uVar1,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_18 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// FOnAudioOutputDevicesObtained_DelegateWrapper @ 1464fe340

void __cdecl
FOnAudioOutputDevicesObtained_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FAudioOutputDeviceInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FAudioOutputDeviceInfo *pFVar2;
  TArray<FAudioOutputDeviceInfo,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    DestructItems<FAudioOutputDeviceInfo,int>((FAudioOutputDeviceInfo *)0x0,0);
    iVar1 = param_2->ArrayNum;
    pFVar2 = (FAudioOutputDeviceInfo *)(param_2->AllocatorInstance).Data;
    local_18.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.ArrayMax == 0)) {
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar1,local_18.ArrayMax,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax
                );
      ConstructItems<FAudioOutputDeviceInfo,FAudioOutputDeviceInfo,int>
                (local_18.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  DestructItems<FAudioOutputDeviceInfo,int>
            ((FAudioOutputDeviceInfo *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FAudioOutputDeviceInfo *)local_18.AllocatorInstance.Data != (FAudioOutputDeviceInfo *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnCompletedDeviceSwap_DelegateWrapper @ 1464fe420

void __cdecl
FOnCompletedDeviceSwap_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FSwapAudioOutputResult *param_2)

{
  FString local_38;
  FString local_28;
  ESwapAudioOutputDeviceResultState local_18;
  
  local_18 = 2;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FString::operator=(&local_38,&param_2->CurrentDeviceId);
  FString::operator=(&local_28,&param_2->RequestedDeviceId);
  local_18 = param_2->Result;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// FOnMainAudioOutputDeviceObtained_DelegateWrapper @ 1464fe4b0

void __cdecl
FOnMainAudioOutputDeviceObtained_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// FOnSoundLoadComplete_DelegateWrapper @ 1464fe560

void __cdecl
FOnSoundLoadComplete_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,USoundWave *param_2,bool param_3)

{
  USoundWave *local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  return;
}

// GetCommandBufferInitialCapacity @ 1465016d0

int __cdecl Audio::GetCommandBufferInitialCapacity(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10000;
  if (CommandBufferInitialCapacityCvar < 10000) {
    iVar2 = CommandBufferInitialCapacityCvar;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetFrequencyMultiplier @ 1465029a0

float __cdecl Audio::GetFrequencyMultiplier(float param_1)

{
  float fVar1;
  
  if (param_1 == 0.0) {
    return __real_3f800000;
  }
  fVar1 = powf(__real_40000000,param_1 * __real_3daaaaab);
  return fVar1;
}

// GetRoutedHighpass @ 146505790

float __cdecl
Audio::ModulationUtils::GetRoutedHighpass
          (FWaveInstance *param_1,USoundWave *param_2,FActiveSound *param_3)

{
  float fVar1;
  
  fVar1 = FWaveInstance::GetEffectiveModulationValue(param_1,Highpass);
  return fVar1;
}

// GetRoutedLowpass @ 1465057a0

float __cdecl
Audio::ModulationUtils::GetRoutedLowpass
          (FWaveInstance *param_1,USoundWave *param_2,FActiveSound *param_3)

{
  float fVar1;
  
  fVar1 = FWaveInstance::GetEffectiveModulationValue(param_1,Lowpass);
  return fVar1;
}

// GetRoutedPitch @ 1465057b0

float __cdecl
Audio::ModulationUtils::GetRoutedPitch
          (FWaveInstance *param_1,USoundWave *param_2,FActiveSound *param_3)

{
  float fVar1;
  
  fVar1 = FWaveInstance::GetEffectiveModulationValue(param_1,Pitch);
  return fVar1;
}

// GetRoutedVolume @ 1465057c0

float __cdecl
Audio::ModulationUtils::GetRoutedVolume
          (FWaveInstance *param_1,USoundWave *param_2,FActiveSound *param_3)

{
  float fVar1;
  
  fVar1 = FWaveInstance::GetEffectiveModulationValue(param_1,Volume);
  return fVar1;
}

// InitRoutedHighpassModulation @ 146509c50

FSoundModulationDestinationSettings * __cdecl
Audio::ModulationUtils::InitRoutedHighpassModulation
          (FSoundModulationDestinationSettings *__return_storage_ptr__,FWaveInstance *param_1,
          USoundWave *param_2,FActiveSound *param_3)

{
  FWaveInstance::GetEffectiveModulationSettings(param_1,__return_storage_ptr__,Highpass);
  return __return_storage_ptr__;
}

// InitRoutedLowpassModulation @ 146509c80

FSoundModulationDestinationSettings * __cdecl
Audio::ModulationUtils::InitRoutedLowpassModulation
          (FSoundModulationDestinationSettings *__return_storage_ptr__,FWaveInstance *param_1,
          USoundWave *param_2,FActiveSound *param_3)

{
  FWaveInstance::GetEffectiveModulationSettings(param_1,__return_storage_ptr__,Lowpass);
  return __return_storage_ptr__;
}

// InitRoutedModulation @ 146509cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSoundModulationDefaultSettings * __cdecl
Audio::ModulationUtils::InitRoutedModulation
          (FSoundModulationDefaultSettings *__return_storage_ptr__,FWaveInstance *param_1,
          USoundWave *param_2,FActiveSound *param_3)

{
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 auStack_1c8 [32];
  FSoundModulationDestinationSettings local_1a8;
  FSoundModulationDestinationSettings local_148;
  FSoundModulationDestinationSettings local_e8;
  FSoundModulationDestinationSettings local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FSoundModulationDefaultSettings::FSoundModulationDefaultSettings(__return_storage_ptr__);
  if (param_3 != (FActiveSound *)0x0) {
    FWaveInstance::GetEffectiveModulationSettings(param_1,&local_1a8,Volume);
    pTVar1 = &(__return_storage_ptr__->VolumeModulationDestination).Modulators;
    (__return_storage_ptr__->VolumeModulationDestination).Value = local_1a8.Value;
    if (pTVar1 != &local_1a8.Modulators) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (pTVar1,&local_1a8.Modulators);
    }
    local_1a8.Modulators.HashSize = 0;
    if (local_1a8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1a8.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1a8.Modulators.Elements);
    FWaveInstance::GetEffectiveModulationSettings(param_1,&local_148,Pitch);
    pTVar1 = &(__return_storage_ptr__->PitchModulationDestination).Modulators;
    (__return_storage_ptr__->PitchModulationDestination).Value = local_148.Value;
    if (pTVar1 != &local_148.Modulators) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (pTVar1,&local_148.Modulators);
    }
    local_148.Modulators.HashSize = 0;
    if (local_148.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Modulators.Elements);
    FWaveInstance::GetEffectiveModulationSettings(param_1,&local_e8,Highpass);
    pTVar1 = &(__return_storage_ptr__->HighpassModulationDestination).Modulators;
    (__return_storage_ptr__->HighpassModulationDestination).Value = local_e8.Value;
    if (pTVar1 != &local_e8.Modulators) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (pTVar1,&local_e8.Modulators);
    }
    local_e8.Modulators.HashSize = 0;
    if (local_e8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Modulators.Elements);
    FWaveInstance::GetEffectiveModulationSettings(param_1,&local_88,Lowpass);
    pTVar1 = &(__return_storage_ptr__->LowpassModulationDestination).Modulators;
    (__return_storage_ptr__->LowpassModulationDestination).Value = local_88.Value;
    if (pTVar1 != &local_88.Modulators) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (pTVar1,&local_88.Modulators);
    }
    local_88.Modulators.HashSize = 0;
    if (local_88.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Modulators.Elements);
  }
  return __return_storage_ptr__;
}

// InitRoutedPitchModulation @ 146509e60

FSoundModulationDestinationSettings * __cdecl
Audio::ModulationUtils::InitRoutedPitchModulation
          (FSoundModulationDestinationSettings *__return_storage_ptr__,FWaveInstance *param_1,
          USoundWave *param_2,FActiveSound *param_3)

{
  FWaveInstance::GetEffectiveModulationSettings(param_1,__return_storage_ptr__,Pitch);
  return __return_storage_ptr__;
}

// InitRoutedVolumeModulation @ 146509e90

FSoundModulationDestinationSettings * __cdecl
Audio::ModulationUtils::InitRoutedVolumeModulation
          (FSoundModulationDestinationSettings *__return_storage_ptr__,FWaveInstance *param_1,
          USoundWave *param_2,FActiveSound *param_3)

{
  FWaveInstance::GetEffectiveModulationSettings(param_1,__return_storage_ptr__,Volume);
  return __return_storage_ptr__;
}

// IsAudioBufferSilent @ 14650e3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl Audio::IsAudioBufferSilent(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  uint uVar14;
  ulonglong uVar16;
  ulonglong uVar15;
  
  uVar12 = 0;
  uVar14 = 0;
  uVar16 = (longlong)param_2 & 0xfffffffffffffff0;
  bVar13 = true;
  if (0 < (longlong)uVar16) {
    fVar1 = GlobalVectorConstants::SmallNumber.m128_f32[0];
    fVar2 = GlobalVectorConstants::SmallNumber.m128_f32[1];
    fVar3 = GlobalVectorConstants::SmallNumber.m128_f32[2];
    fVar4 = GlobalVectorConstants::SmallNumber.m128_f32[3];
    pfVar10 = param_1 + 8;
    uVar15 = uVar12;
    do {
      auVar5._4_4_ = -(uint)(fVar2 < (float)((uint)pfVar10[-7] & _UNK_15061cc74));
      auVar5._0_4_ = -(uint)(fVar1 < (float)((uint)pfVar10[-8] &
                                            __xmm_7fffffff7fffffff7fffffff7fffffff));
      auVar5._8_4_ = -(uint)(fVar3 < (float)((uint)pfVar10[-6] & _UNK_15061cc78));
      auVar5._12_4_ = -(uint)(fVar4 < (float)((uint)pfVar10[-5] & _UNK_15061cc7c));
      iVar9 = movmskps(in_EAX,auVar5);
      if ((((iVar9 != 0) ||
           (auVar6._4_4_ = -(uint)(fVar2 < (float)((uint)pfVar10[-3] & _UNK_15061cc74)),
           auVar6._0_4_ = -(uint)(fVar1 < (float)((uint)pfVar10[-4] &
                                                 __xmm_7fffffff7fffffff7fffffff7fffffff)),
           auVar6._8_4_ = -(uint)(fVar3 < (float)((uint)pfVar10[-2] & _UNK_15061cc78)),
           auVar6._12_4_ = -(uint)(fVar4 < (float)((uint)pfVar10[-1] & _UNK_15061cc7c)),
           iVar9 = movmskps(0,auVar6), iVar9 != 0)) ||
          (auVar7._4_4_ = -(uint)(fVar2 < (float)((uint)pfVar10[1] & _UNK_15061cc74)),
          auVar7._0_4_ = -(uint)(fVar1 < (float)((uint)*pfVar10 &
                                                __xmm_7fffffff7fffffff7fffffff7fffffff)),
          auVar7._8_4_ = -(uint)(fVar3 < (float)((uint)pfVar10[2] & _UNK_15061cc78)),
          auVar7._12_4_ = -(uint)(fVar4 < (float)((uint)pfVar10[3] & _UNK_15061cc7c)),
          iVar9 = movmskps(0,auVar7), iVar9 != 0)) ||
         (auVar8._4_4_ = -(uint)(fVar2 < (float)((uint)pfVar10[5] & _UNK_15061cc74)),
         auVar8._0_4_ = -(uint)(fVar1 < (float)((uint)pfVar10[4] &
                                               __xmm_7fffffff7fffffff7fffffff7fffffff)),
         auVar8._8_4_ = -(uint)(fVar3 < (float)((uint)pfVar10[6] & _UNK_15061cc78)),
         auVar8._12_4_ = -(uint)(fVar4 < (float)((uint)pfVar10[7] & _UNK_15061cc7c)),
         iVar9 = movmskps(0,auVar8), iVar9 != 0)) {
        uVar14 = 0x7fffffff;
        bVar13 = false;
        break;
      }
      uVar14 = (int)uVar15 + 0x10;
      uVar15 = (ulonglong)uVar14;
      uVar12 = uVar12 + 0x10;
      pfVar10 = pfVar10 + 0x10;
      in_EAX = 0;
      bVar13 = true;
    } while ((longlong)uVar12 < (longlong)uVar16);
  }
  lVar11 = (longlong)(int)uVar14;
  while( true ) {
    if (param_2 <= lVar11) {
      return bVar13;
    }
    if (__real_322bcc77 < (float)((uint)param_1[lVar11] & __xmm_7fffffff7fffffff7fffffff7fffffff))
    break;
    lVar11 = lVar11 + 1;
  }
  return false;
}

// KickQueuedTasks @ 14650f910

int __cdecl Audio::KickQueuedTasks(uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackX_10 [8];
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  iVar7 = 0;
  if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._8_4_ !=
      FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar5 = 0x154bfa788;
    if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar5 = FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar3 = *(uint *)(lVar5 + (ulonglong)
                              (FSynchronizedProceduralDecodeHandle::
                               ProceduralRenderingSynchronizationQueues._72_4_ - 1 & param_1) * 4);
    while (iVar7 = 0, uVar3 != 0xffffffff) {
      puVar4 = (uint *)((longlong)(int)uVar3 * 0x20 +
                       FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues
                       ._0_8_);
      if (*puVar4 == param_1) {
        pFVar6 = (ForAnyElementType *)(puVar4 + 2);
        if (puVar4 == (uint *)0x0) {
          pFVar6 = (ForAnyElementType *)0x0;
        }
        if (pFVar6 != (ForAnyElementType *)0x0) {
          pFVar8 = pFVar6->Data;
          iVar7 = *(int *)&pFVar6[1].Data;
          pFVar2 = pFVar8 + (longlong)iVar7 * 8;
          while( true ) {
            if (*(int *)&pFVar6[1].Data != iVar7) {
              `TCheckedPointerIterator<FAsyncTask<Audio::FAsyncDecodeWorker>_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(auStackX_10);
            }
            if (pFVar8 == pFVar2) break;
            FAsyncTaskBase::Start
                      (*(FAsyncTaskBase **)pFVar8,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
            pFVar8 = pFVar8 + 8;
          }
          piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
          iVar7 = *(int *)&pFVar6[1].Data;
          *(undefined4 *)&pFVar6[1].Data = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,pFVar6,0,piVar1);
          }
        }
        break;
      }
      uVar3 = puVar4[6];
    }
  }
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  return iVar7;
}

// LexToString @ 14650fa80

wchar_t * __cdecl LexToString(EMixerSourceInitializationState param_1)

{
  if (param_1 == NotInitialized) {
    return L"NotInitialized";
  }
  if (param_1 != Initializing) {
    if (param_1 != Initialized) {
      return L"Unknown";
    }
    return L"Initialized";
  }
  return L"Initializing";
}

// LexToString @ 14650fac0

wchar_t * __cdecl LexToString(ERequiredSubmixes param_1)

{
  if (param_1 == Main) {
    return L"ERequiredSubmixes::Main";
  }
  if (param_1 == BaseDefault) {
    return L"ERequiredSubmixes::BaseDefault";
  }
  if (param_1 == Reverb) {
    return L"ERequiredSubmixes::Reverb";
  }
  if (param_1 != EQ) {
    if (param_1 != Count) {
      return L"Unknown";
    }
    return L"ERequiredSubmixes::Count";
  }
  return L"ERequiredSubmixes::EQ";
}

// LexToString @ 14650fb20

wchar_t * __cdecl LexToString(ESourceManagerRenderThreadPhase param_1)

{
  switch(param_1) {
  case Begin:
    return L"ESourceManagerRenderThreadPhase::Begin";
  case PumpMpscCmds:
    return L"ESourceManagerRenderThreadPhase::PumpMpscCmds";
  case PumpCmds:
    return L"ESourceManagerRenderThreadPhase::PumpCmds";
  case ProcessModulators:
    return L"ESourceManagerRenderThreadPhase::ProcessModulators";
  case UpdatePendingReleaseData:
    return L"ESourceManagerRenderThreadPhase::UpdatePendingReleaseData";
  case RunScheduledRenderSteps:
    return L"ESourceManagerRenderThreadPhase::RunScheduledRenderSteps";
  case GenerateSrcAudio_WithBusses:
    return L"ESourceManagerRenderThreadPhase::GenerateSrcAudio_WithBusses";
  case ComputeBusses:
    return L"ESourceManagerRenderThreadPhase::ComputeBusses";
  case GenerateSrcAudio_WithoutBusses:
    return L"ESourceManagerRenderThreadPhase::GenerateSrcAudio_WithoutBusses";
  case UpdateBusses:
    return L"ESourceManagerRenderThreadPhase::UpdateBusses";
  case SpatialInterface_OnAllSourcesProcessed:
    return L"ESourceManagerRenderThreadPhase::SpatialInterface_OnAllSourcesProcessed";
  case SourceDataOverride_OnAllSourcesProcessed:
    return L"ESourceManagerRenderThreadPhase::SourceDataOverride_OnAllSourcesProcessed";
  case UpdateGameThreadCopies:
    return L"ESourceManagerRenderThreadPhase::UpdateGameThreadCopies";
  case Finished:
    return L"ESourceManagerRenderThreadPhase::Finished";
  default:
    return L"Unknown";
  }
}

// SubmixSendStageToMixerSourceSubmixSendStage @ 146527800

EMixerSourceSubmixSendStage __cdecl
Audio::MixerSourcePrivate::SubmixSendStageToMixerSourceSubmixSendStage(ESubmixSendStage param_1)

{
  if ((param_1 != PostDistanceAttenuation) && (param_1 == PreDistanceAttenuation)) {
    return PreDistanceAttenuation;
  }
  return PostDistanceAttenuation;
}

// TraceAudioBusStartMessage @ 146528130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Audio::TraceAudioBusStartMessage(uint param_1,uint param_2,FString *param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  FString local_50;
  uint *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar8 = 0;
  local_58.s.LowPart = 0;
  bVar9 = false;
  if ((-1 < AudioMixerChannel->Enabled) && (-1 < AudioChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FAudioAudioBusStartFields>((TLogScope<1> *)&local_40);
    *local_40 = param_1;
    local_40[1] = param_2;
    QueryPerformanceCounter(&local_58);
    *(ulonglong *)(local_40 + 2) = CONCAT44(local_58.s.HighPart,local_58.s.LowPart);
    if ((param_3->Data).ArrayNum < 2) {
      ::FString::PrintfImpl(&local_50,L"%d");
      bVar9 = true;
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar7.Data = local_50.Data.AllocatorInstance.Data;
      }
    }
    else {
      FVar7.Data = (param_3->Data).AllocatorInstance.Data;
    }
    wVar2 = *(wchar_t *)FVar7.Data;
    pFVar1 = FVar7.Data;
    while (wVar2 != L'\0') {
      pFVar1 = pFVar1 + 2;
      iVar8 = iVar8 + 1;
      wVar2 = *(wchar_t *)pFVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(3,(wchar_t *)FVar7.Data,iVar8);
    pvVar4 = ThreadLocalStoragePointer;
    uVar6 = (ulonglong)_tls_index;
    local_40[4] = param_4;
    lVar3 = *(longlong *)((longlong)pvVar4 + uVar6 * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar5;
    if (lVar3 != local_38) {
      *(longlong *)(lVar3 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
    if ((bVar9) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TraceAudioBusStopMessage @ 1465282c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Audio::TraceAudioBusStopMessage(uint param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  uint *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < AudioMixerChannel->Enabled) && (-1 < AudioChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FAudioAudioBusStopFields>((TLogScope<0> *)&local_20);
    *local_20 = param_1;
    local_20[1] = param_2;
    QueryPerformanceCounter(&local_28);
    *(LARGE_INTEGER *)(local_20 + 2) = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// UpdateRoutedModulation @ 14652d380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSoundModulationDefaultRoutingSettings * __cdecl
Audio::ModulationUtils::UpdateRoutedModulation
          (FSoundModulationDefaultRoutingSettings *__return_storage_ptr__,FWaveInstance *param_1,
          USoundWave *param_2,FActiveSound *param_3)

{
  undefined1 auStack_1c8 [32];
  FSoundModulationDestinationSettings local_1a8;
  FSoundModulationDestinationSettings local_148;
  FSoundModulationDestinationSettings local_e8;
  FSoundModulationDestinationSettings local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
            (__return_storage_ptr__);
  if (param_3 != (FActiveSound *)0x0) {
    FWaveInstance::GetEffectiveModulationSettings(param_1,&local_1a8,Volume);
    *(float *)&__return_storage_ptr__->_padding_ = local_1a8.Value;
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)&__return_storage_ptr__->_padding_ != &local_1a8.Modulators) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&__return_storage_ptr__->_padding_,&local_1a8.Modulators);
    }
    local_1a8.Modulators.HashSize = 0;
    if (local_1a8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1a8.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1a8.Modulators.Elements);
    FWaveInstance::GetEffectiveModulationSettings(param_1,&local_148,Pitch);
    *(float *)&__return_storage_ptr__->_padding_ = local_148.Value;
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)&__return_storage_ptr__->_padding_ != &local_148.Modulators) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&__return_storage_ptr__->_padding_,&local_148.Modulators);
    }
    local_148.Modulators.HashSize = 0;
    if (local_148.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Modulators.Elements);
    FWaveInstance::GetEffectiveModulationSettings(param_1,&local_e8,Highpass);
    *(float *)&__return_storage_ptr__->_padding_ = local_e8.Value;
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)&__return_storage_ptr__->_padding_ != &local_e8.Modulators) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&__return_storage_ptr__->_padding_,&local_e8.Modulators);
    }
    local_e8.Modulators.HashSize = 0;
    if (local_e8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Modulators.Elements);
    FWaveInstance::GetEffectiveModulationSettings(param_1,&local_88,Lowpass);
    *(float *)&__return_storage_ptr__->_padding_ = local_88.Value;
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)&__return_storage_ptr__->_padding_ != &local_88.Modulators) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&__return_storage_ptr__->_padding_,&local_88.Modulators);
    }
    local_88.Modulators.HashSize = 0;
    if (local_88.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Modulators.Elements);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UAudioBusSubsystem_NoRegister @ 14652ec80

UClass * __cdecl Z_Construct_UClass_UAudioBusSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioBusSubsystem",
               &Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton,
               UAudioBusSubsystem::StaticRegisterNativesUAudioBusSubsystem,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioBusSubsystem>,
               InternalVTableHelperCtorCaller<UAudioBusSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister @ 14652ed40

UClass * __cdecl Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioDeviceNotificationSubsystem",
               &Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton,
               UAudioDeviceNotificationSubsystem::
               StaticRegisterNativesUAudioDeviceNotificationSubsystem,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioDeviceNotificationSubsystem>,
               InternalVTableHelperCtorCaller<UAudioDeviceNotificationSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister @ 14652ee00

UClass * __cdecl Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioMixerBlueprintLibrary",
               &Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton,
               UAudioMixerBlueprintLibrary::StaticRegisterNativesUAudioMixerBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioMixerBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAudioMixerBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_ERequiredSubmixes @ 14652eec0

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_ERequiredSubmixes(void)

{
  if (Z_Registration_Info_UEnum_ERequiredSubmixes.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERequiredSubmixes.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_ERequiredSubmixes_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERequiredSubmixes.InnerSingleton;
}

// Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase @ 14652ef00

UEnum * __cdecl Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase(void)

{
  if (Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.InnerSingleton,
               &Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.InnerSingleton;
}

// IMPLEMENT_MODULE_AudioMixer @ 146533ad0

void __cdecl IMPLEMENT_MODULE_AudioMixer(void)

{
  return;
}

// ProceduralRenderingSynchronizationQueues'' @ 1503dc160

void __cdecl
`dynamic_atexit_destructor_for_'Audio::FSynchronizedProceduralDecodeHandle::
ProceduralRenderingSynchronizationQueues__(void)

{
  Audio::FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._72_4_ = 0;
  if (Audio::FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ !=
      0) {
    FMemory::Free((void *)Audio::FSynchronizedProceduralDecodeHandle::
                          ProceduralRenderingSynchronizationQueues._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Audio::FSynchronizedProceduralDecodeHandle::
                 ProceduralRenderingSynchronizationQueues);
  return;
}

// SynchronizationQuequesLockCs'' @ 1503dc1a0

void __cdecl
`dynamic_atexit_destructor_for_'Audio::FSynchronizedProceduralDecodeHandle::
SynchronizationQuequesLockCs__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503dc1a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &Audio::FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioCommandExecTimeMsWarningThreshold'' @ 1503dc1c0

void __cdecl _dynamic_atexit_destructor_for__CVarAudioCommandExecTimeMsWarningThreshold__(void)

{
  CVarAudioCommandExecTimeMsWarningThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAudioCommandExecTimeMsWarningThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioMixerPatchBufferBlocks'' @ 1503dc1e0

void __cdecl _dynamic_atexit_destructor_for__CVarAudioMixerPatchBufferBlocks__(void)

{
  CVarAudioMixerPatchBufferBlocks._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAudioMixerPatchBufferBlocks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioMixerPerSourceResampling'' @ 1503dc200

void __cdecl _dynamic_atexit_destructor_for__CVarAudioMixerPerSourceResampling__(void)

{
  CVarAudioMixerPerSourceResampling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAudioMixerPerSourceResampling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBypassAudioPlugins'' @ 1503dc220

void __cdecl _dynamic_atexit_destructor_for__CVarBypassAudioPlugins__(void)

{
  CVarBypassAudioPlugins._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBypassAudioPlugins);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCommandBufferFlushWaitTimeMs'' @ 1503dc240

void __cdecl _dynamic_atexit_destructor_for__CVarCommandBufferFlushWaitTimeMs__(void)

{
  CVarCommandBufferFlushWaitTimeMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCommandBufferFlushWaitTimeMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCommandBufferInitialCapacity'' @ 1503dc260

void __cdecl _dynamic_atexit_destructor_for__CVarCommandBufferInitialCapacity__(void)

{
  CVarCommandBufferInitialCapacity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCommandBufferInitialCapacity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCommandBufferMaxSizeMb'' @ 1503dc280

void __cdecl _dynamic_atexit_destructor_for__CVarCommandBufferMaxSizeMb__(void)

{
  CVarCommandBufferMaxSizeMb._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCommandBufferMaxSizeMb);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugGeneratorAmp'' @ 1503dc2a0

void __cdecl _dynamic_atexit_destructor_for__CVarDebugGeneratorAmp__(void)

{
  CVarDebugGeneratorAmp._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugGeneratorAmp);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugGeneratorChannel'' @ 1503dc2c0

void __cdecl _dynamic_atexit_destructor_for__CVarDebugGeneratorChannel__(void)

{
  CVarDebugGeneratorChannel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugGeneratorChannel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugGeneratorEnable'' @ 1503dc2e0

void __cdecl _dynamic_atexit_destructor_for__CVarDebugGeneratorEnable__(void)

{
  CVarDebugGeneratorEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugGeneratorEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugGeneratorFreq'' @ 1503dc300

void __cdecl _dynamic_atexit_destructor_for__CVarDebugGeneratorFreq__(void)

{
  CVarDebugGeneratorFreq._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugGeneratorFreq);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDirectProceduralRendering'' @ 1503dc320

void __cdecl Audio::_dynamic_atexit_destructor_for__CVarDirectProceduralRendering__(void)

{
  CVarDirectProceduralRendering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDirectProceduralRendering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableDistanceAttenuation'' @ 1503dc340

void __cdecl _dynamic_atexit_destructor_for__CVarDisableDistanceAttenuation__(void)

{
  CVarDisableDistanceAttenuation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableDistanceAttenuation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableEnvelopeFollowing'' @ 1503dc360

void __cdecl _dynamic_atexit_destructor_for__CVarDisableEnvelopeFollowing__(void)

{
  CVarDisableEnvelopeFollowing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableEnvelopeFollowing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableFiltering'' @ 1503dc380

void __cdecl _dynamic_atexit_destructor_for__CVarDisableFiltering__(void)

{
  CVarDisableFiltering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableFiltering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableHPFiltering'' @ 1503dc3a0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableHPFiltering__(void)

{
  CVarDisableHPFiltering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableHPFiltering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableParallelSourceProcessing'' @ 1503dc3c0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableParallelSourceProcessing__(void)

{
  CVarDisableParallelSourceProcessing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDisableParallelSourceProcessing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableSourceEffects'' @ 1503dc3e0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableSourceEffects__(void)

{
  CVarDisableSourceEffects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableSourceEffects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableSubmixEQ'' @ 1503dc400

void __cdecl _dynamic_atexit_destructor_for__CVarDisableSubmixEQ__(void)

{
  CVarDisableSubmixEQ._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableSubmixEQ);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableSubmixMutationLock'' @ 1503dc420

void __cdecl _dynamic_atexit_destructor_for__CVarDisableSubmixMutationLock__(void)

{
  CVarDisableSubmixMutationLock._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableSubmixMutationLock);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpCallstackOnStallDiagnostics'' @ 1503dc440

void __cdecl _dynamic_atexit_destructor_for__CVarDumpCallstackOnStallDiagnostics__(void)

{
  CVarDumpCallstackOnStallDiagnostics._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDumpCallstackOnStallDiagnostics);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableAudibleDefaultEndpointSubmixes'' @ 1503dc460

void __cdecl _dynamic_atexit_destructor_for__CVarEnableAudibleDefaultEndpointSubmixes__(void)

{
  CVarEnableAudibleDefaultEndpointSubmixes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableAudibleDefaultEndpointSubmixes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFloatCompareMaxScale'' @ 1503dc480

void __cdecl _dynamic_atexit_destructor_for__CVarFloatCompareMaxScale__(void)

{
  CVarFloatCompareMaxScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFloatCompareMaxScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFloatCompareMinScale'' @ 1503dc4a0

void __cdecl _dynamic_atexit_destructor_for__CVarFloatCompareMinScale__(void)

{
  CVarFloatCompareMinScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFloatCompareMinScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFlushCommandBufferOnTimeout'' @ 1503dc4c0

void __cdecl _dynamic_atexit_destructor_for__CVarFlushCommandBufferOnTimeout__(void)

{
  CVarFlushCommandBufferOnTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFlushCommandBufferOnTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceAudioLinkOnAllSources'' @ 1503dc4e0

void __cdecl _dynamic_atexit_destructor_for__CVarForceAudioLinkOnAllSources__(void)

{
  CVarForceAudioLinkOnAllSources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceAudioLinkOnAllSources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceSyncAudioDecodes'' @ 1503dc500

void __cdecl _dynamic_atexit_destructor_for__CVarForceSyncAudioDecodes__(void)

{
  CVarForceSyncAudioDecodes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceSyncAudioDecodes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceSynchronizedAudioTaskKick'' @ 1503dc520

void __cdecl _dynamic_atexit_destructor_for__CVarForceSynchronizedAudioTaskKick__(void)

{
  CVarForceSynchronizedAudioTaskKick._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceSynchronizedAudioTaskKick)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogCmdQueueWhenNumberReached'' @ 1503dc540

void __cdecl _dynamic_atexit_destructor_for__CVarLogCmdQueueWhenNumberReached__(void)

{
  CVarLogCmdQueueWhenNumberReached._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogCmdQueueWhenNumberReached);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMuteAudio'' @ 1503dc560

void __cdecl _dynamic_atexit_destructor_for__CVarMuteAudio__(void)

{
  CVarMuteAudio._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMuteAudio);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumCmdsConsideredFullCVar'' @ 1503dc580

void __cdecl _dynamic_atexit_destructor_for__CVarNumCmdsConsideredFullCVar__(void)

{
  CVarNumCmdsConsideredFullCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNumCmdsConsideredFullCVar);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseAudioRenderScheduler'' @ 1503dc5a0

void __cdecl AudioMixerCVars::_dynamic_atexit_destructor_for__CVarUseAudioRenderScheduler__(void)

{
  CVarUseAudioRenderScheduler._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseAudioRenderScheduler);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseListenerOverrideForSpread'' @ 1503dc5c0

void __cdecl _dynamic_atexit_destructor_for__CVarUseListenerOverrideForSpread__(void)

{
  CVarUseListenerOverrideForSpread._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseListenerOverrideForSpread);
  return;
}

// `dynamic_atexit_destructor_for_'ChannelMapCache'' @ 1503dc5e0

void __cdecl Audio::_dynamic_atexit_destructor_for__ChannelMapCache__(void)

{
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)ChannelMapCache.AllocatorInstance.Data,
             ChannelMapCache.ArrayNum);
  if (ChannelMapCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(ChannelMapCache.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DumpSubmixCmd'' @ 1503dc620

void __cdecl Audio::_dynamic_atexit_destructor_for__DumpSubmixCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpSubmixCmd);
  return;
}

// `dynamic_atexit_destructor_for_'EngineSubmixDir'' @ 1503dc640

void __cdecl
`Audio::FMixerDevice::LoadRequiredSubmix'::__l33::_dynamic_atexit_destructor_for__EngineSubmixDir__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EngineSubmixDir.Data.AllocatorInstance.Data;
  if (EngineSubmixDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EngineSubmixDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FiveDotOneMap'' @ 1503dc660

void __cdecl
`Audio::FMixerDevice::GetDefaultPositionMap'::__l11::_dynamic_atexit_destructor_for__FiveDotOneMap__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FiveDotOneMap.AllocatorInstance.Data;
  if (FiveDotOneMap.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FiveDotOneMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GModulationSetMaxPitchRange'' @ 1503dc680

void __cdecl _dynamic_atexit_destructor_for__GModulationSetMaxPitchRange__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GModulationSetMaxPitchRange);
  return;
}

// `dynamic_atexit_destructor_for_'GSetAudioMixerSourceFadeMin'' @ 1503dc6a0

void __cdecl _dynamic_atexit_destructor_for__GSetAudioMixerSourceFadeMin__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GSetAudioMixerSourceFadeMin);
  return;
}

// `dynamic_atexit_destructor_for_'LeftOmniMap'' @ 1503dc6c0

void __cdecl
`Audio::FMixerSource::ComputeStereoChannelMap'::__l27::_dynamic_atexit_destructor_for__LeftOmniMap__
          (void)

{
  LeftOmniMap._72_4_ = 0;
  if (LeftOmniMap._64_8_ != 0) {
    FMemory::Free((void *)LeftOmniMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&LeftOmniMap);
  return;
}

// `dynamic_atexit_destructor_for_'LeftOmniMap'' @ 1503dc700

void __cdecl
`Audio::FMixerSource::ComputeStereoChannelMap'::__l32::_dynamic_atexit_destructor_for__LeftOmniMap__
          (void)

{
  LeftOmniMap._72_4_ = 0;
  if (LeftOmniMap._64_8_ != 0) {
    FMemory::Free((void *)LeftOmniMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&LeftOmniMap);
  return;
}

// `dynamic_atexit_destructor_for_'LeftOmniMap'' @ 1503dc740

void __cdecl
`Audio::FMixerSource::ComputeStereoChannelMap'::__l36::_dynamic_atexit_destructor_for__LeftOmniMap__
          (void)

{
  LeftOmniMap._72_4_ = 0;
  if (LeftOmniMap._64_8_ != 0) {
    FMemory::Free((void *)LeftOmniMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&LeftOmniMap);
  return;
}

// `dynamic_atexit_destructor_for_'LogEveryAudioThreadCommand'' @ 1503dc780

void __cdecl _dynamic_atexit_destructor_for__LogEveryAudioThreadCommand__(void)

{
  LogEveryAudioThreadCommand._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LogEveryAudioThreadCommand);
  return;
}

// `dynamic_atexit_destructor_for_'MonoMap'' @ 1503dc7a0

void __cdecl
`Audio::FMixerDevice::GetDefaultPositionMap'::__l8::_dynamic_atexit_destructor_for__MonoMap__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MonoMap.AllocatorInstance.Data;
  if (MonoMap.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MonoMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OmniMap'' @ 1503dc7c0

void __cdecl
`Audio::FMixerSource::ComputeMonoChannelMap'::__l37::_dynamic_atexit_destructor_for__OmniMap__(void)

{
  OmniMap._72_4_ = 0;
  if (OmniMap._64_8_ != 0) {
    FMemory::Free((void *)OmniMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&OmniMap);
  return;
}

// `dynamic_atexit_destructor_for_'OmniMap'' @ 1503dc800

void __cdecl
`Audio::FMixerSource::ComputeMonoChannelMap'::__l41::_dynamic_atexit_destructor_for__OmniMap__(void)

{
  OmniMap._72_4_ = 0;
  if (OmniMap._64_8_ != 0) {
    FMemory::Free((void *)OmniMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&OmniMap);
  return;
}

// `dynamic_atexit_destructor_for_'QuadMap'' @ 1503dc840

void __cdecl
`Audio::FMixerDevice::GetDefaultPositionMap'::__l10::_dynamic_atexit_destructor_for__QuadMap__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = QuadMap.AllocatorInstance.Data;
  if (QuadMap.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (QuadMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RecordingData'' @ 1503dc860

void __cdecl _dynamic_atexit_destructor_for__RecordingData__(void)

{
  FScriptContainerElement *pFVar1;
  TUniquePtr<Audio::FAudioRecordingData,TDefaultDelete<Audio::FAudioRecordingData>_> TVar2;
  
  TVar2.Ptr = RecordingData.Ptr;
  if (RecordingData.Ptr != (FAudioRecordingData *)0x0) {
    Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(&(RecordingData.Ptr)->Writer);
    pFVar1 = ((TVar2.Ptr)->InputBuffer).RawPCMData.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    operator_delete(TVar2.Ptr,0xa0);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'RightOmniMap'' @ 1503dc8b0

void __cdecl
`Audio::FMixerSource::ComputeStereoChannelMap'::__l27::
_dynamic_atexit_destructor_for__RightOmniMap__(void)

{
  RightOmniMap._72_4_ = 0;
  if (RightOmniMap._64_8_ != 0) {
    FMemory::Free((void *)RightOmniMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&RightOmniMap);
  return;
}

// `dynamic_atexit_destructor_for_'RightOmniMap'' @ 1503dc8f0

void __cdecl
`Audio::FMixerSource::ComputeStereoChannelMap'::__l32::
_dynamic_atexit_destructor_for__RightOmniMap__(void)

{
  RightOmniMap._72_4_ = 0;
  if (RightOmniMap._64_8_ != 0) {
    FMemory::Free((void *)RightOmniMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&RightOmniMap);
  return;
}

// `dynamic_atexit_destructor_for_'RightOmniMap'' @ 1503dc930

void __cdecl
`Audio::FMixerSource::ComputeStereoChannelMap'::__l36::
_dynamic_atexit_destructor_for__RightOmniMap__(void)

{
  RightOmniMap._72_4_ = 0;
  if (RightOmniMap._64_8_ != 0) {
    FMemory::Free((void *)RightOmniMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioMixerChannel::Type,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&RightOmniMap);
  return;
}

// `dynamic_atexit_destructor_for_'SevenDotOneMap'' @ 1503dc970

void __cdecl
`Audio::FMixerDevice::GetDefaultPositionMap'::__l12::
_dynamic_atexit_destructor_for__SevenDotOneMap__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SevenDotOneMap.AllocatorInstance.Data;
  if (SevenDotOneMap.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SevenDotOneMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SineOscLeft'' @ 1503dc990

void __cdecl
`Audio::FMixerDevice::SineOscTest'::__l2::_dynamic_atexit_destructor_for__SineOscLeft__(void)

{
  Audio::FSineOsc::~FSineOsc(&SineOscLeft);
  return;
}

// `dynamic_atexit_destructor_for_'SineOscRight'' @ 1503dc9b0

void __cdecl
`Audio::FMixerDevice::SineOscTest'::__l2::_dynamic_atexit_destructor_for__SineOscRight__(void)

{
  Audio::FSineOsc::~FSineOsc(&SineOscRight);
  return;
}

// `dynamic_atexit_destructor_for_'SpamEndlessCmd'' @ 1503dc9d0

void __cdecl
`Audio::FMixerSourceManager::Init'::__l2::_dynamic_atexit_destructor_for__SpamEndlessCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SpamEndlessCmd);
  return;
}

// `dynamic_atexit_destructor_for_'SpamEndlessCmdMPSC'' @ 1503dc9f0

void __cdecl
`Audio::FMixerSourceManager::Init'::__l2::_dynamic_atexit_destructor_for__SpamEndlessCmdMPSC__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SpamEndlessCmdMPSC);
  return;
}

// `dynamic_atexit_destructor_for_'SpamNopsCmd'' @ 1503dca10

void __cdecl
`Audio::FMixerSourceManager::Init'::__l2::_dynamic_atexit_destructor_for__SpamNopsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SpamNopsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'StallDiagnostics'' @ 1503dca30

void __cdecl
`Audio::FMixerSourceManager::Init'::__l2::_dynamic_atexit_destructor_for__StallDiagnostics__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&StallDiagnostics);
  return;
}

// `dynamic_atexit_destructor_for_'StereoMap'' @ 1503dca50

void __cdecl
`Audio::FMixerDevice::GetDefaultPositionMap'::__l9::_dynamic_atexit_destructor_for__StereoMap__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StereoMap.AllocatorInstance.Data;
  if (StereoMap.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StereoMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'VorbisChannelMapCache'' @ 1503dca70

void __cdecl Audio::_dynamic_atexit_destructor_for__VorbisChannelMapCache__(void)

{
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             VorbisChannelMapCache.AllocatorInstance.Data,VorbisChannelMapCache.ArrayNum);
  if (VorbisChannelMapCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(VorbisChannelMapCache.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAudioMixerSourceManager_TotalQdCmds'' @ 1503dcab0

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterAudioMixerSourceManager_TotalQdCmds__(void)

{
  if ((__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter3987'' @ 1503dcad0

void __cdecl
`Audio::FMixerSourceManager::AudioMixerThreadCommand'::__l2::
_dynamic_atexit_destructor_for____TraceCounter3987__(void)

{
  if ((__TraceCounter3987.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter3987.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter3988'' @ 1503dcaf0

void __cdecl
`Audio::FMixerSourceManager::AudioMixerThreadCommand'::__l2::
_dynamic_atexit_destructor_for____TraceCounter3988__(void)

{
  if ((__TraceCounter3988.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter3988.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter4030'' @ 1503dcb10

void __cdecl
`Audio::FMixerSourceManager::PumpCommandQueue'::__l2::
_dynamic_atexit_destructor_for____TraceCounter4030__(void)

{
  if ((__TraceCounter4030.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter4030.CounterName);
    return;
  }
  return;
}

