// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1000

// FeatureName'' @ 1411425f0

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// GeneratedByEnginePrefix'' @ 141142610

void __cdecl
`dynamic_initializer_for_'FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix__(void)

{
  ::FString::FString(&FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix,
                     L"GeneratedByEngine_");
  atexit(`dynamic_atexit_destructor_for_'FMorphTargetImportedSourceFileInfo::
         GeneratedByEnginePrefix__);
  return;
}

// GroupControlSlotUsageMap'' @ 141142640

void __cdecl `dynamic_initializer_for_'USoundNodeGroupControl::GroupControlSlotUsageMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'USoundNodeGroupControl::GroupControlSlotUsageMap__);
  return;
}

// OnCreateRenderThreadResources'' @ 141142660

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 141142680

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// `dynamic_initializer_for_'Azimuth'' @ 1411426a0

void __cdecl Audio::ListenerOrientationInterface::Inputs::_dynamic_initializer_for__Azimuth__(void)

{
  ::FName::FName(&Azimuth,"UE.Listener.Orientation.Azimuth");
  return;
}

// `dynamic_initializer_for_'Azimuth'' @ 1411426c0

void __cdecl Audio::SourceOrientationInterface::Inputs::_dynamic_initializer_for__Azimuth__(void)

{
  ::FName::FName(&Azimuth,"UE.Source.Orientation.Azimuth");
  return;
}

// `dynamic_initializer_for_'Azimuth'' @ 1411426e0

void __cdecl Audio::SpatializationInterface::Inputs::_dynamic_initializer_for__Azimuth__(void)

{
  ::FName::FName(&Azimuth,"UE.Spatialization.Azimuth");
  return;
}

// `dynamic_initializer_for_'CVarAnimSkinnedAssetISPCEnabled'' @ 141142700

void __cdecl _dynamic_initializer_for__CVarAnimSkinnedAssetISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimSkinnedAssetISPCEnabled,L"a.SkinnedAsset.ISPC",
             &bAnim_SkinnedAsset_ISPC_Enabled,L"Whether to use ISPC optimizations on skinned assets"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimSkinnedAssetISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarBlockOnChunkLoadCompletion'' @ 141142750

void __cdecl _dynamic_initializer_for__CVarBlockOnChunkLoadCompletion__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlockOnChunkLoadCompletion,L"au.streamcache.BlockOnChunkLoadCompletion",
             &BlockOnChunkLoadCompletionCVar,
             L"When set to 1, USoundWaves we will always attempt to synchronously load a chunk after a USoundWave request has finished.\n0: Don\'t try to block after a SoundWave has completed loading a chunk, 1: Block after a USoundWave\'s chunk request has completed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBlockOnChunkLoadCompletion__);
  return;
}

// `dynamic_initializer_for_'CVarBypassRetainInSoundNodes'' @ 1411427a0

void __cdecl _dynamic_initializer_for__CVarBypassRetainInSoundNodes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBypassRetainInSoundNodes,L"au.streamcache.priming.BypassRetainFromSoundCues",
             &BypassRetainInSoundNodesCVar,
             L"When set to 1, we ignore the loading behavior of sound classes set on a Sound Cue directly.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBypassRetainInSoundNodes__);
  return;
}

// `dynamic_initializer_for_'CVarConcurrencyMinDistanceDelta'' @ 1411427f0

void __cdecl _dynamic_initializer_for__CVarConcurrencyMinDistanceDelta__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarConcurrencyMinDistanceDelta,L"au.Concurrency.MinDistanceDelta",
             &ConcurrencyMinDistanceDeltaCVar,
             L"Minimum distance delta a sound needs to be to determine if it\'s further away from another sound.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarConcurrencyMinDistanceDelta__);
  return;
}

// `dynamic_initializer_for_'CVarConcurrencyMinVolumeScale'' @ 141142840

void __cdecl _dynamic_initializer_for__CVarConcurrencyMinVolumeScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarConcurrencyMinVolumeScale,L"au.Concurrency.MinVolumeScale",
             &ConcurrencyMinVolumeScaleCVar,
             L"Volume threshold considered silent for volume scaling (linear scale).\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarConcurrencyMinVolumeScale__);
  return;
}

// `dynamic_initializer_for_'CVarDisableRetaining'' @ 141142890

void __cdecl _dynamic_initializer_for__CVarDisableRetaining__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableRetaining,L"au.streamcache.DisableRetaining",&DisableRetainingCVar,
             L"When set to 1, USoundWaves will not retain chunks of their own audio.\n0: Don\'t disable retaining, 1: disable retaining."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableRetaining__);
  return;
}

// `dynamic_initializer_for_'CVarDispatchToGameThreadOnChunkRequest'' @ 1411428e0

void __cdecl _dynamic_initializer_for__CVarDispatchToGameThreadOnChunkRequest__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDispatchToGameThreadOnChunkRequest,
             L"au.streamcache.DispatchToGameThreadOnChunkRequest",
             &DispatchToGameThreadOnChunkRequestCVar,
             L"When set to 1, we will always dispatch a callback to the game thread whenever a USoundWave request has finished. This may cause chunks of audio to be evicted by the time we need them.\n0: as soon as the chunk is loaded, capture the audio chunk. 1: As soon as the chunk is loaded, dispatch a callback to the gamethread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDispatchToGameThreadOnChunkRequest__);
  return;
}

// `dynamic_initializer_for_'CVarEnablePerUserHitTesting'' @ 141142930

void __cdecl _dynamic_initializer_for__CVarEnablePerUserHitTesting__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = HandlePerUserHitTestingToggled;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnablePerUserHitTesting,L"Slate.AllowPerUserHitTesting",&bEnablePerUserHitTesting,
             L"Toggles between widgets mapping to a user id and requring a matching user id from an input event or allowing all users to interact with widget"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarEnablePerUserHitTesting__);
  return;
}

// `dynamic_initializer_for_'CVarFixUpBrokenSubmixAssets'' @ 141142a70

void __cdecl _dynamic_initializer_for__CVarFixUpBrokenSubmixAssets__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFixUpBrokenSubmixAssets,L"au.submix.clearbrokensubmixassets",
             &ClearBrokenSubmixAssetsCVar,
             L"If set, will verify that we don\'t have a submix that lists a child submix that is no longer its child, and the former children will not erroneously list their previous parents.\n0: Disable, >0: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFixUpBrokenSubmixAssets__);
  return;
}

// `dynamic_initializer_for_'CVarForceNonStreamingInEditor'' @ 141142ac0

void __cdecl _dynamic_initializer_for__CVarForceNonStreamingInEditor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceNonStreamingInEditor,L"au.editor.ForceAudioNonStreaming",
             &ForceNonStreamingInEditorCVar,
             L"When set to 1, forces any audio played to be non-streaming May force a DDC miss.\n0: Honor the Play When Silent flag, 1: stop all silent non-procedural sources."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceNonStreamingInEditor__);
  return;
}

// `dynamic_initializer_for_'CVarManuallyPrimeChildNodes'' @ 141142b10

void __cdecl _dynamic_initializer_for__CVarManuallyPrimeChildNodes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarManuallyPrimeChildNodes,L"au.streamcache.priming.ManuallyPrimeChildNodes",
             &ManuallyPrimeChildNodesCVar,
             L"When set to 1, we ignore the loading behavior of sound classes set on a Sound Cue directly.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarManuallyPrimeChildNodes__);
  return;
}

// `dynamic_initializer_for_'CVarMaxRandomBranches'' @ 141142b60

void __cdecl _dynamic_initializer_for__CVarMaxRandomBranches__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxRandomBranches,L"au.MaxRandomBranches",&MaxRandomBranchesCVar,
             L"Sets the max amount of branches to play from for any random node. The rest of the branches will be released from memory.\n0: No culling, Any other value: The amount of branches we should use as a maximum for any random node."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxRandomBranches__);
  return;
}

// `dynamic_initializer_for_'CVarMemoryForSkinnedAssetCompile'' @ 141142bb0

void __cdecl _dynamic_initializer_for__CVarMemoryForSkinnedAssetCompile__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMemoryForSkinnedAssetCompile,L"Memory.MemoryForSkinnedAssetCompile",local_res8,
             L"Memory in MiB set aside for a SkinnedAsset compile job\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMemoryForSkinnedAssetCompile__);
  return;
}

// `dynamic_initializer_for_'CVarPrimeDelayedSoundNodes'' @ 141142c00

void __cdecl _dynamic_initializer_for__CVarPrimeDelayedSoundNodes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrimeDelayedSoundNodes,L"au.streamcache.priming.PrimeDelayNodes",
             &PrimeDelayedSoundNodesCVar,
             L"When set to 1, sounds will be loaded into the cache automatically when a delay node is hit.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPrimeDelayedSoundNodes__);
  return;
}

// `dynamic_initializer_for_'CVarPrimeRandomSoundNodes'' @ 141142c50

void __cdecl _dynamic_initializer_for__CVarPrimeRandomSoundNodes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrimeRandomSoundNodes,L"au.streamcache.priming.PrimeRandomNodes",
             &PrimeRandomSoundNodesCVar,
             L"When set to 1, sounds will be loaded into the cache automatically when a random node is hit.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPrimeRandomSoundNodes__);
  return;
}

// `dynamic_initializer_for_'CVarRetainInlinedFirstChunk'' @ 141142ca0

void __cdecl _dynamic_initializer_for__CVarRetainInlinedFirstChunk__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRetainInlinedFirstChunk,L"au.streamcache.RetainInlinedFirstChunk",
             &bRetainInlinedFirstChunkCVar,L"0 is off, 1 or anything else is on",0);
  atexit(_dynamic_atexit_destructor_for__CVarRetainInlinedFirstChunk__);
  return;
}

// `dynamic_initializer_for_'CVarShowAllCanvases'' @ 141142cf0

void __cdecl _dynamic_initializer_for__CVarShowAllCanvases__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShowAllCanvases,L"Slate.GameLayer.AllCanvasesVisible",local_res8,
             L"Show/Hide the viewport slot, player canvas, and debug canvas.",1);
  atexit(_dynamic_atexit_destructor_for__CVarShowAllCanvases__);
  return;
}

// `dynamic_initializer_for_'CVarShowDebugCanvas'' @ 141142d40

void __cdecl _dynamic_initializer_for__CVarShowDebugCanvas__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowDebugCanvas,L"Slate.GameLayer.DebugCanvasVisible",
             &CanvasVisibility::DebugCanvasVisibilityConsoleValue,L"Show/Hide the debug canvas.",1);
  atexit(_dynamic_atexit_destructor_for__CVarShowDebugCanvas__);
  return;
}

// `dynamic_initializer_for_'CVarShowPlayerCanvas'' @ 141142d90

void __cdecl _dynamic_initializer_for__CVarShowPlayerCanvas__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowPlayerCanvas,L"Slate.GameLayer.PlayerCanvasVisible",
             &CanvasVisibility::PlayerCanvasVisibilityConsoleValue,L"Show/Hide the player canvas.",1
            );
  atexit(_dynamic_atexit_destructor_for__CVarShowPlayerCanvas__);
  return;
}

// `dynamic_initializer_for_'CVarShowViewportSlot'' @ 141142de0

void __cdecl _dynamic_initializer_for__CVarShowViewportSlot__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowViewportSlot,L"Slate.GameLayer.ViewportSlotVisible",
             &CanvasVisibility::ViewportSlotVisibilityConsoleValue,L"Show/Hide the slot on viewport"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarShowViewportSlot__);
  return;
}

// `dynamic_initializer_for_'CVarSkeletalMeshThrottleNaniteRayTracingUpdates'' @ 141142e30

void __cdecl _dynamic_initializer_for__CVarSkeletalMeshThrottleNaniteRayTracingUpdates__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkeletalMeshThrottleNaniteRayTracingUpdates,
             L"r.SkeletalMesh.ThrottleNaniteRayTracingUpdates",
             &GSkeletalMeshThrottleNaniteRayTracingUpdates,
             L"Throttles the number of Nanite ray tracing GPU skin cache updates to N per frame (excluding required updates due to LOD changes)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSkeletalMeshThrottleNaniteRayTracingUpdates__);
  return;
}

// `dynamic_initializer_for_'CVarSoundWaveDefaultLoadingBehavior'' @ 141142e80

void __cdecl _dynamic_initializer_for__CVarSoundWaveDefaultLoadingBehavior__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoundWaveDefaultLoadingBehavior,SoundWaveDefaultLoadingBehaviorCVarName,
             &SoundWaveDefaultLoadingBehaviorCVar,
             L"This can be set to define the default behavior when a USoundWave is loaded.\n1: Retain audio data on load, 2: prime audio data on load, 3: load on demand (No audio data is loaded until a USoundWave is played or primed)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSoundWaveDefaultLoadingBehavior__);
  return;
}

// `dynamic_initializer_for_'CvarAllowReverbForMultichannelSources'' @ 141142ed0

void __cdecl _dynamic_initializer_for__CvarAllowReverbForMultichannelSources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarAllowReverbForMultichannelSources,L"au.AllowReverbForMultichannelSources",
             &AllowReverbForMultichannelSources,
             L"Controls if we allow Reverb processing for sources with channel counts > 2.\n0: Disable, >0: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarAllowReverbForMultichannelSources__);
  return;
}

// `dynamic_initializer_for_'Distance'' @ 141142f20

void __cdecl Audio::AttenuationInterface::Inputs::_dynamic_initializer_for__Distance__(void)

{
  ::FName::FName(&Distance,"UE.Attenuation.Distance");
  return;
}

// `dynamic_initializer_for_'DumpBakedAnalysisDataCmd'' @ 141142f40

void __cdecl _dynamic_initializer_for__DumpBakedAnalysisDataCmd__(void)

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
    puVar1[3] = DumpBakedAnalysisData;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&DumpBakedAnalysisDataCmd,L"au.DumpBakedAnalysisData",
             L"debug command to dump the baked analysis data of a sound wave to a csv file.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__DumpBakedAnalysisDataCmd__);
  return;
}

// `dynamic_initializer_for_'Elevation'' @ 141143080

void __cdecl
Audio::ListenerOrientationInterface::Inputs::_dynamic_initializer_for__Elevation__(void)

{
  ::FName::FName(&Elevation,"UE.Listener.Orientation.Elevation");
  return;
}

// `dynamic_initializer_for_'Elevation'' @ 1411430a0

void __cdecl Audio::SourceOrientationInterface::Inputs::_dynamic_initializer_for__Elevation__(void)

{
  ::FName::FName(&Elevation,"UE.Source.Orientation.Elevation");
  return;
}

// `dynamic_initializer_for_'Elevation'' @ 1411430c0

void __cdecl Audio::SpatializationInterface::Inputs::_dynamic_initializer_for__Elevation__(void)

{
  ::FName::FName(&Elevation,"UE.Spatialization.Elevation");
  return;
}

// `dynamic_initializer_for_'GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite'' @ 1411430e0

void __cdecl
_dynamic_initializer_for__GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite__(void)

{
  code *pcVar1;
  bool bVar2;
  
  FSkeletalMeshUpdateChannel::FBackend::FBackend
            ((FBackend *)&GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite);
  GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite._0_8_ =
       &___7__TBackend_VFSkeletalMeshUpdatePacketNanite___FSkeletalMeshUpdateChannel__6B_;
  if (FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::Instance !=
      (TBackend<FSkeletalMeshUpdatePacketNanite> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                       ,599,
                       L"Multiple skeletal mesh update backends of the same type were instantiated. Only one is allowed at a time."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::Instance =
       &GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite;
  atexit(
        _dynamic_atexit_destructor_for__GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite__
        );
  return;
}

// `dynamic_initializer_for_'GSoundSubmixCustomVersion'' @ 141143160

void __cdecl _dynamic_initializer_for__GSoundSubmixCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FSoundSubmixCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,2,L"SoundSubmixVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GSoundSubmixCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GameLayerManagerInstances'' @ 1411431a0

void __cdecl CanvasVisibility::_dynamic_initializer_for__GameLayerManagerInstances__(void)

{
  atexit(_dynamic_atexit_destructor_for__GameLayerManagerInstances__);
  return;
}

// `dynamic_initializer_for_'LogAudioConcurrency'' @ 1411431c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioConcurrency__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioConcurrency,L"LogAudioConcurrency",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioConcurrency__);
  return;
}

// `dynamic_initializer_for_'LogSkinnedAsset'' @ 141143200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSkinnedAsset__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSkinnedAsset,L"LogSkinnedAsset",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSkinnedAsset__);
  return;
}

// `dynamic_initializer_for_'LogSlateSoundDevice'' @ 141143240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSlateSoundDevice__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSlateSoundDevice,L"LogSlateSoundDevice",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSlateSoundDevice__);
  return;
}

// `dynamic_initializer_for_'LogSoundNodeGroupControl'' @ 141143280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSoundNodeGroupControl__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSoundNodeGroupControl,L"LogSoundNodeGroupControl",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSoundNodeGroupControl__);
  return;
}

// `dynamic_initializer_for_'LogViewport'' @ 1411432c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogViewport__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogViewport,L"LogViewport",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogViewport__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141143300

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_FSlateTexture2DRHIRef'' @ 141143320

void __cdecl _dynamic_initializer_for__NAME_FSlateTexture2DRHIRef__(void)

{
  FName::FName(&NAME_FSlateTexture2DRHIRef,L"FSlateTexture2DRHIRef");
  return;
}

// `dynamic_initializer_for_'NAME_SceneViewport'' @ 141143340

void __cdecl _dynamic_initializer_for__NAME_SceneViewport__(void)

{
  FName::FName(&NAME_SceneViewport,L"SceneViewport");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141143360

void __cdecl Audio::AttenuationInterface::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,"UE.Attenuation");
  return;
}

// `dynamic_initializer_for_'Name'' @ 141143380

void __cdecl Audio::ListenerOrientationInterface::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,"UE.Listener.Orientation");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1411433a0

void __cdecl Audio::SourceOrientationInterface::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,"UE.Source.Orientation");
  return;
}

// `dynamic_initializer_for_'Name'' @ 1411433c0

void __cdecl Audio::SpatializationInterface::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,"UE.Spatialization");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClothTotalTime'' @ 1411433e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClothTotalTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClothTotalTime == (FThreadSafeStaticStat<FStat_STAT_ClothTotalTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ClothTotalTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothTotalTime,*pFVar1,L"Cloth Total",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClothWriteback'' @ 141143470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClothWriteback__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClothWriteback == (FThreadSafeStaticStat<FStat_STAT_ClothWriteback>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ClothWriteback");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothWriteback,*pFVar1,L"Cloth Writeback",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h__Script_Engine_3958706238'' @ 141143500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h__Script_Engine_3958706238__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h__Script_Engine_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h__Script_Engine_4156107730'' @ 141143550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h__Script_Engine_4156107730__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h__Script_Engine_1281653729'' @ 141143590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h__Script_Engine_1281653729__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h__Script_Engine_3453709897'' @ 1411435d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h__Script_Engine_3453709897__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_SlateBrushAsset_h__Script_Engine_1822237336'' @ 141143610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_SlateBrushAsset_h__Script_Engine_1822237336__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_SlateBrushAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h__Script_Engine_657557775'' @ 141143650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h__Script_Engine_657557775__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h__Script_Engine_Statics
             ::EnumInfo,6);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h__Script_Engine_1385478356'' @ 1411436a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h__Script_Engine_1385478356__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h__Script_Engine_294484022'' @ 1411436f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h__Script_Engine_294484022__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h__Script_Engine_897673493'' @ 141143740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h__Script_Engine_897673493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h__Script_Engine_863215576'' @ 141143790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h__Script_Engine_863215576__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h__Script_Engine_2831228148'' @ 1411437e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h__Script_Engine_2831228148__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectPreset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSubmix_h__Script_Engine_1033118906'' @ 141143820

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSubmix_h__Script_Engine_1033118906__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSubmix_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h__Script_Engine_2267974707'' @ 141143860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h__Script_Engine_2267974707__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h__Script_Engine_3550207707'' @ 1411438b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h__Script_Engine_3550207707__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h__Script_Engine_3357279042'' @ 141143900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h__Script_Engine_3357279042__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h__Script_Engine_2881280571'' @ 141143950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h__Script_Engine_2881280571__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h__Script_Engine_189098912'' @ 141143990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h__Script_Engine_189098912__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h__Script_Engine_2354864277'' @ 1411439d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h__Script_Engine_2354864277__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h__Script_Engine_2478406695'' @ 141143a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h__Script_Engine_2478406695__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h__Script_Engine_539116985'' @ 141143a50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h__Script_Engine_539116985__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h__Script_Engine_1653710613'' @ 141143a90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h__Script_Engine_1653710613__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h__Script_Engine_2338899466'' @ 141143ad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h__Script_Engine_2338899466__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h__Script_Engine_1125776714'' @ 141143b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h__Script_Engine_1125776714__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h__Script_Engine_89025770'' @ 141143b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h__Script_Engine_89025770__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h__Script_Engine_2105028824'' @ 141143ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h__Script_Engine_2105028824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h__Script_Engine_2342394323'' @ 141143be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h__Script_Engine_2342394323__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h__Script_Engine_47230158'' @ 141143c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h__Script_Engine_47230158__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h__Script_Engine_225468537'' @ 141143c60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h__Script_Engine_225468537__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h__Script_Engine_2106556824'' @ 141143ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h__Script_Engine_2106556824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h__Script_Engine_1013086090'' @ 141143cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h__Script_Engine_1013086090__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h__Script_Engine_3004591449'' @ 141143d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h__Script_Engine_3004591449__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h__Script_Engine_2506896288'' @ 141143d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h__Script_Engine_2506896288__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeQualityLevel_h__Script_Engine_3413787543'' @ 141143db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeQualityLevel_h__Script_Engine_3413787543__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeQualityLevel_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h__Script_Engine_2557811978'' @ 141143df0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h__Script_Engine_2557811978__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h__Script_Engine_2599943868'' @ 141143e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h__Script_Engine_2599943868__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h__Script_Engine_1971116290'' @ 141143e70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h__Script_Engine_1971116290__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSwitch_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h__Script_Engine_3528242355'' @ 141143eb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h__Script_Engine_3528242355__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h__Script_Engine_392967842'' @ 141143ef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h__Script_Engine_392967842__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h__Script_Engine_1444927736'' @ 141143f30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h__Script_Engine_1444927736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h__Script_Engine_2385090431'' @ 141143f70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h__Script_Engine_2385090431__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h__Script_Engine_712944178'' @ 141143fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h__Script_Engine_712944178__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h__Script_Engine_1992684693'' @ 141144010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h__Script_Engine_1992684693__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h__Script_Engine_Statics
             ::ClassInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h__Script_Engine_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h__Script_Engine_606903407'' @ 141144060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h__Script_Engine_606903407__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h__Script_Engine_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h__Script_Engine_4294900487'' @ 1411440b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h__Script_Engine_4294900487__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h__Script_Engine_4100303331'' @ 141144100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h__Script_Engine_4100303331__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UCheckBoxStyleAsset @ 148674890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCheckBoxStyleAsset(void)

{
  if (Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton,
               &Z_Construct_UClass_UCheckBoxStyleAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton;
}

// EFFTSize_StaticEnum @ 148674930

UEnum * __cdecl EFFTSize_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFFTSize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EFFTSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EFFTSize,(UObject *)pUVar1,L"EFFTSize");
  }
  return Z_Registration_Info_UEnum_EFFTSize.OuterSingleton;
}

// EFFTPeakInterpolationMethod_StaticEnum @ 148674970

UEnum * __cdecl EFFTPeakInterpolationMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod,(UObject *)pUVar1,
                       L"EFFTPeakInterpolationMethod");
  }
  return Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton;
}

// EFFTWindowType_StaticEnum @ 1486749b0

UEnum * __cdecl EFFTWindowType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EFFTWindowType,(UObject *)pUVar1,L"EFFTWindowType");
  }
  return Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton;
}

// EAudioSpectrumType_StaticEnum @ 1486749f0

UEnum * __cdecl EAudioSpectrumType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumType,(UObject *)pUVar1,
                       L"EAudioSpectrumType");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton;
}

// Z_Construct_UClass_USoundMix_NoRegister @ 148674a30

UClass * __cdecl Z_Construct_UClass_USoundMix_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundMix.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundMix",&Z_Registration_Info_UClass_USoundMix.InnerSingleton,
               USoundMix::StaticRegisterNativesUSoundMix,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundMix>,InternalVTableHelperCtorCaller<USoundMix>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundMix.InnerSingleton;
}

// NewStructOps @ 148674ac0

void * __cdecl Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDynamicChildSubmix,&UE::CoreUObject::Private::Construct<FDynamicChildSubmix>,&UE::CoreUObject::Private::ConstructForTests<FDynamicChildSubmix>,&UE::CoreUObject::Private::Destruct<FDynamicChildSubmix>,&UE::CoreUObject::Private::Copy<FDynamicChildSubmix>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundConcurrency @ 148674b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundConcurrency(void)

{
  if (Z_Registration_Info_UClass_USoundConcurrency.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundConcurrency.OuterSingleton,
               &Z_Construct_UClass_USoundConcurrency_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundConcurrency.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode @ 148674bd0

UEnum * __cdecl Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode(void)

{
  if (Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.InnerSingleton;
}

// EMaxConcurrentResolutionRule_StaticEnum @ 148674c10

UEnum * __cdecl EMaxConcurrentResolutionRule_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule,(UObject *)pUVar1,
                       L"EMaxConcurrentResolutionRule");
  }
  return Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 148674c50

void __cdecl
Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_USoundSubmixBase_DynamicConnect @ 148674c60

UFunction * __cdecl Z_Construct_UFunction_USoundSubmixBase_DynamicConnect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmixBase_DynamicConnect_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EConcurrencyVolumeScaleMode_StaticEnum @ 148674ca0

UEnum * __cdecl EConcurrencyVolumeScaleMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode,(UObject *)pUVar1,
                       L"EConcurrencyVolumeScaleMode");
  }
  return Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 148674ce0

void __cdecl
Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bLimitToOwner_SetBit @ 148674cf0

void __cdecl
Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bLimitToOwner_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) | 1;
  return;
}

// NewProp_bVolumeScaleCanRelease_SetBit @ 148674d00

void __cdecl
Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewProp_bVolumeScaleCanRelease_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) | 2;
  return;
}

// NewProp_bEnableMaxCountPlatformScaling_SetBit @ 148674d10

void __cdecl
Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::
NewProp_bEnableMaxCountPlatformScaling_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) | 4;
  return;
}

// Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect @ 148674d20

UFunction * __cdecl Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmixBase_DynamicDisconnect_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 148674d60

void * __cdecl Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundConcurrencySettings,&UE::CoreUObject::Private::Construct<FSoundConcurrencySettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundConcurrencySettings>,&UE::CoreUObject::Private::Destruct<FSoundConcurrencySettings>,&UE::CoreUObject::Private::Copy<FSoundConcurrencySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor @ 148674da0

UFunction * __cdecl Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmixBase_FindDynamicAncestor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USoundNodeDialoguePlayer @ 148674de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeDialoguePlayer(void)

{
  if (Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton,
               &Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton;
}

// NewProp_bAutoDisable_SetBit @ 148674f30

void __cdecl Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bLooping_SetBit @ 148674f40

void __cdecl
Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148674fd0

void __cdecl
Z_Construct_UFunction_USoundConcurrency_SetMaxCount_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_USoundConcurrency_SetMaxCount @ 148674fe0

UFunction * __cdecl Z_Construct_UFunction_USoundConcurrency_SetMaxCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundConcurrency_SetMaxCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsDynamic_SetBit @ 1486751f0

void __cdecl
Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_bIsDynamic_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xe8) = *(byte *)((longlong)param_1 + 0xe8) | 1;
  return;
}

// Z_Construct_UEnum_Engine_ESendLevelControlMethod @ 148675200

UEnum * __cdecl Z_Construct_UEnum_Engine_ESendLevelControlMethod(void)

{
  if (Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESubmixSendStage @ 148675240

UEnum * __cdecl Z_Construct_UEnum_Engine_ESubmixSendStage(void)

{
  if (Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton;
}

// EAudioSpectrumBandPresetType_StaticEnum @ 148675280

UEnum * __cdecl EAudioSpectrumBandPresetType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType,(UObject *)pUVar1,
                       L"EAudioSpectrumBandPresetType");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton;
}

// EGainParamMode_StaticEnum @ 1486753a0

UEnum * __cdecl EGainParamMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EGainParamMode,(UObject *)pUVar1,L"EGainParamMode");
  }
  return Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton;
}

// NewStructOps @ 1486754b0

void * __cdecl
Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundSubmixSpectralAnalysisBandSettings,&UE::CoreUObject::Private::Construct<FSoundSubmixSpectralAnalysisBandSettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundSubmixSpectralAnalysisBandSettings>,&UE::CoreUObject::Private::Destruct<FSoundSubmixSpectralAnalysisBandSettings>,&UE::CoreUObject::Private::Copy<FSoundSubmixSpectralAnalysisBandSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate @ 1486754f0

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDoNormalize_SetBit @ 1486755f0

void __cdecl
Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bDoAutoRange_SetBit @ 148675600

void __cdecl
Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate @ 148675730

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1486757b0

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
FSkeletalMeshUpdatePacketNanite::_scalar_deleting_destructor_
          (FSkeletalMeshUpdatePacketNanite *this,uint param_1)

{
  FSkeletalMeshObjectNanite **ppFVar1;
  FSkinCacheEntryThrottled *pFVar2;
  FDynamicDataEntry *pFVar3;
  
  ppFVar1 = (this->SkinCacheRayTracing).AllocatorInstance.Data;
  if (ppFVar1 != (FSkeletalMeshObjectNanite **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppFVar1);
  }
  pFVar2 = (this->SkinCacheRayTracingThrottled).AllocatorInstance.Data;
  if (pFVar2 != (FSkinCacheEntryThrottled *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar2);
  }
  pFVar3 = (this->DynamicDatas).AllocatorInstance.Data;
  if (pFVar3 != (FDynamicDataEntry *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// Z_Construct_UFunction_USoundSubmix_RemoveEnvelopeFollowerDelegate @ 148675810

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_RemoveEnvelopeFollowerDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_RemoveEnvelopeFollowerDelegate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EAudioRecordingExportType_StaticEnum @ 148675850

UEnum * __cdecl EAudioRecordingExportType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAudioRecordingExportType,(UObject *)pUVar1,
                       L"EAudioRecordingExportType");
  }
  return Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton;
}

// ESendLevelControlMethod_StaticEnum @ 148675890

UEnum * __cdecl ESendLevelControlMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESendLevelControlMethod,(UObject *)pUVar1,
                       L"ESendLevelControlMethod");
  }
  return Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton;
}

// Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate @ 1486758d0

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_DisableManualSendClamp_SetBit @ 148675910

void __cdecl
Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewProp_DisableManualSendClamp_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewStructOps @ 148675960

void * __cdecl Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundSubmixSendInfoBase,&UE::CoreUObject::Private::Construct<FSoundSubmixSendInfoBase>,&UE::CoreUObject::Private::ConstructForTests<FSoundSubmixSendInfoBase>,&UE::CoreUObject::Private::Destruct<FSoundSubmixSendInfoBase>,&UE::CoreUObject::Private::Copy<FSoundSubmixSendInfoBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeDistanceCrossFade @ 1486759b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeDistanceCrossFade(void)

{
  if (Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.OuterSingleton,
               &Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDistanceDatum @ 1486759f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDistanceDatum(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDistanceDatum.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDistanceDatum.InnerSingleton,
               &Z_Construct_UScriptStruct_FDistanceDatum_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDistanceDatum.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDistanceDatum.InnerSingleton;
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

// Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation @ 148675a70

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_SetDryVolumeModulation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 148675ab0

void * __cdecl Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDistanceDatum,&UE::CoreUObject::Private::Construct<FDistanceDatum>,&UE::CoreUObject::Private::ConstructForTests<FDistanceDatum>,&UE::CoreUObject::Private::Destruct<FDistanceDatum>,&UE::CoreUObject::Private::Copy<FDistanceDatum>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation @ 148675c20

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_SetOutputVolumeModulation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel @ 148675d20

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ESubmixSendStage_StaticEnum @ 148675e20

UEnum * __cdecl ESubmixSendStage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESubmixSendStage,(UObject *)pUVar1,
                       L"ESubmixSendStage");
  }
  return Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton;
}

// NewStructOps @ 148675e60

void * __cdecl Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundSubmixSendInfo,&UE::CoreUObject::Private::Construct<FSoundSubmixSendInfo>,&UE::CoreUObject::Private::ConstructForTests<FSoundSubmixSendInfo>,&UE::CoreUObject::Private::Destruct<FSoundSubmixSendInfo>,&UE::CoreUObject::Private::Copy<FSoundSubmixSendInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume @ 148675ea0

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USoundNodeLooping @ 148675ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeLooping(void)

{
  if (Z_Registration_Info_UClass_USoundNodeLooping.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeLooping.OuterSingleton,
               &Z_Construct_UClass_USoundNodeLooping_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeLooping.OuterSingleton;
}

// NewProp_bLoopIndefinitely_SetBit @ 148675f50

void __cdecl
Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) | 1;
  return;
}

// Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel @ 148675f60

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148676370

void * __thiscall
FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::_scalar_deleting_destructor_
          (TBackend<FSkeletalMeshUpdatePacketNanite> *this,uint param_1)

{
  FBackend::~FBackend((FBackend *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation @ 1486763b0

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_SetWetVolumeModulation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing @ 1486763f0

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundSubmix_StartRecordingOutput @ 148676430

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_StartRecordingOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis @ 1486766c0

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing @ 148676700

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundSubmix_StopRecordingOutput @ 148676780

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_StopRecordingOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis @ 1486768f0

UFunction * __cdecl Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMuteWhenBackgrounded_SetBit @ 1486769b0

void __cdecl
Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf0) = *(byte *)((longlong)param_1 + 0xf0) | 1;
  return;
}

// NewProp_bSendToAudioLink_SetBit @ 1486769c0

void __cdecl Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x220) = *(byte *)((longlong)param_1 + 0x220) | 1;
  return;
}

// Z_Construct_UClass_USoundConcurrency_NoRegister @ 148676e20

UClass * __cdecl Z_Construct_UClass_USoundConcurrency_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundConcurrency",
               &Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton,
               USoundConcurrency::StaticRegisterNativesUSoundConcurrency,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundConcurrency>,
               InternalVTableHelperCtorCaller<USoundConcurrency>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeMature @ 148676e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeMature(void)

{
  if (Z_Registration_Info_UClass_USoundNodeMature.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeMature.OuterSingleton,
               &Z_Construct_UClass_USoundNodeMature_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeMature.OuterSingleton;
}

// Z_Construct_UClass_USoundAttenuation_NoRegister @ 148676f20

UClass * __cdecl Z_Construct_UClass_USoundAttenuation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundAttenuation",
               &Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton,
               USoundAttenuation::StaticRegisterNativesUSoundAttenuation,0x3f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundAttenuation>,
               InternalVTableHelperCtorCaller<USoundAttenuation>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundAttenuation.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeDoppler @ 148676f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeDoppler(void)

{
  if (Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton,
               &Z_Construct_UClass_USoundNodeDoppler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton;
}

// NewProp_bUseSmoothing_SetBit @ 148676fe0

void __cdecl
Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// Z_Construct_UClass_USoundBase @ 148677060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundBase(void)

{
  if (Z_Registration_Info_UClass_USoundBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundBase.OuterSingleton,
               &Z_Construct_UClass_USoundBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundBase.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule @ 1486770a0

UEnum * __cdecl Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule(void)

{
  if (Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EUseSubmixOnPreviewMode @ 1486770e0

UEnum * __cdecl Z_Construct_UEnum_Engine_EUseSubmixOnPreviewMode(void)

{
  if (Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EUseSubmixOnPreviewMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EVirtualizationMode @ 148677120

UEnum * __cdecl Z_Construct_UEnum_Engine_EVirtualizationMode(void)

{
  if (Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSoundConcurrencySettings @ 148677160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundConcurrencySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundConcurrencySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundConcurrencySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundConcurrencySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundConcurrencySettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundSubmixSendInfo @ 1486771e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundSubmixSendInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfo.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfo.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfo.InnerSingleton;
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

// EVirtualizationMode_StaticEnum @ 148677260

UEnum * __cdecl EVirtualizationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVirtualizationMode,(UObject *)pUVar1,
                       L"EVirtualizationMode");
  }
  return Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton;
}

// EUseSubmixOnPreviewMode_StaticEnum @ 1486772a0

UEnum * __cdecl EUseSubmixOnPreviewMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EUseSubmixOnPreviewMode,(UObject *)pUVar1,
                       L"EUseSubmixOnPreviewMode");
  }
  return Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.OuterSingleton;
}

// NewStructOps @ 1486772e0

void * __cdecl Z_Construct_UScriptStruct_FSoundBaseEditorData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundBaseEditorData,&UE::CoreUObject::Private::Construct<FSoundBaseEditorData>,&UE::CoreUObject::Private::ConstructForTests<FSoundBaseEditorData>,&UE::CoreUObject::Private::Destruct<FSoundBaseEditorData>,&UE::CoreUObject::Private::Copy<FSoundBaseEditorData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 1486774a0

void __cdecl
Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_USoundNodeMixer @ 1486774b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeMixer(void)

{
  if (Z_Registration_Info_UClass_USoundNodeMixer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeMixer.OuterSingleton,
               &Z_Construct_UClass_USoundNodeMixer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeMixer.OuterSingleton;
}

// Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable @ 1486774f0

UFunction * __cdecl Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundBase_IsAttenuationSettingsEditable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDebug_SetBit @ 148677530

void __cdecl Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 1;
  return;
}

// NewProp_bOverrideConcurrency_SetBit @ 148677540

void __cdecl
Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 2;
  return;
}

// NewProp_bEnableBusSends_SetBit @ 148677550

void __cdecl Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 4;
  return;
}

// NewProp_bEnableBaseSubmix_SetBit @ 148677560

void __cdecl Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 8;
  return;
}

// NewProp_bEnableSubmixSends_SetBit @ 148677570

void __cdecl Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x10;
  return;
}

// NewProp_bHasDelayNode_SetBit @ 148677580

void __cdecl Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x20;
  return;
}

// NewProp_bHasConcatenatorNode_SetBit @ 148677590

void __cdecl
Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x40;
  return;
}

// NewProp_bBypassVolumeScaleForPriority_SetBit @ 1486775a0

void __cdecl
Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x80;
  return;
}

// Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister @ 1486775b0

UClass * __cdecl Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectSubmixPreset",
               &Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton,
               USoundEffectSubmixPreset::StaticRegisterNativesUSoundEffectSubmixPreset,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundEffectSubmixPreset>,
               InternalVTableHelperCtorCaller<USoundEffectSubmixPreset>,local_res8,
               USoundEffectPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeModulator @ 1486778f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeModulator(void)

