// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 160

// ModularFeatureSingleton'' @ 1413fe250

void __cdecl
`dynamic_initializer_for_'FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDLSSTemporalUpscalerModularFeature::
         ModularFeatureSingleton__);
  return;
}

// OnCreateRenderThreadResources'' @ 1413fe270

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 1413fe290

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// ResolutionSettings'' @ 1413fe2b0

void __cdecl `dynamic_initializer_for_'FDLSSUpscaler::ResolutionSettings__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDLSSUpscaler::ResolutionSettings__);
  return;
}

// `dynamic_initializer_for_'CVarNGXAutomationEnable'' @ 1413fe2d0

void __cdecl _dynamic_initializer_for__CVarNGXAutomationEnable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarNGXAutomationEnable,L"r.NGX.Automation.Enable",local_res8,
             L"Enable automation for NGX DLSS image quality and performance evaluation. (default = 0)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXAutomationEnable__);
  return;
}

// `dynamic_initializer_for_'CVarNGXAutomationNonGameViews'' @ 1413fe320

void __cdecl _dynamic_initializer_for__CVarNGXAutomationNonGameViews__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXAutomationNonGameViews,L"r.NGX.Automation.NonGameViews",local_res8,
             L"Enable NGX DLSS image quality and performance automation for non-game views. (default = 0). \n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXAutomationNonGameViews__);
  return;
}

// `dynamic_initializer_for_'CVarNGXAutomationViewIndex'' @ 1413fe370

void __cdecl _dynamic_initializer_for__CVarNGXAutomationViewIndex__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXAutomationViewIndex,L"r.NGX.Automation.ViewIndex",local_res8,
             L"Select which view to use with NGX DLSS image quality and performance automation. (default = 0). \n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXAutomationViewIndex__);
  return;
}

// `dynamic_initializer_for_'CVarNGXBinarySearchOrder'' @ 1413fe3c0

void __cdecl _dynamic_initializer_for__CVarNGXBinarySearchOrder__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXBinarySearchOrder,L"r.NGX.BinarySearchOrder",local_res8,
             L"0: automatic: (default)\n   use custom binaries from project and launch folder $(ProjectDir)/Binaries/ThirdParty/NVIDIA/NGX/$(Platform) if present\n   fallback to generic binaries from plugin folder\n1: force generic binaries from plugin folder, fail if not found\n2: force custom binaries from project or launch folder, fail if not found\n3: force generic development binaries from plugin folder, fail if not found. This is only supported in non-shipping build configurations\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarNGXBinarySearchOrder__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSAutoExposure'' @ 1413fe410

void __cdecl _dynamic_initializer_for__CVarNGXDLSSAutoExposure__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSAutoExposure,L"r.NGX.DLSS.AutoExposure",local_res8,
             L"0: Use the engine-computed exposure value for input images to DLSS - in some cases this may reduce artifacts\n1: Enable DLSS internal auto-exposure instead of the application provided one (default)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSAutoExposure__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSBiasCurrentColorMask'' @ 1413fe460

void __cdecl _dynamic_initializer_for__CVarNGXDLSSBiasCurrentColorMask__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSBiasCurrentColorMask,L"r.NGX.DLSS.BiasCurrentColorMask",local_res8,
             L"Enable/Disable support for BiasCurrentColorMask.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSBiasCurrentColorMask__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSBiasCurrentColorMaskStencilValue'' @ 1413fe4b0

void __cdecl _dynamic_initializer_for__CVarNGXDLSSBiasCurrentColorMaskStencilValue__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSBiasCurrentColorMaskStencilValue,
             L"r.NGX.DLSS.BiasCurrentColorMaskStencilValue",local_res8,
             L"The value that would be considered as Bias Color in the custom depth stencil buffer, Must not be set to 0!\n -1: Use project settings value\n>=1: Use CVar Value as stencil value, Note: must be positive, non-zero.\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSBiasCurrentColorMaskStencilValue__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSBuiltInDenoiserOverride'' @ 1413fe500

void __cdecl _dynamic_initializer_for__CVarNGXDLSSBuiltInDenoiserOverride__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSBuiltInDenoiserOverride,L"r.NGX.DLSS.BuiltInDenoiserOverride",local_res8,
             L"Change what happens to the built-in denoisers\n-1: automatic, depending on r.NGX.DLSS.DenoiserMode (default)\n 0: skip all built-in denoising\n 1: use built-in denoising\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSBuiltInDenoiserOverride__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSDenoiserMode'' @ 1413fe550

void __cdecl _dynamic_initializer_for__CVarNGXDLSSDenoiserMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSDenoiserMode,L"r.NGX.DLSS.DenoiserMode",local_res8,
             L"Configures how DLSS denoises\n0: off, no denoising (default)\n1: DLSS-RR enabled\n",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSDenoiserMode__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSDilateMotionVectors'' @ 1413fe5a0

void __cdecl _dynamic_initializer_for__CVarNGXDLSSDilateMotionVectors__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSDilateMotionVectors,L"r.NGX.DLSS.DilateMotionVectors",local_res8,
             L" 0: pass low resolution motion vectors into DLSS-SR\n 1: pass dilated high resolution motion vectors into DLSS-SR. This can help with improving image quality of thin details. (default)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSDilateMotionVectors__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSEnable'' @ 1413fe5f0

void __cdecl _dynamic_initializer_for__CVarNGXDLSSEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSEnable,L"r.NGX.DLSS.Enable",local_res8,L"Enable/Disable DLSS entirely.",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSEnable__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSFeatureCreationNode'' @ 1413fe640

void __cdecl _dynamic_initializer_for__CVarNGXDLSSFeatureCreationNode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSFeatureCreationNode,L"r.NGX.DLSS.FeatureCreationNode",local_res8,
             L"Determines which GPU the DLSS feature is getting created on\n-1: Create on the GPU the command list is getting executed on (default)\n 0: Create on GPU node 0 \n 1: Create on GPU node 1 \n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSFeatureCreationNode__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSFeatureVisibilityMask'' @ 1413fe690

void __cdecl _dynamic_initializer_for__CVarNGXDLSSFeatureVisibilityMask__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSFeatureVisibilityMask,L"r.NGX.DLSS.FeatureVisibilityMask",local_res8,
             L"Determines which GPU the DLSS feature is visible to\n-1: Visible to the GPU the command list is getting executed on (default)\n 1: visible to GPU node 0 \n 2:  visible to GPU node 1 \n 3:  visible to GPU node 0 and GPU node 1\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSFeatureVisibilityMask__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSMinimumWindowsBuildVersion'' @ 1413fe6e0

void __cdecl _dynamic_initializer_for__CVarNGXDLSSMinimumWindowsBuildVersion__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x3fab;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSMinimumWindowsBuildVersion,L"r.NGX.DLSS.MinimumWindowsBuildVersion",
             local_res8,
             L"Sets the minimum Windows 10 build version required to enable DLSS. (default: 16299 for v1709, Windows 10 Fall 2017 Creators Update 64-bit)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSMinimumWindowsBuildVersion__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSPresetSetting'' @ 1413fe730

void __cdecl _dynamic_initializer_for__CVarNGXDLSSPresetSetting__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSPresetSetting,L"r.NGX.DLSS.Preset",local_res8,
             L"DLSS-SR/DLAA preset setting. Allows selecting a different DL model than the default\n  0: Use default preset or ini value\n  1: Force preset A\n  2: Force preset B\n  3: Force preset C\n  4: Force preset D\n  5: Force preset E\n  6: Force preset F\n  7: Force preset G\n  8,9: Unsupported preset\n 10: Force preset J\n 11: Force preset K\n 12: Force preset L\n 13: Force preset M\n 14: Force preset N\n 15: Force preset O"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSPresetSetting__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSRRPresetSetting'' @ 1413fe780