{
  if (Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton,
               &Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton;
}

// Z_Construct_UClass_USoundSubmixBase_NoRegister @ 148677930

UClass * __cdecl Z_Construct_UClass_USoundSubmixBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmixBase",
               &Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton,
               USoundSubmixBase::StaticRegisterNativesUSoundSubmixBase,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSubmixBase>,
               InternalVTableHelperCtorCaller<USoundSubmixBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton;
}

// Z_Construct_UClass_USoundSubmix_NoRegister @ 1486779e0

UClass * __cdecl Z_Construct_UClass_USoundSubmix_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmix",
               &Z_Registration_Info_UClass_USoundSubmix.InnerSingleton,
               USoundSubmix::StaticRegisterNativesUSoundSubmix,0x250,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundSubmix>,
               InternalVTableHelperCtorCaller<USoundSubmix>,local_res8,
               USoundSubmixWithParentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmix.InnerSingleton;
}

// Z_Construct_UClass_USoundAttenuation @ 148677ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundAttenuation(void)

{
  if (Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton,
               &Z_Construct_UClass_USoundAttenuation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EAirAbsorptionMethod @ 148677b20

UEnum * __cdecl Z_Construct_UEnum_Engine_EAirAbsorptionMethod(void)

{
  if (Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode @ 148677b60

UEnum * __cdecl Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode(void)

{
  if (Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EPriorityAttenuationMethod @ 148677ba0

UEnum * __cdecl Z_Construct_UEnum_Engine_EPriorityAttenuationMethod(void)

{
  if (Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EReverbSendMethod @ 148677be0

UEnum * __cdecl Z_Construct_UEnum_Engine_EReverbSendMethod(void)

{
  if (Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm @ 148677c20

UEnum * __cdecl Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm(void)

{
  if (Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings @ 148677c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAttenuationSubmixSendSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAttenuationSubmixSendSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAttenuationSubmixSendSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAttenuationSubmixSendSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings @ 148677ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundAttenuationPluginSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundAttenuationPluginSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundAttenuationPluginSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundAttenuationPluginSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundAttenuationSettings @ 148677d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundAttenuationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundAttenuationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundAttenuationSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundAttenuationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundAttenuationSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase @ 148677de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfoBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfoBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfoBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundSubmixSendInfoBase.InnerSingleton;
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

// ESoundDistanceCalc_StaticEnum @ 148677e60

UEnum * __cdecl ESoundDistanceCalc_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundDistanceCalc,(UObject *)pUVar1,
                       L"ESoundDistanceCalc");
  }
  return Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton;
}

// ESoundSpatializationAlgorithm_StaticEnum @ 1486780f0

UEnum * __cdecl ESoundSpatializationAlgorithm_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm,(UObject *)pUVar1,
                       L"ESoundSpatializationAlgorithm");
  }
  return Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton;
}

// Z_Construct_UClass_USoundNode_NoRegister @ 148678170

UClass * __cdecl Z_Construct_UClass_USoundNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNode",&Z_Registration_Info_UClass_USoundNode.InnerSingleton,
               USoundNode::StaticRegisterNativesUSoundNode,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNode>,
               InternalVTableHelperCtorCaller<USoundNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNode.InnerSingleton;
}

// EAirAbsorptionMethod_StaticEnum @ 1486782d0

UEnum * __cdecl EAirAbsorptionMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAirAbsorptionMethod,(UObject *)pUVar1,
                       L"EAirAbsorptionMethod");
  }
  return Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton;
}

// EReverbSendMethod_StaticEnum @ 148678350

UEnum * __cdecl EReverbSendMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EReverbSendMethod,(UObject *)pUVar1,
                       L"EReverbSendMethod");
  }
  return Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton;
}

// Z_Construct_UClass_USlateTextureAtlasInterface @ 148678450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USlateTextureAtlasInterface(void)

{
  if (Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton,
               &Z_Construct_UClass_USlateTextureAtlasInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton;
}

// EPriorityAttenuationMethod_StaticEnum @ 148678490

UEnum * __cdecl EPriorityAttenuationMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod,(UObject *)pUVar1,
                       L"EPriorityAttenuationMethod");
  }
  return Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton;
}

// NewStructOps @ 148678590

void * __cdecl Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundAttenuationPluginSettings,&UE::CoreUObject::Private::Construct<FSoundAttenuationPluginSettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundAttenuationPluginSettings>,&UE::CoreUObject::Private::Destruct<FSoundAttenuationPluginSettings>,&UE::CoreUObject::Private::Copy<FSoundAttenuationPluginSettings>,&UE::CoreUObject::Private::AddStructReferencedObjects<FSoundAttenuationPluginSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeModulatorContinuous @ 148678740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeModulatorContinuous(void)

{
  if (Z_Registration_Info_UClass_USoundNodeModulatorContinuous.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeModulatorContinuous.OuterSingleton,
               &Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeModulatorContinuous.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ModulationParamMode @ 148678780

UEnum * __cdecl Z_Construct_UEnum_Engine_ModulationParamMode(void)

{
  if (Z_Registration_Info_UEnum_ModulationParamMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ModulationParamMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ModulationParamMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ModulationParamMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FModulatorContinuousParams @ 1486787c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModulatorContinuousParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModulatorContinuousParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModulatorContinuousParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModulatorContinuousParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModulatorContinuousParams.InnerSingleton;
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

// ModulationParamMode_StaticEnum @ 148678840

UEnum * __cdecl ModulationParamMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ModulationParamMode,(UObject *)pUVar1,
                       L"ModulationParamMode");
  }
  return Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton;
}

// ENonSpatializedRadiusSpeakerMapMode_StaticEnum @ 148678880

UEnum * __cdecl ENonSpatializedRadiusSpeakerMapMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode,
                       (UObject *)pUVar1,L"ENonSpatializedRadiusSpeakerMapMode");
  }
  return Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton;
}

// Z_Construct_UClass_USlateBrushAsset @ 1486788c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USlateBrushAsset(void)

{
  if (Z_Registration_Info_UClass_USlateBrushAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USlateBrushAsset.OuterSingleton,
               &Z_Construct_UClass_USlateBrushAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USlateBrushAsset.OuterSingleton;
}

// NewStructOps @ 148678900

void * __cdecl Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModulatorContinuousParams,&UE::CoreUObject::Private::Construct<FModulatorContinuousParams>,&UE::CoreUObject::Private::ConstructForTests<FModulatorContinuousParams>,&UE::CoreUObject::Private::Destruct<FModulatorContinuousParams>,&UE::CoreUObject::Private::Copy<FModulatorContinuousParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148678940

void * __cdecl Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAttenuationSubmixSendSettings,&UE::CoreUObject::Private::Construct<FAttenuationSubmixSendSettings>,&UE::CoreUObject::Private::ConstructForTests<FAttenuationSubmixSendSettings>,&UE::CoreUObject::Private::Destruct<FAttenuationSubmixSendSettings>,&UE::CoreUObject::Private::Copy<FAttenuationSubmixSendSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_ESoundAssetCompressionType @ 148678980

UEnum * __cdecl Z_Construct_UEnum_Engine_ESoundAssetCompressionType(void)

{
  if (Z_Registration_Info_UEnum_ESoundAssetCompressionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundAssetCompressionType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESoundAssetCompressionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundAssetCompressionType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData @ 148678a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveEnvelopeTimeData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveEnvelopeTimeData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveEnvelopeTimeData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveEnvelopeTimeData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundWaveSpectralData @ 148678b00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundWaveSpectralData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveSpectralData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveSpectralData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveSpectralData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveSpectralData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry @ 148678b80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveSpectralDataEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveSpectralDataEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveSpectralDataEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveSpectralDataEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData @ 148678c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveSpectralTimeData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveSpectralTimeData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveSpectralTimeData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveSpectralTimeData.InnerSingleton;
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

// EDecompressionType_StaticEnum @ 148678c80

UEnum * __cdecl EDecompressionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDecompressionType,(UObject *)pUVar1,
                       L"EDecompressionType");
  }
  return Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton;
}

// ESoundWaveCuePointOrigin_StaticEnum @ 148678cc0

UEnum * __cdecl ESoundWaveCuePointOrigin_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveCuePointOrigin,(UObject *)pUVar1,
                       L"ESoundWaveCuePointOrigin");
  }
  return Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.OuterSingleton;
}

// NewStructOps @ 148678d00

void * __cdecl Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStreamedAudioPlatformData,&UE::CoreUObject::Private::Construct<FStreamedAudioPlatformData>,&UE::CoreUObject::Private::ConstructForTests<FStreamedAudioPlatformData>,&UE::CoreUObject::Private::Destruct<FStreamedAudioPlatformData>,&UE::CoreUObject::Private::Copy<FStreamedAudioPlatformData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAttenuate_SetBit @ 148678d40

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc0) = *(byte *)((longlong)param_1 + 0xc0) | 1;
  return;
}

// NewProp_bSpatialize_SetBit @ 148678d50

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc0) = *(byte *)((longlong)param_1 + 0xc0) | 2;
  return;
}

// NewProp_bAttenuateWithLPF_SetBit @ 148678d60

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc0) = *(byte *)((longlong)param_1 + 0xc0) | 4;
  return;
}

// NewProp_bEnableListenerFocus_SetBit @ 148678d70

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc0) = *(byte *)((longlong)param_1 + 0xc0) | 8;
  return;
}

// NewProp_bEnableFocusInterpolation_SetBit @ 148678d80

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::
NewProp_bEnableFocusInterpolation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc0) = *(byte *)((longlong)param_1 + 0xc0) | 0x10;
  return;
}

// NewProp_bEnableOcclusion_SetBit @ 148678d90

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc0) = *(byte *)((longlong)param_1 + 0xc0) | 0x20;
  return;
}

// NewProp_bUseComplexCollisionForOcclusion_SetBit @ 148678da0

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::
NewProp_bUseComplexCollisionForOcclusion_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc0) = *(byte *)((longlong)param_1 + 0xc0) | 0x40;
  return;
}

// NewProp_bEnableReverbSend_SetBit @ 148678db0

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc0) = *(byte *)((longlong)param_1 + 0xc0) | 0x80;
  return;
}

// NewProp_bEnablePriorityAttenuation_SetBit @ 148678dc0

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::
NewProp_bEnablePriorityAttenuation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) | 1;
  return;
}

// NewProp_bApplyNormalizationToStereoSounds_SetBit @ 148678dd0

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::
NewProp_bApplyNormalizationToStereoSounds_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) | 2;
  return;
}

// NewProp_bEnableLogFrequencyScaling_SetBit @ 148678de0

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::
NewProp_bEnableLogFrequencyScaling_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) | 4;
  return;
}

// NewProp_bEnableSubmixSends_SetBit @ 148678df0

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) | 8;
  return;
}

// NewProp_bEnableSourceDataOverride_SetBit @ 148678e00

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::
NewProp_bEnableSourceDataOverride_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) | 0x10;
  return;
}

// NewProp_bEnableSendToAudioLink_SetBit @ 148678e10

void __cdecl
Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) | 0x20;
  return;
}

// NewStructOps @ 148678e20

void * __cdecl Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveSpectralData,&UE::CoreUObject::Private::Construct<FSoundWaveSpectralData>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveSpectralData>,&UE::CoreUObject::Private::Destruct<FSoundWaveSpectralData>,&UE::CoreUObject::Private::Copy<FSoundWaveSpectralData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundEffectPreset @ 148678e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundEffectPreset(void)

{
  if (Z_Registration_Info_UClass_USoundEffectPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundEffectPreset.OuterSingleton,
               &Z_Construct_UClass_USoundEffectPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundEffectPreset.OuterSingleton;
}

// NewStructOps @ 148678ea0

void * __cdecl Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3d0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundAttenuationSettings,&UE::CoreUObject::Private::Construct<FSoundAttenuationSettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundAttenuationSettings>,&UE::CoreUObject::Private::Destruct<FSoundAttenuationSettings>,&UE::CoreUObject::Private::Copy<FSoundAttenuationSettings>,&UE::CoreUObject::Private::AddStructReferencedObjects<FSoundAttenuationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1486790c0

void * __cdecl Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveSpectralDataPerSound,&UE::CoreUObject::Private::Construct<FSoundWaveSpectralDataPerSound>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveSpectralDataPerSound>,&UE::CoreUObject::Private::Destruct<FSoundWaveSpectralDataPerSound>,&UE::CoreUObject::Private::Copy<FSoundWaveSpectralDataPerSound>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeOscillator @ 148679140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeOscillator(void)

{
  if (Z_Registration_Info_UClass_USoundNodeOscillator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeOscillator.OuterSingleton,
               &Z_Construct_UClass_USoundNodeOscillator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeOscillator.OuterSingleton;
}

// NewProp_bModulateVolume_SetBit @ 148679240

void __cdecl
Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulateVolume_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 1;
  return;
}

// NewProp_bModulatePitch_SetBit @ 148679250

void __cdecl
Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulatePitch_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 2;
  return;
}

// Z_Construct_UClass_USoundNodeEnveloper @ 148679260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeEnveloper(void)

{
  if (Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton,
               &Z_Construct_UClass_USoundNodeEnveloper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton;
}

// NewProp_bLoopIndefinitely_SetBit @ 1486792e0

void __cdecl
Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x58) = *(uint *)((longlong)param_1 + 0x58) | 1;
  return;
}

// NewProp_bLoop_SetBit @ 1486792f0

void __cdecl Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x58) = *(uint *)((longlong)param_1 + 0x58) | 2;
  return;
}

// NewStructOps @ 148679300

void * __cdecl Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveEnvelopeDataPerSound,&UE::CoreUObject::Private::Construct<FSoundWaveEnvelopeDataPerSound>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveEnvelopeDataPerSound>,&UE::CoreUObject::Private::Destruct<FSoundWaveEnvelopeDataPerSound>,&UE::CoreUObject::Private::Copy<FSoundWaveEnvelopeDataPerSound>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148679350

void * __cdecl Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveSpectralDataEntry,&UE::CoreUObject::Private::Construct<FSoundWaveSpectralDataEntry>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveSpectralDataEntry>,&UE::CoreUObject::Private::Destruct<FSoundWaveSpectralDataEntry>,&UE::CoreUObject::Private::Copy<FSoundWaveSpectralDataEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1486794f0

void * __cdecl Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveSpectralTimeData,&UE::CoreUObject::Private::Construct<FSoundWaveSpectralTimeData>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveSpectralTimeData>,&UE::CoreUObject::Private::Destruct<FSoundWaveSpectralTimeData>,&UE::CoreUObject::Private::Copy<FSoundWaveSpectralTimeData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeParamCrossFade @ 148679530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeParamCrossFade(void)

{
  if (Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton,
               &Z_Construct_UClass_USoundNodeParamCrossFade_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton;
}

// Z_Construct_UClass_USoundNode @ 148679720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNode(void)

{
  if (Z_Registration_Info_UClass_USoundNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNode.OuterSingleton,
               &Z_Construct_UClass_USoundNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNode.OuterSingleton;
}

// NewStructOps @ 1486797d0

void * __cdecl Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveEnvelopeTimeData,&UE::CoreUObject::Private::Construct<FSoundWaveEnvelopeTimeData>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveEnvelopeTimeData>,&UE::CoreUObject::Private::Destruct<FSoundWaveEnvelopeTimeData>,&UE::CoreUObject::Private::Copy<FSoundWaveEnvelopeTimeData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeGroupControl @ 148679850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeGroupControl(void)

{
  if (Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton,
               &Z_Construct_UClass_USoundNodeGroupControl_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeGroupControl.OuterSingleton;
}

// Z_Construct_UClass_USoundNodeQualityLevel @ 148679890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeQualityLevel(void)

{
  if (Z_Registration_Info_UClass_USoundNodeQualityLevel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeQualityLevel.OuterSingleton,
               &Z_Construct_UClass_USoundNodeQualityLevel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeQualityLevel.OuterSingleton;
}

// Z_Construct_UClass_USoundEffectSubmixPreset @ 1486798d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundEffectSubmixPreset(void)

{
  if (Z_Registration_Info_UClass_USoundEffectSubmixPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundEffectSubmixPreset.OuterSingleton,
               &Z_Construct_UClass_USoundEffectSubmixPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundEffectSubmixPreset.OuterSingleton;
}

// ESoundWaveFFTSize_StaticEnum @ 148679910

UEnum * __cdecl ESoundWaveFFTSize_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveFFTSize,(UObject *)pUVar1,
                       L"ESoundWaveFFTSize");
  }
  return Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton;
}

// ESoundAssetCompressionType_StaticEnum @ 148679a00

UEnum * __cdecl ESoundAssetCompressionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundAssetCompressionType,(UObject *)pUVar1,
                       L"ESoundAssetCompressionType");
  }
  return Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton;
}

// Z_Construct_UFunction_USoundWave_GetCuePoints @ 148679a40

UFunction * __cdecl Z_Construct_UFunction_USoundWave_GetCuePoints(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USoundWave_GetCuePoints_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundWave_GetLoopRegions @ 148679c80

UFunction * __cdecl Z_Construct_UFunction_USoundWave_GetLoopRegions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USoundWave_GetLoopRegions_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType @ 148679d20

UFunction * __cdecl Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundWave_GetSoundAssetCompressionType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMarkDirty_SetBit @ 148679d60

void __cdecl
Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::NewProp_bMarkDirty_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType @ 148679d70

UFunction * __cdecl Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USoundWave_SetSoundAssetCompressionType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLooping_SetBit @ 148679db0

void __cdecl Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x19b) = *(byte *)((longlong)param_1 + 0x19b) | 1;
  return;
}

// NewProp_bStreaming_SetBit @ 148679dc0

void __cdecl Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x19b) = *(byte *)((longlong)param_1 + 0x19b) | 2;
  return;
}

// NewProp_bSeekableStreaming_SetBit @ 148679dd0

void __cdecl Z_Construct_UClass_USoundWave_Statics::NewProp_bSeekableStreaming_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x19b) = *(byte *)((longlong)param_1 + 0x19b) | 4;
  return;
}

// NewProp_bUseBinkAudio_SetBit @ 148679de0

void __cdecl Z_Construct_UClass_USoundWave_Statics::NewProp_bUseBinkAudio_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x19b) = *(byte *)((longlong)param_1 + 0x19b) | 8;
  return;
}

// NewProp_bMature_SetBit @ 148679df0

void __cdecl Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x364) = *(byte *)((longlong)param_1 + 0x364) | 0x20;
  return;
}

// NewProp_bManualWordWrap_SetBit @ 148679e00

void __cdecl Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x364) = *(byte *)((longlong)param_1 + 0x364) | 0x40;
  return;
}

// NewProp_bSingleLine_SetBit @ 148679e10

void __cdecl Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x364) = *(byte *)((longlong)param_1 + 0x364) | 0x80;
  return;
}

// NewProp_bIsAmbisonics_SetBit @ 148679e20

void __cdecl Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x365) = *(byte *)((longlong)param_1 + 0x365) | 1;
  return;
}

// Z_Construct_UClass_USoundNodeAssetReferencer @ 148679e50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeAssetReferencer(void)

{
  if (Z_Registration_Info_UClass_USoundNodeAssetReferencer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeAssetReferencer.OuterSingleton,
               &Z_Construct_UClass_USoundNodeAssetReferencer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeAssetReferencer.OuterSingleton;
}

// Z_Construct_UClass_USoundClass @ 148679ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundClass(void)

{
  if (Z_Registration_Info_UClass_USoundClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundClass.OuterSingleton,
               &Z_Construct_UClass_USoundClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundClass.OuterSingleton;
}

// Z_Construct_UClass_USoundGroups @ 148679f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundGroups(void)

{
  if (Z_Registration_Info_UClass_USoundGroups.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundGroups.OuterSingleton,
               &Z_Construct_UClass_USoundGroups_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundGroups.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ESoundGroup @ 148679f70

UEnum * __cdecl Z_Construct_UEnum_Engine_ESoundGroup(void)

{
  if (Z_Registration_Info_UEnum_ESoundGroup.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundGroup.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESoundGroup_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundGroup.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSoundGroup @ 148679fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundGroup.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundGroup.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundGroup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPassiveSoundMixModifier @ 14867a030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPassiveSoundMixModifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPassiveSoundMixModifier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPassiveSoundMixModifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPassiveSoundMixModifier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPassiveSoundMixModifier.InnerSingleton;
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

// ESoundGroup_StaticEnum @ 14867a0b0

UEnum * __cdecl ESoundGroup_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundGroup,(UObject *)pUVar1,L"ESoundGroup");
  }
  return Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSoundClassProperties @ 14867a0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundClassProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundClassProperties.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundClassProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundClassProperties.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSoundClassProperties.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundModulationDefaultSettings @ 14867a170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundModulationDefaultSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDefaultSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundModulationDefaultSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDefaultSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundModulationDefaultSettings.InnerSingleton;
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

// NewStructOps @ 14867a1f0

void * __cdecl Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundClassEditorData,&UE::CoreUObject::Private::Construct<FSoundClassEditorData>,&UE::CoreUObject::Private::ConstructForTests<FSoundClassEditorData>,&UE::CoreUObject::Private::Destruct<FSoundClassEditorData>,&UE::CoreUObject::Private::Copy<FSoundClassEditorData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeRandom @ 14867a280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeRandom(void)

{
  if (Z_Registration_Info_UClass_USoundNodeRandom.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeRandom.OuterSingleton,
               &Z_Construct_UClass_USoundNodeRandom_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeRandom.OuterSingleton;
}

// NewProp_bShouldExcludeFromBranchCulling_SetBit @ 14867a2c0

void __cdecl
Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 1;
  return;
}

// NewProp_bSoundCueExcludedFromBranchCulling_SetBit @ 14867a2d0

void __cdecl
Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 2;
  return;
}

// NewProp_bRandomizeWithoutReplacement_SetBit @ 14867a2e0

void __cdecl
Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x70) = *(byte *)((longlong)param_1 + 0x70) | 4;
  return;
}

// Z_Construct_UClass_USoundNodeAttenuation @ 14867a2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeAttenuation(void)

{
  if (Z_Registration_Info_UClass_USoundNodeAttenuation.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeAttenuation.OuterSingleton,
               &Z_Construct_UClass_USoundNodeAttenuation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeAttenuation.OuterSingleton;
}

// NewProp_bAlwaysDecompressOnLoad_SetBit @ 14867a330

void __cdecl
Z_Construct_UScriptStruct_FSoundGroup_Statics::NewProp_bAlwaysDecompressOnLoad_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 1;
  return;
}

// NewStructOps @ 14867a340

void * __cdecl Z_Construct_UScriptStruct_FSoundGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundGroup,&UE::CoreUObject::Private::Construct<FSoundGroup>,&UE::CoreUObject::Private::ConstructForTests<FSoundGroup>,&UE::CoreUObject::Private::Destruct<FSoundGroup>,&UE::CoreUObject::Private::Copy<FSoundGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideAttenuation_SetBit @ 14867a380

void __cdecl
Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x420) = *(uint *)((longlong)param_1 + 0x420) | 1;
  return;
}

// NewProp_bApplyEffects_SetBit @ 14867a390

void __cdecl
Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 1;
  return;
}

// NewProp_bAlwaysPlay_SetBit @ 14867a3a0

void __cdecl
Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 2;
  return;
}

// NewProp_bIsUISound_SetBit @ 14867a3b0

void __cdecl
Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 4;
  return;
}

// NewProp_bIsMusic_SetBit @ 14867a3c0

void __cdecl
Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 8;
  return;
}

// NewProp_bCenterChannelOnly_SetBit @ 14867a3d0

void __cdecl
Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 0x10;
  return;
}

// NewProp_bApplyAmbientVolumes_SetBit @ 14867a3e0

void __cdecl
Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 0x20;
  return;
}

// NewProp_bReverb_SetBit @ 14867a3f0

void __cdecl
Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 0x40;
  return;
}

// NewStructOps @ 14867a4a0

void * __cdecl Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x198;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundClassProperties,&UE::CoreUObject::Private::Construct<FSoundClassProperties>,&UE::CoreUObject::Private::ConstructForTests<FSoundClassProperties>,&UE::CoreUObject::Private::Destruct<FSoundClassProperties>,&UE::CoreUObject::Private::Copy<FSoundClassProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundCue @ 14867a610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundCue(void)

{
  if (Z_Registration_Info_UClass_USoundCue.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundCue.OuterSingleton,
               &Z_Construct_UClass_USoundCue_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundCue.OuterSingleton;
}

// NewStructOps @ 14867a740

void * __cdecl Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundNodeEditorData,&UE::CoreUObject::Private::Construct<FSoundNodeEditorData>,&UE::CoreUObject::Private::ConstructForTests<FSoundNodeEditorData>,&UE::CoreUObject::Private::Destruct<FSoundNodeEditorData>,&UE::CoreUObject::Private::Copy<FSoundNodeEditorData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_ESkinCacheUsage @ 14867a780

UEnum * __cdecl Z_Construct_UEnum_Engine_ESkinCacheUsage(void)

{
  if (Z_Registration_Info_UEnum_ESkinCacheUsage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESkinCacheUsage.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESkinCacheUsage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESkinCacheUsage.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSectionReference @ 14867a7c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSectionReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSectionReference.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSectionReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FSectionReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSectionReference.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSectionReference.InnerSingleton;
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

// ESkinCacheUsage_StaticEnum @ 14867a840

UEnum * __cdecl ESkinCacheUsage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESkinCacheUsage,(UObject *)pUVar1,L"ESkinCacheUsage"
                      );
  }
  return Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton;
}

// ESkinCacheDefaultBehavior_StaticEnum @ 14867a940

UEnum * __cdecl ESkinCacheDefaultBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior,(UObject *)pUVar1,
                       L"ESkinCacheDefaultBehavior");
  }
  return Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton;
}

// NewStructOps @ 14867a980

void * __cdecl Z_Construct_UScriptStruct_FSectionReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSectionReference,&UE::CoreUObject::Private::Construct<FSectionReference>,&UE::CoreUObject::Private::ConstructForTests<FSectionReference>,&UE::CoreUObject::Private::Destruct<FSectionReference>,&UE::CoreUObject::Private::Copy<FSectionReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bPrimeOnLoad_SetBit @ 14867a9c0

void __cdecl Z_Construct_UClass_USoundCue_Statics::NewProp_bPrimeOnLoad_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x568) = *(byte *)((longlong)param_1 + 0x568) | 1;
  return;
}

// NewProp_bOverrideAttenuation_SetBit @ 14867a9d0

void __cdecl
Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x568) = *(byte *)((longlong)param_1 + 0x568) | 2;
  return;
}

// Z_Construct_UClass_USoundNodeSoundClass @ 14867a9e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeSoundClass(void)

{
  if (Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton,
               &Z_Construct_UClass_USoundNodeSoundClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton;
}

// NewProp_bExcludeFromRandomNodeBranchCulling_SetBit @ 14867aa20

void __cdecl
Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x568) = *(byte *)((longlong)param_1 + 0x568) | 4;
  return;
}

// NewProp_bHasPlayWhenSilent_SetBit @ 14867aa30

void __cdecl Z_Construct_UClass_USoundCue_Statics::NewProp_bHasPlayWhenSilent_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x568) = *(byte *)((longlong)param_1 + 0x568) | 8;
  return;
}

// NewStructOps @ 14867aa40

void * __cdecl Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPassiveSoundMixModifier,&UE::CoreUObject::Private::Construct<FPassiveSoundMixModifier>,&UE::CoreUObject::Private::ConstructForTests<FPassiveSoundMixModifier>,&UE::CoreUObject::Private::Destruct<FPassiveSoundMixModifier>,&UE::CoreUObject::Private::Copy<FPassiveSoundMixModifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeBranch @ 14867aa80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeBranch(void)

{
  if (Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton,
               &Z_Construct_UClass_USoundNodeBranch_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton;
}

// Z_Construct_UClass_USoundMix @ 14867ad80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundMix(void)

{
  if (Z_Registration_Info_UClass_USoundMix.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundMix.OuterSingleton,
               &Z_Construct_UClass_USoundMix_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundMix.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAudioEffectParameters @ 14867adc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioEffectParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioEffectParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioEffectParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioEffectParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioEffectParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioEffectParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAudioEQEffect @ 14867ae40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioEQEffect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioEQEffect.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioEQEffect.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioEQEffect_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioEQEffect.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioEQEffect.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundClassAdjuster @ 14867aec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundClassAdjuster(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundClassAdjuster.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundClassAdjuster.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundClassAdjuster.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSoundClassAdjuster.InnerSingleton;
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

// NewStructOps @ 14867af40

void * __cdecl Z_Construct_UScriptStruct_FAudioEffectParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioEffectParameters,&UE::CoreUObject::Private::Construct<FAudioEffectParameters>,&UE::CoreUObject::Private::ConstructForTests<FAudioEffectParameters>,&UE::CoreUObject::Private::Destruct<FAudioEffectParameters>,&UE::CoreUObject::Private::Copy<FAudioEffectParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14867af80

void * __cdecl
Z_Construct_UScriptStruct_FMorphTargetImportedSourceFileInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMorphTargetImportedSourceFileInfo,&UE::CoreUObject::Private::Construct<FMorphTargetImportedSourceFileInfo>,&UE::CoreUObject::Private::ConstructForTests<FMorphTargetImportedSourceFileInfo>,&UE::CoreUObject::Private::Destruct<FMorphTargetImportedSourceFileInfo>,&UE::CoreUObject::Private::Copy<FMorphTargetImportedSourceFileInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeSwitch @ 14867b240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeSwitch(void)

{
  if (Z_Registration_Info_UClass_USoundNodeSwitch.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeSwitch.OuterSingleton,
               &Z_Construct_UClass_USoundNodeSwitch_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeSwitch.OuterSingleton;
}

// NewStructOps @ 14867b290

void * __cdecl Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioEQEffect,&UE::CoreUObject::Private::Construct<FAudioEQEffect>,&UE::CoreUObject::Private::ConstructForTests<FAudioEQEffect>,&UE::CoreUObject::Private::Destruct<FAudioEQEffect>,&UE::CoreUObject::Private::Copy<FAudioEQEffect>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeConcatenator @ 14867b390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeConcatenator(void)

{
  if (Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton,
               &Z_Construct_UClass_USoundNodeConcatenator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton;
}

// NewProp_bHasBeenSimplified_SetBit @ 14867b3d0

void __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 1;
  return;
}

// NewProp_bHasPerLODVertexColors_SetBit @ 14867b420

void __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 2;
  return;
}

// NewProp_bAllowCPUAccess_SetBit @ 14867b430

void __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 4;
  return;
}

// NewProp_bBuildHalfEdgeBuffers_SetBit @ 14867b440

void __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bBuildHalfEdgeBuffers_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 8;
  return;
}

// NewProp_bAllowMeshDeformer_SetBit @ 14867b450

void __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowMeshDeformer_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 0x10;
  return;
}

// NewProp_bSupportUniformlyDistributedSampling_SetBit @ 14867b460

void __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::
NewProp_bSupportUniformlyDistributedSampling_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 0x20;
  return;
}

// NewStructOps @ 14867b470

void * __cdecl Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkeletalMeshLODInfo,&UE::CoreUObject::Private::Construct<FSkeletalMeshLODInfo>,&UE::CoreUObject::Private::ConstructForTests<FSkeletalMeshLODInfo>,&UE::CoreUObject::Private::Destruct<FSkeletalMeshLODInfo>,&UE::CoreUObject::Private::Copy<FSkeletalMeshLODInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bApplyToChildren_SetBit @ 14867b570

void __cdecl
Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 1;
  return;
}

// NewStructOps @ 14867b580

void * __cdecl Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundClassAdjuster,&UE::CoreUObject::Private::Construct<FSoundClassAdjuster>,&UE::CoreUObject::Private::ConstructForTests<FSoundClassAdjuster>,&UE::CoreUObject::Private::Destruct<FSoundClassAdjuster>,&UE::CoreUObject::Private::Copy<FSoundClassAdjuster>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundNodeWaveParam @ 14867b5c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeWaveParam(void)

{
  if (Z_Registration_Info_UClass_USoundNodeWaveParam.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeWaveParam.OuterSingleton,
               &Z_Construct_UClass_USoundNodeWaveParam_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeWaveParam.OuterSingleton;
}

// NewStructOps @ 14867b6c0

void * __cdecl Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkeletalMaterial,&UE::CoreUObject::Private::Construct<FSkeletalMaterial>,&UE::CoreUObject::Private::ConstructForTests<FSkeletalMaterial>,&UE::CoreUObject::Private::Destruct<FSkeletalMaterial>,&UE::CoreUObject::Private::Copy<FSkeletalMaterial>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bApplyEQ_SetBit @ 14867b700

void __cdecl Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 1;
  return;
}

// Z_Construct_UClass_USoundNodeDelay @ 14867b710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeDelay(void)

{
  if (Z_Registration_Info_UClass_USoundNodeDelay.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeDelay.OuterSingleton,
               &Z_Construct_UClass_USoundNodeDelay_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeDelay.OuterSingleton;
}

// Z_Construct_UClass_USkinnedAsset @ 14867b7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USkinnedAsset(void)

{
  if (Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton,
               &Z_Construct_UClass_USkinnedAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton;
}

// Z_Construct_UClass_USoundNodeWavePlayer @ 14867b8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundNodeWavePlayer(void)

{
  if (Z_Registration_Info_UClass_USoundNodeWavePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundNodeWavePlayer.OuterSingleton,
               &Z_Construct_UClass_USoundNodeWavePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundNodeWavePlayer.OuterSingleton;
}

// NewProp_bLooping_SetBit @ 14867b910

void __cdecl Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x78) = *(byte *)((longlong)param_1 + 0x78) | 2;
  return;
}

// Z_Construct_UFunction_USkinnedAsset_FindSocket @ 14867b920

UFunction * __cdecl Z_Construct_UFunction_USkinnedAsset_FindSocket(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EModulationRouting @ 14867b960

UEnum * __cdecl Z_Construct_UEnum_Engine_EModulationRouting(void)

{
  if (Z_Registration_Info_UEnum_EModulationRouting.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EModulationRouting.InnerSingleton,
               &Z_Construct_UEnum_Engine_EModulationRouting_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EModulationRouting.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings @ 14867b9a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDefaultRoutingSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundModulationDefaultRoutingSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDefaultRoutingSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundModulationDefaultRoutingSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundModulationDestinationSettings @ 14867ba20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundModulationDestinationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDestinationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundModulationDestinationSettings.InnerSingleton
               ,&Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDestinationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundModulationDestinationSettings.InnerSingleton;
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

// EModulationRouting_StaticEnum @ 14867baa0

UEnum * __cdecl EModulationRouting_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EModulationRouting,(UObject *)pUVar1,
                       L"EModulationRouting");
  }
  return Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton;
}

// Z_Construct_UFunction_USkinnedAsset_FindSocketInfo @ 14867bae0

UFunction * __cdecl Z_Construct_UFunction_USkinnedAsset_FindSocketInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EModulationDestination_StaticEnum @ 14867bb20

UEnum * __cdecl EModulationDestination_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EModulationDestination,(UObject *)pUVar1,
                       L"EModulationDestination");
  }
  return Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton;
}

// Z_Construct_UClass_USoundClass_NoRegister @ 14867bb60

UClass * __cdecl Z_Construct_UClass_USoundClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundClass.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundClass",
               &Z_Registration_Info_UClass_USoundClass.InnerSingleton,
               USoundClass::StaticRegisterNativesUSoundClass,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundClass>,
               InternalVTableHelperCtorCaller<USoundClass>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundClass.InnerSingleton;
}

// NewStructOps @ 14867bbb0

void * __cdecl
Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundModulationDestinationSettings,&UE::CoreUObject::Private::Construct<FSoundModulationDestinationSettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundModulationDestinationSettings>,&UE::CoreUObject::Private::Destruct<FSoundModulationDestinationSettings>,&UE::CoreUObject::Private::Copy<FSoundModulationDestinationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USoundWave_NoRegister @ 14867bc70

UClass * __cdecl Z_Construct_UClass_USoundWave_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundWave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundWave",&Z_Registration_Info_UClass_USoundWave.InnerSingleton,
               USoundWave::StaticRegisterNativesUSoundWave,0x408,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundWave>,
               InternalVTableHelperCtorCaller<USoundWave>,local_res8,USoundBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundWave.InnerSingleton;
}

// NewStructOps @ 14867bd30

void * __cdecl Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundModulationDefaultSettings,&UE::CoreUObject::Private::Construct<FSoundModulationDefaultSettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundModulationDefaultSettings>,&UE::CoreUObject::Private::Destruct<FSoundModulationDefaultSettings>,&UE::CoreUObject::Private::Copy<FSoundModulationDefaultSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14867c0e0

void * __cdecl
Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x168;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundModulationDefaultRoutingSettings,&UE::CoreUObject::Private::Construct<FSoundModulationDefaultRoutingSettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundModulationDefaultRoutingSettings>,&UE::CoreUObject::Private::Destruct<FSoundModulationDefaultRoutingSettings>,&UE::CoreUObject::Private::Copy<FSoundModulationDefaultRoutingSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EWindowTitleBarMode_StaticEnum @ 14867c1a0

UEnum * __cdecl EWindowTitleBarMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWindowTitleBarMode,(UObject *)pUVar1,
                       L"EWindowTitleBarMode");
  }
  return Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton;
}

// Z_Construct_UClass_USoundSourceBus @ 14867c330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundSourceBus(void)