void __cdecl _dynamic_initializer_for__CVarNGXDLSSRRPresetSetting__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSRRPresetSetting,L"r.NGX.DLSSRR.Preset",local_res8,
             L"DLSS-RR/DLAA preset setting. Allows selecting a different DL model than the default\n  0: Use default preset or ini value\n  1: Force preset A\n  2: Force preset B\n  3: Force preset C\n  4: Force preset D\n  5: Force preset E\n  6: Force preset F\n  7: Force preset G\n  8: Force preset H\n  9: Force preset I\n 10: Force preset J\n 11: Force preset K\n 12: Force preset L\n 13: Force preset M\n 14: Force preset N\n 15: Force preset O"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSRRPresetSetting__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSReflectionsTemporalAA'' @ 1413fe7d0

void __cdecl _dynamic_initializer_for__CVarNGXDLSSReflectionsTemporalAA__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSReflectionsTemporalAA,L"r.NGX.DLSS.Reflections.TemporalAA",local_res8,
             L"Apply a temporal AA pass on the denoised reflections",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSReflectionsTemporalAA__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSReleaseMemoryOnDelete'' @ 1413fe820

void __cdecl _dynamic_initializer_for__CVarNGXDLSSReleaseMemoryOnDelete__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSReleaseMemoryOnDelete,L"r.NGX.DLSS.ReleaseMemoryOnDelete",local_res8,
             L"Enabling/disable releasing DLSS related memory on the NGX side when DLSS features get released.(default=1)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSReleaseMemoryOnDelete__);
  return;
}

// `dynamic_initializer_for_'CVarNGXDLSSWaterReflectionsTemporalAA'' @ 1413fe870

void __cdecl _dynamic_initializer_for__CVarNGXDLSSWaterReflectionsTemporalAA__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXDLSSWaterReflectionsTemporalAA,L"r.NGX.DLSS.WaterReflections.TemporalAA",
             local_res8,L"Apply a temporal AA pass on the denoised water reflections",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXDLSSWaterReflectionsTemporalAA__);
  return;
}

// `dynamic_initializer_for_'CVarNGXEnable'' @ 1413fe8c0

void __cdecl _dynamic_initializer_for__CVarNGXEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXEnable,L"r.NGX.Enable",local_res8,
             L"Whether the NGX library should be loaded. This allow to have the DLSS plugin enabled but avoiding potential incompatibilities by skipping the driver side NGX parts of DLSS. Can also be set on the command line via -ngxenable and -ngxdisable"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarNGXEnable__);
  return;
}

// `dynamic_initializer_for_'CVarNGXEnableAllowCommandLine'' @ 1413fe910

void __cdecl _dynamic_initializer_for__CVarNGXEnableAllowCommandLine__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXEnableAllowCommandLine,L"r.NGX.Enable.AllowCommandLine",local_res8,
             L"Whether to allow to override r.NGX.Enable with -ngxenable and -ngxdisable",4);
  atexit(_dynamic_atexit_destructor_for__CVarNGXEnableAllowCommandLine__);
  return;
}

// `dynamic_initializer_for_'CVarNGXEnableAlphaUpscaling'' @ 1413fe960

void __cdecl _dynamic_initializer_for__CVarNGXEnableAlphaUpscaling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXEnableAlphaUpscaling,L"r.NGX.DLSS.EnableAlphaUpscaling",local_res8,
             L"Enables Alpha channel upscaling\nNote: r.PostProcessing.PropagateAlpha MUST be enabled for this feature to work.\n -1: based of r.PostProcessing.PropagateAlpha (default);\n  0: disabled;\n  1: enabled.\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNGXEnableAlphaUpscaling__);
  return;
}

// `dynamic_initializer_for_'CVarNGXProjectIdentifier'' @ 1413fe9b0

void __cdecl _dynamic_initializer_for__CVarNGXProjectIdentifier__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNGXProjectIdentifier,L"r.NGX.ProjectIdentifier",local_res8,
             L"0: automatic: (default)\n   use NVIDIA NGX Application ID if non-zero, otherwise use UE Project ID)\n1: force UE Project ID\n2: force NVIDIA NGX Application ID (set via the Project Settings -> NVIDIA DLSS plugin)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarNGXProjectIdentifier__);
  return;
}

// `dynamic_initializer_for_'DeprecatedRRPresets'' @ 1413fea00

void __cdecl _dynamic_initializer_for__DeprecatedRRPresets__(void)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  local_res8 = 0x201;
  local_resa = 3;
  DeprecatedRRPresets.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,3,0,&DeprecatedRRPresets.AllocatorInstance,3,&DeprecatedRRPresets.ArrayMax);
  memcpy(DeprecatedRRPresets.AllocatorInstance.Data,&local_res8,3);
  atexit(_dynamic_atexit_destructor_for__DeprecatedRRPresets__);
  return;
}

// `dynamic_initializer_for_'DeprecatedSRPresets'' @ 1413fea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__DeprecatedSRPresets__(void)

{
  undefined1 auStackY_58 [32];
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  local_18 = 0x4030201;
  local_14 = 5;
  DeprecatedSRPresets.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,5,0,&DeprecatedSRPresets.AllocatorInstance,5,&DeprecatedSRPresets.ArrayMax);
  memcpy(DeprecatedSRPresets.AllocatorInstance.Data,&local_18,5);
  atexit(_dynamic_atexit_destructor_for__DeprecatedSRPresets__);
  return;
}

// `dynamic_initializer_for_'GPUStat_DLSS'' @ 1413feb20

void __cdecl _dynamic_initializer_for__GPUStat_DLSS__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_DLSS__);
  return;
}

// `dynamic_initializer_for_'LogDLSS'' @ 1413feb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDLSS__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDLSS,L"LogDLSS",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogDLSS__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDLSS'' @ 1413feb80

void __cdecl _dynamic_initializer_for__ModuleRegistrantDLSS__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DLSS";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DLSS",4);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDLSSModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion'' @ 1413febd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesAmbientOcclusion>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesAmbientOcclusion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion,
               *pFVar1,L"Ambient Occlusion","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesLightCache'' @ 1413fec60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesLightCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesLightCache ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesLightCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesLightCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesLightCache,
               *pFVar1,L"Light Cache","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking'' @ 1413fecf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesMaterialBaking>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesMaterialBaking");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking,
               *pFVar1,L"Material Baking","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesShadows'' @ 1413fed80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesShadows__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesShadows ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesShadows>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesShadows");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesShadows,*pFVar1,
               L"Shadows","STATGROUP_HeterogeneousVolumesRT","STATCAT_HeterogeneousVolumes",
               L"Heterogeneous Volumes RT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering'' @ 1413fee10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesSingleScattering>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesSingleScattering");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering,
               *pFVar1,L"Single Scattering","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSS_Private_DLSSUpscalerModularFeature_h__Script_DLSS_2457477330'' @ 1413feea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSS_Private_DLSSUpscalerModularFeature_h__Script_DLSS_2457477330__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DLSS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSS_Private_DLSSUpscalerModularFeature_h__Script_DLSS_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSS_Private_DLSSUpscalerModularFeature_h__Script_DLSS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h__Script_DLSS_928703661'' @ 1413feef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h__Script_DLSS_928703661__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DLSS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h__Script_DLSS_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h__Script_DLSS_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DLSS'' @ 1413fef40

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DLSS__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xb7301c79;
  local_res8[0].DeclarationsHash = 0xba9a1f1a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DLSS,L"/Script/DLSS",
             &Z_Registration_Info_UPackage__Script_DLSS,local_res8);
  return;
}