{
  if (Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton,
               &Z_Construct_UClass_USoundSourceBus_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton;
}

// Z_Construct_UClass_USoundWave @ 14867c370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundWave(void)

{
  if (Z_Registration_Info_UClass_USoundWave.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundWave.OuterSingleton,
               &Z_Construct_UClass_USoundWave_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundWave.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ESourceBusChannels @ 14867c3b0

UEnum * __cdecl Z_Construct_UEnum_Engine_ESourceBusChannels(void)

{
  if (Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton;
}

// ESourceBusChannels_StaticEnum @ 14867c3f0

UEnum * __cdecl ESourceBusChannels_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusChannels,(UObject *)pUVar1,
                       L"ESourceBusChannels");
  }
  return Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14867c430

void * __thiscall
TSkeletalMeshUpdatePacket<FSkeletalMeshObjectNanite,FDynamicSkelMeshObjectDataNanite>::
_scalar_deleting_destructor_
          (TSkeletalMeshUpdatePacket<FSkeletalMeshObjectNanite,FDynamicSkelMeshObjectDataNanite>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bAutoDeactivateWhenSilent_SetBit @ 14867cb00

void __cdecl
Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x418) = *(uint *)((longlong)param_1 + 0x418) | 1;
  return;
}

// Z_Construct_UClass_UButtonStyleAsset @ 14867ccb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UButtonStyleAsset(void)

{
  if (Z_Registration_Info_UClass_UButtonStyleAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UButtonStyleAsset.OuterSingleton,
               &Z_Construct_UClass_UButtonStyleAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UButtonStyleAsset.OuterSingleton;
}

// Z_Construct_UClass_UEndpointSubmix @ 14867cd20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEndpointSubmix(void)

{
  if (Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton,
               &Z_Construct_UClass_UEndpointSubmix_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton;
}

// Z_Construct_UClass_USoundfieldEndpointSubmix @ 14867cd60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundfieldEndpointSubmix(void)

{
  if (Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton,
               &Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton;
}

// Z_Construct_UClass_USoundfieldSubmix @ 14867cda0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundfieldSubmix(void)

{
  if (Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton,
               &Z_Construct_UClass_USoundfieldSubmix_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton;
}

// Z_Construct_UClass_USoundSubmix @ 14867cde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundSubmix(void)

{
  if (Z_Registration_Info_UClass_USoundSubmix.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundSubmix.OuterSingleton,
               &Z_Construct_UClass_USoundSubmix_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundSubmix.OuterSingleton;
}

// Z_Construct_UClass_USoundSubmixBase @ 14867ce20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundSubmixBase(void)

{
  if (Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton,
               &Z_Construct_UClass_USoundSubmixBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton;
}

// Z_Construct_UClass_USoundSubmixWithParentBase @ 14867ce60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundSubmixWithParentBase(void)

{
  if (Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton,
               &Z_Construct_UClass_USoundSubmixWithParentBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EAudioRecordingExportType @ 14867cea0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAudioRecordingExportType(void)

{
  if (Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAudioSpectrumType @ 14867cee0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAudioSpectrumType(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod @ 14867cf20

UEnum * __cdecl Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod(void)

{
  if (Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EFFTSize @ 14867cf60

UEnum * __cdecl Z_Construct_UEnum_Engine_EFFTSize(void)

{
  if (Z_Registration_Info_UEnum_EFFTSize.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFFTSize.InnerSingleton,
               &Z_Construct_UEnum_Engine_EFFTSize_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFFTSize.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EFFTWindowType @ 14867cfa0

UEnum * __cdecl Z_Construct_UEnum_Engine_EFFTWindowType(void)

{
  if (Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EFFTWindowType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature @ 14867cfe0

UFunction * __cdecl Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature @ 14867d020

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature @ 14867d060

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FDynamicChildSubmix @ 14867d0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDynamicChildSubmix(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDynamicChildSubmix.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDynamicChildSubmix.InnerSingleton,
               &Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDynamicChildSubmix.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDynamicChildSubmix.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings @ 14867d120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings.InnerSingleton
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

// operator<<<USoundClass_*,FSoundClassEditorData> @ 14867d7e0

FArchive * __cdecl
operator<<<USoundClass_*,FSoundClassEditorData>
          (FArchive *param_1,TTuple<USoundClass_*,FSoundClassEditorData> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x168))();
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x8);
    }
  }
  else {
    *(undefined4 *)&param_2->field_0x8 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0xc;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
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

// operator<<<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator> @ 14867d8c0

FArchive * __cdecl
operator<<<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<USoundClass_*,FSoundClassEditorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14868ed5e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14868ed5e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar6 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14868ee3b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14868ee3b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18;
        uVar6 = *(ulonglong *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x18);
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(lVar3 + 0x14) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar6 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> @ 14867d8d0

FArchive * __cdecl
operator<<<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  UScriptStruct *pUVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar12 = 0;
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
      DestructItems<FSoundWaveCuePoint,int>
                ((FSoundWaveCuePoint *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
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
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar11 < (int)uVar9) {
                uVar6 = ~uVar11 >> 0x1f;
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
              pFVar10 = (param_2->AllocatorInstance).Data;
              pUVar8 = FSoundWaveCuePoint::StaticStruct();
              UScriptStruct::SerializeItem
                        (pUVar8,param_1,pFVar10 + (longlong)(int)uVar11 * 0x30,(void *)0x0);
              uVar9 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar9);
          }
        }
        else {
          TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30;
              DefaultConstructItems<FSoundWaveCuePoint,int>(pFVar10,1);
              pUVar8 = FSoundWaveCuePoint::StaticStruct();
              UScriptStruct::SerializeItem(pUVar8,param_1,pFVar10,(void *)0x0);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)auStackX_8[0]);
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

// operator<<<TSparseSetElement<TTuple<USoundClass_*,FSoundClassEditorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14867d8e0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<USoundClass_*,FSoundClassEditorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<USoundClass_*,FSoundClassEditorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<USoundClass_*,FSoundClassEditorData> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<USoundClass_*,FSoundClassEditorData> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<USoundClass_*,FSoundClassEditorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        goto LAB_14867dbdc;
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
LAB_14867dbdc:
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
        operator<<<USoundClass_*,FSoundClassEditorData>
                  (param_1,(TTuple<USoundClass_*,FSoundClassEditorData> *)
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
    pTVar12 = (TTuple<USoundClass_*,FSoundClassEditorData> *)0x0;
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
        pTVar8 = (TTuple<USoundClass_*,FSoundClassEditorData> *)0x0;
        if (local_78.Pointer != (TTuple<USoundClass_*,FSoundClassEditorData> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<USoundClass_*,FSoundClassEditorData>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<USoundClass_*,FSoundClassEditorData> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// AddStructReferencedObjectsOrNot<FSoundAttenuationPluginSettings> @ 14867e3b0

void __cdecl
AddStructReferencedObjectsOrNot<FSoundAttenuationPluginSettings>
          (void *param_1,FReferenceCollector *param_2)

{
  FReferenceCollector::AddStableReferenceArrayFwd(param_2,param_1);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_2,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10));
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_2,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20));
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_2,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30));
  return;
}

// AddStructReferencedObjectsOrNot<FSoundAttenuationSettings> @ 14867e400

void __cdecl
AddStructReferencedObjectsOrNot<FSoundAttenuationSettings>
          (void *param_1,FReferenceCollector *param_2)

{
  FReferenceCollector::AddStableReferenceFwd(param_2,(FObjectPtr *)((longlong)param_1 + 200));
  return;
}

// Cast<UGameEngine,UEngine> @ 14867ee70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameEngine * __cdecl Cast<UGameEngine,UEngine>(UEngine *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UEngine *)0x0) {
    pUVar2 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UGameEngine *)param_1;
    }
  }
  return (UGameEngine *)0x0;
}

// CastChecked<USoundCue,UObject> @ 14867eec0

USoundCue * __cdecl CastChecked<USoundCue,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<USoundCue>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = USoundCue::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USoundCue *)param_1;
  }
  pFVar3 = GetTypeName<USoundCue>(&local_28);
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

// CompareItems<TObjectPtr<UOcclusionPluginSourceSettingsBase>,int> @ 14867ef80

bool __cdecl
CompareItems<TObjectPtr<UOcclusionPluginSourceSettingsBase>,int>
          (TObjectPtr<UOcclusionPluginSourceSettingsBase> *param_1,
          TObjectPtr<UOcclusionPluginSourceSettingsBase> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((TObjectPtr<UOcclusionPluginSourceSettingsBase>_u_0 *)(lVar1 + (longlong)param_2))->
          DebugPtr != param_2->field0_0x0) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TObjectPtr<UReverbPluginSourceSettingsBase>,int> @ 14867efb0

bool __cdecl
CompareItems<TObjectPtr<UReverbPluginSourceSettingsBase>,int>
          (TObjectPtr<UReverbPluginSourceSettingsBase> *param_1,
          TObjectPtr<UReverbPluginSourceSettingsBase> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((TObjectPtr<UReverbPluginSourceSettingsBase>_u_0 *)(lVar1 + (longlong)param_2))->DebugPtr
          != param_2->field0_0x0) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,int> @ 14867efe0

bool __cdecl
CompareItems<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,int>
          (TObjectPtr<USourceDataOverridePluginSourceSettingsBase> *param_1,
          TObjectPtr<USourceDataOverridePluginSourceSettingsBase> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((TObjectPtr<USourceDataOverridePluginSourceSettingsBase>_u_0 *)
          (lVar1 + (longlong)param_2))->DebugPtr != param_2->field0_0x0) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<TObjectPtr<USpatializationPluginSourceSettingsBase>,int> @ 14867f010

bool __cdecl
CompareItems<TObjectPtr<USpatializationPluginSourceSettingsBase>,int>
          (TObjectPtr<USpatializationPluginSourceSettingsBase> *param_1,
          TObjectPtr<USpatializationPluginSourceSettingsBase> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((TObjectPtr<USpatializationPluginSourceSettingsBase>_u_0 *)(lVar1 + (longlong)param_2))->
          DebugPtr != param_2->field0_0x0) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<USoundNode_*,TObjectPtr<USoundNode>,int> @ 14867f040

void __cdecl
ConstructItems<USoundNode_*,TObjectPtr<USoundNode>,int>
          (void *param_1,TObjectPtr<USoundNode> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<USoundSubmixBase_const_*,TObjectPtr<USoundSubmixBase>,int> @ 14867f070

void __cdecl
ConstructItems<USoundSubmixBase_const_*,TObjectPtr<USoundSubmixBase>,int>
          (void *param_1,TObjectPtr<USoundSubmixBase> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<USoundSubmixBase>,TObjectPtr<USoundSubmixBase>,int> @ 14867f0a0

void __cdecl
ConstructItems<TObjectPtr<USoundSubmixBase>,TObjectPtr<USoundSubmixBase>,int>
          (void *param_1,TObjectPtr<USoundSubmixBase> *param_2,int param_3)

{
  TObjectPtr<USoundSubmixBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<USoundSubmixBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<USoundSubmixBase>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (USoundSubmixBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (USoundSubmixBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Audio::FParameterInterface::FInput,Audio::FParameterInterface::FInput,int> @ 14867f100

void __cdecl
ConstructItems<Audio::FParameterInterface::FInput,Audio::FParameterInterface::FInput,int>
          (void *param_1,FInput *param_2,int param_3)

{
  ITextData *pIVar1;
  longlong *plVar2;
  uint *puVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  if (param_3 != 0) {
    pFVar4 = &param_2->Description;
    plVar5 = (longlong *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar4) = 0;
      pIVar1 = (((FInput *)(pFVar4 + -1))->DisplayName).TextData.Reference;
      *(ITextData **)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar4) = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      *(uint *)(plVar5 + -1) = (((FInput *)(pFVar4 + -1))->DisplayName).Flags;
      *plVar5 = 0;
      pIVar1 = (pFVar4->TextData).Reference;
      *plVar5 = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
      }
      *(uint *)(plVar5 + 1) = pFVar4->Flags;
      *(FName *)(plVar5 + 2) = *(FName *)(pFVar4 + 1);
      FAudioParameter::FAudioParameter
                ((FAudioParameter *)(plVar5 + 3),(FAudioParameter *)((FName *)(pFVar4 + 1) + 1));
      plVar5[0x17] = 0;
      plVar2 = *(longlong **)((longlong)(pFVar4 + 0xb) + 8);
      plVar5[0x17] = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_28);
      }
      *(uint *)(plVar5 + 0x18) = *(uint *)(pFVar4 + 0xc);
      puVar3 = (uint *)(pFVar4 + 0xc);
      pFVar4 = pFVar4 + 0xe;
      *(uint *)(plVar5 + 0x19) = puVar3[2];
      plVar5 = plVar5 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNotifyBufferFinishedHooks::FNotifyBufferDetails,FNotifyBufferFinishedHooks::FNotifyBufferDetails,int> @ 14867f200

void __cdecl
ConstructItems<FNotifyBufferFinishedHooks::FNotifyBufferDetails,FNotifyBufferFinishedHooks::FNotifyBufferDetails,int>
          (void *param_1,FNotifyBufferDetails *param_2,int param_3)

{
  USoundNode *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->NotifyNode).field0_0x0.DebugPtr;
      *(USoundNode **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USoundNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(ulong64 *)(lVar2 + 8 + (longlong)param_2) = param_2->NotifyNodeWaveInstanceHash;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSoundWaveCuePoint,FSoundWaveCuePoint,int> @ 14867f270

void __cdecl
ConstructItems<FSoundWaveCuePoint,FSoundWaveCuePoint,int>
          (void *param_1,FSoundWaveCuePoint *param_2,int param_3)

{
  long64 *plVar1;
  long64 *plVar2;
  
  if (param_3 != 0) {
    plVar1 = (long64 *)((longlong)param_1 + 0x18);
    plVar2 = &param_2->FramePosition;
    do {
      *(undefined4 *)(plVar1 + -3) =
           *(undefined4 *)((longlong)plVar1 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      FString::FString((FString *)(plVar1 + -2),(FString *)(plVar2 + -2));
      *plVar1 = *plVar2;
      plVar1[1] = plVar2[1];
      *(bool *)(plVar1 + 2) = *(bool *)(plVar2 + 2);
      param_3 = param_3 + -1;
      plVar1 = plVar1 + 6;
      plVar2 = plVar2 + 6;
    } while (param_3 != 0);
  }
  return;
}

// Consume<`FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketNanite>'::__l20::<lambda_1>_> @ 14867f300

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdateChannel::FDynamicDataList::
Consume<_FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketNanite>_::__l20::<lambda_1>_>
          (FDynamicDataList *this,<lambda_1> *param_1)

{
  FDynamicSkelMeshObjectDataNanite *pFVar1;
  FDynamicSkelMeshObjectDataNanite *pFVar2;
  
  pFVar2 = (FDynamicSkelMeshObjectDataNanite *)this->Head;
  while (pFVar2 != (FDynamicSkelMeshObjectDataNanite *)0x0) {
    pFVar1 = (FDynamicSkelMeshObjectDataNanite *)pFVar2->_padding_;
    pFVar2->_padding_ = 0;
    TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(pFVar2);
    pFVar2 = pFVar1;
  }
  this->Head = (FSkeletalMeshDynamicData *)0x0;
  this->Tail = (FSkeletalMeshDynamicData *)0x0;
  return;
}

// Consume<`FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketNanite>'::__l30::<lambda_2>_> @ 14867f360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdateChannel::FDynamicDataList::
Consume<_FSkeletalMeshUpdateChannel::Replay<FSkeletalMeshUpdatePacketNanite>_::__l30::<lambda_2>_>
          (FDynamicDataList *this,<lambda_2> *param_1)

{
  FDynamicSkelMeshObjectDataNanite *pFVar1;
  FSkeletalMeshObjectNanite *this_00;
  FRHICommandList *pFVar2;
  FGPUSkinCache *pFVar3;
  bool bVar4;
  FDynamicSkelMeshObjectDataNanite *this_01;
  
  this_01 = (FDynamicSkelMeshObjectDataNanite *)this->Head;
  if ((FDynamicSkelMeshObjectDataNanite *)this->Head == (FDynamicSkelMeshObjectDataNanite *)0x0) {
    this->Tail = (FSkeletalMeshDynamicData *)0x0;
    this->Head = (FSkeletalMeshDynamicData *)0x0;
    return;
  }
  while( true ) {
    pFVar1 = (FDynamicSkelMeshObjectDataNanite *)this_01->_padding_;
    this_01->_padding_ = 0;
    this_00 = *param_1->MeshObject;
    if (pFVar1 == (FDynamicSkelMeshObjectDataNanite *)0x0) break;
    pFVar2 = param_1->RHICmdList;
    pFVar3 = (FGPUSkinCache *)param_1->UpdatePacket->_padding_;
    FDynamicSkelMeshObjectDataNanite::BuildBoneTransforms(this_01,this_00->DynamicData);
    TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(this_00->DynamicData);
    this_00->DynamicData = this_01;
    bVar4 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported();
    this_01 = pFVar1;
    if ((((bVar4) && (pFVar3 != (FGPUSkinCache *)0x0)) && (GEnableGPUSkinCache != 0)) &&
       ((bVar4 = IsRayTracingEnabled(), bVar4 &&
        (*(char *)(*(longlong *)&this_00->field_0x48 + 0x1e) != '\0')))) {
      FSkeletalMeshObjectNanite::ProcessUpdatedDynamicData(this_00,pFVar2,pFVar3);
      FSkeletalMeshObjectNanite::UpdateBoneData(this_00,pFVar2);
    }
  }
  FSkeletalMeshUpdatePacketNanite::Add(param_1->UpdatePacket,this_00,this_01);
  this->Tail = (FSkeletalMeshDynamicData *)0x0;
  this->Head = (FSkeletalMeshDynamicData *)0x0;
  return;
}

// CreateLambda<`SGameLayerManager::Construct'::__l14::<lambda_1>_&,enum_CanvasVisibility::CanvasType> @ 14867f660

TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
CreateLambda<_SGameLayerManager::Construct_::__l14::<lambda_1>_&,enum_CanvasVisibility::CanvasType>
          (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,<lambda_1> *param_1,CanvasType *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__W4CanvasType_CanvasVisibility____6B_
    ;
    *(CanvasType *)(puVar2 + 1) = *param_2;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`SGameLayerManager::Construct'::`14'::<lambda_1>,enum_CanvasVisibility::CanvasType>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// DefaultConstructItems<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled,int> @ 14867f840

void __cdecl
DefaultConstructItems<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FSoundWaveCuePoint,int> @ 14867f850

void __cdecl DefaultConstructItems<FSoundWaveCuePoint,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0xffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,int> @ 14867f890

void __cdecl
DefaultConstructItems<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FString,FStreamedAudioPlatformData_*>,int> @ 14867f9a0

void __cdecl
DestructItems<TTuple<FString,FStreamedAudioPlatformData_*>,int>
          (TTuple<FString,FStreamedAudioPlatformData_*> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FParameterInterface::FEnvironmentVariable,int> @ 14867f9e0

void __cdecl
DestructItems<Audio::FParameterInterface::FEnvironmentVariable,int>
          (FEnvironmentVariable *param_1,int param_2)

{
  ITextData *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Description).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pIVar1 = (param_1->DisplayName).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FParameterInterface::FInput,int> @ 14867fa30

void __cdecl DestructItems<Audio::FParameterInterface::FInput,int>(FInput *param_1,int param_2)

{
  longlong *plVar1;
  FAudioParameter *this;
  
  if (param_2 != 0) {
    this = &param_1->InitValue;
    do {
      if (this[1].ParamName != (FName)0x0) {
        (**(code **)(*(longlong *)this[1].ParamName + 0x10))();
      }
      FAudioParameter::~FAudioParameter(this);
      plVar1 = *(longlong **)&this[-1].TypeName.Number;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar1 = *(longlong **)&this[-1].ArrayStringParam.ArrayNum;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      this = (FAudioParameter *)&this[1].ArrayBoolParam;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FParameterInterface::FOutput,int> @ 14867faa0

void __cdecl DestructItems<Audio::FParameterInterface::FOutput,int>(FOutput *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Description;
    do {
      pIVar1 = pFVar2[2].TextData.Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (pFVar2->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (((FOutput *)(pFVar2 + -1))->DisplayName).TextData.Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = (FText *)((longlong)(pFVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,int> @ 14867fb00

void __cdecl
DestructItems<FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,int>
          (FSkeletalMeshObjectLOD *param_1,int param_2)

{
  FLocalVertexFactory *this;
  
  if (param_2 != 0) {
    this = &param_1->VertexFactory;
    do {
      FLocalVertexFactory::~FLocalVertexFactory(this);
      this = (FLocalVertexFactory *)&this[1]._padding_;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,int> @ 14867fb40

void __cdecl
DestructItems<FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,int>
          (FSkeletalMeshObjectLOD *param_1,int param_2)

{
  FGPUSkinPassthroughVertexFactory *pFVar1;
  FScriptContainerElement *pFVar2;
  TArray<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &param_1->VertexFactories;
    do {
      pFVar1 = ((TUniquePtr<FGPUSkinPassthroughVertexFactory,TDefaultDelete<FGPUSkinPassthroughVertexFactory>_>
                 *)(pTVar3 + 1))->Ptr;
      if (pFVar1 != (FGPUSkinPassthroughVertexFactory *)0x0) {
        (**(code **)pFVar1->_padding_)(pFVar1,1);
      }
      DestructItems<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int>
                ((TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_> *
                 )(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
      pFVar2 = (pTVar3->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pTVar3 = pTVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD,int> @ 14867fba0

void __cdecl
DestructItems<FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD,int>
          (FSkeletalMeshObjectLOD *param_1,int param_2)

{
  FLocalVertexFactory *this;
  
  if (param_2 != 0) {
    this = &param_1->VertexFactory;
    do {
      FLocalVertexFactory::~FLocalVertexFactory(this);
      this = (FLocalVertexFactory *)&this[1]._padding_;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSoundGroup,int> @ 14867fbe0

void __cdecl DestructItems<FSoundGroup,int>(FSoundGroup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->DisplayName;
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

// DestructItems<FSoundWaveCuePoint,int> @ 14867fc20

void __cdecl DestructItems<FSoundWaveCuePoint,int>(FSoundWaveCuePoint *param_1,int param_2)

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
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSoundWaveSpectralTimeData,int> @ 14867fc60

void __cdecl
DestructItems<FSoundWaveSpectralTimeData,int>(FSoundWaveSpectralTimeData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,int> @ 14867fca0

void __cdecl
DestructItems<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,int>
          (TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FActiveSound_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FActiveSound_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FActiveSound_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int> @ 14867fd00

void __cdecl
DestructItems<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int>
          (TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> *param_1
          ,int param_2)

{
  IModulatorSettings *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IModulatorSettings *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDebugCanvasDrawer::BeginRenderingCanvas'::__l5::TSTR_BeginRenderingDebugCanvas189>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148682230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDebugCanvasDrawer::BeginRenderingCanvas_::__l5::TSTR_BeginRenderingDebugCanvas189>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDebugCanvasDrawer::BeginRenderingCanvas'::__l5::TSTR_BeginRenderingDebugCanvas189>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148682381;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148682575;
  }
LAB_148682381:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14868245f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14868245f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_148682575:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::__l11::TSTR_DeleteDebugRenderThreadCanvas161>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1486825b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDebugCanvasDrawer::~FDebugCanvasDrawer_::__l11::TSTR_DeleteDebugRenderThreadCanvas161>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::__l11::TSTR_DeleteDebugRenderThreadCanvas161>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148682701;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1486828f5;
  }
LAB_148682701:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1486827df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1486827df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_1486828f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSceneViewport::UpdateViewportRHI'::__l40::TSTR_DeleteSlateRenderTarget1828>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148682930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSceneViewport::UpdateViewportRHI_::__l40::TSTR_DeleteSlateRenderTarget1828>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSceneViewport::UpdateViewportRHI'::__l40::TSTR_DeleteSlateRenderTarget1828>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148682a81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148682c75;
  }
LAB_148682a81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148682b5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148682b5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_148682c75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_> @ 148682cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::__l2::<lambda_1>_> @ 148682f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_1486833d1;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_1486832bf:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1486832bf;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_1486833d1:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_> @ 148683420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::__l2::<lambda_1>_> @ 1486836a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::`2'::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::`2'::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_148683b41;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_148683a2f:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148683a2f;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_148683b41:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::__l5::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafe249>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148683b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSlateTexture2DRHIRef::UpdateTextureThreadSafe_::__l5::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafe249>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::__l5::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafe249>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148683ce1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148683ed5;
  }
LAB_148683ce1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148683dbf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148683dbf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_148683ed5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::__l2::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafeWithTextureData280>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148683f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData_::__l2::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafeWithTextureData280>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::__l2::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafeWithTextureData280>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148684061;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148684255;
  }
LAB_148684061:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14868413f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14868413f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_148684255:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDebugCanvasDrawer::HandleReleaseFontResources'::__l12::TSTR_FlushFontResourcesCommand117>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148684290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDebugCanvasDrawer::HandleReleaseFontResources_::__l12::TSTR_FlushFontResourcesCommand117>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FDebugCanvasDrawer::HandleReleaseFontResources'::__l12::TSTR_FlushFontResourcesCommand117>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1486843e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1486845d5;
  }
LAB_1486843e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1486844bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1486844bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_1486845d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_> @ 148684610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::__l2::<lambda_1>_> @ 148684890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::`2'::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::`2'::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_148684d31;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_148684c1f:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148684c1f;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_148684d31:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_> @ 148684d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::__l2::<lambda_1>_> @ 148685000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_1486854a1;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_14868538f:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14868538f;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_1486854a1:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_> @ 1486854f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite_::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite_::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite_::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::__l2::<lambda_1>_> @ 148685770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite_::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite_::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::`11'::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::`11'::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_148685c11;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_148685aff:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148685aff;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_148685c11:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSlateTexture2DRHIRef::ResizeTexture'::__l10::TSTR_ResizeSlateTexture184>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148685c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSlateTexture2DRHIRef::ResizeTexture_::__l10::TSTR_ResizeSlateTexture184>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSlateTexture2DRHIRef::ResizeTexture'::__l10::TSTR_ResizeSlateTexture184>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148685db1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148685fa5;
  }
LAB_148685db1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148685e8f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148685e8f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_148685fa5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSceneViewport::EnqueueBeginRenderFrame'::__l2::TSTR_SetRenderThreadViewportTarget1908>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148685fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSceneViewport::EnqueueBeginRenderFrame_::__l2::TSTR_SetRenderThreadViewportTarget1908>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSceneViewport::EnqueueBeginRenderFrame'::__l2::TSTR_SetRenderThreadViewportTarget1908>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148686131;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148686325;
  }
LAB_148686131:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14868620f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14868620f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_148686325:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_> @ 148686360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::Update_::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::Update_::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::Update_::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::__l2::<lambda_1>_> @ 1486865e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::Update_::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::Update_::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::`5'::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::`5'::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_148686a81;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_14868696f:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14868696f;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_148686a81:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_> @ 148686ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer_::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer_::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer_::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::__l2::<lambda_1>_> @ 148686d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer_::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer_::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::`7'::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::`7'::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_1486871f1;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_1486870df:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1486870df;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_1486871f1:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTexture'::__l7::TSTR_UpdateSlateTexture230>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148687240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSlateTexture2DRHIRef::UpdateTexture_::__l7::TSTR_UpdateSlateTexture230>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTexture'::__l7::TSTR_UpdateSlateTexture230>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148687391;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148687585;
  }
LAB_148687391:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14868746f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14868746f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
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
LAB_148687585:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDefault<UGeneralProjectSettings> @ 1486877c0

UGeneralProjectSettings * __cdecl GetDefault<UGeneralProjectSettings>(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UGeneralProjectSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UGeneralProjectSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetFullNameForCastLogError<USoundSubmixBase> @ 148687800

FString * __cdecl
GetFullNameForCastLogError<USoundSubmixBase>
          (FString *__return_storage_ptr__,USoundSubmixBase *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<USoundCue> @ 148687a10

FString * __cdecl GetTypeName<USoundCue>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USoundCue::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<USoundSubmixWithParentBase> @ 148687a50

FString * __cdecl GetTypeName<USoundSubmixWithParentBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USoundSubmixWithParentBase::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,`FConcurrencyGroup::CullSoundsDueToMaxConcurrency'::__l2::FCompareActiveSounds>_>_> @ 148687af0

void __cdecl
AlgoImpl::
HeapSiftDown<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::CullSoundsDueToMaxConcurrency_::__l2::FCompareActiveSounds>_>_>
          (FActiveSound **param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::CullSoundsDueToMaxConcurrency(void)_::_2_::FCompareActiveSounds>_>
          *param_5)

{
  FActiveSound *pFVar1;
  FActiveSound *pFVar2;
  FCompareActiveSounds *pFVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_38d1b717;
  do {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar4 = param_2 * 2;
    iVar7 = iVar4 + 1;
    if (iVar4 + 2 < param_3) {
      pFVar1 = param_1[iVar7];
      pFVar2 = param_1[(longlong)iVar4 + 2];
      pFVar3 = param_5->Predicate->Predicate;
      switch(pFVar3->ResolutionRule) {
      default:
        bVar8 = true;
        break;
      case StopLowestPriority:
      case StopLowestPriorityThenPreventNew:
        fVar9 = FActiveSound::GetConcurrencyPriority(pFVar2);
        fVar10 = FActiveSound::GetConcurrencyPriority(pFVar1);
        if ((float)((uint)(fVar9 - fVar10) & uVar6) <= fVar5) {
          if (pFVar3->ResolutionRule == StopLowestPriorityThenPreventNew) {
            bVar8 = pFVar1->PlayOrder < pFVar2->PlayOrder;
          }
          else {
            bVar8 = pFVar2->PlayOrder < pFVar1->PlayOrder;
          }
        }
        else {
          bVar8 = fVar9 < fVar10;
        }
        break;
      case StopQuietest:
        if (fVar5 < (float)((uint)(pFVar2->VolumeConcurrency - pFVar1->VolumeConcurrency) & uVar6))
        {
          bVar8 = pFVar2->VolumeConcurrency < pFVar1->VolumeConcurrency;
        }
        else {
          bVar8 = pFVar1->PlayOrder < pFVar2->PlayOrder;
        }
      }
      if (bVar8) {
        iVar7 = iVar4;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1[param_2];
    pFVar2 = param_1[iVar7];
    pFVar3 = param_5->Predicate->Predicate;
    switch(pFVar3->ResolutionRule) {
    default:
      goto switchD_148687c55_caseD_0;
    case StopLowestPriority:
    case StopLowestPriorityThenPreventNew:
      fVar9 = FActiveSound::GetConcurrencyPriority(pFVar1);
      fVar10 = FActiveSound::GetConcurrencyPriority(pFVar2);
      if ((float)((uint)(fVar9 - fVar10) & uVar6) <= fVar5) {
        if (pFVar3->ResolutionRule == StopLowestPriorityThenPreventNew) {
          bVar8 = pFVar2->PlayOrder < pFVar1->PlayOrder;
        }
        else {
          bVar8 = pFVar1->PlayOrder < pFVar2->PlayOrder;
        }
      }
      else {
        bVar8 = fVar9 < fVar10;
      }
      break;
    case StopQuietest:
      if (fVar5 < (float)((uint)(pFVar1->VolumeConcurrency - pFVar2->VolumeConcurrency) & uVar6)) {
        bVar8 = pFVar1->VolumeConcurrency < pFVar2->VolumeConcurrency;
      }
      else {
        bVar8 = pFVar2->PlayOrder < pFVar1->PlayOrder;
      }
    }
    if (!bVar8) {
      return;
    }
switchD_148687c55_caseD_0:
    pFVar1 = param_1[param_2];
    param_1[param_2] = param_1[iVar7];
    param_1[iVar7] = pFVar1;
    param_2 = iVar7;
  } while( true );
}

// HeapSiftDown<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,`FConcurrencyGroup::UpdateGeneration'::__l2::FCompareActiveSounds>_>_> @ 148687d80

void __cdecl
AlgoImpl::
HeapSiftDown<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::UpdateGeneration_::__l2::FCompareActiveSounds>_>_>
          (FActiveSound **param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::UpdateGeneration(FActiveSound_*)_::_2_::FCompareActiveSounds>_>
          *param_5)

{
  EConcurrencyVolumeScaleMode EVar1;
  FActiveSound *pFVar2;
  FActiveSound *pFVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float local_res10 [2];
  float local_res18 [4];
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_38d1b717;
  do {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar4 = param_2 * 2;
    iVar7 = iVar4 + 1;
    if (iVar4 + 2 < param_3) {
      pFVar2 = param_1[iVar7];
      pFVar3 = param_1[(longlong)iVar4 + 2];
      EVar1 = param_5->Predicate->Predicate->ScaleMode;
      if (EVar1 == Distance) {
        local_res10[0] = 0.0;
        local_res18[0] = 0.0;
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar3->AudioDevice,&pFVar3->LastLocation,local_res10);
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar2->AudioDevice,&pFVar2->LastLocation,local_res18);
        if (fVar5 < (float)((uint)(local_res10[0] - local_res18[0]) & uVar6)) {
          bVar8 = local_res10[0] == local_res18[0];
          bVar9 = local_res10[0] < local_res18[0];
LAB_148687ecd:
          bVar8 = !bVar9 && !bVar8;
        }
        else {
          bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
        }
      }
      else if (EVar1 == Priority) {
        fVar10 = FActiveSound::GetConcurrencyPriority(pFVar3);
        fVar11 = FActiveSound::GetConcurrencyPriority(pFVar2);
        if (fVar5 < (float)((uint)(fVar10 - fVar11) & uVar6)) {
          bVar8 = fVar11 == fVar10;
          bVar9 = fVar11 < fVar10;
          goto LAB_148687ecd;
        }
        bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        iVar7 = iVar4;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar2 = param_1[iVar7];
    pFVar3 = param_1[param_2];
    EVar1 = param_5->Predicate->Predicate->ScaleMode;
    if (EVar1 == Distance) {
      local_res10[0] = 0.0;
      local_res18[0] = 0.0;
      FAudioDevice::GetDistanceSquaredToNearestListener
                (pFVar3->AudioDevice,&pFVar3->LastLocation,local_res10);
      FAudioDevice::GetDistanceSquaredToNearestListener
                (pFVar2->AudioDevice,&pFVar2->LastLocation,local_res18);
      if (fVar5 < (float)((uint)(local_res10[0] - local_res18[0]) & uVar6)) {
        bVar8 = local_res10[0] == local_res18[0];
        bVar9 = local_res10[0] < local_res18[0];
LAB_148687fac:
        bVar8 = !bVar9 && !bVar8;
      }
      else {
        bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
      }
LAB_148687faf:
      if (!bVar8) {
        return;
      }
    }
    else if (EVar1 == Priority) {
      fVar10 = FActiveSound::GetConcurrencyPriority(pFVar3);
      fVar11 = FActiveSound::GetConcurrencyPriority(pFVar2);
      if (fVar5 < (float)((uint)(fVar10 - fVar11) & uVar6)) {
        bVar8 = fVar11 == fVar10;
        bVar9 = fVar11 < fVar10;
        goto LAB_148687fac;
      }
      bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
      goto LAB_148687faf;
    }
    pFVar2 = param_1[param_2];
    param_1[param_2] = param_1[iVar7];
    param_1[iVar7] = pFVar2;
    param_2 = iVar7;
  } while( true );
}

// HeapifyInternal<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,`FConcurrencyGroup::CullSoundsDueToMaxConcurrency'::__l2::FCompareActiveSounds>_>_> @ 148688020

void __cdecl
AlgoImpl::
HeapifyInternal<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::CullSoundsDueToMaxConcurrency_::__l2::FCompareActiveSounds>_>_>
          (FActiveSound **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::CullSoundsDueToMaxConcurrency(void)_::_2_::FCompareActiveSounds>_>
          param_4)

{
  FCompareActiveSounds *pFVar1;
  FActiveSound *pFVar2;
  FActiveSound *pFVar3;
  code *pcVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_38d1b717;
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar5 = iVar11;
  iVar10 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_14868829e:
      if (iVar10 == 0) {
        return;
      }
      iVar9 = iVar10 + -1;
      iVar11 = iVar5 + -2;
      iVar5 = iVar11;
      iVar10 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      pFVar1 = (param_4.Predicate)->Predicate;
      pFVar2 = param_1[iVar12];
      pFVar3 = param_1[(longlong)iVar11 + 2];
      switch(pFVar1->ResolutionRule) {
      default:
        bVar8 = true;
        break;
      case StopLowestPriority:
      case StopLowestPriorityThenPreventNew:
        fVar13 = FActiveSound::GetConcurrencyPriority(pFVar3);
        fVar14 = FActiveSound::GetConcurrencyPriority(pFVar2);
        if ((float)((uint)(fVar13 - fVar14) & uVar7) <= fVar6) {
          if (pFVar1->ResolutionRule == StopLowestPriorityThenPreventNew) {
            bVar8 = pFVar2->PlayOrder < pFVar3->PlayOrder;
          }
          else {
            bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
          }
        }
        else {
          bVar8 = fVar13 < fVar14;
        }
        break;
      case StopQuietest:
        if (fVar6 < (float)((uint)(pFVar3->VolumeConcurrency - pFVar2->VolumeConcurrency) & uVar7))
        {
          bVar8 = pFVar3->VolumeConcurrency < pFVar2->VolumeConcurrency;
        }
        else {
          bVar8 = pFVar2->PlayOrder < pFVar3->PlayOrder;
        }
      }
      if (bVar8) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar1 = (param_4.Predicate)->Predicate;
    pFVar2 = param_1[iVar12];
    pFVar3 = param_1[iVar9];
    switch(pFVar1->ResolutionRule) {
    default:
      goto switchD_1486881d5_caseD_0;
    case StopLowestPriority:
    case StopLowestPriorityThenPreventNew:
      fVar13 = FActiveSound::GetConcurrencyPriority(pFVar3);
      fVar14 = FActiveSound::GetConcurrencyPriority(pFVar2);
      if ((float)((uint)(fVar13 - fVar14) & uVar7) <= fVar6) {
        if (pFVar1->ResolutionRule == StopLowestPriorityThenPreventNew) {
          bVar8 = pFVar2->PlayOrder < pFVar3->PlayOrder;
        }
        else {
          bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
        }
      }
      else {
        bVar8 = fVar13 < fVar14;
      }
      break;
    case StopQuietest:
      if (fVar6 < (float)((uint)(pFVar3->VolumeConcurrency - pFVar2->VolumeConcurrency) & uVar7)) {
        bVar8 = pFVar3->VolumeConcurrency < pFVar2->VolumeConcurrency;
      }
      else {
        bVar8 = pFVar2->PlayOrder < pFVar3->PlayOrder;
      }
    }
    if (!bVar8) goto LAB_14868829e;
switchD_1486881d5_caseD_0:
    pFVar2 = param_1[iVar9];
    param_1[iVar9] = param_1[iVar12];
    iVar11 = iVar12 * 2 + 1;
    param_1[iVar12] = pFVar2;
    iVar9 = iVar12;
  } while( true );
}

// HeapifyInternal<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,`FConcurrencyGroup::UpdateGeneration'::__l2::FCompareActiveSounds>_>_> @ 148688330

void __cdecl
AlgoImpl::
HeapifyInternal<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::UpdateGeneration_::__l2::FCompareActiveSounds>_>_>
          (FActiveSound **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::UpdateGeneration(FActiveSound_*)_::_2_::FCompareActiveSounds>_>
          param_4)

{
  EConcurrencyVolumeScaleMode EVar1;
  FActiveSound *pFVar2;
  FActiveSound *pFVar3;
  code *pcVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float local_res10 [2];
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_38d1b717;
  iVar9 = (param_2 + -2) / 2;
  local_68 = iVar9 * 2 + 1;
  local_6c = iVar9;
  iVar10 = local_68;
  do {
    while (param_2 <= iVar10) {
LAB_1486885b6:
      if (local_6c == 0) {
        return;
      }
      iVar9 = local_6c + -1;
      local_68 = local_68 + -2;
      local_6c = iVar9;
      iVar10 = local_68;
    }
    iVar5 = iVar9 * 2;
    iVar10 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      EVar1 = (param_4.Predicate)->Predicate->ScaleMode;
      pFVar2 = param_1[iVar10];
      pFVar3 = param_1[(longlong)iVar5 + 2];
      if (EVar1 == Distance) {
        local_res10[0] = 0.0;
        local_78 = 0.0;
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar3->AudioDevice,&pFVar3->LastLocation,local_res10);
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar2->AudioDevice,&pFVar2->LastLocation,&local_78);
        if (fVar6 < (float)((uint)(local_res10[0] - local_78) & uVar7)) {
          bVar8 = local_res10[0] == local_78;
          bVar11 = local_res10[0] < local_78;
LAB_1486884bf:
          bVar8 = !bVar11 && !bVar8;
        }
        else {
          bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
        }
      }
      else if (EVar1 == Priority) {
        fVar12 = FActiveSound::GetConcurrencyPriority(pFVar3);
        fVar13 = FActiveSound::GetConcurrencyPriority(pFVar2);
        if (fVar6 < (float)((uint)(fVar12 - fVar13) & uVar7)) {
          bVar8 = fVar13 == fVar12;
          bVar11 = fVar13 < fVar12;
          goto LAB_1486884bf;
        }
        bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        iVar10 = iVar5;
      }
      iVar10 = iVar10 + 1;
    }
    EVar1 = (param_4.Predicate)->Predicate->ScaleMode;
    pFVar2 = param_1[iVar10];
    pFVar3 = param_1[iVar9];
    if (EVar1 == Distance) {
      local_74 = 0.0;
      local_70 = 0.0;
      FAudioDevice::GetDistanceSquaredToNearestListener
                (pFVar3->AudioDevice,&pFVar3->LastLocation,&local_74);
      FAudioDevice::GetDistanceSquaredToNearestListener
                (pFVar2->AudioDevice,&pFVar2->LastLocation,&local_70);
      if (fVar6 < (float)((uint)(local_74 - local_70) & uVar7)) {
        bVar8 = local_74 == local_70;
        bVar11 = local_74 < local_70;
LAB_148688584:
        bVar8 = !bVar11 && !bVar8;
      }
      else {
        bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
      }
LAB_148688587:
      if (!bVar8) goto LAB_1486885b6;
    }
    else if (EVar1 == Priority) {
      fVar12 = FActiveSound::GetConcurrencyPriority(pFVar3);
      fVar13 = FActiveSound::GetConcurrencyPriority(pFVar2);
      if (fVar6 < (float)((uint)(fVar12 - fVar13) & uVar7)) {
        bVar8 = fVar13 == fVar12;
        bVar11 = fVar13 < fVar12;
        goto LAB_148688584;
      }
      bVar8 = pFVar3->PlayOrder < pFVar2->PlayOrder;
      goto LAB_148688587;
    }
    pFVar2 = param_1[iVar9];
    param_1[iVar9] = param_1[iVar10];
    param_1[iVar10] = pFVar2;
    iVar9 = iVar10;
    iVar10 = iVar10 * 2 + 1;
  } while( true );
}

// InternalConstructor<UButtonStyleAsset> @ 148688750

void __cdecl InternalConstructor<UButtonStyleAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UButtonStyleAsset__6B_;
    FButtonStyle::FButtonStyle((FButtonStyle *)&this[1].field_0x8);
    return;
  }
  return;
}

// InternalConstructor<UCheckBoxStyleAsset> @ 148688790

void __cdecl InternalConstructor<UCheckBoxStyleAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCheckBoxStyleAsset__6B_;
    FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&this[1].field_0x8);
    return;
  }
  return;
}

// InternalConstructor<UEndpointSubmix> @ 1486887d0

void __cdecl InternalConstructor<UEndpointSubmix>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x4 = 0x3c23d70a;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined ***)this = &___7UEndpointSubmix__6B_;
    IAudioEndpointFactory::GetTypeNameForDefaultEndpoint();
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<USkinnedAsset> @ 148688870

void __cdecl InternalConstructor<USkinnedAsset>(FObjectInitializer *param_1)

{
  UStreamableRenderAsset *this;
  
  this = (UStreamableRenderAsset *)param_1->Obj;
  if (this != (UStreamableRenderAsset *)0x0) {
    UStreamableRenderAsset::UStreamableRenderAsset(this,param_1);
    this->_padding_ = (longlong)&USkinnedAsset::_vftable__for__UStreamableRenderAsset__;
    this[1]._padding_ = (longlong)&USkinnedAsset::_vftable__for__IInterface_AsyncCompilation__;
  }
  return;
}

// InternalConstructor<USlateBrushAsset> @ 1486888b0

void __cdecl InternalConstructor<USlateBrushAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USlateBrushAsset__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)&this[1].field_0x8);
    return;
  }
  return;
}

// InternalConstructor<USlateTextureAtlasInterface> @ 1486888f0

void __cdecl InternalConstructor<USlateTextureAtlasInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7USlateTextureAtlasInterface__6B_;
  }
  return;
}

// InternalConstructor<USoundAttenuation> @ 148688920

void __cdecl InternalConstructor<USoundAttenuation>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundAttenuation__6B_;
    FSoundAttenuationSettings::FSoundAttenuationSettings((FSoundAttenuationSettings *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<USoundBase> @ 148688960

void __cdecl InternalConstructor<USoundBase>(FObjectInitializer *param_1)

{
  if ((USoundBase *)param_1->Obj != (USoundBase *)0x0) {
    USoundBase::USoundBase((USoundBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<USoundClass> @ 148688980

void __cdecl InternalConstructor<USoundClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &USoundClass::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &USoundClass::_vftable__for__IInterface_AssetUserData__;
    FSoundClassProperties::FSoundClassProperties((FSoundClassProperties *)&this[1].field_0x8);
    *(undefined8 *)&this[0xb].field_0x10 = 0;
    *(undefined8 *)&this[0xb].field_0x18 = 0;
    *(undefined8 *)&this[0xb].field_0x20 = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)&this[0xc].field_0x8 = 0;
    *(undefined8 *)&this[0xc].field_0x10 = 0;
    *(undefined8 *)&this[0xc].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<USoundConcurrency> @ 148688a00

void __cdecl InternalConstructor<USoundConcurrency>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundConcurrency__6B_;
    this[1].field_0x4 = this[1].field_0x4 & 0xf8;
    *(undefined4 *)(this + 1) = 0x10;
    *(undefined4 *)&this[1].field_0x8 = 0;
    this[1].field_0x5 = 3;
    *(undefined4 *)&this[1].field_0xc = 0x10;
    *(undefined8 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x18 = 0x3c23d70a;
    *(undefined8 *)&this[1].field_0x1c = 0x3f000000;
  }
  return;
}

// InternalConstructor<USoundCue> @ 148688a70

void __cdecl InternalConstructor<USoundCue>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USoundBase *this;
  
  this = (USoundBase *)param_1->Obj;
  if (this != (USoundBase *)0x0) {
    USoundBase::USoundBase(this,param_1);
    this->_padding_ = (longlong)&USoundCue::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USoundCue::_vftable__for__IAudioPropertiesSheetAssetUserInterface__
    ;
    this->_padding_ = (longlong)&USoundCue::_vftable__for__IInterface_AssetUserData__;
    FSoundAttenuationSettings::FSoundAttenuationSettings
              ((FSoundAttenuationSettings *)&this[1]._padding_);
    pbVar1 = (byte *)((longlong)&this[3].ConcurrencyOverrides.MaxCount + 1);
    *pbVar1 = *pbVar1 & 0xfe;
    this[3].ConcurrencyOverrides.RetriggerTime = 0.0;
    this[3].ConcurrencyOverrides.PlatformMaxCount = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f400000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    this[3].ConcurrencySet.HashSize = 0x461c4000;
    *(undefined4 *)&this[3].ConcurrencyOverrides.field_0x4 = 0xffffffff;
  }
  return;
}

// InternalConstructor<USoundEffectPreset> @ 148688b10

void __cdecl InternalConstructor<USoundEffectPreset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundEffectPreset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x10,4000);
    this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<USoundEffectSubmixPreset> @ 148688b60

void __cdecl InternalConstructor<USoundEffectSubmixPreset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundEffectPreset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x10,4000);
    this[2].field_0x10 = 0;
    *(undefined ***)this = &___7USoundEffectSubmixPreset__6B_;
  }
  return;
}

// InternalConstructor<USoundGroups> @ 148688bc0

void __cdecl InternalConstructor<USoundGroups>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundGroups__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<USoundMix> @ 148688c30

void __cdecl InternalConstructor<USoundMix>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[3].field_0x10 = 0xbf800000;
    *(undefined ***)this = &___7USoundMix__6B_;
    *(undefined ***)&this[1].field_0x8 = &___7FAudioEQEffect__6B_;
    *(uint *)(this + 1) = *(uint *)(this + 1) & 0xfffffffe;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0x44160000;
    *(undefined4 *)&this[1].field_0x1c = 0x3f800000;
    *(undefined4 *)&this[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x24 = 0x447a0000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x44fa0000;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
    *(undefined4 *)&this[2].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x14 = 0x461c4000;
    *(undefined4 *)&this[2].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x1c = 0x3f800000;
    *(undefined4 *)&this[3].field_0xc = 0x3e4ccccd;
    *(undefined4 *)&this[3].field_0x14 = 0x3e4ccccd;
  }
  return;
}

// InternalConstructor<USoundNode> @ 148688d00

void __cdecl InternalConstructor<USoundNode>(FObjectInitializer *param_1)

{
  if ((USoundNode *)param_1->Obj != (USoundNode *)0x0) {
    USoundNode::USoundNode((USoundNode *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<USoundNodeAssetReferencer> @ 148688d20

void __cdecl InternalConstructor<USoundNodeAssetReferencer>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeAssetReferencer__6B_;
  }
  return;
}

// InternalConstructor<USoundNodeAttenuation> @ 148688d50

void __cdecl InternalConstructor<USoundNodeAttenuation>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeAttenuation__6B_;
    this[1]._padding_ = 0;
    FSoundAttenuationSettings::FSoundAttenuationSettings
              ((FSoundAttenuationSettings *)&this[1]._padding_);
    return;
  }
  return;
}

// InternalConstructor<USoundNodeBranch> @ 148688da0

void __cdecl InternalConstructor<USoundNodeBranch>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeBranch__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeConcatenator> @ 148688de0

void __cdecl InternalConstructor<USoundNodeConcatenator>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeConcatenator__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeDelay> @ 148688e20

void __cdecl InternalConstructor<USoundNodeDelay>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeDelay__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeDialoguePlayer> @ 148688e60

void __cdecl InternalConstructor<USoundNodeDialoguePlayer>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeDialoguePlayer__6B_;
    FDialogueWaveParameter::FDialogueWaveParameter((FDialogueWaveParameter *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<USoundNodeDistanceCrossFade> @ 148688ea0

void __cdecl InternalConstructor<USoundNodeDistanceCrossFade>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeDistanceCrossFade__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeDoppler> @ 148688ee0

void __cdecl InternalConstructor<USoundNodeDoppler>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    this->_padding_ = (longlong)&___7USoundNodeDoppler__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x40a00000;
  }
  return;
}

// InternalConstructor<USoundNodeEnveloper> @ 148688f30

void __cdecl InternalConstructor<USoundNodeEnveloper>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeEnveloper__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&this[1].ChildNodes);
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&this[3]._padding_);
    *(undefined4 *)&this[5]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[5]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x3f800000;
  }
  return;
}

// InternalConstructor<USoundNodeGroupControl> @ 148688fb0

void __cdecl InternalConstructor<USoundNodeGroupControl>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeGroupControl__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeLooping> @ 148688ff0

void __cdecl InternalConstructor<USoundNodeLooping>(FObjectInitializer *param_1)

{
  uint *puVar1;
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 | 1;
    this->_padding_ = (longlong)&___7USoundNodeLooping__6B_;
    *(undefined4 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<USoundNodeMature> @ 148689030

void __cdecl InternalConstructor<USoundNodeMature>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeMature__6B_;
  }
  return;
}

// InternalConstructor<USoundNodeMixer> @ 148689060

void __cdecl InternalConstructor<USoundNodeMixer>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeMixer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeModulator> @ 1486890a0

void __cdecl InternalConstructor<USoundNodeModulator>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f733333;
    this->_padding_ = (longlong)&___7USoundNodeModulator__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f866666;
    *(undefined4 *)&this[1]._padding_ = 0x3f733333;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f866666;
  }
  return;
}

// InternalConstructor<USoundNodeModulatorContinuous> @ 1486890f0

void __cdecl InternalConstructor<USoundNodeModulatorContinuous>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeModulatorContinuous__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].RandomStream.Seed = 0;
    this[1]._padding_ = 0x3f800000;
    this[1]._padding_ = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    this[1].ChildNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x3f800000;
    this[1].ChildNodes.ArrayNum = 0x3f800000;
    this[1].ChildNodes.ArrayMax = 0;
    this[1].RandomStream.InitialSeed = 0x3f800000;
  }
  return;
}

// InternalConstructor<USoundNodeOscillator> @ 148689170

void __cdecl InternalConstructor<USoundNodeOscillator>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeOscillator__6B_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffc;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<USoundNodeParamCrossFade> @ 1486891c0

void __cdecl InternalConstructor<USoundNodeParamCrossFade>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USoundNodeParamCrossFade__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeQualityLevel> @ 148689200

void __cdecl InternalConstructor<USoundNodeQualityLevel>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&___7USoundNodeQualityLevel__6B_;
  }
  return;
}

// InternalConstructor<USoundNodeRandom> @ 148689240

void __cdecl InternalConstructor<USoundNodeRandom>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeRandom__6B_;
    *(byte *)&this[1].ChildNodes.AllocatorInstance.Data =
         *(byte *)&this[1].ChildNodes.AllocatorInstance.Data | 4;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeSoundClass> @ 148689290

void __cdecl InternalConstructor<USoundNodeSoundClass>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USoundNodeSoundClass__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeSwitch> @ 1486892d0

void __cdecl InternalConstructor<USoundNodeSwitch>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeSwitch__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeWaveParam> @ 148689310

void __cdecl InternalConstructor<USoundNodeWaveParam>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeWaveParam__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoundNodeWavePlayer> @ 148689350

void __cdecl InternalConstructor<USoundNodeWavePlayer>(FObjectInitializer *param_1)

{
  USoundNode *this;
  
  this = (USoundNode *)param_1->Obj;
  if (this != (USoundNode *)0x0) {
    USoundNode::USoundNode(this,param_1);
    this->_padding_ = (longlong)&___7USoundNodeWavePlayer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].ChildNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ChildNodes.ArrayMax = 0;
  }
  return;
}