// Z_Construct_UPackage__Script_DLSS @ 14de1d8d0

UPackage * __cdecl Z_Construct_UPackage__Script_DLSS(void)

{
  if (Z_Registration_Info_UPackage__Script_DLSS.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DLSS.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DLSS.OuterSingleton;
}

// Z_Construct_UClass_UDLSSOverrideSettings @ 14de1da70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDLSSOverrideSettings(void)

{
  if (Z_Registration_Info_UClass_UDLSSOverrideSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDLSSOverrideSettings.OuterSingleton,
               &Z_Construct_UClass_UDLSSOverrideSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDLSSOverrideSettings.OuterSingleton;
}

// Z_Construct_UClass_UDLSSSettings @ 14de1dab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDLSSSettings(void)

{
  if (Z_Registration_Info_UClass_UDLSSSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDLSSSettings.OuterSingleton,
               &Z_Construct_UClass_UDLSSSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDLSSSettings.OuterSingleton;
}

// Z_Construct_UEnum_DLSS_EDLSSPreset @ 14de1daf0

UEnum * __cdecl Z_Construct_UEnum_DLSS_EDLSSPreset(void)

{
  if (Z_Registration_Info_UEnum_EDLSSPreset.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDLSSPreset.InnerSingleton,
               &Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDLSSPreset.InnerSingleton;
}

// Z_Construct_UEnum_DLSS_EDLSSRRPreset @ 14de1db30

UEnum * __cdecl Z_Construct_UEnum_DLSS_EDLSSRRPreset(void)

{
  if (Z_Registration_Info_UEnum_EDLSSRRPreset.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDLSSRRPreset.InnerSingleton,
               &Z_Construct_UEnum_DLSS_EDLSSRRPreset_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDLSSRRPreset.InnerSingleton;
}

// Z_Construct_UEnum_DLSS_EDLSSSettingOverride @ 14de1db70

UEnum * __cdecl Z_Construct_UEnum_DLSS_EDLSSSettingOverride(void)

{
  if (Z_Registration_Info_UEnum_EDLSSSettingOverride.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDLSSSettingOverride.InnerSingleton,
               &Z_Construct_UEnum_DLSS_EDLSSSettingOverride_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDLSSSettingOverride.InnerSingleton;
}

// EDLSSSettingOverride_StaticEnum @ 14de1dbb0

UEnum * __cdecl EDLSSSettingOverride_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDLSSSettingOverride.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSSettingOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSSettingOverride,(UObject *)pUVar1,
                       L"EDLSSSettingOverride");
  }
  return Z_Registration_Info_UEnum_EDLSSSettingOverride.OuterSingleton;
}

// EDLSSPreset_StaticEnum @ 14de1dbf0

UEnum * __cdecl EDLSSPreset_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSPreset,(UObject *)pUVar1,L"EDLSSPreset");
  }
  return Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton;
}

// EDLSSRRPreset_StaticEnum @ 14de1dc30

UEnum * __cdecl EDLSSRRPreset_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDLSSRRPreset.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSRRPreset.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSRRPreset,(UObject *)pUVar1,L"EDLSSRRPreset");
  }
  return Z_Registration_Info_UEnum_EDLSSRRPreset.OuterSingleton;
}

// NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit @ 14de1dc70

void __cdecl
Z_Construct_UClass_UDLSSOverrideSettings_Statics::
NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bAllowOTAUpdate_SetBit @ 14de1dc80

void __cdecl Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bAllowOTAUpdate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bEnableDLSSD3D12_SetBit @ 14de1dc90

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D12_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bEnableDLSSD3D11_SetBit @ 14de1dca0

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D11_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// NewProp_bEnableDLSSVulkan_SetBit @ 14de1dcb0

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSVulkan_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  return;
}

// NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit @ 14de1dcc0

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewProp_bEnableDLSSInEditorViewports_SetBit @ 14de1dcd0

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInEditorViewports_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  return;
}

// NewProp_bEnableDLSSInPlayInEditorViewports_SetBit @ 14de1dce0

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInPlayInEditorViewports_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return;
}

// NewProp_bShowDLSSSDebugOnScreenMessages_SetBit @ 14de1dcf0

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSSDebugOnScreenMessages_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  return;
}

// NewProp_bGenericDLSSSRBinaryExists_SetBit @ 14de1dd00

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSSRBinaryExists_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bCustomDLSSSRBinaryExists_SetBit @ 14de1dd10

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSSRBinaryExists_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bGenericDLSSRRBinaryExists_SetBit @ 14de1dd20

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSRRBinaryExists_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bCustomDLSSRRBinaryExists_SetBit @ 14de1dd30

void __cdecl
Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSRRBinaryExists_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality @ 14de1dda0

UEnum * __cdecl Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality(void)

{
  if (Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.InnerSingleton,
               &Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.InnerSingleton;
}

// EDLSSUpscalerModularFeatureQuality_StaticEnum @ 14de1dde0

UEnum * __cdecl EDLSSUpscalerModularFeatureQuality_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality,(UObject *)pUVar1,
                       L"EDLSSUpscalerModularFeatureQuality");
  }
  return Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton;
}

// NewStructOps @ 14de1de20

void * __cdecl
Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDLSSUpscalerModularFeatureSettings,&UE::CoreUObject::Private::Construct<FDLSSUpscalerModularFeatureSettings>,&UE::CoreUObject::Private::ConstructForTests<FDLSSUpscalerModularFeatureSettings>,&UE::CoreUObject::Private::Destruct<FDLSSUpscalerModularFeatureSettings>,&UE::CoreUObject::Private::Copy<FDLSSUpscalerModularFeatureSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14de1de60

void * __thiscall
IDLSSModuleInterface::_scalar_deleting_destructor_(IDLSSModuleInterface *this,uint param_1)

{
  *this = (IDLSSModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de1f370

void * __thiscall FDLSSModule::_scalar_deleting_destructor_(FDLSSModule *this,uint param_1)

{
  NGXRHI *pNVar1;
  FDLSSDenoiser *pFVar2;
  FDLSSUpscaler *pFVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NGXAutomationViewExtension).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DLSSUpscalerViewExtension).SharedReferenceCount.ReferenceController);
  pNVar1 = (this->NGXRHIExtensions).Ptr;
  if (pNVar1 != (NGXRHI *)0x0) {
    (**(code **)pNVar1->_padding_)(pNVar1,1);
  }
  pFVar2 = (this->DLSSDenoiser).Ptr;
  if (pFVar2 != (FDLSSDenoiser *)0x0) {
    pFVar2->_padding_ = (longlong)&___7IScreenSpaceDenoiser__6B_;
    ::operator_delete(pFVar2,0x18);
  }
  pFVar3 = (this->DLSSUpscaler).Ptr;
  if (pFVar3 != (FDLSSUpscaler *)0x0) {
    pFVar3->_padding_ = (longlong)&___7ICustomResourcePool__6B_;
    ::operator_delete(pFVar3,0x10);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// AddPassInternal<FDLSSShaderParameters,`FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::__l60::<lambda_2>_> @ 14de1fb60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FDLSSShaderParameters,_FDLSSSceneViewFamilyUpscaler::AddDLSSPass_::__l60::<lambda_2>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FDLSSShaderParameters *param_3,ERDGPassFlags param_4,<lambda_2> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ERDGPassFlags EVar4;
  int iVar5;
  wchar_t *pwVar6;
  FRDGPass *pFVar7;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_4);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x270,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRDGPass *)(*pcVar2)();
      return pFVar7;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Inline);
  pFVar7->_padding_ =
       (longlong)
       &TRDGLambdaPass<FDLSSShaderParameters,`FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::`60'::<lambda_2>_>
        ::_vftable_;
  pFVar7[1]._padding_ = (longlong)param_5->LocalNGXRHIExtensions;
  pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_5->PassParameters;
  FDLSSPassParameters::FDLSSPassParameters
            ((FDLSSPassParameters *)&pFVar7[1].FullPathIfDebug.Data.ArrayNum,&param_5->Inputs);
  *(TIntPoint<int>_u_0 *)&pFVar7[1].BufferStates.ArrayNum =
       (param_5->AdjustedInputViewRect).field0_0x0._s_0.Min.field0_0x0;
  pFVar7[1].Views.AllocatorInstance.Data =
       (TRDGHandle<FRDGView,unsigned_int> *)
       (param_5->AdjustedInputViewRect).field0_0x0._s_0.Max.field0_0x0;
  *(bool *)&pFVar7[1].Views.ArrayNum = param_5->bCameraCut;
  pFVar7[1].Views.ArrayMax = (int)param_5->DeltaWorldTimeMS;
  *(int *)&pFVar7[1].UniformBuffers.AllocatorInstance.Data = param_5->NGXDLSSPreset;
  *(int *)((longlong)&pFVar7[1].UniformBuffers.AllocatorInstance.Data + 4) =
       param_5->NGXDLSSRRPreset;
  pFVar7[1].UniformBuffers.ArrayNum = param_5->NGXPerfQuality;
  pFVar7[1].ExternalAccessOps.AllocatorInstance.Data =
       (FExternalAccessOp *)(param_5->DLSSState).Object;
  *(TReferenceControllerBase<1> **)&pFVar7[1].ExternalAccessOps.ArrayNum =
       (param_5->DLSSState).SharedReferenceCount.ReferenceController;
  (param_5->DLSSState).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (param_5->DLSSState).Object = (FDLSSState *)0x0;
  pFVar7[1].ResourcesToBegin.AllocatorInstance.InlineData[0] = param_5->bUseAutoExposure;
  pFVar7[1].ResourcesToBegin.AllocatorInstance.InlineData[1] = param_5->bEnableAlphaUpscaling;
  pFVar7[1].ResourcesToBegin.AllocatorInstance.InlineData[2] = param_5->bReleaseMemoryOnDelete;
  pFVar7[1].ResourcesToBegin.AllocatorInstance.InlineData[3] = param_5->bUseBiasCurrentColorMask;
  pFVar7[1].ResourcesToBegin.AllocatorInstance.SecondaryData.Data = (FRDGPass **)param_3;
  ClobberPassOutputs(this,pFVar7);
  iVar5 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar5 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar5] = pFVar7;
  (pFVar7->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar7);
  return pFVar7;
}

// Enqueue<TRenderCommandTag<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14de20090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily_::__l21::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::TSTR_DLSSTemporalUpscalerModularFeature_ClearData359>
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
      if (bVar8) goto LAB_14de201e1;
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
    goto LAB_14de203d5;
  }
LAB_14de201e1:
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
LAB_14de202bf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14de202bf;
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
LAB_14de203d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14de20410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily_::__l25::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::TSTR_DLSSTemporalUpscalerModularFeature_SetData385>
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
      if (bVar8) goto LAB_14de20561;
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
    goto LAB_14de20755;
  }
LAB_14de20561:
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
LAB_14de2063f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14de2063f;
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
LAB_14de20755:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDefault<UDLSSSettings> @ 14de20840

UDLSSSettings * __cdecl GetDefault<UDLSSSettings>(void)

{
  UClass *this;
  
  this = UDLSSSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UDLSSSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UDLSSSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetEnumPropertyByName<enum_EDLSSUpscalerModularFeatureQuality> @ 14de20880

TOptional<EDLSSUpscalerModularFeatureQuality> __cdecl
DLSS::TemporalUpscalerModularFeature::GetEnumPropertyByName<enum_EDLSSUpscalerModularFeatureQuality>
          (FName *param_1,FInstancedPropertyBag *param_2)

{
  UPackage *pUVar1;
  FInstancedPropertyBag *in_R8;
  undefined1 local_res10;
  char local_res11;
  
  if (Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality,(UObject *)pUVar1,
                       L"EDLSSUpscalerModularFeatureQuality");
  }
  FInstancedPropertyBag::GetValueEnum
            (in_R8,(FName)&local_res10,(UEnum *)(param_2->Value).ScriptStruct.field0_0x0.DebugPtr);
  *(undefined1 *)((longlong)&(param_1->ComparisonIndex).Value + 1) = 0;
  if (local_res11 == '\0') {
    *(undefined1 *)((longlong)&(param_1->ComparisonIndex).Value + 1) = 1;
    *(undefined1 *)&(param_1->ComparisonIndex).Value = local_res10;
  }
  return SUB82(param_1,0);
}

// InternalConstructor<UDLSSOverrideSettings> @ 14de20910

void __cdecl InternalConstructor<UDLSSOverrideSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0x2020201;
    *(undefined ***)this = &___7UDLSSOverrideSettings__6B_;
  }
  return;
}

// InternalConstructor<UDLSSSettings> @ 14de20950

void __cdecl InternalConstructor<UDLSSSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UDLSSSettings__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x11 = 0;
    *(undefined2 *)&this[2].field_0x15 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x19 = 0;
    *(undefined2 *)&this[3].field_0x1d = 0;
    *(undefined4 *)&this[1].field_0x8 = 0x1010108;
    *(undefined4 *)&this[1].field_0xc = 0x1010001;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDLSSOverrideSettings> @ 14de209d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDLSSOverrideSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDLSSOverrideSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x2020201;
    *(undefined ***)pUVar1 = &___7UDLSSOverrideSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDLSSSettings> @ 14de20a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDLSSSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDLSSSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UDLSSSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x1010108;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x1010001;
    *(undefined4 *)&pUVar1[2].field_0x11 = 0;
    *(undefined2 *)&pUVar1[2].field_0x15 = 0;
    *(undefined4 *)&pUVar1[3].field_0x19 = 0;
    *(undefined2 *)&pUVar1[3].field_0x1d = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EDLSSPreset> @ 14de20b90

UEnum * __cdecl StaticEnum<enum_EDLSSPreset>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSPreset,(UObject *)pUVar1,L"EDLSSPreset");
  }
  return Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton;
}

// StaticEnum<enum_EDLSSRRPreset> @ 14de20bd0

UEnum * __cdecl StaticEnum<enum_EDLSSRRPreset>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDLSSRRPreset.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSRRPreset.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSRRPreset,(UObject *)pUVar1,L"EDLSSRRPreset");
  }
  return Z_Registration_Info_UEnum_EDLSSRRPreset.OuterSingleton;
}

// StaticEnum<enum_EDLSSSettingOverride> @ 14de20c10