// InternalConstructor<USoundSourceBus> @ 1486893b0

void __cdecl InternalConstructor<USoundSourceBus>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USoundSourceBus *this;
  
  this = (USoundSourceBus *)param_1->Obj;
  if (this != (USoundSourceBus *)0x0) {
    USoundWave::USoundWave((USoundWave *)this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 | 4;
    this->_padding_ = (longlong)&USoundSourceBus::_vftable__for__UObject__;
    (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
    this->_padding_ =
         (longlong)&USoundSourceBus::_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
    this->_padding_ = (longlong)&USoundSourceBus::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&USoundSourceBus::_vftable__for__IAudioProxyDataFactory__;
    this->_padding_ = (longlong)&USoundSourceBus::_vftable__for__IInterface_AsyncCompilation__;
    USoundSourceBus::Init(this);
    return;
  }
  return;
}

// InternalConstructor<USoundSubmix> @ 148689430

void __cdecl InternalConstructor<USoundSubmix>(FObjectInitializer *param_1)

{
  USoundSubmixWithParentBase *this;
  
  this = (USoundSubmixWithParentBase *)param_1->Obj;
  if (this != (USoundSubmixWithParentBase *)0x0) {
    USoundSubmixWithParentBase::USoundSubmixWithParentBase(this,param_1);
    *(byte *)&this[1]._padding_ = (byte)this[1]._padding_ & 0xfe;
    this->_padding_ = (longlong)&___7USoundSubmix__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 10;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 500;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ParentSubmix.field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
    *(undefined8 *)&this[1].DynamicParentSubmix.field_0x10 = 0;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x18 = 0;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x1c = 0x80;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x20 = 0xffffffff;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x24 = 0;
    *(undefined8 *)&this[1].DynamicParentSubmix.field_0x30 = 0;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x38 = 0;
    *(undefined8 *)&this[1].DynamicParentSubmix.field_0x48 = 0;
    *(undefined8 *)&this[1].field_0xe8 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x40 = 0xc2c00000;
  }
  return;
}

// InternalConstructor<USoundSubmixBase> @ 148689590

void __cdecl InternalConstructor<USoundSubmixBase>(FObjectInitializer *param_1)

{
  if ((USoundSubmixBase *)param_1->Obj != (USoundSubmixBase *)0x0) {
    USoundSubmixBase::USoundSubmixBase((USoundSubmixBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<USoundSubmixWithParentBase> @ 1486895b0

void __cdecl InternalConstructor<USoundSubmixWithParentBase>(FObjectInitializer *param_1)

{
  if ((USoundSubmixWithParentBase *)param_1->Obj != (USoundSubmixWithParentBase *)0x0) {
    USoundSubmixWithParentBase::USoundSubmixWithParentBase
              ((USoundSubmixWithParentBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<USoundWave> @ 1486895d0

void __cdecl InternalConstructor<USoundWave>(FObjectInitializer *param_1)

{
  if ((USoundWave *)param_1->Obj != (USoundWave *)0x0) {
    USoundWave::USoundWave((USoundWave *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<USoundfieldEndpointSubmix> @ 1486895f0

void __cdecl InternalConstructor<USoundfieldEndpointSubmix>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x4 = 0x3c23d70a;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined ***)this = &___7USoundfieldEndpointSubmix__6B_;
    ISoundfieldEndpointFactory::DefaultSoundfieldEndpointName();
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<USoundfieldSubmix> @ 1486896b0

void __cdecl InternalConstructor<USoundfieldSubmix>(FObjectInitializer *param_1)

{
  USoundSubmixWithParentBase *this;
  
  this = (USoundSubmixWithParentBase *)param_1->Obj;
  if (this != (USoundSubmixWithParentBase *)0x0) {
    USoundSubmixWithParentBase::USoundSubmixWithParentBase(this,param_1);
    this->_padding_ = (longlong)&___7USoundfieldSubmix__6B_;
    ISoundfieldFactory::GetFormatNameForInheritedEncoding();
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UButtonStyleAsset> @ 148689710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UButtonStyleAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UButtonStyleAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UButtonStyleAsset__6B_;
    FButtonStyle::FButtonStyle((FButtonStyle *)&pUVar1[1].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCheckBoxStyleAsset> @ 1486897d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCheckBoxStyleAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCheckBoxStyleAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCheckBoxStyleAsset__6B_;
    FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&pUVar1[1].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEndpointSubmix> @ 148689890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEndpointSubmix>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEndpointSubmix::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3c23d70a;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UEndpointSubmix__6B_;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USkinnedAsset> @ 1486899a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USkinnedAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStreamableRenderAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USkinnedAsset::GetPrivateStaticClass();
  this = (UStreamableRenderAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStreamableRenderAsset *)0x0) {
    UStreamableRenderAsset::UStreamableRenderAsset(this,param_1);
    this->_padding_ = (longlong)&USkinnedAsset::_vftable__for__UStreamableRenderAsset__;
    this[1]._padding_ = (longlong)&USkinnedAsset::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USlateBrushAsset> @ 148689a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USlateBrushAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USlateBrushAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USlateBrushAsset__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)&pUVar1[1].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USlateTextureAtlasInterface> @ 148689b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USlateTextureAtlasInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USlateTextureAtlasInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USlateTextureAtlasInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundAttenuation> @ 148689bd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundAttenuation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundAttenuation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundAttenuation__6B_;
    FSoundAttenuationSettings::FSoundAttenuationSettings((FSoundAttenuationSettings *)(pUVar1 + 1));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundBase> @ 148689c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundBase::GetPrivateStaticClass();
  pUVar3 = (USoundBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (USoundBase *)0x0) {
    pUVar3 = USoundBase::USoundBase(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundClass> @ 148689d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &USoundClass::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &USoundClass::_vftable__for__IInterface_AssetUserData__;
    FSoundClassProperties::FSoundClassProperties((FSoundClassProperties *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundConcurrency> @ 148689e20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundConcurrency>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundConcurrency::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundConcurrency__6B_;
    pUVar1[1].field_0x4 = pUVar1[1].field_0x4 & 0xf8;
    *(undefined4 *)(pUVar1 + 1) = 0x10;
    pUVar1[1].field_0x5 = 3;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x10;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x3c23d70a;
    *(undefined8 *)&pUVar1[1].field_0x1c = 0x3f000000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundCue> @ 148689f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundCue>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundCue::GetPrivateStaticClass();
  this = (USoundBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundBase *)0x0) {
    USoundBase::USoundBase(this,param_1);
    this->_padding_ = (longlong)&USoundCue::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USoundCue::_vftable__for__IAudioPropertiesSheetAssetUserInterface__
    ;
    this->_padding_ = (longlong)&USoundCue::_vftable__for__IInterface_AssetUserData__;
    FSoundAttenuationSettings::FSoundAttenuationSettings
              ((FSoundAttenuationSettings *)&this[1]._padding_);
    *(undefined4 *)&this[3].ConcurrencyOverrides.field_0x4 = 0xffffffff;
    this[3].ConcurrencyOverrides.RetriggerTime = 0.0;
    this[3].ConcurrencyOverrides.PlatformMaxCount = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundEffectPreset> @ 148689ff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundEffectPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundEffectPreset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundEffectPreset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[1].field_0x10,4000);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundEffectSubmixPreset> @ 14868a0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundEffectSubmixPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundEffectSubmixPreset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundEffectPreset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[1].field_0x10,4000);
    *(undefined ***)pUVar1 = &___7USoundEffectSubmixPreset__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundGroups> @ 14868a190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundGroups>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundGroups::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundGroups__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundMix> @ 14868a270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundMix>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundMix::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundMix__6B_;
    *(undefined ***)&pUVar1[1].field_0x8 = &___7FAudioEQEffect__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x44160000;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x24 = 0x447a0000;
    *(undefined4 *)(pUVar1 + 2) = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0x44fa0000;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x461c4000;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x3f800000;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNode> @ 14868a390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundNode__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeAssetReferencer> @ 14868a450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeAssetReferencer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeAssetReferencer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeAssetReferencer__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeAttenuation> @ 14868a510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeAttenuation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeAttenuation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeAttenuation__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    FSoundAttenuationSettings::FSoundAttenuationSettings((FSoundAttenuationSettings *)(pUVar1 + 2));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeBranch> @ 14868a5e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeBranch>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeBranch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeBranch__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeConcatenator> @ 14868a6a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeConcatenator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeConcatenator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeConcatenator__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeDelay> @ 14868a760

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeDelay>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeDelay::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeDelay__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeDialoguePlayer> @ 14868a820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeDialoguePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeDialoguePlayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeDialoguePlayer__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    FDialogueWaveParameter::FDialogueWaveParameter((FDialogueWaveParameter *)&pUVar1[1].field_0x20);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeDistanceCrossFade> @ 14868a8e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USoundNodeDistanceCrossFade>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeDistanceCrossFade::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeDistanceCrossFade__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeDoppler> @ 14868a9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeDoppler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeDoppler::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeDoppler__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeEnveloper> @ 14868aa60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeEnveloper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeEnveloper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeEnveloper__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&pUVar1[2].field_0x20);
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&pUVar1[6].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeGroupControl> @ 14868ab40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeGroupControl>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeGroupControl::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeGroupControl__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeLooping> @ 14868ac00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeLooping>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeLooping::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeLooping__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeMature> @ 14868acc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeMature>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeMature::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeMature__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeMixer> @ 14868ad80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeMixer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeMixer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeMixer__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeModulator> @ 14868ae40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeModulator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeModulator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeModulator__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeModulatorContinuous> @ 14868af00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USoundNodeModulatorContinuous>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeModulatorContinuous::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeModulatorContinuous__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0x3f800000;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0x3f800000;
    pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0x3f800000;
    *(undefined8 *)(pUVar1 + 3) = 0x3f800000;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0x3f800000;
    pUVar1[3].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeOscillator> @ 14868b000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeOscillator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeOscillator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeOscillator__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeParamCrossFade> @ 14868b0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeParamCrossFade>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeParamCrossFade::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeParamCrossFade__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeQualityLevel> @ 14868b190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeQualityLevel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeQualityLevel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeQualityLevel__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0xffffffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeRandom> @ 14868b250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeRandom>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeRandom::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeRandom__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeSoundClass> @ 14868b320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeSoundClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeSoundClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeSoundClass__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeSwitch> @ 14868b3e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeSwitch>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeSwitch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeSwitch__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeWaveParam> @ 14868b4a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeWaveParam>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeWaveParam::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeWaveParam__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundNodeWavePlayer> @ 14868b560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundNodeWavePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundNodeWavePlayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7USoundNodeWavePlayer__6B_;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[2].field_0x10,0);
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundSourceBus> @ 14868b640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundSourceBus>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundWave *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundSourceBus::GetPrivateStaticClass();
  this = (USoundWave *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundWave *)0x0) {
    USoundWave::USoundWave(this,param_1);
    this->_padding_ = (longlong)&USoundSourceBus::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USoundSourceBus::_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
    this->_padding_ = (longlong)&USoundSourceBus::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&USoundSourceBus::_vftable__for__IAudioProxyDataFactory__;
    this->_padding_ = (longlong)&USoundSourceBus::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundSubmix> @ 14868b730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundSubmix>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundSubmixWithParentBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundSubmix::GetPrivateStaticClass();
  this = (USoundSubmixWithParentBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundSubmixWithParentBase *)0x0) {
    USoundSubmixWithParentBase::USoundSubmixWithParentBase(this,param_1);
    this->_padding_ = (longlong)&___7USoundSubmix__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1].ParentSubmix.field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].DynamicParentSubmix.field_0x10 = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x18 = 0;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x1c = 0x80;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x20 = 0xffffffff;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x24 = 0;
    *(undefined8 *)&this[1].DynamicParentSubmix.field_0x30 = 0;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x38 = 0;
    *(undefined8 *)&this[1].DynamicParentSubmix.field_0x48 = 0;
    *(undefined8 *)&this[1].field_0xe8 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[1].DynamicParentSubmix.field_0x40 = 0x3f800000;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundSubmixBase> @ 14868b900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundSubmixBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundSubmixBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundSubmixBase::GetPrivateStaticClass();
  pUVar3 = (USoundSubmixBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (USoundSubmixBase *)0x0) {
    pUVar3 = USoundSubmixBase::USoundSubmixBase(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundSubmixWithParentBase> @ 14868b9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundSubmixWithParentBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundSubmixWithParentBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundSubmixWithParentBase::GetPrivateStaticClass();
  pUVar3 = (USoundSubmixWithParentBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (USoundSubmixWithParentBase *)0x0) {
    pUVar3 = USoundSubmixWithParentBase::USoundSubmixWithParentBase(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundWave> @ 14868ba40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundWave>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundWave *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundWave::GetPrivateStaticClass();
  pUVar3 = (USoundWave *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (USoundWave *)0x0) {
    pUVar3 = USoundWave::USoundWave(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundfieldEndpointSubmix> @ 14868bae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundfieldEndpointSubmix>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundfieldEndpointSubmix::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3c23d70a;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7USoundfieldEndpointSubmix__6B_;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundfieldSubmix> @ 14868bc00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundfieldSubmix>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundSubmixWithParentBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundfieldSubmix::GetPrivateStaticClass();
  this = (USoundSubmixWithParentBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundSubmixWithParentBase *)0x0) {
    USoundSubmixWithParentBase::USoundSubmixWithParentBase(this,param_1);
    this->_padding_ = (longlong)&___7USoundfieldSubmix__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FActiveSound_*,int,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,`FConcurrencyGroup::CullSoundsDueToMaxConcurrency'::__l2::FCompareActiveSounds>_> @ 14868bcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FActiveSound_*,int,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::CullSoundsDueToMaxConcurrency_::__l2::FCompareActiveSounds>_>
          (FActiveSound **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::CullSoundsDueToMaxConcurrency(void)_::_2_::FCompareActiveSounds>
          param_4)

{
  FActiveSound *pFVar1;
  FActiveSound *pFVar2;
  code *pcVar3;
  FActiveSound **ppFVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FActiveSound **ppFVar9;
  FActiveSound **ppFVar10;
  FActiveSound **ppFVar11;
  longlong lVar12;
  FCompareActiveSounds *pFVar13;
  FActiveSound **ppFVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_3f8 [32];
  FIdentityFunctor local_3c0 [8];
  TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::CullSoundsDueToMaxConcurrency(void)_::_2_::FCompareActiveSounds>
  local_3b8;
  Type local_3b0;
  FActiveSound **local_3a8;
  TReversePredicate<TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::CullSoundsDueToMaxConcurrency(void)_::_2_::FCompareActiveSounds>_>
  local_3a0 [3];
  Type local_388;
  Type TStack_384;
  FActiveSound **local_378;
  FActiveSound **local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  if (param_2 < 2) {
    return;
  }
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_370 = param_1 + (longlong)param_2 + -1;
  local_378 = param_1;
  fVar15 = logf((float)param_2 * (float)param_2);
  local_368 = (undefined4)(longlong)fVar15;
  memset(local_360,0,0x2e8);
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar15 = __real_38d1b717;
  pFVar13 = (FCompareActiveSounds *)&local_378;
LAB_14868bda0:
  local_3b0 = pFVar13[4].ResolutionRule;
  TStack_384 = pFVar13[5].ResolutionRule;
  iVar8 = (int)((longlong)*(FActiveSound ***)(pFVar13 + 2) - (longlong)*(FActiveSound ***)pFVar13 >>
               3);
  ppFVar9 = *(FActiveSound ***)(pFVar13 + 2);
  ppFVar4 = *(FActiveSound ***)pFVar13;
  local_3b8.Predicate = pFVar13;
  local_388 = local_3b0;
  while (iVar7 = iVar8 + 1, local_3a8 = ppFVar9, local_3b0 != PreventNew) {
    if (iVar7 < 9) goto joined_r0x00014868c090;
    if (iVar7 < 0) {
      iVar7 = iVar8 + 2;
    }
    ppFVar10 = ppFVar9 + 1;
    pFVar1 = ppFVar4[iVar7 >> 1];
    ppFVar4[iVar7 >> 1] = *ppFVar4;
    *ppFVar4 = pFVar1;
    ppFVar14 = ppFVar4;
LAB_14868be10:
    do {
      ppFVar14 = ppFVar14 + 1;
      if (ppFVar9 < ppFVar14) break;
      pFVar1 = *ppFVar14;
      pFVar2 = *ppFVar4;
      switch((param_4.Predicate)->ResolutionRule) {
      default:
        goto switchD_14868be3a_caseD_0;
      case StopLowestPriority:
      case StopLowestPriorityThenPreventNew:
        fVar16 = FActiveSound::GetConcurrencyPriority(pFVar2);
        fVar17 = FActiveSound::GetConcurrencyPriority(pFVar1);
        if ((float)((uint)(fVar16 - fVar17) & uVar5) <= fVar15) {
          if ((param_4.Predicate)->ResolutionRule == StopLowestPriorityThenPreventNew) {
            bVar6 = pFVar1->PlayOrder < pFVar2->PlayOrder;
          }
          else {
            bVar6 = pFVar2->PlayOrder < pFVar1->PlayOrder;
          }
        }
        else {
          bVar6 = fVar16 < fVar17;
        }
        break;
      case StopQuietest:
        if (fVar15 < (float)((uint)(pFVar2->VolumeConcurrency - pFVar1->VolumeConcurrency) & uVar5))
        {
          bVar6 = pFVar2->VolumeConcurrency < pFVar1->VolumeConcurrency;
        }
        else {
          bVar6 = pFVar1->PlayOrder < pFVar2->PlayOrder;
        }
      }
    } while (!bVar6);
switchD_14868be3a_caseD_0:
    do {
      ppFVar11 = ppFVar10;
      ppFVar10 = ppFVar11 + -1;
      if (ppFVar10 <= ppFVar4) break;
      pFVar1 = *ppFVar4;
      pFVar2 = *ppFVar10;
      switch((param_4.Predicate)->ResolutionRule) {
      default:
        goto switchD_14868beed_caseD_0;
      case StopLowestPriority:
      case StopLowestPriorityThenPreventNew:
        fVar16 = FActiveSound::GetConcurrencyPriority(pFVar2);
        fVar17 = FActiveSound::GetConcurrencyPriority(pFVar1);
        if ((float)((uint)(fVar16 - fVar17) & uVar5) <= fVar15) {
          if ((param_4.Predicate)->ResolutionRule == StopLowestPriorityThenPreventNew) {
            bVar6 = pFVar1->PlayOrder < pFVar2->PlayOrder;
          }
          else {
            bVar6 = pFVar2->PlayOrder < pFVar1->PlayOrder;
          }
        }
        else {
          bVar6 = fVar16 < fVar17;
        }
        break;
      case StopQuietest:
        if (fVar15 < (float)((uint)(pFVar2->VolumeConcurrency - pFVar1->VolumeConcurrency) & uVar5))
        {
          bVar6 = pFVar2->VolumeConcurrency < pFVar1->VolumeConcurrency;
        }
        else {
          bVar6 = pFVar1->PlayOrder < pFVar2->PlayOrder;
        }
      }
    } while (!bVar6);
switchD_14868beed_caseD_0:
    if (ppFVar14 <= ppFVar10) {
      pFVar1 = *ppFVar14;
      *ppFVar14 = *ppFVar10;
      *ppFVar10 = pFVar1;
      goto LAB_14868be10;
    }
    pFVar1 = *ppFVar4;
    *ppFVar4 = *ppFVar10;
    local_3b0 = local_3b0 - StopOldest;
    *ppFVar10 = pFVar1;
    if ((longlong)((longlong)ppFVar10 + (-8 - (longlong)ppFVar4) & 0xfffffffffffffff8U) <
        (longlong)((longlong)ppFVar9 - (longlong)ppFVar14 & 0xfffffffffffffff8U)) {
      if (ppFVar14 < local_3a8) {
        *(FActiveSound ***)pFVar13 = ppFVar14;
        *(FActiveSound ***)(pFVar13 + 2) = local_3a8;
        pFVar13[4].ResolutionRule = local_3b0;
        pFVar13 = pFVar13 + 6;
        local_3b8.Predicate = pFVar13;
      }
      if (ppFVar10 <= ppFVar4 + 1) goto LAB_14868c204;
      local_3a8 = ppFVar11 + -2;
      ppFVar14 = ppFVar4;
    }
    else {
      if (ppFVar4 + 1 < ppFVar10) {
        *(FActiveSound ***)pFVar13 = ppFVar4;
        *(FActiveSound ***)(pFVar13 + 2) = ppFVar11 + -2;
        pFVar13[4].ResolutionRule = local_3b0;
        pFVar13 = pFVar13 + 6;
        local_3b8.Predicate = pFVar13;
      }
      if (local_3a8 <= ppFVar14) goto LAB_14868c204;
    }
    iVar8 = (int)((longlong)local_3a8 - (longlong)ppFVar14 >> 3);
    ppFVar9 = local_3a8;
    ppFVar4 = ppFVar14;
  }
  local_3c0[0] = param_3;
  local_3b8.Predicate = param_4.Predicate;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14868c195:
    local_3a0[0].Predicate = &local_3b8;
    HeapifyInternal<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::CullSoundsDueToMaxConcurrency_::__l2::FCompareActiveSounds>_>_>
              (ppFVar4,iVar7,param_3,&local_3b8);
    if (0 < iVar8) {
      lVar12 = (longlong)iVar8 * 8;
      do {
        pFVar1 = *ppFVar4;
        *ppFVar4 = *(FActiveSound **)(lVar12 + (longlong)ppFVar4);
        *(FActiveSound **)(lVar12 + (longlong)ppFVar4) = pFVar1;
        HeapSiftDown<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::CullSoundsDueToMaxConcurrency_::__l2::FCompareActiveSounds>_>_>
                  (ppFVar4,0,iVar8,local_3c0,local_3a0);
        iVar8 = iVar8 + -1;
        lVar12 = lVar12 + -8;
      } while (0 < iVar8);
    }
  }
  else if (iVar7 != 0) goto LAB_14868c195;
  goto LAB_14868c204;
joined_r0x00014868c090:
  for (; ppFVar14 = ppFVar4, ppFVar10 = ppFVar4, ppFVar4 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
    while (ppFVar11 = ppFVar14, ppFVar10 = ppFVar10 + 1, ppFVar10 <= ppFVar9) {
      pFVar1 = *ppFVar10;
      pFVar2 = *ppFVar11;
      switch((param_4.Predicate)->ResolutionRule) {
      default:
        bVar6 = true;
        break;
      case StopLowestPriority:
      case StopLowestPriorityThenPreventNew:
        fVar16 = FActiveSound::GetConcurrencyPriority(pFVar2);
        fVar17 = FActiveSound::GetConcurrencyPriority(pFVar1);
        if ((float)((uint)(fVar16 - fVar17) & uVar5) <= fVar15) {
          if ((param_4.Predicate)->ResolutionRule == StopLowestPriorityThenPreventNew) {
            bVar6 = pFVar1->PlayOrder < pFVar2->PlayOrder;
          }
          else {
            bVar6 = pFVar2->PlayOrder < pFVar1->PlayOrder;
          }
        }
        else {
          bVar6 = fVar16 < fVar17;
        }
        break;
      case StopQuietest:
        if (fVar15 < (float)((uint)(pFVar2->VolumeConcurrency - pFVar1->VolumeConcurrency) & uVar5))
        {
          bVar6 = pFVar2->VolumeConcurrency < pFVar1->VolumeConcurrency;
        }
        else {
          bVar6 = pFVar1->PlayOrder < pFVar2->PlayOrder;
        }
      }
      ppFVar14 = ppFVar10;
      if (!bVar6) {
        ppFVar14 = ppFVar11;
      }
    }
    pFVar1 = *ppFVar11;
    *ppFVar11 = *ppFVar9;
    *ppFVar9 = pFVar1;
    pFVar13 = local_3b8.Predicate;
  }
LAB_14868c204:
  pFVar13 = pFVar13 + -6;
  if (pFVar13 < (FCompareActiveSounds *)&local_378) {
    return;
  }
  goto LAB_14868bda0;
}

// IntroSortInternal<FActiveSound_*,int,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,`FConcurrencyGroup::UpdateGeneration'::__l2::FCompareActiveSounds>_> @ 14868c2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FActiveSound_*,int,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::UpdateGeneration_::__l2::FCompareActiveSounds>_>
          (FActiveSound **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::UpdateGeneration(FActiveSound_*)_::_2_::FCompareActiveSounds>
          param_4)

{
  FActiveSound *pFVar1;
  FActiveSound *pFVar2;
  code *pcVar3;
  FCompareActiveSounds *pFVar4;
  uint uVar5;
  longlong lVar6;
  TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::UpdateGeneration(FActiveSound_*)_::_2_::FCompareActiveSounds>
  TVar7;
  FCompareActiveSounds *pFVar8;
  FCompareActiveSounds *pFVar9;
  FCompareActiveSounds *pFVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_408 [32];
  FIdentityFunctor local_3d0 [8];
  FActiveSound ***local_3c8;
  TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::UpdateGeneration(FActiveSound_*)_::_2_::FCompareActiveSounds>
  local_3c0;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  int local_3a8;
  float local_3a4;
  float local_3a0 [2];
  TReversePredicate<TDereferenceWrapper<FActiveSound_*,_public:_void___cdecl_FConcurrencyGroup::UpdateGeneration(FActiveSound_*)_::_2_::FCompareActiveSounds>_>
  local_398 [3];
  int local_380;
  undefined4 uStack_37c;
  FActiveSound **local_378;
  FActiveSound **local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  if (param_2 < 2) {
    return;
  }
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_370 = param_1 + (longlong)param_2 + -1;
  local_378 = param_1;
  fVar15 = logf((float)param_2 * (float)param_2);
  local_368 = (undefined4)(longlong)fVar15;
  memset(local_360,0,0x2e8);
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar15 = __real_38d1b717;
  local_3c8 = &local_378;
LAB_14868c3b0:
  local_3a8 = *(int *)(local_3c8 + 2);
  uStack_37c = *(undefined4 *)((longlong)local_3c8 + 0x14);
  iVar12 = (int)((longlong)local_3c8[1] - (longlong)*local_3c8 >> 3);
  TVar7.Predicate = (FCompareActiveSounds *)local_3c8[1];
  pFVar4 = (FCompareActiveSounds *)*local_3c8;
  local_380 = local_3a8;
  while (iVar11 = iVar12 + 1, local_3a8 != 0) {
    if (iVar11 < 9) goto joined_r0x00014868c6de;
    if (iVar11 < 0) {
      iVar11 = iVar12 + 2;
    }
    pFVar8 = TVar7.Predicate + 2;
    pFVar1 = *(FActiveSound **)(pFVar4 + (longlong)(iVar11 >> 1) * 2);
    *(FActiveSound **)(pFVar4 + (longlong)(iVar11 >> 1) * 2) = *(FActiveSound **)pFVar4;
    *(FActiveSound **)pFVar4 = pFVar1;
    pFVar10 = pFVar4;
    local_3c0.Predicate = TVar7.Predicate;
LAB_14868c420:
    do {
      pFVar10 = pFVar10 + 2;
      if (TVar7.Predicate < pFVar10) break;
      pFVar1 = *(FActiveSound **)pFVar10;
      pFVar2 = *(FActiveSound **)pFVar4;
      if ((param_4.Predicate)->ScaleMode == Distance) {
        local_3b8 = 0.0;
        local_3b4 = 0.0;
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar2->AudioDevice,&pFVar2->LastLocation,&local_3b8);
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar1->AudioDevice,&pFVar1->LastLocation,&local_3b4);
        if (fVar15 < (float)((uint)(local_3b8 - local_3b4) & uVar5)) {
          bVar13 = local_3b8 == local_3b4;
          bVar14 = local_3b8 < local_3b4;
LAB_14868c4dd:
          bVar13 = !bVar14 && !bVar13;
        }
        else {
          bVar13 = pFVar2->PlayOrder < pFVar1->PlayOrder;
        }
      }
      else {
        if ((param_4.Predicate)->ScaleMode != Priority) break;
        fVar16 = FActiveSound::GetConcurrencyPriority(pFVar2);
        fVar17 = FActiveSound::GetConcurrencyPriority(pFVar1);
        if (fVar15 < (float)((uint)(fVar16 - fVar17) & uVar5)) {
          bVar13 = fVar17 == fVar16;
          bVar14 = fVar17 < fVar16;
          goto LAB_14868c4dd;
        }
        bVar13 = pFVar2->PlayOrder < pFVar1->PlayOrder;
      }
    } while (!bVar13);
    do {
      pFVar9 = pFVar8;
      pFVar8 = pFVar9 + -2;
      if (pFVar8 <= pFVar4) break;
      pFVar1 = *(FActiveSound **)pFVar4;
      pFVar2 = *(FActiveSound **)pFVar8;
      if ((param_4.Predicate)->ScaleMode == Distance) {
        local_3b0 = 0.0;
        local_3ac = 0.0;
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar2->AudioDevice,&pFVar2->LastLocation,&local_3b0);
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar1->AudioDevice,&pFVar1->LastLocation,&local_3ac);
        if (fVar15 < (float)((uint)(local_3b0 - local_3ac) & uVar5)) {
          bVar13 = local_3b0 == local_3ac;
          bVar14 = local_3b0 < local_3ac;
          goto LAB_14868c5ae;
        }
        bVar13 = pFVar2->PlayOrder < pFVar1->PlayOrder;
      }
      else {
        if ((param_4.Predicate)->ScaleMode != Priority) break;
        fVar16 = FActiveSound::GetConcurrencyPriority(pFVar2);
        fVar17 = FActiveSound::GetConcurrencyPriority(pFVar1);
        if (fVar15 < (float)((uint)(fVar16 - fVar17) & uVar5)) {
          bVar13 = fVar17 == fVar16;
          bVar14 = fVar17 < fVar16;
LAB_14868c5ae:
          bVar13 = !bVar14 && !bVar13;
        }
        else {
          bVar13 = pFVar2->PlayOrder < pFVar1->PlayOrder;
        }
      }
    } while (!bVar13);
    if (pFVar10 <= pFVar8) {
      pFVar1 = *(FActiveSound **)pFVar10;
      *(FActiveSound **)pFVar10 = *(FActiveSound **)pFVar8;
      *(FActiveSound **)pFVar8 = pFVar1;
      goto LAB_14868c420;
    }
    pFVar1 = *(FActiveSound **)pFVar4;
    local_3a8 = local_3a8 + -1;
    *(FActiveSound **)pFVar4 = *(FActiveSound **)pFVar8;
    *(FActiveSound **)pFVar8 = pFVar1;
    if ((longlong)((longlong)pFVar8 + (-8 - (longlong)pFVar4) & 0xfffffffffffffff8U) <
        (longlong)((longlong)TVar7.Predicate - (longlong)pFVar10 & 0xfffffffffffffff8U)) {
      if (pFVar10 < local_3c0.Predicate) {
        *local_3c8 = (FActiveSound **)pFVar10;
        local_3c8[1] = (FActiveSound **)local_3c0.Predicate;
        *(int *)(local_3c8 + 2) = local_3a8;
        local_3c8 = local_3c8 + 3;
      }
      if (pFVar8 <= pFVar4 + 2) goto LAB_14868c88d;
      local_3c0.Predicate = pFVar9 + -4;
      pFVar10 = pFVar4;
    }
    else {
      if (pFVar4 + 2 < pFVar8) {
        *local_3c8 = (FActiveSound **)pFVar4;
        local_3c8[1] = (FActiveSound **)(pFVar9 + -4);
        *(int *)(local_3c8 + 2) = local_3a8;
        local_3c8 = local_3c8 + 3;
      }
      if (local_3c0.Predicate <= pFVar10) goto LAB_14868c88d;
    }
    iVar12 = (int)((longlong)local_3c0.Predicate - (longlong)pFVar10 >> 3);
    TVar7.Predicate = local_3c0.Predicate;
    pFVar4 = pFVar10;
  }
  local_3d0[0] = param_3;
  local_3c0.Predicate = param_4.Predicate;
  if (iVar11 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14868c814:
    local_398[0].Predicate = &local_3c0;
    HeapifyInternal<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::UpdateGeneration_::__l2::FCompareActiveSounds>_>_>
              ((FActiveSound **)pFVar4,iVar11,param_3,&local_3c0);
    if (0 < iVar12) {
      lVar6 = (longlong)iVar12 * 8;
      do {
        pFVar1 = *(FActiveSound **)pFVar4;
        *(FActiveSound **)pFVar4 = *(FActiveSound **)((longlong)&pFVar4->ScaleMode + lVar6);
        *(FActiveSound **)((longlong)&pFVar4->ScaleMode + lVar6) = pFVar1;
        HeapSiftDown<FActiveSound_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::UpdateGeneration_::__l2::FCompareActiveSounds>_>_>
                  ((FActiveSound **)pFVar4,0,iVar12,local_3d0,local_398);
        iVar12 = iVar12 + -1;
        lVar6 = lVar6 + -8;
      } while (0 < iVar12);
    }
  }
  else if (iVar11 != 0) goto LAB_14868c814;
  goto LAB_14868c88d;
joined_r0x00014868c6de:
  while (local_3c0.Predicate = TVar7.Predicate, pFVar10 = pFVar4, pFVar8 = pFVar4,
        pFVar4 < TVar7.Predicate) {
    while (pFVar9 = pFVar10, pFVar8 = pFVar8 + 2, pFVar8 <= TVar7.Predicate) {
      pFVar1 = *(FActiveSound **)pFVar8;
      pFVar2 = *(FActiveSound **)pFVar9;
      if ((param_4.Predicate)->ScaleMode == Distance) {
        local_3a4 = 0.0;
        local_3a0[0] = 0.0;
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar2->AudioDevice,&pFVar2->LastLocation,&local_3a4);
        FAudioDevice::GetDistanceSquaredToNearestListener
                  (pFVar1->AudioDevice,&pFVar1->LastLocation,local_3a0);
        if (fVar15 < (float)((uint)(local_3a4 - local_3a0[0]) & uVar5)) {
          bVar13 = local_3a4 == local_3a0[0];
          bVar14 = local_3a4 < local_3a0[0];
LAB_14868c7c3:
          bVar13 = !bVar14 && !bVar13;
        }
        else {
          bVar13 = pFVar2->PlayOrder < pFVar1->PlayOrder;
        }
      }
      else if ((param_4.Predicate)->ScaleMode == Priority) {
        fVar16 = FActiveSound::GetConcurrencyPriority(pFVar2);
        fVar17 = FActiveSound::GetConcurrencyPriority(pFVar1);
        if (fVar15 < (float)((uint)(fVar16 - fVar17) & uVar5)) {
          bVar13 = fVar17 == fVar16;
          bVar14 = fVar17 < fVar16;
          goto LAB_14868c7c3;
        }
        bVar13 = pFVar2->PlayOrder < pFVar1->PlayOrder;
      }
      else {
        bVar13 = true;
      }
      pFVar10 = pFVar8;
      if (!bVar13) {
        pFVar10 = pFVar9;
      }
    }
    pFVar1 = *(FActiveSound **)pFVar9;
    *(FActiveSound **)pFVar9 = *(FActiveSound **)local_3c0.Predicate;
    *(FActiveSound **)local_3c0.Predicate = pFVar1;
    TVar7.Predicate = local_3c0.Predicate + -2;
  }
LAB_14868c88d:
  local_3c8 = local_3c8 + -3;
  if (local_3c8 < &local_378) {
    return;
  }
  goto LAB_14868c3b0;
}

// IsObjectPtrEqual<UGameViewportClient,FViewportClient_*,0> @ 14868c910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UGameViewportClient,FViewportClient_*,0>
          (TObjectPtr<UGameViewportClient> *param_1,FViewportClient **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UGameViewportClient *)0x0) {
    return *param_2 == (FViewportClient *)0x0;
  }
  return (FViewportClient *)&((param_1->field0_0x0).DebugPtr)->_padding_ == *param_2;
}

// IsObjectPtrEqual<USoundSubmixBase,USoundSubmixBase_*,0> @ 14868c940

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USoundSubmixBase,USoundSubmixBase_*,0>
          (TObjectPtr<USoundSubmixBase> *param_1,USoundSubmixBase **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (USoundSubmixBase *)0x0) {
    return *param_2 == (USoundSubmixBase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeRequiredArgs<ULocalPlayer_*_&> @ 14868cac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

T1RequiredArgs<ULocalPlayer_*_&> __cdecl
RequiredArgs::MakeRequiredArgs<ULocalPlayer_*_&>(ULocalPlayer **param_1)

{
  ULocalPlayer *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<ULocalPlayer_*_&>)param_1;
}

// MakeShared<`Audio::AttenuationInterface::GetInterface'::__l2::FInterface,1> @ 14868cad0

TSharedRef<,TSharedPtr<Audio::FParameterInterface,1>___cdecl_Audio::AttenuationInterface::GetInterface(void)_::_2_::FInterface,1>
* __cdecl MakeShared<_Audio::AttenuationInterface::GetInterface_::__l2::FInterface,1>
                    (TSharedRef<,TSharedPtr<Audio::FParameterInterface,1>___cdecl_Audio::AttenuationInterface::GetInterface(void)_::_2_::FInterface,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<,TSharedPtr<Audio::FParameterInterface,1>___cdecl_Audio::AttenuationInterface::GetInterface(void)_::_2_::FInterface,1>
  *pTVar4;
  int local_res8;
  int iStackX_c;
  initializer_list<Audio::FParameterInterface::FInput> local_108;
  FInput local_f8;
  
  pTVar3 = operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FInterface *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TIntrusiveReferenceController<`Audio::AttenuationInterface::GetInterface'::`2'::FInterface,1>
          ::_vftable_;
    local_res8 = 1;
    iStackX_c = 0;
    Audio::FParameterInterface::FParameterInterface
              ((FParameterInterface *)(pTVar3 + 1),Audio::AttenuationInterface::Name,
               (FVersion *)&stack0x00000008);
    FText::FText(&local_f8.DisplayName);
    FText::AsLocalizable_Advanced_LocText
              (&local_f8.Description,L"AudioGeneratorInterface_Attenuation",L"DistanceDescription",
               L"Distance between listener and sound location in game units.");
    local_f8.InitValue.ParamName = Audio::AttenuationInterface::Inputs::Distance;
    local_f8.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    local_f8.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.DataType.ComparisonIndex.Value = 0;
    local_f8.DataType.Number = 0;
    local_f8.InitValue.FloatParam = 0.0;
    local_f8.InitValue.BoolParam = false;
    local_f8.InitValue.IntParam = 0;
    local_f8.InitValue.StringParam.Data.ArrayNum = 0;
    local_f8.InitValue.StringParam.Data.ArrayMax = 0;
    local_f8.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.InitValue.ArrayFloatParam.ArrayNum = 0;
    local_f8.InitValue.ArrayFloatParam.ArrayMax = 0;
    local_f8.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.InitValue.ArrayBoolParam.ArrayNum = 0;
    local_f8.InitValue.ArrayBoolParam.ArrayMax = 0;
    local_f8.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.InitValue.ArrayIntParam.ArrayNum = 0;
    local_f8.InitValue.ArrayIntParam.ArrayMax = 0;
    local_f8.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.InitValue.ArrayObjectParam.ArrayNum = 0;
    local_f8.InitValue.ArrayObjectParam.ArrayMax = 0;
    local_f8.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.InitValue.ArrayStringParam.ArrayNum = 0;
    local_f8.InitValue.ArrayStringParam.ArrayMax = 0;
    local_f8.InitValue.ParamType = Float;
    local_f8.InitValue.TypeName.ComparisonIndex.Value = 0;
    local_f8.InitValue.TypeName.Number = 0;
    local_f8.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.InitValue.ObjectProxies.ArrayNum = 0;
    local_f8.InitValue.ObjectProxies.ArrayMax = 0;
    FText::FText(&local_f8.RequiredText);
    local_108._First = &local_f8;
    local_f8.SortOrderIndex = 0;
    local_108._Last = (FInput *)&stack0xffffffffffffffe8;
    TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
               (pTVar3 + 2),&local_108);
    if (local_f8.RequiredText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.RequiredText.TextData.Reference + 0x10))();
    }
    FAudioParameter::~FAudioParameter(&local_f8.InitValue);
    if (local_f8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.Description.TextData.Reference + 0x10))();
    }
    if (local_f8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.DisplayName.TextData.Reference + 0x10))();
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FInterface *)(pTVar3 + 1);
    if ((FInterface *)(pTVar3 + 1) == (FInterface *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<,TSharedPtr<Audio::FParameterInterface,1>___cdecl_Audio::AttenuationInterface::GetInterface(void)_::_2_::FInterface,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<Audio::FModulationDestination::FModulationDestinationData,1> @ 14868cca0

TSharedRef<Audio::FModulationDestination::FModulationDestinationData,1> * __cdecl
MakeShared<Audio::FModulationDestination::FModulationDestinationData,1>
          (TSharedRef<Audio::FModulationDestination::FModulationDestinationData,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Audio::FModulationDestination::FModulationDestinationData,1> *pTVar4;
  
  pTVar3 = operator_new(0x160);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FModulationDestinationData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFModulationDestinationData_FModulationDestination_Audio___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar3[1].SharedReferenceCount.field_0x3 = 0;
    pTVar3[1].WeakReferenceCount.field_0x3 = 0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    memset(&pTVar3[7].WeakReferenceCount,0,0xe4);
    *(undefined4 *)&pTVar3[1]._padding_ = 0xffffffff;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[1]._padding_ + 4) = 0x3f800000;
    *(undefined2 *)&pTVar3[1].SharedReferenceCount = 0;
    pTVar3[1].SharedReferenceCount.field_0x2 = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[6]._padding_ + 4) = 0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    Audio::FModulationParameter::FModulationParameter((FModulationParameter *)(pTVar3 + 8));
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 0x13),4000);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FModulationDestinationData *)(pTVar3 + 1);
    if ((FModulationDestinationData *)(pTVar3 + 1) == (FModulationDestinationData *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Audio::FModulationDestination::FModulationDestinationData,1> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FSoundWaveData,1> @ 14868cdd0

TSharedRef<FSoundWaveData,1> * __cdecl
MakeShared<FSoundWaveData,1>(TSharedRef<FSoundWaveData,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSoundWaveData,1> *pTVar5;
  
  pTVar4 = operator_new(0xf8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSoundWaveData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFSoundWaveData___00_SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    FStreamedAudioPlatformData::FStreamedAudioPlatformData
              ((FStreamedAudioPlatformData *)(pTVar4 + 2));
    FAudioChunkHandle::FAudioChunkHandle((FAudioChunkHandle *)&pTVar4[3].SharedReferenceCount);
    pTVar4[6]._padding_ = 0;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[7]._padding_ = 0;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 0;
    *(undefined1 *)&pTVar4[8].SharedReferenceCount = 0xff;
    *(undefined8 *)&pTVar4[8].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[9]._padding_ + 4) = 0;
    FName::FName((FName *)&pTVar4[9].WeakReferenceCount,"FSoundWaveProxy_InvalidFormat");
    pbVar1 = (byte *)((longlong)&pTVar4[0xf]._padding_ + 4);
    *pbVar1 = *pbVar1 & 0x80;
    *(undefined8 *)((longlong)&pTVar4[10]._padding_ + 4) = 0;
    pTVar4[0xb]._padding_ = 0;
    pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xc]._padding_ = 0;
    pTVar4[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar4[0xd]._padding_ = 0;
    *(undefined8 *)((longlong)&pTVar4[0xd]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[0xd].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[0xe]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[0xe].WeakReferenceCount = 0;
    __return_storage_ptr__->Object = (FSoundWaveData *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if ((FSoundWaveData *)(pTVar4 + 1) == (FSoundWaveData *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FSoundWaveData,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SCanvas,RequiredArgs::T0RequiredArgs> @ 14868cf30

TSlateDecl<SCanvas,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SCanvas,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCanvas,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SCanvas,RequiredArgs::T0RequiredArgs>::TSlateDecl<SCanvas,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs> @ 14868cfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSlateDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDebugCanvas,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_> @ 14868d090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSlateDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_> * __cdecl
MakeTDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_>
          (TSlateDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<ULocalPlayer_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_>::
  TSlateDecl<SPlayerLayer,RequiredArgs::T1RequiredArgs<ULocalPlayer_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NoneOf<TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>,`Audio::FModulationDestination::IsActive'::__l2::<lambda_1>_> @ 14868d140

bool __cdecl
Algo::
NoneOf<TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>,_Audio::FModulationDestination::IsActive_::__l2::<lambda_1>_>
          (TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14868d1dd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14868d1dd:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14868d2e0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14868d2e0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    bVar5 = Audio::FModulatorHandle::IsValid
                      ((FModulatorHandle *)
                       ((longlong)TStack_50.CurrentBitIndex * 0xe0 + *(longlong *)&param_1->Elements
                       ));
    if (bVar5) {
      return false;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return true;
}

// StaticEnum<enum_EAirAbsorptionMethod> @ 14868f220

UEnum * __cdecl StaticEnum<enum_EAirAbsorptionMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAirAbsorptionMethod,(UObject *)pUVar1,
                       L"EAirAbsorptionMethod");
  }
  return Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton;
}

// StaticEnum<enum_EAudioRecordingExportType> @ 14868f260

UEnum * __cdecl StaticEnum<enum_EAudioRecordingExportType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAudioRecordingExportType,(UObject *)pUVar1,
                       L"EAudioRecordingExportType");
  }
  return Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrumBandPresetType> @ 14868f2a0

UEnum * __cdecl StaticEnum<enum_EAudioSpectrumBandPresetType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType,(UObject *)pUVar1,
                       L"EAudioSpectrumBandPresetType");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrumType> @ 14868f2e0

UEnum * __cdecl StaticEnum<enum_EAudioSpectrumType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumType,(UObject *)pUVar1,
                       L"EAudioSpectrumType");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton;
}

// StaticEnum<enum_EConcurrencyVolumeScaleMode> @ 14868f320

UEnum * __cdecl StaticEnum<enum_EConcurrencyVolumeScaleMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EConcurrencyVolumeScaleMode,(UObject *)pUVar1,
                       L"EConcurrencyVolumeScaleMode");
  }
  return Z_Registration_Info_UEnum_EConcurrencyVolumeScaleMode.OuterSingleton;
}

// StaticEnum<enum_EDecompressionType> @ 14868f360

UEnum * __cdecl StaticEnum<enum_EDecompressionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDecompressionType,(UObject *)pUVar1,
                       L"EDecompressionType");
  }
  return Z_Registration_Info_UEnum_EDecompressionType.OuterSingleton;
}

// StaticEnum<enum_EFFTPeakInterpolationMethod> @ 14868f3a0

UEnum * __cdecl StaticEnum<enum_EFFTPeakInterpolationMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod,(UObject *)pUVar1,
                       L"EFFTPeakInterpolationMethod");
  }
  return Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton;
}

// StaticEnum<enum_EFFTSize> @ 14868f3e0

UEnum * __cdecl StaticEnum<enum_EFFTSize>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFFTSize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EFFTSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EFFTSize,(UObject *)pUVar1,L"EFFTSize");
  }
  return Z_Registration_Info_UEnum_EFFTSize.OuterSingleton;
}

// StaticEnum<enum_EFFTWindowType> @ 14868f420

UEnum * __cdecl StaticEnum<enum_EFFTWindowType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EFFTWindowType,(UObject *)pUVar1,L"EFFTWindowType");
  }
  return Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton;
}

// StaticEnum<enum_EGainParamMode> @ 14868f460

UEnum * __cdecl StaticEnum<enum_EGainParamMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EGainParamMode,(UObject *)pUVar1,L"EGainParamMode");
  }
  return Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton;
}

// StaticEnum<enum_EModulationDestination> @ 14868f4a0

UEnum * __cdecl StaticEnum<enum_EModulationDestination>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EModulationDestination,(UObject *)pUVar1,
                       L"EModulationDestination");
  }
  return Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton;
}

// StaticEnum<enum_EModulationRouting> @ 14868f4e0

UEnum * __cdecl StaticEnum<enum_EModulationRouting>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EModulationRouting,(UObject *)pUVar1,
                       L"EModulationRouting");
  }
  return Z_Registration_Info_UEnum_EModulationRouting.OuterSingleton;
}

// StaticEnum<enum_ENonSpatializedRadiusSpeakerMapMode> @ 14868f520

UEnum * __cdecl StaticEnum<enum_ENonSpatializedRadiusSpeakerMapMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode,
                       (UObject *)pUVar1,L"ENonSpatializedRadiusSpeakerMapMode");
  }
  return Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton;
}

// StaticEnum<enum_EPriorityAttenuationMethod> @ 14868f560

UEnum * __cdecl StaticEnum<enum_EPriorityAttenuationMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod,(UObject *)pUVar1,
                       L"EPriorityAttenuationMethod");
  }
  return Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton;
}

// StaticEnum<enum_EReverbSendMethod> @ 14868f5a0

UEnum * __cdecl StaticEnum<enum_EReverbSendMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EReverbSendMethod,(UObject *)pUVar1,
                       L"EReverbSendMethod");
  }
  return Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton;
}

// StaticEnum<enum_ESendLevelControlMethod> @ 14868f5e0

UEnum * __cdecl StaticEnum<enum_ESendLevelControlMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESendLevelControlMethod,(UObject *)pUVar1,
                       L"ESendLevelControlMethod");
  }
  return Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton;
}

// StaticEnum<enum_ESkinCacheDefaultBehavior> @ 14868f620

UEnum * __cdecl StaticEnum<enum_ESkinCacheDefaultBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior,(UObject *)pUVar1,
                       L"ESkinCacheDefaultBehavior");
  }
  return Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton;
}

// StaticEnum<enum_ESkinCacheUsage> @ 14868f660

UEnum * __cdecl StaticEnum<enum_ESkinCacheUsage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESkinCacheUsage,(UObject *)pUVar1,L"ESkinCacheUsage"
                      );
  }
  return Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton;
}

// StaticEnum<enum_ESoundAssetCompressionType> @ 14868f6a0

UEnum * __cdecl StaticEnum<enum_ESoundAssetCompressionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundAssetCompressionType,(UObject *)pUVar1,
                       L"ESoundAssetCompressionType");
  }
  return Z_Registration_Info_UEnum_ESoundAssetCompressionType.OuterSingleton;
}

// StaticEnum<enum_ESoundDistanceCalc> @ 14868f6e0

UEnum * __cdecl StaticEnum<enum_ESoundDistanceCalc>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundDistanceCalc,(UObject *)pUVar1,
                       L"ESoundDistanceCalc");
  }
  return Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton;
}

// StaticEnum<enum_ESoundGroup> @ 14868f720

UEnum * __cdecl StaticEnum<enum_ESoundGroup>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundGroup,(UObject *)pUVar1,L"ESoundGroup");
  }
  return Z_Registration_Info_UEnum_ESoundGroup.OuterSingleton;
}

// StaticEnum<enum_ESoundSpatializationAlgorithm> @ 14868f760

UEnum * __cdecl StaticEnum<enum_ESoundSpatializationAlgorithm>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm,(UObject *)pUVar1,
                       L"ESoundSpatializationAlgorithm");
  }
  return Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton;
}

// StaticEnum<enum_ESoundWaveCuePointOrigin> @ 14868f7a0

UEnum * __cdecl StaticEnum<enum_ESoundWaveCuePointOrigin>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveCuePointOrigin,(UObject *)pUVar1,
                       L"ESoundWaveCuePointOrigin");
  }
  return Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.OuterSingleton;
}

// StaticEnum<enum_ESoundWaveFFTSize> @ 14868f7e0

UEnum * __cdecl StaticEnum<enum_ESoundWaveFFTSize>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveFFTSize,(UObject *)pUVar1,
                       L"ESoundWaveFFTSize");
  }
  return Z_Registration_Info_UEnum_ESoundWaveFFTSize.OuterSingleton;
}

// StaticEnum<enum_ESourceBusChannels> @ 14868f820

UEnum * __cdecl StaticEnum<enum_ESourceBusChannels>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusChannels,(UObject *)pUVar1,
                       L"ESourceBusChannels");
  }
  return Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton;
}

// StaticEnum<enum_ESubmixSendStage> @ 14868f860

UEnum * __cdecl StaticEnum<enum_ESubmixSendStage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESubmixSendStage,(UObject *)pUVar1,
                       L"ESubmixSendStage");
  }
  return Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton;
}

// StaticEnum<enum_EUseSubmixOnPreviewMode> @ 14868f8a0

UEnum * __cdecl StaticEnum<enum_EUseSubmixOnPreviewMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EUseSubmixOnPreviewMode,(UObject *)pUVar1,
                       L"EUseSubmixOnPreviewMode");
  }
  return Z_Registration_Info_UEnum_EUseSubmixOnPreviewMode.OuterSingleton;
}

// StaticEnum<enum_EVirtualizationMode> @ 14868f8e0

UEnum * __cdecl StaticEnum<enum_EVirtualizationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVirtualizationMode,(UObject *)pUVar1,
                       L"EVirtualizationMode");
  }
  return Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton;
}

// StaticEnum<enum_EWindowTitleBarMode> @ 14868f920

UEnum * __cdecl StaticEnum<enum_EWindowTitleBarMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWindowTitleBarMode,(UObject *)pUVar1,
                       L"EWindowTitleBarMode");
  }
  return Z_Registration_Info_UEnum_EWindowTitleBarMode.OuterSingleton;
}

// StaticEnum<enum_ModulationParamMode> @ 14868f960

UEnum * __cdecl StaticEnum<enum_ModulationParamMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ModulationParamMode,(UObject *)pUVar1,
                       L"ModulationParamMode");
  }
  return Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton;
}

// StaticEnum<enum_EMaxConcurrentResolutionRule::Type> @ 14868f9a0

UEnum * __cdecl StaticEnum<enum_EMaxConcurrentResolutionRule::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule,(UObject *)pUVar1,
                       L"EMaxConcurrentResolutionRule");
  }
  return Z_Registration_Info_UEnum_EMaxConcurrentResolutionRule.OuterSingleton;
}

// TransformIf<TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,`Audio::FModulationDestination::UpdateModulators'::__l2::<lambda_1>,`Audio::FModulationDestination::UpdateModulators'::__l2::<lambda_2>_> @ 14868f9e0

void __cdecl
Algo::
TransformIf<TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_1>,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_2>_>
          (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
           *param_1,
          TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_1> param_3,<lambda_2> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined8 local_98;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_88 = 0;
  local_70 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14868fa8e;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_60 = (int)lVar10;
    iStack_74 = local_60 + -1 + local_70;
    if (iVar9 < iStack_74) {
      iStack_74 = iVar9;
    }
  }
LAB_14868fa8e:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_68 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_78 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_50.CurrentBitIndex = iStack_74;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iStack_74;
  TStack_50.BaseBitIndex = local_70;
  uStack_30 = CONCAT44(uStack_64,iStack_68);
  local_90 = param_1;
  local_80 = puVar1;
  iStack_6c = iStack_74;
  local_58 = param_1;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14868fb91;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_5c = (int)lVar10;
    uVar11 = local_5c + -1 + uVar15;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14868fb91:
  while( true ) {
    pTVar7 = local_58;
    if (*(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34 !=
        (int)uStack_30) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<USoundModulatorBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_50.CurrentBitIndex == uVar11) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    plVar4 = *(longlong **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b8))(plVar4,&local_98);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar5 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_98;
      local_98 = 0;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// TransformIf<TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,`Audio::FModulationDestination::UpdateModulators'::__l2::<lambda_1>,`Audio::FModulationDestination::UpdateModulators'::__l2::<lambda_2>_> @ 14868fcc0

void __cdecl
Algo::
TransformIf<TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_1>,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_2>_>
          (TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
           *param_1,
          TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_1> param_3,<lambda_2> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined8 local_98;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_88 = 0;
  local_70 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14868fd6e;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_60 = (int)lVar10;
    iStack_74 = local_60 + -1 + local_70;
    if (iVar9 < iStack_74) {
      iStack_74 = iVar9;
    }
  }
LAB_14868fd6e:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_68 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_78 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_50.CurrentBitIndex = iStack_74;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iStack_74;
  TStack_50.BaseBitIndex = local_70;
  uStack_30 = CONCAT44(uStack_64,iStack_68);
  local_90 = param_1;
  local_80 = puVar1;
  iStack_6c = iStack_74;
  local_58 = param_1;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14868fe71;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_5c = (int)lVar10;
    uVar11 = local_5c + -1 + uVar15;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14868fe71:
  while( true ) {
    pTVar7 = local_58;
    if (*(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34 !=
        (int)uStack_30) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_50.CurrentBitIndex == uVar11) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    plVar4 = *(longlong **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b8))(plVar4,&local_98);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar5 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_98;
      local_98 = 0;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// TransformIf<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,`Audio::FModulationDestination::UpdateModulators'::__l2::<lambda_1>,`Audio::FModulationDestination::UpdateModulators'::__l2::<lambda_2>_> @ 14868ffa0

void __cdecl
Algo::
TransformIf<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_1>,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_2>_>
          (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
           *param_1,
          TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_1> param_3,<lambda_2> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined8 local_98;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_88 = 0;
  local_70 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14869004e;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_60 = (int)lVar10;
    iStack_74 = local_60 + -1 + local_70;
    if (iVar9 < iStack_74) {
      iStack_74 = iVar9;
    }
  }
LAB_14869004e:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_68 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_78 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_50.CurrentBitIndex = iStack_74;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iStack_74;
  TStack_50.BaseBitIndex = local_70;
  uStack_30 = CONCAT44(uStack_64,iStack_68);
  local_90 = param_1;
  local_80 = puVar1;
  iStack_6c = iStack_74;
  local_58 = param_1;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148690151;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_5c = (int)lVar10;
    uVar11 = local_5c + -1 + uVar15;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_148690151:
  while( true ) {
    pTVar7 = local_58;
    if (*(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34 !=
        (int)uStack_30) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_50.CurrentBitIndex == uVar11) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    plVar4 = *(longlong **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b8))(plVar4,&local_98);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar5 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_98;
      local_98 = 0;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// WriteToString<64,FName_&> @ 148690480

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,FName_&>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToString<64,FName_const_&> @ 1486904c0

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,FName_const_&>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _Pop_heap_hole_by_index<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled_*,FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled,`FSkeletalMeshUpdatePacketNanite::ProcessStage_SkinCache'::__l15::<lambda_1>_> @ 148690500

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
std::
_Pop_heap_hole_by_index<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled_*,FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled,_FSkeletalMeshUpdatePacketNanite::ProcessStage_SkinCache_::__l15::<lambda_1>_>
          (FSkinCacheEntryThrottled *param_1,long64 param_2,long64 param_3,
          FSkinCacheEntryThrottled *param_4,<lambda_1> param_5)

{
  FSkinCacheEntryThrottled *pFVar1;
  FSkinCacheEntryThrottled *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_3 + -1 >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar7) {
    lVar6 = (2 - (ulonglong)
                 (param_1[lVar3 * 2 + 1].BoneFrameDelta < param_1[lVar3 * 2 + 2].BoneFrameDelta)) +
            lVar3 * 2;
    pFVar1 = param_1 + lVar6;
    uVar4 = pFVar1->BoneFrameDelta;
    uVar5 = pFVar1->BoneFrameNumber;
    pFVar2 = param_1 + lVar3;
    pFVar2->MeshObject = pFVar1->MeshObject;
    pFVar2->BoneFrameDelta = uVar4;
    pFVar2->BoneFrameNumber = uVar5;
    lVar3 = lVar6;
  }
  if ((lVar3 == lVar7) && ((param_3 & 1U) == 0)) {
    pFVar2 = param_1 + param_3 + -1;
    uVar4 = pFVar2->BoneFrameDelta;
    uVar5 = pFVar2->BoneFrameNumber;
    pFVar1 = param_1 + lVar3;
    pFVar1->MeshObject = pFVar2->MeshObject;
    pFVar1->BoneFrameDelta = uVar4;
    pFVar1->BoneFrameNumber = uVar5;
    lVar3 = param_3 + -1;
  }
  while ((param_2 < lVar3 &&
         (lVar7 = lVar3 + -1 >> 1, param_4->BoneFrameDelta < param_1[lVar7].BoneFrameDelta))) {
    pFVar1 = param_1 + lVar7;
    uVar4 = pFVar1->BoneFrameDelta;
    uVar5 = pFVar1->BoneFrameNumber;
    pFVar2 = param_1 + lVar3;
    pFVar2->MeshObject = pFVar1->MeshObject;
    pFVar2->BoneFrameDelta = uVar4;
    pFVar2->BoneFrameNumber = uVar5;
    lVar3 = lVar7;
  }
  uVar4 = param_4->BoneFrameDelta;
  uVar5 = param_4->BoneFrameNumber;
  pFVar1 = param_1 + lVar3;
  pFVar1->MeshObject = param_4->MeshObject;
  pFVar1->BoneFrameDelta = uVar4;
  pFVar1->BoneFrameNumber = uVar5;
  return;
}

// partial_sort<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled_*,`FSkeletalMeshUpdatePacketNanite::ProcessStage_SkinCache'::__l15::<lambda_1>_> @ 1486905e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
std::
partial_sort<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled_*,_FSkeletalMeshUpdatePacketNanite::ProcessStage_SkinCache_::__l15::<lambda_1>_>
          (FSkinCacheEntryThrottled *param_1,FSkinCacheEntryThrottled *param_2,
          FSkinCacheEntryThrottled *param_3,<lambda_1> param_4)

{
  longlong lVar1;
  FSkinCacheEntryThrottled *pFVar2;
  FSkinCacheEntryThrottled *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  FSkinCacheEntryThrottled *pFVar13;
  longlong lVar14;
  longlong lVar15;
  FSkinCacheEntryThrottled *pFVar16;
  <lambda_1> local_res8;
  FSkinCacheEntryThrottled local_28;
  
  if (param_1 != param_2) {
    uVar12 = (longlong)param_2 - (longlong)param_1 >> 4;
    lVar14 = (longlong)param_2 - (longlong)param_1 >> 5;
    pFVar13 = param_2;
    if (0 < lVar14) {
      lVar15 = (longlong)(uVar12 - 1) >> 1;
      pFVar16 = param_1 + lVar14;
      do {
        uVar4 = *(undefined4 *)&pFVar16[-1].MeshObject;
        uVar5 = *(undefined4 *)((longlong)&pFVar16[-1].MeshObject + 4);
        uVar6 = pFVar16[-1].BoneFrameDelta;
        uVar7 = pFVar16[-1].BoneFrameNumber;
        lVar14 = lVar14 + -1;
        pFVar16 = pFVar16 + -1;
        lVar1 = lVar14;
        while (lVar1 < lVar15) {
          lVar11 = (2 - (ulonglong)
                        (param_1[lVar1 * 2 + 1].BoneFrameDelta <
                        param_1[lVar1 * 2 + 2].BoneFrameDelta)) + lVar1 * 2;
          pFVar2 = param_1 + lVar11;
          uVar8 = *(undefined4 *)((longlong)&pFVar2->MeshObject + 4);
          uVar9 = pFVar2->BoneFrameDelta;
          uVar10 = pFVar2->BoneFrameNumber;
          pFVar3 = param_1 + lVar1;
          *(undefined4 *)&pFVar3->MeshObject = *(undefined4 *)&pFVar2->MeshObject;
          *(undefined4 *)((longlong)&pFVar3->MeshObject + 4) = uVar8;
          pFVar3->BoneFrameDelta = uVar9;
          pFVar3->BoneFrameNumber = uVar10;
          lVar1 = lVar11;
        }
        if ((lVar1 == lVar15) && ((uVar12 & 1) == 0)) {
          pFVar3 = param_1 + (uVar12 - 1);
          uVar8 = *(undefined4 *)((longlong)&pFVar3->MeshObject + 4);
          uVar9 = pFVar3->BoneFrameDelta;
          uVar10 = pFVar3->BoneFrameNumber;
          pFVar2 = param_1 + lVar1;
          *(undefined4 *)&pFVar2->MeshObject = *(undefined4 *)&pFVar3->MeshObject;
          *(undefined4 *)((longlong)&pFVar2->MeshObject + 4) = uVar8;
          pFVar2->BoneFrameDelta = uVar9;
          pFVar2->BoneFrameNumber = uVar10;
          lVar1 = uVar12 - 1;
        }
        while ((lVar14 < lVar1 && (lVar11 = lVar1 + -1 >> 1, uVar6 < param_1[lVar11].BoneFrameDelta)
               )) {
          pFVar2 = param_1 + lVar11;
          uVar8 = *(undefined4 *)((longlong)&pFVar2->MeshObject + 4);
          uVar9 = pFVar2->BoneFrameDelta;
          uVar10 = pFVar2->BoneFrameNumber;
          pFVar3 = param_1 + lVar1;
          *(undefined4 *)&pFVar3->MeshObject = *(undefined4 *)&pFVar2->MeshObject;
          *(undefined4 *)((longlong)&pFVar3->MeshObject + 4) = uVar8;
          pFVar3->BoneFrameDelta = uVar9;
          pFVar3->BoneFrameNumber = uVar10;
          lVar1 = lVar11;
        }
        pFVar2 = param_1 + lVar1;
        *(undefined4 *)&pFVar2->MeshObject = uVar4;
        *(undefined4 *)((longlong)&pFVar2->MeshObject + 4) = uVar5;
        pFVar2->BoneFrameDelta = uVar6;
        pFVar2->BoneFrameNumber = uVar7;
      } while (0 < lVar14);
    }
    for (; pFVar13 < param_3; pFVar13 = pFVar13 + 1) {
      if (param_1->BoneFrameDelta < pFVar13->BoneFrameDelta) {
        local_28.MeshObject = pFVar13->MeshObject;
        local_28.BoneFrameDelta = pFVar13->BoneFrameDelta;
        local_28.BoneFrameNumber = pFVar13->BoneFrameNumber;
        uVar6 = param_1->BoneFrameDelta;
        uVar7 = param_1->BoneFrameNumber;
        pFVar13->MeshObject = param_1->MeshObject;
        pFVar13->BoneFrameDelta = uVar6;
        pFVar13->BoneFrameNumber = uVar7;
        _Pop_heap_hole_by_index<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled_*,FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled,_FSkeletalMeshUpdatePacketNanite::ProcessStage_SkinCache_::__l15::<lambda_1>_>
                  (param_1,0,uVar12,&local_28,local_res8);
      }
    }
    if (1 < (longlong)uVar12) {
      do {
        pFVar13 = param_2 + -1;
        local_28.MeshObject = pFVar13->MeshObject;
        local_28.BoneFrameDelta = param_2[-1].BoneFrameDelta;
        local_28.BoneFrameNumber = param_2[-1].BoneFrameNumber;
        uVar6 = param_1->BoneFrameDelta;
        uVar7 = param_1->BoneFrameNumber;
        pFVar13->MeshObject = param_1->MeshObject;
        param_2[-1].BoneFrameDelta = uVar6;
        param_2[-1].BoneFrameNumber = uVar7;
        _Pop_heap_hole_by_index<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled_*,FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled,_FSkeletalMeshUpdatePacketNanite::ProcessStage_SkinCache_::__l15::<lambda_1>_>
                  (param_1,0,(longlong)pFVar13 - (longlong)param_1 >> 4,&local_28,local_res8);
        param_2 = pFVar13;
      } while (0x1f < (longlong)((longlong)pFVar13 - (longlong)param_1 & 0xfffffffffffffff0U));
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::__l2::<lambda_1>,1,1> @ 148698fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000148699003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::__l2::<lambda_1>,1,1> @ 148699010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::`2'::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000148699033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::__l2::<lambda_1>,1,1> @ 148699040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources_::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::`2'::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000148699063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::__l2::<lambda_1>,1,1> @ 148699070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000148699093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::__l2::<lambda_1>,1,1> @ 1486990a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite_::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::`11'::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001486990c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::__l2::<lambda_1>,1,1> @ 1486990d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::Update_::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::`5'::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001486990f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::__l2::<lambda_1>,1,1> @ 148699100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer_::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::`7'::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000148699123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`USoundEffectPreset::AddReferencedEffects'::__l2::<lambda_1>,0,0> @ 148699130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::AddReferencedEffects'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USoundEffectPreset::AddReferencedEffects_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundEffectPreset::AddReferencedEffects'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSceneViewport::EnqueueBeginRenderFrame'::__l2::<lambda_1>,1,0> @ 148699150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewport::EnqueueBeginRenderFrame'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSceneViewport::EnqueueBeginRenderFrame_::__l2::<lambda_1>,1,0>(void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneViewport::EnqueueBeginRenderFrame'::`2'::<lambda_1>,1,0>::
        _vftable_;
  this_00 = *(FRHIResource **)((longlong)this + 0x10);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// ~TFunction_OwnedObject<`USoundCue::EvaluateNodes'::__l2::<lambda_1>,0,0> @ 148699170

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`USoundCue::EvaluateNodes'::__l2::<lambda_1>,0,0>
::~TFunction_OwnedObject<_USoundCue::EvaluateNodes_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundCue::EvaluateNodes'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>,1,1> @ 148699190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundNodeQualityLevel::LoadChildWavePlayers'::__l2::<lambda_1>,0,0> @ 1486991b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeQualityLevel::LoadChildWavePlayers'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USoundNodeQualityLevel::LoadChildWavePlayers_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeQualityLevel::LoadChildWavePlayers'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundNodeQualityLevel::PrimeChildWavePlayers'::__l2::<lambda_1>,0,0> @ 1486991d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeQualityLevel::PrimeChildWavePlayers'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USoundNodeQualityLevel::PrimeChildWavePlayers_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeQualityLevel::PrimeChildWavePlayers'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::<lambda_1>,1,0> @ 1486991f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSkeletalMeshObjectNanite::ReleaseResources_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::ReleaseResources'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers'::__l2::<lambda_1>,0,0> @ 148699210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundNodeQualityLevel::RetainChildWavePlayers'::__l2::<lambda_1>,0,0> @ 148699230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeQualityLevel::RetainChildWavePlayers'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USoundNodeQualityLevel::RetainChildWavePlayers_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeQualityLevel::RetainChildWavePlayers'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FModulationDestination::UpdateModulatorsInternal'::__l2::<lambda_1>,1,1> @ 148699250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FModulationDestination::UpdateModulatorsInternal'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Audio::FModulationDestination::UpdateModulatorsInternal_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FModulationDestination::UpdateModulatorsInternal'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `Audio::FModulationDestination::UpdateModulatorsInternal'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::__l2::<lambda_1>,1,0> @ 148699270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``USoundWave::RetainCompressedAudio'::__l68::<lambda_1>::operator()'::__l5::<lambda_1>,1,1> @ 148699290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundWave::RetainCompressedAudio'::__l68::<lambda_1>::operator()'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__USoundWave::RetainCompressedAudio_::__l68::<lambda_1>::operator()_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``USoundWave::RetainCompressedAudio'::`68'::<lambda_1>::operator()'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FAudioChunkHandle::~FAudioChunkHandle((FAudioChunkHandle *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FDebugCanvasDrawer::BeginRenderingCanvas'::__l5::<lambda_1>,1,1> @ 1486992b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDebugCanvasDrawer::BeginRenderingCanvas'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FDebugCanvasDrawer::BeginRenderingCanvas_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDebugCanvasDrawer::BeginRenderingCanvas'::`5'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`USoundSubmix::PushModulationChanges'::__l5::<lambda_1>,1,1> @ 1486992d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmix::PushModulationChanges'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_USoundSubmix::PushModulationChanges_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmix::PushModulationChanges'::`5'::<lambda_1>,1,1>::_vftable_
  ;
  `USoundSubmix::PushModulationChanges'::__l5::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8))
  ;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshObjectNanite::Update'::__l5::<lambda_1>,1,1> @ 1486992f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::Update'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FSkeletalMeshObjectNanite::Update_::__l5::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::Update'::`5'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::__l5::<lambda_1>,1,0> @ 148699310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSlateTexture2DRHIRef::UpdateTextureThreadSafe_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<```USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,1> @ 148699330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,1>
::
~TFunction_OwnedObject<___USoundWave::GetHandleForChunkOfAudio_::__l14::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<```USoundWave::GetHandleForChunkOfAudio'::`14'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`7'::<lambda_1>,1,1>
        ::_vftable_;
  FAudioChunkHandle::~FAudioChunkHandle((FAudioChunkHandle *)((longlong)this + 0x40));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014869936a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::<lambda_1>,1,0> @ 148699380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer_::__l7::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTexture'::__l7::<lambda_1>,1,1> @ 1486993a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTexture'::__l7::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FSlateTexture2DRHIRef::UpdateTexture_::__l7::<lambda_1>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTexture'::`7'::<lambda_1>,1,1>::
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

// ~TFunction_OwnedObject<`FSlateTexture2DRHIRef::ResizeTexture'::__l10::<lambda_1>,1,0> @ 1486993c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSlateTexture2DRHIRef::ResizeTexture'::__l10::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSlateTexture2DRHIRef::ResizeTexture_::__l10::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSlateTexture2DRHIRef::ResizeTexture'::`10'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>,1,1> @ 1486993e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>,1,1> @ 148699400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources_::__l19::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundWave::IsReadyForFinishDestroy'::__l36::<lambda_1>,1,0> @ 148699420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundWave::IsReadyForFinishDestroy'::__l36::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USoundWave::IsReadyForFinishDestroy_::__l36::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundWave::IsReadyForFinishDestroy'::`36'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSceneViewport::UpdateViewportRHI'::__l40::<lambda_1>,1,1> @ 148699440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewport::UpdateViewportRHI'::__l40::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FSceneViewport::UpdateViewportRHI_::__l40::<lambda_1>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneViewport::UpdateViewportRHI'::`40'::<lambda_1>,1,1>::_vftable_;
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

// ~TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicDisconnect'::__l47::<lambda_1>,0,0> @ 148699460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicDisconnect'::__l47::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USoundSubmixWithParentBase::DynamicDisconnect_::__l47::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicDisconnect'::`47'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundNodeWavePlayer::ParseNodes'::__l60::<lambda_1>,1,0> @ 148699480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeWavePlayer::ParseNodes'::__l60::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USoundNodeWavePlayer::ParseNodes_::__l60::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeWavePlayer::ParseNodes'::`60'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundWave::RetainCompressedAudio'::__l68::<lambda_1>,0,0> @ 1486994a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundWave::RetainCompressedAudio'::__l68::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USoundWave::RetainCompressedAudio_::__l68::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundWave::RetainCompressedAudio'::`68'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicConnect'[::I]::<lambda_1>,0,0> @ 1486994c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicConnect'[::I]::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USoundSubmixWithParentBase::DynamicConnect_[::I]::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this = &_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::<lambda_1>,1,0> @ 1486994e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite_::__l11::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::__l11::<lambda_1>,1,0> @ 148699500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::__l11::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDebugCanvasDrawer::~FDebugCanvasDrawer_::__l11::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::`11'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FDebugCanvasDrawer::HandleReleaseFontResources'::__l12::<lambda_1>,1,0> @ 148699520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDebugCanvasDrawer::HandleReleaseFontResources'::__l12::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDebugCanvasDrawer::HandleReleaseFontResources_::__l12::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDebugCanvasDrawer::HandleReleaseFontResources'::`12'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>,0,1> @ 148699540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>,0,1>::
~TFunction_OwnedObject<_USoundWave::GetHandleForChunkOfAudio_::__l14::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundWave::GetHandleForChunkOfAudio'::`14'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x000148699563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l14::<lambda_1>,0,0> @ 148699570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l14::<lambda_1>,0,0>::
~TFunction_OwnedObject<_USoundSubmix::StopRecordingOutput_::__l14::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::`14'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundWave::Parse'::__l252::<lambda_1>,1,1> @ 148699590

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`USoundWave::Parse'::__l252::<lambda_1>,1,1>::
~TFunction_OwnedObject<_USoundWave::Parse_::__l252::<lambda_1>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundWave::Parse'::`252'::<lambda_1>,1,1>::_vftable_;
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

// ~TFunction_OwnedObject<`USoundCue::EvaluateNodes'::__l2::<lambda_2>,0,0> @ 1486995b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`USoundCue::EvaluateNodes'::__l2::<lambda_2>,0,0>
::~TFunction_OwnedObject<_USoundCue::EvaluateNodes_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundCue::EvaluateNodes'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l16::<lambda_2>,0,0> @ 1486995d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l16::<lambda_2>,0,0>::
~TFunction_OwnedObject<_USoundSubmix::StopRecordingOutput_::__l16::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::`16'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l17::<lambda_3>,0,0> @ 1486995f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l17::<lambda_3>,0,0>::
~TFunction_OwnedObject<_USoundSubmix::StopRecordingOutput_::__l17::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::`17'::<lambda_3>,0,0>::_vftable_;
  return;
}

// operator<< @ 14869cff0

FArchive * __cdecl operator<<(FArchive *param_1,FMeshUVChannelInfo *param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  float *pfVar3;
  
  operator<<(param_1,&param_2->bInitialized);
  operator<<(param_1,&param_2->bOverrideDensities);
  pfVar1 = param_2->LocalUVDensities;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = param_2->LocalUVDensities + 1;
  puVar2 = &param_1->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = param_2->LocalUVDensities + 2;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = param_2->LocalUVDensities + 3;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator<< @ 14869d170

FArchive * __cdecl operator<<(FArchive *param_1,FMorphTargetImportedSourceFileInfo *param_2)

{
  operator<<(param_1,&param_2->SourceFilename);
  operator<<(param_1,&param_2->DerivedDataHash);
  return param_1;
}

// operator<< @ 14869d1b0

FArchive * __cdecl operator<<(FArchive *param_1,FSkeletalMaterial *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  bool local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCoreObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,param_2);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
  if (7 < iVar4) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->MaterialSlotName);
    lVar1 = *(longlong *)&param_1->field_0x68;
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
LAB_14869d24f:
      uVar3 = 1;
    }
    else {
      cVar2 = (**(code **)(*(longlong *)(*(longlong *)(lVar1 + 8) + 8) + 0x80))
                        (*(longlong *)(lVar1 + 8) + 8);
      uVar3 = 0;
      if (cVar2 != '\0') goto LAB_14869d24f;
    }
    local_res8[0] = (bool)uVar3;
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FCoreObjectVersion::GUID);
    if (2 < iVar4) {
      operator<<(param_1,local_res8);
      if (local_res8[0] != false) {
        local_res8[0] = false;
        local_res8[1] = false;
        local_res8[2] = false;
        local_res8[3] = false;
        local_res8[4] = false;
        local_res8[5] = false;
        local_res8[6] = false;
        local_res8[7] = false;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res8);
      }
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
    if (iVar4 < 10) goto LAB_14869d2bd;
  }
  operator<<(param_1,&param_2->UVChannelData);
LAB_14869d2bd:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar4 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar4 < 0xc4) {
      (param_2->OverlayMaterialInterface).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
      return param_1;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&param_2->OverlayMaterialInterface);
  return param_1;
}

// operator== @ 14869d320

bool __cdecl operator==(FSkeletalMaterial *param_1,FSkeletalMaterial *param_2)

{
  return (param_1->MaterialInterface).field0_0x0.DebugPtr ==
         (param_2->MaterialInterface).field0_0x0.DebugPtr;
}

// operator== @ 14869d330

bool __cdecl operator==(FSkeletalMaterial *param_1,UMaterialInterface *param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = (param_1->MaterialInterface).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    return param_2 == (UMaterialInterface *)0x0;
  }
  return pUVar1 == param_2;
}

// operator== @ 14869d350

bool __cdecl operator==(UMaterialInterface *param_1,FSkeletalMaterial *param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = (param_2->MaterialInterface).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    return param_1 == (UMaterialInterface *)0x0;
  }
  return pUVar1 == param_1;
}

// operator() @ 14869da80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,FAudioChunkHandle *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  code *local_b8 [5];
  undefined8 *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  FAudioChunkHandle local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (*(int *)((longlong)this + 0x40) == *(int *)this) {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
    pcVar1 = *(code **)((longlong)this + 0x10);
    plVar4 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)this + 0x38);
    }
    uVar2 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar2,param_1);
  }
  else {
    local_88 = *(longlong *)((longlong)this + 0x10);
    local_60 = (longlong *)0x0;
    if (local_88 != 0) {
      puVar3 = (undefined8 *)((longlong)this + 0x20);
      if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)((longlong)this + 0x38);
      }
      (**(code **)*puVar3)(puVar3,&local_78);
    }
    FAudioChunkHandle::FAudioChunkHandle(&local_58,param_1);
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x70,0x10);
    *local_90 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<```USoundWave::GetHandleForChunkOfAudio'::`14'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`7'::<lambda_1>,1,1>
                 ::_vftable_;
    plVar4 = local_90 + 2;
    *plVar4 = local_88;
    local_90[7] = local_60;
    local_60 = (longlong *)0x0;
    local_90[4] = local_78;
    local_90[5] = uStack_70;
    local_90[6] = local_68;
    if (*plVar4 != 0) {
      local_88 = 0;
    }
    FAudioChunkHandle::FAudioChunkHandle((FAudioChunkHandle *)(local_90 + 8),&local_58);
    if (plVar4 != (longlong *)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<```USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(*(Type *)((longlong)this + 0x40),(TUniqueFunction<void___cdecl(void)> *)local_b8);
    FAudioChunkHandle::~FAudioChunkHandle(&local_58);
    if (local_88 != 0) {
      plVar4 = &local_78;
      if (local_60 != (longlong *)0x0) {
        plVar4 = local_60;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return;
}

// operator() @ 14869e8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``USoundWave::RetainCompressedAudio'::__l68::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  FSoundWaveData *pFVar5;
  wchar_t *pwVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x1295,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid(this);
  if (bVar2) {
    if (5 < (byte)LogAudioTiming._0_1_) {
      pUVar3 = FWeakObjectPtr::Get(this);
      if ((*(longlong *)&pUVar3[0x19].field_0x10 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = ::FName::ToString((FName *)(*(longlong *)&pUVar3[0x19].field_0x10 + 0x7c),&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      bVar2 = Audio::MatchesLogFilter(pwVar6);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        FAudioChunkHandle::Num((FAudioChunkHandle *)((longlong)this + 8));
        pUVar3 = FWeakObjectPtr::Get(this);
        pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->
                           ((TSharedPtr<FSoundWaveData,1> *)&pUVar3[0x19].field_0x10);
        pwVar6 = L"true";
        if (pFVar5->bIsLooping == 0) {
          pwVar6 = L"false";
        }
        ::FString::FString(&local_48,pwVar6);
        pUVar3 = FWeakObjectPtr::Get(this);
        pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->
                           ((TSharedPtr<FSoundWaveData,1> *)&pUVar3[0x19].field_0x10);
        ::FName::ToString(&pFVar5->RuntimeFormat,&local_18);
        pUVar3 = FWeakObjectPtr::Get(this);
        pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->
                           ((TSharedPtr<FSoundWaveData,1> *)&pUVar3[0x19].field_0x10);
        ::FName::ToString(&pFVar5->NameCached,&local_28);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    pUVar3 = FWeakObjectPtr::Get(this);
    if ((*(longlong *)&pUVar3[0x19].field_0x10 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FAudioChunkHandle::operator=
              ((FAudioChunkHandle *)(*(longlong *)&pUVar3[0x19].field_0x10 + 0x28),
               (FAudioChunkHandle *)((longlong)this + 8));
  }
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14869fff4

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FDebugCanvasDrawer::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FDebugCanvasDrawer::_vector_deleting_destructor__adjustor_8__(FDebugCanvasDrawer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FDebugCanvasDrawer *)&this[-1].LayerID,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1486a0004

/* [thunk]:public: virtual void * __ptr64 __cdecl FDeferredCleanupSlateBrush::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FDeferredCleanupSlateBrush::_vector_deleting_destructor__adjustor_8__
          (FDeferredCleanupSlateBrush *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FDeferredCleanupSlateBrush *)&this[-1].InternalBrush.ResourceName,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 1486a0014

/* [thunk]:public: virtual void * __ptr64 __cdecl FDeferredCleanupSlateBrush::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FDeferredCleanupSlateBrush::_vector_deleting_destructor__adjustor_16__
          (FDeferredCleanupSlateBrush *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FDeferredCleanupSlateBrush *)
                      &this[-1].InternalBrush.ResourceHandle.Data.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1486a0024

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FSceneViewport::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FSceneViewport::_vector_deleting_destructor__adjustor_8__(FSceneViewport *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSceneViewport *)&this[-1].ViewportGammaOverride.bIsSet,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 1486a0034

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FSceneViewport::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FSceneViewport::_vector_deleting_destructor__adjustor_24__(FSceneViewport *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSceneViewport *)&this[-1].NumTouches,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{216}' @ 1486a0044

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FSceneViewport::`vector deleting
   destructor'`adjustor{216}' (unsigned int) __ptr64 */

void * __thiscall
FSceneViewport::_vector_deleting_destructor__adjustor_216__(FSceneViewport *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSceneViewport *)&this[-1].DebugCanvasDrawer.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1024}' @ 1486a0058

/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateGameResources::`vector deleting
   destructor'`adjustor{1024}' (unsigned int) __ptr64 */

void * __thiscall
FSlateGameResources::_vector_deleting_destructor__adjustor_1024__
          (FSlateGameResources *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSlateGameResources *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 1486a006c

/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateTexture2DRHIRef::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FSlateTexture2DRHIRef::_vector_deleting_destructor__adjustor_24__
          (FSlateTexture2DRHIRef *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSlateTexture2DRHIRef *)&this[-1].TextureData,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1486a007c

/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateTexture2DRHIRef::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FSlateTexture2DRHIRef::_vector_deleting_destructor__adjustor_32__
          (FSlateTexture2DRHIRef *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSlateTexture2DRHIRef *)&this[-1].TexCreateFlags,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1486a008c

/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateTexture2DRHIRef::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FSlateTexture2DRHIRef::_vector_deleting_destructor__adjustor_40__
          (FSlateTexture2DRHIRef *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSlateTexture2DRHIRef *)&this[-1].Width,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{96}' @ 1486a009c

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateTextureRenderTarget2DResource::`vector
   deleting destructor'`adjustor{96}' (unsigned int) __ptr64 */

void * __thiscall
FSlateTextureRenderTarget2DResource::_vector_deleting_destructor__adjustor_96__
          (FSlateTextureRenderTarget2DResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSlateTextureRenderTarget2DResource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{96}' @ 1486a00ac

/* [thunk]:public: virtual void * __ptr64 __cdecl FTextureRenderTargetResource::`vector deleting
   destructor'`adjustor{96}' (unsigned int) __ptr64 */

void * __thiscall
FTextureRenderTargetResource::_vector_deleting_destructor__adjustor_96__
          (FTextureRenderTargetResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FTextureRenderTargetResource *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1486a00bc

/* [thunk]:public: virtual void * __ptr64 __cdecl USkinnedAsset::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
USkinnedAsset::_vector_deleting_destructor__adjustor_224__(USkinnedAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USkinnedAsset *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1486a00d0

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USoundBase::_vector_deleting_destructor__adjustor_40__(USoundBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundBase *)&this[-1].PreEffectBusSends,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1486a00e0

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundBase::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
USoundBase::_vector_deleting_destructor__adjustor_48__(USoundBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundBase *)&this[-1].BusSends.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1486a00f0

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundClass::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USoundClass::_vector_deleting_destructor__adjustor_40__(USoundClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundClass *)&this[-1].PassiveSoundMixModifiers,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1486a0100

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundCue::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USoundCue::_vector_deleting_destructor__adjustor_40__(USoundCue *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USoundCue *)
                      &this[-1].AttenuationOverrides.PluginSettings.
                       SourceDataOverridePluginSettingsArray,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1486a0110

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundCue::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
USoundCue::_vector_deleting_destructor__adjustor_48__(USoundCue *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USoundCue *)
                      &this[-1].AttenuationOverrides.PluginSettings.ReverbPluginSettingsArray.
                       ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{392}' @ 1486a0120

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundSourceBus::`vector deleting
   destructor'`adjustor{392}' (unsigned int) __ptr64 */

void * __thiscall
USoundSourceBus::_vector_deleting_destructor__adjustor_392__(USoundSourceBus *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundSourceBus *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1486a0134

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundSourceBus::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USoundSourceBus::_vector_deleting_destructor__adjustor_40__(USoundSourceBus *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundSourceBus *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1486a0144

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundSourceBus::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
USoundSourceBus::_vector_deleting_destructor__adjustor_48__(USoundSourceBus *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundSourceBus *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{392}' @ 1486a0154

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundWave::`vector deleting
   destructor'`adjustor{392}' (unsigned int) __ptr64 */

void * __thiscall
USoundWave::_vector_deleting_destructor__adjustor_392__(USoundWave *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USoundWave *)&this[-1].ModulationSettings._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1486a0168

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundWave::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USoundWave::_vector_deleting_destructor__adjustor_40__(USoundWave *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundWave *)&this[-1].CompressedDataGuid.C,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1486a0178

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundWave::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
USoundWave::_vector_deleting_destructor__adjustor_48__(USoundWave *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundWave *)&this[-1].CompressedDataGuid,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1486a0190

void * __thiscall
IBaseDelegateInstance<void___cdecl(void_*),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(void_*),FDefaultDelegateUserPolicy> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a01c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`SGameLayerManager::Construct'::__l14::<lambda_1>,enum_CanvasVisibility::CanvasType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a01f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDebugCanvasDrawer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDebugCanvasDrawer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSceneViewport,void___cdecl(void_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSceneViewport,void___cdecl(void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0250

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateGameResources,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSlateGameResources,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SGameLayerManager_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SGameLayerManager_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a02e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SGameLayerManager_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SGameLayerManager_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SGameLayerManager,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SGameLayerManager,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a03a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USoundCue,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,USoundCue,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a03d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USoundNodeWavePlayer,void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0400

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0430

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,enum_CanvasVisibility::CanvasType>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0460

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0490

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::__l5::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      puVar1 = TlsGetValue(SmallTaskAllocator._0_4_);
      lpTlsValue = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = ::operator_new(0x18);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0;
          lpTlsValue = puVar1;
        }
        TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
        puVar1 = lpTlsValue;
      }
      if (0xff < *(int *)(puVar1 + 2)) {
        if ((void **)*puVar1 != (void **)0x0) {
          TLockFreePointerListLIFOPad<void_*,64>::Push
                    ((TLockFreePointerListLIFOPad<void_*,64> *)&SmallTaskAllocator.field_0x40,
                     (void **)*puVar1);
        }
        *puVar1 = puVar1[1];
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
      }
      *(undefined8 *)this = puVar1[1];
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
      puVar1[1] = this;
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0580

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a05c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FSoundEffectBase_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FSoundEffectBase_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSoundEffectBase___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::`2'::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a06c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::`2'::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::`11'::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a07e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::`5'::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::`7'::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a08a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::AddReferencedEffects'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundEffectPreset::AddReferencedEffects'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a08e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewport::EnqueueBeginRenderFrame'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneViewport::EnqueueBeginRenderFrame'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if (*(FRHIResource **)((longlong)this + 0x10) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0930

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`USoundCue::EvaluateNodes'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundCue::EvaluateNodes'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a09b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeQualityLevel::LoadChildWavePlayers'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeQualityLevel::LoadChildWavePlayers'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a09f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeQualityLevel::PrimeChildWavePlayers'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeQualityLevel::PrimeChildWavePlayers'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::ReleaseResources'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeQualityLevel::RetainChildWavePlayers'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeQualityLevel::RetainChildWavePlayers'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FModulationDestination::UpdateModulatorsInternal'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FModulationDestination::UpdateModulatorsInternal'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `Audio::FModulationDestination::UpdateModulatorsInternal'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundWave::RetainCompressedAudio'::__l68::<lambda_1>::operator()'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``USoundWave::RetainCompressedAudio'::`68'::<lambda_1>::operator()'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FAudioChunkHandle::~FAudioChunkHandle((FAudioChunkHandle *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDebugCanvasDrawer::BeginRenderingCanvas'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDebugCanvasDrawer::BeginRenderingCanvas'::`5'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmix::PushModulationChanges'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmix::PushModulationChanges'::`5'::<lambda_1>,1,1>::_vftable_
  ;
  `USoundSubmix::PushModulationChanges'::__l5::<lambda_1>::~<lambda_1>((void *)((longlong)this + 8))
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::Update'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::Update'::`5'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<```USoundWave::GetHandleForChunkOfAudio'::`14'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`7'::<lambda_1>,1,1>
        ::_vftable_;
  FAudioChunkHandle::~FAudioChunkHandle((FAudioChunkHandle *)((longlong)this + 0x40));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTexture'::__l7::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTexture'::`7'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0df0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSlateTexture2DRHIRef::ResizeTexture'::__l10::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSlateTexture2DRHIRef::ResizeTexture'::`10'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::`19'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundWave::IsReadyForFinishDestroy'::__l36::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundWave::IsReadyForFinishDestroy'::`36'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewport::UpdateViewportRHI'::__l40::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSceneViewport::UpdateViewportRHI'::`40'::<lambda_1>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicDisconnect'::__l47::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicDisconnect'::`47'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundNodeWavePlayer::ParseNodes'::__l60::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundNodeWavePlayer::ParseNodes'::`60'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a0fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundWave::RetainCompressedAudio'::__l68::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundWave::RetainCompressedAudio'::`68'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicConnect'[::I]::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::__l11::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDebugCanvasDrawer::~FDebugCanvasDrawer'::`11'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a10d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDebugCanvasDrawer::HandleReleaseFontResources'::__l12::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDebugCanvasDrawer::HandleReleaseFontResources'::`12'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundWave::GetHandleForChunkOfAudio'::`14'::<lambda_1>,0,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l14::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::`14'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a11b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`USoundWave::Parse'::__l252::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundWave::Parse'::`252'::<lambda_1>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1200

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`USoundCue::EvaluateNodes'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundCue::EvaluateNodes'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l16::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::`16'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::__l17::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::`17'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a12c0

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1320

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1380

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a13e0

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1440

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a14a0

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1500

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1560

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Audio::AttenuationInterface::GetInterface'::__l2::FInterface,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a15a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Audio::ListenerOrientationInterface::GetInterface'::__l2::FInterface,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a15e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Audio::SourceOrientationInterface::GetInterface'::__l2::FInterface,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1620

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Audio::SpatializationInterface::GetInterface'::__l2::FInterface,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1660

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCanvas,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FCanvas,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a16a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInvisibleToWidgetReflectorMetaData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FInvisibleToWidgetReflectorMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a16e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSoundCueParameterTransmitter,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSoundCueParameterTransmitter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1720

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSoundWaveData,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FSoundWaveData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1760

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSoundWaveProxy,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FSoundWaveProxy,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a17a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCanvas,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SCanvas,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a17e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDebugCanvas,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDebugCanvas,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1820

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPlayerLayer,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SPlayerLayer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1860

void * __thiscall
Audio::TProxyData<FSoundWaveProxy>::_scalar_deleting_destructor_
          (TProxyData<FSoundWaveProxy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1890

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SGameLayerManager::FPlayerLayer,SharedPointerInternals::DefaultDeleter<SGameLayerManager::FPlayerLayer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SGameLayerManager::FPlayerLayer,SharedPointerInternals::DefaultDeleter<SGameLayerManager::FPlayerLayer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a18d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDebugCanvasDrawer,SharedPointerInternals::DefaultDeleter<FDebugCanvasDrawer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDebugCanvasDrawer,SharedPointerInternals::DefaultDeleter<FDebugCanvasDrawer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1910

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::__l2::<lambda_1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1950

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::__l2::<lambda_1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1990

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::__l2::<lambda_1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a19d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavigationMetaData,SharedPointerInternals::DefaultDeleter<FNavigationMetaData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNavigationMetaData,SharedPointerInternals::DefaultDeleter<FNavigationMetaData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1a10

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateGameResources,SharedPointerInternals::DefaultDeleter<FSlateGameResources>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateGameResources,SharedPointerInternals::DefaultDeleter<FSlateGameResources>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1a50

void * __thiscall
TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::_scalar_deleting_destructor_
          (TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1a80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FDebugCanvasDrawer::_scalar_deleting_destructor_(FDebugCanvasDrawer *this,uint param_1)

{
  ~FDebugCanvasDrawer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1ac0

void * __thiscall
FDeferredCleanupSlateBrush::_scalar_deleting_destructor_
          (FDeferredCleanupSlateBrush *this,uint param_1)

{
  (this->InternalBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InternalBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1b30

void * __thiscall
FDynamicSkelMeshObjectDataNanite::_scalar_deleting_destructor_
          (FDynamicSkelMeshObjectDataNanite *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ComponentSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousReferenceToLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferenceToLocalForRayTracing).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferenceToLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1ba0

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
FInstancedSkeletalMeshObjectNanite::_scalar_deleting_destructor_
          (FInstancedSkeletalMeshObjectNanite *this,uint param_1)

{
  ForElementType<Nanite::FMaterialAuditEntry> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->NaniteMaterials).Entries.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->NaniteMaterials).AssetName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,int>
            ((FSkeletalMeshObjectLOD *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FSkeletalMeshObject::~FSkeletalMeshObject((FSkeletalMeshObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1c30

void * __thiscall
FInstancedSkinningSceneExtensionProxy::_scalar_deleting_destructor_
          (FInstancedSkinningSceneExtensionProxy *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1c90

void * __thiscall
FInvisibleToWidgetReflectorMetaData::_scalar_deleting_destructor_
          (FInvisibleToWidgetReflectorMetaData *this,uint param_1)

{
  *this = (FInvisibleToWidgetReflectorMetaData)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall FSceneViewport::_scalar_deleting_destructor_(FSceneViewport *this,uint param_1)

{
  ~FSceneViewport(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1d10

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
FSkeletalMeshObjectNanite::_scalar_deleting_destructor_
          (FSkeletalMeshObjectNanite *this,uint param_1)

{
  ~FSkeletalMeshObjectNanite(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1d50

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
FSkeletalMeshObjectStatic::_scalar_deleting_destructor_
          (FSkeletalMeshObjectStatic *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectStatic__6B_;
  DestructItems<FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD,int>
            ((FSkeletalMeshObjectLOD *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  pFVar1 = (this->LODs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSkeletalMeshObject::~FSkeletalMeshObject((FSkeletalMeshObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1dc0

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
FSkinningSceneExtensionProxy::_scalar_deleting_destructor_
          (FSkinningSceneExtensionProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BoneObjectSpace).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneHierarchy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1e20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FSlateCanvasRenderTarget::_scalar_deleting_destructor_(FSlateCanvasRenderTarget *this,uint param_1)

{
  FRenderTarget::~FRenderTarget((FRenderTarget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1e60

void * __thiscall
FSlateGameResources::_scalar_deleting_destructor_(FSlateGameResources *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FSlateStyleSet__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pFVar1 = (this->BasePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->UIResources).field_0x48 = 0;
  pvVar2 = *(void **)&(this->UIResources).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UIResources);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x478);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1f20

void * __thiscall
FSlateTexture2DRHIRef::_scalar_deleting_destructor_(FSlateTexture2DRHIRef *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
  this->_padding_ = (longlong)&_vftable__for__FSlateUpdatableTexture__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextureData).SharedReferenceCount.ReferenceController);
  FRenderResource::~FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  this->_padding_ = (longlong)&___7FSlateUpdatableTexture__6B_;
  this->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  *(undefined1 *)&this->_padding_ = 0x84;
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a1fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSlateTextureData::_scalar_deleting_destructor_(FSlateTextureData *this,uint param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar5 [8];
  FName local_res8;
  FStatMessage local_28;
  
  auVar5 = (uchar  [8])(longlong)(this->Bytes).ArrayMax;
  if (auVar5 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_SlateTextureDataMemory;
    if (StatPtr_STAT_SlateTextureDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SlateTextureDataMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureDataMemory,*pFVar3,
                         L"Texture Data Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar5;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar5);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a21c0

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __thiscall
FSlateTextureRenderTarget2DResource::_scalar_deleting_destructor_
          (FSlateTextureRenderTarget2DResource *this,uint param_1)

{
  FRenderTarget::~FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2220

void * __thiscall
FSlateUpdatableTexture::_scalar_deleting_destructor_(FSlateUpdatableTexture *this,uint param_1)

{
  *this = (FSlateUpdatableTexture)&___7FSlateUpdatableTexture__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2260

void * __thiscall
FSoundAttenuationSettings::_scalar_deleting_destructor_
          (FSoundAttenuationSettings *this,uint param_1)

{
  ~FSoundAttenuationSettings(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a22a0

void * __thiscall
FSoundCueParameterTransmitter::_scalar_deleting_destructor_
          (FSoundCueParameterTransmitter *this,uint param_1)

{
  ~FSoundCueParameterTransmitter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a22e0

void * __thiscall
FSoundEffectBase::_scalar_deleting_destructor_(FSoundEffectBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  TQueue<TUniqueFunction<void___cdecl(void)>,1>::~TQueue<TUniqueFunction<void___cdecl(void)>,1>
            (&this->CommandQueue);
  pFVar1 = (this->CurrentAudioThreadSettingsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2340

void * __thiscall FSoundWaveProxy::_scalar_deleting_destructor_(FSoundWaveProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSoundWaveProxy__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundWaveDataPtr).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2390

void * __thiscall
FTextureRenderTargetResource::_scalar_deleting_destructor_
          (FTextureRenderTargetResource *this,uint param_1)

{
  FRenderTarget::~FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a23f0

void * __thiscall
IAudioPropertiesSheetAssetUserInterface::_scalar_deleting_destructor_
          (IAudioPropertiesSheetAssetUserInterface *this,uint param_1)

{
  *this = (IAudioPropertiesSheetAssetUserInterface)&___7IAudioPropertiesSheetAssetUserInterface__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2430

void * __thiscall
ISlateBrushSource::_scalar_deleting_destructor_(ISlateBrushSource *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2460

void * __thiscall ISoundGenerator::_scalar_deleting_destructor_(ISoundGenerator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISoundGenerator__6B_;
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  ~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&this->CommandQueue);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a24b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall SDebugCanvas::_scalar_deleting_destructor_(SDebugCanvas *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SceneViewport).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
SGameLayerManager::_scalar_deleting_destructor_(SGameLayerManager *this,uint param_1)

{
  ~SGameLayerManager(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2580

void * __thiscall SPlayerLayer::_scalar_deleting_destructor_(SPlayerLayer *this,uint param_1)

{
  SOverlay::~SOverlay((SOverlay *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a25e0

void * __thiscall
UButtonStyleAsset::_scalar_deleting_destructor_(UButtonStyleAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UButtonStyleAsset__6B_;
  FButtonStyle::~FButtonStyle(&this->ButtonStyle);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2650

void * __thiscall
UCheckBoxStyleAsset::_scalar_deleting_destructor_(UCheckBoxStyleAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCheckBoxStyleAsset__6B_;
  FCheckBoxStyle::~FCheckBoxStyle(&this->CheckBoxStyle);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x980);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a26c0

void * __thiscall UEndpointSubmix::_scalar_deleting_destructor_(UEndpointSubmix *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2770

void * __thiscall USkinnedAsset::_scalar_deleting_destructor_(USkinnedAsset *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &___7IInterface_AsyncCompilation__6B_;
  UStreamableRenderAsset::~UStreamableRenderAsset((UStreamableRenderAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a27e0

void * __thiscall
USlateBrushAsset::_scalar_deleting_destructor_(USlateBrushAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USlateBrushAsset__6B_;
  (this->Brush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Brush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2860

void * __thiscall
USlateTextureAtlasInterface::_scalar_deleting_destructor_
          (USlateTextureAtlasInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1486a28c0

void * __thiscall
USoundAttenuation::_scalar_deleting_destructor_(USoundAttenuation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundAttenuation__6B_;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->Attenuation);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2930

void * __thiscall USoundBase::_scalar_deleting_destructor_(USoundBase *this,uint param_1)

{
  ~USoundBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2990

void * __thiscall USoundClass::_scalar_deleting_destructor_(USoundClass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PassiveSoundMixModifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundModulationDefaultSettings::~FSoundModulationDefaultSettings
            (&(this->Properties).ModulationSettings);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2a50

void * __thiscall
USoundConcurrency::_scalar_deleting_destructor_(USoundConcurrency *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundConcurrency__6B_;
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

// `scalar_deleting_destructor' @ 1486a2ab0

void * __thiscall USoundCue::_scalar_deleting_destructor_(USoundCue *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationOverrides);
  USoundBase::~USoundBase((USoundBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x578);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2b40

void * __thiscall
USoundEffectPreset::_scalar_deleting_destructor_(USoundEffectPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection);
  DestructItems<TWeakPtr<FSoundEffectBase,1>,int>
            ((TWeakPtr<FSoundEffectBase,1> *)(this->Instances).AllocatorInstance.Data,
             (this->Instances).ArrayNum);
  pFVar1 = (this->Instances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2bc0

void * __thiscall
USoundEffectSubmixPreset::_scalar_deleting_destructor_(USoundEffectSubmixPreset *this,uint param_1)

{
  *(undefined ***)this = &___7USoundEffectSubmixPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x38);
  DestructItems<TWeakPtr<FSoundEffectBase,1>,int>
            (*(TWeakPtr<FSoundEffectBase,1> **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2c50

void * __thiscall USoundGroups::_scalar_deleting_destructor_(USoundGroups *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USoundGroups__6B_;
  *(undefined4 *)&(this->SoundGroupMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SoundGroupMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESoundGroup,FSoundGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESoundGroup,FSoundGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SoundGroupMap);
  DestructItems<FSoundGroup,int>
            ((FSoundGroup *)(this->SoundGroupProfiles).AllocatorInstance.Data,
             (this->SoundGroupProfiles).ArrayNum);
  pFVar2 = (this->SoundGroupProfiles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
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

// `scalar_deleting_destructor' @ 1486a2d00

void * __thiscall USoundMix::_scalar_deleting_destructor_(USoundMix *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundMix__6B_;
  pFVar1 = (this->SoundClassEffects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->EQSettings)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
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

// `scalar_deleting_destructor' @ 1486a2d80

void * __thiscall USoundNode::_scalar_deleting_destructor_(USoundNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  pFVar1 = (this->ChildNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 1486a2df0

void * __thiscall
USoundNodeAssetReferencer::_scalar_deleting_destructor_
          (USoundNodeAssetReferencer *this,uint param_1)

{
  *(undefined ***)this = &___7USoundNode__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
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

// `scalar_deleting_destructor' @ 1486a2e60

void * __thiscall
USoundNodeAttenuation::_scalar_deleting_destructor_(USoundNodeAttenuation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNodeAttenuation__6B_;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationOverrides);
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x428);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a2ef0

void * __thiscall
USoundNodeBranch::_scalar_deleting_destructor_(USoundNodeBranch *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a2f60

void * __thiscall
USoundNodeConcatenator::_scalar_deleting_destructor_(USoundNodeConcatenator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeConcatenator__6B_;
  pFVar1 = (this->InputVolume).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a2ff0

void * __thiscall USoundNodeDelay::_scalar_deleting_destructor_(USoundNodeDelay *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a3060

void * __thiscall
USoundNodeDialoguePlayer::_scalar_deleting_destructor_(USoundNodeDialoguePlayer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeDialoguePlayer__6B_;
  pFVar1 = (this->DialogueWaveParameter).Context.Targets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 1486a30f0

void * __thiscall
USoundNodeDistanceCrossFade::_scalar_deleting_destructor_
          (USoundNodeDistanceCrossFade *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeDistanceCrossFade__6B_;
  pFVar1 = (this->CrossFadeInput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a3180

void * __thiscall
USoundNodeDoppler::_scalar_deleting_destructor_(USoundNodeDoppler *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a31f0

void * __thiscall
USoundNodeEnveloper::_scalar_deleting_destructor_(USoundNodeEnveloper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7USoundNodeEnveloper__6B_;
  pFVar1 = (this->PitchCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PitchCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->PitchCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->PitchCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->PitchCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PitchCurve).EditorCurveData._padding_);
  pFVar1 = (this->VolumeCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->VolumeCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->VolumeCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->VolumeCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->VolumeCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->VolumeCurve).EditorCurveData._padding_);
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,400);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a3320

void * __thiscall
USoundNodeGroupControl::_scalar_deleting_destructor_(USoundNodeGroupControl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeGroupControl__6B_;
  pFVar1 = (this->GroupSizes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a33b0

void * __thiscall
USoundNodeLooping::_scalar_deleting_destructor_(USoundNodeLooping *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a3420

void * __thiscall
USoundNodeMature::_scalar_deleting_destructor_(USoundNodeMature *this,uint param_1)

{
  *(undefined ***)this = &___7USoundNode__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
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

// `scalar_deleting_destructor' @ 1486a3490

void * __thiscall USoundNodeMixer::_scalar_deleting_destructor_(USoundNodeMixer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeMixer__6B_;
  pFVar1 = (this->InputVolume).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a3520

void * __thiscall
USoundNodeModulator::_scalar_deleting_destructor_(USoundNodeModulator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a3590

void * __thiscall
USoundNodeModulatorContinuous::_scalar_deleting_destructor_
          (USoundNodeModulatorContinuous *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 1486a3600

void * __thiscall
USoundNodeOscillator::_scalar_deleting_destructor_(USoundNodeOscillator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 1486a3670

void * __thiscall
USoundNodeParamCrossFade::_scalar_deleting_destructor_(USoundNodeParamCrossFade *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNodeDistanceCrossFade__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 1486a3700

void * __thiscall
USoundNodeQualityLevel::_scalar_deleting_destructor_(USoundNodeQualityLevel *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a3770

void * __thiscall
USoundNodeRandom::_scalar_deleting_destructor_(USoundNodeRandom *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeRandom__6B_;
  pFVar1 = (this->HasBeenUsed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Weights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 1486a3810

void * __thiscall
USoundNodeSoundClass::_scalar_deleting_destructor_(USoundNodeSoundClass *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a3880

void * __thiscall
USoundNodeSwitch::_scalar_deleting_destructor_(USoundNodeSwitch *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a38f0

void * __thiscall
USoundNodeWaveParam::_scalar_deleting_destructor_(USoundNodeWaveParam *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 1486a3960

void * __thiscall
USoundNodeWavePlayer::_scalar_deleting_destructor_(USoundNodeWavePlayer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeWavePlayer__6B_;
  pvVar1 = *(void **)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 1486a39f0

void * __thiscall USoundSourceBus::_scalar_deleting_destructor_(USoundSourceBus *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  USoundWave::~USoundWave((USoundWave *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x420);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a3a80

void * __thiscall USoundSubmix::_scalar_deleting_destructor_(USoundSubmix *this,uint param_1)

{
  FAudioRecordingData *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->_padding_ = (longlong)&___7USoundSubmix__6B_;
  pFVar1 = (this->RecordingData).Ptr;
  if (pFVar1 != (FAudioRecordingData *)0x0) {
    Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(&pFVar1->Writer);
    pFVar2 = (pFVar1->InputBuffer).RawPCMData.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0xa0);
  }
  pvVar3 = *(void **)&(this->OnSubmixRecordedFileDone).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSubmixRecordedFileDone);
  (this->DryLevelModulation).Modulators.HashSize = 0;
  FVar4 = (this->DryLevelModulation).Modulators.Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DryLevelModulation).Modulators.Elements);
  (this->WetLevelModulation).Modulators.HashSize = 0;
  FVar4 = (this->WetLevelModulation).Modulators.Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->WetLevelModulation).Modulators.Elements);
  (this->OutputVolumeModulation).Modulators.HashSize = 0;
  FVar4 = (this->OutputVolumeModulation).Modulators.Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutputVolumeModulation).Modulators.Elements);
  pFVar2 = (this->SubmixEffectChain).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  USoundSubmixWithParentBase::~USoundSubmixWithParentBase((USoundSubmixWithParentBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a3bd0

void * __thiscall
USoundSubmixBase::_scalar_deleting_destructor_(USoundSubmixBase *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicChildSubmixes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicChildSubmixes);
  pFVar2 = (this->ChildSubmixes).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 1486a3c80

void * __thiscall
USoundSubmixWithParentBase::_scalar_deleting_destructor_
          (USoundSubmixWithParentBase *this,uint param_1)

{
  ~USoundSubmixWithParentBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a3ce0

void * __thiscall USoundWave::_scalar_deleting_destructor_(USoundWave *this,uint param_1)

{
  ~USoundWave(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a3d40

void * __thiscall
USoundfieldEndpointSubmix::_scalar_deleting_destructor_
          (USoundfieldEndpointSubmix *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundfieldEndpointSubmix__6B_;
  pFVar1 = (this->SoundfieldEffectChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1486a3e00

void * __thiscall
USoundfieldSubmix::_scalar_deleting_destructor_(USoundfieldSubmix *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundfieldSubmix__6B_;
  pFVar1 = (this->SoundfieldEffectChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USoundSubmixWithParentBase::~USoundSubmixWithParentBase((USoundSubmixWithParentBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// AreSubmixFormatsCompatible @ 1486a64c0

bool __cdecl
SubmixUtils::AreSubmixFormatsCompatible(USoundSubmixBase *param_1,USoundSubmixBase *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  UClass *pUVar6;
  ISoundfieldFactory *pIVar7;
  ISoundfieldFactory *pIVar8;
  USoundfieldEncodingSettingsBase *pUVar9;
  undefined8 *puVar10;
  USoundfieldSubmix *this;
  code *pcVar11;
  undefined8 *local_res8;
  undefined1 local_res18 [16];
  
  if ((param_1 == (USoundSubmixBase *)0x0) || (param_2 == (USoundSubmixBase *)0x0)) {
    return false;
  }
  pUVar6 = USoundfieldSubmix::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_)) {
    param_1 = (USoundSubmixBase *)0x0;
  }
  pUVar6 = USoundfieldSubmix::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(param_2->_padding_ + 0x38) < iVar1) ||
     (this = (USoundfieldSubmix *)param_2,
     (longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
     &pUVar6->_padding_)) {
    this = (USoundfieldSubmix *)0x0;
  }
  if (((USoundfieldSubmix *)param_1 == (USoundfieldSubmix *)0x0) ||
     (this == (USoundfieldSubmix *)0x0)) {
    pUVar6 = USoundfieldEndpointSubmix::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      param_2 = (USoundSubmixBase *)0x0;
    }
    if (((USoundfieldSubmix *)param_1 == (USoundfieldSubmix *)0x0) ||
       (param_2 == (USoundSubmixBase *)0x0)) {
      return true;
    }
    pIVar7 = USoundfieldSubmix::GetSoundfieldFactoryForSubmix((USoundfieldSubmix *)param_1);
    pIVar8 = (ISoundfieldFactory *)ISoundfieldEndpointFactory::Get((FName *)(param_2 + 1));
    if (pIVar7 == (ISoundfieldFactory *)0x0) {
      return true;
    }
    if (pIVar8 == (ISoundfieldFactory *)0x0) {
      return true;
    }
    plVar2 = (longlong *)param_2[1]._padding_;
    bVar4 = 0;
    if (plVar2 == (longlong *)0x0) goto LAB_1486a6667;
    pcVar11 = *(code **)((longlong)*pIVar7 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(*plVar2 + 0x2b0))(plVar2,&local_res8);
  }
  else {
    pIVar7 = USoundfieldSubmix::GetSoundfieldFactoryForSubmix((USoundfieldSubmix *)param_1);
    pIVar8 = USoundfieldSubmix::GetSoundfieldFactoryForSubmix(this);
    if (pIVar7 == (ISoundfieldFactory *)0x0) {
      return true;
    }
    if (pIVar8 == (ISoundfieldFactory *)0x0) {
      return true;
    }
    bVar4 = 0;
    pUVar9 = USoundfieldSubmix::GetEncodingSettings(this);
    if (pUVar9 == (USoundfieldEncodingSettingsBase *)0x0) goto LAB_1486a6667;
    pcVar11 = *(code **)((longlong)*pIVar7 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9,&local_res8);
  }
  uVar3 = *puVar10;
  puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_res18);
  bVar4 = (*pcVar11)(pIVar7,*puVar10,uVar3);
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
LAB_1486a6667:
  pUVar9 = USoundfieldSubmix::GetEncodingSettings((USoundfieldSubmix *)param_1);
  if (pUVar9 == (USoundfieldEncodingSettingsBase *)0x0) {
    return (bool)bVar4;
  }
  pcVar11 = *(code **)((longlong)*pIVar8 + 0x40);
  puVar10 = (undefined8 *)(**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9,&local_res8);
  uVar3 = *puVar10;
  puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_res18);
  bVar5 = (*pcVar11)(pIVar8,*puVar10,uVar3);
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
    return (bool)(bVar4 | bVar5);
  }
  return (bool)(bVar4 | bVar5);
}

// ClearRenderTarget @ 1486a8920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
ClearRenderTarget(FRHICommandList *param_1,FRHITexture *param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  IRHICommandContext *pIVar4;
  undefined8 *puVar5;
  undefined1 auStack_158 [32];
  FRHIRenderPassInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_2 == (FRHITexture *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0x281,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(param_2->_padding_ + 0x20))(param_2);
  (**(code **)(param_2->_padding_ + 0x20))(param_2);
  local_138.ColorRenderTargets.Elements[1].ArraySlice = -1;
  local_138.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
  local_138.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  local_138.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[1].MipIndex = '\0';
  local_138.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
  local_138.ColorRenderTargets.Elements[2].ArraySlice = -1;
  local_138.ColorRenderTargets.Elements[2].MipIndex = '\0';
  local_138.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
  local_138.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[3].ArraySlice = -1;
  local_138.ColorRenderTargets.Elements[3].MipIndex = '\0';
  local_138.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
  local_138.ColorRenderTargets.Elements[4].ArraySlice = -1;
  local_138.ColorRenderTargets.Elements[4].MipIndex = '\0';
  local_138.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
  local_138.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[5].ArraySlice = -1;
  local_138.ColorRenderTargets.Elements[5].MipIndex = '\0';
  local_138.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
  local_138.ColorRenderTargets.Elements[6].ArraySlice = -1;
  local_138.ColorRenderTargets.Elements[6].MipIndex = '\0';
  local_138.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
  local_138.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[7].ArraySlice = -1;
  local_138.ColorRenderTargets.Elements[7].MipIndex = '\0';
  local_138.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
  local_138.DepthStencilRenderTarget.Action = DontLoad_DontStore;
  local_138.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  local_138.ResolveRect.X1 = -1;
  local_138.ResolveRect.Y1 = -1;
  local_138.ResolveRect.X2 = -1;
  local_138.ResolveRect.Y2 = -1;
  local_138.ShadingRateTexture.Reference = (FRHITexture *)0x0;
  local_138.ShadingRateTextureCombiner = VRSRB_Passthrough;
  local_138.NopAccess = None;
  local_138.NumOcclusionQueries = 0;
  local_138.bOcclusionQueries = false;
  local_138.MultiViewCount = '\0';
  local_138.SubpassHint = None;
  local_138.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  local_138.ColorRenderTargets.Elements[0].Action = Clear_Store;
  local_138.ColorRenderTargets.Elements[0].MipIndex = (uchar)param_3;
  local_138.ColorRenderTargets.Elements[0].RenderTarget = param_2;
  local_138.ColorRenderTargets.Elements[0].ArraySlice = param_4;
  FRHICommandList::BeginRenderPass(param_1,&local_138,L"ClearRenderTarget");
  if ((param_1->field_0x29b & 2) == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10c5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->field_0x29b & 4) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInsideComputePass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = param_1->field_0x29b;
  if ((bVar3 & 8) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,param_1,1);
    param_1->field_0x29b = param_1->field_0x29b & 0xf7;
    bVar3 = param_1->field_0x29b;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar3 & 0x20) == 0)) {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar5;
    *(undefined8 **)&param_1->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar4 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar4->_padding_ + 0x250))(pIVar4);
  }
  param_1->field_0x29b = param_1->field_0x29b & 0xfd;
  *(undefined2 *)&param_1->field_0x298 = 0;
  if (local_138.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_138.ShadingRateTexture.Reference);
  }
  return;
}

// ComputeSceneViewportHDRMetaData @ 1486a9c00

void __cdecl
ComputeSceneViewportHDRMetaData
          (EDisplayOutputFormat *param_1,EDisplayColorGamut *param_2,bool *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,void *param_6,bool param_7)

{
  char cVar1;
  IStereoRenderTargetManager *pIVar2;
  
  pIVar2 = RetrieveStereoRenderTargetManager(param_7);
  if ((pIVar2 != (IStereoRenderTargetManager *)0x0) &&
     (cVar1 = (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2,param_1,param_2,param_3), cVar1 != '\0'
     )) {
    return;
  }
  HDRGetMetaData(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// DumpBakedAnalysisData @ 1486b0d90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl DumpBakedAnalysisData(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  FName local_res10 [3];
  FString local_38;
  TObjectIterator<USoundWave> local_28;
  
  bVar2 = IsInGameThread();
  if ((bVar2) && (param_1->ArrayNum == 1)) {
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar5 = USoundWave::StaticClass();
    GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USoundWave>::Advance(&local_28);
      lVar6 = (longlong)local_28.Index;
      if (local_28.Index < 0) break;
      if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      bVar2 = UObjectBaseUtility::IsTemplate
                        (*(UObjectBaseUtility **)
                          (local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8),
                         RF_ClassDefaultObject);
      if (!bVar2) {
        lVar6 = (longlong)local_28.Index;
        uVar4 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar4 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_res10[0] =
             *(FName *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) +
                       0x18);
        FName::ToString(local_res10,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeButtonStyleAsset @ 1486b2000

void __cdecl EmptyLinkFunctionForGeneratedCodeButtonStyleAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCheckboxStyleAsset @ 1486b2010

void __cdecl EmptyLinkFunctionForGeneratedCodeCheckboxStyleAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSGameLayerManager @ 1486b2020

void __cdecl EmptyLinkFunctionForGeneratedCodeSGameLayerManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkinnedAsset @ 1486b2030

void __cdecl EmptyLinkFunctionForGeneratedCodeSkinnedAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkinnedAssetCommon @ 1486b2040

void __cdecl EmptyLinkFunctionForGeneratedCodeSkinnedAssetCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlateBrushAsset @ 1486b2050

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateBrushAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlateTextureAtlasInterface @ 1486b2060

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateTextureAtlasInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundAttenuation @ 1486b2070

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundAttenuation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundBase @ 1486b2080

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundClass @ 1486b2090

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundConcurrency @ 1486b20a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundConcurrency(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundCue @ 1486b20b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundCue(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundEffectPreset @ 1486b20c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundEffectPreset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundEffectSubmix @ 1486b20d0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundEffectSubmix(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundGroups @ 1486b20e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundGroups(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundMix @ 1486b20f0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundMix(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundModulationDestination @ 1486b2100

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundModulationDestination(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNode @ 1486b2110

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeAssetReferencer @ 1486b2120

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeAssetReferencer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeAttenuation @ 1486b2130

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeAttenuation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeBranch @ 1486b2140

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeBranch(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeConcatenator @ 1486b2150

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeConcatenator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeDelay @ 1486b2160

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeDelay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeDialoguePlayer @ 1486b2170

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeDialoguePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeDistanceCrossFade @ 1486b2180

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeDistanceCrossFade(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeDoppler @ 1486b2190

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeDoppler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeEnveloper @ 1486b21a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeEnveloper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeGroupControl @ 1486b21b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeGroupControl(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeLooping @ 1486b21c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeLooping(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeMature @ 1486b21d0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeMature(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeMixer @ 1486b21e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeMixer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeModulator @ 1486b21f0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeModulator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeModulatorContinuous @ 1486b2200

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeModulatorContinuous(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeOscillator @ 1486b2210

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeOscillator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeParamCrossFade @ 1486b2220

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeParamCrossFade(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeQualityLevel @ 1486b2230

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeQualityLevel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeRandom @ 1486b2240

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeRandom(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeSoundClass @ 1486b2250

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeSoundClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeSwitch @ 1486b2260

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeSwitch(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeWaveParam @ 1486b2270

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeWaveParam(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundNodeWavePlayer @ 1486b2280

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundNodeWavePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundSourceBus @ 1486b2290

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundSourceBus(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundSubmix @ 1486b22a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundSubmix(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundSubmixSend @ 1486b22b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundSubmixSend(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundWave @ 1486b22c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundWave(void)

{
  return;
}

// FOnSubmixEnvelopeBP_DelegateWrapper @ 1486b5630

void __cdecl
FOnSubmixEnvelopeBP_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 2);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnSubmixEnvelope_DelegateWrapper @ 1486b56e0

void __cdecl
FOnSubmixEnvelope_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnSubmixRecordedFileDone_DelegateWrapper @ 1486b5790

void __cdecl
FOnSubmixRecordedFileDone_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,USoundWave *param_2)

{
  USoundWave *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnSubmixSpectralAnalysisBP_DelegateWrapper @ 1486b57b0

void __cdecl
FOnSubmixSpectralAnalysisBP_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 2);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnSubmixSpectralAnalysis_DelegateWrapper @ 1486b5860

void __cdecl
FOnSubmixSpectralAnalysis_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FindInGraph @ 1486b6780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
SubmixUtils::FindInGraph
          (USoundSubmixBase *param_1,USoundSubmixBase *param_2,bool param_3,
          FAudioDeviceHandle *param_4)

{
  ForAnyElementType *pFVar1;
  TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
  *pTVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FAudioDeviceHandle *this;
  UClass *pUVar10;
  longlong lVar11;
  int iVar12;
  TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
  *pTVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  USoundSubmixBase *pUVar17;
  USoundSubmixBase *pUVar18;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  USoundSubmixBase *local_a8;
  FAudioDeviceHandle local_a0;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_b0._0_4_ = 0;
  local_78.MaxBits = 0x80;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_b0 = 0;
  local_a8 = param_1;
  if (param_3) {
    local_a8 = param_1;
    this = FAudioDeviceHandle::FAudioDeviceHandle(&local_a0,param_4);
    pUVar18 = param_1;
joined_r0x0001486b680f:
    pUVar17 = param_1;
    if (param_1 != (USoundSubmixBase *)0x0) {
      do {
        pUVar18 = pUVar17;
        if (pUVar17 == (USoundSubmixBase *)0x0) break;
        pUVar10 = USoundSubmixWithParentBase::StaticClass();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) break;
        uVar7 = FAudioDeviceHandle::GetDeviceID(this);
        if ((int)pUVar17[1]._padding_ != pUVar17[1].ChildSubmixes.ArrayMax) {
          pTVar2 = *(TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
                     **)&pUVar17[1].DynamicChildSubmixes.field_0x8;
          pTVar13 = &pUVar17[1].DynamicChildSubmixes;
          if (pTVar2 != (TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
                         *)0x0) {
            pTVar13 = pTVar2;
          }
          iVar8 = *(int *)(&pTVar13->field_0x0 +
                          (ulonglong)
                          (*(int *)&pUVar17[1].DynamicChildSubmixes.field_0x10 - 1U & uVar7) * 4);
          if (iVar8 != -1) {
            lVar11 = pUVar17[1]._padding_;
            do {
              if (*(uint *)(lVar11 + (longlong)iVar8 * 0x18) == uVar7) {
                if (((iVar8 != -1) && (lVar11 = lVar11 + (longlong)iVar8 * 0x18, lVar11 != 0)) &&
                   (puVar16 = (undefined8 *)(lVar11 + 8), puVar16 != (undefined8 *)0x0)) {
                  param_1 = (USoundSubmixBase *)*puVar16;
                  goto LAB_1486b68b2;
                }
                break;
              }
              iVar8 = *(int *)(lVar11 + 0x10 + (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
          }
        }
        param_1 = (USoundSubmixBase *)pUVar17[1]._padding_;
LAB_1486b68b2:
        if (UE::GC::GIsIncrementalReachabilityPending == false) goto joined_r0x0001486b680f;
        if (param_1 == (USoundSubmixBase *)0x0) break;
        UE::GC::MarkAsReachable((UObject *)param_1);
        pUVar17 = param_1;
      } while( true );
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(this);
    local_a8 = pUVar18;
  }
  iVar8 = (int)local_b0;
  if ((local_b8.Data <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 < local_b8.Data + (longlong)local_b0._4_4_ * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar8 = (int)local_b0;
  }
  if (iVar8 == local_b0._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_b8,(int *)((longlong)&local_b0 + 4));
  }
  local_b0 = CONCAT44(local_b0._4_4_,iVar8 + 1);
  *(USoundSubmixBase **)(local_b8.Data + (longlong)iVar8 * 8) = local_a8;
  iVar8 = iVar8 + 1;
  do {
    if (iVar8 < 1) {
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free(local_48);
      }
      uVar4 = local_80 >> 0x20;
      local_80 = local_80 & 0xffffffff00000000;
      if ((int)uVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_78.NumBits = 0;
      if (0x80 < (uint)local_78.MaxBits) {
        local_78.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
      }
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      FAudioDeviceHandle::~FAudioDeviceHandle(param_4);
      return false;
    }
    iVar12 = iVar8 + -1;
    pUVar18 = *(USoundSubmixBase **)(local_b8.Data + (longlong)iVar12 * 8);
    iVar9 = (iVar8 - iVar12) + -1;
    if (iVar9 != 0) {
      memmove(local_b8.Data + (longlong)iVar12 * 8,local_b8.Data + (longlong)iVar12 * 8 + 8,
              (longlong)iVar9 << 3);
      iVar8 = (int)local_b0;
    }
    local_b0 = CONCAT44(local_b0._4_4_,iVar8 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&local_b8,iVar8 + -1,(int *)((longlong)&local_b0 + 4));
    if (pUVar18 != (USoundSubmixBase *)0x0) {
      if (pUVar18 == param_2) {
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
        local_40 = 0;
        if (local_48 != (undefined1 *)0x0) {
          FMemory::Free(local_48);
        }
        uVar4 = local_80 >> 0x20;
        local_80 = local_80 & 0xffffffff00000000;
        if ((int)uVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
        }
        local_58 = 0xffffffff;
        local_54 = 0;
        local_78.NumBits = 0;
        if (0x80 < (uint)local_78.MaxBits) {
          local_78.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
        }
        if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
        }
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        FAudioDeviceHandle::~FAudioDeviceHandle(param_4);
        return true;
      }
      uVar7 = ((uint)((ulonglong)pUVar18 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar18 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      if ((int)local_80 != local_54) {
        puVar14 = local_50;
        if (local_48 != (undefined1 *)0x0) {
          puVar14 = local_48;
        }
        for (iVar8 = *(int *)(puVar14 + (ulonglong)(local_40 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_88.Data + (longlong)iVar8 * 0x10 + 8)) {
          if (*(USoundSubmixBase **)(local_88.Data + (longlong)iVar8 * 0x10) == pUVar18)
          goto LAB_1486b6c0d;
        }
      }
      if (((TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_> *)&local_b8 ==
           &pUVar18->ChildSubmixes) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar8 = (pUVar18->ChildSubmixes).ArrayNum;
      if (iVar8 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar8,&local_b8,(int *)&local_b0,(int *)((longlong)&local_b0 + 4));
        ConstructItems<USoundSubmixBase_const_*,TObjectPtr<USoundSubmixBase>,int>
                  (local_b8.Data + (longlong)iVar9 * 8,
                   (TObjectPtr<USoundSubmixBase> *)(pUVar18->ChildSubmixes).AllocatorInstance.Data,
                   iVar8);
      }
      uVar7 = FAudioDeviceHandle::GetDeviceID(param_4);
      if (*(int *)&(pUVar18->DynamicChildSubmixes).field_0x8 !=
          *(int *)&(pUVar18->DynamicChildSubmixes).field_0x34) {
        puVar14 = *(undefined1 **)&(pUVar18->DynamicChildSubmixes).field_0x40;
        puVar15 = &(pUVar18->DynamicChildSubmixes).field_0x38;
        if (puVar14 != (undefined1 *)0x0) {
          puVar15 = puVar14;
        }
        iVar8 = *(int *)(puVar15 +
                        (ulonglong)
                        (*(int *)&(pUVar18->DynamicChildSubmixes).field_0x48 - 1U & uVar7) * 4);
        if (iVar8 != -1) {
          lVar11 = *(longlong *)&pUVar18->DynamicChildSubmixes;
          do {
            if (*(uint *)((longlong)iVar8 * 0x20 + lVar11) == uVar7) {
              if (((iVar8 != -1) && (lVar11 = (longlong)iVar8 * 0x20 + lVar11, lVar11 != 0)) &&
                 (pFVar1 = (ForAnyElementType *)(lVar11 + 8), pFVar1 != (ForAnyElementType *)0x0)) {
                if ((&local_b8 == pFVar1) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)this != (void*)&Source",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x96e,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
                iVar8 = *(int *)(lVar11 + 0x10);
                if (iVar8 != 0) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (8,8,iVar8,&local_b8,(int *)&local_b0,
                                     (int *)((longlong)&local_b0 + 4));
                  ConstructItems<USoundSubmixBase_const_*,TObjectPtr<USoundSubmixBase>,int>
                            (local_b8.Data + (longlong)iVar9 * 8,
                             (TObjectPtr<USoundSubmixBase> *)pFVar1->Data,iVar8);
                }
              }
              break;
            }
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar11);
          } while (iVar8 != -1);
        }
      }
    }
LAB_1486b6c0d:
    iVar8 = (int)local_b0;
  } while( true );
}

// FindRoot @ 1486b7540

USoundSubmixBase * __cdecl
SubmixUtils::FindRoot(USoundSubmixBase *param_1,FAudioDeviceHandle *param_2)

{
  TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
  *pTVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  UClass *pUVar5;
  TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
  *pTVar6;
  undefined8 *puVar7;
  USoundSubmixBase *pUVar8;
  USoundSubmixBase *pUVar9;
  
  pUVar9 = param_1;
joined_r0x0001486b7553:
  pUVar8 = param_1;
  if (pUVar8 == (USoundSubmixBase *)0x0) {
LAB_1486b764e:
    FAudioDeviceHandle::~FAudioDeviceHandle(param_2);
    return pUVar9;
  }
  do {
    pUVar9 = pUVar8;
    if (pUVar8 == (USoundSubmixBase *)0x0) goto LAB_1486b764e;
    pUVar5 = USoundSubmixWithParentBase::StaticClass();
    iVar4 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar5->_padding_)) goto LAB_1486b764e;
    uVar3 = FAudioDeviceHandle::GetDeviceID(param_2);
    if ((int)pUVar8[1]._padding_ != pUVar8[1].ChildSubmixes.ArrayMax) {
      pTVar1 = *(TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
                 **)&pUVar8[1].DynamicChildSubmixes.field_0x8;
      pTVar6 = &pUVar8[1].DynamicChildSubmixes;
      if (pTVar1 != (TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
                     *)0x0) {
        pTVar6 = pTVar1;
      }
      iVar4 = *(int *)(&pTVar6->field_0x0 +
                      (ulonglong)(*(int *)&pUVar8[1].DynamicChildSubmixes.field_0x10 - 1U & uVar3) *
                      4);
      if (iVar4 != -1) {
        lVar2 = pUVar8[1]._padding_;
        do {
          if (*(uint *)(lVar2 + (longlong)iVar4 * 0x18) == uVar3) {
            if (((iVar4 != -1) && (lVar2 = lVar2 + (longlong)iVar4 * 0x18, lVar2 != 0)) &&
               (puVar7 = (undefined8 *)(lVar2 + 8), puVar7 != (undefined8 *)0x0)) {
              param_1 = (USoundSubmixBase *)*puVar7;
              goto LAB_1486b75fe;
            }
            break;
          }
          iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    param_1 = (USoundSubmixBase *)pUVar8[1]._padding_;
LAB_1486b75fe:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto joined_r0x0001486b7553;
    if (param_1 == (USoundSubmixBase *)0x0) goto LAB_1486b764e;
    UE::GC::MarkAsReachable((UObject *)param_1);
    pUVar8 = param_1;
  } while( true );
}

// ForEachStaticChildRecursive @ 1486b8340

void __cdecl
SubmixUtils::ForEachStaticChildRecursive
          (USoundSubmixBase *param_1,TFunction<void___cdecl(USoundSubmixBase_*)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  USoundSubmixBase *pUVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  USoundSubmixBase *local_res8;
  
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar3 = *(code **)param_2;
  plVar6 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar6 = *(longlong **)&param_2->field_0x28;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar3)(uVar5,&local_res8);
  pFVar7 = (param_1->ChildSubmixes).AllocatorInstance.Data;
  iVar2 = (param_1->ChildSubmixes).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->ChildSubmixes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundSubmixBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) break;
    pUVar4 = *(USoundSubmixBase **)pFVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USoundSubmixBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    ForEachStaticChildRecursive(pUVar4,param_2);
    pFVar7 = pFVar7 + 8;
  }
  return;
}

// GetDefaultLoadingBehaviorCVar @ 1486bd4f0

ESoundWaveLoadingBehavior __cdecl SoundWave_Private::GetDefaultLoadingBehaviorCVar(void)

{
  ESoundWaveLoadingBehavior EVar1;
  int iVar2;
  undefined1 local_res8 [32];
  
  if (2 < SoundWaveDefaultLoadingBehaviorCVar - 1U) {
    `SoundWave_Private::GetDefaultLoadingBehaviorCVar'::__l2::<lambda_1>::operator()(local_res8);
  }
  iVar2 = 3;
  if (SoundWaveDefaultLoadingBehaviorCVar < 3) {
    iVar2 = SoundWaveDefaultLoadingBehaviorCVar;
  }
  EVar1 = RetainOnLoad;
  if (1 < iVar2) {
    EVar1 = (ESoundWaveLoadingBehavior)iVar2;
  }
  return EVar1;
}

// GetInterface @ 1486bf0e0

TSharedPtr<Audio::FParameterInterface,1> * __cdecl
Audio::AttenuationInterface::GetInterface
          (TSharedPtr<Audio::FParameterInterface,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  TSharedRef<,TSharedPtr<Audio::FParameterInterface,1>___cdecl_Audio::AttenuationInterface::GetInterface(void)_::_2_::FInterface,1>
  *pTVar3;
  FSharedReferencer<1> local_20;
  TSharedRef<,TSharedPtr<Audio::FParameterInterface,1>___cdecl_Audio::AttenuationInterface::GetInterface(void)_::_2_::FInterface,1>
  local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Audio::AttenuationInterface::GetInterface'::__l2::
             _dynamic_atexit_destructor_for__InterfacePtr__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (InterfacePtr.Object == (FParameterInterface *)0x0) {
    pTVar3 = MakeShared<_Audio::AttenuationInterface::GetInterface_::__l2::FInterface,1>(&local_18);
    local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
    InterfacePtr.Object = (FParameterInterface *)pTVar3->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&InterfacePtr.SharedReferenceCount,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  __return_storage_ptr__->Object = InterfacePtr.Object;
  FVar2 = InterfacePtr.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       InterfacePtr.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInterface @ 1486bf1e0

TSharedPtr<Audio::FParameterInterface,1> * __cdecl
Audio::ListenerOrientationInterface::GetInterface
          (TSharedPtr<Audio::FParameterInterface,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<Audio::FParameterInterface,1> *pTVar6;
  FParameterInterface *pFVar7;
  FSharedReferencer<1> local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Audio::ListenerOrientationInterface::GetInterface'::__l2::
             _dynamic_atexit_destructor_for__InterfacePtr__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (InterfacePtr.Object == (FParameterInterface *)0x0) {
    pTVar5 = ::operator_new(0x60);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      pFVar7 = (FParameterInterface *)&DAT_00000010;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &SharedPointerInternals::
            TIntrusiveReferenceController<`Audio::ListenerOrientationInterface::GetInterface'::`2'::FInterface,1>
            ::_vftable_;
      `Audio::ListenerOrientationInterface::GetInterface'::__l2::FInterface::FInterface(pTVar5 + 1);
      pFVar7 = (FParameterInterface *)(pTVar5 + 1);
      if (pFVar7 == (FParameterInterface *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<Audio::FParameterInterface,1> *)(*pcVar2)();
          return pTVar6;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    InterfacePtr.Object = pFVar7;
    local_10.ReferenceController = pTVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&InterfacePtr.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  __return_storage_ptr__->Object = InterfacePtr.Object;
  FVar3 = InterfacePtr.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       InterfacePtr.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInterface @ 1486bf350

TSharedPtr<Audio::FParameterInterface,1> * __cdecl
Audio::SourceOrientationInterface::GetInterface
          (TSharedPtr<Audio::FParameterInterface,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<Audio::FParameterInterface,1> *pTVar6;
  FParameterInterface *pFVar7;
  FSharedReferencer<1> local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Audio::SourceOrientationInterface::GetInterface'::__l2::
             _dynamic_atexit_destructor_for__InterfacePtr__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (InterfacePtr.Object == (FParameterInterface *)0x0) {
    pTVar5 = ::operator_new(0x60);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      pFVar7 = (FParameterInterface *)&DAT_00000010;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &SharedPointerInternals::
            TIntrusiveReferenceController<`Audio::SourceOrientationInterface::GetInterface'::`2'::FInterface,1>
            ::_vftable_;
      `Audio::SourceOrientationInterface::GetInterface'::__l2::FInterface::FInterface(pTVar5 + 1);
      pFVar7 = (FParameterInterface *)(pTVar5 + 1);
      if (pFVar7 == (FParameterInterface *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<Audio::FParameterInterface,1> *)(*pcVar2)();
          return pTVar6;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    InterfacePtr.Object = pFVar7;
    local_10.ReferenceController = pTVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&InterfacePtr.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  __return_storage_ptr__->Object = InterfacePtr.Object;
  FVar3 = InterfacePtr.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       InterfacePtr.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInterface @ 1486bf4c0

TSharedPtr<Audio::FParameterInterface,1> * __cdecl
Audio::SpatializationInterface::GetInterface
          (TSharedPtr<Audio::FParameterInterface,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<Audio::FParameterInterface,1> *pTVar6;
  FParameterInterface *pFVar7;
  FSharedReferencer<1> local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Audio::SpatializationInterface::GetInterface'::__l2::
             _dynamic_atexit_destructor_for__InterfacePtr__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (InterfacePtr.Object == (FParameterInterface *)0x0) {
    pTVar5 = ::operator_new(0x60);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      pFVar7 = (FParameterInterface *)&DAT_00000010;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &SharedPointerInternals::
            TIntrusiveReferenceController<`Audio::SpatializationInterface::GetInterface'::`2'::FInterface,1>
            ::_vftable_;
      `Audio::SpatializationInterface::GetInterface'::__l2::FInterface::FInterface(pTVar5 + 1);
      pFVar7 = (FParameterInterface *)(pTVar5 + 1);
      if (pFVar7 == (FParameterInterface *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<Audio::FParameterInterface,1> *)(*pcVar2)();
          return pTVar6;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    InterfacePtr.Object = pFVar7;
    local_10.ReferenceController = pTVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&InterfacePtr.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  __return_storage_ptr__->Object = InterfacePtr.Object;
  FVar3 = InterfacePtr.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       InterfacePtr.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMaturityTypeForChild @ 1486c10e0

EMaturityChildType __cdecl GetMaturityTypeForChild(USoundNode *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EMaturityChildType EVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  if (param_1 == (USoundNode *)0x0) {
    return ChildType_None;
  }
  pUVar7 = USoundNodeWavePlayer::StaticClass();
  iVar1 = (int)pUVar7->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar7->_padding_)) &&
     (pFVar2 = param_1[1].ChildNodes.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    return ChildType_NonMature - (((byte)pFVar2[0x364] & 0x20) != 0);
  }
  uVar8 = 0;
  lVar9 = 0;
  while( true ) {
    if ((param_1->ChildNodes).ArrayNum <= (int)uVar8) {
      return ChildType_None;
    }
    uVar5 = 0;
    if ((int)uVar8 < (param_1->ChildNodes).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    EVar6 = GetMaturityTypeForChild
                      (*(USoundNode **)((param_1->ChildNodes).AllocatorInstance.Data + lVar9));
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 8;
    if (EVar6 != ChildType_None) {
      return EVar6;
    }
  }
  pcVar3 = (code *)swi(3);
  EVar6 = (*pcVar3)();
  return EVar6;
}

// HandlePerUserHitTestingToggled @ 1486ca590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl HandlePerUserHitTestingToggled(IConsoleVariable *param_1)

{
  FSlateApplication *this;
  
  this = FSlateApplication::Get();
  FSlateApplicationBase::InvalidateAllWidgets((FSlateApplicationBase *)this,false);
  return;
}

// RetrieveStereoRenderTargetManager @ 1486ebe40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IStereoRenderTargetManager * __cdecl RetrieveStereoRenderTargetManager(bool param_1)

{
  IStereoRendering *pIVar1;
  code *pcVar2;
  UEngine *pUVar3;
  char cVar4;
  bool bVar5;
  IStereoRenderTargetManager *pIVar6;
  
  if ((param_1) &&
     (pIVar1 = (GEngine->StereoRenderingDevice).Object, pIVar1 != (IStereoRendering *)0x0)) {
    cVar4 = (**(code **)((longlong)*pIVar1 + 0x10))();
    pUVar3 = GEngine;
    if (cVar4 != '\0') {
      if ((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pIVar6 = (IStereoRenderTargetManager *)(*pcVar2)();
          return pIVar6;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001486ebeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar6 = (IStereoRenderTargetManager *)
               (**(code **)((longlong)*(pUVar3->StereoRenderingDevice).Object + 0x80))();
      return pIVar6;
    }
  }
  return (IStereoRenderTargetManager *)0x0;
}

// SetSoundDataTarget @ 1486efa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SoundConcurrencyPrivate::SetSoundDataTarget
          (FActiveSound *param_1,FConcurrencySoundData *param_2,float param_3,float param_4)

{
  USoundBase *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FName local_res10 [3];
  FString local_68 [6];
  
  fVar3 = param_2->DbTargetVolume;
  fVar2 = powf(__real_41200000,fVar3 * __real_3d4ccccd);
  if ((fVar2 < ConcurrencyMinVolumeScaleCVar) ||
     ((float)((uint)(fVar2 - ConcurrencyMinVolumeScaleCVar) & __xmm_7fffffff7fffffff7fffffff7fffffff
             ) <= __real_322bcc77)) {
    fVar2 = 0.0;
  }
  fVar4 = param_2->LerpTime;
  if (param_2->LerpTime <= __real_322bcc77) {
    fVar4 = __real_322bcc77;
  }
  fVar4 = param_2->Elapsed / fVar4;
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  param_2->DbStartVolume = fVar4 * (fVar3 - param_2->DbStartVolume) + param_2->DbStartVolume;
  fVar3 = ConcurrencyMinVolumeScaleCVar;
  if (ConcurrencyMinVolumeScaleCVar <= param_3) {
    fVar3 = param_3;
  }
  fVar3 = logf(fVar3);
  fVar3 = fVar3 * __real_410af967;
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  param_2->Elapsed = 0.0;
  param_2->DbTargetVolume = fVar3;
  param_2->LerpTime = param_4;
  if (((__real_322bcc77 < (float)((uint)(fVar2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
      && (pUVar1 = (param_1->Sound).field0_0x0.DebugPtr, pUVar1 != (USoundBase *)0x0)) &&
     (5 < (byte)LogAudioConcurrency._0_1_)) {
    local_res10[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res10,local_68);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Z_Construct_UClass_UButtonStyleAsset_NoRegister @ 1486f80d0

UClass * __cdecl Z_Construct_UClass_UButtonStyleAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ButtonStyleAsset",
               &Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton,
               UButtonStyleAsset::StaticRegisterNativesUButtonStyleAsset,0x3c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UButtonStyleAsset>,
               InternalVTableHelperCtorCaller<UButtonStyleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton;
}

// Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister @ 1486f8180

UClass * __cdecl Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CheckBoxStyleAsset",
               &Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton,
               UCheckBoxStyleAsset::StaticRegisterNativesUCheckBoxStyleAsset,0x980,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCheckBoxStyleAsset>,
               InternalVTableHelperCtorCaller<UCheckBoxStyleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton;
}

// Z_Construct_UClass_UEndpointSubmix_NoRegister @ 1486f8230

UClass * __cdecl Z_Construct_UClass_UEndpointSubmix_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EndpointSubmix",
               &Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton,
               UEndpointSubmix::StaticRegisterNativesUEndpointSubmix,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UEndpointSubmix>,InternalVTableHelperCtorCaller<UEndpointSubmix>,
               local_res8,USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton;
}

// Z_Construct_UClass_USkinnedAsset_NoRegister @ 1486f82f0

UClass * __cdecl Z_Construct_UClass_USkinnedAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkinnedAsset",
               &Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton,
               USkinnedAsset::StaticRegisterNativesUSkinnedAsset,0xe8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USkinnedAsset>,InternalVTableHelperCtorCaller<USkinnedAsset>,
               aFStackX_8,UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkinnedAsset.InnerSingleton;
}

// Z_Construct_UClass_USlateBrushAsset_NoRegister @ 1486f8300

UClass * __cdecl Z_Construct_UClass_USlateBrushAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SlateBrushAsset",
               &Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton,
               USlateBrushAsset::StaticRegisterNativesUSlateBrushAsset,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USlateBrushAsset>,
               InternalVTableHelperCtorCaller<USlateBrushAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton;
}

// Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister @ 1486f83b0

UClass * __cdecl Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SlateTextureAtlasInterface",
               &Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton,
               USlateTextureAtlasInterface::StaticRegisterNativesUSlateTextureAtlasInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateTextureAtlasInterface>,
               InternalVTableHelperCtorCaller<USlateTextureAtlasInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton;
}

// Z_Construct_UClass_USoundBase_NoRegister @ 1486f8470

UClass * __cdecl Z_Construct_UClass_USoundBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundBase",&Z_Registration_Info_UClass_USoundBase.InnerSingleton,
               USoundBase::StaticRegisterNativesUSoundBase,0x180,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundBase>,
               InternalVTableHelperCtorCaller<USoundBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundBase.InnerSingleton;
}

// Z_Construct_UClass_USoundCue_NoRegister @ 1486f8520

UClass * __cdecl Z_Construct_UClass_USoundCue_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundCue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundCue",&Z_Registration_Info_UClass_USoundCue.InnerSingleton,
               USoundCue::StaticRegisterNativesUSoundCue,0x578,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundCue>,InternalVTableHelperCtorCaller<USoundCue>,
               local_res8,USoundBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundCue.InnerSingleton;
}

// Z_Construct_UClass_USoundEffectPreset_NoRegister @ 1486f85e0

UClass * __cdecl Z_Construct_UClass_USoundEffectPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectPreset",
               &Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton,
               USoundEffectPreset::StaticRegisterNativesUSoundEffectPreset,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundEffectPreset>,
               InternalVTableHelperCtorCaller<USoundEffectPreset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton;
}

// Z_Construct_UClass_USoundGroups_NoRegister @ 1486f8690

UClass * __cdecl Z_Construct_UClass_USoundGroups_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundGroups.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundGroups",
               &Z_Registration_Info_UClass_USoundGroups.InnerSingleton,
               USoundGroups::StaticRegisterNativesUSoundGroups,0x88,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundGroups>,InternalVTableHelperCtorCaller<USoundGroups>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundGroups.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeAssetReferencer_NoRegister @ 1486f86a0

UClass * __cdecl Z_Construct_UClass_USoundNodeAssetReferencer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeAssetReferencer",
               &Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton,
               USoundNodeAssetReferencer::StaticRegisterNativesUSoundNodeAssetReferencer,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeAssetReferencer>,
               InternalVTableHelperCtorCaller<USoundNodeAssetReferencer>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeAssetReferencer.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeAttenuation_NoRegister @ 1486f8760

UClass * __cdecl Z_Construct_UClass_USoundNodeAttenuation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeAttenuation",
               &Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton,
               USoundNodeAttenuation::StaticRegisterNativesUSoundNodeAttenuation,0x428,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeAttenuation>,
               InternalVTableHelperCtorCaller<USoundNodeAttenuation>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeBranch_NoRegister @ 1486f8820

UClass * __cdecl Z_Construct_UClass_USoundNodeBranch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeBranch",
               &Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton,
               USoundNodeBranch::StaticRegisterNativesUSoundNodeBranch,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeBranch>,
               InternalVTableHelperCtorCaller<USoundNodeBranch>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeBranch.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeConcatenator_NoRegister @ 1486f88e0

UClass * __cdecl Z_Construct_UClass_USoundNodeConcatenator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeConcatenator",
               &Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton,
               USoundNodeConcatenator::StaticRegisterNativesUSoundNodeConcatenator,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeConcatenator>,
               InternalVTableHelperCtorCaller<USoundNodeConcatenator>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeConcatenator.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeDelay_NoRegister @ 1486f89a0

UClass * __cdecl Z_Construct_UClass_USoundNodeDelay_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDelay",
               &Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton,
               USoundNodeDelay::StaticRegisterNativesUSoundNodeDelay,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeDelay>,
               InternalVTableHelperCtorCaller<USoundNodeDelay>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDelay.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister @ 1486f8a60

UClass * __cdecl Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDialoguePlayer",
               &Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton,
               USoundNodeDialoguePlayer::StaticRegisterNativesUSoundNodeDialoguePlayer,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeDialoguePlayer>,
               InternalVTableHelperCtorCaller<USoundNodeDialoguePlayer>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister @ 1486f8b20

UClass * __cdecl Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDistanceCrossFade",
               &Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton,
               USoundNodeDistanceCrossFade::StaticRegisterNativesUSoundNodeDistanceCrossFade,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeDistanceCrossFade>,
               InternalVTableHelperCtorCaller<USoundNodeDistanceCrossFade>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeDoppler_NoRegister @ 1486f8be0

UClass * __cdecl Z_Construct_UClass_USoundNodeDoppler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDoppler",
               &Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton,
               USoundNodeDoppler::StaticRegisterNativesUSoundNodeDoppler,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeDoppler>,
               InternalVTableHelperCtorCaller<USoundNodeDoppler>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDoppler.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeEnveloper_NoRegister @ 1486f8ca0

UClass * __cdecl Z_Construct_UClass_USoundNodeEnveloper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeEnveloper",
               &Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton,
               USoundNodeEnveloper::StaticRegisterNativesUSoundNodeEnveloper,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeEnveloper>,
               InternalVTableHelperCtorCaller<USoundNodeEnveloper>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeEnveloper.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeGroupControl_NoRegister @ 1486f8d60

UClass * __cdecl Z_Construct_UClass_USoundNodeGroupControl_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeGroupControl",
               &Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton,
               USoundNodeGroupControl::StaticRegisterNativesUSoundNodeGroupControl,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeGroupControl>,
               InternalVTableHelperCtorCaller<USoundNodeGroupControl>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeGroupControl.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeLooping_NoRegister @ 1486f8e20

UClass * __cdecl Z_Construct_UClass_USoundNodeLooping_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeLooping",
               &Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton,
               USoundNodeLooping::StaticRegisterNativesUSoundNodeLooping,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeLooping>,
               InternalVTableHelperCtorCaller<USoundNodeLooping>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeLooping.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeMature_NoRegister @ 1486f8ee0

UClass * __cdecl Z_Construct_UClass_USoundNodeMature_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeMature",
               &Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton,
               USoundNodeMature::StaticRegisterNativesUSoundNodeMature,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeMature>,
               InternalVTableHelperCtorCaller<USoundNodeMature>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeMixer_NoRegister @ 1486f8fa0

UClass * __cdecl Z_Construct_UClass_USoundNodeMixer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeMixer",
               &Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton,
               USoundNodeMixer::StaticRegisterNativesUSoundNodeMixer,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeMixer>,
               InternalVTableHelperCtorCaller<USoundNodeMixer>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeMixer.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeModulatorContinuous_NoRegister @ 1486f9060

UClass * __cdecl Z_Construct_UClass_USoundNodeModulatorContinuous_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeModulatorContinuous",
               &Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton,
               USoundNodeModulatorContinuous::StaticRegisterNativesUSoundNodeModulatorContinuous,
               0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeModulatorContinuous>,
               InternalVTableHelperCtorCaller<USoundNodeModulatorContinuous>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeModulator_NoRegister @ 1486f9120

UClass * __cdecl Z_Construct_UClass_USoundNodeModulator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeModulator",
               &Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton,
               USoundNodeModulator::StaticRegisterNativesUSoundNodeModulator,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeModulator>,
               InternalVTableHelperCtorCaller<USoundNodeModulator>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeModulator.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeOscillator_NoRegister @ 1486f91e0

UClass * __cdecl Z_Construct_UClass_USoundNodeOscillator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeOscillator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeOscillator",
               &Z_Registration_Info_UClass_USoundNodeOscillator.InnerSingleton,
               USoundNodeOscillator::StaticRegisterNativesUSoundNodeOscillator,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeOscillator>,
               InternalVTableHelperCtorCaller<USoundNodeOscillator>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeOscillator.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister @ 1486f92a0

UClass * __cdecl Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeParamCrossFade",
               &Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton,
               USoundNodeParamCrossFade::StaticRegisterNativesUSoundNodeParamCrossFade,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundNodeParamCrossFade>,
               InternalVTableHelperCtorCaller<USoundNodeParamCrossFade>,local_res8,
               USoundNodeDistanceCrossFade::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeQualityLevel_NoRegister @ 1486f9360

UClass * __cdecl Z_Construct_UClass_USoundNodeQualityLevel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeQualityLevel",
               &Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton,
               USoundNodeQualityLevel::StaticRegisterNativesUSoundNodeQualityLevel,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeQualityLevel>,
               InternalVTableHelperCtorCaller<USoundNodeQualityLevel>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeRandom_NoRegister @ 1486f9420

UClass * __cdecl Z_Construct_UClass_USoundNodeRandom_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeRandom",
               &Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton,
               USoundNodeRandom::StaticRegisterNativesUSoundNodeRandom,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeRandom>,
               InternalVTableHelperCtorCaller<USoundNodeRandom>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeRandom.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeSoundClass_NoRegister @ 1486f94e0

UClass * __cdecl Z_Construct_UClass_USoundNodeSoundClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeSoundClass",
               &Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton,
               USoundNodeSoundClass::StaticRegisterNativesUSoundNodeSoundClass,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeSoundClass>,
               InternalVTableHelperCtorCaller<USoundNodeSoundClass>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeSwitch_NoRegister @ 1486f95a0

UClass * __cdecl Z_Construct_UClass_USoundNodeSwitch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeSwitch",
               &Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton,
               USoundNodeSwitch::StaticRegisterNativesUSoundNodeSwitch,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeSwitch>,
               InternalVTableHelperCtorCaller<USoundNodeSwitch>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeSwitch.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeWaveParam_NoRegister @ 1486f9660

UClass * __cdecl Z_Construct_UClass_USoundNodeWaveParam_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeWaveParam",
               &Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton,
               USoundNodeWaveParam::StaticRegisterNativesUSoundNodeWaveParam,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeWaveParam>,
               InternalVTableHelperCtorCaller<USoundNodeWaveParam>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeWaveParam.InnerSingleton;
}

// Z_Construct_UClass_USoundNodeWavePlayer_NoRegister @ 1486f9720

UClass * __cdecl Z_Construct_UClass_USoundNodeWavePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeWavePlayer",
               &Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton,
               USoundNodeWavePlayer::StaticRegisterNativesUSoundNodeWavePlayer,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeWavePlayer>,
               InternalVTableHelperCtorCaller<USoundNodeWavePlayer>,local_res8,
               USoundNodeAssetReferencer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton;
}

// Z_Construct_UClass_USoundSourceBus_NoRegister @ 1486f97e0

UClass * __cdecl Z_Construct_UClass_USoundSourceBus_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSourceBus",
               &Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton,
               USoundSourceBus::StaticRegisterNativesUSoundSourceBus,0x420,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSourceBus>,InternalVTableHelperCtorCaller<USoundSourceBus>,
               local_res8,USoundWave::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton;
}

// Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister @ 1486f98a0

UClass * __cdecl Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmixWithParentBase",
               &Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton,
               USoundSubmixWithParentBase::StaticRegisterNativesUSoundSubmixWithParentBase,0xf0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSubmixWithParentBase>,
               InternalVTableHelperCtorCaller<USoundSubmixWithParentBase>,local_res8,
               USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton;
}

// Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister @ 1486f9960

UClass * __cdecl Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundfieldEndpointSubmix",
               &Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton,
               USoundfieldEndpointSubmix::StaticRegisterNativesUSoundfieldEndpointSubmix,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEndpointSubmix>,
               InternalVTableHelperCtorCaller<USoundfieldEndpointSubmix>,local_res8,
               USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEndpointSubmix.InnerSingleton;
}

// Z_Construct_UClass_USoundfieldSubmix_NoRegister @ 1486f9a20

UClass * __cdecl Z_Construct_UClass_USoundfieldSubmix_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundfieldSubmix",
               &Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton,
               USoundfieldSubmix::StaticRegisterNativesUSoundfieldSubmix,0x118,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldSubmix>,
               InternalVTableHelperCtorCaller<USoundfieldSubmix>,local_res8,
               USoundSubmixWithParentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldSubmix.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature @ 1486f9ae0

UFunction * __cdecl Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature @ 1486f9b20

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType @ 1486f9b60

UEnum * __cdecl Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EDecompressionType @ 1486f9ba0

UEnum * __cdecl Z_Construct_UEnum_Engine_EDecompressionType(void)

{
  if (Z_Registration_Info_UEnum_EDecompressionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDecompressionType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDecompressionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDecompressionType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EGainParamMode @ 1486f9be0

UEnum * __cdecl Z_Construct_UEnum_Engine_EGainParamMode(void)

{
  if (Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EGainParamMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EModulationDestination @ 1486f9c20

UEnum * __cdecl Z_Construct_UEnum_Engine_EModulationDestination(void)

{
  if (Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton,
               &Z_Construct_UEnum_Engine_EModulationDestination_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior @ 1486f9c60

UEnum * __cdecl Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior(void)

{
  if (Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESoundDistanceCalc @ 1486f9ca0

UEnum * __cdecl Z_Construct_UEnum_Engine_ESoundDistanceCalc(void)

{
  if (Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESoundWaveCuePointOrigin @ 1486f9ce0

UEnum * __cdecl Z_Construct_UEnum_Engine_ESoundWaveCuePointOrigin(void)

{
  if (Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESoundWaveCuePointOrigin_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundWaveCuePointOrigin.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESoundWaveFFTSize @ 1486f9d20

UEnum * __cdecl Z_Construct_UEnum_Engine_ESoundWaveFFTSize(void)

{
  if (Z_Registration_Info_UEnum_ESoundWaveFFTSize.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundWaveFFTSize.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundWaveFFTSize.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EWindowTitleBarMode @ 1486f9d60

UEnum * __cdecl Z_Construct_UEnum_Engine_EWindowTitleBarMode(void)

{
  if (Z_Registration_Info_UEnum_EWindowTitleBarMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWindowTitleBarMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWindowTitleBarMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWindowTitleBarMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMorphTargetImportedSourceFileInfo @ 1486f9da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMorphTargetImportedSourceFileInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMorphTargetImportedSourceFileInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMorphTargetImportedSourceFileInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMorphTargetImportedSourceFileInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMorphTargetImportedSourceFileInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMorphTargetImportedSourceFileInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkeletalMaterial @ 1486f9e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkeletalMaterial(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMaterial.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkeletalMaterial.InnerSingleton,
               &Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkeletalMaterial.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSkeletalMaterial.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkeletalMeshLODInfo @ 1486f9ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkeletalMeshLODInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshLODInfo.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkeletalMeshLODInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshLODInfo.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSkeletalMeshLODInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundBaseEditorData @ 1486f9f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundBaseEditorData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundBaseEditorData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundBaseEditorData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundBaseEditorData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundBaseEditorData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSoundBaseEditorData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundClassEditorData @ 1486f9fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundClassEditorData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundClassEditorData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundClassEditorData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundClassEditorData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSoundClassEditorData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundNodeEditorData @ 1486fa020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundNodeEditorData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundNodeEditorData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundNodeEditorData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundNodeEditorData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSoundNodeEditorData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound @ 1486fa0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveEnvelopeDataPerSound.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveEnvelopeDataPerSound.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveEnvelopeDataPerSound.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveEnvelopeDataPerSound.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound @ 1486fa120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveSpectralDataPerSound.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveSpectralDataPerSound.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveSpectralDataPerSound.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveSpectralDataPerSound.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStreamedAudioPlatformData @ 1486fa1a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStreamedAudioPlatformData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStreamedAudioPlatformData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStreamedAudioPlatformData.InnerSingleton,
               &Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStreamedAudioPlatformData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStreamedAudioPlatformData.InnerSingleton;
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

// GeneratedByEnginePrefix'' @ 1504013b0

void __cdecl
`dynamic_atexit_destructor_for_'FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix.Data.AllocatorInstance.
               Data;
  if (FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FMorphTargetImportedSourceFileInfo::GeneratedByEnginePrefix.Data.AllocatorInstance.Data !=
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

// GroupControlSlotUsageMap'' @ 1504013d0

void __cdecl
`dynamic_atexit_destructor_for_'USoundNodeGroupControl::GroupControlSlotUsageMap__(void)

{
  USoundNodeGroupControl::GroupControlSlotUsageMap._72_4_ = 0;
  if (USoundNodeGroupControl::GroupControlSlotUsageMap._64_8_ != 0) {
    FMemory::Free((void *)USoundNodeGroupControl::GroupControlSlotUsageMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&USoundNodeGroupControl::GroupControlSlotUsageMap);
  return;
}

// OnCreateRenderThreadResources'' @ 150401410

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources);
  return;
}

// OnDestroyRenderThreadResources'' @ 150401450

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
OnDestroyRenderThreadResources__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_)
    ;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources);
  return;
}

// `dynamic_atexit_destructor_for_'Buckets'' @ 150401490

void __cdecl
`TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket'::__l2::
_dynamic_atexit_destructor_for__Buckets__(void)

{
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::
  ~FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>
            ((FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
             (`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
              ::__l2::Buckets.Elements + 4));
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::
  ~FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>
            ((FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
             (`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
              ::__l2::Buckets.Elements + 3));
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::
  ~FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>
            ((FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
             (`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
              ::__l2::Buckets.Elements + 2));
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::
  ~FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>
            ((FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
             (`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
              ::__l2::Buckets.Elements + 1));
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::
  ~FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>
            ((FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
             &`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
              ::__l2::Buckets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimSkinnedAssetISPCEnabled'' @ 1504014e0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimSkinnedAssetISPCEnabled__(void)

{
  CVarAnimSkinnedAssetISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimSkinnedAssetISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlockOnChunkLoadCompletion'' @ 150401500

void __cdecl _dynamic_atexit_destructor_for__CVarBlockOnChunkLoadCompletion__(void)

{
  CVarBlockOnChunkLoadCompletion._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBlockOnChunkLoadCompletion);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBypassRetainInSoundNodes'' @ 150401520

void __cdecl _dynamic_atexit_destructor_for__CVarBypassRetainInSoundNodes__(void)

{
  CVarBypassRetainInSoundNodes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBypassRetainInSoundNodes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarConcurrencyMinDistanceDelta'' @ 150401540

void __cdecl _dynamic_atexit_destructor_for__CVarConcurrencyMinDistanceDelta__(void)

{
  CVarConcurrencyMinDistanceDelta._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarConcurrencyMinDistanceDelta);
  return;
}

// `dynamic_atexit_destructor_for_'CVarConcurrencyMinVolumeScale'' @ 150401560

void __cdecl _dynamic_atexit_destructor_for__CVarConcurrencyMinVolumeScale__(void)

{
  CVarConcurrencyMinVolumeScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarConcurrencyMinVolumeScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableRetaining'' @ 150401580

void __cdecl _dynamic_atexit_destructor_for__CVarDisableRetaining__(void)

{
  CVarDisableRetaining._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableRetaining);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDispatchToGameThreadOnChunkRequest'' @ 1504015a0

void __cdecl _dynamic_atexit_destructor_for__CVarDispatchToGameThreadOnChunkRequest__(void)

{
  CVarDispatchToGameThreadOnChunkRequest._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDispatchToGameThreadOnChunkRequest);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnablePerUserHitTesting'' @ 1504015c0

void __cdecl _dynamic_atexit_destructor_for__CVarEnablePerUserHitTesting__(void)

{
  CVarEnablePerUserHitTesting._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnablePerUserHitTesting);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFixUpBrokenSubmixAssets'' @ 1504015e0

void __cdecl _dynamic_atexit_destructor_for__CVarFixUpBrokenSubmixAssets__(void)

{
  CVarFixUpBrokenSubmixAssets._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFixUpBrokenSubmixAssets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceNonStreamingInEditor'' @ 150401600

void __cdecl _dynamic_atexit_destructor_for__CVarForceNonStreamingInEditor__(void)

{
  CVarForceNonStreamingInEditor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceNonStreamingInEditor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarManuallyPrimeChildNodes'' @ 150401620

void __cdecl _dynamic_atexit_destructor_for__CVarManuallyPrimeChildNodes__(void)

{
  CVarManuallyPrimeChildNodes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarManuallyPrimeChildNodes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxRandomBranches'' @ 150401640

void __cdecl _dynamic_atexit_destructor_for__CVarMaxRandomBranches__(void)

{
  CVarMaxRandomBranches._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxRandomBranches);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMemoryForSkinnedAssetCompile'' @ 150401660

void __cdecl _dynamic_atexit_destructor_for__CVarMemoryForSkinnedAssetCompile__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMemoryForSkinnedAssetCompile);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrimeDelayedSoundNodes'' @ 150401680

void __cdecl _dynamic_atexit_destructor_for__CVarPrimeDelayedSoundNodes__(void)

{
  CVarPrimeDelayedSoundNodes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrimeDelayedSoundNodes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrimeRandomSoundNodes'' @ 1504016a0

void __cdecl _dynamic_atexit_destructor_for__CVarPrimeRandomSoundNodes__(void)

{
  CVarPrimeRandomSoundNodes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrimeRandomSoundNodes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRetainInlinedFirstChunk'' @ 1504016c0

void __cdecl _dynamic_atexit_destructor_for__CVarRetainInlinedFirstChunk__(void)

{
  CVarRetainInlinedFirstChunk._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRetainInlinedFirstChunk);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowAllCanvases'' @ 1504016e0

void __cdecl _dynamic_atexit_destructor_for__CVarShowAllCanvases__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowAllCanvases);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowDebugCanvas'' @ 150401700

void __cdecl _dynamic_atexit_destructor_for__CVarShowDebugCanvas__(void)

{
  CVarShowDebugCanvas._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowDebugCanvas);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowPlayerCanvas'' @ 150401720

void __cdecl _dynamic_atexit_destructor_for__CVarShowPlayerCanvas__(void)

{
  CVarShowPlayerCanvas._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowPlayerCanvas);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowViewportSlot'' @ 150401740

void __cdecl _dynamic_atexit_destructor_for__CVarShowViewportSlot__(void)

{
  CVarShowViewportSlot._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowViewportSlot);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkeletalMeshThrottleNaniteRayTracingUpdates'' @ 150401760

void __cdecl _dynamic_atexit_destructor_for__CVarSkeletalMeshThrottleNaniteRayTracingUpdates__(void)

{
  CVarSkeletalMeshThrottleNaniteRayTracingUpdates._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkeletalMeshThrottleNaniteRayTracingUpdates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoundWaveDefaultLoadingBehavior'' @ 150401780

void __cdecl _dynamic_atexit_destructor_for__CVarSoundWaveDefaultLoadingBehavior__(void)

{
  CVarSoundWaveDefaultLoadingBehavior._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSoundWaveDefaultLoadingBehavior);
  return;
}

// `dynamic_atexit_destructor_for_'CvarAllowReverbForMultichannelSources'' @ 1504017a0

void __cdecl _dynamic_atexit_destructor_for__CvarAllowReverbForMultichannelSources__(void)

{
  CvarAllowReverbForMultichannelSources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarAllowReverbForMultichannelSources);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1504017c0

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504017f0

void __cdecl
```FDebugCanvasDrawer::Draw_RenderThread'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504017f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 150401810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`USkinnedAsset::GetActiveSocketList'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Dummy;
  if (_Dummy == (void *)0x0) {
    return;
  }
  if (_Dummy != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dummy'' @ 150401830

void __cdecl
`USkinnedAsset::GetMeshLodInfoDummyArray'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  DestructItems<FSkeletalMeshLODInfo,int>
            ((FSkeletalMeshLODInfo *)::Dummy.AllocatorInstance.Data,::Dummy.ArrayNum);
  if (::Dummy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Dummy.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 150401870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `USkinnedAsset::GetMorphTargets'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Dummy;
  if (_Dummy == (void *)0x0) {
    return;
  }
  if (_Dummy != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dummy'' @ 150401890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `USkinnedAsset::GetMorphTargets'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Dummy;
  if (_Dummy == (void *)0x0) {
    return;
  }
  if (_Dummy != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dummy'' @ 1504018b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`USkinnedAsset::GetRefBasesInvMatrix'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Dummy;
  if (_Dummy == (void *)0x0) {
    return;
  }
  if (_Dummy != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dummy'' @ 1504018d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`USkinnedAsset::GetRefBasesInvMatrix'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Dummy;
  if (_Dummy == (void *)0x0) {
    return;
  }
  if (_Dummy != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Dummy'' @ 1504018f0

void __cdecl `USkinnedAsset::GetRefSkeleton'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  FReferenceSkeleton::~FReferenceSkeleton
            (&`public:_virtual_struct_FReferenceSkeleton&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)___ptr64'
              ::__l2::Dummy);
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 150401910

void __cdecl `USkinnedAsset::GetRefSkeleton'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  FReferenceSkeleton::~FReferenceSkeleton
            (&`public:_virtual_struct_FReferenceSkeleton_const&___ptr64___cdecl_USkinnedAsset::GetRefSkeleton(void)const___ptr64'
              ::__l2::Dummy);
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 150401930

void __cdecl
`USkinnedAsset::GetSkeletalMaterialDummyArray'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Dummy.AllocatorInstance.Data;
  if (::Dummy.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Dummy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DumpBakedAnalysisDataCmd'' @ 150401950

void __cdecl _dynamic_atexit_destructor_for__DumpBakedAnalysisDataCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpBakedAnalysisDataCmd);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 150401970

void __cdecl
`FMorphTargetImportedSourceFileInfo::GetSourceFilename'::__l2::
_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite'' @ 150401990

void __cdecl
_dynamic_atexit_destructor_for__GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite__
          (void)

{
  FSkeletalMeshUpdateChannel::FBackend::~FBackend
            ((FBackend *)&GSkeletalMeshUpdateChannelBackend_FSkeletalMeshUpdatePacketNanite);
  return;
}

// `dynamic_atexit_destructor_for_'GSoundSubmixCustomVersion'' @ 1504019b0

void __cdecl _dynamic_atexit_destructor_for__GSoundSubmixCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GSoundSubmixCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'GameLayerManagerInstances'' @ 1504019d0

void __cdecl CanvasVisibility::_dynamic_atexit_destructor_for__GameLayerManagerInstances__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GameLayerManagerInstances.AllocatorInstance.Data;
  if (GameLayerManagerInstances.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GameLayerManagerInstances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InterfacePtr'' @ 1504019f0

void __cdecl
`Audio::AttenuationInterface::GetInterface'::__l2::_dynamic_atexit_destructor_for__InterfacePtr__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InterfacePtr.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InterfacePtr'' @ 150401a10

void __cdecl
`Audio::ListenerOrientationInterface::GetInterface'::__l2::
_dynamic_atexit_destructor_for__InterfacePtr__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InterfacePtr.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InterfacePtr'' @ 150401a30

void __cdecl
`Audio::SourceOrientationInterface::GetInterface'::__l2::
_dynamic_atexit_destructor_for__InterfacePtr__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InterfacePtr.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InterfacePtr'' @ 150401a50

void __cdecl
`Audio::SpatializationInterface::GetInterface'::__l2::_dynamic_atexit_destructor_for__InterfacePtr__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InterfacePtr.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioConcurrency'' @ 150401a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioConcurrency__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioConcurrency);
  return;
}

// `dynamic_atexit_destructor_for_'LogSkinnedAsset'' @ 150401a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSkinnedAsset__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSkinnedAsset);
  return;
}

// `dynamic_atexit_destructor_for_'LogSlateSoundDevice'' @ 150401ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSlateSoundDevice__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSlateSoundDevice);
  return;
}

// `dynamic_atexit_destructor_for_'LogSoundNodeGroupControl'' @ 150401ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSoundNodeGroupControl__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSoundNodeGroupControl);
  return;
}

// `dynamic_atexit_destructor_for_'LogViewport'' @ 150401af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogViewport__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogViewport);
  return;
}

// `dynamic_atexit_destructor_for_'NullRef'' @ 150401b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FSlateCanvasRenderTarget::GetRenderTargetTexture'::__l2::_dynamic_atexit_destructor_for__NullRef__
          (void)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  FRHIResource *this;
  bool bVar4;
  uint uVar5;
  
  this = _NullRef;
  if (_NullRef == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &_NullRef->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ReportedSounds'' @ 150401b30

void __cdecl `USoundWave::Parse'::__l243::_dynamic_atexit_destructor_for__ReportedSounds__(void)

{
  ReportedSounds.HashSize = 0;
  if (ReportedSounds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)ReportedSounds.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundWave_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundWave_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ReportedSounds.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'SplitOn'' @ 150401b70

void __cdecl
`FSlateGameResources::GetCleanName'::__l2::_dynamic_atexit_destructor_for__SplitOn__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SplitOn.Data.AllocatorInstance.Data;
  if (SplitOn.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SplitOn.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 15052f490

bool __thiscall
`SoundWave_Private::GetDefaultLoadingBehaviorCVar'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5972747921735549100>);
  if (bVar2) {
    EnumToString((ESoundWaveLoadingBehavior)SoundWaveDefaultLoadingBehaviorCVar);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735549100>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