UEnum * __cdecl StaticEnum<enum_EDLSSSettingOverride>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDLSSSettingOverride.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSSettingOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSSettingOverride,(UObject *)pUVar1,
                       L"EDLSSSettingOverride");
  }
  return Z_Registration_Info_UEnum_EDLSSSettingOverride.OuterSingleton;
}

// StaticEnum<enum_EDLSSUpscalerModularFeatureQuality> @ 14de20c50

UEnum * __cdecl StaticEnum<enum_EDLSSUpscalerModularFeatureQuality>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSS();
    Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSUpscalerModularFeatureQuality,(UObject *)pUVar1,
                       L"EDLSSUpscalerModularFeatureQuality");
  }
  return Z_Registration_Info_UEnum_EDLSSUpscalerModularFeatureQuality.OuterSingleton;
}

// ~TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::<lambda_1>,1,0> @ 14de21d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily_::__l21::<lambda_1>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::`21'::<lambda_1>,1,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014de21daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>,1,1> @ 14de21dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily_::__l25::<lambda_2>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::`25'::<lambda_2>,1,1>
        ::_vftable_;
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)this + 0x20));
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014de21e01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14de220a0

void __thiscall
``FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::__l60::<lambda_2>::operator()'::__l2::<lambda_1>::
operator()(void *this,FRHICommandListImmediate *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_18;
  longlong local_10;
  
  pTVar5 = CVarNGXDLSSFeatureCreationNode.Ref;
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = CVarNGXDLSSFeatureVisibilityMask.Ref;
  uVar9 = pTVar5->ShadowedValue[1];
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = pTVar6->ShadowedValue[1];
  puVar1 = &param_1->field_0x29c;
  if (uVar9 == 0xffffffff) {
    uVar8 = 0;
    bVar7 = *(int *)puVar1 == 0;
    if (!bVar7) {
      for (; (*(uint *)puVar1 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    uVar9 = 0x20;
  }
  else {
    uVar8 = GNumExplicitGPUsForRendering - 1;
    if (uVar9 < GNumExplicitGPUsForRendering - 1) {
      uVar8 = uVar9;
    }
    uVar9 = 0;
    bVar7 = uVar8 == 0;
  }
  if (!bVar7) {
    uVar9 = uVar8;
  }
  *(uint *)((longlong)this + 0x1ac) = uVar9;
  if (uVar2 == 0xffffffff) {
    if (GVirtualMGPU == 0) {
      uVar9 = *(uint *)puVar1;
    }
    else {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 1;
    if (GVirtualMGPU == 0) {
      uVar9 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    }
    uVar9 = uVar9 & uVar2;
  }
  plVar3 = *(longlong **)this;
  *(uint *)((longlong)this + 0x1b0) = uVar9;
  pcVar4 = *(code **)(*plVar3 + 8);
  local_18 = *(undefined8 *)((longlong)this + 0x1c0);
  local_10 = *(longlong *)((longlong)this + 0x1c8);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar4)(plVar3,param_1,(longlong)this + 0x10,&local_18);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14de22cf8

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* [thunk]:private: virtual void * __ptr64 __cdecl FDLSSUpscalerHistory::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FDLSSUpscalerHistory::_vector_deleting_destructor__adjustor_8__
          (FDLSSUpscalerHistory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FDLSSUpscalerHistory *)&this[-1].DenoiserMode,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14de22d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NPEBVISceneViewExtension__AEBUFSceneViewExtensionContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de22d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::`21'::<lambda_1>,1,0>
        ::_vftable_;
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
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de22dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::`25'::<lambda_2>,1,1>
        ::_vftable_;
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)this + 0x20));
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

// `scalar_deleting_destructor' @ 14de22e30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDLSSState,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDLSSState,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de22e70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDLSSTemporalUpscalerModularFeature,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDLSSTemporalUpscalerModularFeature,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de22eb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FDLSSShaderParameters>::_scalar_deleting_destructor_
          (TObject<FDLSSShaderParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de22ee0

void * __thiscall
TRDGLambdaPass<FDLSSShaderParameters,`FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::__l60::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 600));
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de22f50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDLSSUpscalerViewExtension,SharedPointerInternals::DefaultDeleter<FDLSSUpscalerViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDLSSUpscalerViewExtension,SharedPointerInternals::DefaultDeleter<FDLSSUpscalerViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de22f90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNGXAutomationViewExtension,SharedPointerInternals::DefaultDeleter<FNGXAutomationViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNGXAutomationViewExtension,SharedPointerInternals::DefaultDeleter<FNGXAutomationViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de22fd0

void * __thiscall FDLSSDenoiser::_scalar_deleting_destructor_(FDLSSDenoiser *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IScreenSpaceDenoiser__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de23010

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

void * __thiscall
FDLSSSceneViewFamilyUpscaler::_scalar_deleting_destructor_
          (FDLSSSceneViewFamilyUpscaler *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISceneViewFamilyExtention__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de23050

void * __thiscall
FDLSSTemporalUpscalerModularFeature::_scalar_deleting_destructor_
          (FDLSSTemporalUpscalerModularFeature *this,uint param_1)

{
  ~FDLSSTemporalUpscalerModularFeature(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de23090

void * __thiscall FDLSSUpscaler::_scalar_deleting_destructor_(FDLSSUpscaler *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ICustomResourcePool__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de230d0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void * __thiscall
FDLSSUpscalerHistory::_scalar_deleting_destructor_(FDLSSUpscalerHistory *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UE__Renderer__Private__ITemporalUpscaler__IHistory__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DLSSState).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de23130

void * __thiscall
FDLSSUpscalerViewExtension::_scalar_deleting_destructor_
          (FDLSSUpscalerViewExtension *this,uint param_1)

{
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de23170

void * __thiscall
FNGXAutomationViewExtension::_scalar_deleting_destructor_
          (FNGXAutomationViewExtension *this,uint param_1)

{
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de231b0

void * __thiscall
ICustomResourcePool::_scalar_deleting_destructor_(ICustomResourcePool *this,uint param_1)

{
  *this = (ICustomResourcePool)&___7ICustomResourcePool__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de231f0

void * __thiscall
UE::Renderer::Private::ITemporalUpscaler::IHistory::_scalar_deleting_destructor_
          (IHistory *this,uint param_1)

{
  *this = (IHistory)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de23230

void * __thiscall
UE::Renderer::Private::ITemporalUpscaler::_scalar_deleting_destructor_
          (ITemporalUpscaler *this,uint param_1)

{
  *this = (ITemporalUpscaler)&___7ISceneViewFamilyExtention__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de23270

void * __thiscall
UE::VirtualProduction::IUpscalerModularFeature::_scalar_deleting_destructor_
          (IUpscalerModularFeature *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de232a0

void * __thiscall
UDLSSOverrideSettings::_scalar_deleting_destructor_(UDLSSOverrideSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDLSSOverrideSettings__6B_;
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

// `scalar_deleting_destructor' @ 14de23300

void * __thiscall UDLSSSettings::_scalar_deleting_destructor_(UDLSSSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDLSSSettings__6B_;
  pFVar1 = (this->CustomDLSSRRBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GenericDLSSRRBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomDLSSSRBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GenericDLSSSRBinaryPath).Data.AllocatorInstance.Data;
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

// CopyStructToPropertyBag @ 14de24ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
DLSS::TemporalUpscalerModularFeature::CopyStructToPropertyBag
          (UStruct *param_1,void *param_2,FInstancedPropertyBag *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  FProperty *pFVar4;
  bool bVar5;
  int iVar6;
  FPropertyBagPropertyDesc *pFVar7;
  UPropertyBag *pUVar8;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  TFieldIterator<FProperty> local_e8;
  TFieldIterator<FProperty> local_d0;
  FName local_b8;
  FName local_b0;
  FPropertyBagPropertyDesc *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_98;
  FPropertyBagPropertyDesc local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  if (param_1 == (UStruct *)0x0) {
    local_d0.Field = (FField *)0x0;
  }
  else {
    local_d0.Field = param_1->ChildProperties;
  }
  local_d0.InterfaceIndex = -1;
  local_d0.bIncludeSuper = true;
  local_d0.bIncludeDeprecated = true;
  local_d0.bIncludeInterface = false;
  local_d0.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_d0);
  pFVar4 = (FProperty *)local_d0.Field;
  while( true ) {
    local_d0.Field = (FField *)pFVar4;
    if (pFVar4 == (FProperty *)0x0) {
      iVar6 = (int)local_f0;
      local_a8 = (FPropertyBagPropertyDesc *)local_f8.Data;
      if (((int)local_f0 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_a0 = iVar6;
      local_98._12_4_ = uStack_9c;
      local_98.ArrayNum = iVar6;
      local_98.DataPtr = local_a8;
      pUVar8 = UPropertyBag::GetOrCreateFromDescs(&local_98,(wchar_t *)0x0);
      FInstancedPropertyBag::MigrateToNewBagStruct(param_3,pUVar8);
      if (param_1 == (UStruct *)0x0) {
        local_e8.Field = (FField *)0x0;
      }
      else {
        local_e8.Field = param_1->ChildProperties;
      }
      local_e8.InterfaceIndex = -1;
      local_e8.bIncludeSuper = true;
      local_e8.bIncludeDeprecated = true;
      local_e8.bIncludeInterface = false;
      local_e8.Struct = param_1;
      TFieldIterator<FProperty>::IterateToNext(&local_e8);
      pFVar4 = (FProperty *)local_e8.Field;
      do {
        local_e8.Field = (FField *)pFVar4;
        if (pFVar4 == (FProperty *)0x0) {
          if ((FPropertyBagPropertyDesc *)local_f8.Data != (FPropertyBagPropertyDesc *)0x0) {
            FMemory::Free(local_f8.Data);
          }
          return;
        }
        if (pFVar4 != (FProperty *)0x0) {
          bVar5 = IsThisNotNull(pFVar4,"FField::GetFName");
          if (bVar5) {
            local_b0 = (FName)pFVar4->_padding_;
          }
          else {
            local_b0.ComparisonIndex.Value = 0;
            local_b0.Number = 0;
          }
          pFVar7 = FInstancedPropertyBag::FindPropertyDescByName(param_3,local_b0);
          if ((pFVar7 != (FPropertyBagPropertyDesc *)0x0) &&
             (pFVar1 = pFVar7->CachedProperty, pFVar1 != (FProperty *)0x0)) {
            puVar2 = (param_3->Value).StructMemory;
            if ((pFVar1->ArrayDim < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((puVar2 == (uchar *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            PropertyAccessUtil::GetPropertyValue_InContainer
                      (pFVar4,param_2,pFVar1,puVar2 + pFVar1->Offset_Internal,-1);
          }
        }
        local_e8.Field = (FField *)pFVar4->_padding_;
        TFieldIterator<FProperty>::IterateToNext(&local_e8);
        pFVar4 = (FProperty *)local_e8.Field;
      } while( true );
    }
    bVar5 = IsThisNotNull(pFVar4,"FField::GetFName");
    if (bVar5) {
      local_b8 = (FName)pFVar4->_padding_;
    }
    else {
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
    }
    pFVar7 = FPropertyBagPropertyDesc::FPropertyBagPropertyDesc(&local_88,local_b8,pFVar4);
    if (((local_f8.Data <= pFVar7) &&
        (pFVar7 < (FPropertyBagPropertyDesc *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x40))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_f0 = CONCAT44(local_f0._4_4_,iVar6 + 1);
    FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
              ((FPropertyBagPropertyDesc *)(local_f8.Data + (longlong)iVar6 * 0x40),pFVar7);
    local_d0.Field = (FField *)pFVar4->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_d0);
    pFVar4 = (FProperty *)local_d0.Field;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// EmptyLinkFunctionForGeneratedCodeDLSSSettings @ 14de25cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeDLSSSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDLSSUpscalerModularFeature @ 14de25ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeDLSSUpscalerModularFeature(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDLSS_init @ 14de25cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeDLSS_init(void)

{
  return;
}

// GetAPI @ 14de26730

IDLSSModuleInterface * __cdecl DLSS::TemporalUpscalerModularFeature::GetAPI(void)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this;
  IDLSSModuleInterface *pIVar4;
  FName local_res8;
  FName local_res10;
  FString local_18;
  
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) {
    return DLSSModuleInterfaceAPI;
  }
  pFVar3 = ::FName::FName(&local_res10,L"DLSS");
  local_res8 = *pFVar3;
  this = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this,local_res8);
  if (!bVar2) {
    ::FName::ToString(&local_res8,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IDLSSModuleInterface *)(*pcVar1)();
      return pIVar4;
    }
  }
  DLSSModuleInterfaceAPI = (IDLSSModuleInterface *)FModuleManager::GetModule(this,local_res8);
  _Init_thread_footer(&::_TSS0);
  return DLSSModuleInterfaceAPI;
}

// GetBoolPropertyByName @ 14de26950

TOptional<bool> __cdecl
DLSS::TemporalUpscalerModularFeature::GetBoolPropertyByName
          (FName *param_1,FInstancedPropertyBag *param_2)

{
  code *pcVar1;
  bool bVar2;
  TOptional<bool> TVar3;
  ulonglong uVar4;
  FInstancedPropertyBag *in_R8;
  undefined1 local_res20;
  byte local_res21;
  
  FInstancedPropertyBag::GetValueBool(in_R8,(FName)&local_res20);
  uVar4 = (ulonglong)local_res21;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TOptional<bool>)(*pcVar1)();
      return TVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    *(undefined1 *)((longlong)&(param_1->ComparisonIndex).Value + 1) = 0;
    return SUB82(param_1,0);
  }
  if (local_res21 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TOptional<bool>)(*pcVar1)();
      return TVar3;
    }
  }
  *(undefined1 *)&(param_1->ComparisonIndex).Value = local_res20;
  *(undefined1 *)((longlong)&(param_1->ComparisonIndex).Value + 1) = 1;
  return SUB82(param_1,0);
}

// GetGlobalDLSSUpscaler @ 14de26d30

FDLSSUpscaler * __cdecl GetGlobalDLSSUpscaler(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  FDLSSUpscaler *pFVar6;
  FName local_res8 [4];
  
  pFVar4 = FName::FName(local_res8,"DLSS");
  FVar1 = *pFVar4;
  this = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this,FVar1);
  if (pIVar5 == (IModuleInterface *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("DLSSModule",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0xd0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDLSSUpscaler *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar6 = (FDLSSUpscaler *)(**(code **)((longlong)*pIVar5 + 0x68))(pIVar5);
  return pFVar6;
}

// GetNGXDLSSPresetFromQualityMode @ 14de26f40

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

NVSDK_NGX_DLSS_Hint_Render_Preset __cdecl GetNGXDLSSPresetFromQualityMode(EDLSSQualityMode param_1)

{
  uint uVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  NVSDK_NGX_DLSS_Hint_Render_Preset NVar5;
  UDLSSSettings *pUVar6;
  EDLSSPreset EVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  EVar7 = Default;
  switch(param_1) {
  case Balanced:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSBalancedPreset;
    break;
  case Quality:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSQualityPreset;
    break;
  case UltraQuality:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSUltraQualityPreset;
    break;
  case DLAA:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLAAPreset;
    break;
  case MinValue:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSUltraPerformancePreset;
    break;
  case Performance:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSPerformancePreset;
    break;
  default:
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x192,
                       L"GetNGXDLSSPresetFromQualityMode called with an out of range EDLSSQualityMode"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      NVar5 = (*pcVar2)();
      return NVar5;
    }
  }
  pTVar3 = CVarNGXDLSSPresetSetting.Ref;
  bVar4 = IsInParallelGameThread();
  NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_Default;
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar8 = 4;
    if (!bVar4) goto LAB_14de27001;
  }
  lVar8 = 0;
LAB_14de27001:
  uVar1 = *(uint *)((longlong)pTVar3->ShadowedValue + lVar8);
  if (uVar1 != 0) {
    if (uVar1 < 0x10) {
      EVar7 = (EDLSSPreset)uVar1;
    }
    else {
      if (2 < (byte)LogDLSS._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Invalid_r_NGX_D_152d3ae00,
                   (FLogCategoryBase *)&LogDLSS);
      }
      EVar7 = Default;
    }
  }
  switch(EVar7) {
  case Default:
    break;
  case A:
  case B:
  case C:
  case D:
  case E:
    `ToNGXDLSSPreset'::__l4::<lambda_1>::operator()(local_res8);
    break;
  case F:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_F;
    break;
  case G:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_G;
    break;
  case H:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_H_Reserved;
    break;
  case I:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_I_Reserved;
    break;
  case J:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_J;
    break;
  case K:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_K;
    break;
  case L:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_L;
    break;
  case M:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_M;
    break;
  case N:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_N;
    break;
  case O:
    NVar5 = NVSDK_NGX_DLSS_Hint_Render_Preset_O;
    break;
  default:
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x137,
                       L"ToNGXDLSSPreset should not be called with an out of range EDLSSPreset from the higher level code"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      NVar5 = (*pcVar2)();
      return NVar5;
    }
  }
  return NVar5;
}

// GetNGXDLSSRRPresetFromQualityMode @ 14de27140

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

NVSDK_NGX_RayReconstruction_Hint_Render_Preset __cdecl
GetNGXDLSSRRPresetFromQualityMode(EDLSSQualityMode param_1)

{
  uint uVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  NVSDK_NGX_RayReconstruction_Hint_Render_Preset NVar5;
  UDLSSSettings *pUVar6;
  EDLSSRRPreset EVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  EVar7 = Default;
  switch(param_1) {
  case Balanced:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSRRBalancedPreset;
    break;
  case Quality:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSRRQualityPreset;
    break;
  case UltraQuality:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSRRUltraQualityPreset;
    break;
  case DLAA:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLAARRPreset;
    break;
  case MinValue:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSRRUltraPerformancePreset;
    break;
  case Performance:
    pUVar6 = GetDefault<UDLSSSettings>();
    EVar7 = pUVar6->DLSSRRPerformancePreset;
    break;
  default:
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x1bc,
                       L"GetNGXDLSSPresetFromQualityMode called with an out of range EDLSSQualityMode"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      NVar5 = (*pcVar2)();
      return NVar5;
    }
  }
  pTVar3 = CVarNGXDLSSRRPresetSetting.Ref;
  bVar4 = IsInParallelGameThread();
  NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_Default;
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar8 = 4;
    if (!bVar4) goto LAB_14de27213;
  }
  lVar8 = 0;
LAB_14de27213:
  uVar1 = *(uint *)((longlong)pTVar3->ShadowedValue + lVar8);
  if (uVar1 != 0) {
    if (uVar1 < 0x10) {
      EVar7 = (EDLSSRRPreset)uVar1;
    }
    else {
      if (2 < (byte)LogDLSS._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Invalid_r_NGX_D_152d3ae70,
                   (FLogCategoryBase *)&LogDLSS);
      }
      EVar7 = Default;
    }
  }
  switch(EVar7) {
  case Default:
    break;
  case A:
  case B:
  case C:
    `ToNGXDLSSRRPreset'::__l4::<lambda_1>::operator()(local_res8);
    break;
  case D:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_D;
    break;
  case E:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_E;
    break;
  case F:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_F;
    break;
  case G:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_G;
    break;
  case H:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_H;
    break;
  case I:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_I;
    break;
  case J:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_J;
    break;
  case K:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_K;
    break;
  case L:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_L;
    break;
  case M:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_M;
    break;
  case N:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_N;
    break;
  case O:
    NVar5 = NVSDK_NGX_RayReconstruction_Hint_Render_Preset_O;
    break;
  default:
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x16d,
                       L"ToNGXDLSSRRPreset should not be called with an out of range EDLSSRRPreset from the higher level code"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      NVar5 = (*pcVar2)();
      return NVar5;
    }
  }
  return NVar5;
}

// GetUpscaler @ 14de27a50

FDLSSUpscaler * __cdecl DLSS::TemporalUpscalerModularFeature::GetUpscaler(void)

{
  char cVar1;
  IDLSSModuleInterface *pIVar2;
  FDLSSUpscaler *pFVar3;
  
  pIVar2 = GetAPI();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
  if (cVar1 == '\0') {
    pIVar2 = GetAPI();
                    /* WARNING: Could not recover jumptable at 0x00014de27a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FDLSSUpscaler *)
             (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2,*(code **)((longlong)*pIVar2 + 0x68));
    return pFVar3;
  }
  return (FDLSSUpscaler *)0x0;
}

// IsEngineExecutionModeSupported @ 14de27f50

TTuple<bool,wchar_t_const_*> * __cdecl
IsEngineExecutionModeSupported(TTuple<bool,wchar_t_const_*> *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (PRIVATE_GIsRunningCommandlet != false) {
      *(undefined1 *)__return_storage_ptr__ = 0;
      *(wchar_t **)&__return_storage_ptr__->field_0x8 = L"A command let is running";
      return __return_storage_ptr__;
    }
    *(undefined1 *)__return_storage_ptr__ = 1;
    *(wchar_t **)&__return_storage_ptr__->field_0x8 = L"";
    return __return_storage_ptr__;
  }
  *(undefined1 *)__return_storage_ptr__ = 0;
  *(wchar_t **)&__return_storage_ptr__->field_0x8 = L"Cannot ever render";
  return __return_storage_ptr__;
}

// ToNGXQuality @ 14de29e10

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

NVSDK_NGX_PerfQuality_Value __cdecl ToNGXQuality(EDLSSQualityMode param_1)

{
  code *pcVar1;
  bool bVar2;
  NVSDK_NGX_PerfQuality_Value NVar3;
  
  switch(param_1) {
  case Balanced:
    return NVSDK_NGX_PerfQuality_Value_Balanced;
  case Quality:
    return NVSDK_NGX_PerfQuality_Value_MaxQuality;
  case UltraQuality:
    return NVSDK_NGX_PerfQuality_Value_UltraQuality;
  case DLAA:
    return NVSDK_NGX_PerfQuality_Value_DLAA;
  case MinValue:
    return NVSDK_NGX_PerfQuality_Value_UltraPerformance;
  case Performance:
    goto switchD_14de29e30_caseD_ffffffff;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x1d8,
                       L"ToNGXQuality should not be called with an out of range EDLSSQualityMode from the higher level code"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      NVar3 = (*pcVar1)();
      return NVar3;
    }
switchD_14de29e30_caseD_ffffffff:
    return NVSDK_NGX_PerfQuality_Value_MaxPerf;
  }
}

// Z_Construct_UClass_UDLSSOverrideSettings_NoRegister @ 14de2a680

UClass * __cdecl Z_Construct_UClass_UDLSSOverrideSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSS",L"DLSSOverrideSettings",
               &Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton,
               UDLSSOverrideSettings::StaticRegisterNativesUDLSSOverrideSettings,0x30,8,
               CLASS_Intrinsic|CLASS_ProjectUserConfig|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDLSSOverrideSettings>,
               InternalVTableHelperCtorCaller<UDLSSOverrideSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton;
}

// Z_Construct_UClass_UDLSSSettings_NoRegister @ 14de2a730

UClass * __cdecl Z_Construct_UClass_UDLSSSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSS",L"DLSSSettings",
               &Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton,
               UDLSSSettings::StaticRegisterNativesUDLSSSettings,0x98,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UDLSSSettings>,InternalVTableHelperCtorCaller<UDLSSSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings @ 14de2a7e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.InnerSingleton
               ,&Z_Construct_UScriptStruct_FDLSSUpscalerModularFeatureSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDLSSUpscalerModularFeatureSettings.InnerSingleton;
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

// IMPLEMENT_MODULE_DLSS @ 14de2b3b0

void __cdecl IMPLEMENT_MODULE_DLSS(void)

{
  return;
}

// ModularFeatureSingleton'' @ 15045ef70

void __cdecl
`dynamic_atexit_destructor_for_'FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.SharedReferenceCount.
             ReferenceController);
  return;
}

// OnCreateRenderThreadResources'' @ 15045ef90

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

// OnDestroyRenderThreadResources'' @ 15045efd0

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

// ResolutionSettings'' @ 15045f010

void __cdecl `dynamic_atexit_destructor_for_'FDLSSUpscaler::ResolutionSettings__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FDLSSUpscaler::ResolutionSettings.AllocatorInstance.Data;
  if (FDLSSUpscaler::ResolutionSettings.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FDLSSUpscaler::ResolutionSettings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarNGXAutomationEnable'' @ 15045f030

void __cdecl _dynamic_atexit_destructor_for__CVarNGXAutomationEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXAutomationEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXAutomationNonGameViews'' @ 15045f050

void __cdecl _dynamic_atexit_destructor_for__CVarNGXAutomationNonGameViews__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXAutomationNonGameViews);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXAutomationViewIndex'' @ 15045f070

void __cdecl _dynamic_atexit_destructor_for__CVarNGXAutomationViewIndex__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXAutomationViewIndex);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXBinarySearchOrder'' @ 15045f090

void __cdecl _dynamic_atexit_destructor_for__CVarNGXBinarySearchOrder__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXBinarySearchOrder);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSAutoExposure'' @ 15045f0b0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSAutoExposure__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSAutoExposure);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSBiasCurrentColorMask'' @ 15045f0d0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSBiasCurrentColorMask__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSBiasCurrentColorMask);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSBiasCurrentColorMaskStencilValue'' @ 15045f0f0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSBiasCurrentColorMaskStencilValue__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNGXDLSSBiasCurrentColorMaskStencilValue);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSBuiltInDenoiserOverride'' @ 15045f110

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSBuiltInDenoiserOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSBuiltInDenoiserOverride)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSDenoiserMode'' @ 15045f130

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSDenoiserMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSDenoiserMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSDilateMotionVectors'' @ 15045f150

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSDilateMotionVectors__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSDilateMotionVectors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSEnable'' @ 15045f170

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSFeatureCreationNode'' @ 15045f190

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSFeatureCreationNode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSFeatureCreationNode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSFeatureVisibilityMask'' @ 15045f1b0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSFeatureVisibilityMask__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSFeatureVisibilityMask);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSMinimumWindowsBuildVersion'' @ 15045f1d0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSMinimumWindowsBuildVersion__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNGXDLSSMinimumWindowsBuildVersion);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSPresetSetting'' @ 15045f1f0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSPresetSetting__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSPresetSetting);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSRRPresetSetting'' @ 15045f210

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSRRPresetSetting__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSRRPresetSetting);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSReflectionsTemporalAA'' @ 15045f230

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSReflectionsTemporalAA__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSReflectionsTemporalAA);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSReleaseMemoryOnDelete'' @ 15045f250

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSReleaseMemoryOnDelete__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXDLSSReleaseMemoryOnDelete);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXDLSSWaterReflectionsTemporalAA'' @ 15045f270

void __cdecl _dynamic_atexit_destructor_for__CVarNGXDLSSWaterReflectionsTemporalAA__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNGXDLSSWaterReflectionsTemporalAA);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXEnable'' @ 15045f290

void __cdecl _dynamic_atexit_destructor_for__CVarNGXEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXEnableAllowCommandLine'' @ 15045f2b0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXEnableAllowCommandLine__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXEnableAllowCommandLine);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXEnableAlphaUpscaling'' @ 15045f2d0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXEnableAlphaUpscaling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXEnableAlphaUpscaling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNGXProjectIdentifier'' @ 15045f2f0

void __cdecl _dynamic_atexit_destructor_for__CVarNGXProjectIdentifier__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNGXProjectIdentifier);
  return;
}

// `dynamic_atexit_destructor_for_'DeprecatedRRPresets'' @ 15045f310

void __cdecl _dynamic_atexit_destructor_for__DeprecatedRRPresets__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DeprecatedRRPresets.AllocatorInstance.Data;
  if (DeprecatedRRPresets.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DeprecatedRRPresets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DeprecatedSRPresets'' @ 15045f330

void __cdecl _dynamic_atexit_destructor_for__DeprecatedSRPresets__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DeprecatedSRPresets.AllocatorInstance.Data;
  if (DeprecatedSRPresets.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DeprecatedSRPresets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Desc'' @ 15045f350

void __cdecl
```FDLSSSceneViewFamilyUpscaler::AddPasses'::__l17::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015045f357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15045f370

void __cdecl
``FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread'::__l13::<lambda_1>::
operator()<double_const_&,double_const_&,double_const_&,double_const_&,double_const_&,double_const_&>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015045f377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045f390

void __cdecl
`FDLSSTemporalUpscalerModularFeature::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045f39f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_DLSS'' @ 15045f3b0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_DLSS__(void)

{
  GPUStat_DLSS._104_4_ = 0;
  if (GPUStat_DLSS._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_DLSS._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_DLSS.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'LogDLSS'' @ 15045f3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDLSS__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDLSS);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15045f410

void __cdecl
`FDLSSShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDLSSShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'TooltipText'' @ 15045f430

void __cdecl
`FDLSSTemporalUpscalerModularFeature::GetTooltipText'::__l2::
_dynamic_atexit_destructor_for__TooltipText__(void)

{
  if (TooltipText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045f43f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*TooltipText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// operator() @ 15058fc20

bool __thiscall `ToNGXDLSSPreset'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4184739082062003947>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4184739082062003947>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058fc60

bool __thiscall `ToNGXDLSSRRPreset'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4184739082062003900>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4184739082062003900>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

