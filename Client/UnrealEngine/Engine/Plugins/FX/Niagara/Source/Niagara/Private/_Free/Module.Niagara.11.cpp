// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 510

// CachedCVarInfo'' @ 14118a5b0

void __cdecl `dynamic_initializer_for_'FNiagaraPlatformSet::CachedCVarInfo__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraPlatformSet::CachedCVarInfo__);
  return;
}

// CachedCVarInfoCritSec'' @ 14118a5d0

void __cdecl `dynamic_initializer_for_'FNiagaraPlatformSet::CachedCVarInfoCritSec__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FNiagaraPlatformSet::CachedCVarInfoCritSec,4000);
  atexit(`dynamic_atexit_destructor_for_'FNiagaraPlatformSet::CachedCVarInfoCritSec__);
  return;
}

// ChangedCVars'' @ 14118a600

void __cdecl `dynamic_initializer_for_'FNiagaraPlatformSet::ChangedCVars__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraPlatformSet::ChangedCVars__);
  return;
}

// TestDebugMessageID'' @ 14118a620

void __cdecl
`dynamic_initializer_for_'FParticlePerfStatsListener_NiagaraPerformanceReporter::
TestDebugMessageID__(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ushort uVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"NiagaraPerfReporterMessageID";
  if (FCrc::CRCTable_DEPRECATED[1] == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CRCTable_DEPRECATED[1] != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FParticlePerfStatsListener_NiagaraPerformanceReporter::TestDebugMessageID = 0;
  uVar3 = 0x4e;
  do {
    pwVar5 = pwVar5 + 1;
    uVar4 = (short)uVar3 - (-(ushort)(uVar3 - 0x61 < 0x1a) & 0x20);
    uVar3 = (uint)FParticlePerfStatsListener_NiagaraPerformanceReporter::TestDebugMessageID >> 8 ^
            FCrc::CRCTable_DEPRECATED
            [(byte)((byte)FParticlePerfStatsListener_NiagaraPerformanceReporter::TestDebugMessageID
                   ^ (byte)uVar4)];
    FParticlePerfStatsListener_NiagaraPerformanceReporter::TestDebugMessageID =
         uVar3 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar4 >> 8 ^ uVar3) & 0xff];
    uVar3 = (uint)(ushort)*pwVar5;
  } while (*pwVar5 != L'\0');
  return;
}

// `dynamic_initializer_for_'CNiagaraRibbonForceIndex32'' @ 14118a6d0

void __cdecl _dynamic_initializer_for__CNiagaraRibbonForceIndex32__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CNiagaraRibbonForceIndex32,L"Niagara.Ribbon.ForceIndex32",&GNiagaraRibbonForceIndex32,
             L"Force creating 32 bits index buffers for the ribbons.",0);
  atexit(_dynamic_atexit_destructor_for__CNiagaraRibbonForceIndex32__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAllDeviceProfiles'' @ 14118a720

void __cdecl _dynamic_initializer_for__CVarAllowAllDeviceProfiles__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowAllDeviceProfiles,L"fx.Niagara.AllowAllDeviceProfiles",
             &GbAllowAllDeviceProfiles,L" \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAllDeviceProfiles__);
  return;
}

// `dynamic_initializer_for_'CVarBaselineGenerationDelay'' @ 14118a770

void __cdecl _dynamic_initializer_for__CVarBaselineGenerationDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBaselineGenerationDelay,L"fx.Niagara.BaselineGenerationDelay",
             &GBaselineGenerationDelay,
             L"Time we delay before match start for generating niagara perfoamnce baselines in a cooked game. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBaselineGenerationDelay__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNiagaraMeshRendering'' @ 14118a7c0

void __cdecl _dynamic_initializer_for__CVarEnableNiagaraMeshRendering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNiagaraMeshRendering,L"fx.EnableNiagaraMeshRendering",
             &GbEnableNiagaraMeshRendering,L"If false Niagara Mesh Renderers are disabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNiagaraMeshRendering__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNiagaraRibbonRendering'' @ 14118a810

void __cdecl _dynamic_initializer_for__CVarEnableNiagaraRibbonRendering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNiagaraRibbonRendering,L"fx.EnableNiagaraRibbonRendering",
             &GbEnableNiagaraRibbonRendering,L"If false Niagara Ribbon Renderers are disabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNiagaraRibbonRendering__);
  return;
}

// `dynamic_initializer_for_'CVarGbRendererEnabled'' @ 14118a860

void __cdecl NiagaraRendererLightsPrivate::_dynamic_initializer_for__CVarGbRendererEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGbRendererEnabled,L"fx.EnableNiagaraLightRendering",&GbRendererEnabled,
             L"If false Niagara Light Renderers are disabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGbRendererEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraAllowRuntimeScalabilityChanges'' @ 14118a8b0

void __cdecl _dynamic_initializer_for__CVarNiagaraAllowRuntimeScalabilityChanges__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraAllowRuntimeScalabilityChanges,CanChangeEQCVarName,
             &GbNiagaraAllowRuntimeScalabilityChanges,
             L"If > 0 this platform allows niagara scalability settings changes at runtime. \n",0x40
            );
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraAllowRuntimeScalabilityChanges__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraComponentRenderPoolInactiveTimeLimit'' @ 14118a900

void __cdecl _dynamic_initializer_for__CVarNiagaraComponentRenderPoolInactiveTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraComponentRenderPoolInactiveTimeLimit,
             L"fx.Niagara.ComponentRenderPoolInactiveTimeLimit",
             &GNiagaraComponentRenderPoolInactiveTimeLimit,
             L"The time in seconds an inactive component can linger in the pool before being destroyed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraComponentRenderPoolInactiveTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraLegacyDeviceProfile'' @ 14118a950

void __cdecl _dynamic_initializer_for__CVarNiagaraLegacyDeviceProfile__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraLegacyDeviceProfile,L"fx.Niagara.LegacyDeviceProfile",
             &GNiagaraLegacyDeviceProfile,
             L"This is a special case CVar that allows us to use CVar conditions to maintain behavior with legacy device profiles.\nDo not use directly for new content.\nLegacy device profiles can be given a specific value for this CVarand then CVar conditions used to enable / disable as appropriate to match with legacy assets with enabled / disabled content based on them. \n"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraLegacyDeviceProfile__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraMaxQualityLevel'' @ 14118a9a0

void __cdecl _dynamic_initializer_for__CVarNiagaraMaxQualityLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraMaxQualityLevel,NiagaraMaxQualityLevelName,&GNiagaraMaxQualityLevel,
             L"The Maximum quality level for Niagara Effects. \n",4);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraMaxQualityLevel__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraMeshRendererCalcMeshUsedParticleCount'' @ 14118a9f0

void __cdecl _dynamic_initializer_for__CVarNiagaraMeshRendererCalcMeshUsedParticleCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraMeshRendererCalcMeshUsedParticleCount,
             L"fx.Niagara.MeshRenderer.CalcMeshUsedParticleCount",
             &GNiagaraMeshRendererCalcMeshUsedParticleCount,
             L"Optimization which will inspect renderer vis / mesh index to determine which set of meshes we can potential render with."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraMeshRendererCalcMeshUsedParticleCount__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraMinQualityLevel'' @ 14118aa40

void __cdecl _dynamic_initializer_for__CVarNiagaraMinQualityLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraMinQualityLevel,NiagaraMinQualityLevelName,&GNiagaraMinQualityLevel,
             L"The minimum quality level for Niagara Effects. \n",4);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraMinQualityLevel__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraPerfReporting'' @ 14118aa90

void __cdecl _dynamic_initializer_for__CVarNiagaraPerfReporting__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraPerfReporting,L"fx.NiagaraPerfReporting",&GbNiagaraPerfReporting,
             L"0 = Disabled \n1 = Text Perf Report on world Transitions. \n2 = Text Report for every test with poor or bad perf.\n3 = As 2 but screenshots are also generated for each bad test."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraPerfReporting__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraQualityLevel'' @ 14118aae0

void __cdecl _dynamic_initializer_for__CVarNiagaraQualityLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraQualityLevel,NiagaraQualityLevelName,&GNiagaraQualityLevel,
             L"The quality level for Niagara Effects. \n",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraQualityLevel__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraQualityLevelSync'' @ 14118ab30

void __cdecl _dynamic_initializer_for__CVarNiagaraQualityLevelSync__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = FNiagaraPlatformSet::RefreshScalability;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  CVarNiagaraQualityLevelSync._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  CVarNiagaraQualityLevelSync.Command =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  CVarNiagaraQualityLevelSync.Handle.Handle.ID = (FDelegateHandle)0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  CVarNiagaraQualityLevelSync.Handle.Handle.ID = (FDelegateHandle)*puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraQualityLevelSync__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRadixSortThreshold'' @ 14118acc0

void __cdecl _dynamic_initializer_for__CVarNiagaraRadixSortThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRadixSortThreshold,L"Niagara.RadixSortThreshold",
             &GNiagaraRadixSortThreshold,
             L"Instance count at which radix sort gets used instead of introspective sort.\nSet to  -1 to never use radixsort. (default=400)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRadixSortThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRegenerateBaselinesOnWorldChange'' @ 14118ad10

void __cdecl _dynamic_initializer_for__CVarNiagaraRegenerateBaselinesOnWorldChange__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRegenerateBaselinesOnWorldChange,L"fx.NiagaraRegenBaselinesOnWorldChange",
             &GbNiagaraRegenerateBaselinesOnWorldChange,
             L"If > 0 performance baselines for Niagara will be regenerated on every level change. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRegenerateBaselinesOnWorldChange__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonGpuAllocateMaxCount'' @ 14118ad60

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonGpuAllocateMaxCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonGpuAllocateMaxCount,L"Niagara.Ribbon.GpuAllocateMaxCount",
             &GNiagaraRibbonGpuAllocateMaxCount,
             L"When enabled (default) we allocate the maximum number of required elements.This can result in memory bloat if the count is highly variable but will be more stable performance wise"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuAllocateMaxCount__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonGpuBufferAlign'' @ 14118adb0

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonGpuBufferAlign__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonGpuBufferAlign,L"Niagara.Ribbon.GpuBufferAlign",
             &GNiagaraRibbonGpuBufferAlign,
             L"When not allocating the maximum number of required elements we align up the request elements to this size to improve buffer reuse."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuBufferAlign__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonGpuBufferCachePurgeCounter'' @ 14118ae00

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonGpuBufferCachePurgeCounter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonGpuBufferCachePurgeCounter,
             L"Niagara.Ribbon.GpuBufferCachePurgeCounter",&GNiagaraRibbonGpuBufferCachePurgeCounter,
             L"The number of frames we hold onto ribbon buffer for.Where 0 (Default) we purge them if not used next frame.Negative values will purge the buffers the same frame, essentially zero reusing."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuBufferCachePurgeCounter__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonGpuEnabled'' @ 14118ae50

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonGpuEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonGpuEnabled,L"Niagara.Ribbon.GpuEnabled",&GNiagaraRibbonGpuEnabled,
             L"Enable any GPU ribbon related code (including GPU init).",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonGpuInitMode'' @ 14118aea0

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonGpuInitMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonGpuInitMode,L"Niagara.Ribbon.GpuInitMode",&GNiagaraRibbonGpuInitMode,
             L"Modifies the GPU initialization mode used, i.e. offloading CPU calculations to the GPU.\n0 = Respect bUseGPUInit from properties (Default)\n1 = Force enabled\n2 = Force disabled"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuInitMode__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonMaxTessellation'' @ 14118aef0

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonMaxTessellation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonMaxTessellation,L"Niagara.Ribbon.Tessellation.MaxInterp",
             &GNiagaraRibbonMaxTessellation,
             L"When TessellationAngle is > 0, this is the maximum tesselation factor. \nHigher values allow more evenly divided tesselation. \nWhen TessellationAngle is 0, this is the actually tesselation factor (default=16)."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonMaxTessellation__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonMinSegmentLength'' @ 14118af40

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonMinSegmentLength__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonMinSegmentLength,L"Niagara.Ribbon.MinSegmentLength",
             &GNiagaraRibbonMinSegmentLength,L"Min length of niagara ribbon segments. (default=1)",
             0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonMinSegmentLength__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonShareGeneratedData'' @ 14118af90

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonShareGeneratedData__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonShareGeneratedData,L"Niagara.Ribbon.ShareGeneratedData",
             &GNiagaraRibbonShareGeneratedData,
             L"Allow ribbons to share the generate data where possible.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonShareGeneratedData__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonTessellationAngle'' @ 14118afe0

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonTessellationAngle__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonTessellationAngle,L"Niagara.Ribbon.Tessellation.MinAngle",
             &GNiagaraRibbonTessellationAngle,
             L"Ribbon segment angle to tesselate in radian. (default=15 degrees)",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonTessellationAngle__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonTessellationEnabled'' @ 14118b030

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonTessellationEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonTessellationEnabled,L"Niagara.Ribbon.Tessellation.Enabled",
             &GNiagaraRibbonTessellationEnabled,
             L"Determine if we allow tesellation on this platform or not.",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonTessellationEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonTessellationMinDisplacementError'' @ 14118b080

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonTessellationMinDisplacementError__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonTessellationMinDisplacementError,
             L"Niagara.Ribbon.Tessellation.MinAbsoluteError",
             &GNiagaraRibbonTessellationMinDisplacementError,
             L"Minimum absolute world size error when tessellating. \nPrevent over tessellating when distance gets really small. (default=0.5)"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonTessellationMinDisplacementError__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRibbonTessellationScreenPercentage'' @ 14118b0d0

void __cdecl _dynamic_initializer_for__CVarNiagaraRibbonTessellationScreenPercentage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRibbonTessellationScreenPercentage,
             L"Niagara.Ribbon.Tessellation.MaxErrorScreenPercentage",
             &GNiagaraRibbonTessellationScreenPercentage,
             L"Screen percentage used to compute the tessellation factor. \nSmaller values will generate more tessellation, up to max tesselltion. (default=0.002)"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRibbonTessellationScreenPercentage__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraWarnComponentRenderCount'' @ 14118b120

void __cdecl _dynamic_initializer_for__CVarNiagaraWarnComponentRenderCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraWarnComponentRenderCount,L"fx.Niagara.WarnComponentRenderCount",
             &GNiagaraWarnComponentRenderCount,
             L"The max number of components that a single system can spawn before a log warning is shown."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraWarnComponentRenderCount__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheProjectedShadows'' @ 14118b170

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheProjectedShadows__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheProjectedShadows,L"fx.Niagara.PSOPrecache.ReverseCulling",
             &GNiagaraPSOPrecacheReverseCulling,
             L"Also Precache PSOs with with reverse culling set when not 2 sided. (default 1)",0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheProjectedShadows__);
  return;
}

// `dynamic_initializer_for_'CVarPerfBaselineThreshold_Bad'' @ 14118b1c0

void __cdecl _dynamic_initializer_for__CVarPerfBaselineThreshold_Bad__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPerfBaselineThreshold_Bad,L"fx.PerfBaselineThreshold_Bad",
             &GPerfBaselineThreshold_Bad,
             L"Ratio to the baseline perf that we consider a system to have bad perf and warn strongly about it. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPerfBaselineThreshold_Bad__);
  return;
}

// `dynamic_initializer_for_'CVarPerfBaselineThreshold_Poor'' @ 14118b210

void __cdecl _dynamic_initializer_for__CVarPerfBaselineThreshold_Poor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPerfBaselineThreshold_Poor,L"fx.PerfBaselineThreshold_Poor",
             &GPerfBaselineThreshold_Poor,
             L"Ratio to the baseline perf that we consider a system to have poor perf and warn about it. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPerfBaselineThreshold_Poor__);
  return;
}

// `dynamic_initializer_for_'CVarPerfTestFrames'' @ 14118b260

void __cdecl _dynamic_initializer_for__CVarPerfTestFrames__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPerfTestFrames,L"fx.Niagara.PerfTestFrames",&GPerfTestFrames,
             L"How many frames to gather in each performance test. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarPerfTestFrames__);
  return;
}

// `dynamic_initializer_for_'CVarPruneEmittersOnCook'' @ 14118b2b0

void __cdecl _dynamic_initializer_for__CVarPruneEmittersOnCook__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPruneEmittersOnCook,PruneEmittersOnCookName,&GbPruneEmittersOnCook,
             L"If > 0 this platform will prune disabled emitters during cook. \n",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarPruneEmittersOnCook__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingNiagaraMeshes'' @ 14118b300

void __cdecl _dynamic_initializer_for__CVarRayTracingNiagaraMeshes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingNiagaraMeshes,L"r.RayTracing.Geometry.NiagaraMeshes",local_res8,
             L"Include Niagara meshes in ray tracing effects (default = 1 (Niagara meshes enabled in ray tracing))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingNiagaraMeshes__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingNiagaraRibbons'' @ 14118b350

void __cdecl _dynamic_initializer_for__CVarRayTracingNiagaraRibbons__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingNiagaraRibbons,L"r.RayTracing.Geometry.NiagaraRibbons",local_res8,
             L"Include Niagara ribbons in ray tracing effects (default = 1 (Niagara ribbons enabled in ray tracing))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingNiagaraRibbons__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingNiagaraRibbonsGPU'' @ 14118b3a0

void __cdecl _dynamic_initializer_for__CVarRayTracingNiagaraRibbonsGPU__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingNiagaraRibbonsGPU,L"r.RayTracing.Geometry.NiagaraRibbons.GPU",local_res8
             ,L"If we allow GPU ribbon raytracing",0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingNiagaraRibbonsGPU__);
  return;
}

// `dynamic_initializer_for_'CVarRendererEnabled'' @ 14118b3f0

void __cdecl NiagaraRendererDecalsLocal::_dynamic_initializer_for__CVarRendererEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRendererEnabled,L"fx.Niagara.DecalRenderer.Enabled",&GRendererEnabled,
             L"If == 0, Niagara Decal Renderers are disabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRendererEnabled__);
  return;
}

// `dynamic_initializer_for_'DummyByteAddressBuffer'' @ 14118b440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyByteAddressBuffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyByteAddressBuffer");
  FRenderResource::FRenderResource((FRenderResource *)&DummyByteAddressBuffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyByteAddressBuffer._0_8_ = &___7FNiagaraEmptyByteAddressBufferSRV__6B_;
  DummyByteAddressBuffer._32_8_ = 0;
  DummyByteAddressBuffer._40_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyByteAddressBuffer._44_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyByteAddressBuffer.field_0x20,
               local_18.Data.ArrayNum,(int *)&DummyByteAddressBuffer.field_0x2c);
    memcpy((void *)DummyByteAddressBuffer._32_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyByteAddressBuffer._48_8_ = 0;
  DummyByteAddressBuffer._56_8_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyByteAddressBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyByteAddressBufferSRV___00__6B_
  ;
  if (DummyByteAddressBuffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyByteAddressBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyByteAddressBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyByteAddressBuffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyByteAddressBuffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyByteAddressBuffer__);
  return;
}

// `dynamic_initializer_for_'DummyFloat2Buffer'' @ 14118b590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyFloat2Buffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyFloat2");
  FRenderResource::FRenderResource((FRenderResource *)&DummyFloat2Buffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyFloat2Buffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyFloat2Buffer._32_1_ = 0xf;
  DummyFloat2Buffer._40_8_ = 0;
  DummyFloat2Buffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyFloat2Buffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyFloat2Buffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyFloat2Buffer.field_0x34);
    memcpy((void *)DummyFloat2Buffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyFloat2Buffer._56_8_ = 0;
  DummyFloat2Buffer._64_8_ = 0;
  DummyFloat2Buffer._72_4_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyFloat2Buffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyFloat2Buffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyFloat2Buffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyFloat2Buffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyFloat2Buffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyFloat2Buffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyFloat2Buffer__);
  return;
}

// `dynamic_initializer_for_'DummyFloat4Buffer'' @ 14118b700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyFloat4Buffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyFloat4");
  FRenderResource::FRenderResource((FRenderResource *)&DummyFloat4Buffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyFloat4Buffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyFloat4Buffer._32_1_ = 1;
  DummyFloat4Buffer._40_8_ = 0;
  DummyFloat4Buffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyFloat4Buffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyFloat4Buffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyFloat4Buffer.field_0x34);
    memcpy((void *)DummyFloat4Buffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyFloat4Buffer._56_8_ = 0;
  DummyFloat4Buffer._64_8_ = 0;
  DummyFloat4Buffer._72_4_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyFloat4Buffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyFloat4Buffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyFloat4Buffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyFloat4Buffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyFloat4Buffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyFloat4Buffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyFloat4Buffer__);
  return;
}

// `dynamic_initializer_for_'DummyFloatBuffer'' @ 14118b870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyFloatBuffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyFloat");
  FRenderResource::FRenderResource((FRenderResource *)&DummyFloatBuffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyFloatBuffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyFloatBuffer._32_1_ = 0xd;
  DummyFloatBuffer._40_8_ = 0;
  DummyFloatBuffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyFloatBuffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyFloatBuffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyFloatBuffer.field_0x34);
    memcpy((void *)DummyFloatBuffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyFloatBuffer._56_8_ = 0;
  DummyFloatBuffer._64_8_ = 0;
  DummyFloatBuffer._72_4_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyFloatBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyFloatBuffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyFloatBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyFloatBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyFloatBuffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyFloatBuffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyFloatBuffer__);
  return;
}

// `dynamic_initializer_for_'DummyHalfBuffer'' @ 14118b9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyHalfBuffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyHalf");
  FRenderResource::FRenderResource((FRenderResource *)&DummyHalfBuffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyHalfBuffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyHalfBuffer._32_1_ = 0x15;
  DummyHalfBuffer._40_8_ = 0;
  DummyHalfBuffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyHalfBuffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyHalfBuffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyHalfBuffer.field_0x34);
    memcpy((void *)DummyHalfBuffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyHalfBuffer._56_8_ = 0;
  DummyHalfBuffer._64_8_ = 0;
  DummyHalfBuffer._72_4_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyHalfBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyHalfBuffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyHalfBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyHalfBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyHalfBuffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyHalfBuffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyHalfBuffer__);
  return;
}

// `dynamic_initializer_for_'DummyIntBuffer'' @ 14118bb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyIntBuffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyInt");
  FRenderResource::FRenderResource((FRenderResource *)&DummyIntBuffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyIntBuffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyIntBuffer._32_1_ = 0x1d;
  DummyIntBuffer._40_8_ = 0;
  DummyIntBuffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyIntBuffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyIntBuffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyIntBuffer.field_0x34);
    memcpy((void *)DummyIntBuffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyIntBuffer._56_8_ = 0;
  DummyIntBuffer._64_8_ = 0;
  DummyIntBuffer._72_4_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyIntBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyIntBuffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyIntBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyIntBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyIntBuffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyIntBuffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyIntBuffer__);
  return;
}

// `dynamic_initializer_for_'DummyUInt2Buffer'' @ 14118bcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyUInt2Buffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyUInt2");
  FRenderResource::FRenderResource((FRenderResource *)&DummyUInt2Buffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyUInt2Buffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyUInt2Buffer._32_1_ = 0x44;
  DummyUInt2Buffer._40_8_ = 0;
  DummyUInt2Buffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyUInt2Buffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyUInt2Buffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyUInt2Buffer.field_0x34);
    memcpy((void *)DummyUInt2Buffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyUInt2Buffer._56_8_ = 0;
  DummyUInt2Buffer._64_8_ = 0;
  DummyUInt2Buffer._72_4_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyUInt2Buffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyUInt2Buffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyUInt2Buffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyUInt2Buffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyUInt2Buffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyUInt2Buffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyUInt2Buffer__);
  return;
}

// `dynamic_initializer_for_'DummyUInt4Buffer'' @ 14118be30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyUInt4Buffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyUInt4");
  FRenderResource::FRenderResource((FRenderResource *)&DummyUInt4Buffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyUInt4Buffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyUInt4Buffer._32_1_ = 0x30;
  DummyUInt4Buffer._40_8_ = 0;
  DummyUInt4Buffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyUInt4Buffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyUInt4Buffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyUInt4Buffer.field_0x34);
    memcpy((void *)DummyUInt4Buffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyUInt4Buffer._56_8_ = 0;
  DummyUInt4Buffer._64_8_ = 0;
  DummyUInt4Buffer._72_4_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyUInt4Buffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyUInt4Buffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyUInt4Buffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyUInt4Buffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyUInt4Buffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyUInt4Buffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyUInt4Buffer__);
  return;
}

// `dynamic_initializer_for_'DummyUIntBuffer'' @ 14118bfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyUIntBuffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  FString local_18;
  
  FString::FString(&local_18,L"NiagaraRenderer::DummyUInt");
  FRenderResource::FRenderResource((FRenderResource *)&DummyUIntBuffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyUIntBuffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyUIntBuffer._32_1_ = 0x1c;
  DummyUIntBuffer._40_8_ = 0;
  DummyUIntBuffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyUIntBuffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyUIntBuffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyUIntBuffer.field_0x34);
    memcpy((void *)DummyUIntBuffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyUIntBuffer._56_8_ = 0;
  DummyUIntBuffer._64_8_ = 0;
  DummyUIntBuffer._72_4_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyUIntBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyUIntBuffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyUIntBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyUIntBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyUIntBuffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyUIntBuffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyUIntBuffer__);
  return;
}

// `dynamic_initializer_for_'DummyWhiteColorBuffer'' @ 14118c110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DummyWhiteColorBuffer__(void)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  undefined4 uVar4;
  FString local_18;
  
  uVar4._3_1_ = FColor::White.field0_0x0._s_0.R;
  uVar4._2_1_ = FColor::White.field0_0x0._s_0.G;
  uVar4._1_1_ = FColor::White.field0_0x0._s_0.B;
  uVar4._0_1_ = FColor::White.field0_0x0._s_0.A;
  FString::FString(&local_18,L"NiagaraRenderer::DummyWhiteColorBuffer");
  FRenderResource::FRenderResource((FRenderResource *)&DummyWhiteColorBuffer);
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  DummyWhiteColorBuffer._0_8_ = &___7FNiagaraEmptyBufferSRV__6B_;
  DummyWhiteColorBuffer._32_1_ = 0x25;
  DummyWhiteColorBuffer._40_8_ = 0;
  DummyWhiteColorBuffer._48_4_ = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    DummyWhiteColorBuffer._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&DummyWhiteColorBuffer.field_0x28,
               local_18.Data.ArrayNum,(int *)&DummyWhiteColorBuffer.field_0x34);
    memcpy((void *)DummyWhiteColorBuffer._40_8_,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  DummyWhiteColorBuffer._56_8_ = 0;
  DummyWhiteColorBuffer._64_8_ = 0;
  DummyWhiteColorBuffer._72_4_ = uVar4;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DummyWhiteColorBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  if (DummyWhiteColorBuffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DummyWhiteColorBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(DummyWhiteColorBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&DummyWhiteColorBuffer,pFVar3);
  }
  else {
    BeginInitResource((FRenderResource *)&DummyWhiteColorBuffer,(FRenderCommandPipe *)0x0);
  }
  atexit(_dynamic_atexit_destructor_for__DummyWhiteColorBuffer__);
  return;
}

// `dynamic_initializer_for_'GCmdSetNiagaraPlatformOverride'' @ 14118c2b0

void __cdecl _dynamic_initializer_for__GCmdSetNiagaraPlatformOverride__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GCmdSetNiagaraPlatformOverride,L"fx.Niagara.SetOverridePlatformName",
             L"Sets which platform we should override with, no args means reset to default",
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
  atexit(_dynamic_atexit_destructor_for__GCmdSetNiagaraPlatformOverride__);
  return;
}

// `dynamic_initializer_for_'GCmdSetNiagaraQualityLevelOverride'' @ 14118c3e0

void __cdecl _dynamic_initializer_for__GCmdSetNiagaraQualityLevelOverride__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GCmdSetNiagaraQualityLevelOverride,L"fx.Niagara.SetOverrideQualityLevel",
             L"Sets which quality level we should override with, no args means clear the override and return to non overriden quality level). Valid levels are 0-4 (Low-Cinematic)"
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
  atexit(_dynamic_atexit_destructor_for__GCmdSetNiagaraQualityLevelOverride__);
  return;
}

// `dynamic_initializer_for_'GPUStat_NiagaraGPURibbons'' @ 14118c510

void __cdecl _dynamic_initializer_for__GPUStat_NiagaraGPURibbons__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_NiagaraGPURibbons__);
  return;
}

// `dynamic_initializer_for_'NAME_ANiagaraPreviewBase_SetLabelText'' @ 14118c530

void __cdecl _dynamic_initializer_for__NAME_ANiagaraPreviewBase_SetLabelText__(void)

{
  FName::FName(&NAME_ANiagaraPreviewBase_SetLabelText,L"SetLabelText");
  return;
}

// `dynamic_initializer_for_'NAME_ANiagaraPreviewBase_SetSystem'' @ 14118c550

void __cdecl _dynamic_initializer_for__NAME_ANiagaraPreviewBase_SetSystem__(void)

{
  FName::FName(&NAME_ANiagaraPreviewBase_SetSystem,L"SetSystem");
  return;
}

// `dynamic_initializer_for_'NAME_UNiagaraBaselineController_OnBeginTest'' @ 14118c570

void __cdecl _dynamic_initializer_for__NAME_UNiagaraBaselineController_OnBeginTest__(void)

{
  FName::FName(&NAME_UNiagaraBaselineController_OnBeginTest,L"OnBeginTest");
  return;
}

// `dynamic_initializer_for_'NAME_UNiagaraBaselineController_OnEndTest'' @ 14118c590

void __cdecl _dynamic_initializer_for__NAME_UNiagaraBaselineController_OnEndTest__(void)

{
  FName::FName(&NAME_UNiagaraBaselineController_OnEndTest,L"OnEndTest");
  return;
}

// `dynamic_initializer_for_'NAME_UNiagaraBaselineController_OnOwnerTick'' @ 14118c5b0

void __cdecl _dynamic_initializer_for__NAME_UNiagaraBaselineController_OnOwnerTick__(void)

{
  FName::FName(&NAME_UNiagaraBaselineController_OnOwnerTick,L"OnOwnerTick");
  return;
}

// `dynamic_initializer_for_'NAME_UNiagaraBaselineController_OnTickTest'' @ 14118c5d0

void __cdecl _dynamic_initializer_for__NAME_UNiagaraBaselineController_OnTickTest__(void)

{
  FName::FName(&NAME_UNiagaraBaselineController_OnTickTest,L"OnTickTest");
  return;
}

// `dynamic_initializer_for_'NAME_UNiagaraPreviewAxis_ApplyToPreview'' @ 14118c5f0

void __cdecl _dynamic_initializer_for__NAME_UNiagaraPreviewAxis_ApplyToPreview__(void)

{
  FName::FName(&NAME_UNiagaraPreviewAxis_ApplyToPreview,L"ApplyToPreview");
  return;
}

// `dynamic_initializer_for_'NAME_UNiagaraPreviewAxis_Num'' @ 14118c610

void __cdecl _dynamic_initializer_for__NAME_UNiagaraPreviewAxis_Num__(void)

{
  FName::FName(&NAME_UNiagaraPreviewAxis_Num,L"Num");
  return;
}

// `dynamic_initializer_for_'NAME_UniqueID'' @ 14118c630

void __cdecl NiagaraRendererComponentsImpl::_dynamic_initializer_for__NAME_UniqueID__(void)

{
  ::FName::FName(&NAME_UniqueID,"UniqueID");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraAllocateGlobalFloatAll'' @ 14118c650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraAllocateGlobalFloatAll__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraAllocateGlobalFloatAll ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraAllocateGlobalFloatAll>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraAllocateGlobalFloatAll");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraAllocateGlobalFloatAll,*pFVar1,
               L"Global Float Alloc - All","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraAllocateGlobalFloatAllocNew'' @ 14118c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraAllocateGlobalFloatAllocNew__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraAllocateGlobalFloatAllocNew ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraAllocateGlobalFloatAllocNew>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraAllocateGlobalFloatAllocNew");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraAllocateGlobalFloatAllocNew,*pFVar1
               ,L"Global Float Alloc - Alloc New Buffer","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraAllocateGlobalFloatInsideLock'' @ 14118c770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraAllocateGlobalFloatInsideLock__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraAllocateGlobalFloatInsideLock ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraAllocateGlobalFloatInsideLock>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraAllocateGlobalFloatInsideLock");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraAllocateGlobalFloatInsideLock,
               *pFVar1,L"Global Float Alloc - InsideLock","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraAllocateGlobalFloatMapBuffer'' @ 14118c800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraAllocateGlobalFloatMapBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraAllocateGlobalFloatMapBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraAllocateGlobalFloatMapBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraAllocateGlobalFloatMapBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraAllocateGlobalFloatMapBuffer,
               *pFVar1,L"Global Float Alloc - Map Buffer","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 14118c890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraCollision == (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCollision,*pFVar1,L"Collision",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraComponentRendererSpawning'' @ 14118c920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraComponentRendererSpawning__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraComponentRendererSpawning ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentRendererSpawning>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraComponentRendererSpawning");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraComponentRendererSpawning,*pFVar1,
               L"Component renderer spawning [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraComponentRendererUpdateBindings'' @ 14118c9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraComponentRendererUpdateBindings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraComponentRendererUpdateBindings ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentRendererUpdateBindings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraComponentRendererUpdateBindings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraComponentRendererUpdateBindings,
               *pFVar1,L"Component renderer update bindings","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 14118ca40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraConstants__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraConstants == (FThreadSafeStaticStat<FStat_STAT_NiagaraConstants>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraConstants");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraConstants,*pFVar1,
               L"Constant Setup [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 14118cad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUDataInterfaceMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,*pFVar1,
               L"Niagara GPU data interface memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 14118cb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar1,
               L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGenLights'' @ 14118cbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGenLights__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGenLights == (FThreadSafeStaticStat<FStat_STAT_NiagaraGenLights>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGenLights");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGenLights,*pFVar1,
               L"Generate Particle Lights","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGenMeshVertexData'' @ 14118cc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGenMeshVertexData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGenMeshVertexData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGenMeshVertexData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGenMeshVertexData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGenMeshVertexData,*pFVar1,
               L"Generate Mesh Vertex Data [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGenRibbonVertexData'' @ 14118cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGenRibbonVertexData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGenRibbonVertexData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGenRibbonVertexData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGenRibbonVertexData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGenRibbonVertexData,*pFVar1,
               L"Generate Ribbon Vertex Data [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumMeshVerts'' @ 14118cda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumMeshVerts__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumMeshVerts == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumMeshVerts>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumMeshVerts");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumMeshVerts,*pFVar1,
               L"NumMeshVerts","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumMeshes'' @ 14118ce30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumMeshes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumMeshes == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumMeshes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumMeshes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumMeshes,*pFVar1,
               L"NumMeshesRenderer","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 14118cec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumParticles == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumParticles>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumParticles,*pFVar1,
               L"# CPU Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 14118cf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumSystems__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumSystems == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSystems>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumSystems");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSystems,*pFVar1,L"NumSystems",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 14118cfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar1,L"GT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 14118d070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar1,
               L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 14118d100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT,*pFVar1,L"RT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 14118d190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT_CNC,*pFVar1,
               L"RT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParamStoreMemory'' @ 14118d220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParamStoreMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParamStoreMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParamStoreMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,*pFVar1,
               L"Niagara parameter store memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParameterStoreBind'' @ 14118d2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParameterStoreBind__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParameterStoreBind ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreBind>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParameterStoreBind");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParameterStoreBind,*pFVar1,
               L"Parameter store bind","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParameterStoreFindVar'' @ 14118d340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParameterStoreFindVar__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParameterStoreFindVar ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreFindVar>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParameterStoreFindVar");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParameterStoreFindVar,*pFVar1,
               L"Parameter store find var","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParameterStoreRebind'' @ 14118d3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParameterStoreRebind__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParameterStoreRebind ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreRebind>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParameterStoreRebind");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParameterStoreRebind,*pFVar1,
               L"Parameter store rebind","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParameterStoreTick'' @ 14118d460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParameterStoreTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParameterStoreTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParameterStoreTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParameterStoreTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParameterStoreTick,*pFVar1,
               L"Parameter store tick","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 14118d4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar1,
               L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbons'' @ 14118d580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbons__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbons ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbons>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbons");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderRibbons,*pFVar1,
               L"Render Ribbons [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU'' @ 14118d610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesCPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenIndiciesCPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU,*pFVar1
               ,L"Generate Indices CPU [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesGPU'' @ 14118d6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenIndiciesGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesGPU,*pFVar1
               ,L"Generate Indices GPU [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesCPU'' @ 14118d730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesCPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesCPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesCPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesCPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesCPU,*pFVar1
               ,L"Generate Vertices CPU [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU'' @ 14118d7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU,*pFVar1,
               L"Generate Vertices GPU - FinalSort [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesGPU'' @ 14118d850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesGPU,*pFVar1
               ,L"Generate Vertices GPU [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU'' @ 14118d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU,*pFVar1,
               L"Generate Vertices GPU - InitialSort [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU'' @ 14118d970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU>)
      0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU"
                         );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU,*pFVar1,
               L"Generate Vertices GPU - MultiRibbon Init Compute [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU'' @ 14118da00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU,*pFVar1,
               L"Generate Vertices GPU - MultiRibbon Init [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionFinalizeGPU'' @ 14118da90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionFinalizeGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionFinalizeGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesReductionFinalizeGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesReductionFinalizeGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionFinalizeGPU,*pFVar1,
               L"Generate Vertices GPU - Reduction Finalize [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionInitGPU'' @ 14118db20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionInitGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionInitGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesReductionInitGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesReductionInitGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionInitGPU,*pFVar1,
               L"Generate Vertices GPU - Reduction Init [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase1GPU'' @ 14118dbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase1GPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase1GPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase1GPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesReductionPhase1GPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase1GPU,*pFVar1,
               L"Generate Vertices GPU - Reduction Phase 1 [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase2GPU'' @ 14118dc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase2GPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase2GPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase2GPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesReductionPhase2GPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPhase2GPU,*pFVar1,
               L"Generate Vertices GPU - Reduction Phase 2 [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPropagateGPU'' @ 14118dcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPropagateGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPropagateGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesReductionPropagateGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesReductionPropagateGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionPropagateGPU,*pFVar1,
               L"Generate Vertices GPU - Reduction Propagate [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionTessellationGPU'' @ 14118dd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionTessellationGPU__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionTessellationGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesReductionTessellationGPU>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesReductionTessellationGPU")
    ;
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesReductionTessellationGPU,*pFVar1,
               L"Generate Vertices GPU - Reduction Tessellation [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderRibbonsGenVerticesSortGPU'' @ 14118ddf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderRibbonsGenVerticesSortGPU__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesSortGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesSortGPU>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderRibbonsGenVerticesSortGPU");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesSortGPU,
               *pFVar1,L"Generate Vertices GPU - Sort [RT]","STATGROUP_NiagaraRibbons",
               "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 14118de80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderTargetMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderTargetMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderTargetMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderTargetMemory,*pFVar1,
               L"Niagara RenderTarget memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSortParticles'' @ 14118df10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSortParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSortParticles ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSortParticles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSortParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSortParticles,*pFVar1,
               L"Sort Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 14118dfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraTick,*pFVar1,L"Emitter Tick [CNC]",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 14118e030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraVBMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraVBMemory == (FThreadSafeStaticStat<FStat_STAT_NiagaraVBMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraVBMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraVBMemory,*pFVar1,
               L"Niagara vertex buffer memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 14118e0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstances ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstances,*pFVar1,
               L"Total System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 14118e150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstancesSolo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstancesSolo ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstancesSolo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstancesSolo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstancesSolo,*pFVar1,
               L"Total Solo System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h__Script_Niagara_3172798406'' @ 14118e1e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h__Script_Niagara_3172798406__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h__Script_Niagara_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h__Script_Niagara_2083079748'' @ 14118e230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h__Script_Niagara_2083079748__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h__Script_Niagara_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h__Script_Niagara_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h__Script_Niagara_227930268'' @ 14118e280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h__Script_Niagara_227930268__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraRendererReadback_h__Script_Niagara_1592134626'' @ 14118e2c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraRendererReadback_h__Script_Niagara_1592134626__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraRendererReadback_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterStore_h__Script_Niagara_4264109807'' @ 14118e300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterStore_h__Script_Niagara_4264109807__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterStore_h__Script_Niagara_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameters_h__Script_Niagara_3661673643'' @ 14118e340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameters_h__Script_Niagara_3661673643__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameters_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h__Script_Niagara_3997172483'' @ 14118e380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h__Script_Niagara_3997172483__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h__Script_Niagara_Statics
             ::ClassInfo,10,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h__Script_Niagara_2312815539'' @ 14118e3d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h__Script_Niagara_2312815539__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h__Script_Niagara_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h__Script_Niagara_Statics
             ::EnumInfo,2);
  return;
}

// Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest @ 149313650

UFunction * __cdecl Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick @ 149313690

UFunction * __cdecl Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149313980

void * __thiscall
FNiagaraEmptyBufferSRV::_scalar_deleting_destructor_(FNiagaraEmptyBufferSRV *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Buffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 1493139f0

void __cdecl
Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest @ 149313a00

UFunction * __cdecl Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FNiagaraPositionSource @ 149313a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraPositionSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPositionSource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraPositionSource.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraPositionSource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraPositionSource.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVariableWithOffset @ 149313ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableWithOffset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableWithOffset.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVariableWithOffset.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableWithOffset.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVariableWithOffset.InnerSingleton;
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

// NewStructOps @ 149313cd0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraBoundParameter,&UE::CoreUObject::Private::Construct<FNiagaraBoundParameter>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraBoundParameter>,&UE::CoreUObject::Private::Destruct<FNiagaraBoundParameter>,&UE::CoreUObject::Private::Copy<FNiagaraBoundParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149313d10

void * __thiscall
FNiagaraEmptyByteAddressBufferSRV::_scalar_deleting_destructor_
          (FNiagaraEmptyByteAddressBufferSRV *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Buffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149313d80

void * __thiscall
TGlobalResource<FNiagaraEmptyBufferSRV,1>::_scalar_deleting_destructor_
          (TGlobalResource<FNiagaraEmptyBufferSRV,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149313e00

void * __thiscall
TGlobalResource<FNiagaraEmptyByteAddressBufferSRV,1>::_scalar_deleting_destructor_
          (TGlobalResource<FNiagaraEmptyByteAddressBufferSRV,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNiagaraEmptyByteAddressBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewStructOps @ 149313e80

void * __cdecl Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraPositionSource,&UE::CoreUObject::Private::Construct<FNiagaraPositionSource>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraPositionSource>,&UE::CoreUObject::Private::Destruct<FNiagaraPositionSource>,&UE::CoreUObject::Private::Copy<FNiagaraPositionSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149313ec0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVariableWithOffset,&UE::CoreUObject::Private::Construct<FNiagaraVariableWithOffset>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVariableWithOffset>,&UE::CoreUObject::Private::Destruct<FNiagaraVariableWithOffset>,&UE::CoreUObject::Private::SerializeArchive<FNiagaraVariableWithOffset>,&UE::CoreUObject::Private::Copy<FNiagaraVariableWithOffset>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraVariableWithOffset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149313f00

void * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraParameterStore,&UE::CoreUObject::Private::Construct<FNiagaraParameterStore>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraParameterStore>,&UE::CoreUObject::Private::Destruct<FNiagaraParameterStore>,&UE::CoreUObject::Private::Copy<FNiagaraParameterStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraPrecompileContainer @ 1493141a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPrecompileContainer(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton,
               &Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton;
}

// Z_Construct_UClass_ANiagaraPreviewBase_NoRegister @ 1493141e0

UClass * __cdecl Z_Construct_UClass_ANiagaraPreviewBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewBase",
               &Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton,
               ANiagaraPreviewBase::StaticRegisterNativesANiagaraPreviewBase,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraPreviewBase>,
               InternalVTableHelperCtorCaller<ANiagaraPreviewBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPreviewBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister @ 1493142a0

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton,
               UNiagaraPreviewAxis::StaticRegisterNativesUNiagaraPreviewAxis,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPreviewAxis>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton;
}

// `scalar_deleting_destructor' @ 149314bf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149314ed0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse @ 149315080

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode @ 1493150c0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry @ 149315100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDeviceProfileStateEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDeviceProfileStateEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDeviceProfileStateEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDeviceProfileStateEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraPlatformSet @ 149315180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraPlatformSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSet.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraPlatformSet.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSet.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraPlatformSet.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry @ 149315200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetConflictEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetConflictEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetConflictEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetConflictEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition @ 149315280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetCVarCondition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetCVarCondition.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetCVarCondition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetCVarCondition.InnerSingleton;
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

// ENiagaraPlatformSelectionState_StaticEnum @ 149315300

UEnum * __cdecl ENiagaraPlatformSelectionState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState,(UObject *)pUVar1,
                       L"ENiagaraPlatformSelectionState");
  }
  return Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton;
}

// NewStructOps @ 149315340

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDeviceProfileStateEntry,&UE::CoreUObject::Private::Construct<FNiagaraDeviceProfileStateEntry>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDeviceProfileStateEntry>,&UE::CoreUObject::Private::Destruct<FNiagaraDeviceProfileStateEntry>,&UE::CoreUObject::Private::Copy<FNiagaraDeviceProfileStateEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1493153c0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraParameters,&UE::CoreUObject::Private::Construct<FNiagaraParameters>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraParameters>,&UE::CoreUObject::Private::Destruct<FNiagaraParameters>,&UE::CoreUObject::Private::Copy<FNiagaraParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraPlatformSetState_StaticEnum @ 149315400

UEnum * __cdecl ENiagaraPlatformSetState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState,(UObject *)pUVar1,
                       L"ENiagaraPlatformSetState");
  }
  return Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton;
}

// NewStructOps @ 149315440

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraPlatformSetConflictEntry,&UE::CoreUObject::Private::Construct<FNiagaraPlatformSetConflictEntry>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraPlatformSetConflictEntry>,&UE::CoreUObject::Private::Destruct<FNiagaraPlatformSetConflictEntry>,&UE::CoreUObject::Private::Copy<FNiagaraPlatformSetConflictEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ANiagaraPreviewBase @ 149315500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANiagaraPreviewBase(void)

{
  if (Z_Registration_Info_UClass_ANiagaraPreviewBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANiagaraPreviewBase.OuterSingleton,
               &Z_Construct_UClass_ANiagaraPreviewBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANiagaraPreviewBase.OuterSingleton;
}

// Z_Construct_UClass_ANiagaraPreviewGrid @ 149315540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANiagaraPreviewGrid(void)

{
  if (Z_Registration_Info_UClass_ANiagaraPreviewGrid.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANiagaraPreviewGrid.OuterSingleton,
               &Z_Construct_UClass_ANiagaraPreviewGrid_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANiagaraPreviewGrid.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis @ 149315580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPreviewAxis.OuterSingleton,
               &Z_Construct_UClass_UNiagaraPreviewAxis_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase @ 1493155c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.OuterSingleton;
}

// NewStructOps @ 149315600

void * __cdecl Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraPlatformSetConflictInfo,&UE::CoreUObject::Private::Construct<FNiagaraPlatformSetConflictInfo>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraPlatformSetConflictInfo>,&UE::CoreUObject::Private::Destruct<FNiagaraPlatformSetConflictInfo>,&UE::CoreUObject::Private::Copy<FNiagaraPlatformSetConflictInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat @ 149315640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.OuterSingleton,
               &Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32 @ 149315680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.OuterSingleton,
               &Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor @ 1493156c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.OuterSingleton
               ,&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector @ 149315700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.OuterSingleton,
               &Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D @ 149315740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.OuterSingleton,
               &Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4 @ 149315780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4(void)

{
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.OuterSingleton,
               &Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.OuterSingleton;
}

// NewProp_bExportPosition_SetBit @ 1493157c0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters_Statics::NewProp_bExportPosition_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode @ 1493157d0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.InnerSingleton;
}

// NewProp_bExportTangentBasis_SetBit @ 149315810

void __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters_Statics::
NewProp_bExportTangentBasis_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bExportColor_SetBit @ 149315820

void __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters_Statics::NewProp_bExportColor_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bExportMaterials_SetBit @ 149315830

void __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters_Statics::
NewProp_bExportMaterials_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bApplyWPO_SetBit @ 149315840

void __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters_Statics::NewProp_bApplyWPO_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 149315880

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRendererReadbackParameters,&UE::CoreUObject::Private::Construct<FNiagaraRendererReadbackParameters>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRendererReadbackParameters>,&UE::CoreUObject::Private::Destruct<FNiagaraRendererReadbackParameters>,&UE::CoreUObject::Private::Copy<FNiagaraRendererReadbackParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText @ 1493159a0

UFunction * __cdecl Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ENiagaraCVarConditionResponse_StaticEnum @ 1493159e0

UEnum * __cdecl ENiagaraCVarConditionResponse_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse,(UObject *)pUVar1,
                       L"ENiagaraCVarConditionResponse");
  }
  return Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton;
}

// Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem @ 149315a20

UFunction * __cdecl Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Value_SetBit @ 149315a60

void __cdecl
Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bUseMinInt_SetBit @ 149315a70

void __cdecl
Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 1;
  return;
}

// NewProp_bUseMaxInt_SetBit @ 149315a80

void __cdecl
Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 2;
  return;
}

// NewProp_bUseMinFloat_SetBit @ 149315a90

void __cdecl
Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 4;
  return;
}

// NewProp_bUseMaxFloat_SetBit @ 149315aa0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 8;
  return;
}

// NewStructOps @ 149315ab0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraPlatformSetCVarCondition,&UE::CoreUObject::Private::Construct<FNiagaraPlatformSetCVarCondition>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraPlatformSetCVarCondition>,&UE::CoreUObject::Private::Destruct<FNiagaraPlatformSetCVarCondition>,&UE::CoreUObject::Private::Copy<FNiagaraPlatformSetCVarCondition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsXAxis_SetBit @ 149315af0

void __cdecl
Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview @ 149315b00

UFunction * __cdecl Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ENiagaraDeviceProfileRedirectMode_StaticEnum @ 149315b40

UEnum * __cdecl ENiagaraDeviceProfileRedirectMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode,(UObject *)pUVar1
                       ,L"ENiagaraDeviceProfileRedirectMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraPreviewAxis_Num @ 149315c40

UFunction * __cdecl Z_Construct_UFunction_UNiagaraPreviewAxis_Num(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149315c80

void * __cdecl Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraPlatformSetRedirect,&UE::CoreUObject::Private::Construct<FNiagaraPlatformSetRedirect>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraPlatformSetRedirect>,&UE::CoreUObject::Private::Destruct<FNiagaraPlatformSetRedirect>,&UE::CoreUObject::Private::Copy<FNiagaraPlatformSetRedirect>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149315f70

void * __cdecl Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraPlatformSet,&UE::CoreUObject::Private::Construct<FNiagaraPlatformSet>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraPlatformSet>,&UE::CoreUObject::Private::Destruct<FNiagaraPlatformSet>,&UE::CoreUObject::Private::Copy<FNiagaraPlatformSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraRendererProperties @ 149315fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraRendererProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraRendererProperties.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter @ 149315ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialScalarParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialScalarParameter.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialScalarParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialScalarParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter @ 149316070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter.
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

// Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter @ 1493160f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialTextureParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialTextureParameter.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialTextureParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialTextureParameter.InnerSingleton
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

// Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter @ 149316170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialVectorParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialVectorParameter.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialVectorParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialVectorParameter.InnerSingleton;
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

// ENiagaraRendererSortPrecision_StaticEnum @ 1493161f0

UEnum * __cdecl ENiagaraRendererSortPrecision_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision,(UObject *)pUVar1,
                       L"ENiagaraRendererSortPrecision");
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton;
}

// ENiagaraRendererGpuTranslucentLatency_StaticEnum @ 149316230

UEnum * __cdecl ENiagaraRendererGpuTranslucentLatency_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency,
                       (UObject *)pUVar1,L"ENiagaraRendererGpuTranslucentLatency");
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton;
}

// NewStructOps @ 149316270

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRendererMaterialScalarParameter,&UE::CoreUObject::Private::Construct<FNiagaraRendererMaterialScalarParameter>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRendererMaterialScalarParameter>,&UE::CoreUObject::Private::Destruct<FNiagaraRendererMaterialScalarParameter>,&UE::CoreUObject::Private::Copy<FNiagaraRendererMaterialScalarParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1493164b0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRendererMaterialVectorParameter,&UE::CoreUObject::Private::Construct<FNiagaraRendererMaterialVectorParameter>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRendererMaterialVectorParameter>,&UE::CoreUObject::Private::Destruct<FNiagaraRendererMaterialVectorParameter>,&UE::CoreUObject::Private::Copy<FNiagaraRendererMaterialVectorParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149316bc0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRendererMaterialTextureParameter,&UE::CoreUObject::Private::Construct<FNiagaraRendererMaterialTextureParameter>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRendererMaterialTextureParameter>,&UE::CoreUObject::Private::Destruct<FNiagaraRendererMaterialTextureParameter>,&UE::CoreUObject::Private::Copy<FNiagaraRendererMaterialTextureParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149316c00

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRendererMaterialStaticBoolParameter,&UE::CoreUObject::Private::Construct<FNiagaraRendererMaterialStaticBoolParameter>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRendererMaterialStaticBoolParameter>,&UE::CoreUObject::Private::Destruct<FNiagaraRendererMaterialStaticBoolParameter>,&UE::CoreUObject::Private::Copy<FNiagaraRendererMaterialStaticBoolParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149316c40

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRendererMaterialParameters,&UE::CoreUObject::Private::Construct<FNiagaraRendererMaterialParameters>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRendererMaterialParameters>,&UE::CoreUObject::Private::Destruct<FNiagaraRendererMaterialParameters>,&UE::CoreUObject::Private::Copy<FNiagaraRendererMaterialParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraPreviewGridResetMode_StaticEnum @ 149316e00

UEnum * __cdecl ENiagaraPreviewGridResetMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode,(UObject *)pUVar1,
                       L"ENiagaraPreviewGridResetMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton;
}

// NewProp_bIsEnabled_SetBit @ 149316e40

void __cdecl
Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5d) = 1;
  return;
}

// NewProp_bAllowInCullProxies_SetBit @ 149316e50

void __cdecl
Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bAllowInCullProxies_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5e) = 1;
  return;
}

// NewProp_bReset_SetBit @ 149316f20

void __cdecl
Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews @ 149316f70

UFunction * __cdecl Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews @ 149316fb0

UFunction * __cdecl Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraBaselineController_NoRegister @ 149316ff0

UClass * __cdecl Z_Construct_UClass_UNiagaraBaselineController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBaselineController",
               &Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton,
               UNiagaraBaselineController::StaticRegisterNativesUNiagaraBaselineController,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraBaselineController>,
               InternalVTableHelperCtorCaller<UNiagaraBaselineController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton;
}

// Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister @ 1493170a0

UClass * __cdecl Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPerfBaselineActor",
               &Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton,
               ANiagaraPerfBaselineActor::StaticRegisterNativesANiagaraPerfBaselineActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraPerfBaselineActor>,
               InternalVTableHelperCtorCaller<ANiagaraPerfBaselineActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton;
}

// Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews @ 149317590

UFunction * __cdecl Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPaused_SetBit @ 149317690

void __cdecl
Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused @ 1493176a0

UFunction * __cdecl Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ANiagaraPerfBaselineActor @ 149317990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANiagaraPerfBaselineActor(void)

{
  if (Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.OuterSingleton,
               &Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraBaselineController @ 1493179d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraBaselineController(void)

{
  if (Z_Registration_Info_UClass_UNiagaraBaselineController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraBaselineController.OuterSingleton,
               &Z_Construct_UClass_UNiagaraBaselineController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraBaselineController.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraBaselineController_Basic @ 149317a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraBaselineController_Basic(void)

{
  if (Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.OuterSingleton,
               &Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats @ 149317a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPerfBaselineStats.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraPerfBaselineStats.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraPerfBaselineStats.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraPerfBaselineStats.InnerSingleton;
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

// NewStructOps @ 149317ad0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraPerfBaselineStats,&UE::CoreUObject::Private::Construct<FNiagaraPerfBaselineStats>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraPerfBaselineStats>,&UE::CoreUObject::Private::Destruct<FNiagaraPerfBaselineStats>,&UE::CoreUObject::Private::Copy<FNiagaraPerfBaselineStats>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNiagaraBaselineController_GetSystem @ 149317be0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraBaselineController_GetSystem(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest @ 149317c20

UFunction * __cdecl Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::FuncParams);
  }
  return ReturnFunction;
}

// BuildParticleOrder_Inner1<FFloat16,`FNiagaraSortCullHelper<1>::BuildParticleOrder'::__l5::<lambda_1>_> @ 149319130

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FNiagaraSortCullHelper<1>::
BuildParticleOrder_Inner1<FFloat16,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l5::<lambda_1>_>
          (FNiagaraSortCullHelper<1> *this,int param_1,uint param_2,<lambda_1> param_3,
          FParticleOrderAsUint *param_4)

{
  double dVar1;
  ENiagaraSortMode EVar2;
  FNiagaraGPUSortInfo *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  FParticleOrderAsUint *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  FScriptContainerElement *local_res8;
  ushort local_68 [4];
  FParticleOrderAsUint *local_60;
  FParticleOrderAsUint *local_58;
  
  pFVar3 = this->SortInfo;
  EVar2 = pFVar3->SortMode;
  if (EVar2 == ViewDepth) {
    pFVar14 = ((param_3.Buffer)->HalfData).AllocatorInstance.Data;
    uVar9 = (param_3.Buffer)->HalfStride;
    iVar8 = 0;
    iVar11 = 0;
    pFVar15 = pFVar14 + (param_2 + 1) * uVar9;
    if (0 < param_1) {
      piVar10 = this->VisibilityTag;
      pFVar13 = (FParticleOrderAsUint *)
                (pFVar14 + ((ulonglong)(uVar9 * param_2) - (longlong)pFVar15));
      local_res8 = pFVar14 + ((ulonglong)((param_2 + 2) * uVar9) - (longlong)pFVar15);
      lVar12 = 0;
      local_58 = pFVar13;
      do {
        local_60 = param_4;
        if ((piVar10 == (int *)0x0) ||
           (*(int *)((longlong)piVar10 + lVar12) == this->VisibilityValue)) {
          if ((this->MeshIndexTag == (int *)0x0) ||
             (*(int *)((longlong)this->MeshIndexTag + lVar12) == this->MeshIndexValue)) {
            local_60 = param_4 + 1;
            iVar8 = iVar8 + 1;
            fVar16 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar15 + (longlong)pFVar13));
            dVar5 = (pFVar3->ViewOrigin).field0_0x0._s_0.X;
            dVar6 = (pFVar3->ViewDirection).field0_0x0._s_0.X;
            fVar17 = FGenericPlatformMath::LoadHalf((ushort *)pFVar15);
            dVar19 = (pFVar3->ViewOrigin).field0_0x0._s_0.Y;
            dVar1 = (pFVar3->ViewDirection).field0_0x0._s_0.Y;
            fVar18 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar15 + (longlong)local_res8));
            param_4->Index = iVar11;
            param_4->OrderAsUint =
                 ~((uint)(float)(((double)fVar16 - dVar5) * dVar6 +
                                 ((double)fVar17 - dVar19) * dVar1 +
                                ((double)fVar18 - (pFVar3->ViewOrigin).field0_0x0._s_0.Z) *
                                (pFVar3->ViewDirection).field0_0x0._s_0.Z) | 0x80000000);
            pFVar13 = local_58;
          }
          piVar10 = this->VisibilityTag;
        }
        iVar11 = iVar11 + 1;
        pFVar15 = pFVar15 + 2;
        lVar12 = lVar12 + 4;
        param_4 = local_60;
      } while (iVar11 < param_1);
    }
  }
  else if (EVar2 == ViewDistance) {
    pFVar14 = ((param_3.Buffer)->HalfData).AllocatorInstance.Data;
    uVar9 = (param_3.Buffer)->HalfStride;
    iVar8 = 0;
    iVar11 = 0;
    pFVar15 = pFVar14 + (param_2 + 1) * uVar9;
    if (0 < param_1) {
      piVar10 = this->VisibilityTag;
      pFVar13 = (FParticleOrderAsUint *)
                (pFVar14 + ((ulonglong)(uVar9 * param_2) - (longlong)pFVar15));
      local_res8 = pFVar14 + ((ulonglong)((param_2 + 2) * uVar9) - (longlong)pFVar15);
      lVar12 = 0;
      local_60 = pFVar13;
      do {
        local_58 = param_4;
        if ((piVar10 == (int *)0x0) ||
           (*(int *)((longlong)piVar10 + lVar12) == this->VisibilityValue)) {
          if ((this->MeshIndexTag == (int *)0x0) ||
             (*(int *)((longlong)this->MeshIndexTag + lVar12) == this->MeshIndexValue)) {
            local_58 = param_4 + 1;
            iVar8 = iVar8 + 1;
            fVar16 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar15 + (longlong)pFVar13));
            dVar6 = (double)fVar16 - (pFVar3->ViewOrigin).field0_0x0._s_0.X;
            fVar16 = FGenericPlatformMath::LoadHalf((ushort *)pFVar15);
            dVar5 = (double)fVar16 - (pFVar3->ViewOrigin).field0_0x0._s_0.Y;
            fVar16 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar15 + (longlong)local_res8));
            param_4->Index = iVar11;
            dVar19 = (double)fVar16 - (pFVar3->ViewOrigin).field0_0x0._s_0.Z;
            param_4->OrderAsUint =
                 ~((uint)(float)(dVar6 * dVar6 + dVar5 * dVar5 + dVar19 * dVar19) | 0x80000000);
            pFVar13 = local_60;
          }
          piVar10 = this->VisibilityTag;
        }
        iVar11 = iVar11 + 1;
        pFVar15 = pFVar15 + 2;
        lVar12 = lVar12 + 4;
        param_4 = local_58;
      } while (iVar11 < param_1);
    }
  }
  else if (EVar2 == CustomAscending) {
    iVar8 = 0;
    iVar11 = 0;
    pFVar14 = ((param_3.Buffer)->HalfData).AllocatorInstance.Data +
              param_2 * (param_3.Buffer)->HalfStride;
    if (0 < param_1) {
      piVar10 = this->VisibilityTag;
      lVar12 = 0;
      do {
        pFVar13 = param_4;
        if ((piVar10 == (int *)0x0) ||
           (*(int *)((longlong)piVar10 + lVar12) == this->VisibilityValue)) {
          if ((this->MeshIndexTag == (int *)0x0) ||
             (*(int *)((longlong)this->MeshIndexTag + lVar12) == this->MeshIndexValue)) {
            local_68[0] = *(ushort *)pFVar14;
            iVar8 = iVar8 + 1;
            pFVar13 = param_4 + 1;
            fVar16 = FGenericPlatformMath::LoadHalf(local_68);
            local_res8 = (FScriptContainerElement *)CONCAT44(local_res8._4_4_,fVar16);
            if (0.0 <= fVar16) {
              uVar9 = (uint)fVar16 | 0x80000000;
            }
            else {
              uVar9 = ~(uint)fVar16;
            }
            param_4->OrderAsUint = uVar9;
            param_4->Index = iVar11;
          }
          piVar10 = this->VisibilityTag;
        }
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 4;
        pFVar14 = pFVar14 + 2;
        param_4 = pFVar13;
      } while (iVar11 < param_1);
    }
  }
  else if (EVar2 == CustomDecending) {
    iVar8 = 0;
    iVar11 = 0;
    pFVar14 = ((param_3.Buffer)->HalfData).AllocatorInstance.Data +
              param_2 * (param_3.Buffer)->HalfStride;
    if (0 < param_1) {
      piVar10 = this->VisibilityTag;
      lVar12 = 0;
      do {
        pFVar13 = param_4;
        if ((piVar10 == (int *)0x0) ||
           (*(int *)((longlong)piVar10 + lVar12) == this->VisibilityValue)) {
          if ((this->MeshIndexTag == (int *)0x0) ||
             (*(int *)((longlong)this->MeshIndexTag + lVar12) == this->MeshIndexValue)) {
            local_res8 = (FScriptContainerElement *)
                         CONCAT62(local_res8._2_6_,*(undefined2 *)pFVar14);
            iVar8 = iVar8 + 1;
            pFVar13 = param_4 + 1;
            fVar16 = FGenericPlatformMath::LoadHalf((ushort *)&local_res8);
            local_res8 = (FScriptContainerElement *)CONCAT44(local_res8._4_4_,fVar16);
            if (0.0 <= fVar16) {
              uVar9 = (uint)fVar16 | 0x80000000;
            }
            else {
              uVar9 = ~(uint)fVar16;
            }
            param_4->Index = iVar11;
            param_4->OrderAsUint = ~uVar9;
          }
          piVar10 = this->VisibilityTag;
        }
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 4;
        pFVar14 = pFVar14 + 2;
        param_4 = pFVar13;
      } while (iVar11 < param_1);
    }
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                       ,0x33d,L"Unknown sort mode");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    iVar8 = 0;
  }
  return iVar8;
}

// BuildParticleOrder_Inner1<FFloat16,`FNiagaraSortCullHelper<0>::BuildParticleOrder'::__l5::<lambda_1>_> @ 149319590

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FNiagaraSortCullHelper<0>::
BuildParticleOrder_Inner1<FFloat16,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l5::<lambda_1>_>
          (FNiagaraSortCullHelper<0> *this,int param_1,uint param_2,<lambda_1> param_3,
          FParticleOrderAsUint *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ENiagaraSortMode EVar4;
  FNiagaraGPUSortInfo *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float local_res8 [2];
  ushort local_a8 [64];
  
  pFVar5 = this->SortInfo;
  EVar4 = pFVar5->SortMode;
  if (EVar4 == ViewDepth) {
    uVar13 = (param_3.Buffer)->HalfStride;
    pFVar15 = ((param_3.Buffer)->HalfData).AllocatorInstance.Data;
    iVar14 = 0;
    pFVar16 = pFVar15 + (param_2 + 1) * uVar13;
    iVar12 = iVar14;
    if (0 < param_1) {
      dVar1 = (pFVar5->ViewOrigin).field0_0x0._s_0.X;
      lVar9 = (ulonglong)(uVar13 * param_2) - (longlong)pFVar16;
      dVar2 = (pFVar5->ViewOrigin).field0_0x0._s_0.Y;
      lVar10 = (ulonglong)((param_2 + 2) * uVar13) - (longlong)pFVar16;
      dVar3 = (pFVar5->ViewOrigin).field0_0x0._s_0.Z;
      dVar7 = (pFVar5->ViewDirection).field0_0x0._s_0.X;
      dVar8 = (pFVar5->ViewDirection).field0_0x0._s_0.Y;
      dVar20 = (pFVar5->ViewDirection).field0_0x0._s_0.Z;
      do {
        fVar17 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar16 + (longlong)(pFVar15 + lVar9)));
        fVar18 = FGenericPlatformMath::LoadHalf((ushort *)pFVar16);
        fVar19 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar16 + (longlong)(pFVar15 + lVar10)));
        param_4->Index = iVar14;
        iVar14 = iVar14 + 1;
        pFVar16 = pFVar16 + 2;
        param_4->OrderAsUint =
             ~((uint)(float)(((double)fVar17 - dVar1) * dVar7 + ((double)fVar18 - dVar2) * dVar8 +
                            ((double)fVar19 - dVar3) * dVar20) | 0x80000000);
        param_4 = param_4 + 1;
        iVar12 = param_1;
      } while (iVar14 < param_1);
    }
  }
  else if (EVar4 == ViewDistance) {
    uVar13 = (param_3.Buffer)->HalfStride;
    pFVar15 = ((param_3.Buffer)->HalfData).AllocatorInstance.Data;
    iVar14 = 0;
    pFVar16 = pFVar15 + (param_2 + 1) * uVar13;
    iVar12 = iVar14;
    if (0 < param_1) {
      dVar1 = (pFVar5->ViewOrigin).field0_0x0._s_0.X;
      lVar9 = (ulonglong)(uVar13 * param_2) - (longlong)pFVar16;
      dVar2 = (pFVar5->ViewOrigin).field0_0x0._s_0.Y;
      lVar10 = (ulonglong)((param_2 + 2) * uVar13) - (longlong)pFVar16;
      dVar3 = (pFVar5->ViewOrigin).field0_0x0._s_0.Z;
      do {
        fVar17 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar16 + (longlong)(pFVar15 + lVar9)));
        dVar8 = (double)fVar17 - dVar1;
        fVar17 = FGenericPlatformMath::LoadHalf((ushort *)pFVar16);
        dVar7 = (double)fVar17 - dVar2;
        fVar17 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar16 + (longlong)(pFVar15 + lVar10)));
        param_4->Index = iVar14;
        iVar14 = iVar14 + 1;
        pFVar16 = pFVar16 + 2;
        dVar20 = (double)fVar17 - dVar3;
        param_4->OrderAsUint =
             ~((uint)(float)(dVar8 * dVar8 + dVar7 * dVar7 + dVar20 * dVar20) | 0x80000000);
        param_4 = param_4 + 1;
        iVar12 = param_1;
      } while (iVar14 < param_1);
    }
  }
  else if (EVar4 == CustomAscending) {
    iVar14 = 0;
    pFVar15 = ((param_3.Buffer)->HalfData).AllocatorInstance.Data +
              param_2 * (param_3.Buffer)->HalfStride;
    iVar12 = 0;
    if (0 < param_1) {
      do {
        local_a8[0] = *(ushort *)pFVar15;
        local_res8[0] = FGenericPlatformMath::LoadHalf(local_a8);
        if (0.0 <= local_res8[0]) {
          uVar13 = (uint)local_res8[0] | 0x80000000;
        }
        else {
          uVar13 = ~(uint)local_res8[0];
        }
        param_4->Index = iVar14;
        pFVar15 = pFVar15 + 2;
        iVar14 = iVar14 + 1;
        param_4->OrderAsUint = uVar13;
        param_4 = param_4 + 1;
        iVar12 = param_1;
      } while (iVar14 < param_1);
    }
  }
  else if (EVar4 == CustomDecending) {
    iVar14 = 0;
    pFVar15 = ((param_3.Buffer)->HalfData).AllocatorInstance.Data +
              param_2 * (param_3.Buffer)->HalfStride;
    iVar12 = 0;
    if (0 < param_1) {
      do {
        local_res8[0] = (float)CONCAT22(local_res8[0]._2_2_,*(undefined2 *)pFVar15);
        local_res8[0] = FGenericPlatformMath::LoadHalf((ushort *)local_res8);
        if (0.0 <= local_res8[0]) {
          uVar13 = (uint)local_res8[0] | 0x80000000;
        }
        else {
          uVar13 = ~(uint)local_res8[0];
        }
        param_4->Index = iVar14;
        pFVar15 = pFVar15 + 2;
        iVar14 = iVar14 + 1;
        param_4->OrderAsUint = ~uVar13;
        param_4 = param_4 + 1;
        iVar12 = param_1;
      } while (iVar14 < param_1);
    }
  }
  else {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                        ,0x33d,L"Unknown sort mode");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      iVar12 = (*pcVar6)();
      return iVar12;
    }
    iVar12 = 0;
  }
  return iVar12;
}

// BuildParticleOrder_Inner2<1,0,`FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,`FNiagaraSortCullHelper<1>::BuildParticleOrder'::__l7::<lambda_2>_>'::__l5::<lambda_1>_> @ 149319940

int __thiscall
FNiagaraSortCullHelper<1>::
BuildParticleOrder_Inner2<1,0,_FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l5::<lambda_1>_>
          (FNiagaraSortCullHelper<1> *this,int param_1,FParticleOrderAsUint *param_2,
          <lambda_1> *param_3)

{
  FNiagaraGPUSortInfo *pFVar1;
  float **ppfVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar6;
  FParticleOrderAsUint *pFVar7;
  FParticleOrderAsUint *pFVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar9 = uVar5;
  uVar12 = uVar5;
  if (param_1 < 4) {
    if (param_1 < 1) {
      return 0;
    }
    piVar11 = this->VisibilityTag;
    uVar3 = uVar5;
  }
  else {
    piVar11 = this->VisibilityTag;
    uVar3 = (ulonglong)((param_1 - 4U >> 2) + 1) << 2;
    iVar6 = 2;
    lVar10 = 8;
    uVar13 = uVar5;
    pFVar7 = param_2;
    do {
      pFVar8 = pFVar7;
      if ((piVar11 == (int *)0x0) ||
         (*(int *)((longlong)piVar11 + lVar10 + -8) == this->VisibilityValue)) {
        if ((this->MeshIndexTag == (int *)0x0) ||
           (*(int *)(uVar13 + (longlong)this->MeshIndexTag) == this->MeshIndexValue)) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar12 = uVar12 + 1;
          pFVar8 = pFVar7 + 1;
          pFVar1 = param_3->__this->SortInfo;
          pFVar7->OrderAsUint =
               ~((uint)(float)(((double)*(float *)((longlong)*param_3->PositionX + lVar10 + -8) -
                               (pFVar1->ViewOrigin).field0_0x0._s_0.X) *
                               (pFVar1->ViewDirection).field0_0x0._s_0.X +
                               ((double)*(float *)((longlong)*param_3->PositionY + lVar10 + -8) -
                               (pFVar1->ViewOrigin).field0_0x0._s_0.Y) *
                               (pFVar1->ViewDirection).field0_0x0._s_0.Y +
                              ((double)*(float *)((longlong)*param_3->PositionZ + lVar10 + -8) -
                              (pFVar1->ViewOrigin).field0_0x0._s_0.Z) *
                              (pFVar1->ViewDirection).field0_0x0._s_0.Z) | 0x80000000);
          pFVar7->Index = (int)uVar5;
        }
        pFVar7 = pFVar8;
        if (piVar11 != (int *)0x0) goto LAB_149319a50;
LAB_149319a5f:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar8 = pFVar7,
           *(int *)(lVar10 + -4 + (longlong)this->MeshIndexTag) == this->MeshIndexValue)) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar12 = uVar12 + 1;
          pFVar8 = pFVar7 + 1;
          pFVar1 = param_3->__this->SortInfo;
          pFVar7->OrderAsUint =
               ~((uint)(float)(((double)*(float *)((longlong)*param_3->PositionX + lVar10 + -4) -
                               (pFVar1->ViewOrigin).field0_0x0._s_0.X) *
                               (pFVar1->ViewDirection).field0_0x0._s_0.X +
                               ((double)*(float *)((longlong)*param_3->PositionY + lVar10 + -4) -
                               (pFVar1->ViewOrigin).field0_0x0._s_0.Y) *
                               (pFVar1->ViewDirection).field0_0x0._s_0.Y +
                              ((double)*(float *)((longlong)*param_3->PositionZ + lVar10 + -4) -
                              (pFVar1->ViewOrigin).field0_0x0._s_0.Z) *
                              (pFVar1->ViewDirection).field0_0x0._s_0.Z) | 0x80000000);
          pFVar7->Index = iVar6 + -1;
        }
        pFVar7 = pFVar8;
        if (piVar11 != (int *)0x0) goto LAB_149319aff;
LAB_149319b0d:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar8 = pFVar7, *(int *)(lVar10 + (longlong)this->MeshIndexTag) == this->MeshIndexValue
           )) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar12 = uVar12 + 1;
          pFVar8 = pFVar7 + 1;
          pFVar1 = param_3->__this->SortInfo;
          pFVar7->OrderAsUint =
               ~((uint)(float)(((double)*(float *)((longlong)*param_3->PositionY + lVar10) -
                               (pFVar1->ViewOrigin).field0_0x0._s_0.Y) *
                               (pFVar1->ViewDirection).field0_0x0._s_0.Y +
                               ((double)*(float *)((longlong)*param_3->PositionX + lVar10) -
                               (pFVar1->ViewOrigin).field0_0x0._s_0.X) *
                               (pFVar1->ViewDirection).field0_0x0._s_0.X +
                              ((double)*(float *)((longlong)*param_3->PositionZ + lVar10) -
                              (pFVar1->ViewOrigin).field0_0x0._s_0.Z) *
                              (pFVar1->ViewDirection).field0_0x0._s_0.Z) | 0x80000000);
          pFVar7->Index = iVar6;
        }
        if (piVar11 != (int *)0x0) goto LAB_149319ba2;
LAB_149319bb1:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar7 = pFVar8,
           *(int *)(lVar10 + 4 + (longlong)this->MeshIndexTag) == this->MeshIndexValue)) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar12 = uVar12 + 1;
          pFVar7 = pFVar8 + 1;
          pFVar1 = param_3->__this->SortInfo;
          pFVar8->OrderAsUint =
               ~((uint)(float)(((double)*(float *)((longlong)*param_3->PositionX + lVar10 + 4) -
                               (pFVar1->ViewOrigin).field0_0x0._s_0.X) *
                               (pFVar1->ViewDirection).field0_0x0._s_0.X +
                               ((double)*(float *)((longlong)*param_3->PositionY + lVar10 + 4) -
                               (pFVar1->ViewOrigin).field0_0x0._s_0.Y) *
                               (pFVar1->ViewDirection).field0_0x0._s_0.Y +
                              ((double)*(float *)((longlong)*param_3->PositionZ + lVar10 + 4) -
                              (pFVar1->ViewOrigin).field0_0x0._s_0.Z) *
                              (pFVar1->ViewDirection).field0_0x0._s_0.Z) | 0x80000000);
          pFVar8->Index = iVar6 + 1;
        }
      }
      else {
LAB_149319a50:
        pFVar7 = pFVar8;
        if (*(int *)((longlong)piVar11 + lVar10 + -4) == this->VisibilityValue) goto LAB_149319a5f;
LAB_149319aff:
        pFVar7 = pFVar8;
        if (*(int *)((longlong)piVar11 + lVar10) == this->VisibilityValue) goto LAB_149319b0d;
LAB_149319ba2:
        pFVar7 = pFVar8;
        if (*(int *)((longlong)piVar11 + lVar10 + 4) == this->VisibilityValue) goto LAB_149319bb1;
      }
      lVar10 = lVar10 + 0x10;
      uVar4 = (int)uVar5 + 4;
      uVar5 = (ulonglong)uVar4;
      iVar6 = iVar6 + 4;
      uVar13 = uVar13 + 0x10;
    } while ((int)uVar4 < param_1 + -3);
    if (param_1 <= (int)uVar4) {
      return (int)uVar9;
    }
  }
  lVar10 = uVar3 * 4;
  pFVar7 = param_2 + uVar12;
  do {
    pFVar8 = pFVar7;
    if (((piVar11 == (int *)0x0) || (*(int *)((longlong)piVar11 + lVar10) == this->VisibilityValue))
       && ((this->MeshIndexTag == (int *)0x0 ||
           (*(int *)((longlong)this->MeshIndexTag + lVar10) == this->MeshIndexValue)))) {
      uVar9 = (ulonglong)((int)uVar9 + 1);
      pFVar8 = pFVar7 + 1;
      pFVar1 = param_3->__this->SortInfo;
      ppfVar2 = param_3->PositionY;
      pFVar7->Index = (int)uVar5;
      pFVar7->OrderAsUint =
           ~((uint)(float)(((double)*(float *)((longlong)*ppfVar2 + lVar10) -
                           (pFVar1->ViewOrigin).field0_0x0._s_0.Y) *
                           (pFVar1->ViewDirection).field0_0x0._s_0.Y +
                           ((double)*(float *)((longlong)*param_3->PositionX + lVar10) -
                           (pFVar1->ViewOrigin).field0_0x0._s_0.X) *
                           (pFVar1->ViewDirection).field0_0x0._s_0.X +
                          ((double)*(float *)((longlong)*param_3->PositionZ + lVar10) -
                          (pFVar1->ViewOrigin).field0_0x0._s_0.Z) *
                          (pFVar1->ViewDirection).field0_0x0._s_0.Z) | 0x80000000);
    }
    lVar10 = lVar10 + 4;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    pFVar7 = pFVar8;
  } while ((int)uVar4 < param_1);
  return (int)uVar9;
}

// BuildParticleOrder_Inner2<1,0,`FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,`FNiagaraSortCullHelper<0>::BuildParticleOrder'::__l7::<lambda_2>_>'::__l5::<lambda_1>_> @ 149319d70

int __thiscall
FNiagaraSortCullHelper<0>::
BuildParticleOrder_Inner2<1,0,_FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l5::<lambda_1>_>
          (FNiagaraSortCullHelper<0> *this,int param_1,FParticleOrderAsUint *param_2,
          <lambda_1> *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FNiagaraGPUSortInfo *pFVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  FParticleOrderAsUint *pFVar21;
  uint uVar22;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar23;
  
  uVar20 = 0;
  uVar24 = 0;
  uVar27 = uVar20;
  if (param_1 < 4) {
    uVar23 = uVar20;
    if (param_1 < 1) {
      return 0;
    }
  }
  else {
    pFVar14 = param_3->__this->SortInfo;
    iVar25 = 2;
    dVar8 = (pFVar14->ViewOrigin).field0_0x0._s_0.X;
    pfVar15 = *param_3->PositionY;
    dVar9 = (pFVar14->ViewOrigin).field0_0x0._s_0.Y;
    dVar10 = (pFVar14->ViewOrigin).field0_0x0._s_0.Z;
    dVar11 = (pFVar14->ViewDirection).field0_0x0._s_0.X;
    pfVar18 = pfVar15 + 1;
    lVar19 = (longlong)*param_3->PositionX - (longlong)pfVar15;
    dVar12 = (pFVar14->ViewDirection).field0_0x0._s_0.Y;
    dVar13 = (pFVar14->ViewDirection).field0_0x0._s_0.Z;
    lVar26 = (longlong)*param_3->PositionZ - (longlong)pfVar15;
    pFVar21 = param_2;
    uVar23 = uVar20;
    do {
      uVar24 = (int)uVar20 + 4;
      uVar20 = (ulonglong)uVar24;
      uVar27 = uVar27 + 4;
      fVar2 = *(float *)(lVar26 + (longlong)pfVar18);
      fVar3 = *(float *)((longlong)pfVar18 + lVar19);
      fVar4 = *pfVar18;
      pFVar21->OrderAsUint =
           ~((uint)(float)(((double)*(float *)((longlong)pfVar18 + lVar19 + -4) - dVar8) * dVar11 +
                           ((double)pfVar18[-1] - dVar9) * dVar12 +
                          ((double)*(float *)(lVar26 + -4 + (longlong)pfVar18) - dVar10) * dVar13) |
            0x80000000);
      pFVar21->Index = (int)uVar23;
      fVar5 = *(float *)(lVar26 + 4 + (longlong)pfVar18);
      fVar6 = *(float *)((longlong)pfVar18 + lVar19 + 4);
      fVar7 = pfVar18[1];
      pFVar21[1].OrderAsUint =
           ~((uint)(float)(((double)fVar3 - dVar8) * dVar11 + ((double)fVar4 - dVar9) * dVar12 +
                          ((double)fVar2 - dVar10) * dVar13) | 0x80000000);
      pFVar21[1].Index = iVar25 + -1;
      fVar2 = *(float *)(lVar26 + 8 + (longlong)pfVar18);
      fVar3 = *(float *)((longlong)pfVar18 + lVar19 + 8);
      fVar4 = pfVar18[2];
      pFVar21[2].OrderAsUint =
           ~((uint)(float)(((double)fVar6 - dVar8) * dVar11 + ((double)fVar7 - dVar9) * dVar12 +
                          ((double)fVar5 - dVar10) * dVar13) | 0x80000000);
      pFVar21[2].Index = iVar25;
      pfVar18 = pfVar18 + 4;
      uVar22 = (int)uVar23 + 4;
      uVar23 = (ulonglong)uVar22;
      pFVar21[3].OrderAsUint =
           ~((uint)(float)(((double)fVar3 - dVar8) * dVar11 + ((double)fVar4 - dVar9) * dVar12 +
                          ((double)fVar2 - dVar10) * dVar13) | 0x80000000);
      iVar1 = iVar25 + 1;
      iVar25 = iVar25 + 4;
      pFVar21[3].Index = iVar1;
      pFVar21 = pFVar21 + 4;
    } while ((int)uVar22 < param_1 + -3);
    uVar20 = (ulonglong)((param_1 - 4U >> 2) + 1) << 2;
    if (param_1 <= (int)uVar22) {
      return uVar24;
    }
  }
  pFVar21 = param_2 + uVar27;
  pFVar14 = param_3->__this->SortInfo;
  dVar8 = (pFVar14->ViewOrigin).field0_0x0._s_0.X;
  pfVar15 = *param_3->PositionY;
  dVar9 = (pFVar14->ViewOrigin).field0_0x0._s_0.Y;
  dVar10 = (pFVar14->ViewOrigin).field0_0x0._s_0.Z;
  dVar11 = (pFVar14->ViewDirection).field0_0x0._s_0.X;
  pfVar16 = *param_3->PositionX;
  dVar12 = (pFVar14->ViewDirection).field0_0x0._s_0.Y;
  dVar13 = (pFVar14->ViewDirection).field0_0x0._s_0.Z;
  pfVar18 = pfVar15 + uVar20;
  pfVar17 = *param_3->PositionZ;
  iVar25 = (int)uVar23;
  do {
    fVar2 = *(float *)((longlong)pfVar18 + ((longlong)pfVar16 - (longlong)pfVar15));
    fVar3 = *pfVar18;
    fVar4 = *(float *)((longlong)pfVar18 + ((longlong)pfVar17 - (longlong)pfVar15));
    pfVar18 = pfVar18 + 1;
    pFVar21->Index = (int)uVar23;
    uVar22 = (int)uVar23 + 1;
    uVar23 = (ulonglong)uVar22;
    pFVar21->OrderAsUint =
         ~((uint)(float)(((double)fVar2 - dVar8) * dVar11 + ((double)fVar3 - dVar9) * dVar12 +
                        ((double)fVar4 - dVar10) * dVar13) | 0x80000000);
    pFVar21 = pFVar21 + 1;
  } while ((int)uVar22 < param_1);
  return uVar24 + (param_1 - iVar25);
}

// BuildParticleOrder_Inner2<1,0,`FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,`FNiagaraSortCullHelper<1>::BuildParticleOrder'::__l7::<lambda_2>_>'::__l6::<lambda_2>_> @ 14931a090

int __thiscall
FNiagaraSortCullHelper<1>::
BuildParticleOrder_Inner2<1,0,_FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l6::<lambda_2>_>
          (FNiagaraSortCullHelper<1> *this,int param_1,FParticleOrderAsUint *param_2,
          <lambda_2> *param_3)

{
  FNiagaraGPUSortInfo *pFVar1;
  float **ppfVar2;
  double dVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar7;
  FParticleOrderAsUint *pFVar8;
  FParticleOrderAsUint *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar10 = uVar6;
  uVar13 = uVar6;
  if (param_1 < 4) {
    if (param_1 < 1) {
      return 0;
    }
    piVar12 = this->VisibilityTag;
    uVar4 = uVar6;
  }
  else {
    piVar12 = this->VisibilityTag;
    uVar4 = (ulonglong)((param_1 - 4U >> 2) + 1) << 2;
    iVar7 = 2;
    lVar11 = 8;
    uVar14 = uVar6;
    pFVar8 = param_2;
    do {
      pFVar9 = pFVar8;
      if ((piVar12 == (int *)0x0) ||
         (*(int *)((longlong)piVar12 + lVar11 + -8) == this->VisibilityValue)) {
        if ((this->MeshIndexTag == (int *)0x0) ||
           (*(int *)((longlong)this->MeshIndexTag + uVar14) == this->MeshIndexValue)) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar13 = uVar13 + 1;
          pFVar9 = pFVar8 + 1;
          pFVar1 = param_3->__this->SortInfo;
          dVar15 = (double)*(float *)((longlong)*param_3->PositionX + lVar11 + -8) -
                   (pFVar1->ViewOrigin).field0_0x0._s_0.X;
          dVar16 = (double)*(float *)((longlong)*param_3->PositionY + lVar11 + -8) -
                   (pFVar1->ViewOrigin).field0_0x0._s_0.Y;
          dVar3 = (double)*(float *)((longlong)*param_3->PositionZ + lVar11 + -8) -
                  (pFVar1->ViewOrigin).field0_0x0._s_0.Z;
          pFVar8->OrderAsUint =
               ~((uint)(float)(dVar16 * dVar16 + dVar15 * dVar15 + dVar3 * dVar3) | 0x80000000);
          pFVar8->Index = (int)uVar6;
        }
        pFVar8 = pFVar9;
        if (piVar12 != (int *)0x0) goto LAB_14931a199;
LAB_14931a1a8:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar9 = pFVar8,
           *(int *)((longlong)this->MeshIndexTag + lVar11 + -4) == this->MeshIndexValue)) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar13 = uVar13 + 1;
          pFVar9 = pFVar8 + 1;
          pFVar1 = param_3->__this->SortInfo;
          dVar15 = (double)*(float *)((longlong)*param_3->PositionX + lVar11 + -4) -
                   (pFVar1->ViewOrigin).field0_0x0._s_0.X;
          dVar16 = (double)*(float *)((longlong)*param_3->PositionY + lVar11 + -4) -
                   (pFVar1->ViewOrigin).field0_0x0._s_0.Y;
          dVar3 = (double)*(float *)((longlong)*param_3->PositionZ + lVar11 + -4) -
                  (pFVar1->ViewOrigin).field0_0x0._s_0.Z;
          pFVar8->OrderAsUint =
               ~((uint)(float)(dVar16 * dVar16 + dVar15 * dVar15 + dVar3 * dVar3) | 0x80000000);
          pFVar8->Index = iVar7 + -1;
        }
        pFVar8 = pFVar9;
        if (piVar12 != (int *)0x0) goto LAB_14931a245;
LAB_14931a253:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar9 = pFVar8, *(int *)((longlong)this->MeshIndexTag + lVar11) == this->MeshIndexValue
           )) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar13 = uVar13 + 1;
          pFVar9 = pFVar8 + 1;
          pFVar1 = param_3->__this->SortInfo;
          dVar15 = (double)*(float *)((longlong)*param_3->PositionX + lVar11) -
                   (pFVar1->ViewOrigin).field0_0x0._s_0.X;
          dVar16 = (double)*(float *)((longlong)*param_3->PositionY + lVar11) -
                   (pFVar1->ViewOrigin).field0_0x0._s_0.Y;
          dVar3 = (double)*(float *)((longlong)*param_3->PositionZ + lVar11) -
                  (pFVar1->ViewOrigin).field0_0x0._s_0.Z;
          pFVar8->OrderAsUint =
               ~((uint)(float)(dVar16 * dVar16 + dVar15 * dVar15 + dVar3 * dVar3) | 0x80000000);
          pFVar8->Index = iVar7;
        }
        if (piVar12 != (int *)0x0) goto LAB_14931a2e5;
LAB_14931a2f4:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar8 = pFVar9,
           *(int *)((longlong)this->MeshIndexTag + lVar11 + 4) == this->MeshIndexValue)) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar13 = uVar13 + 1;
          pFVar8 = pFVar9 + 1;
          pFVar1 = param_3->__this->SortInfo;
          dVar15 = (double)*(float *)((longlong)*param_3->PositionX + lVar11 + 4) -
                   (pFVar1->ViewOrigin).field0_0x0._s_0.X;
          dVar16 = (double)*(float *)((longlong)*param_3->PositionY + lVar11 + 4) -
                   (pFVar1->ViewOrigin).field0_0x0._s_0.Y;
          dVar3 = (double)*(float *)((longlong)*param_3->PositionZ + lVar11 + 4) -
                  (pFVar1->ViewOrigin).field0_0x0._s_0.Z;
          pFVar9->OrderAsUint =
               ~((uint)(float)(dVar16 * dVar16 + dVar15 * dVar15 + dVar3 * dVar3) | 0x80000000);
          pFVar9->Index = iVar7 + 1;
        }
      }
      else {
LAB_14931a199:
        pFVar8 = pFVar9;
        if (*(int *)((longlong)piVar12 + lVar11 + -4) == this->VisibilityValue) goto LAB_14931a1a8;
LAB_14931a245:
        pFVar8 = pFVar9;
        if (*(int *)(lVar11 + (longlong)piVar12) == this->VisibilityValue) goto LAB_14931a253;
LAB_14931a2e5:
        pFVar8 = pFVar9;
        if (*(int *)(lVar11 + 4 + (longlong)piVar12) == this->VisibilityValue) goto LAB_14931a2f4;
      }
      lVar11 = lVar11 + 0x10;
      uVar5 = (int)uVar6 + 4;
      uVar6 = (ulonglong)uVar5;
      iVar7 = iVar7 + 4;
      uVar14 = uVar14 + 0x10;
    } while ((int)uVar5 < param_1 + -3);
    if (param_1 <= (int)uVar5) {
      return (int)uVar10;
    }
  }
  lVar11 = uVar4 * 4;
  pFVar8 = param_2 + uVar13;
  do {
    pFVar9 = pFVar8;
    if (((piVar12 == (int *)0x0) || (*(int *)((longlong)piVar12 + lVar11) == this->VisibilityValue))
       && ((this->MeshIndexTag == (int *)0x0 ||
           (*(int *)((longlong)this->MeshIndexTag + lVar11) == this->MeshIndexValue)))) {
      uVar10 = (ulonglong)((int)uVar10 + 1);
      pFVar9 = pFVar8 + 1;
      pFVar1 = param_3->__this->SortInfo;
      ppfVar2 = param_3->PositionX;
      pFVar8->Index = (int)uVar6;
      dVar15 = (double)*(float *)((longlong)*ppfVar2 + lVar11) -
               (pFVar1->ViewOrigin).field0_0x0._s_0.X;
      dVar16 = (double)*(float *)((longlong)*param_3->PositionY + lVar11) -
               (pFVar1->ViewOrigin).field0_0x0._s_0.Y;
      dVar3 = (double)*(float *)((longlong)*param_3->PositionZ + lVar11) -
              (pFVar1->ViewOrigin).field0_0x0._s_0.Z;
      pFVar8->OrderAsUint =
           ~((uint)(float)(dVar16 * dVar16 + dVar15 * dVar15 + dVar3 * dVar3) | 0x80000000);
    }
    lVar11 = lVar11 + 4;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    pFVar8 = pFVar9;
  } while ((int)uVar5 < param_1);
  return (int)uVar10;
}

// BuildParticleOrder_Inner2<1,0,`FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,`FNiagaraSortCullHelper<0>::BuildParticleOrder'::__l7::<lambda_2>_>'::__l6::<lambda_2>_> @ 14931a4b0

int __thiscall
FNiagaraSortCullHelper<0>::
BuildParticleOrder_Inner2<1,0,_FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l6::<lambda_2>_>
          (FNiagaraSortCullHelper<0> *this,int param_1,FParticleOrderAsUint *param_2,
          <lambda_2> *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float *pfVar8;
  FNiagaraGPUSortInfo *pFVar9;
  float *pfVar10;
  float *pfVar11;
  double dVar12;
  float *pfVar13;
  longlong lVar14;
  FParticleOrderAsUint *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong uVar18;
  
  uVar16 = 0;
  uVar19 = 0;
  uVar22 = uVar16;
  if (param_1 < 4) {
    uVar18 = uVar16;
    if (param_1 < 1) {
      return 0;
    }
  }
  else {
    pfVar8 = *param_3->PositionY;
    iVar20 = 2;
    pfVar13 = pfVar8 + 1;
    pFVar9 = param_3->__this->SortInfo;
    dVar5 = (pFVar9->ViewOrigin).field0_0x0._s_0.X;
    lVar14 = (longlong)*param_3->PositionX - (longlong)pfVar8;
    dVar6 = (pFVar9->ViewOrigin).field0_0x0._s_0.Y;
    dVar7 = (pFVar9->ViewOrigin).field0_0x0._s_0.Z;
    lVar21 = (longlong)*param_3->PositionZ - (longlong)pfVar8;
    pFVar15 = param_2;
    uVar18 = uVar16;
    do {
      uVar19 = (int)uVar16 + 4;
      uVar16 = (ulonglong)uVar19;
      uVar22 = uVar22 + 4;
      dVar12 = (double)*(float *)(lVar21 + -4 + (longlong)pfVar13) - dVar7;
      dVar23 = (double)*(float *)((longlong)pfVar13 + lVar14 + -4) - dVar5;
      dVar24 = (double)*(float *)(lVar21 + (longlong)pfVar13) - dVar7;
      fVar2 = *pfVar13;
      dVar25 = (double)*(float *)((longlong)pfVar13 + lVar14) - dVar5;
      pFVar15->OrderAsUint =
           ~((uint)(float)(((double)pfVar13[-1] - dVar6) * ((double)pfVar13[-1] - dVar6) +
                           dVar23 * dVar23 + dVar12 * dVar12) | 0x80000000);
      pFVar15->Index = (int)uVar18;
      fVar3 = pfVar13[1];
      dVar23 = (double)*(float *)((longlong)pfVar13 + lVar14 + 4) - dVar5;
      fVar4 = *(float *)(lVar21 + 4 + (longlong)pfVar13);
      pFVar15[1].OrderAsUint =
           ~((uint)(float)(dVar25 * dVar25 + ((double)fVar2 - dVar6) * ((double)fVar2 - dVar6) +
                          dVar24 * dVar24) | 0x80000000);
      pFVar15[1].Index = iVar20 + -1;
      dVar12 = (double)fVar4 - dVar7;
      dVar24 = (double)*(float *)((longlong)pfVar13 + lVar14 + 8) - dVar5;
      fVar2 = pfVar13[2];
      fVar4 = *(float *)(lVar21 + 8 + (longlong)pfVar13);
      pFVar15[2].OrderAsUint =
           ~((uint)(float)(((double)fVar3 - dVar6) * ((double)fVar3 - dVar6) + dVar23 * dVar23 +
                          dVar12 * dVar12) | 0x80000000);
      pFVar15[2].Index = iVar20;
      dVar12 = (double)fVar4 - dVar7;
      pfVar13 = pfVar13 + 4;
      uVar17 = (int)uVar18 + 4;
      uVar18 = (ulonglong)uVar17;
      pFVar15[3].OrderAsUint =
           ~((uint)(float)(((double)fVar2 - dVar6) * ((double)fVar2 - dVar6) + dVar24 * dVar24 +
                          dVar12 * dVar12) | 0x80000000);
      iVar1 = iVar20 + 1;
      iVar20 = iVar20 + 4;
      pFVar15[3].Index = iVar1;
      pFVar15 = pFVar15 + 4;
    } while ((int)uVar17 < param_1 + -3);
    uVar16 = (ulonglong)((param_1 - 4U >> 2) + 1) << 2;
    if (param_1 <= (int)uVar17) {
      return uVar19;
    }
  }
  pfVar8 = *param_3->PositionY;
  pFVar9 = param_3->__this->SortInfo;
  dVar5 = (pFVar9->ViewOrigin).field0_0x0._s_0.X;
  pfVar10 = *param_3->PositionX;
  dVar6 = (pFVar9->ViewOrigin).field0_0x0._s_0.Y;
  dVar7 = (pFVar9->ViewOrigin).field0_0x0._s_0.Z;
  pfVar13 = pfVar8 + uVar16;
  pFVar15 = param_2 + uVar22;
  pfVar11 = *param_3->PositionZ;
  iVar20 = (int)uVar18;
  do {
    fVar2 = *(float *)(((longlong)pfVar10 - (longlong)pfVar8) + (longlong)pfVar13);
    fVar3 = *pfVar13;
    fVar4 = *(float *)(((longlong)pfVar11 - (longlong)pfVar8) + (longlong)pfVar13);
    pfVar13 = pfVar13 + 1;
    pFVar15->Index = (int)uVar18;
    uVar17 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar17;
    dVar24 = (double)fVar2 - dVar5;
    dVar12 = (double)fVar3 - dVar6;
    dVar23 = (double)fVar4 - dVar7;
    pFVar15->OrderAsUint =
         ~((uint)(float)(dVar24 * dVar24 + dVar12 * dVar12 + dVar23 * dVar23) | 0x80000000);
    pFVar15 = pFVar15 + 1;
  } while ((int)uVar17 < param_1);
  return uVar19 + (param_1 - iVar20);
}

// BuildParticleOrder_Inner2<0,1,`FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,`FNiagaraSortCullHelper<1>::BuildParticleOrder'::__l7::<lambda_2>_>'::__l7::<lambda_3>_> @ 14931a790

int __thiscall
FNiagaraSortCullHelper<1>::
BuildParticleOrder_Inner2<0,1,_FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l7::<lambda_3>_>
          (FNiagaraSortCullHelper<1> *this,int param_1,FParticleOrderAsUint *param_2,
          <lambda_3> param_3)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  FParticleOrderAsUint *pFVar9;
  FParticleOrderAsUint *pFVar10;
  ulonglong uVar11;
  int iVar12;
  
  uVar6 = 0;
  uVar7 = uVar6;
  uVar11 = uVar6;
  if (param_1 < 4) {
    if (param_1 < 1) {
      return 0;
    }
    piVar8 = this->VisibilityTag;
    uVar3 = uVar6;
  }
  else {
    piVar8 = this->VisibilityTag;
    piVar5 = piVar8 + 2;
    lVar4 = -(longlong)piVar8;
    iVar12 = 2;
    uVar3 = (ulonglong)((param_1 - 4U >> 2) + 1) << 2;
    pFVar10 = param_2;
    do {
      pFVar9 = pFVar10;
      if ((piVar8 == (int *)0x0) || (piVar5[-2] == this->VisibilityValue)) {
        if ((this->MeshIndexTag == (int *)0x0) ||
           (*(int *)(lVar4 + -8 + (longlong)piVar5 + (longlong)this->MeshIndexTag) ==
            this->MeshIndexValue)) {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          pFVar9 = pFVar10 + 1;
          fVar1 = *(float *)(lVar4 + -8 + (longlong)piVar5 + (longlong)*param_3.CustomSorting);
          if (0.0 <= fVar1) {
            uVar2 = (uint)fVar1 | 0x80000000;
          }
          else {
            uVar2 = ~(uint)fVar1;
          }
          pFVar10->OrderAsUint = uVar2;
          pFVar10->Index = (int)uVar6;
        }
        pFVar10 = pFVar9;
        if (piVar8 != (int *)0x0) goto LAB_14931a86f;
LAB_14931a878:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar9 = pFVar10,
           *(int *)((longlong)piVar5 + lVar4 + -4 + (longlong)this->MeshIndexTag) ==
           this->MeshIndexValue)) {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          pFVar9 = pFVar10 + 1;
          fVar1 = *(float *)((longlong)piVar5 + lVar4 + -4 + (longlong)*param_3.CustomSorting);
          if (0.0 <= fVar1) {
            uVar2 = (uint)fVar1 | 0x80000000;
          }
          else {
            uVar2 = ~(uint)fVar1;
          }
          pFVar10->OrderAsUint = uVar2;
          pFVar10->Index = iVar12 + -1;
        }
        pFVar10 = pFVar9;
        if (piVar8 != (int *)0x0) goto LAB_14931a8cf;
LAB_14931a8d7:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar9 = pFVar10,
           *(int *)((longlong)piVar5 + -(longlong)piVar8 + (longlong)this->MeshIndexTag) ==
           this->MeshIndexValue)) {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          pFVar9 = pFVar10 + 1;
          fVar1 = *(float *)((longlong)piVar5 + -(longlong)piVar8 + (longlong)*param_3.CustomSorting
                            );
          if (0.0 <= fVar1) {
            uVar2 = (uint)fVar1 | 0x80000000;
          }
          else {
            uVar2 = ~(uint)fVar1;
          }
          pFVar10->OrderAsUint = uVar2;
          pFVar10->Index = iVar12;
        }
        if (piVar8 != (int *)0x0) goto LAB_14931a928;
LAB_14931a931:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar10 = pFVar9,
           *(int *)((4 - (longlong)piVar8) + (longlong)piVar5 + (longlong)this->MeshIndexTag) ==
           this->MeshIndexValue)) {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          pFVar10 = pFVar9 + 1;
          fVar1 = *(float *)((4 - (longlong)piVar8) + (longlong)piVar5 +
                            (longlong)*param_3.CustomSorting);
          if (0.0 <= fVar1) {
            uVar2 = (uint)fVar1 | 0x80000000;
          }
          else {
            uVar2 = ~(uint)fVar1;
          }
          pFVar9->OrderAsUint = uVar2;
          pFVar9->Index = iVar12 + 1;
        }
      }
      else {
LAB_14931a86f:
        pFVar10 = pFVar9;
        if (piVar5[-1] == this->VisibilityValue) goto LAB_14931a878;
LAB_14931a8cf:
        pFVar10 = pFVar9;
        if (*piVar5 == this->VisibilityValue) goto LAB_14931a8d7;
LAB_14931a928:
        pFVar10 = pFVar9;
        if (piVar5[1] == this->VisibilityValue) goto LAB_14931a931;
      }
      piVar5 = piVar5 + 4;
      uVar2 = (int)uVar6 + 4;
      uVar6 = (ulonglong)uVar2;
      iVar12 = iVar12 + 4;
    } while ((int)uVar2 < param_1 + -3);
    if (param_1 <= (int)uVar2) {
      return (int)uVar11;
    }
  }
  lVar4 = uVar3 * 4;
  pFVar10 = param_2 + uVar7;
  do {
    pFVar9 = pFVar10;
    if (((piVar8 == (int *)0x0) || (*(int *)(lVar4 + (longlong)piVar8) == this->VisibilityValue)) &&
       ((this->MeshIndexTag == (int *)0x0 ||
        (*(int *)(lVar4 + (longlong)this->MeshIndexTag) == this->MeshIndexValue)))) {
      uVar11 = (ulonglong)((int)uVar11 + 1);
      pFVar9 = pFVar10 + 1;
      fVar1 = *(float *)(lVar4 + (longlong)*param_3.CustomSorting);
      if (0.0 <= fVar1) {
        uVar2 = (uint)fVar1 | 0x80000000;
      }
      else {
        uVar2 = ~(uint)fVar1;
      }
      pFVar10->OrderAsUint = uVar2;
      pFVar10->Index = (int)uVar6;
    }
    lVar4 = lVar4 + 4;
    uVar2 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar2;
    pFVar10 = pFVar9;
  } while ((int)uVar2 < param_1);
  return (int)uVar11;
}

// BuildParticleOrder_Inner2<0,1,`FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,`FNiagaraSortCullHelper<0>::BuildParticleOrder'::__l7::<lambda_2>_>'::__l7::<lambda_3>_> @ 14931aa50

int __thiscall
FNiagaraSortCullHelper<0>::
BuildParticleOrder_Inner2<0,1,_FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l7::<lambda_3>_>
          (FNiagaraSortCullHelper<0> *this,int param_1,FParticleOrderAsUint *param_2,
          <lambda_3> param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  FParticleOrderAsUint *pFVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar8 = 0;
  uVar3 = 0;
  uVar11 = uVar8;
  if (param_1 < 4) {
    uVar9 = uVar8;
    if (param_1 < 1) {
      return 0;
    }
  }
  else {
    iVar7 = 2;
    pfVar6 = *param_3.CustomSorting + 2;
    uVar9 = uVar8;
    pFVar5 = param_2;
    do {
      fVar2 = pfVar6[-2];
      if (0.0 <= fVar2) {
        uVar3 = (uint)fVar2 | 0x80000000;
      }
      else {
        uVar3 = ~(uint)fVar2;
      }
      fVar2 = pfVar6[-1];
      pFVar5->OrderAsUint = uVar3;
      pFVar5->Index = (int)uVar11;
      if (0.0 <= fVar2) {
        uVar3 = (uint)fVar2 | 0x80000000;
      }
      else {
        uVar3 = ~(uint)fVar2;
      }
      fVar2 = *pfVar6;
      pFVar5[1].OrderAsUint = uVar3;
      pFVar5[1].Index = iVar7 + -1;
      if (0.0 <= fVar2) {
        uVar3 = (uint)fVar2 | 0x80000000;
      }
      else {
        uVar3 = ~(uint)fVar2;
      }
      fVar2 = pfVar6[1];
      pFVar5[2].OrderAsUint = uVar3;
      uVar3 = (int)uVar9 + 4;
      uVar9 = (ulonglong)uVar3;
      pFVar5[2].Index = iVar7;
      uVar8 = uVar8 + 4;
      if (0.0 <= fVar2) {
        uVar4 = (uint)fVar2 | 0x80000000;
      }
      else {
        uVar4 = ~(uint)fVar2;
      }
      iVar1 = iVar7 + 1;
      pFVar5[3].OrderAsUint = uVar4;
      iVar7 = iVar7 + 4;
      pFVar5[3].Index = iVar1;
      pfVar6 = pfVar6 + 4;
      uVar4 = (int)uVar11 + 4;
      uVar11 = (ulonglong)uVar4;
      pFVar5 = pFVar5 + 4;
    } while ((int)uVar4 < param_1 + -3);
    uVar9 = (ulonglong)((param_1 - 4U >> 2) + 1) << 2;
    if (param_1 <= (int)uVar4) {
      return uVar3;
    }
  }
  pfVar6 = *param_3.CustomSorting + uVar9;
  iVar7 = (int)uVar11;
  pFVar5 = param_2 + uVar8;
  do {
    fVar2 = *pfVar6;
    if (0.0 <= fVar2) {
      uVar4 = (uint)fVar2 | 0x80000000;
    }
    else {
      uVar4 = ~(uint)fVar2;
    }
    pFVar5->Index = (int)uVar11;
    pfVar6 = pfVar6 + 1;
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    pFVar5->OrderAsUint = uVar4;
    pFVar5 = pFVar5 + 1;
  } while ((int)uVar10 < param_1);
  return uVar3 + (param_1 - iVar7);
}

// BuildParticleOrder_Inner2<0,0,`FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,`FNiagaraSortCullHelper<1>::BuildParticleOrder'::__l7::<lambda_2>_>'::__l8::<lambda_4>_> @ 14931abe0

int __thiscall
FNiagaraSortCullHelper<1>::
BuildParticleOrder_Inner2<0,0,_FNiagaraSortCullHelper<1>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<1>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l8::<lambda_4>_>
          (FNiagaraSortCullHelper<1> *this,int param_1,FParticleOrderAsUint *param_2,
          <lambda_4> param_3)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  FParticleOrderAsUint *pFVar9;
  FParticleOrderAsUint *pFVar10;
  ulonglong uVar11;
  int iVar12;
  
  uVar6 = 0;
  uVar7 = uVar6;
  uVar11 = uVar6;
  if (param_1 < 4) {
    if (param_1 < 1) {
      return 0;
    }
    piVar8 = this->VisibilityTag;
    uVar3 = uVar6;
  }
  else {
    piVar8 = this->VisibilityTag;
    piVar5 = piVar8 + 2;
    lVar4 = -(longlong)piVar8;
    iVar12 = 2;
    uVar3 = (ulonglong)((param_1 - 4U >> 2) + 1) << 2;
    pFVar10 = param_2;
    do {
      pFVar9 = pFVar10;
      if ((piVar8 == (int *)0x0) || (piVar5[-2] == this->VisibilityValue)) {
        if ((this->MeshIndexTag == (int *)0x0) ||
           (*(int *)(lVar4 + -8 + (longlong)piVar5 + (longlong)this->MeshIndexTag) ==
            this->MeshIndexValue)) {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          pFVar9 = pFVar10 + 1;
          fVar1 = *(float *)(lVar4 + -8 + (longlong)piVar5 + (longlong)*param_3.CustomSorting);
          if (0.0 <= fVar1) {
            uVar2 = (uint)fVar1 | 0x80000000;
          }
          else {
            uVar2 = ~(uint)fVar1;
          }
          pFVar10->OrderAsUint = ~uVar2;
          pFVar10->Index = (int)uVar6;
        }
        pFVar10 = pFVar9;
        if (piVar8 != (int *)0x0) goto LAB_14931acc1;
LAB_14931acca:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar9 = pFVar10,
           *(int *)((longlong)piVar5 + lVar4 + -4 + (longlong)this->MeshIndexTag) ==
           this->MeshIndexValue)) {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          pFVar9 = pFVar10 + 1;
          fVar1 = *(float *)((longlong)piVar5 + lVar4 + -4 + (longlong)*param_3.CustomSorting);
          if (0.0 <= fVar1) {
            uVar2 = (uint)fVar1 | 0x80000000;
          }
          else {
            uVar2 = ~(uint)fVar1;
          }
          pFVar10->OrderAsUint = ~uVar2;
          pFVar10->Index = iVar12 + -1;
        }
        pFVar10 = pFVar9;
        if (piVar8 != (int *)0x0) goto LAB_14931ad23;
LAB_14931ad2b:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar9 = pFVar10,
           *(int *)((longlong)piVar5 + -(longlong)piVar8 + (longlong)this->MeshIndexTag) ==
           this->MeshIndexValue)) {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          pFVar9 = pFVar10 + 1;
          fVar1 = *(float *)((longlong)piVar5 + -(longlong)piVar8 + (longlong)*param_3.CustomSorting
                            );
          if (0.0 <= fVar1) {
            uVar2 = (uint)fVar1 | 0x80000000;
          }
          else {
            uVar2 = ~(uint)fVar1;
          }
          pFVar10->OrderAsUint = ~uVar2;
          pFVar10->Index = iVar12;
        }
        if (piVar8 != (int *)0x0) goto LAB_14931ad7e;
LAB_14931ad87:
        if ((this->MeshIndexTag == (int *)0x0) ||
           (pFVar10 = pFVar9,
           *(int *)((4 - (longlong)piVar8) + (longlong)piVar5 + (longlong)this->MeshIndexTag) ==
           this->MeshIndexValue)) {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          pFVar10 = pFVar9 + 1;
          fVar1 = *(float *)((4 - (longlong)piVar8) + (longlong)piVar5 +
                            (longlong)*param_3.CustomSorting);
          if (0.0 <= fVar1) {
            uVar2 = (uint)fVar1 | 0x80000000;
          }
          else {
            uVar2 = ~(uint)fVar1;
          }
          pFVar9->OrderAsUint = ~uVar2;
          pFVar9->Index = iVar12 + 1;
        }
      }
      else {
LAB_14931acc1:
        pFVar10 = pFVar9;
        if (piVar5[-1] == this->VisibilityValue) goto LAB_14931acca;
LAB_14931ad23:
        pFVar10 = pFVar9;
        if (*piVar5 == this->VisibilityValue) goto LAB_14931ad2b;
LAB_14931ad7e:
        pFVar10 = pFVar9;
        if (piVar5[1] == this->VisibilityValue) goto LAB_14931ad87;
      }
      piVar5 = piVar5 + 4;
      uVar2 = (int)uVar6 + 4;
      uVar6 = (ulonglong)uVar2;
      iVar12 = iVar12 + 4;
    } while ((int)uVar2 < param_1 + -3);
    if (param_1 <= (int)uVar2) {
      return (int)uVar11;
    }
  }
  lVar4 = uVar3 * 4;
  pFVar10 = param_2 + uVar7;
  do {
    pFVar9 = pFVar10;
    if (((piVar8 == (int *)0x0) || (*(int *)(lVar4 + (longlong)piVar8) == this->VisibilityValue)) &&
       ((this->MeshIndexTag == (int *)0x0 ||
        (*(int *)(lVar4 + (longlong)this->MeshIndexTag) == this->MeshIndexValue)))) {
      uVar11 = (ulonglong)((int)uVar11 + 1);
      pFVar9 = pFVar10 + 1;
      fVar1 = *(float *)(lVar4 + (longlong)*param_3.CustomSorting);
      if (0.0 <= fVar1) {
        uVar2 = (uint)fVar1 | 0x80000000;
      }
      else {
        uVar2 = ~(uint)fVar1;
      }
      pFVar10->Index = (int)uVar6;
      pFVar10->OrderAsUint = ~uVar2;
    }
    lVar4 = lVar4 + 4;
    uVar2 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar2;
    pFVar10 = pFVar9;
  } while ((int)uVar2 < param_1);
  return (int)uVar11;
}

// BuildParticleOrder_Inner2<0,0,`FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,`FNiagaraSortCullHelper<0>::BuildParticleOrder'::__l7::<lambda_2>_>'::__l8::<lambda_4>_> @ 14931aea0

int __thiscall
FNiagaraSortCullHelper<0>::
BuildParticleOrder_Inner2<0,0,_FNiagaraSortCullHelper<0>::BuildParticleOrder_Inner1<float,_FNiagaraSortCullHelper<0>::BuildParticleOrder_::__l7::<lambda_2>_>_::__l8::<lambda_4>_>
          (FNiagaraSortCullHelper<0> *this,int param_1,FParticleOrderAsUint *param_2,
          <lambda_4> param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  FParticleOrderAsUint *pFVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar7 = 0;
  uVar3 = 0;
  uVar11 = uVar7;
  if (param_1 < 4) {
    uVar8 = uVar7;
    if (param_1 < 1) {
      return 0;
    }
  }
  else {
    iVar9 = 2;
    pfVar6 = *param_3.CustomSorting + 2;
    uVar8 = uVar7;
    pFVar5 = param_2;
    do {
      fVar2 = pfVar6[-2];
      if (0.0 <= fVar2) {
        uVar3 = (uint)fVar2 | 0x80000000;
      }
      else {
        uVar3 = ~(uint)fVar2;
      }
      fVar2 = pfVar6[-1];
      pFVar5->OrderAsUint = ~uVar3;
      pFVar5->Index = (int)uVar11;
      if (0.0 <= fVar2) {
        uVar3 = (uint)fVar2 | 0x80000000;
      }
      else {
        uVar3 = ~(uint)fVar2;
      }
      fVar2 = *pfVar6;
      pFVar5[1].OrderAsUint = ~uVar3;
      pFVar5[1].Index = iVar9 + -1;
      if (0.0 <= fVar2) {
        uVar3 = (uint)fVar2 | 0x80000000;
      }
      else {
        uVar3 = ~(uint)fVar2;
      }
      fVar2 = pfVar6[1];
      pFVar5[2].OrderAsUint = ~uVar3;
      uVar3 = (int)uVar7 + 4;
      uVar7 = (ulonglong)uVar3;
      uVar8 = uVar8 + 4;
      pFVar5[2].Index = iVar9;
      if (0.0 <= fVar2) {
        uVar4 = (uint)fVar2 | 0x80000000;
      }
      else {
        uVar4 = ~(uint)fVar2;
      }
      iVar1 = iVar9 + 1;
      iVar9 = iVar9 + 4;
      pFVar5[3].OrderAsUint = ~uVar4;
      pfVar6 = pfVar6 + 4;
      pFVar5[3].Index = iVar1;
      uVar4 = (int)uVar11 + 4;
      uVar11 = (ulonglong)uVar4;
      pFVar5 = pFVar5 + 4;
    } while ((int)uVar4 < param_1 + -3);
    uVar7 = uVar8;
    uVar8 = (ulonglong)((param_1 - 4U >> 2) + 1) << 2;
    if (param_1 <= (int)uVar4) {
      return uVar3;
    }
  }
  pfVar6 = *param_3.CustomSorting + uVar8;
  iVar9 = (int)uVar11;
  pFVar5 = param_2 + uVar7;
  do {
    fVar2 = *pfVar6;
    if (0.0 <= fVar2) {
      uVar4 = (uint)fVar2 | 0x80000000;
    }
    else {
      uVar4 = ~(uint)fVar2;
    }
    pFVar5->Index = (int)uVar11;
    pfVar6 = pfVar6 + 1;
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    pFVar5->OrderAsUint = ~uVar4;
    pFVar5 = pFVar5 + 1;
  } while ((int)uVar10 < param_1);
  return uVar3 + (param_1 - iVar9);
}

// CastChecked<UNiagaraComponentRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14931b650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraComponentRendererProperties * __cdecl
CastChecked<UNiagaraComponentRendererProperties_const_,UNiagaraRendererProperties_const_>
          (UNiagaraRendererProperties *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraRendererProperties *)0x0) {
    pFVar3 = GetTypeName<UNiagaraComponentRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraComponentRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraComponentRendererProperties_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDecalRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14931b710

UNiagaraDecalRendererProperties * __cdecl
CastChecked<UNiagaraDecalRendererProperties_const_,UNiagaraRendererProperties_const_>
          (UNiagaraRendererProperties *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraRendererProperties *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDecalRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDecalRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDecalRendererProperties_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraLightRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14931b7d0

UNiagaraLightRendererProperties * __cdecl
CastChecked<UNiagaraLightRendererProperties_const_,UNiagaraRendererProperties_const_>
          (UNiagaraRendererProperties *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraRendererProperties *)0x0) {
    pFVar3 = GetTypeName<UNiagaraLightRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraLightRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraLightRendererProperties_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraMeshRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14931b890

UNiagaraMeshRendererProperties * __cdecl
CastChecked<UNiagaraMeshRendererProperties_const_,UNiagaraRendererProperties_const_>
          (UNiagaraRendererProperties *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraRendererProperties *)0x0) {
    pFVar3 = GetTypeName<UNiagaraMeshRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraMeshRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraMeshRendererProperties_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraRibbonRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14931b950

UNiagaraRibbonRendererProperties * __cdecl
CastChecked<UNiagaraRibbonRendererProperties_const_,UNiagaraRendererProperties_const_>
          (UNiagaraRendererProperties *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraRendererProperties *)0x0) {
    pFVar3 = GetTypeName<UNiagaraRibbonRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraRibbonRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraRibbonRendererProperties_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ANiagaraPreviewBase,AActor> @ 14931ba10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraPreviewBase * __cdecl CastChecked<ANiagaraPreviewBase,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ANiagaraPreviewBase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ANiagaraPreviewBase::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ANiagaraPreviewBase *)param_1;
  }
  pFVar3 = GetTypeName<ANiagaraPreviewBase>(&local_28);
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

// CompareItems<FNiagaraDeviceProfileStateEntry,int> @ 14931bad0

bool __cdecl
CompareItems<FNiagaraDeviceProfileStateEntry,int>
          (FNiagaraDeviceProfileStateEntry *param_1,FNiagaraDeviceProfileStateEntry *param_2,
          int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_3 != 0) {
    puVar2 = &param_2->SetQualityLevelMask;
    puVar1 = &param_1->SetQualityLevelMask;
    do {
      if (((((FNiagaraDeviceProfileStateEntry *)(puVar1 + -3))->ProfileName !=
            *(FName *)((longlong)puVar1 + (longlong)param_2 + (-0xc - (longlong)param_1))) ||
          (puVar1[-1] != puVar2[-1])) || (*puVar1 != *puVar2)) {
        return false;
      }
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TObjectPtr<UNiagaraDataInterface>,UNiagaraDataInterface_*,int> @ 14931bb20

void __cdecl
ConstructItems<TObjectPtr<UNiagaraDataInterface>,UNiagaraDataInterface_*,int>
          (void *param_1,UNiagaraDataInterface **param_2,int param_3)

{
  UNiagaraDataInterface *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UNiagaraDataInterface **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UNiagaraDataInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UNiagaraDataInterface>,TObjectPtr<UNiagaraDataInterface>,int> @ 14931bb80

void __cdecl
ConstructItems<TObjectPtr<UNiagaraDataInterface>,TObjectPtr<UNiagaraDataInterface>,int>
          (void *param_1,TObjectPtr<UNiagaraDataInterface> *param_2,int param_3)

{
  TObjectPtr<UNiagaraDataInterface> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UNiagaraDataInterface>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UNiagaraDataInterface>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UNiagaraDataInterface *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UNiagaraDataInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraRendererMaterialStaticBoolParameter,FNiagaraRendererMaterialStaticBoolParameter,int> @ 14931bbe0

void __cdecl
ConstructItems<FNiagaraRendererMaterialStaticBoolParameter,FNiagaraRendererMaterialStaticBoolParameter,int>
          (void *param_1,FNiagaraRendererMaterialStaticBoolParameter *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  FName *pFVar3;
  
  if (param_3 != 0) {
    pFVar3 = &param_2->StaticVariableName;
    pcVar2 = (char *)((longlong)param_1 + 0x11);
    do {
      *(undefined8 *)(pcVar2 + -0x11) =
           *(undefined8 *)(pcVar2 + (longlong)param_2 + (-0x11 - (longlong)param_1));
      *(FName *)(pcVar2 + -9) = *pFVar3;
      *pcVar2 = '\0';
      cVar1 = *(char *)((longlong)&pFVar3[1].ComparisonIndex.Value + 1);
      *pcVar2 = cVar1;
      if (cVar1 != '\0') {
        pcVar2[-1] = (char)pFVar3[1].ComparisonIndex.Value;
      }
      pFVar3 = (FName *)&pFVar3[2].Number;
      pcVar2 = pcVar2 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraRendererMaterialTextureParameter,FNiagaraRendererMaterialTextureParameter,int> @ 14931bc30

void __cdecl
ConstructItems<FNiagaraRendererMaterialTextureParameter,FNiagaraRendererMaterialTextureParameter,int>
          (void *param_1,FNiagaraRendererMaterialTextureParameter *param_2,int param_3)

{
  UTexture *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FName *)(lVar2 + (longlong)param_2) = param_2->MaterialParameterName;
      pUVar1 = (param_2->Texture).field0_0x0.DebugPtr;
      *(UTexture **)(lVar2 + 8 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraVariableWithOffset,FNiagaraVariableWithOffset,int> @ 14931bca0

void __cdecl
ConstructItems<FNiagaraVariableWithOffset,FNiagaraVariableWithOffset,int>
          (void *param_1,FNiagaraVariableWithOffset *param_2,int param_3)

{
  FNiagaraLwcStructConverter *this;
  FNiagaraLwcStructConverter *pFVar1;
  
  if (param_3 != 0) {
    this = (FNiagaraLwcStructConverter *)((longlong)param_1 + 0x10);
    pFVar1 = &param_2->StructConverter;
    do {
      this[-1].ConversionSteps.AllocatorInstance.Data =
           *(FScriptContainerElement **)
            ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)this);
      this[-1].ConversionSteps.ArrayNum =
           *(int *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)this);
      this[-1].ConversionSteps.ArrayMax = pFVar1[-1].ConversionSteps.ArrayMax;
      FNiagaraLwcStructConverter::FNiagaraLwcStructConverter(this,pFVar1);
      pFVar1 = (FNiagaraLwcStructConverter *)&pFVar1[1].ConversionSteps.ArrayNum;
      this = (FNiagaraLwcStructConverter *)&this[1].ConversionSteps.ArrayNum;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<`FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats'::__l2::FBaselineReportItem,int> @ 14931bd20

void __cdecl
DefaultConstructItems<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined4 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraRendererComponents::FComponentPoolEntry,int> @ 14931bd60

void __cdecl
DefaultConstructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0x80;
      *(undefined4 *)(puVar1 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDeferredDecalUpdateParams,int> @ 14931bdc0

void __cdecl DefaultConstructItems<FDeferredDecalUpdateParams,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FLinearColor FVar9;
  undefined1 (*pauVar10) [16];
  
  if (param_2 != 0) {
    pauVar10 = (undefined1 (*) [16])((longlong)param_1 + 0x20);
    do {
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      pauVar10[-2] = auVar3;
      auVar4._8_4_ = SUB84((double)fVar2,0);
      auVar4._0_8_ = (double)fVar1;
      auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar10[-1] = auVar4;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      *pauVar10 = auVar5;
      auVar6._8_4_ = SUB84((double)fVar2,0);
      auVar6._0_8_ = (double)fVar1;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar10[1] = auVar6;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      pauVar10[2] = auVar7;
      auVar8._8_4_ = SUB84((double)fVar2,0);
      auVar8._0_8_ = (double)fVar1;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar10[3] = auVar8;
      *(undefined8 *)pauVar10[4] = 0;
      *(undefined8 *)pauVar10[8] = 0;
      *(undefined8 *)(pauVar10[8] + 8) = 0x3f800000;
      *(undefined4 *)pauVar10[9] = 0;
      *(undefined8 *)(pauVar10[9] + 4) = 0x3c23d70a;
      FVar9 = FLinearColor::White;
      pauVar10[10][0xc] = 1;
      ((FLinearColor_u_0 *)(pauVar10[9] + 0xc))->_s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
      param_2 = param_2 + -1;
      pauVar10 = pauVar10 + 0xd;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int> @ 14931be70

void __cdecl
DefaultConstructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int> @ 14931bea0

void __cdecl
DefaultConstructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int>
          (void *param_1,int param_2)

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

// DefaultConstructItems<FNiagaraRendererMeshes::FMeshData,int> @ 14931bed0

void __cdecl DefaultConstructItems<FNiagaraRendererMeshes::FMeshData,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      puVar1[5] = 0xbf800000;
      puVar1[6] = 0x3f800000;
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffffffff;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      *(undefined8 *)(puVar1 + 3) = 0x3f800000;
      *(undefined8 *)(puVar1 + 7) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      puVar1[9] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      puVar1[0xb] = 0x3f800000;
      puVar1[0xc] = 0x3f800000;
      puVar1[0xd] = 0x3f800000;
      *(undefined1 *)(puVar1 + 10) = 0;
      *(TQuat<float> *)(puVar1 + 0x10) = UE::Math::TQuat<float>::Identity;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 4;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x20;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraRendererVariableInfo,int> @ 14931bf70

void __cdecl DefaultConstructItems<FNiagaraRendererVariableInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 4);
    do {
      puVar1[-1] = 0xffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FParticlePerfStatsListener_NiagaraPerformanceReporter::FStatTestInfo,int> @ 14931bfa0

void __cdecl
DefaultConstructItems<FParticlePerfStatsListener_NiagaraPerformanceReporter::FStatTestInfo,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats
                ((FAccumulatedParticlePerfStats *)(puVar1 + 1));
      puVar1 = puVar1 + 0x5a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraRendererLights::SimpleLightData,int> @ 14931c000

void __cdecl
DefaultConstructItems<FNiagaraRendererLights::SimpleLightData,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x1c);
    do {
      puVar1[-2] = 0;
      *puVar1 = 0x3f800000;
      puVar1[1] = 0x3f800000;
      *(undefined2 *)((longlong)puVar1 + 9) = 0;
      *(undefined8 *)(puVar1 + 3) = 0xffffffffffffffff;
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int> @ 14931c080

void __cdecl
DestructItems<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int>
          (TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x18;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      if ((void *)puVar1[-2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-2]);
      }
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int> @ 14931c0e0

void __cdecl
DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
          (FComponentPoolEntry *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->PropertyAddressMapping).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraRendererComponents::FComponentPropertyAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraRendererComponents::FComponentPropertyAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraRendererComponents::FComponentPropertyAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int> @ 14931c140

void __cdecl
DestructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int>
          (FIndexBufferEntry *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Buffer).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int> @ 14931c180

void __cdecl
DestructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int>
          (FIndirectDrawBufferEntry *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Buffer).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraRendererMeshes::FMeshData,int> @ 14931c1c0

void __cdecl DestructItems<FNiagaraRendererMeshes::FMeshData,int>(FMeshData *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->RenderableMesh).SharedReferenceCount;
    do {
      if (pFVar1[0xd].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[0xd].ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraRibbonGPUInitParameters,int> @ 14931c210

void __cdecl
DestructItems<FNiagaraRibbonGPUInitParameters,int>
          (FNiagaraRibbonGPUInitParameters *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->RenderingResources).WeakReferenceCount;
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
      pFVar4 = pFVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraVariableWithOffset,int> @ 14931c260

void __cdecl
DestructItems<FNiagaraVariableWithOffset,int>(FNiagaraVariableWithOffset *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FNiagaraLwcStructConverter *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->StructConverter;
    do {
      pFVar1 = (pFVar2->ConversionSteps).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FNiagaraLwcStructConverter *)(&pFVar2->ConversionSteps + 2);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UNiagaraRendererProperties::FPSOPrecacheParams,int> @ 14931c2a0

void __cdecl
DestructItems<UNiagaraRendererProperties::FPSOPrecacheParams,int>
          (FPSOPrecacheParams *param_1,int param_2)

{
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->VertexFactoryDataList).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FParticlePerfStatsListener_NiagaraPerformanceReporter::FStatTestInfo,int> @ 14931c2e0

void __cdecl
DestructItems<FParticlePerfStatsListener_NiagaraPerformanceReporter::FStatTestInfo,int>
          (FStatTestInfo *param_1,int param_2)

{
  FAccumulatedParticlePerfStats *this;
  
  if (param_2 != 0) {
    this = &param_1->AccumulatedStats;
    do {
      FAccumulatedParticlePerfStats::~FAccumulatedParticlePerfStats(this);
      this = (FAccumulatedParticlePerfStats *)
             (this[1].GameThreadStats.MaxPerFrameTotalCycles.AllocatorInstance.InlineData + 0x10);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FNiagaraRibbonRenderingFrameViewResources,1>,int> @ 14931c320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FNiagaraRibbonRenderingFrameViewResources,1>,int>
          (TSharedPtr<FNiagaraRibbonRenderingFrameViewResources,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`FNiagaraRendererLayout::Finalize'::__l2::TSTR_NiagaraFinalizeLayout261>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14931d0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraRendererLayout::Finalize_::__l2::TSTR_NiagaraFinalizeLayout261>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraRendererLayout::Finalize'::__l2::TSTR_NiagaraFinalizeLayout261>
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
      if (bVar8) goto LAB_14931d241;
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
    goto LAB_14931d435;
  }
LAB_14931d241:
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
LAB_14931d31f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14931d31f;
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
LAB_14931d435:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachComponent_Internal<UNiagaraComponent,1,1,`AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14931d910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UNiagaraComponent,1,1,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UNiagaraComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14931da33;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14931da33:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14931dacd;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14931dacd:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14931dbd0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14931dbd0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UNiagaraComponent,1,1,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UNiagaraComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UNiagaraComponent *)0x0) {
      `AActor::
      GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UNiagaraComponent,1,0,`AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14931de40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UNiagaraComponent,1,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UNiagaraComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14931df46;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14931df46:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14931dfcd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14931dfcd:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14931e0d1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14931e0d1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UNiagaraComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UNiagaraComponent *)0x0) {
      `AActor::
      GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UNiagaraComponent,0,1,`AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14931e150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UNiagaraComponent,0,1,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UNiagaraComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14931e243;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14931e243:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14931e2f0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14931e2f0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14931e400;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14931e400:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UNiagaraComponent,0,1,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UNiagaraComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UNiagaraComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UNiagaraComponent,0,0,`AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14931e690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UNiagaraComponent,0,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UNiagaraComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14931e76e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14931e76e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14931e7ff;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14931e7ff:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14931e910;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14931e910:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UNiagaraComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UNiagaraComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_> @ 14931e9b0

void __thiscall
UNiagaraEffectType::
ForEachPlatformSet<_FNiagaraPlatformSet::RefreshScalability_::__l19::<lambda_1>_>
          (UNiagaraEffectType *this,<lambda_1> param_1)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [16];
  
  pFVar8 = (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data;
  iVar1 = (this->SystemScalabilitySettings).Settings.ArrayNum;
  pFVar5 = pFVar8 + 0x18;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x98;
  do {
    if ((this->SystemScalabilitySettings).Settings.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraSystemScalabilitySettings,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar7) {
      pFVar8 = (this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data;
      iVar1 = (this->EmitterScalabilitySettings).Settings.ArrayNum;
      pFVar5 = pFVar8 + 0x18;
      pFVar7 = pFVar8 + (longlong)iVar1 * 0x38;
      do {
        if ((this->EmitterScalabilitySettings).Settings.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FNiagaraEmitterScalabilitySettings,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar8 == pFVar7) {
          return;
        }
        iVar2 = *(int *)pFVar5;
        plVar6 = *(longlong **)(pFVar5 + -8);
        plVar4 = plVar6 + (longlong)iVar2 * 6;
        while( true ) {
          if (*(int *)pFVar5 != iVar2) {
            `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (plVar6 == plVar4) break;
          if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data ==
              FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
              (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) {
LAB_14931eaf7:
            plVar6 = plVar6 + 6;
          }
          else {
            FVar3.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
            do {
              if (*(longlong *)FVar3.Data == *plVar6) {
                *param_1.bNeedsUpdate = true;
                goto LAB_14931eaf7;
              }
              FVar3.Data = FVar3.Data + 8;
            } while (FVar3.Data !=
                     FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                     (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
            plVar6 = plVar6 + 6;
          }
        }
        pFVar8 = pFVar8 + 0x38;
        pFVar5 = pFVar5 + 0x38;
      } while( true );
    }
    iVar2 = *(int *)pFVar5;
    plVar6 = *(longlong **)(pFVar5 + -8);
    plVar4 = plVar6 + (longlong)iVar2 * 6;
    while( true ) {
      if (*(int *)pFVar5 != iVar2) {
        `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (plVar6 == plVar4) break;
      if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data ==
          FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
          (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) {
LAB_14931ea57:
        plVar6 = plVar6 + 6;
      }
      else {
        FVar3.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
        do {
          if (*(longlong *)FVar3.Data == *plVar6) {
            *param_1.bNeedsUpdate = true;
            goto LAB_14931ea57;
          }
          FVar3.Data = FVar3.Data + 8;
        } while (FVar3.Data !=
                 FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                 (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
        plVar6 = plVar6 + 6;
      }
    }
    pFVar8 = pFVar8 + 0x98;
    pFVar5 = pFVar5 + 0x98;
  } while( true );
}

// ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_> @ 14931eb30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraSystem::ForEachPlatformSet<_FNiagaraPlatformSet::RefreshScalability_::__l19::<lambda_1>_>
          (UNiagaraSystem *this,<lambda_1> param_1)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UClass *pUVar5;
  FVersionedNiagaraEmitterData *this_00;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FNiagaraEmitterHandle *this_01;
  longlong *plVar13;
  bool *local_res10;
  uint local_res18;
  FNiagaraEmitterHandle *local_res20;
  
  iVar2 = (this->SystemScalabilityOverrides).Overrides.ArrayNum;
  pFVar12 = (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data;
  pFVar9 = pFVar12 + 0x18;
  do {
    if ((this->SystemScalabilityOverrides).Overrides.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemScalabilityOverride,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (pFVar9 + -0x18 == pFVar12 + (longlong)iVar2 * 0xa0) {
      plVar13 = (longlong *)(this->ExposedParameters)._padding_;
      iVar2 = (int)(this->ExposedParameters)._padding_;
      plVar11 = plVar13 + iVar2;
      do {
        if ((int)(this->ExposedParameters)._padding_ != iVar2) {
          `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res10);
        }
        if (plVar13 == plVar11) {
          local_res10 = param_1.bNeedsUpdate;
          `UNiagaraSystem::
          ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_>'::__l2::
          <lambda_1>::operator()(&local_res10,(this->SystemSpawnScript).field0_0x0.DebugPtr);
          `UNiagaraSystem::
          ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_>'::__l2::
          <lambda_1>::operator()(&local_res10,(this->SystemUpdateScript).field0_0x0.DebugPtr);
          local_res18 = (this->EmitterHandles).ArrayNum;
          uVar7 = (ulonglong)(int)local_res18;
          this_01 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
          pFVar1 = this_01 + uVar7;
          do {
            local_res20 = this_01;
            if ((this->EmitterHandles).ArrayNum != (int)uVar7) {
              `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_res10);
            }
            if (this_01 == pFVar1) {
              return;
            }
            this_00 = FNiagaraEmitterHandle::GetEmitterData(this_01);
            if (this_00 != (FVersionedNiagaraEmitterData *)0x0) {
              local_res10 = param_1.bNeedsUpdate;
              `FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>::operator()
                        (&local_res10,&this_00->Platforms);
              pFVar12 = (this_00->ScalabilityOverrides).Overrides.AllocatorInstance.Data;
              iVar2 = (this_00->ScalabilityOverrides).Overrides.ArrayNum;
              pFVar9 = pFVar12 + 0x18;
              while( true ) {
                if ((this_00->ScalabilityOverrides).Overrides.ArrayNum != iVar2) {
                  `TCheckedPointerIterator<FNiagaraEmitterScalabilityOverride,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(&local_res10);
                }
                if (pFVar9 + -0x18 == pFVar12 + (longlong)iVar2 * 0x40) break;
                iVar3 = *(int *)pFVar9;
                plVar11 = *(longlong **)(pFVar9 + -8);
                plVar13 = plVar11 + (longlong)iVar3 * 6;
                while( true ) {
                  if (*(int *)pFVar9 != iVar3) {
                    `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&local_res10);
                  }
                  if (plVar11 == plVar13) break;
                  if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data ==
                      FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                      (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) {
LAB_14931ee19:
                    plVar11 = plVar11 + 6;
                  }
                  else {
                    FVar6.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
                    do {
                      if (*(longlong *)FVar6.Data == *plVar11) {
                        *param_1.bNeedsUpdate = true;
                        goto LAB_14931ee19;
                      }
                      FVar6.Data = FVar6.Data + 8;
                    } while (FVar6.Data !=
                             FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                             (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
                    plVar11 = plVar11 + 6;
                  }
                }
                pFVar9 = pFVar9 + 0x40;
              }
              pFVar12 = (this_00->RendererProperties).AllocatorInstance.Data;
              iVar2 = (this_00->RendererProperties).ArrayNum;
              pFVar9 = pFVar12 + (longlong)iVar2 * 8;
              while( true ) {
                if ((this_00->RendererProperties).ArrayNum != iVar2) {
                  `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_res10);
                }
                if (pFVar12 == pFVar9) break;
                if (*(longlong *)pFVar12 != 0) {
                  local_res10 = param_1.bNeedsUpdate;
                  `FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>::operator()
                            (&local_res10,(FNiagaraPlatformSet *)(*(longlong *)pFVar12 + 0x28));
                }
                pFVar12 = pFVar12 + 8;
              }
              FVersionedNiagaraEmitterData::
              ForEachScript<_FVersionedNiagaraEmitterData::ForEachPlatformSet<_FNiagaraPlatformSet::RefreshScalability_::__l19::<lambda_1>_>_::__l2::<lambda_1>_>
                        (this_00,(<lambda_1>)param_1.bNeedsUpdate);
              this_01 = local_res20;
            }
            uVar7 = (ulonglong)local_res18;
            this_01 = this_01 + 1;
          } while( true );
        }
        lVar4 = *plVar13;
        if (lVar4 != 0) {
          pUVar5 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
          iVar3 = (int)pUVar5->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar5->_padding_)) {
            iVar3 = *(int *)(lVar4 + 0x50);
            plVar10 = *(longlong **)(lVar4 + 0x48);
            plVar8 = plVar10 + (longlong)iVar3 * 6;
            while( true ) {
              if (*(int *)(lVar4 + 0x50) != iVar3) {
                `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_res10);
              }
              if (plVar10 == plVar8) break;
              if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data ==
                  FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                  (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) {
LAB_14931ecbf:
                plVar10 = plVar10 + 6;
              }
              else {
                FVar6.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
                do {
                  if (*(longlong *)FVar6.Data == *plVar10) {
                    *param_1.bNeedsUpdate = true;
                    goto LAB_14931ecbf;
                  }
                  FVar6.Data = FVar6.Data + 8;
                } while (FVar6.Data !=
                         FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                         (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
                plVar10 = plVar10 + 6;
              }
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while( true );
    }
    iVar3 = *(int *)pFVar9;
    plVar11 = *(longlong **)(pFVar9 + -8);
    plVar13 = plVar11 + (longlong)iVar3 * 6;
    while( true ) {
      if (*(int *)pFVar9 != iVar3) {
        `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      if (plVar11 == plVar13) break;
      if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data ==
          FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
          (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) {
LAB_14931ebe9:
        plVar11 = plVar11 + 6;
      }
      else {
        FVar6.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
        do {
          if (*(longlong *)FVar6.Data == *plVar11) {
            *param_1.bNeedsUpdate = true;
            goto LAB_14931ebe9;
          }
          FVar6.Data = FVar6.Data + 8;
        } while (FVar6.Data !=
                 FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                 (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
        plVar11 = plVar11 + 6;
      }
    }
    pFVar9 = pFVar9 + 0xa0;
  } while( true );
}

// ForEachScript<`FVersionedNiagaraEmitterData::ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_>'::__l2::<lambda_1>_> @ 14931eed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::
ForEachScript<_FVersionedNiagaraEmitterData::ForEachPlatformSet<_FNiagaraPlatformSet::RefreshScalability_::__l19::<lambda_1>_>_::__l2::<lambda_1>_>
          (FVersionedNiagaraEmitterData *this,<lambda_1> param_1)

{
  uint uVar1;
  int iVar2;
  UNiagaraScript *pUVar3;
  longlong lVar4;
  code *pcVar5;
  <lambda_1> <Var6;
  bool bVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  <lambda_1> local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  local_res10 = param_1.Func.bNeedsUpdate;
  `FVersionedNiagaraEmitterData::
  ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_>'::__l2::
  <lambda_1>::operator()(&local_res10,(this->SpawnScriptProps).Script.field0_0x0.DebugPtr);
  `FVersionedNiagaraEmitterData::
  ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_>'::__l2::
  <lambda_1>::operator()(&local_res10,(this->UpdateScriptProps).Script.field0_0x0.DebugPtr);
  pUVar3 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if (pUVar3 != (UNiagaraScript *)0x0) {
    `FVersionedNiagaraEmitterData::
    ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_>'::__l2::
    <lambda_1>::operator()(&local_res10,pUVar3);
  }
  <Var6.bNeedsUpdate = local_res10.bNeedsUpdate;
  uVar1 = (this->EventHandlerScriptProps).ArrayNum;
  uVar10 = (ulonglong)(int)uVar1;
  pFVar15 = (this->EventHandlerScriptProps).AllocatorInstance.Data;
  pFVar12 = pFVar15 + uVar10 * 0x58;
  do {
    if ((this->EventHandlerScriptProps).ArrayNum != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar12) {
      return;
    }
    lVar16 = *(longlong *)pFVar15;
    if (lVar16 != 0) {
      iVar2 = *(int *)(lVar16 + 800);
      lVar16 = *(longlong *)(lVar16 + 0x318);
      if ((iVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)iVar2 * 0x50 + lVar16;
      for (; lVar16 != lVar14; lVar16 = lVar16 + 0x50) {
        if (*(longlong *)(lVar16 + 0x40) != 0) {
          pUVar8 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)(lVar16 + 0x40),pUVar8);
          if ((bVar7) && (lVar4 = *(longlong *)(lVar16 + 0x40), lVar4 != 0)) {
            iVar2 = *(int *)(lVar4 + 0x50);
            plVar13 = *(longlong **)(lVar4 + 0x48);
            plVar11 = plVar13 + (longlong)iVar2 * 6;
            while( true ) {
              if (*(int *)(lVar4 + 0x50) != iVar2) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_res20);
              }
              if (plVar13 == plVar11) break;
              if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data ==
                  FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                  (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) {
LAB_14931f077:
                plVar13 = plVar13 + 6;
              }
              else {
                FVar9.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
                do {
                  if (*(longlong *)FVar9.Data == *plVar13) {
                    *<Var6.bNeedsUpdate = true;
                    goto LAB_14931f077;
                  }
                  FVar9.Data = FVar9.Data + 8;
                } while (FVar9.Data !=
                         FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                         (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
                plVar13 = plVar13 + 6;
              }
            }
          }
        }
      }
    }
    uVar10 = (ulonglong)uVar1;
    pFVar15 = pFVar15 + 0x58;
  } while( true );
}

// GetFullNameForCastLogError<UNiagaraRendererProperties_const_> @ 14932ae30

FString * __cdecl
GetFullNameForCastLogError<UNiagaraRendererProperties_const_>
          (FString *__return_storage_ptr__,UNiagaraRendererProperties *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraComponentRendererProperties_const_> @ 14932b5d0

FString * __cdecl
GetTypeName<UNiagaraComponentRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDecalRendererProperties_const_> @ 14932b610

FString * __cdecl
GetTypeName<UNiagaraDecalRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraLightRendererProperties_const_> @ 14932b650

FString * __cdecl
GetTypeName<UNiagaraLightRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraMeshRendererProperties_const_> @ 14932b690

FString * __cdecl
GetTypeName<UNiagaraMeshRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraRibbonRendererProperties_const_> @ 14932b6d0

FString * __cdecl
GetTypeName<UNiagaraRibbonRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ANiagaraPreviewBase> @ 14932b710

FString * __cdecl GetTypeName<ANiagaraPreviewBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ANiagaraPreviewBase::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l5::<lambda_1>_>_> @ 14932baa0

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_public:_void___cdecl_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>(TArray<unsigned_int,TMemStackAllocator<0>_>_&)const_::_5_::<lambda_1>_>
          param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
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
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14932bbdd:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = *param_1;
            iVar9 = 0;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = uVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                                     ((FNiagaraDataSetReaderFloat<float> *)
                                      (*(longlong *)param_4.Predicate + 8),
                                      param_1[(longlong)iVar7 + 2]);
                  fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                                     ((FNiagaraDataSetReaderFloat<float> *)
                                      (*(longlong *)param_4.Predicate + 8),param_1[iVar4]);
                  if (fVar10 < fVar11) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                                   ((FNiagaraDataSetReaderFloat<float> *)
                                    (*(longlong *)param_4.Predicate + 8),param_1[iVar9]);
                fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                                   ((FNiagaraDataSetReaderFloat<float> *)
                                    (*(longlong *)param_4.Predicate + 8),param_1[iVar4]);
                if (fVar11 <= fVar10) break;
                uVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = uVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                         ((FNiagaraDataSetReaderFloat<float> *)(*(longlong *)param_4.Predicate + 8),
                          param_1[(longlong)iVar5 + 2]);
      fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                         ((FNiagaraDataSetReaderFloat<float> *)(*(longlong *)param_4.Predicate + 8),
                          param_1[iVar6]);
      if (fVar10 < fVar11) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                       ((FNiagaraDataSetReaderFloat<float> *)(*(longlong *)param_4.Predicate + 8),
                        param_1[iVar4]);
    fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                       ((FNiagaraDataSetReaderFloat<float> *)(*(longlong *)param_4.Predicate + 8),
                        param_1[iVar6]);
    if (fVar11 <= fVar10) goto LAB_14932bbdd;
    uVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = uVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::<lambda_2>_>_> @ 14932bd00

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_public:_void___cdecl_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>(TArray<unsigned_int,TMemStackAllocator<0>_>_&)const_::_7_::<lambda_2>_>
          param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
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
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14932be07:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            uVar3 = *param_1;
            iVar11 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = uVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar11 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `FNiagaraGenerationInputDataCPUAccessors::
                          RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::
                          <lambda_2>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                puVar1 = param_1 + iVar6;
                puVar2 = param_1 + iVar11;
                bVar5 = `FNiagaraGenerationInputDataCPUAccessors::
                        RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::
                        <lambda_2>::operator()(param_4.Predicate,puVar2,puVar1);
                if (!bVar5) break;
                uVar3 = *puVar2;
                *puVar2 = *puVar1;
                *puVar1 = uVar3;
                iVar11 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `FNiagaraGenerationInputDataCPUAccessors::
              RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::<lambda_2>::
              operator()(param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    puVar1 = param_1 + iVar8;
    puVar2 = param_1 + iVar6;
    bVar5 = `FNiagaraGenerationInputDataCPUAccessors::
            RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::<lambda_2>::
            operator()(param_4.Predicate,puVar2,puVar1);
    if (!bVar5) goto LAB_14932be07;
    uVar3 = *puVar2;
    *puVar2 = *puVar1;
    iVar7 = iVar8 * 2 + 1;
    *puVar1 = uVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_> @ 14932bef0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  int iVar14;
  int iVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar15 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_14932bff6:
      if (iVar15 == 0) {
        iVar9 = param_2 + -1;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar16 = param_1 + lVar11;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
            iVar14 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar16->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar2;
            pTVar16->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar6;
            if (1 < iVar9) {
              do {
                iVar15 = iVar14 * 2;
                iVar8 = iVar15 + 1;
                if (iVar15 + 2 < iVar9) {
                  if ((uint)param_1[(longlong)iVar15 + 2]._s_1.PrevFreeIndex <
                      (uint)param_1[iVar8]._s_1.PrevFreeIndex) {
                    iVar8 = iVar15;
                  }
                  iVar8 = iVar8 + 1;
                }
                pTVar12 = param_1 + iVar8;
                pTVar13 = param_1 + iVar14;
                if ((uint)(pTVar12->_s_1).PrevFreeIndex <= (uint)(pTVar13->_s_1).PrevFreeIndex)
                break;
                uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
                TVar3 = pTVar13->_s_1;
                uVar4 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8);
                uVar5 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10);
                uVar6 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18);
                pTVar13->_s_1 = pTVar12->_s_1;
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18) = uVar2;
                pTVar12->_s_1 = TVar3;
                *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar5;
                *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar6;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + -1;
            pTVar16 = pTVar16 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar8 = iVar15 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar15 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if ((uint)param_1[(longlong)iVar9 + 2]._s_1.PrevFreeIndex <
          (uint)param_1[iVar10]._s_1.PrevFreeIndex) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar16 = param_1 + iVar10;
    pTVar12 = param_1 + iVar8;
    if ((uint)(pTVar16->_s_1).PrevFreeIndex <= (uint)(pTVar12->_s_1).PrevFreeIndex)
    goto LAB_14932bff6;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
    iVar9 = iVar10 * 2 + 1;
    TVar3 = pTVar12->_s_1;
    uVar4 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18);
    pTVar12->_s_1 = pTVar16->_s_1;
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18) = uVar2;
    pTVar16->_s_1 = TVar3;
    *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar6;
    iVar8 = iVar10;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_> @ 14932c0f0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar18 = iVar11;
  iVar14 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14932c225:
      if (iVar14 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pTVar15 = param_1 + lVar13;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8);
            iVar18 = 0;
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar15->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar4;
            pTVar15->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x10) = uVar7;
            *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x18) = uVar8;
            if (1 < iVar11) {
              do {
                iVar14 = iVar18 * 2;
                iVar10 = iVar14 + 1;
                if (iVar14 + 2 < iVar11) {
                  lVar1 = (longlong)iVar14 + 1;
                  lVar2 = (longlong)iVar14 + 2;
                  if ((param_1[lVar2]._s_1.PrevFreeIndex < param_1[lVar1]._s_1.PrevFreeIndex) ||
                     ((param_1[lVar2]._s_1.PrevFreeIndex == param_1[lVar1]._s_1.PrevFreeIndex &&
                      (*(int *)(lVar2 * 0x20 + 4 + (longlong)param_1) <
                       *(int *)(lVar1 * 0x20 + 4 + (longlong)param_1))))) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (bVar9) {
                    iVar10 = iVar14;
                  }
                  iVar10 = iVar10 + 1;
                }
                pTVar16 = param_1 + iVar10;
                pTVar17 = param_1 + iVar18;
                if (((pTVar16->_s_1).PrevFreeIndex <= (pTVar17->_s_1).PrevFreeIndex) &&
                   (((pTVar17->_s_1).PrevFreeIndex != (pTVar16->_s_1).PrevFreeIndex ||
                    ((pTVar16->_s_1).NextFreeIndex <= (pTVar17->_s_1).NextFreeIndex)))) break;
                uVar4 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
                TVar5 = pTVar17->_s_1;
                uVar6 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
                uVar7 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
                uVar8 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
                pTVar17->_s_1 = pTVar16->_s_1;
                *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar4;
                uVar4 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
                *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
                *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar4;
                pTVar16->_s_1 = TVar5;
                *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar7;
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar8;
                iVar18 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pTVar15 = pTVar15 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar14 + -1;
      iVar11 = iVar18 + -2;
      iVar18 = iVar11;
      iVar14 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      lVar13 = (longlong)iVar11 + 1;
      lVar1 = (longlong)iVar11 + 2;
      if ((param_1[lVar1]._s_1.PrevFreeIndex < param_1[lVar13]._s_1.PrevFreeIndex) ||
         ((param_1[lVar1]._s_1.PrevFreeIndex == param_1[lVar13]._s_1.PrevFreeIndex &&
          (*(int *)(lVar1 * 0x20 + 4 + (longlong)param_1) <
           *(int *)(lVar13 * 0x20 + 4 + (longlong)param_1))))) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    pTVar15 = param_1 + iVar12;
    pTVar16 = param_1 + iVar10;
    if (((pTVar15->_s_1).PrevFreeIndex <= (pTVar16->_s_1).PrevFreeIndex) &&
       (((pTVar16->_s_1).PrevFreeIndex != (pTVar15->_s_1).PrevFreeIndex ||
        ((pTVar15->_s_1).NextFreeIndex <= (pTVar16->_s_1).NextFreeIndex)))) goto LAB_14932c225;
    uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
    iVar11 = iVar12 * 2 + 1;
    TVar5 = pTVar16->_s_1;
    uVar6 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
    uVar7 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
    uVar8 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
    pTVar16->_s_1 = pTVar15->_s_1;
    *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar4;
    uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar4;
    pTVar15->_s_1 = TVar5;
    *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar7;
    *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar8;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<`FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats'::__l2::FBaselineReportItem,int,FIdentityFunctor,TDereferenceWrapper<`FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats'::__l2::FBaselineReportItem,TLess<void>_>_> @ 14932c360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,int,FIdentityFunctor,TDereferenceWrapper<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,TLess<void>_>_>
          (FBaselineReportItem *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_int___cdecl_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*)_::_2_::FBaselineReportItem,TLess<void>_>
          param_4)

{
  FBaselineReportItem *pFVar1;
  FBaselineReportItem *pFVar2;
  code *pcVar3;
  UNiagaraSystem *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FNiagaraPerfBaselineStats *pFVar8;
  FNiagaraPerfBaselineStats *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EComparisonResult EVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  EComparisonResult EVar22;
  EComparisonResult EVar23;
  undefined4 uVar24;
  EComparisonResult EVar25;
  EComparisonResult EVar26;
  EComparisonResult EVar27;
  EComparisonResult EVar28;
  undefined4 uVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  int iVar35;
  longlong lVar36;
  int iVar37;
  FBaselineReportItem *pFVar38;
  int iVar39;
  
  if (param_2 < 0) {
    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar30) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar30) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar31 = (param_2 + -2) / 2;
  iVar32 = iVar31 * 2 + 1;
  iVar39 = iVar32;
  iVar37 = iVar31;
  do {
    while (param_2 <= iVar32) {
LAB_14932c4c9:
      if (iVar37 == 0) {
        iVar32 = param_2 + -1;
        lVar36 = (longlong)iVar32;
        if (0 < iVar32) {
          pFVar38 = param_1 + lVar36;
          do {
            fVar10 = (pFVar38->PerfStats).PerInstanceAvg_GT;
            fVar11 = (pFVar38->PerfStats).PerInstanceAvg_RT;
            iVar39 = 0;
            pUVar4 = param_1->System;
            fVar14 = (param_1->PerfStats).PerInstanceAvg_GT;
            fVar15 = (param_1->PerfStats).PerInstanceAvg_RT;
            fVar16 = (param_1->PerfStats).PerInstanceMax_GT;
            fVar17 = (param_1->PerfStats).PerInstanceMax_RT;
            fVar18 = (param_1->Ratio).PerInstanceAvg_GT;
            fVar19 = (param_1->Ratio).PerInstanceAvg_RT;
            fVar20 = (param_1->Ratio).PerInstanceMax_GT;
            fVar21 = (param_1->Ratio).PerInstanceMax_RT;
            EVar23 = param_1->OverallResult;
            EVar25 = param_1->GTAvgResult;
            EVar26 = param_1->GTMaxResult;
            EVar27 = param_1->RTAvgResult;
            EVar28 = param_1->RTMaxResult;
            uVar29 = *(undefined4 *)&param_1->field_0x3c;
            param_1->System = pFVar38->System;
            (param_1->PerfStats).PerInstanceAvg_GT = fVar10;
            (param_1->PerfStats).PerInstanceAvg_RT = fVar11;
            fVar10 = (pFVar38->PerfStats).PerInstanceMax_RT;
            fVar11 = (pFVar38->Ratio).PerInstanceAvg_GT;
            fVar12 = (pFVar38->Ratio).PerInstanceAvg_RT;
            (param_1->PerfStats).PerInstanceMax_GT = (pFVar38->PerfStats).PerInstanceMax_GT;
            (param_1->PerfStats).PerInstanceMax_RT = fVar10;
            (param_1->Ratio).PerInstanceAvg_GT = fVar11;
            (param_1->Ratio).PerInstanceAvg_RT = fVar12;
            fVar10 = (pFVar38->Ratio).PerInstanceMax_RT;
            EVar13 = pFVar38->OverallResult;
            EVar22 = pFVar38->GTAvgResult;
            (param_1->Ratio).PerInstanceMax_GT = (pFVar38->Ratio).PerInstanceMax_GT;
            (param_1->Ratio).PerInstanceMax_RT = fVar10;
            param_1->OverallResult = EVar13;
            param_1->GTAvgResult = EVar22;
            EVar13 = pFVar38->RTAvgResult;
            EVar22 = pFVar38->RTMaxResult;
            uVar24 = *(undefined4 *)&pFVar38->field_0x3c;
            param_1->GTMaxResult = pFVar38->GTMaxResult;
            param_1->RTAvgResult = EVar13;
            param_1->RTMaxResult = EVar22;
            *(undefined4 *)&param_1->field_0x3c = uVar24;
            pFVar38->System = pUVar4;
            (pFVar38->PerfStats).PerInstanceAvg_GT = fVar14;
            (pFVar38->PerfStats).PerInstanceAvg_RT = fVar15;
            (pFVar38->PerfStats).PerInstanceMax_GT = fVar16;
            (pFVar38->PerfStats).PerInstanceMax_RT = fVar17;
            (pFVar38->Ratio).PerInstanceAvg_GT = fVar18;
            (pFVar38->Ratio).PerInstanceAvg_RT = fVar19;
            (pFVar38->Ratio).PerInstanceMax_GT = fVar20;
            (pFVar38->Ratio).PerInstanceMax_RT = fVar21;
            pFVar38->OverallResult = EVar23;
            pFVar38->GTAvgResult = EVar25;
            pFVar38->GTMaxResult = EVar26;
            pFVar38->RTAvgResult = EVar27;
            pFVar38->RTMaxResult = EVar28;
            *(undefined4 *)&pFVar38->field_0x3c = uVar29;
            if (1 < iVar32) {
              do {
                iVar37 = iVar39 * 2;
                iVar31 = iVar37 + 1;
                if (iVar37 + 2 < iVar32) {
                  lVar33 = (longlong)iVar37 + 2;
                  lVar34 = (longlong)iVar37 + 1;
                  if (param_1[lVar33].OverallResult == param_1[lVar34].OverallResult) {
                    bVar30 = param_1[lVar34].Ratio.PerInstanceAvg_GT <
                             param_1[lVar33].Ratio.PerInstanceAvg_GT;
                  }
                  else {
                    bVar30 = (int)param_1[lVar34].OverallResult < (int)param_1[lVar33].OverallResult
                    ;
                  }
                  if (bVar30) {
                    iVar31 = iVar37;
                  }
                  iVar31 = iVar31 + 1;
                }
                if (param_1[iVar39].OverallResult == param_1[iVar31].OverallResult) {
                  bVar30 = param_1[iVar31].Ratio.PerInstanceAvg_GT <
                           param_1[iVar39].Ratio.PerInstanceAvg_GT;
                }
                else {
                  bVar30 = (int)param_1[iVar31].OverallResult < (int)param_1[iVar39].OverallResult;
                }
                if (!bVar30) break;
                pFVar1 = param_1 + iVar31;
                fVar10 = (pFVar1->PerfStats).PerInstanceAvg_GT;
                fVar11 = (pFVar1->PerfStats).PerInstanceAvg_RT;
                pFVar2 = param_1 + iVar39;
                pUVar4 = pFVar2->System;
                fVar14 = (pFVar2->PerfStats).PerInstanceAvg_GT;
                fVar15 = (pFVar2->PerfStats).PerInstanceAvg_RT;
                pFVar8 = &param_1[iVar39].PerfStats;
                fVar16 = pFVar8->PerInstanceMax_GT;
                fVar17 = pFVar8->PerInstanceMax_RT;
                fVar18 = pFVar8[1].PerInstanceAvg_GT;
                fVar19 = pFVar8[1].PerInstanceAvg_RT;
                pFVar8 = &param_1[iVar39].Ratio;
                fVar20 = pFVar8->PerInstanceMax_GT;
                fVar21 = pFVar8->PerInstanceMax_RT;
                uVar5 = *(undefined8 *)(pFVar8 + 1);
                pFVar2 = param_1 + iVar39;
                EVar22 = pFVar2->GTMaxResult;
                EVar23 = pFVar2->RTAvgResult;
                uVar6 = *(undefined8 *)(&pFVar2->GTMaxResult + 2);
                pFVar2 = param_1 + iVar39;
                pFVar2->System = pFVar1->System;
                (pFVar2->PerfStats).PerInstanceAvg_GT = fVar10;
                (pFVar2->PerfStats).PerInstanceAvg_RT = fVar11;
                pFVar8 = &param_1[iVar31].PerfStats;
                fVar10 = pFVar8->PerInstanceMax_RT;
                fVar11 = pFVar8[1].PerInstanceAvg_GT;
                fVar12 = pFVar8[1].PerInstanceAvg_RT;
                pFVar9 = &param_1[iVar39].PerfStats;
                pFVar9->PerInstanceMax_GT = pFVar8->PerInstanceMax_GT;
                pFVar9->PerInstanceMax_RT = fVar10;
                pFVar9[1].PerInstanceAvg_GT = fVar11;
                pFVar9[1].PerInstanceAvg_RT = fVar12;
                pFVar8 = &param_1[iVar31].Ratio;
                fVar10 = pFVar8->PerInstanceMax_RT;
                uVar7 = *(undefined8 *)(pFVar8 + 1);
                pFVar9 = &param_1[iVar39].Ratio;
                pFVar9->PerInstanceMax_GT = pFVar8->PerInstanceMax_GT;
                pFVar9->PerInstanceMax_RT = fVar10;
                *(undefined8 *)(pFVar9 + 1) = uVar7;
                pFVar1 = param_1 + iVar31;
                EVar13 = pFVar1->RTAvgResult;
                uVar7 = *(undefined8 *)(&pFVar1->GTMaxResult + 2);
                pFVar2 = param_1 + iVar39;
                pFVar2->GTMaxResult = pFVar1->GTMaxResult;
                pFVar2->RTAvgResult = EVar13;
                *(undefined8 *)(&pFVar2->GTMaxResult + 2) = uVar7;
                pFVar1 = param_1 + iVar31;
                pFVar1->System = pUVar4;
                (pFVar1->PerfStats).PerInstanceAvg_GT = fVar14;
                (pFVar1->PerfStats).PerInstanceAvg_RT = fVar15;
                pFVar8 = &param_1[iVar31].PerfStats;
                pFVar8->PerInstanceMax_GT = fVar16;
                pFVar8->PerInstanceMax_RT = fVar17;
                pFVar8[1].PerInstanceAvg_GT = fVar18;
                pFVar8[1].PerInstanceAvg_RT = fVar19;
                pFVar8 = &param_1[iVar31].Ratio;
                pFVar8->PerInstanceMax_GT = fVar20;
                pFVar8->PerInstanceMax_RT = fVar21;
                *(undefined8 *)(pFVar8 + 1) = uVar5;
                pFVar1 = param_1 + iVar31;
                pFVar1->GTMaxResult = EVar22;
                pFVar1->RTAvgResult = EVar23;
                *(undefined8 *)(&pFVar1->GTMaxResult + 2) = uVar6;
                iVar39 = iVar31;
              } while (iVar31 * 2 + 1 < iVar32);
            }
            iVar32 = iVar32 + -1;
            lVar36 = lVar36 + -1;
            pFVar38 = pFVar38 + -1;
          } while (0 < lVar36);
        }
        return;
      }
      iVar31 = iVar37 + -1;
      iVar32 = iVar39 + -2;
      iVar39 = iVar32;
      iVar37 = iVar31;
    }
    iVar32 = iVar31 * 2;
    iVar35 = iVar32 + 1;
    if (iVar32 + 2 < param_2) {
      lVar36 = (longlong)iVar32 + 2;
      lVar33 = (longlong)iVar32 + 1;
      if (param_1[lVar36].OverallResult == param_1[lVar33].OverallResult) {
        bVar30 = param_1[lVar33].Ratio.PerInstanceAvg_GT < param_1[lVar36].Ratio.PerInstanceAvg_GT;
      }
      else {
        bVar30 = (int)param_1[lVar33].OverallResult < (int)param_1[lVar36].OverallResult;
      }
      if (bVar30) {
        iVar35 = iVar32;
      }
      iVar35 = iVar35 + 1;
    }
    if (param_1[iVar31].OverallResult == param_1[iVar35].OverallResult) {
      bVar30 = param_1[iVar35].Ratio.PerInstanceAvg_GT < param_1[iVar31].Ratio.PerInstanceAvg_GT;
    }
    else {
      bVar30 = (int)param_1[iVar35].OverallResult < (int)param_1[iVar31].OverallResult;
    }
    if (!bVar30) goto LAB_14932c4c9;
    pFVar38 = param_1 + iVar35;
    fVar10 = (pFVar38->PerfStats).PerInstanceAvg_GT;
    fVar11 = (pFVar38->PerfStats).PerInstanceAvg_RT;
    pFVar1 = param_1 + iVar31;
    pUVar4 = pFVar1->System;
    fVar14 = (pFVar1->PerfStats).PerInstanceAvg_GT;
    fVar15 = (pFVar1->PerfStats).PerInstanceAvg_RT;
    pFVar8 = &param_1[iVar31].PerfStats;
    fVar16 = pFVar8->PerInstanceMax_GT;
    fVar17 = pFVar8->PerInstanceMax_RT;
    fVar18 = pFVar8[1].PerInstanceAvg_GT;
    fVar19 = pFVar8[1].PerInstanceAvg_RT;
    pFVar8 = &param_1[iVar31].Ratio;
    fVar20 = pFVar8->PerInstanceMax_GT;
    fVar21 = pFVar8->PerInstanceMax_RT;
    uVar5 = *(undefined8 *)(pFVar8 + 1);
    pFVar1 = param_1 + iVar31;
    EVar22 = pFVar1->GTMaxResult;
    EVar23 = pFVar1->RTAvgResult;
    uVar6 = *(undefined8 *)(&pFVar1->GTMaxResult + 2);
    pFVar1 = param_1 + iVar31;
    pFVar1->System = pFVar38->System;
    (pFVar1->PerfStats).PerInstanceAvg_GT = fVar10;
    (pFVar1->PerfStats).PerInstanceAvg_RT = fVar11;
    pFVar8 = &param_1[iVar35].PerfStats;
    fVar10 = pFVar8->PerInstanceMax_RT;
    fVar11 = pFVar8[1].PerInstanceAvg_GT;
    fVar12 = pFVar8[1].PerInstanceAvg_RT;
    pFVar9 = &param_1[iVar31].PerfStats;
    pFVar9->PerInstanceMax_GT = pFVar8->PerInstanceMax_GT;
    pFVar9->PerInstanceMax_RT = fVar10;
    pFVar9[1].PerInstanceAvg_GT = fVar11;
    pFVar9[1].PerInstanceAvg_RT = fVar12;
    pFVar8 = &param_1[iVar35].Ratio;
    fVar10 = pFVar8->PerInstanceMax_RT;
    uVar7 = *(undefined8 *)(pFVar8 + 1);
    pFVar9 = &param_1[iVar31].Ratio;
    pFVar9->PerInstanceMax_GT = pFVar8->PerInstanceMax_GT;
    pFVar9->PerInstanceMax_RT = fVar10;
    *(undefined8 *)(pFVar9 + 1) = uVar7;
    pFVar38 = param_1 + iVar35;
    EVar13 = pFVar38->RTAvgResult;
    uVar7 = *(undefined8 *)(&pFVar38->GTMaxResult + 2);
    pFVar1 = param_1 + iVar31;
    pFVar1->GTMaxResult = pFVar38->GTMaxResult;
    pFVar1->RTAvgResult = EVar13;
    *(undefined8 *)(&pFVar1->GTMaxResult + 2) = uVar7;
    iVar32 = iVar35 * 2 + 1;
    pFVar38 = param_1 + iVar35;
    pFVar38->System = pUVar4;
    (pFVar38->PerfStats).PerInstanceAvg_GT = fVar14;
    (pFVar38->PerfStats).PerInstanceAvg_RT = fVar15;
    pFVar8 = &param_1[iVar35].PerfStats;
    pFVar8->PerInstanceMax_GT = fVar16;
    pFVar8->PerInstanceMax_RT = fVar17;
    pFVar8[1].PerInstanceAvg_GT = fVar18;
    pFVar8[1].PerInstanceAvg_RT = fVar19;
    pFVar8 = &param_1[iVar35].Ratio;
    pFVar8->PerInstanceMax_GT = fVar20;
    pFVar8->PerInstanceMax_RT = fVar21;
    *(undefined8 *)(pFVar8 + 1) = uVar5;
    pFVar38 = param_1 + iVar35;
    pFVar38->GTMaxResult = EVar22;
    pFVar38->RTAvgResult = EVar23;
    *(undefined8 *)(&pFVar38->GTMaxResult + 2) = uVar6;
    iVar31 = iVar35;
  } while( true );
}

// HeapSortInternal<FNiagaraVariableWithOffset,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableWithOffset,`FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>_>_> @ 14932c650

void __cdecl
AlgoImpl::
HeapSortInternal<FNiagaraVariableWithOffset,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableWithOffset,_FNiagaraParameterStore::SortParameters_::__l2::<lambda_1>_>_>
          (FNiagaraVariableWithOffset *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FNiagaraVariableWithOffset,_public:_void___cdecl_FNiagaraParameterStore::SortParameters(void)_::_2_::<lambda_1>_>
          param_4)

{
  FNiagaraVariableWithOffset *pFVar1;
  FNiagaraVariableWithOffset *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FNiagaraVariableWithOffset *pFVar20;
  int iVar21;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar15 = iVar14 * 2 + 1;
  iVar17 = iVar15;
  iVar18 = iVar14;
  do {
    while (param_2 <= iVar15) {
LAB_14932c7a7:
      if (iVar18 == 0) {
        iVar15 = param_2 + -1;
        lVar19 = (longlong)iVar15;
        if (0 < iVar15) {
          pFVar20 = param_1 + lVar19;
          do {
            iVar17 = pFVar20->_padding_;
            iVar14 = pFVar20->Offset;
            iVar21 = 0;
            iVar9 = (param_1->StructConverter).ConversionSteps.ArrayNum;
            iVar10 = (param_1->StructConverter).ConversionSteps.ArrayMax;
            lVar6 = param_1->_padding_;
            iVar18 = param_1->_padding_;
            iVar16 = param_1->Offset;
            iVar7 = (param_1->StructConverter).LWCSize;
            iVar8 = (param_1->StructConverter).SWCSize;
            pFVar4 = (param_1->StructConverter).ConversionSteps.AllocatorInstance.Data;
            param_1->_padding_ = pFVar20->_padding_;
            param_1->_padding_ = iVar17;
            param_1->Offset = iVar14;
            iVar17 = (pFVar20->StructConverter).SWCSize;
            pFVar5 = (pFVar20->StructConverter).ConversionSteps.AllocatorInstance.Data;
            (param_1->StructConverter).LWCSize = (pFVar20->StructConverter).LWCSize;
            (param_1->StructConverter).SWCSize = iVar17;
            (param_1->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar5;
            iVar17 = (pFVar20->StructConverter).ConversionSteps.ArrayMax;
            (param_1->StructConverter).ConversionSteps.ArrayNum =
                 (pFVar20->StructConverter).ConversionSteps.ArrayNum;
            (param_1->StructConverter).ConversionSteps.ArrayMax = iVar17;
            pFVar20->_padding_ = lVar6;
            pFVar20->_padding_ = iVar18;
            pFVar20->Offset = iVar16;
            (pFVar20->StructConverter).LWCSize = iVar7;
            (pFVar20->StructConverter).SWCSize = iVar8;
            (pFVar20->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar4;
            (pFVar20->StructConverter).ConversionSteps.ArrayNum = iVar9;
            (pFVar20->StructConverter).ConversionSteps.ArrayMax = iVar10;
            if (1 < iVar15) {
              do {
                iVar14 = iVar21 * 2;
                iVar17 = iVar14 + 1;
                if (iVar14 + 2 < iVar15) {
                  bVar13 = `FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>::operator()
                                     (param_4.Predicate,param_1 + (iVar14 + 2),param_1 + iVar17);
                  if (bVar13) {
                    iVar17 = iVar14;
                  }
                  iVar17 = iVar17 + 1;
                }
                pFVar1 = param_1 + iVar17;
                pFVar2 = param_1 + iVar21;
                bVar13 = `FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>::operator()
                                   (param_4.Predicate,pFVar2,pFVar1);
                if (!bVar13) break;
                iVar14 = pFVar1->_padding_;
                iVar18 = pFVar1->Offset;
                lVar6 = pFVar2->_padding_;
                iVar16 = pFVar2->_padding_;
                iVar7 = pFVar2->Offset;
                iVar8 = (pFVar2->StructConverter).LWCSize;
                iVar9 = (pFVar2->StructConverter).SWCSize;
                pFVar4 = (pFVar2->StructConverter).ConversionSteps.AllocatorInstance.Data;
                iVar10 = (pFVar2->StructConverter).ConversionSteps.ArrayNum;
                iVar21 = (pFVar2->StructConverter).ConversionSteps.ArrayMax;
                pFVar2->_padding_ = pFVar1->_padding_;
                pFVar2->_padding_ = iVar14;
                pFVar2->Offset = iVar18;
                iVar14 = (pFVar1->StructConverter).SWCSize;
                pFVar5 = (pFVar1->StructConverter).ConversionSteps.AllocatorInstance.Data;
                (pFVar2->StructConverter).LWCSize = (pFVar1->StructConverter).LWCSize;
                (pFVar2->StructConverter).SWCSize = iVar14;
                (pFVar2->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar5;
                iVar14 = (pFVar1->StructConverter).ConversionSteps.ArrayMax;
                (pFVar2->StructConverter).ConversionSteps.ArrayNum =
                     (pFVar1->StructConverter).ConversionSteps.ArrayNum;
                (pFVar2->StructConverter).ConversionSteps.ArrayMax = iVar14;
                pFVar1->_padding_ = lVar6;
                pFVar1->_padding_ = iVar16;
                pFVar1->Offset = iVar7;
                (pFVar1->StructConverter).LWCSize = iVar8;
                (pFVar1->StructConverter).SWCSize = iVar9;
                (pFVar1->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar4;
                (pFVar1->StructConverter).ConversionSteps.ArrayNum = iVar10;
                (pFVar1->StructConverter).ConversionSteps.ArrayMax = iVar21;
                iVar21 = iVar17;
              } while (iVar17 * 2 + 1 < iVar15);
            }
            iVar15 = iVar15 + -1;
            lVar19 = lVar19 + -1;
            pFVar20 = pFVar20 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar14 = iVar18 + -1;
      iVar15 = iVar17 + -2;
      iVar17 = iVar15;
      iVar18 = iVar14;
    }
    iVar15 = iVar14 * 2;
    iVar16 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      bVar13 = `FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>::operator()
                         (param_4.Predicate,param_1 + (iVar15 + 2),param_1 + iVar16);
      if (bVar13) {
        iVar16 = iVar15;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar20 = param_1 + iVar16;
    pFVar1 = param_1 + iVar14;
    bVar13 = `FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>::operator()
                       (param_4.Predicate,pFVar1,pFVar20);
    if (!bVar13) goto LAB_14932c7a7;
    iVar14 = pFVar20->_padding_;
    iVar7 = pFVar20->Offset;
    iVar15 = iVar16 * 2 + 1;
    iVar11 = (pFVar1->StructConverter).ConversionSteps.ArrayNum;
    iVar12 = (pFVar1->StructConverter).ConversionSteps.ArrayMax;
    lVar19 = pFVar1->_padding_;
    iVar8 = pFVar1->_padding_;
    iVar9 = pFVar1->Offset;
    iVar10 = (pFVar1->StructConverter).LWCSize;
    iVar21 = (pFVar1->StructConverter).SWCSize;
    pFVar4 = (pFVar1->StructConverter).ConversionSteps.AllocatorInstance.Data;
    pFVar1->_padding_ = pFVar20->_padding_;
    pFVar1->_padding_ = iVar14;
    pFVar1->Offset = iVar7;
    iVar14 = (pFVar20->StructConverter).SWCSize;
    pFVar5 = (pFVar20->StructConverter).ConversionSteps.AllocatorInstance.Data;
    (pFVar1->StructConverter).LWCSize = (pFVar20->StructConverter).LWCSize;
    (pFVar1->StructConverter).SWCSize = iVar14;
    (pFVar1->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar5;
    iVar14 = (pFVar20->StructConverter).ConversionSteps.ArrayMax;
    (pFVar1->StructConverter).ConversionSteps.ArrayNum =
         (pFVar20->StructConverter).ConversionSteps.ArrayNum;
    (pFVar1->StructConverter).ConversionSteps.ArrayMax = iVar14;
    pFVar20->_padding_ = lVar19;
    pFVar20->_padding_ = iVar8;
    pFVar20->Offset = iVar9;
    (pFVar20->StructConverter).LWCSize = iVar10;
    (pFVar20->StructConverter).SWCSize = iVar21;
    (pFVar20->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar4;
    (pFVar20->StructConverter).ConversionSteps.ArrayNum = iVar11;
    (pFVar20->StructConverter).ConversionSteps.ArrayMax = iVar12;
    iVar14 = iVar16;
  } while( true );
}

// HeapSortInternal<FParticleOrderAsUint,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>,TLess<void>_> @ 14932c910

void __cdecl
AlgoImpl::
HeapSortInternal<FParticleOrderAsUint,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>,TLess<void>_>
          (FParticleOrderAsUint *param_1,int param_2,
          TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*> param_3,TLess<void> param_4)

{
  FParticleOrderAsUint FVar1;
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
LAB_14932ca21:
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
                  if (*(uint *)((longlong)&param_1[(longlong)iVar7 + 2].OrderAsUint + lVar6) <
                      *(uint *)((longlong)&param_1[iVar4].OrderAsUint + lVar6)) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (*(uint *)((longlong)&param_1[iVar4].OrderAsUint + lVar6) <=
                    *(uint *)((longlong)&param_1[iVar10].OrderAsUint + lVar6)) break;
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
      if (*(uint *)((longlong)&param_1[(longlong)iVar5 + 2].OrderAsUint + lVar6) <
          *(uint *)((longlong)&param_1[iVar9].OrderAsUint + lVar6)) {
        iVar9 = iVar5;
      }
      iVar9 = iVar9 + 1;
    }
    if (*(uint *)((longlong)&param_1[iVar9].OrderAsUint + lVar6) <=
        *(uint *)((longlong)&param_1[iVar4].OrderAsUint + lVar6)) goto LAB_14932ca21;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar9];
    iVar5 = iVar9 * 2 + 1;
    param_1[iVar9] = FVar1;
    iVar4 = iVar9;
  } while( true );
}

// InitializeWithData<`FNiagaraRendererRibbons::CreateRenderThreadResources'::__l3::<lambda_1>_> @ 14932cb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FReadBuffer::
InitializeWithData<_FNiagaraRendererRibbons::CreateRenderThreadResources_::__l3::<lambda_1>_>
          (FReadBuffer *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,uint param_4
          ,EPixelFormat param_5,EBufferUsageFlags param_6,<lambda_1> *param_7)

{
  ERHIPipeline EVar1;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  longlong *plVar6;
  ForElementType<unsigned_int> _Src;
  TRefCountPtr<FRHIShaderResourceView> *pTVar7;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined4 uStack_104;
  EBufferUsageFlags EStack_100;
  int iStack_fc;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  FRHIResource *local_d0;
  undefined1 local_c8 [96];
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  void *local_38;
  size_t local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108 = param_3 * param_4;
  uStack_104 = 0;
  uStack_f0 = 0;
  this->NumBytes = local_108;
  iStack_fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  EStack_100 = param_6 | (VertexBuffer|ShaderResource);
  uStack_e0 = 0;
  local_c8._24_8_ = ZEXT48(local_108);
  local_c8._32_8_ = CONCAT44(iStack_fc,param_6) | 0x4100;
  EVar1 = param_1->ActivePipelines;
  local_e8 = 0x70;
  uStack_e4 = 3;
  local_d8 = 0;
  local_c8._56_8_ = 0x300000070;
  local_c8._48_8_ = 0;
  local_c8._72_8_ = 0;
  local_c8._64_8_ = 0;
  local_f8 = param_2;
  local_c8._40_8_ = param_2;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))
              (GDynamicRHI,local_c8 + 0x50,param_1,local_c8 + 0x18);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))
              (GDynamicRHI,local_c8 + 0x50,param_1,local_c8 + 0x18);
  }
  _Src = (param_7->__this->ShapeState).SliceTriangleToVertexIds.AllocatorInstance.SecondaryData;
  if (_Src == (ForElementType<unsigned_int>)0x0) {
    _Src = (ForElementType<unsigned_int>)&param_7->__this->ShapeState;
  }
  memcpy(local_38,(void *)_Src,local_30);
  TVar4 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)(local_c8 + 0x50));
  if ((FRHIBuffer *)this != TVar4.Reference) {
    this_00 = (this->Buffer).Reference;
    (this->Buffer).Reference = (FRHIBuffer *)(TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_d0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_d0);
  }
  local_c8._16_8_ = 0;
  local_c8._8_2_ = (ushort)param_5 << 8;
  local_c8[10] = 1;
  local_c8._11_5_ = 0;
  TVar5 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)local_c8,(FInitializer *)(this->Buffer).Reference);
  pTVar7 = &this->SRV;
  if ((FRHIShaderResourceView *)pTVar7 != TVar5.Reference) {
    this_01 = pTVar7->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar7->Reference = *TVar5.Reference;
    *(undefined8 *)TVar5.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if ((FRHIResource *)local_c8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c8._0_8_);
  }
  if ((local_48 != 0) && (local_40 != 0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)(local_c8 + 0x50));
  }
  if (local_c8._80_8_ != 0) {
    plVar6 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar6 = local_50;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// InitializeWithData<`FNiagaraRendererRibbons::CreateRenderThreadResources'::__l4::<lambda_2>_> @ 14932cd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FReadBuffer::
InitializeWithData<_FNiagaraRendererRibbons::CreateRenderThreadResources_::__l4::<lambda_2>_>
          (FReadBuffer *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,uint param_4
          ,EPixelFormat param_5,EBufferUsageFlags param_6,<lambda_2> *param_7)

{
  ERHIPipeline EVar1;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  longlong *plVar6;
  TRefCountPtr<FRHIShaderResourceView> *pTVar7;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined4 uStack_104;
  EBufferUsageFlags EStack_100;
  int iStack_fc;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  FRHIResource *local_d0;
  undefined1 local_c8 [96];
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  void *local_38;
  size_t local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108 = param_3 * param_4;
  uStack_104 = 0;
  uStack_f0 = 0;
  this->NumBytes = local_108;
  iStack_fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  EStack_100 = param_6 | (VertexBuffer|ShaderResource);
  uStack_e0 = 0;
  local_c8._24_8_ = ZEXT48(local_108);
  local_c8._32_8_ = CONCAT44(iStack_fc,param_6) | 0x4100;
  EVar1 = param_1->ActivePipelines;
  local_e8 = 0x70;
  uStack_e4 = 3;
  local_d8 = 0;
  local_c8._56_8_ = 0x300000070;
  local_c8._48_8_ = 0;
  local_c8._72_8_ = 0;
  local_c8._64_8_ = 0;
  local_f8 = param_2;
  local_c8._40_8_ = param_2;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))
              (GDynamicRHI,local_c8 + 0x50,param_1,local_c8 + 0x18);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))
              (GDynamicRHI,local_c8 + 0x50,param_1,local_c8 + 0x18);
  }
  memcpy(local_38,(param_7->__this->ShapeState).SliceVertexData.AllocatorInstance.Data,local_30);
  TVar4 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)(local_c8 + 0x50));
  if ((FRHIBuffer *)this != TVar4.Reference) {
    this_00 = (this->Buffer).Reference;
    (this->Buffer).Reference = (FRHIBuffer *)(TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_d0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_d0);
  }
  local_c8._16_8_ = 0;
  local_c8._8_2_ = (ushort)param_5 << 8;
  local_c8[10] = 1;
  local_c8._11_5_ = 0;
  TVar5 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)local_c8,(FInitializer *)(this->Buffer).Reference);
  pTVar7 = &this->SRV;
  if ((FRHIShaderResourceView *)pTVar7 != TVar5.Reference) {
    this_01 = pTVar7->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar7->Reference = *TVar5.Reference;
    *(undefined8 *)TVar5.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if ((FRHIResource *)local_c8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c8._0_8_);
  }
  if ((local_48 != 0) && (local_40 != 0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)(local_c8 + 0x50));
  }
  if (local_c8._80_8_ != 0) {
    plVar6 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar6 = local_50;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// InternalConstructor<ANiagaraPerfBaselineActor> @ 14932cfa0

void __cdecl InternalConstructor<ANiagaraPerfBaselineActor>(FObjectInitializer *param_1)

{
  if ((ANiagaraPerfBaselineActor *)param_1->Obj != (ANiagaraPerfBaselineActor *)0x0) {
    ANiagaraPerfBaselineActor::ANiagaraPerfBaselineActor
              ((ANiagaraPerfBaselineActor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ANiagaraPreviewBase> @ 14932cfc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ANiagaraPreviewBase>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANiagaraPreviewBase__6B_;
  }
  return;
}

// InternalConstructor<ANiagaraPreviewGrid> @ 14932cff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ANiagaraPreviewGrid>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FName *pFVar6;
  UClass *pUVar7;
  USceneComponent *pUVar8;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
    this->_padding_ = (longlong)&___7ANiagaraPreviewGrid__6B_;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0x437a0000;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    lVar4 = this[1].PrimaryActorTick._padding_;
    *(undefined8 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x437a0000;
    *(uint *)&this[1].PrimaryActorTick._padding_ = (uint)lVar4 & 0xfffffffd | 1;
    pFVar6 = FName::FName(&local_res8,L"SceneComp");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar8 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      (this->RootComponent).field0_0x0.DebugPtr = pUVar8;
      return;
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar8;
    if ((pUVar8 == (USceneComponent *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("RootComponent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                           ,0x3b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraBaselineController> @ 14932d120

void __cdecl InternalConstructor<UNiagaraBaselineController>(FObjectInitializer *param_1)

{
  if ((UNiagaraBaselineController *)param_1->Obj != (UNiagaraBaselineController *)0x0) {
    UNiagaraBaselineController::UNiagaraBaselineController
              ((UNiagaraBaselineController *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraBaselineController_Basic> @ 14932d140

void __cdecl InternalConstructor<UNiagaraBaselineController_Basic>(FObjectInitializer *param_1)

{
  UNiagaraBaselineController *this;
  
  this = (UNiagaraBaselineController *)param_1->Obj;
  if (this != (UNiagaraBaselineController *)0x0) {
    UNiagaraBaselineController::UNiagaraBaselineController(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraBaselineController_Basic__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNiagaraPrecompileContainer> @ 14932d180

void __cdecl InternalConstructor<UNiagaraPrecompileContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraPrecompileContainer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraPreviewAxis> @ 14932d1c0

void __cdecl InternalConstructor<UNiagaraPreviewAxis>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraPreviewAxis__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraPreviewAxis_InterpParamBase> @ 14932d1f0

void __cdecl InternalConstructor<UNiagaraPreviewAxis_InterpParamBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraPreviewAxis_InterpParamBase__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UNiagaraPreviewAxis_InterpParamFloat> @ 14932d230

void __cdecl InternalConstructor<UNiagaraPreviewAxis_InterpParamFloat>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNiagaraPreviewAxis_InterpParamFloat__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraPreviewAxis_InterpParamInt32> @ 14932d270

void __cdecl InternalConstructor<UNiagaraPreviewAxis_InterpParamInt32>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNiagaraPreviewAxis_InterpParamInt32__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraPreviewAxis_InterpParamLinearColor> @ 14932d2b0

void __cdecl
InternalConstructor<UNiagaraPreviewAxis_InterpParamLinearColor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNiagaraPreviewAxis_InterpParamLinearColor__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraPreviewAxis_InterpParamVector2D> @ 14932d2f0

void __cdecl
InternalConstructor<UNiagaraPreviewAxis_InterpParamVector2D>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNiagaraPreviewAxis_InterpParamVector2D__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraPreviewAxis_InterpParamVector4> @ 14932d330

void __cdecl
InternalConstructor<UNiagaraPreviewAxis_InterpParamVector4>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraPreviewAxis_InterpParamVector4__6B_;
    *(undefined8 *)&this[2].field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)(this + 3) = 0x3ff0000000000000;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraPreviewAxis_InterpParamVector> @ 14932d390

void __cdecl InternalConstructor<UNiagaraPreviewAxis_InterpParamVector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNiagaraPreviewAxis_InterpParamVector__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraRendererProperties> @ 14932d3d0

void __cdecl InternalConstructor<UNiagaraRendererProperties>(FObjectInitializer *param_1)

{
  UNiagaraMergeable *this;
  int iVar1;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this != (UNiagaraMergeable *)0x0) {
    UNiagaraMergeable::UNiagaraMergeable(this);
    *(undefined2 *)&this[2].field_0xd = 0x101;
    *(undefined ***)this = &___7UNiagaraRendererProperties__6B_;
    *(uint *)&this[1].field_0x24 = *(uint *)&this[1].field_0x24 & 0xfffffffe;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0xffffffff;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[2].field_0x20,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[2].field_0x20 = iVar1;
    this[3].field_0x5 = this[3].field_0x5 & 0xfe;
    this[3].field_0x5 = this[3].field_0x5 | 2;
    *(undefined8 *)&this[2].field_0x24 = 0;
    this[3].field_0x4 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<ANiagaraPerfBaselineActor> @ 14932d490

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANiagaraPerfBaselineActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANiagaraPerfBaselineActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANiagaraPerfBaselineActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANiagaraPreviewBase> @ 14932d550

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANiagaraPreviewBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANiagaraPreviewBase::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANiagaraPreviewBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANiagaraPreviewGrid> @ 14932d600

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANiagaraPreviewGrid>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANiagaraPreviewGrid::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANiagaraPreviewGrid__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraBaselineController> @ 14932d6e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraBaselineController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraBaselineController *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraBaselineController::GetPrivateStaticClass();
  pUVar3 = (UNiagaraBaselineController *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraBaselineController *)0x0) {
    pUVar3 = UNiagaraBaselineController::UNiagaraBaselineController(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraBaselineController_Basic> @ 14932d780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraBaselineController_Basic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraBaselineController *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraBaselineController_Basic::GetPrivateStaticClass();
  this = (UNiagaraBaselineController *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraBaselineController *)0x0) {
    UNiagaraBaselineController::UNiagaraBaselineController(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraBaselineController_Basic__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPrecompileContainer> @ 14932d840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraPrecompileContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPrecompileContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraPrecompileContainer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPreviewAxis> @ 14932d900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraPreviewAxis>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPreviewAxis::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraPreviewAxis__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamBase> @ 14932d9b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPreviewAxis_InterpParamBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraPreviewAxis_InterpParamBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamFloat> @ 14932da60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamFloat>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPreviewAxis_InterpParamFloat::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraPreviewAxis_InterpParamFloat__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamInt32> @ 14932db10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamInt32>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPreviewAxis_InterpParamInt32::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraPreviewAxis_InterpParamInt32__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamLinearColor> @ 14932dbc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamLinearColor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPreviewAxis_InterpParamLinearColor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraPreviewAxis_InterpParamLinearColor__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector2D> @ 14932dc70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector2D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPreviewAxis_InterpParamVector2D::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraPreviewAxis_InterpParamVector2D__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector4> @ 14932dd20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector4>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPreviewAxis_InterpParamVector4::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraPreviewAxis_InterpParamVector4__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)(pUVar1 + 3) = 0x3ff0000000000000;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector> @ 14932de00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraPreviewAxis_InterpParamVector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraPreviewAxis_InterpParamVector__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraRendererProperties> @ 14932deb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraRendererProperties>(FVTableHelper *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  
  pUVar4 = (UObject *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraRendererProperties::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)pUVar2,param_1);
    *(undefined ***)pUVar2 = &___7UNiagaraRendererProperties__6B_;
    *(uint *)&pUVar2[1].field_0x24 = *(uint *)&pUVar2[1].field_0x24 & 0xfffffffe;
    *(undefined8 *)(pUVar2 + 1) = 0;
    *(undefined8 *)&pUVar2[1].field_0x8 = 0;
    *(undefined8 *)&pUVar2[1].field_0x10 = 0;
    *(undefined8 *)&pUVar2[1].field_0x18 = 0;
    *(undefined4 *)&pUVar2[1].field_0x20 = 0xffffffff;
    *(undefined4 *)(pUVar2 + 2) = 0;
    *(undefined8 *)&pUVar2[2].field_0x10 = 0;
    *(undefined8 *)&pUVar2[2].field_0x18 = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&pUVar2[2].field_0x20,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&pUVar2[2].field_0x20 = iVar1;
    pUVar2[3].field_0x5 = pUVar2[3].field_0x5 & 0xfe;
    pUVar2[3].field_0x5 = pUVar2[3].field_0x5 | 2;
    *(undefined8 *)&pUVar2[2].field_0x24 = 0;
    pUVar2[3].field_0x4 = 0;
    *(undefined8 *)&pUVar2[3].field_0x8 = 0;
    *(undefined8 *)&pUVar2[3].field_0x10 = 0;
    *(undefined8 *)&pUVar2[3].field_0x18 = 0;
    *(undefined8 *)&pUVar2[3].field_0x20 = 0;
    pUVar4 = pUVar2;
  }
  return pUVar4;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l5::<lambda_1>_>_> @ 14932dfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_public:_void___cdecl_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>(TArray<unsigned_int,TMemStackAllocator<0>_>_&)const_::_5_::<lambda_1>_>
          param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint **ppuVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_398 [48];
  int local_368;
  undefined4 uStack_364;
  uint *local_358;
  uint *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar10;
    memset(local_340,0,0x2e8);
    ppuVar6 = &local_358;
    do {
      puVar3 = ppuVar6[1];
      puVar4 = *ppuVar6;
      iVar5 = *(int *)(ppuVar6 + 2);
      uStack_364 = *(undefined4 *)((longlong)ppuVar6 + 0x14);
      iVar2 = (int)((longlong)puVar3 - (longlong)puVar4 >> 2) + 1;
      puVar9 = puVar4;
      local_368 = iVar5;
      if (iVar5 != 0) {
LAB_14932e080:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          puVar7 = puVar3 + 1;
          uVar1 = puVar9[iVar2 >> 1];
          puVar9[iVar2 >> 1] = *puVar9;
          *puVar9 = uVar1;
          puVar4 = puVar9;
LAB_14932e0b0:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar3) goto code_r0x00014932e0b9;
          goto LAB_14932e0e0;
        }
        for (; puVar7 = puVar9, puVar4 = puVar9, puVar9 < puVar3; puVar3 = puVar3 + -1) {
          while (puVar4 = puVar4 + 1, puVar4 <= puVar3) {
            fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                               ((FNiagaraDataSetReaderFloat<float> *)
                                (*(longlong *)param_4.Predicate + 8),*puVar7);
            fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                               ((FNiagaraDataSetReaderFloat<float> *)
                                (*(longlong *)param_4.Predicate + 8),*puVar4);
            if (fVar10 < fVar11) {
              puVar7 = puVar4;
            }
          }
          uVar1 = *puVar7;
          *puVar7 = *puVar3;
          *puVar3 = uVar1;
        }
        goto LAB_14932e1b8;
      }
LAB_14932e1a7:
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (puVar4,iVar2,param_3,param_4);
LAB_14932e1b8:
      ppuVar6 = ppuVar6 + -3;
    } while (&local_358 <= ppuVar6);
  }
  return;
code_r0x00014932e0b9:
  fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                     ((FNiagaraDataSetReaderFloat<float> *)(*(longlong *)param_4.Predicate + 8),
                      *puVar9);
  fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                     ((FNiagaraDataSetReaderFloat<float> *)(*(longlong *)param_4.Predicate + 8),
                      *puVar4);
  if (fVar11 <= fVar10) goto LAB_14932e0b0;
LAB_14932e0e0:
  do {
    puVar8 = puVar7;
    puVar7 = puVar8 + -1;
    if (puVar7 <= puVar9) break;
    fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                       ((FNiagaraDataSetReaderFloat<float> *)(*(longlong *)param_4.Predicate + 8),
                        *puVar7);
    fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                       ((FNiagaraDataSetReaderFloat<float> *)(*(longlong *)param_4.Predicate + 8),
                        *puVar9);
  } while (fVar11 <= fVar10);
  if (puVar4 <= puVar7) {
    uVar1 = *puVar4;
    *puVar4 = *puVar7;
    *puVar7 = uVar1;
    goto LAB_14932e0b0;
  }
  uVar1 = *puVar9;
  iVar5 = iVar5 + -1;
  *puVar9 = *puVar7;
  *puVar7 = uVar1;
  if ((longlong)((longlong)puVar7 + (-4 - (longlong)puVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar3 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar3) {
      *ppuVar6 = puVar4;
      ppuVar6[1] = puVar3;
      *(int *)(ppuVar6 + 2) = iVar5;
      ppuVar6 = ppuVar6 + 3;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_14932e1b8;
    puVar3 = puVar8 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *ppuVar6 = puVar9;
      ppuVar6[1] = puVar8 + -2;
      *(int *)(ppuVar6 + 2) = iVar5;
      ppuVar6 = ppuVar6 + 3;
    }
    if (puVar3 <= puVar4) goto LAB_14932e1b8;
  }
  iVar2 = (int)((longlong)puVar3 - (longlong)puVar4 >> 2) + 1;
  puVar9 = puVar4;
  if (iVar5 == 0) goto LAB_14932e1a7;
  goto LAB_14932e080;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,`FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::<lambda_2>_>_> @ 14932e280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_int,_public:_void___cdecl_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>(TArray<unsigned_int,TMemStackAllocator<0>_>_&)const_::_7_::<lambda_2>_>
          param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint **ppuVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  uint *local_358;
  uint *local_348;
  uint *local_340;
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
    ppuVar7 = &local_348;
    do {
      puVar4 = ppuVar7[1];
      puVar5 = *ppuVar7;
      local_358 = ppuVar7[2];
      iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 2) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14932e340:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[iVar3 >> 1];
          puVar10[iVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_14932e370:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x00014932e379;
          goto LAB_14932e390;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar9 = puVar8, puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            bVar2 = `FNiagaraGenerationInputDataCPUAccessors::
                    RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::
                    <lambda_2>::operator()(param_4.Predicate,puVar9,puVar5);
            puVar8 = puVar5;
            if (!bVar2) {
              puVar8 = puVar9;
            }
          }
          uVar1 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_14932e454;
      }
LAB_14932e443:
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (puVar5,iVar3,param_3,param_4);
LAB_14932e454:
      ppuVar7 = ppuVar7 + -3;
    } while (&local_348 <= ppuVar7);
  }
  return;
code_r0x00014932e379:
  bVar2 = `FNiagaraGenerationInputDataCPUAccessors::
          RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::<lambda_2>::
          operator()(param_4.Predicate,puVar10,puVar5);
  if (!bVar2) goto LAB_14932e370;
LAB_14932e390:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    bVar2 = `FNiagaraGenerationInputDataCPUAccessors::
            RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>'::__l7::<lambda_2>::
            operator()(param_4.Predicate,puVar8,puVar10);
  } while (!bVar2);
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_14932e370;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-4 - (longlong)puVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffffcU)) {
    if (puVar5 < puVar4) {
      *ppuVar7 = puVar5;
      ppuVar7[1] = puVar4;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_14932e454;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *ppuVar7 = puVar10;
      ppuVar7[1] = puVar9 + -2;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_14932e454;
  }
  iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 2) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_14932e443;
  goto LAB_14932e340;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_> @ 14932e520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar9 = &local_328;
    do {
      pTVar12 = ppTVar9[1];
      pTVar14 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_14932e5d0:
        if (8 < iVar7) {
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          pTVar10 = pTVar12 + 1;
          pTVar14 = pTVar13 + iVar7 / 2;
          TVar3 = pTVar14->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18);
          pTVar14->_s_1 = pTVar13->_s_1;
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar2;
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar6;
          pTVar14 = pTVar13;
LAB_14932e610:
          pTVar8 = pTVar14;
          pTVar14 = pTVar8 + 1;
          if (pTVar14 <= pTVar12) goto code_r0x00014932e619;
          goto LAB_14932e620;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if ((uint)(pTVar14->_s_1).PrevFreeIndex < (uint)(pTVar1->_s_1).PrevFreeIndex) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar6;
          pTVar12->_s_1 = TVar3;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar5;
        }
        goto LAB_14932e705;
      }
LAB_14932e6f4:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_14932e705:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x00014932e619:
  if ((uint)(pTVar14->_s_1).PrevFreeIndex <= (uint)(pTVar13->_s_1).PrevFreeIndex)
  goto LAB_14932e610;
LAB_14932e620:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar13) break;
  } while ((uint)(pTVar13->_s_1).PrevFreeIndex <= (uint)(pTVar10->_s_1).PrevFreeIndex);
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x18);
  if (pTVar14 <= pTVar10) {
    TVar3 = pTVar14->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar8 + 0x28);
    uVar5 = *(undefined8 *)((longlong)pTVar8 + 0x30);
    uVar6 = *(undefined8 *)((longlong)pTVar8 + 0x38);
    pTVar14->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar8 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar11 + -8);
    *(undefined8 *)((longlong)pTVar8 + 0x30) = *(undefined8 *)((longlong)pTVar11 + -0x10);
    *(undefined8 *)((longlong)pTVar8 + 0x38) = uVar2;
    pTVar10->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar11 + -0x18) = uVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar6;
    goto LAB_14932e610;
  }
  TVar3 = pTVar13->_s_1;
  uVar4 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
  uVar5 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
  uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
  pTVar13->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -8);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -0x10);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar2;
  pTVar10->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar11 + -0x18) = uVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar6;
  if ((longlong)((longlong)pTVar10 + (-0x20 - (longlong)pTVar13) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xffffffffffffffe0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar9 = pTVar14;
      ppTVar9[1] = pTVar12;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar10 <= pTVar13 + 1) goto LAB_14932e705;
    pTVar12 = pTVar11 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar10) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar11 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_14932e705;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_14932e6f4;
  goto LAB_14932e5d0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_> @ 14932e7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar10 = &local_328;
    do {
      pTVar12 = ppTVar10[1];
      pTVar14 = *ppTVar10;
      pTVar1 = ppTVar10[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_14932e850:
        if (8 < iVar7) {
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          pTVar8 = pTVar12 + 1;
          pTVar14 = pTVar13 + iVar7 / 2;
          TVar3 = pTVar14->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18);
          pTVar14->_s_1 = pTVar13->_s_1;
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar2;
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar6;
          pTVar14 = pTVar13;
LAB_14932e890:
          pTVar11 = pTVar14;
          pTVar14 = pTVar11 + 1;
          if ((pTVar14 <= pTVar12) &&
             ((pTVar14->_s_1).PrevFreeIndex <= (pTVar13->_s_1).PrevFreeIndex))
          goto code_r0x00014932e8a1;
          goto LAB_14932e8b0;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if (((pTVar14->_s_1).PrevFreeIndex < (pTVar1->_s_1).PrevFreeIndex) ||
               (((pTVar14->_s_1).PrevFreeIndex == (pTVar1->_s_1).PrevFreeIndex &&
                ((pTVar14->_s_1).NextFreeIndex < (pTVar1->_s_1).NextFreeIndex)))) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar6;
          pTVar12->_s_1 = TVar3;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar5;
        }
        goto LAB_14932e99c;
      }
LAB_14932e98b:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_14932e99c:
      ppTVar10 = ppTVar10 + -3;
    } while (&local_328 <= ppTVar10);
  }
  return;
code_r0x00014932e8a1:
  if (((pTVar13->_s_1).PrevFreeIndex != (pTVar14->_s_1).PrevFreeIndex) ||
     (*(int *)((longlong)pTVar11 + 0x24) <= (pTVar13->_s_1).NextFreeIndex)) goto LAB_14932e890;
LAB_14932e8b0:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if ((pTVar8 <= pTVar13) || ((pTVar8->_s_1).PrevFreeIndex < (pTVar13->_s_1).PrevFreeIndex))
    break;
  } while (((pTVar8->_s_1).PrevFreeIndex != (pTVar13->_s_1).PrevFreeIndex) ||
          ((pTVar13->_s_1).NextFreeIndex <= *(int *)((longlong)pTVar9 + -0x1c)));
  uVar2 = *(undefined8 *)((longlong)pTVar9 + -0x18);
  if (pTVar14 <= pTVar8) {
    TVar3 = pTVar14->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar11 + 0x28);
    uVar5 = *(undefined8 *)((longlong)pTVar11 + 0x30);
    uVar6 = *(undefined8 *)((longlong)pTVar11 + 0x38);
    pTVar14->_s_1 = pTVar8->_s_1;
    *(undefined8 *)((longlong)pTVar11 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar9 + -8);
    *(undefined8 *)((longlong)pTVar11 + 0x30) = *(undefined8 *)((longlong)pTVar9 + -0x10);
    *(undefined8 *)((longlong)pTVar11 + 0x38) = uVar2;
    pTVar8->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar9 + -0x18) = uVar4;
    *(undefined8 *)((longlong)pTVar9 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar9 + -8) = uVar6;
    goto LAB_14932e890;
  }
  TVar3 = pTVar13->_s_1;
  uVar4 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
  uVar5 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
  uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
  pTVar13->_s_1 = pTVar8->_s_1;
  *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  uVar2 = *(undefined8 *)((longlong)pTVar9 + -8);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar9 + -0x10);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar2;
  pTVar8->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar9 + -0x18) = uVar4;
  *(undefined8 *)((longlong)pTVar9 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar9 + -8) = uVar6;
  if ((longlong)((longlong)pTVar8 + (-0x20 - (longlong)pTVar13) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xffffffffffffffe0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar10 = pTVar14;
      ppTVar10[1] = pTVar12;
      *(int *)(ppTVar10 + 2) = (int)local_338;
      ppTVar10 = ppTVar10 + 3;
    }
    if (pTVar8 <= pTVar13 + 1) goto LAB_14932e99c;
    pTVar12 = pTVar9 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar8) {
      *ppTVar10 = pTVar13;
      ppTVar10[1] = pTVar9 + -2;
      *(int *)(ppTVar10 + 2) = (int)local_338;
      ppTVar10 = ppTVar10 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_14932e99c;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_14932e98b;
  goto LAB_14932e850;
}

// IntroSortInternal<`FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats'::__l2::FBaselineReportItem,int,FIdentityFunctor,TDereferenceWrapper<`FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats'::__l2::FBaselineReportItem,TLess<void>_>_> @ 14932ea40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,int,FIdentityFunctor,TDereferenceWrapper<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,TLess<void>_>_>
          (FBaselineReportItem *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_int___cdecl_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*)_::_2_::FBaselineReportItem,TLess<void>_>
          param_4)

{
  FBaselineReportItem *pFVar1;
  bool bVar2;
  UNiagaraSystem *pUVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  EComparisonResult EVar8;
  EComparisonResult EVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  EComparisonResult EVar19;
  EComparisonResult EVar20;
  EComparisonResult EVar21;
  EComparisonResult EVar22;
  EComparisonResult EVar23;
  undefined4 uVar24;
  int iVar25;
  FBaselineReportItem *pFVar26;
  FBaselineReportItem *pFVar27;
  FBaselineReportItem *pFVar28;
  FBaselineReportItem *pFVar29;
  FBaselineReportItem *pFVar30;
  FBaselineReportItem *pFVar31;
  FBaselineReportItem **ppFVar32;
  float fVar33;
  undefined1 auStack_368 [48];
  FBaselineReportItem *local_338;
  FBaselineReportItem *local_328;
  FBaselineReportItem *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar33 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar33;
    memset(local_310,0,0x2e8);
    ppFVar32 = &local_328;
    do {
      pFVar31 = ppFVar32[1];
      pFVar28 = *ppFVar32;
      pFVar1 = ppFVar32[2];
      iVar25 = (int)((longlong)pFVar31 - (longlong)pFVar28 >> 6) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar30 = pFVar28;
      if ((int)local_338 != 0) {
LAB_14932eaf0:
        if (8 < iVar25) {
          fVar33 = (pFVar30->PerfStats).PerInstanceAvg_GT;
          fVar6 = (pFVar30->PerfStats).PerInstanceAvg_RT;
          pFVar27 = pFVar31 + 1;
          pFVar28 = pFVar30 + iVar25 / 2;
          pUVar3 = pFVar28->System;
          fVar11 = (pFVar28->PerfStats).PerInstanceAvg_GT;
          fVar12 = (pFVar28->PerfStats).PerInstanceAvg_RT;
          fVar13 = (pFVar28->PerfStats).PerInstanceMax_GT;
          fVar14 = (pFVar28->PerfStats).PerInstanceMax_RT;
          fVar15 = (pFVar28->Ratio).PerInstanceAvg_GT;
          fVar16 = (pFVar28->Ratio).PerInstanceAvg_RT;
          fVar17 = (pFVar28->Ratio).PerInstanceMax_GT;
          fVar18 = (pFVar28->Ratio).PerInstanceMax_RT;
          EVar19 = pFVar28->OverallResult;
          EVar20 = pFVar28->GTAvgResult;
          EVar21 = pFVar28->GTMaxResult;
          EVar22 = pFVar28->RTAvgResult;
          EVar23 = pFVar28->RTMaxResult;
          uVar24 = *(undefined4 *)&pFVar28->field_0x3c;
          pFVar28->System = pFVar30->System;
          (pFVar28->PerfStats).PerInstanceAvg_GT = fVar33;
          (pFVar28->PerfStats).PerInstanceAvg_RT = fVar6;
          fVar33 = (pFVar30->PerfStats).PerInstanceMax_RT;
          fVar6 = (pFVar30->Ratio).PerInstanceAvg_GT;
          fVar7 = (pFVar30->Ratio).PerInstanceAvg_RT;
          (pFVar28->PerfStats).PerInstanceMax_GT = (pFVar30->PerfStats).PerInstanceMax_GT;
          (pFVar28->PerfStats).PerInstanceMax_RT = fVar33;
          (pFVar28->Ratio).PerInstanceAvg_GT = fVar6;
          (pFVar28->Ratio).PerInstanceAvg_RT = fVar7;
          *(undefined1 (*) [16])&(pFVar28->Ratio).PerInstanceMax_GT =
               *(undefined1 (*) [16])&(pFVar30->Ratio).PerInstanceMax_GT;
          EVar8 = pFVar30->RTAvgResult;
          EVar9 = pFVar30->RTMaxResult;
          uVar10 = *(undefined4 *)&pFVar30->field_0x3c;
          pFVar28->GTMaxResult = pFVar30->GTMaxResult;
          pFVar28->RTAvgResult = EVar8;
          pFVar28->RTMaxResult = EVar9;
          *(undefined4 *)&pFVar28->field_0x3c = uVar10;
          pFVar30->System = pUVar3;
          (pFVar30->PerfStats).PerInstanceAvg_GT = fVar11;
          (pFVar30->PerfStats).PerInstanceAvg_RT = fVar12;
          (pFVar30->PerfStats).PerInstanceMax_GT = fVar13;
          (pFVar30->PerfStats).PerInstanceMax_RT = fVar14;
          (pFVar30->Ratio).PerInstanceAvg_GT = fVar15;
          (pFVar30->Ratio).PerInstanceAvg_RT = fVar16;
          (pFVar30->Ratio).PerInstanceMax_GT = fVar17;
          (pFVar30->Ratio).PerInstanceMax_RT = fVar18;
          pFVar30->OverallResult = EVar19;
          pFVar30->GTAvgResult = EVar20;
          pFVar30->GTMaxResult = EVar21;
          pFVar30->RTAvgResult = EVar22;
          pFVar30->RTMaxResult = EVar23;
          *(undefined4 *)&pFVar30->field_0x3c = uVar24;
          pFVar28 = pFVar30;
LAB_14932eb53:
          pFVar26 = pFVar28;
          pFVar28 = pFVar26 + 1;
          if (pFVar28 <= pFVar31) goto code_r0x00014932eb5f;
          goto LAB_14932eb80;
        }
        if (pFVar30 < pFVar31) {
          pFVar1 = pFVar30 + 1;
          do {
            pFVar28 = pFVar30;
            if (pFVar1 <= pFVar31) {
              pFVar27 = pFVar1;
              if (0xff < ((longlong)pFVar31 + (0x40 - (longlong)pFVar1) & 0xffffffffffffffc0U)) {
                do {
                  if (pFVar28->OverallResult == pFVar27->OverallResult) {
                    bVar2 = (pFVar27->Ratio).PerInstanceAvg_GT < (pFVar28->Ratio).PerInstanceAvg_GT;
                  }
                  else {
                    bVar2 = (int)pFVar27->OverallResult < (int)pFVar28->OverallResult;
                  }
                  pFVar26 = pFVar27;
                  if (!bVar2) {
                    pFVar26 = pFVar28;
                  }
                  if (pFVar26->OverallResult == pFVar27[1].OverallResult) {
                    bVar2 = pFVar27[1].Ratio.PerInstanceAvg_GT < (pFVar26->Ratio).PerInstanceAvg_GT;
                  }
                  else {
                    bVar2 = (int)pFVar27[1].OverallResult < (int)pFVar26->OverallResult;
                  }
                  pFVar28 = pFVar27 + 1;
                  if (!bVar2) {
                    pFVar28 = pFVar26;
                  }
                  if (pFVar28->OverallResult == pFVar27[2].OverallResult) {
                    bVar2 = pFVar27[2].Ratio.PerInstanceAvg_GT < (pFVar28->Ratio).PerInstanceAvg_GT;
                  }
                  else {
                    bVar2 = (int)pFVar27[2].OverallResult < (int)pFVar28->OverallResult;
                  }
                  pFVar26 = pFVar27 + 2;
                  if (!bVar2) {
                    pFVar26 = pFVar28;
                  }
                  if (pFVar26->OverallResult == pFVar27[3].OverallResult) {
                    bVar2 = pFVar27[3].Ratio.PerInstanceAvg_GT < (pFVar26->Ratio).PerInstanceAvg_GT;
                  }
                  else {
                    bVar2 = (int)pFVar27[3].OverallResult < (int)pFVar26->OverallResult;
                  }
                  pFVar28 = pFVar27 + 3;
                  if (!bVar2) {
                    pFVar28 = pFVar26;
                  }
                  pFVar27 = pFVar27 + 4;
                } while (pFVar27 <= pFVar31 + -3);
              }
              for (; pFVar27 <= pFVar31; pFVar27 = pFVar27 + 1) {
                if (pFVar28->OverallResult == pFVar27->OverallResult) {
                  bVar2 = (pFVar27->Ratio).PerInstanceAvg_GT < (pFVar28->Ratio).PerInstanceAvg_GT;
                }
                else {
                  bVar2 = (int)pFVar27->OverallResult < (int)pFVar28->OverallResult;
                }
                pFVar26 = pFVar27;
                if (!bVar2) {
                  pFVar26 = pFVar28;
                }
                pFVar28 = pFVar26;
              }
            }
            pUVar3 = pFVar28->System;
            fVar11 = (pFVar28->PerfStats).PerInstanceAvg_GT;
            fVar12 = (pFVar28->PerfStats).PerInstanceAvg_RT;
            pFVar27 = pFVar31 + -1;
            fVar13 = (pFVar28->PerfStats).PerInstanceMax_GT;
            fVar14 = (pFVar28->PerfStats).PerInstanceMax_RT;
            fVar15 = (pFVar28->Ratio).PerInstanceAvg_GT;
            fVar16 = (pFVar28->Ratio).PerInstanceAvg_RT;
            fVar17 = (pFVar28->Ratio).PerInstanceMax_GT;
            fVar18 = (pFVar28->Ratio).PerInstanceMax_RT;
            EVar19 = pFVar28->OverallResult;
            EVar20 = pFVar28->GTAvgResult;
            fVar33 = (pFVar31->PerfStats).PerInstanceAvg_GT;
            fVar6 = (pFVar31->PerfStats).PerInstanceAvg_RT;
            EVar21 = pFVar28->GTMaxResult;
            EVar22 = pFVar28->RTAvgResult;
            EVar23 = pFVar28->RTMaxResult;
            uVar24 = *(undefined4 *)&pFVar28->field_0x3c;
            pFVar28->System = pFVar31->System;
            (pFVar28->PerfStats).PerInstanceAvg_GT = fVar33;
            (pFVar28->PerfStats).PerInstanceAvg_RT = fVar6;
            fVar33 = (pFVar31->PerfStats).PerInstanceMax_RT;
            fVar6 = (pFVar31->Ratio).PerInstanceAvg_GT;
            fVar7 = (pFVar31->Ratio).PerInstanceAvg_RT;
            (pFVar28->PerfStats).PerInstanceMax_GT = (pFVar31->PerfStats).PerInstanceMax_GT;
            (pFVar28->PerfStats).PerInstanceMax_RT = fVar33;
            (pFVar28->Ratio).PerInstanceAvg_GT = fVar6;
            (pFVar28->Ratio).PerInstanceAvg_RT = fVar7;
            *(undefined1 (*) [16])&(pFVar28->Ratio).PerInstanceMax_GT =
                 *(undefined1 (*) [16])&(pFVar31->Ratio).PerInstanceMax_GT;
            EVar8 = pFVar31->RTAvgResult;
            EVar9 = pFVar31->RTMaxResult;
            uVar10 = *(undefined4 *)&pFVar31->field_0x3c;
            pFVar28->GTMaxResult = pFVar31->GTMaxResult;
            pFVar28->RTAvgResult = EVar8;
            pFVar28->RTMaxResult = EVar9;
            *(undefined4 *)&pFVar28->field_0x3c = uVar10;
            pFVar31->System = pUVar3;
            (pFVar31->PerfStats).PerInstanceAvg_GT = fVar11;
            (pFVar31->PerfStats).PerInstanceAvg_RT = fVar12;
            (pFVar31->PerfStats).PerInstanceMax_GT = fVar13;
            (pFVar31->PerfStats).PerInstanceMax_RT = fVar14;
            (pFVar31->Ratio).PerInstanceAvg_GT = fVar15;
            (pFVar31->Ratio).PerInstanceAvg_RT = fVar16;
            (pFVar31->Ratio).PerInstanceMax_GT = fVar17;
            (pFVar31->Ratio).PerInstanceMax_RT = fVar18;
            pFVar31->OverallResult = EVar19;
            pFVar31->GTAvgResult = EVar20;
            pFVar31->GTMaxResult = EVar21;
            pFVar31->RTAvgResult = EVar22;
            pFVar31->RTMaxResult = EVar23;
            *(undefined4 *)&pFVar31->field_0x3c = uVar24;
            pFVar31 = pFVar27;
          } while (pFVar30 < pFVar27);
        }
        goto LAB_14932eccc;
      }
LAB_14932ecbb:
      local_338 = pFVar1;
      HeapSortInternal<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,int,FIdentityFunctor,TDereferenceWrapper<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,TLess<void>_>_>
                (pFVar28,iVar25,param_3,param_4);
LAB_14932eccc:
      ppFVar32 = ppFVar32 + -3;
    } while (&local_328 <= ppFVar32);
  }
  return;
code_r0x00014932eb5f:
  if (pFVar30->OverallResult == pFVar26[1].OverallResult) {
    bVar2 = pFVar26[1].Ratio.PerInstanceAvg_GT < (pFVar30->Ratio).PerInstanceAvg_GT;
  }
  else {
    bVar2 = (int)pFVar26[1].OverallResult < (int)pFVar30->OverallResult;
  }
  if (!bVar2) goto LAB_14932eb53;
LAB_14932eb80:
  do {
    pFVar29 = pFVar27;
    pFVar27 = pFVar29 + -1;
    if (pFVar27 <= pFVar30) break;
    if (pFVar29[-1].OverallResult == pFVar30->OverallResult) {
      bVar2 = (pFVar30->Ratio).PerInstanceAvg_GT < pFVar29[-1].Ratio.PerInstanceAvg_GT;
    }
    else {
      bVar2 = (int)pFVar30->OverallResult < (int)pFVar29[-1].OverallResult;
    }
  } while (!bVar2);
  uVar4 = pFVar29[-1].PerfStats.PerInstanceAvg_GT;
  uVar5 = pFVar29[-1].PerfStats.PerInstanceAvg_RT;
  if (pFVar28 <= pFVar27) {
    pUVar3 = pFVar28->System;
    fVar11 = pFVar26[1].PerfStats.PerInstanceAvg_GT;
    fVar12 = pFVar26[1].PerfStats.PerInstanceAvg_RT;
    fVar13 = pFVar26[1].PerfStats.PerInstanceMax_GT;
    fVar14 = pFVar26[1].PerfStats.PerInstanceMax_RT;
    fVar15 = pFVar26[1].Ratio.PerInstanceAvg_GT;
    fVar16 = pFVar26[1].Ratio.PerInstanceAvg_RT;
    fVar17 = pFVar26[1].Ratio.PerInstanceMax_GT;
    fVar18 = pFVar26[1].Ratio.PerInstanceMax_RT;
    EVar19 = pFVar26[1].OverallResult;
    EVar20 = pFVar26[1].GTAvgResult;
    EVar21 = pFVar26[1].GTMaxResult;
    EVar22 = pFVar26[1].RTAvgResult;
    EVar23 = pFVar26[1].RTMaxResult;
    uVar24 = *(undefined4 *)&pFVar26[1].field_0x3c;
    pFVar28->System = pFVar27->System;
    pFVar26[1].PerfStats.PerInstanceAvg_GT = (float)uVar4;
    pFVar26[1].PerfStats.PerInstanceAvg_RT = (float)uVar5;
    fVar33 = pFVar29[-1].PerfStats.PerInstanceMax_RT;
    fVar6 = pFVar29[-1].Ratio.PerInstanceAvg_GT;
    fVar7 = pFVar29[-1].Ratio.PerInstanceAvg_RT;
    pFVar26[1].PerfStats.PerInstanceMax_GT = pFVar29[-1].PerfStats.PerInstanceMax_GT;
    pFVar26[1].PerfStats.PerInstanceMax_RT = fVar33;
    pFVar26[1].Ratio.PerInstanceAvg_GT = fVar6;
    pFVar26[1].Ratio.PerInstanceAvg_RT = fVar7;
    *(undefined1 (*) [16])&pFVar26[1].Ratio.PerInstanceMax_GT =
         *(undefined1 (*) [16])&pFVar29[-1].Ratio.PerInstanceMax_GT;
    EVar8 = pFVar29[-1].RTAvgResult;
    EVar9 = pFVar29[-1].RTMaxResult;
    uVar10 = *(undefined4 *)&pFVar29[-1].field_0x3c;
    pFVar26[1].GTMaxResult = pFVar29[-1].GTMaxResult;
    pFVar26[1].RTAvgResult = EVar8;
    pFVar26[1].RTMaxResult = EVar9;
    *(undefined4 *)&pFVar26[1].field_0x3c = uVar10;
    pFVar27->System = pUVar3;
    pFVar29[-1].PerfStats.PerInstanceAvg_GT = fVar11;
    pFVar29[-1].PerfStats.PerInstanceAvg_RT = fVar12;
    pFVar29[-1].PerfStats.PerInstanceMax_GT = fVar13;
    pFVar29[-1].PerfStats.PerInstanceMax_RT = fVar14;
    pFVar29[-1].Ratio.PerInstanceAvg_GT = fVar15;
    pFVar29[-1].Ratio.PerInstanceAvg_RT = fVar16;
    pFVar29[-1].Ratio.PerInstanceMax_GT = fVar17;
    pFVar29[-1].Ratio.PerInstanceMax_RT = fVar18;
    pFVar29[-1].OverallResult = EVar19;
    pFVar29[-1].GTAvgResult = EVar20;
    pFVar29[-1].GTMaxResult = EVar21;
    pFVar29[-1].RTAvgResult = EVar22;
    pFVar29[-1].RTMaxResult = EVar23;
    *(undefined4 *)&pFVar29[-1].field_0x3c = uVar24;
    goto LAB_14932eb53;
  }
  pUVar3 = pFVar30->System;
  fVar11 = (pFVar30->PerfStats).PerInstanceAvg_GT;
  fVar12 = (pFVar30->PerfStats).PerInstanceAvg_RT;
  fVar13 = (pFVar30->PerfStats).PerInstanceMax_GT;
  fVar14 = (pFVar30->PerfStats).PerInstanceMax_RT;
  fVar15 = (pFVar30->Ratio).PerInstanceAvg_GT;
  fVar16 = (pFVar30->Ratio).PerInstanceAvg_RT;
  fVar17 = (pFVar30->Ratio).PerInstanceMax_GT;
  fVar18 = (pFVar30->Ratio).PerInstanceMax_RT;
  EVar19 = pFVar30->OverallResult;
  EVar20 = pFVar30->GTAvgResult;
  local_338._0_4_ = (int)local_338 + -1;
  EVar21 = pFVar30->GTMaxResult;
  EVar22 = pFVar30->RTAvgResult;
  EVar23 = pFVar30->RTMaxResult;
  uVar24 = *(undefined4 *)&pFVar30->field_0x3c;
  pFVar30->System = pFVar27->System;
  (pFVar30->PerfStats).PerInstanceAvg_GT = (float)uVar4;
  (pFVar30->PerfStats).PerInstanceAvg_RT = (float)uVar5;
  fVar33 = pFVar29[-1].PerfStats.PerInstanceMax_RT;
  fVar6 = pFVar29[-1].Ratio.PerInstanceAvg_GT;
  fVar7 = pFVar29[-1].Ratio.PerInstanceAvg_RT;
  (pFVar30->PerfStats).PerInstanceMax_GT = pFVar29[-1].PerfStats.PerInstanceMax_GT;
  (pFVar30->PerfStats).PerInstanceMax_RT = fVar33;
  (pFVar30->Ratio).PerInstanceAvg_GT = fVar6;
  (pFVar30->Ratio).PerInstanceAvg_RT = fVar7;
  *(undefined1 (*) [16])&(pFVar30->Ratio).PerInstanceMax_GT =
       *(undefined1 (*) [16])&pFVar29[-1].Ratio.PerInstanceMax_GT;
  EVar8 = pFVar29[-1].RTAvgResult;
  EVar9 = pFVar29[-1].RTMaxResult;
  uVar10 = *(undefined4 *)&pFVar29[-1].field_0x3c;
  pFVar30->GTMaxResult = pFVar29[-1].GTMaxResult;
  pFVar30->RTAvgResult = EVar8;
  pFVar30->RTMaxResult = EVar9;
  *(undefined4 *)&pFVar30->field_0x3c = uVar10;
  pFVar27->System = pUVar3;
  pFVar29[-1].PerfStats.PerInstanceAvg_GT = fVar11;
  pFVar29[-1].PerfStats.PerInstanceAvg_RT = fVar12;
  pFVar29[-1].PerfStats.PerInstanceMax_GT = fVar13;
  pFVar29[-1].PerfStats.PerInstanceMax_RT = fVar14;
  pFVar29[-1].Ratio.PerInstanceAvg_GT = fVar15;
  pFVar29[-1].Ratio.PerInstanceAvg_RT = fVar16;
  pFVar29[-1].Ratio.PerInstanceMax_GT = fVar17;
  pFVar29[-1].Ratio.PerInstanceMax_RT = fVar18;
  pFVar29[-1].OverallResult = EVar19;
  pFVar29[-1].GTAvgResult = EVar20;
  pFVar29[-1].GTMaxResult = EVar21;
  pFVar29[-1].RTAvgResult = EVar22;
  pFVar29[-1].RTMaxResult = EVar23;
  *(undefined4 *)&pFVar29[-1].field_0x3c = uVar24;
  if ((longlong)((longlong)pFVar27 + (-0x40 - (longlong)pFVar30) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pFVar31 - (longlong)pFVar28 & 0xffffffffffffffc0U)) {
    if (pFVar28 < pFVar31) {
      *ppFVar32 = pFVar28;
      ppFVar32[1] = pFVar31;
      *(int *)(ppFVar32 + 2) = (int)local_338;
      ppFVar32 = ppFVar32 + 3;
    }
    if (pFVar27 <= pFVar30 + 1) goto LAB_14932eccc;
    pFVar31 = pFVar29 + -2;
    pFVar28 = pFVar30;
  }
  else {
    if (pFVar30 + 1 < pFVar27) {
      *ppFVar32 = pFVar30;
      ppFVar32[1] = pFVar29 + -2;
      *(int *)(ppFVar32 + 2) = (int)local_338;
      ppFVar32 = ppFVar32 + 3;
    }
    if (pFVar31 <= pFVar28) goto LAB_14932eccc;
  }
  iVar25 = (int)((longlong)pFVar31 - (longlong)pFVar28 >> 6) + 1;
  pFVar30 = pFVar28;
  if ((int)local_338 == 0) goto LAB_14932ecbb;
  goto LAB_14932eaf0;
}

// IntroSortInternal<FNiagaraVariableWithOffset,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableWithOffset,`FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>_>_> @ 14932ee90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FNiagaraVariableWithOffset,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableWithOffset,_FNiagaraParameterStore::SortParameters_::__l2::<lambda_1>_>_>
          (FNiagaraVariableWithOffset *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FNiagaraVariableWithOffset,_public:_void___cdecl_FNiagaraParameterStore::SortParameters(void)_::_2_::<lambda_1>_>
          param_4)

{
  FNiagaraLwcStructConverter *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  FNiagaraVariableWithOffset *pFVar17;
  FNiagaraVariableWithOffset *pFVar18;
  FNiagaraVariableWithOffset *pFVar19;
  FNiagaraVariableWithOffset **ppFVar20;
  int iVar21;
  FNiagaraVariableWithOffset *pFVar22;
  FNiagaraVariableWithOffset *pFVar23;
  FNiagaraVariableWithOffset *pFVar24;
  float fVar25;
  undefined1 auStack_388 [48];
  FNiagaraVariableWithOffset *local_358;
  FNiagaraVariableWithOffset *local_348;
  FNiagaraVariableWithOffset *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar25 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar25;
    memset(local_330,0,0x2e8);
    ppFVar20 = &local_348;
    do {
      pFVar24 = ppFVar20[1];
      pFVar23 = *ppFVar20;
      local_358 = ppFVar20[2];
      iVar16 = (int)(((longlong)pFVar24 - (longlong)pFVar23) / 0x28) + 1;
      pFVar22 = pFVar23;
      iVar21 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14932ef70:
        if (8 < iVar16) {
          iVar7 = pFVar22->_padding_;
          iVar8 = pFVar22->Offset;
          pFVar17 = pFVar24 + 1;
          iVar16 = iVar16 / 2;
          pFVar23 = pFVar22 + iVar16;
          lVar2 = pFVar23->_padding_;
          iVar9 = pFVar23->_padding_;
          iVar10 = pFVar23->Offset;
          pFVar1 = &pFVar22[iVar16].StructConverter;
          iVar11 = pFVar1->LWCSize;
          iVar12 = pFVar1->SWCSize;
          pFVar3 = (pFVar1->ConversionSteps).AllocatorInstance.Data;
          iVar13 = pFVar22[iVar16].StructConverter.ConversionSteps.ArrayNum;
          iVar14 = pFVar22[iVar16].StructConverter.ConversionSteps.ArrayMax;
          pFVar23 = pFVar22 + iVar16;
          pFVar23->_padding_ = pFVar22->_padding_;
          pFVar23->_padding_ = iVar7;
          pFVar23->Offset = iVar8;
          iVar7 = (pFVar22->StructConverter).SWCSize;
          pFVar4 = (pFVar22->StructConverter).ConversionSteps.AllocatorInstance.Data;
          pFVar1 = &pFVar22[iVar16].StructConverter;
          pFVar1->LWCSize = (pFVar22->StructConverter).LWCSize;
          pFVar1->SWCSize = iVar7;
          (pFVar1->ConversionSteps).AllocatorInstance.Data = pFVar4;
          iVar7 = (pFVar22->StructConverter).ConversionSteps.ArrayMax;
          pFVar22[iVar16].StructConverter.ConversionSteps.ArrayNum =
               (pFVar22->StructConverter).ConversionSteps.ArrayNum;
          pFVar22[iVar16].StructConverter.ConversionSteps.ArrayMax = iVar7;
          pFVar22->_padding_ = lVar2;
          pFVar22->_padding_ = iVar9;
          pFVar22->Offset = iVar10;
          (pFVar22->StructConverter).LWCSize = iVar11;
          (pFVar22->StructConverter).SWCSize = iVar12;
          (pFVar22->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar3;
          (pFVar22->StructConverter).ConversionSteps.ArrayNum = iVar13;
          (pFVar22->StructConverter).ConversionSteps.ArrayMax = iVar14;
          pFVar23 = pFVar22;
LAB_14932efd0:
          pFVar19 = pFVar23;
          pFVar23 = pFVar19 + 1;
          if (pFVar23 <= pFVar24) goto code_r0x00014932efd9;
          goto LAB_14932eff0;
        }
        for (; pFVar17 = pFVar22, pFVar23 = pFVar22, pFVar22 < pFVar24; pFVar24 = pFVar24 + -1) {
          while (pFVar19 = pFVar17, pFVar23 = pFVar23 + 1, pFVar23 <= pFVar24) {
            bVar15 = `FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>::operator()
                               (param_4.Predicate,pFVar19,pFVar23);
            pFVar17 = pFVar23;
            if (!bVar15) {
              pFVar17 = pFVar19;
            }
          }
          lVar2 = pFVar19->_padding_;
          iVar7 = pFVar19->_padding_;
          iVar8 = pFVar19->Offset;
          iVar11 = (pFVar19->StructConverter).ConversionSteps.ArrayNum;
          iVar12 = (pFVar19->StructConverter).ConversionSteps.ArrayMax;
          iVar9 = (pFVar19->StructConverter).LWCSize;
          iVar10 = (pFVar19->StructConverter).SWCSize;
          pFVar3 = (pFVar19->StructConverter).ConversionSteps.AllocatorInstance.Data;
          iVar21 = pFVar24->_padding_;
          iVar16 = pFVar24->Offset;
          pFVar19->_padding_ = pFVar24->_padding_;
          pFVar19->_padding_ = iVar21;
          pFVar19->Offset = iVar16;
          iVar21 = (pFVar24->StructConverter).SWCSize;
          pFVar4 = (pFVar24->StructConverter).ConversionSteps.AllocatorInstance.Data;
          (pFVar19->StructConverter).LWCSize = (pFVar24->StructConverter).LWCSize;
          (pFVar19->StructConverter).SWCSize = iVar21;
          (pFVar19->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar4;
          iVar21 = (pFVar24->StructConverter).ConversionSteps.ArrayMax;
          (pFVar19->StructConverter).ConversionSteps.ArrayNum =
               (pFVar24->StructConverter).ConversionSteps.ArrayNum;
          (pFVar19->StructConverter).ConversionSteps.ArrayMax = iVar21;
          pFVar24->_padding_ = lVar2;
          pFVar24->_padding_ = iVar7;
          pFVar24->Offset = iVar8;
          (pFVar24->StructConverter).LWCSize = iVar9;
          (pFVar24->StructConverter).SWCSize = iVar10;
          (pFVar24->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar3;
          (pFVar24->StructConverter).ConversionSteps.ArrayNum = iVar11;
          (pFVar24->StructConverter).ConversionSteps.ArrayMax = iVar12;
        }
        goto LAB_14932f150;
      }
LAB_14932f137:
      HeapSortInternal<FNiagaraVariableWithOffset,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableWithOffset,_FNiagaraParameterStore::SortParameters_::__l2::<lambda_1>_>_>
                (pFVar23,iVar16,param_3,param_4);
LAB_14932f150:
      ppFVar20 = ppFVar20 + -3;
    } while (&local_348 <= ppFVar20);
  }
  return;
code_r0x00014932efd9:
  bVar15 = `FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>::operator()
                     (param_4.Predicate,pFVar22,pFVar23);
  if (!bVar15) goto LAB_14932efd0;
LAB_14932eff0:
  do {
    pFVar18 = pFVar17;
    pFVar17 = pFVar18 + -1;
    if (pFVar17 <= pFVar22) break;
    bVar15 = `FNiagaraParameterStore::SortParameters'::__l2::<lambda_1>::operator()
                       (param_4.Predicate,pFVar17,pFVar22);
  } while (!bVar15);
  uVar5 = pFVar18[-1]._padding_;
  uVar6 = pFVar18[-1].Offset;
  if (pFVar23 <= pFVar17) {
    lVar2 = pFVar23->_padding_;
    iVar7 = pFVar19[1]._padding_;
    iVar8 = pFVar19[1].Offset;
    iVar9 = pFVar19[1].StructConverter.LWCSize;
    iVar10 = pFVar19[1].StructConverter.SWCSize;
    pFVar3 = pFVar19[1].StructConverter.ConversionSteps.AllocatorInstance.Data;
    iVar11 = pFVar19[1].StructConverter.ConversionSteps.ArrayNum;
    iVar12 = pFVar19[1].StructConverter.ConversionSteps.ArrayMax;
    pFVar23->_padding_ = pFVar17->_padding_;
    pFVar19[1]._padding_ = uVar5;
    pFVar19[1].Offset = uVar6;
    iVar16 = pFVar18[-1].StructConverter.SWCSize;
    pFVar4 = pFVar18[-1].StructConverter.ConversionSteps.AllocatorInstance.Data;
    pFVar19[1].StructConverter.LWCSize = pFVar18[-1].StructConverter.LWCSize;
    pFVar19[1].StructConverter.SWCSize = iVar16;
    pFVar19[1].StructConverter.ConversionSteps.AllocatorInstance.Data = pFVar4;
    iVar16 = pFVar18[-1].StructConverter.ConversionSteps.ArrayMax;
    pFVar19[1].StructConverter.ConversionSteps.ArrayNum =
         pFVar18[-1].StructConverter.ConversionSteps.ArrayNum;
    pFVar19[1].StructConverter.ConversionSteps.ArrayMax = iVar16;
    pFVar17->_padding_ = lVar2;
    pFVar18[-1]._padding_ = iVar7;
    pFVar18[-1].Offset = iVar8;
    pFVar18[-1].StructConverter.LWCSize = iVar9;
    pFVar18[-1].StructConverter.SWCSize = iVar10;
    pFVar18[-1].StructConverter.ConversionSteps.AllocatorInstance.Data = pFVar3;
    pFVar18[-1].StructConverter.ConversionSteps.ArrayNum = iVar11;
    pFVar18[-1].StructConverter.ConversionSteps.ArrayMax = iVar12;
    goto LAB_14932efd0;
  }
  lVar2 = pFVar22->_padding_;
  iVar7 = pFVar22->_padding_;
  iVar8 = pFVar22->Offset;
  iVar9 = (pFVar22->StructConverter).LWCSize;
  iVar10 = (pFVar22->StructConverter).SWCSize;
  pFVar3 = (pFVar22->StructConverter).ConversionSteps.AllocatorInstance.Data;
  iVar11 = (pFVar22->StructConverter).ConversionSteps.ArrayNum;
  iVar12 = (pFVar22->StructConverter).ConversionSteps.ArrayMax;
  pFVar22->_padding_ = pFVar17->_padding_;
  pFVar22->_padding_ = uVar5;
  pFVar22->Offset = uVar6;
  iVar16 = pFVar18[-1].StructConverter.SWCSize;
  pFVar4 = pFVar18[-1].StructConverter.ConversionSteps.AllocatorInstance.Data;
  iVar21 = iVar21 + -1;
  (pFVar22->StructConverter).LWCSize = pFVar18[-1].StructConverter.LWCSize;
  (pFVar22->StructConverter).SWCSize = iVar16;
  (pFVar22->StructConverter).ConversionSteps.AllocatorInstance.Data = pFVar4;
  iVar16 = pFVar18[-1].StructConverter.ConversionSteps.ArrayMax;
  (pFVar22->StructConverter).ConversionSteps.ArrayNum =
       pFVar18[-1].StructConverter.ConversionSteps.ArrayNum;
  (pFVar22->StructConverter).ConversionSteps.ArrayMax = iVar16;
  pFVar17->_padding_ = lVar2;
  pFVar18[-1]._padding_ = iVar7;
  pFVar18[-1].Offset = iVar8;
  pFVar18[-1].StructConverter.LWCSize = iVar9;
  pFVar18[-1].StructConverter.SWCSize = iVar10;
  pFVar18[-1].StructConverter.ConversionSteps.AllocatorInstance.Data = pFVar3;
  pFVar18[-1].StructConverter.ConversionSteps.ArrayNum = iVar11;
  pFVar18[-1].StructConverter.ConversionSteps.ArrayMax = iVar12;
  if (((longlong)pFVar17 + (-0x28 - (longlong)pFVar22)) / 0x28 <
      ((longlong)pFVar24 - (longlong)pFVar23) / 0x28) {
    if (pFVar23 < pFVar24) {
      *ppFVar20 = pFVar23;
      ppFVar20[1] = pFVar24;
      *(int *)(ppFVar20 + 2) = iVar21;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar17 <= pFVar22 + 1) goto LAB_14932f150;
    pFVar24 = pFVar18 + -2;
    pFVar23 = pFVar22;
  }
  else {
    if (pFVar22 + 1 < pFVar17) {
      *ppFVar20 = pFVar22;
      ppFVar20[1] = pFVar18 + -2;
      *(int *)(ppFVar20 + 2) = iVar21;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar24 <= pFVar23) goto LAB_14932f150;
  }
  iVar16 = (int)(((longlong)pFVar24 - (longlong)pFVar23) / 0x28) + 1;
  pFVar22 = pFVar23;
  if (iVar21 == 0) goto LAB_14932f137;
  goto LAB_14932ef70;
}

// IntroSortInternal<FParticleOrderAsUint,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>,TLess<void>_> @ 14932f230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FParticleOrderAsUint,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>,TLess<void>_>
          (FParticleOrderAsUint *param_1,int param_2,
          TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*> param_3,TLess<void> param_4)

{
  uint *puVar1;
  FParticleOrderAsUint *pFVar2;
  FParticleOrderAsUint FVar3;
  int iVar4;
  FParticleOrderAsUint *pFVar5;
  longlong lVar6;
  FParticleOrderAsUint *pFVar7;
  FParticleOrderAsUint *pFVar8;
  FParticleOrderAsUint *pFVar9;
  FParticleOrderAsUint *pFVar10;
  FParticleOrderAsUint **ppFVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  FParticleOrderAsUint *local_348;
  FParticleOrderAsUint *local_338;
  FParticleOrderAsUint *local_330;
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
LAB_14932f2e0:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pFVar7 = pFVar9 + 1;
          puVar1 = (uint *)((longlong)&pFVar10->OrderAsUint + lVar6);
          FVar3 = pFVar10[iVar4 >> 1];
          pFVar10[iVar4 >> 1] = *pFVar10;
          *pFVar10 = FVar3;
          pFVar5 = pFVar10;
LAB_14932f310:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar9) goto code_r0x00014932f319;
          goto LAB_14932f321;
        }
        for (; pFVar5 = pFVar10, pFVar2 = pFVar10, pFVar10 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar2 = pFVar2 + 1, pFVar2 <= pFVar9) {
            if (*(uint *)((longlong)&pFVar5->OrderAsUint + lVar6) <
                *(uint *)((longlong)&pFVar2->OrderAsUint + lVar6)) {
              pFVar5 = pFVar2;
            }
          }
          FVar3 = *pFVar5;
          *pFVar5 = *pFVar9;
          *pFVar9 = FVar3;
        }
        goto LAB_14932f3da;
      }
LAB_14932f3c9:
      local_348 = pFVar2;
      HeapSortInternal<FParticleOrderAsUint,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>,TLess<void>_>
                (pFVar5,iVar4,param_3,param_4);
LAB_14932f3da:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_338 <= ppFVar11);
  }
  return;
code_r0x00014932f319:
  if (*(uint *)((longlong)&pFVar5->OrderAsUint + lVar6) <= *puVar1) goto LAB_14932f310;
LAB_14932f321:
  do {
    pFVar8 = pFVar7;
    pFVar7 = pFVar8 + -1;
    if (pFVar7 <= pFVar10) break;
  } while (*puVar1 <= *(uint *)((longlong)&pFVar7->OrderAsUint + lVar6));
  if (pFVar5 <= pFVar7) {
    FVar3 = *pFVar5;
    *pFVar5 = *pFVar7;
    *pFVar7 = FVar3;
    goto LAB_14932f310;
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
    if (pFVar7 <= pFVar10 + 1) goto LAB_14932f3da;
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
    if (pFVar9 <= pFVar5) goto LAB_14932f3da;
  }
  iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar5 >> 3) + 1;
  pFVar10 = pFVar5;
  if ((int)local_348 == 0) goto LAB_14932f3c9;
  goto LAB_14932f2e0;
}

// MakeArrayView<TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>_> @ 14932f480

TArrayView<UMaterialInterface_*_const,int> * __cdecl
MakeArrayView<TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UMaterialInterface_*_const,int> *__return_storage_ptr__,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UMaterialInterface_*_const,int> *pTVar4;
  
  iVar1 = param_1->ArrayNum;
  __return_storage_ptr__->DataPtr = (UMaterialInterface **)(param_1->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UMaterialInterface_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// MakeShared<FNiagaraRibbonIndexBuffer,1> @ 14932f4f0

TSharedRef<FNiagaraRibbonIndexBuffer,1> * __cdecl
MakeShared<FNiagaraRibbonIndexBuffer,1>
          (TSharedRef<FNiagaraRibbonIndexBuffer,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FNiagaraRibbonIndexBuffer,1> *pTVar4;
  
  pTVar3 = operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FNiagaraRibbonIndexBuffer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraRibbonIndexBuffer___00_SharedPointerInternals__6B_
    ;
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&___7FNiagaraRibbonIndexBuffer__6B_;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FNiagaraRibbonIndexBuffer *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FNiagaraRibbonIndexBuffer *)(pTVar3 + 1) == (FNiagaraRibbonIndexBuffer *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FNiagaraRibbonIndexBuffer,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FNiagaraRibbonRenderingFrameViewResources,1> @ 14932f5c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FNiagaraRibbonRenderingFrameViewResources,1> * __cdecl
MakeShared<FNiagaraRibbonRenderingFrameViewResources,1>
          (TSharedRef<FNiagaraRibbonRenderingFrameViewResources,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FNiagaraRibbonRenderingFrameViewResources,1> *pTVar4;
  
  pTVar3 = operator_new(0x1c8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FNiagaraRibbonRenderingFrameViewResources *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraRibbonRenderingFrameViewResources___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x1b8);
    FVertexFactory::FVertexFactory((FVertexFactory *)(pTVar3 + 1),Num);
    pTVar3[1]._padding_ = (longlong)&___7FNiagaraRibbonVertexFactory__6B_;
    pTVar3[0x15]._padding_ = 0;
    pTVar3[0x15].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x15].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x16]._padding_ = 0;
    pTVar3[0x14].SharedReferenceCount.field_0x3 = 0;
    pTVar3[0x16].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x16].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x17]._padding_ = 0;
    pTVar3[0x17].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x17].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x18]._padding_ = 0;
    pTVar3[0x18].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x18].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x19]._padding_ = 0;
    pTVar3[0x19].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x19].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1a]._padding_ = 0;
    pTVar3[0x1a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1b]._padding_ = 0;
    pTVar3[0x1b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x1b].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar3[0x1c]._padding_ = 1;
    __return_storage_ptr__->Object = (FNiagaraRibbonRenderingFrameViewResources *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FNiagaraRibbonRenderingFrameViewResources *)(pTVar3 + 1) ==
        (FNiagaraRibbonRenderingFrameViewResources *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FNiagaraRibbonRenderingFrameViewResources,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> @ 14932f710

TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> * __cdecl
MakeShared<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>
          (TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>
           *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = operator_new(0x1a0);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFParticlePerfStatsListener_NiagaraBaselineComparisonRender___00_SharedPointerInternals__6B_
    ;
    FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
              ((FParticlePerfStatsListener_GatherAll *)(pTVar1 + 1),false,true,false);
    pTVar1[1]._padding_ =
         (longlong)&___7FParticlePerfStatsListener_NiagaraBaselineComparisonRender__6B_;
    pTVar1[0x14].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x14].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x15]._padding_ = 0;
    pTVar1[0x15].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x15].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x17]._padding_ = 0;
    pTVar1[0x17].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x17].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar1[0x18]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar1[0x18]._padding_ + 4) = 0;
    pTVar1[0x19]._padding_ = 0;
    pTVar1[0x19].SharedReferenceCount = (atomic<int>)0x0;
  }
  TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>::
  TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>
            (__return_storage_ptr__,
             (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MatchParameters<`FNiagaraParameterStoreBinding::BindParameters'::__l2::<lambda_1>_> @ 14932f7f0

void __cdecl
FNiagaraParameterStoreBinding::
MatchParameters<_FNiagaraParameterStoreBinding::BindParameters_::__l2::<lambda_1>_>
          (FNiagaraParameterStore *param_1,FNiagaraParameterStore *param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinitionHandle *this;
  FNiagaraTypeDefinition *pFVar4;
  FName FVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  float fVar21;
  uint local_res8;
  longlong local_res20;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  FNiagaraVariable local_f8;
  longlong local_d8;
  undefined4 local_d0;
  void *local_c8;
  undefined8 local_c0;
  FNiagaraVariable local_b8;
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  undefined8 local_80;
  FNiagaraVariable local_78;
  
  (**(code **)param_2->_padding_)(param_2,&local_118);
  (**(code **)param_1->_padding_)(param_1,&local_130);
  uVar13 = local_110;
  uVar18 = local_128;
  iVar16 = (int)local_128;
  iVar12 = (int)local_110;
  iVar3 = iVar16;
  if (iVar16 < iVar12) {
    iVar3 = iVar12;
  }
  fVar21 = logf((float)iVar3);
  iVar3 = iVar16;
  if (iVar12 < iVar16) {
    iVar3 = iVar12;
  }
  if (((int)ROUND(fVar21 * __real_4038aa3b + __real_3f000000) >> 1) * iVar3 < iVar16 + iVar12) {
    if (iVar12 < iVar16) {
      for (puVar19 = local_118; puVar19 != local_118 + (longlong)iVar12 * 5; puVar19 = puVar19 + 5)
      {
        local_90 = *(undefined4 *)(puVar19 + 1);
        local_98 = *puVar19;
        local_88 = (void *)0x0;
        local_80 = 0;
        plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x50))(param_1,&local_98,1);
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
        }
        if (plVar7 != (longlong *)0x0) {
          local_78._padding_ = *plVar7;
          local_78._padding_._0_4_ = (undefined4)plVar7[1];
          local_78.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.VarData.ArrayNum = 0;
          local_78.VarData.ArrayMax = 0;
          `FNiagaraParameterStoreBinding::BindParameters'::__l2::<lambda_1>::operator()
                    (param_3,&local_78,*(int *)((longlong)puVar19 + 0xc),
                     *(int *)((longlong)plVar7 + 0xc));
          if (local_78.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.VarData.AllocatorInstance.Data);
          }
        }
      }
    }
    else {
      for (plVar7 = local_130; plVar7 != local_130 + (longlong)iVar16 * 5; plVar7 = plVar7 + 5) {
        local_d0 = (undefined4)plVar7[1];
        local_d8 = *plVar7;
        local_c8 = (void *)0x0;
        local_c0 = 0;
        lVar6 = (**(code **)(param_2->_padding_ + 0x50))(param_2,&local_d8,1);
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
        }
        if (lVar6 != 0) {
          local_b8._padding_ = *plVar7;
          local_b8._padding_._0_4_ = (undefined4)plVar7[1];
          local_b8.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.VarData.ArrayNum = 0;
          local_b8.VarData.ArrayMax = 0;
          `FNiagaraParameterStoreBinding::BindParameters'::__l2::<lambda_1>::operator()
                    (param_3,&local_b8,*(int *)(lVar6 + 0xc),*(int *)((longlong)plVar7 + 0xc));
          if (local_b8.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.VarData.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  else {
    uVar8 = 0;
    local_108 = (longlong)iVar12;
    local_res8 = 0;
    if (0 < iVar12) {
      local_100 = (longlong)iVar16;
      local_res20 = 0;
      local_138 = 0;
      uVar9 = uVar8;
      uVar11 = uVar8;
      uVar15 = uVar8;
      uVar20 = uVar8;
      do {
        iVar3 = (int)uVar18;
        if (local_100 <= local_138) {
          return;
        }
        uVar14 = (uint)uVar15;
        uVar10 = 0;
        if ((int)uVar14 < (int)uVar13) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = (int)local_128;
        }
        local_120 = local_118;
        uVar17 = 0;
        uVar10 = uVar17;
        if ((int)(uint)uVar11 < iVar3) {
          uVar10 = ~(uint)uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar19 = local_120;
        plVar7 = local_130;
        this = (FNiagaraTypeDefinitionHandle *)((longlong)local_120 + uVar20 + 8);
        pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(this);
        bVar2 = FNiagaraTypeHelper::IsLWCType(pFVar4);
        if (bVar2) {
LAB_14932fa48:
          uVar10 = *(int *)(uVar20 + (longlong)puVar19) - *(int *)(uVar9 + (longlong)plVar7);
          if (uVar10 == 0) {
            uVar10 = *(int *)(uVar20 + 4 + (longlong)puVar19) -
                     *(int *)(uVar9 + 4 + (longlong)plVar7);
          }
        }
        else {
          pFVar4 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)((longlong)plVar7 + uVar9 + 8));
          bVar2 = FNiagaraTypeHelper::IsLWCType(pFVar4);
          if (bVar2) goto LAB_14932fa48;
          uVar10 = *(int *)(uVar20 + (longlong)puVar19) - *(int *)(uVar9 + (longlong)plVar7);
          if ((uVar10 == 0) &&
             (uVar10 = *(int *)(uVar20 + 4 + (longlong)puVar19) -
                       *(int *)(uVar9 + 4 + (longlong)plVar7), uVar10 == 0)) {
            pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(this);
            uVar11 = uVar8;
            if ((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
              FVar5 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffa8);
              uVar17 = (uint)(*(ulonglong *)FVar5 >> 0x20);
              uVar11 = *(ulonglong *)FVar5;
            }
            pFVar4 = FNiagaraTypeDefinitionHandle::Resolve
                               ((FNiagaraTypeDefinitionHandle *)((longlong)plVar7 + uVar9 + 8));
            uVar10 = (uint)uVar11;
            if ((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
              puVar19 = local_120;
              if (uVar10 == 0) {
                uVar10 = uVar17;
              }
            }
            else {
              FVar5 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffb0);
              uVar10 = uVar10 - (int)*(undefined8 *)FVar5;
              puVar19 = local_120;
              if (uVar10 == 0) {
                uVar10 = uVar17 - (int)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
              }
            }
          }
        }
        if ((int)uVar10 < 0) {
LAB_14932fb12:
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar20 = uVar20 + 0x28;
          local_res20 = local_res20 + 1;
        }
        else {
          if ((int)uVar10 < 1) {
            local_f8._padding_ = *(longlong *)(uVar9 + (longlong)plVar7);
            local_f8._padding_._0_4_ = *(undefined4 *)(uVar9 + 8 + (longlong)plVar7);
            local_f8.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.VarData.ArrayNum = 0;
            local_f8.VarData.ArrayMax = 0;
            `FNiagaraParameterStoreBinding::BindParameters'::__l2::<lambda_1>::operator()
                      (param_3,&local_f8,*(int *)(uVar20 + 0xc + (longlong)puVar19),
                       *(int *)(uVar9 + 0xc + (longlong)plVar7));
            if (local_f8.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.VarData.AllocatorInstance.Data);
            }
            local_res8 = local_res8 + 1;
            local_138 = local_138 + 1;
            uVar9 = uVar9 + 0x28;
            goto LAB_14932fb12;
          }
          local_res8 = local_res8 + 1;
          local_138 = local_138 + 1;
          uVar9 = uVar9 + 0x28;
        }
        uVar11 = (ulonglong)local_res8;
        uVar13 = local_110;
        uVar18 = local_128;
      } while (local_res20 < local_108);
    }
  }
  return;
}

// MatchParameters<`FNiagaraParameterStoreBinding::GetBindingData'::__l2::<lambda_1>_> @ 14932fcc0

void __cdecl
FNiagaraParameterStoreBinding::
MatchParameters<_FNiagaraParameterStoreBinding::GetBindingData_::__l2::<lambda_1>_>
          (FNiagaraParameterStore *param_1,FNiagaraParameterStore *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  FNiagaraTypeDefinition *pFVar7;
  FName FVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  float fVar22;
  uint local_res8;
  uint local_res10;
  TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *local_res18;
  longlong local_res20;
  longlong local_168;
  undefined8 local_160;
  FNiagaraTypeDefinitionHandle FStack_158;
  int iStack_154;
  int local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  void *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  void *local_e0;
  undefined8 local_d8;
  FNiagaraVariable local_d0;
  FNiagaraVariable local_b0;
  undefined1 local_90 [24];
  int local_78;
  
  local_res18 = param_3.OutBoundParameters;
  (**(code **)param_2->_padding_)(param_2,&local_138);
  (**(code **)param_1->_padding_)(param_1,&local_148);
  uVar20 = local_130;
  uVar14 = local_140;
  iVar13 = (int)local_140;
  iVar19 = (int)local_130;
  iVar15 = iVar13;
  if (iVar13 < iVar19) {
    iVar15 = iVar19;
  }
  fVar22 = logf((float)iVar15);
  iVar15 = iVar13;
  if (iVar19 < iVar13) {
    iVar15 = iVar19;
  }
  if (((int)ROUND(fVar22 * __real_4038aa3b + __real_3f000000) >> 1) * iVar15 < iVar13 + iVar19) {
    if (iVar19 < iVar13) {
      for (puVar18 = local_138; puVar18 != local_138 + (longlong)iVar19 * 5; puVar18 = puVar18 + 5)
      {
        local_e8 = *(undefined4 *)(puVar18 + 1);
        local_f0 = *puVar18;
        local_e0 = (void *)0x0;
        local_d8 = 0;
        plVar10 = (longlong *)(**(code **)(param_1->_padding_ + 0x50))(param_1,&local_f0,1);
        if (local_e0 != (void *)0x0) {
          FMemory::Free(local_e0);
        }
        if (plVar10 != (longlong *)0x0) {
          local_b0._padding_ = *plVar10;
          local_b0._padding_._0_4_ = (undefined4)plVar10[1];
          local_b0.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0.VarData.ArrayNum = 0;
          local_b0.VarData.ArrayMax = 0;
          `FNiagaraParameterStoreBinding::GetBindingData'::__l2::<lambda_1>::operator()
                    (&local_res18,&local_b0,*(int *)((longlong)puVar18 + 0xc),
                     *(int *)((longlong)plVar10 + 0xc));
        }
      }
    }
    else {
      for (plVar10 = local_148; plVar10 != local_148 + (longlong)iVar13 * 5; plVar10 = plVar10 + 5)
      {
        local_108 = (undefined4)plVar10[1];
        local_110 = *plVar10;
        local_100 = (void *)0x0;
        local_f8 = 0;
        lVar9 = (**(code **)(param_2->_padding_ + 0x50))(param_2,&local_110,1);
        if (local_100 != (void *)0x0) {
          FMemory::Free(local_100);
        }
        if (lVar9 != 0) {
          local_d0._padding_ = *plVar10;
          local_d0._padding_._0_4_ = (undefined4)plVar10[1];
          local_d0.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d0.VarData.ArrayNum = 0;
          local_d0.VarData.ArrayMax = 0;
          `FNiagaraParameterStoreBinding::GetBindingData'::__l2::<lambda_1>::operator()
                    (&local_res18,&local_d0,*(int *)(lVar9 + 0xc),*(int *)((longlong)plVar10 + 0xc))
          ;
        }
      }
    }
  }
  else {
    uVar12 = 0;
    local_120 = (longlong)iVar19;
    local_res8 = 0;
    local_res10 = 0;
    if (0 < iVar19) {
      local_118 = (longlong)iVar13;
      local_res20 = 0;
      local_168 = 0;
      uVar11 = uVar12;
      uVar16 = uVar12;
      uVar17 = uVar12;
      uVar21 = uVar12;
      do {
        iVar15 = (int)uVar14;
        if (local_118 <= local_168) {
          return;
        }
        uVar6 = 0;
        if ((int)(uint)uVar11 < (int)uVar20) {
          uVar6 = ~(uint)uVar11 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar15 = (int)local_140;
        }
        puVar18 = local_138;
        local_128 = local_138;
        uVar6 = 0;
        if ((int)(uint)uVar16 < iVar15) {
          uVar6 = ~(uint)uVar16 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar10 = local_148;
        pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)((longlong)puVar18 + uVar17 + 8));
        bVar5 = FNiagaraTypeHelper::IsLWCType(pFVar7);
        if (bVar5) {
LAB_14932ff0f:
          iVar15 = *(int *)(uVar17 + (longlong)puVar18) - *(int *)(uVar21 + (longlong)plVar10);
          if (iVar15 == 0) {
            iVar15 = *(int *)(uVar17 + 4 + (longlong)puVar18) -
                     *(int *)(uVar21 + 4 + (longlong)plVar10);
          }
        }
        else {
          pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)((longlong)plVar10 + uVar21 + 8));
          bVar5 = FNiagaraTypeHelper::IsLWCType(pFVar7);
          if (bVar5) goto LAB_14932ff0f;
          iVar15 = *(int *)(uVar17 + (longlong)puVar18) - *(int *)(uVar21 + (longlong)plVar10);
          if ((iVar15 == 0) &&
             (iVar15 = *(int *)(uVar17 + 4 + (longlong)puVar18) -
                       *(int *)(uVar21 + 4 + (longlong)plVar10), iVar15 == 0)) {
            pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                               ((FNiagaraTypeDefinitionHandle *)((longlong)puVar18 + uVar17 + 8));
            uVar11 = uVar12;
            iVar13 = 0;
            if ((pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
              FVar8 = UE::CoreUObject::Private::GetFName((UObject *)local_90);
              uVar11 = *(ulonglong *)FVar8;
              iVar13 = (int)(*(ulonglong *)FVar8 >> 0x20);
            }
            pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                               ((FNiagaraTypeDefinitionHandle *)((longlong)plVar10 + uVar21 + 8));
            iVar15 = (int)uVar11;
            if ((pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
              puVar18 = local_128;
              if (iVar15 == 0) {
                iVar15 = iVar13;
              }
            }
            else {
              FVar8 = UE::CoreUObject::Private::GetFName((UObject *)(local_90 + 8));
              iVar15 = iVar15 - (int)*(undefined8 *)FVar8;
              puVar18 = local_128;
              if (iVar15 == 0) {
                iVar15 = iVar13 - (int)((ulonglong)*(undefined8 *)FVar8 >> 0x20);
              }
            }
          }
        }
        if (iVar15 < 0) {
LAB_1493300bd:
          local_res8 = local_res8 + 1;
          uVar17 = uVar17 + 0x28;
          local_res20 = local_res20 + 1;
        }
        else {
          if (iVar15 < 1) {
            uVar14 = *(undefined8 *)(uVar21 + (longlong)plVar10);
            iVar15 = *(int *)(uVar21 + 0xc + (longlong)plVar10);
            iVar13 = *(int *)(uVar17 + 0xc + (longlong)puVar18);
            iVar19 = *(int *)(uVar21 + 8 + (longlong)plVar10);
            local_90._16_8_ = uVar14;
            local_78 = iVar19;
            if ((iVar13 != -1) && (iVar15 != -1)) {
              local_160 = 0;
              FNiagaraTypeDefinitionHandle::Register(&FStack_158,&FNiagaraTypeDefinition::Vec4Def);
              pTVar4 = local_res18;
              pFVar1 = (local_res18->AllocatorInstance).Data;
              local_160 = uVar14;
              FStack_158.RegisteredTypeIndex = iVar19;
              iStack_154 = iVar13;
              local_150 = iVar15;
              if ((pFVar1 <= (FScriptContainerElement *)&local_160) &&
                 (((FScriptContainerElement *)&local_160 <
                   pFVar1 + (longlong)local_res18->ArrayMax * 0x14 &&
                  (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)))) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar15 = pTVar4->ArrayNum;
              if (iVar15 == pTVar4->ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x414,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
              }
              pTVar4->ArrayNum = iVar15 + 1;
              pFVar2 = (pTVar4->AllocatorInstance).Data;
              pFVar1 = pFVar2 + (longlong)iVar15 * 0x14;
              *(undefined8 *)pFVar1 = local_160;
              *(ulonglong *)(pFVar1 + 8) = CONCAT44(iStack_154,FStack_158.RegisteredTypeIndex);
              *(int *)(pFVar2 + (longlong)iVar15 * 0x14 + 0x10) = local_150;
            }
            local_res10 = local_res10 + 1;
            local_168 = local_168 + 1;
            uVar21 = uVar21 + 0x28;
            goto LAB_1493300bd;
          }
          local_res10 = local_res10 + 1;
          local_168 = local_168 + 1;
          uVar21 = uVar21 + 0x28;
        }
        uVar16 = (ulonglong)local_res10;
        uVar11 = (ulonglong)local_res8;
        uVar14 = local_140;
        uVar20 = local_130;
      } while (local_res20 < local_120);
    }
  }
  return;
}

// NewIntrusiveReferenceController<1,FParticlePerfStatsListener_NiagaraPerformanceReporter,UWorld_*_&> @ 149330250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,FParticlePerfStatsListener_NiagaraPerformanceReporter,UWorld_*_&>
          (UWorld **param_1)

{
  uchar *puVar1;
  UWorld *pUVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *pTVar10;
  UObject *pUVar11;
  FDateTime this;
  FString *pFVar12;
  UWorld *local_res10;
  FString local_28;
  
  pTVar10 = ::operator_new(0x1e0);
  if (pTVar10 !=
      (TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *)0x0)
  {
    *(undefined4 *)&pTVar10->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar10->_padding_ + 4) = 1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFParticlePerfStatsListener_NiagaraPerformanceReporter___00_SharedPointerInternals__6B_
    ;
    pUVar2 = *param_1;
    FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
              ((FParticlePerfStatsListener_GatherAll *)&pTVar10->ObjectStorage,false,true,false);
    *(undefined ***)(pTVar10->ObjectStorage).Pad =
         &___7FParticlePerfStatsListener_NiagaraPerformanceReporter__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (pTVar10->ObjectStorage).Pad[0x138] = '\0';
    (pTVar10->ObjectStorage).Pad[0x139] = '\0';
    (pTVar10->ObjectStorage).Pad[0x13a] = '\0';
    (pTVar10->ObjectStorage).Pad[0x13b] = '\0';
    (pTVar10->ObjectStorage).Pad[0x13c] = '\0';
    (pTVar10->ObjectStorage).Pad[0x13d] = '\0';
    (pTVar10->ObjectStorage).Pad[0x13e] = '\0';
    (pTVar10->ObjectStorage).Pad[0x13f] = '\0';
    local_res10 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((pTVar10->ObjectStorage).Pad + 0x138),(FObjectPtr)&local_res10);
    (pTVar10->ObjectStorage).Pad[0x150] = '\0';
    (pTVar10->ObjectStorage).Pad[0x151] = '\0';
    (pTVar10->ObjectStorage).Pad[0x152] = '\0';
    (pTVar10->ObjectStorage).Pad[0x153] = '\0';
    (pTVar10->ObjectStorage).Pad[0x154] = '\0';
    (pTVar10->ObjectStorage).Pad[0x155] = '\0';
    (pTVar10->ObjectStorage).Pad[0x156] = '\0';
    (pTVar10->ObjectStorage).Pad[0x157] = '\0';
    puVar1 = (pTVar10->ObjectStorage).Pad + 0x160;
    (pTVar10->ObjectStorage).Pad[0x158] = '\0';
    (pTVar10->ObjectStorage).Pad[0x159] = '\0';
    (pTVar10->ObjectStorage).Pad[0x15a] = '\0';
    (pTVar10->ObjectStorage).Pad[0x15b] = '\0';
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    (pTVar10->ObjectStorage).Pad[0x168] = '\0';
    (pTVar10->ObjectStorage).Pad[0x169] = '\0';
    (pTVar10->ObjectStorage).Pad[0x16a] = '\0';
    (pTVar10->ObjectStorage).Pad[0x16b] = '\0';
    (pTVar10->ObjectStorage).Pad[0x16c] = '\0';
    (pTVar10->ObjectStorage).Pad[0x16d] = '\0';
    (pTVar10->ObjectStorage).Pad[0x16e] = '\0';
    (pTVar10->ObjectStorage).Pad[0x16f] = '\0';
    (pTVar10->ObjectStorage).Pad[0x140] = '\0';
    (pTVar10->ObjectStorage).Pad[0x141] = '\0';
    (pTVar10->ObjectStorage).Pad[0x142] = '\0';
    (pTVar10->ObjectStorage).Pad[0x143] = '\0';
    (pTVar10->ObjectStorage).Pad[0x144] = '\0';
    (pTVar10->ObjectStorage).Pad[0x145] = '\0';
    (pTVar10->ObjectStorage).Pad[0x146] = '\0';
    (pTVar10->ObjectStorage).Pad[0x147] = '\0';
    (pTVar10->ObjectStorage).Pad[0x148] = '\0';
    (pTVar10->ObjectStorage).Pad[0x149] = '\0';
    (pTVar10->ObjectStorage).Pad[0x14a] = '\0';
    (pTVar10->ObjectStorage).Pad[0x14b] = '\0';
    (pTVar10->ObjectStorage).Pad[0x170] = '\0';
    (pTVar10->ObjectStorage).Pad[0x171] = '\0';
    (pTVar10->ObjectStorage).Pad[0x172] = '\0';
    (pTVar10->ObjectStorage).Pad[0x173] = '\0';
    (pTVar10->ObjectStorage).Pad[0x174] = '\0';
    (pTVar10->ObjectStorage).Pad[0x175] = '\0';
    (pTVar10->ObjectStorage).Pad[0x176] = '\0';
    (pTVar10->ObjectStorage).Pad[0x177] = '\0';
    (pTVar10->ObjectStorage).Pad[0x178] = '\0';
    (pTVar10->ObjectStorage).Pad[0x179] = '\0';
    (pTVar10->ObjectStorage).Pad[0x17a] = '\0';
    (pTVar10->ObjectStorage).Pad[0x17b] = '\0';
    (pTVar10->ObjectStorage).Pad[0x17c] = '\0';
    (pTVar10->ObjectStorage).Pad[0x17d] = '\0';
    (pTVar10->ObjectStorage).Pad[0x17e] = '\0';
    (pTVar10->ObjectStorage).Pad[0x17f] = '\0';
    (pTVar10->ObjectStorage).Pad[400] = '\0';
    (pTVar10->ObjectStorage).Pad[0x191] = '\0';
    (pTVar10->ObjectStorage).Pad[0x192] = '\0';
    (pTVar10->ObjectStorage).Pad[0x193] = '\0';
    (pTVar10->ObjectStorage).Pad[0x194] = '\0';
    (pTVar10->ObjectStorage).Pad[0x195] = '\0';
    (pTVar10->ObjectStorage).Pad[0x196] = '\0';
    (pTVar10->ObjectStorage).Pad[0x197] = '\0';
    (pTVar10->ObjectStorage).Pad[0x198] = '\0';
    (pTVar10->ObjectStorage).Pad[0x199] = '\0';
    (pTVar10->ObjectStorage).Pad[0x19a] = '\0';
    (pTVar10->ObjectStorage).Pad[0x19b] = '\0';
    (pTVar10->ObjectStorage).Pad[0x19c] = 0x80;
    (pTVar10->ObjectStorage).Pad[0x19d] = '\0';
    (pTVar10->ObjectStorage).Pad[0x19e] = '\0';
    (pTVar10->ObjectStorage).Pad[0x19f] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1a0] = 0xff;
    (pTVar10->ObjectStorage).Pad[0x1a1] = 0xff;
    (pTVar10->ObjectStorage).Pad[0x1a2] = 0xff;
    (pTVar10->ObjectStorage).Pad[0x1a3] = 0xff;
    (pTVar10->ObjectStorage).Pad[0x1a4] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1a5] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1a6] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1a7] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b0] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b1] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b2] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b3] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b4] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b5] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b6] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b7] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b8] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1b9] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1ba] = '\0';
    (pTVar10->ObjectStorage).Pad[0x1bb] = '\0';
    FRenderCommandFence::FRenderCommandFence
              ((FRenderCommandFence *)((pTVar10->ObjectStorage).Pad + 0x1c0));
    (pTVar10->ObjectStorage).Pad[0x1c8] = '\0';
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)((pTVar10->ObjectStorage).Pad + 0x138));
    uVar3 = pUVar11[0x39].field_0x11;
    uVar4 = pUVar11[0x39].field_0x12;
    uVar5 = pUVar11[0x39].field_0x13;
    uVar6 = pUVar11[0x39].field_0x14;
    uVar7 = pUVar11[0x39].field_0x15;
    uVar8 = pUVar11[0x39].field_0x16;
    uVar9 = pUVar11[0x39].field_0x17;
    (pTVar10->ObjectStorage).Pad[0x150] = pUVar11[0x39].field_0x10;
    (pTVar10->ObjectStorage).Pad[0x151] = uVar3;
    (pTVar10->ObjectStorage).Pad[0x152] = uVar4;
    (pTVar10->ObjectStorage).Pad[0x153] = uVar5;
    (pTVar10->ObjectStorage).Pad[0x154] = uVar6;
    (pTVar10->ObjectStorage).Pad[0x155] = uVar7;
    (pTVar10->ObjectStorage).Pad[0x156] = uVar8;
    (pTVar10->ObjectStorage).Pad[0x157] = uVar9;
    *(uint *)((pTVar10->ObjectStorage).Pad + 0x158) = GFrameNumber;
    this = FDateTime::Now();
    pFVar12 = FDateTime::ToString((FDateTime *)this.Ticks,&local_28,L"%d-%H.%M.%S");
    if ((FString *)puVar1 != pFVar12) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((pTVar10->ObjectStorage).Pad + 0x168) = (pFVar12->Data).ArrayNum;
      *(int *)((pTVar10->ObjectStorage).Pad + 0x16c) = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return pTVar10;
  }
  return (TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *)
         0x0;
}

// NewObject<UChildActorComponent> @ 149330430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UChildActorComponent * __cdecl
NewObject<UChildActorComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UChildActorComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UChildActorComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UChildActorComponent *)
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

// RadixSort32<FParticleOrderAsUint,int> @ 149330520

void __cdecl
RadixSort32<FParticleOrderAsUint,int>
          (FParticleOrderAsUint *param_1,FParticleOrderAsUint *param_2,int param_3)

{
  TRadixSortKeyCastUint32<FParticleOrderAsUint> local_res20 [8];
  
  RadixSort32<FParticleOrderAsUint,int,TRadixSortKeyCastUint32<FParticleOrderAsUint>_>
            (param_1,param_2,param_3,local_res20);
  return;
}

// RadixSort32<FParticleOrderAsUint,int,TRadixSortKeyCastUint32<FParticleOrderAsUint>_> @ 149330530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort32<FParticleOrderAsUint,int,TRadixSortKeyCastUint32<FParticleOrderAsUint>_>
          (FParticleOrderAsUint *param_1,FParticleOrderAsUint *param_2,int param_3,
          TRadixSortKeyCastUint32<FParticleOrderAsUint> *param_4)

{
  FParticleOrderAsUint *pFVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x4933054c;
  local_2028[0x7ff] = 1;
  lVar5 = (longlong)param_3;
  memset(local_5028,0,0x5000);
  uVar4 = 0;
  uVar8 = uVar4;
  if (0 < param_3) {
    do {
      uVar12 = param_2[uVar8].OrderAsUint;
      uVar8 = uVar8 + 1;
      local_5028[uVar12 & 0x3ff] = local_5028[uVar12 & 0x3ff] + 1;
      aiStack_4028[uVar12 >> 10 & 0x7ff] = aiStack_4028[uVar12 >> 10 & 0x7ff] + 1;
      local_2028[uVar12 >> 0x15] = local_2028[uVar12 >> 0x15] + 1;
    } while ((longlong)uVar8 < lVar5);
  }
  iVar7 = -1;
  iVar6 = -1;
  lVar9 = 0x400;
  uVar8 = uVar4;
  uVar11 = uVar4;
  uVar10 = uVar4;
  iVar13 = iVar6;
  do {
    iVar2 = local_5028[uVar8];
    local_5028[uVar8] = iVar7;
    iVar7 = iVar2 + iVar7;
    iVar2 = aiStack_4028[uVar8];
    aiStack_4028[uVar8] = iVar6;
    uVar14 = (int)uVar10 + iVar2;
    uVar10 = (ulonglong)uVar14;
    iVar3 = local_2028[uVar8];
    iVar6 = iVar6 + iVar2;
    local_2028[uVar8] = iVar13;
    uVar12 = (int)uVar11 + iVar3;
    uVar11 = (ulonglong)uVar12;
    uVar8 = uVar8 + 1;
    iVar13 = iVar13 + iVar3;
  } while ((longlong)uVar8 < 0x400);
  iVar6 = uVar14 - 1;
  iVar13 = uVar12 - 1;
  do {
    iVar7 = aiStack_4028[lVar9];
    aiStack_4028[lVar9] = iVar6;
    iVar6 = iVar7 + iVar6;
    iVar7 = local_2028[lVar9];
    local_2028[lVar9] = iVar13;
    iVar13 = iVar7 + iVar13;
    lVar9 = lVar9 + 1;
  } while (lVar9 < 0x800);
  uVar8 = uVar4;
  if (0 < lVar5) {
    do {
      uVar10 = uVar8 + 1;
      uVar12 = param_2[uVar8].OrderAsUint & 0x3ff;
      iVar13 = local_5028[uVar12];
      param_1[(longlong)iVar13 + 1] = param_2[uVar8];
      local_5028[uVar12] = iVar13 + 1;
      uVar11 = uVar4;
      uVar8 = uVar10;
    } while ((longlong)uVar10 < lVar5);
    do {
      uVar8 = uVar11 + 1;
      uVar12 = (uint)((ulonglong)param_1[uVar11] >> 10) & 0x7ff;
      iVar13 = aiStack_4028[uVar12];
      param_2[(longlong)iVar13 + 1] = param_1[uVar11];
      aiStack_4028[uVar12] = iVar13 + 1;
      uVar11 = uVar8;
    } while ((longlong)uVar8 < lVar5);
    do {
      pFVar1 = param_2 + uVar4;
      uVar4 = uVar4 + 1;
      uVar8 = ((ulonglong)*pFVar1 & 0xffffffff) >> 0x15;
      iVar13 = local_2028[uVar8];
      param_1[(longlong)iVar13 + 1] = *pFVar1;
      local_2028[uVar8] = iVar13 + 1;
    } while ((longlong)uVar4 < lVar5);
  }
  return;
}

// RadixSort32<FParticleOrderAsUint,unsigned_int> @ 149330730

void __cdecl
RadixSort32<FParticleOrderAsUint,unsigned_int>
          (FParticleOrderAsUint *param_1,FParticleOrderAsUint *param_2,uint param_3)

{
  TRadixSortKeyCastUint32<FParticleOrderAsUint> local_res20 [8];
  
  RadixSort32<FParticleOrderAsUint,unsigned_int,TRadixSortKeyCastUint32<FParticleOrderAsUint>_>
            (param_1,param_2,param_3,local_res20);
  return;
}

// RadixSort32<FParticleOrderAsUint,unsigned_int,TRadixSortKeyCastUint32<FParticleOrderAsUint>_> @ 149330740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort32<FParticleOrderAsUint,unsigned_int,TRadixSortKeyCastUint32<FParticleOrderAsUint>_>
          (FParticleOrderAsUint *param_1,FParticleOrderAsUint *param_2,uint param_3,
          TRadixSortKeyCastUint32<FParticleOrderAsUint> *param_4)

{
  FParticleOrderAsUint FVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FParticleOrderAsUint *pFVar5;
  uint *puVar6;
  FParticleOrderAsUint *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint local_5018 [1024];
  uint local_4018 [1024];
  uint local_3018 [1024];
  uint local_2018 [2048];
  
  local_2018[0x7fe] = 0x49330752;
  local_2018[0x7ff] = 1;
  uVar10 = (ulonglong)param_3;
  memset(local_5018,0,0x5000);
  pFVar5 = param_2;
  uVar9 = uVar10;
  if (param_3 != 0) {
    do {
      uVar2 = pFVar5->OrderAsUint;
      local_5018[uVar2 & 0x3ff] = local_5018[uVar2 & 0x3ff] + 1;
      local_4018[uVar2 >> 10 & 0x7ff] = local_4018[uVar2 >> 10 & 0x7ff] + 1;
      local_2018[uVar2 >> 0x15] = local_2018[uVar2 >> 0x15] + 1;
      uVar9 = uVar9 - 1;
      pFVar5 = pFVar5 + 1;
    } while (uVar9 != 0);
  }
  iVar13 = 0;
  lVar12 = 0x400;
  iVar3 = 0;
  iVar4 = 0;
  lVar8 = 0x400;
  puVar6 = local_4018;
  do {
    uVar2 = puVar6[-0x400];
    puVar6[-0x400] = iVar13 - 1;
    iVar13 = iVar13 + uVar2;
    uVar2 = iVar3 - 1;
    iVar3 = *puVar6 + iVar3;
    *puVar6 = uVar2;
    uVar2 = iVar4 - 1;
    iVar4 = puVar6[0x800] + iVar4;
    puVar6[0x800] = uVar2;
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar8 != 0);
  puVar6 = local_2018 + 0x400;
  do {
    uVar2 = puVar6[-0x800];
    puVar6[-0x800] = iVar3 - 1;
    iVar3 = iVar3 + uVar2;
    uVar2 = iVar4 - 1;
    iVar4 = iVar4 + *puVar6;
    *puVar6 = uVar2;
    lVar12 = lVar12 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar12 != 0);
  pFVar5 = param_2;
  uVar9 = uVar10;
  if (param_3 != 0) {
    do {
      FVar1 = *pFVar5;
      uVar2 = FVar1.OrderAsUint & 0x3ff;
      local_5018[uVar2] = local_5018[uVar2] + 1;
      param_1[local_5018[uVar2]] = FVar1;
      uVar9 = uVar9 - 1;
      pFVar7 = param_1;
      pFVar5 = pFVar5 + 1;
      uVar11 = uVar10;
    } while (uVar9 != 0);
    do {
      FVar1 = *pFVar7;
      uVar2 = (uint)((ulonglong)FVar1 >> 10) & 0x7ff;
      local_4018[uVar2] = local_4018[uVar2] + 1;
      param_2[local_4018[uVar2]] = FVar1;
      uVar11 = uVar11 - 1;
      pFVar7 = pFVar7 + 1;
    } while (uVar11 != 0);
    do {
      FVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar9 = ((ulonglong)FVar1 & 0xffffffff) >> 0x15;
      local_2018[uVar9] = local_2018[uVar9] + 1;
      param_1[local_2018[uVar9]] = FVar1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// SetValueWithAccessor<int> @ 1493310c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<int>(FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraDataSetReaderInt32<int> *pFVar4;
  FNiagaraTypeDefinition *this;
  undefined4 local_res8 [2];
  FNiagaraDataSetReaderInt32<int> local_18;
  
  pFVar4 = FNiagaraDataSetAccessorInt32<int>::CreateReader
                     (&local_18,param_2,(FName)param_1->_padding_);
  if ((pFVar4->bIsValid == false) || (pFVar4->NumInstances < param_3)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x17f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = *(undefined4 *)(pFVar4->ComponentData[0] + (longlong)param_3 * 4);
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar3 != 4) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,local_res8,(longlong)(param_1->VarData).ArrayNum)
  ;
  return;
}

// SetValueWithAccessor<float> @ 149331190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<float>(FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  FName FVar1;
  FNiagaraDataBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  uint local_res8 [2];
  FNiagaraDataSetAccessorFloat<float> local_res10;
  
  FVar1 = (FName)param_1->_padding_;
  local_res10.bIsFloat = true;
  local_res10.ComponentIndex = -1;
  if ((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNiagaraDataSetAccessorFloat<float>::Init(&local_res10,(param_2->CompiledData).StructPtr,FVar1);
  bVar4 = local_res10.bIsFloat;
  pFVar2 = param_2->CurrentData;
  bVar5 = false;
  pFVar8 = (FScriptContainerElement *)0x0;
  uVar7 = 0;
  if ((pFVar2 != (FNiagaraDataBuffer *)0x0) && (uVar7 = 0, local_res10.ComponentIndex != -1)) {
    bVar5 = true;
    if (local_res10.bIsFloat == false) {
      pFVar8 = (pFVar2->HalfData).AllocatorInstance.Data +
               local_res10.ComponentIndex * pFVar2->HalfStride;
    }
    else {
      pFVar8 = (pFVar2->FloatData).AllocatorInstance.Data +
               local_res10.ComponentIndex * pFVar2->FloatStride;
    }
    uVar7 = pFVar2->NumInstances;
  }
  if ((!bVar5) || ((int)uVar7 < param_3)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x4c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (bVar4 == false) {
    uVar7 = (*(ushort *)(pFVar8 + (longlong)param_3 * 2) & 0x7fff) * 0x2000;
    fVar9 = (float)(uVar7 + 0x38000000);
    if ((uVar7 & 0xf800000) == 0xf800000) {
      fVar9 = (float)(uVar7 + 0x70000000);
    }
    else if ((uVar7 & 0xf800000) == 0) {
      fVar9 = (float)(uVar7 + 0x38800000) + __real_b8800000;
    }
    local_res8[0] = (*(ushort *)(pFVar8 + (longlong)param_3 * 2) & 0x8000) << 0x10 | (uint)fVar9;
  }
  else {
    local_res8[0] = *(uint *)(pFVar8 + (longlong)param_3 * 4);
  }
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar6 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar6 != 4) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,local_res8,(longlong)(param_1->VarData).ArrayNum)
  ;
  return;
}

// SetValueWithAccessor<UE::Math::TQuat<float>_> @ 149331380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<UE::Math::TQuat<float>_>
          (FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> *this;
  TQuat<float> *_Src;
  FNiagaraTypeDefinition *this_00;
  TQuat<float> local_48;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> local_38;
  
  this = FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_>::CreateReader
                   (&local_38,param_2,(FName)param_1->_padding_);
  _Src = FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get(this,&local_48,param_3);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 0x10) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,_Src,(longlong)(param_1->VarData).ArrayNum);
  return;
}

// SetValueWithAccessor<UE::Math::TVector2<float>_> @ 149331420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<UE::Math::TVector2<float>_>
          (FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  FName FVar1;
  FNiagaraDataBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  float fVar11;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_> local_res10 [2];
  uint local_res20;
  uint local_res24;
  
  FVar1 = (FName)param_1->_padding_;
  lVar10 = (longlong)param_3;
  local_res10[0].bIsFloat = true;
  local_res10[0].ComponentIndex = -1;
  if (((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("CompiledData.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x169,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_>::Init
            (local_res10,(param_2->CompiledData).StructPtr,FVar1);
  bVar4 = local_res10[0].bIsFloat;
  pFVar2 = param_2->CurrentData;
  pFVar8 = (FScriptContainerElement *)0x0;
  pFVar9 = pFVar8;
  if ((pFVar2 != (FNiagaraDataBuffer *)0x0) &&
     (pFVar9 = (FScriptContainerElement *)0x0, local_res10[0].ComponentIndex != -1)) {
    if (local_res10[0].bIsFloat == false) {
      pFVar8 = (pFVar2->HalfData).AllocatorInstance.Data +
               local_res10[0].ComponentIndex * pFVar2->HalfStride;
      pFVar9 = (pFVar2->HalfData).AllocatorInstance.Data +
               (local_res10[0].ComponentIndex + 1) * pFVar2->HalfStride;
    }
    else {
      pFVar8 = (pFVar2->FloatData).AllocatorInstance.Data +
               local_res10[0].ComponentIndex * pFVar2->FloatStride;
      pFVar9 = (pFVar2->FloatData).AllocatorInstance.Data +
               (local_res10[0].ComponentIndex + 1) * pFVar2->FloatStride;
    }
    if (param_3 <= (int)pFVar2->NumInstances) goto LAB_14933150f;
  }
  bVar5 = FDebug::CheckVerifyFailedImpl2
                    ("bIsValid && Index <= NumInstances",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                     ,0x4c,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14933150f:
  if (bVar4 == false) {
    uVar7 = (*(ushort *)(pFVar8 + lVar10 * 2) & 0x7fff) * 0x2000;
    fVar11 = (float)(uVar7 + 0x38000000);
    if ((uVar7 & 0xf800000) == 0xf800000) {
      fVar11 = (float)(uVar7 + 0x70000000);
    }
    else if ((uVar7 & 0xf800000) == 0) {
      fVar11 = (float)(uVar7 + 0x38800000) + __real_b8800000;
    }
    uVar7 = (*(ushort *)(pFVar9 + lVar10 * 2) & 0x7fff) * 0x2000;
    local_res20 = (*(ushort *)(pFVar8 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar11;
    fVar11 = (float)(uVar7 + 0x38000000);
    if ((uVar7 & 0xf800000) == 0xf800000) {
      fVar11 = (float)(uVar7 + 0x70000000);
    }
    else if ((uVar7 & 0xf800000) == 0) {
      fVar11 = (float)(uVar7 + 0x38800000) + __real_b8800000;
    }
    local_res24 = (*(ushort *)(pFVar9 + lVar10 * 2) & 0x8000) << 0x10 | (uint)fVar11;
  }
  else {
    local_res20 = *(uint *)(pFVar8 + lVar10 * 4);
    local_res24 = *(uint *)(pFVar9 + lVar10 * 4);
  }
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar6 = FNiagaraTypeDefinition::GetSize(this);
  if ((iVar6 != 8) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("sizeof(T) == TypeDefHandle->GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                         ,0x5db,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,&local_res20,
         (longlong)(param_1->VarData).ArrayNum);
  return;
}

// SetValueWithAccessor<UE::Math::TVector4<float>_> @ 149331670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<UE::Math::TVector4<float>_>
          (FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *this;
  TVector4<float> *_Src;
  FNiagaraTypeDefinition *this_00;
  TVector4<float> local_48;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> local_38;
  
  this = FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
                   (&local_38,param_2,(FName)param_1->_padding_);
  _Src = FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get(this,&local_48,param_3);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 0x10) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,_Src,(longlong)(param_1->VarData).ArrayNum);
  return;
}

// SetValueWithAccessor<UE::Math::TVector<float>_> @ 149331710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<UE::Math::TVector<float>_>
          (FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TVector<float> *_Src;
  FNiagaraTypeDefinition *this;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> local_res8;
  TVector<float> local_38;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_28;
  
  FVar1 = (FName)param_1->_padding_;
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
            (&local_res8,(param_2->CompiledData).StructPtr,FVar1);
  FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::GetReader(&local_res8,&local_28,param_2);
  _Src = FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get(&local_28,&local_38,param_3);
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar4 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar4 != 0xc) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,_Src,(longlong)(param_1->VarData).ArrayNum);
  return;
}

// SetValueWithAccessor<FLinearColor> @ 149331820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<FLinearColor>(FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraDataSetReaderFloat<FLinearColor> *this;
  FLinearColor *_Src;
  FNiagaraTypeDefinition *this_00;
  FLinearColor local_48;
  FNiagaraDataSetReaderFloat<FLinearColor> local_38;
  
  this = FNiagaraDataSetAccessorFloat<FLinearColor>::CreateReader
                   (&local_38,param_2,(FName)param_1->_padding_);
  _Src = FNiagaraDataSetReaderFloat<FLinearColor>::Get(this,&local_48,param_3);
  this_00 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 0x10) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,_Src,(longlong)(param_1->VarData).ArrayNum);
  return;
}

// SetValueWithAccessor<FNiagaraBool> @ 1493318c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<FNiagaraBool>(FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraDataSetReaderInt32<FNiagaraBool> *pFVar4;
  FNiagaraTypeDefinition *this;
  undefined4 local_res8 [2];
  FNiagaraDataSetReaderInt32<FNiagaraBool> local_18;
  
  pFVar4 = FNiagaraDataSetAccessorInt32<FNiagaraBool>::CreateReader
                     (&local_18,param_2,(FName)param_1->_padding_);
  if ((pFVar4->bIsValid == false) || (pFVar4->NumInstances < param_3)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("bIsValid && Index <= NumInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                       ,0x17f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = *(undefined4 *)(pFVar4->ComponentData[0] + (longlong)param_3 * 4);
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar3 != 4) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,local_res8,(longlong)(param_1->VarData).ArrayNum)
  ;
  return;
}

// SetValueWithAccessor<FNiagaraPosition> @ 149331990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
SetValueWithAccessor<FNiagaraPosition>
          (FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraPosition *_Src;
  FNiagaraTypeDefinition *this;
  FNiagaraDataSetAccessorFloat<FNiagaraPosition> local_res8;
  FNiagaraPosition local_38;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_28;
  
  FVar1 = (FName)param_1->_padding_;
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
            (&local_res8,(param_2->CompiledData).StructPtr,FVar1);
  FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader(&local_res8,&local_28,param_2);
  _Src = FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get(&local_28,&local_38,param_3);
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar4 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar4 != 0xc) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,_Src,(longlong)(param_1->VarData).ArrayNum);
  return;
}

// StaticEnum<enum_ENiagaraCVarConditionResponse> @ 149331aa0

UEnum * __cdecl StaticEnum<enum_ENiagaraCVarConditionResponse>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse,(UObject *)pUVar1,
                       L"ENiagaraCVarConditionResponse");
  }
  return Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDeviceProfileRedirectMode> @ 149331ae0

UEnum * __cdecl StaticEnum<enum_ENiagaraDeviceProfileRedirectMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode,(UObject *)pUVar1
                       ,L"ENiagaraDeviceProfileRedirectMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraPlatformSelectionState> @ 149331b20

UEnum * __cdecl StaticEnum<enum_ENiagaraPlatformSelectionState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState,(UObject *)pUVar1,
                       L"ENiagaraPlatformSelectionState");
  }
  return Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton;
}

// StaticEnum<enum_ENiagaraPlatformSetState> @ 149331b60

UEnum * __cdecl StaticEnum<enum_ENiagaraPlatformSetState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState,(UObject *)pUVar1,
                       L"ENiagaraPlatformSetState");
  }
  return Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton;
}

// StaticEnum<enum_ENiagaraPreviewGridResetMode> @ 149331ba0

UEnum * __cdecl StaticEnum<enum_ENiagaraPreviewGridResetMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode,(UObject *)pUVar1,
                       L"ENiagaraPreviewGridResetMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRendererGpuTranslucentLatency> @ 149331be0

UEnum * __cdecl StaticEnum<enum_ENiagaraRendererGpuTranslucentLatency>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency,
                       (UObject *)pUVar1,L"ENiagaraRendererGpuTranslucentLatency");
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRendererSortPrecision> @ 149331c20

UEnum * __cdecl StaticEnum<enum_ENiagaraRendererSortPrecision>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision,(UObject *)pUVar1,
                       L"ENiagaraRendererSortPrecision");
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton;
}

// ~TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::__l2::<lambda_1>,1,1> @ 149335950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraRendererLayout::Finalize_::__l2::<lambda_1>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::`2'::<lambda_1>,1,1>::_vftable_;
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

// ~TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>,0,0> @ 149335970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNiagaraRendererMeshes::Initialize_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>,1,1> @ 149335990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FNiagaraRendererComponents::DestroyRenderState_Concurrent_::__l27::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
            (*(FComponentPoolEntry **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>,0,1> @ 1493359d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FNiagaraRendererMeshes::Initialize_::__l2::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::`2'::<lambda_2>,0,1>::_vftable_;
  return;
}

// operator() @ 149338630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_24>::operator()(<lambda_24> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t wVar4;
  int iVar5;
  uint uVar6;
  FText *pFVar7;
  wchar_t *pwVar8;
  FText local_28;
  FText local_18;
  
  if (param_1->ArrayNum == 0) {
    if (FNiagaraPlatformSet::QualityLevelOverride != -1) {
      FNiagaraPlatformSet::LastDirtiedFrame = GFrameNumber;
      FNiagaraPlatformSet::QualityLevelOverride = -1;
      FNiagaraPlatformSet::CachedQualityLevel = -1;
      FNiagaraPlatformSet::RefreshScalability();
    }
    if (3 < (byte)LogNiagara._0_1_) {
      iVar5 = FNiagaraPlatformSet::QualityLevelOverride;
      if ((FNiagaraPlatformSet::QualityLevelOverride == -1) &&
         (iVar5 = FNiagaraPlatformSet::CachedQualityLevel,
         FNiagaraPlatformSet::CachedQualityLevel == -1)) {
        iVar5 = GNiagaraQualityLevel;
      }
      pFVar7 = FNiagaraPlatformSet::GetQualityLevelText(&local_28,iVar5);
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
        return;
      }
    }
  }
  else if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar1;
    }
    wVar4 = *pwVar8;
    if ((wVar4 == L'-') || (wVar4 == L'+')) {
      pwVar8 = pwVar8 + 1;
      wVar4 = *pwVar8;
    }
    bVar3 = false;
    if (wVar4 != L'\0') {
      wVar4 = *pwVar8;
      do {
        if (wVar4 == L'.') {
          if (bVar3) {
            return;
          }
          bVar3 = true;
        }
        else {
          iVar5 = iswdigit(wVar4);
          if (iVar5 == 0) {
            return;
          }
        }
        wVar4 = pwVar8[1];
        pwVar8 = pwVar8 + 1;
      } while (wVar4 != L'\0');
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar1;
    }
    uVar6 = _wtoi(pwVar8);
    if (uVar6 < 5) {
      FNiagaraPlatformSet::SetNiagaraQualityLevelOverride(uVar6);
      if (3 < (byte)LogNiagara._0_1_) {
        iVar5 = FNiagaraPlatformSet::QualityLevelOverride;
        if ((FNiagaraPlatformSet::QualityLevelOverride == -1) &&
           (iVar5 = FNiagaraPlatformSet::CachedQualityLevel,
           FNiagaraPlatformSet::CachedQualityLevel == -1)) {
          iVar5 = GNiagaraQualityLevel;
        }
        pFVar7 = FNiagaraPlatformSet::GetQualityLevelText(&local_18,iVar5);
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5046260443048312902>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                         ,0x46,"NewQualityLevel >= 0 && NewQualityLevel <= 4");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// operator() @ 1493388a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_25>::operator()(<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UDeviceProfileManager *pUVar9;
  UClass *pUVar10;
  UDeviceProfile *pUVar11;
  FStaticBasicLogRecord *pFVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  FName local_78;
  UObject *local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  GNiagaraPlatformOverride.WeakPtr.ObjectIndex = 0;
  GNiagaraPlatformOverride.WeakPtr.ObjectSerialNumber = 0;
  if (param_1->ArrayNum == 0) {
    if (GNiagaraBackupQualityLevel != -1) {
      local_res18 = 0;
      ::FString::PrintfImpl(&local_68,L"%d");
      pwVar13 = L"";
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar15.Data = local_68.Data.AllocatorInstance.Data;
      }
      if (GDeviceProfilesIni.Data.ArrayNum != 0) {
        pwVar13 = (wchar_t *)GDeviceProfilesIni.Data.AllocatorInstance;
      }
      UE::ConfigUtilities::OnSetCVarFromIniEntry
                (pwVar13,NiagaraQualityLevelName,(wchar_t *)FVar15.Data,0xff000000,false,false,
                 (FName)0x0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    GNiagaraBackupQualityLevel = -1;
    if ((byte)LogNiagara._0_1_ < 3) {
      GNiagaraBackupQualityLevel = -1;
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    return;
  }
  pUVar9 = UDeviceProfileManager::Get(false);
  pFVar14 = (pUVar9->Profiles).AllocatorInstance.Data;
  iVar2 = (pUVar9->Profiles).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar2 * 8;
  do {
    if ((pUVar9->Profiles).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDeviceProfile>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar14 == pFVar1) goto LAB_149338bb1;
    pUVar3 = *(UObject **)pFVar14;
    if (pUVar3 != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_UDeviceProfile_NoRegister();
      iVar7 = (int)pUVar10->_padding_;
      if ((iVar7 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar10->_padding_)) {
        if ((param_1->ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_78.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_78.Number = *(uint *)&pUVar3->field_0x1c;
        pFVar4 = (param_1->AllocatorInstance).Data;
        ::FName::ToString(&local_78,&local_58);
        iVar7 = *(int *)(pFVar4 + 8);
        if (local_58.Data.ArrayNum == iVar7) {
          if (local_58.Data.ArrayNum < 2) {
            bVar6 = true;
          }
          else {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_58.Data.AllocatorInstance.Data,*(wchar_t **)pFVar4);
            bVar6 = iVar7 == 0;
          }
        }
        else {
          bVar6 = local_58.Data.ArrayNum + iVar7 == 1;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          local_70 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&GNiagaraPlatformOverride.WeakPtr,(FObjectPtr)&local_70);
          if (GNiagaraBackupQualityLevel == -1) {
            GNiagaraBackupQualityLevel = GNiagaraQualityLevel;
          }
          pUVar11 = (UDeviceProfile *)FWeakObjectPtr::Get(&GNiagaraPlatformOverride.WeakPtr);
          if ((pUVar11 == (UDeviceProfile *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("OverrideDP",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                                 ,0x46a,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          for (uVar8 = FNiagaraPlatformSet::GetActiveQualityMaskForDeviceProfile(pUVar11);
              (uVar8 != 0 && ((uVar8 & 1) == 0)); uVar8 = (int)uVar8 >> 1) {
          }
          local_res20 = 0;
          ::FString::PrintfImpl(&local_48,L"%d");
          pwVar13 = L"";
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_48.Data.ArrayNum != 0) {
            FVar15.Data = local_48.Data.AllocatorInstance.Data;
          }
          if (GDeviceProfilesIni.Data.ArrayNum != 0) {
            pwVar13 = (wchar_t *)GDeviceProfilesIni.Data.AllocatorInstance;
          }
          UE::ConfigUtilities::OnSetCVarFromIniEntry
                    (pwVar13,NiagaraQualityLevelName,(wchar_t *)FVar15.Data,0xff000000,false,false,
                     (FName)0x0);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
LAB_149338bb1:
          bVar6 = FWeakObjectPtr::IsValid(&GNiagaraPlatformOverride.WeakPtr);
          if (bVar6) {
            if ((byte)LogNiagara._0_1_ < 3) {
              return;
            }
            if ((param_1->ArrayNum < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar12 = &::LOG_Static;
          }
          else {
            if ((byte)LogNiagara._0_1_ < 3) {
              return;
            }
            if ((param_1->ArrayNum < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar12 = &::LOG_Static;
          }
          UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogNiagara);
          return;
        }
      }
    }
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// `scalar_deleting_destructor' @ 149339b50

void * __thiscall
IBaseDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339b80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`FNiagaraRendererMeshes::SetupElementForGPUScene'::__l12::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339bb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339be0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNiagaraPerfBaselineHandler,bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339c10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNiagaraGpuRibbonsDataManager,void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339c40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::`27'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
            (*(FComponentPoolEntry **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::`2'::<lambda_2>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339da0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraRibbonCPUGeneratedVertexData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraRibbonCPUGeneratedVertexData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339de0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraRibbonIndexBuffer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraRibbonIndexBuffer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339e20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraRibbonRenderingFrameViewResources,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraRibbonRenderingFrameViewResources,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339e60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRWBuffer,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRWBuffer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339ea0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraPerfBaselineStatsListener,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraPerfBaselineStatsListener,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339ee0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339f20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339f60

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNiagaraRendererMeshes::FGPUSceneUpdateResource>::_scalar_deleting_destructor_
          (TObject<FNiagaraRendererMeshes::FGPUSceneUpdateResource> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGPUSceneUpdateResource_FNiagaraRendererMeshes_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149339fa0

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNiagaraRendererMeshes::FMeshCollectorResources>::_scalar_deleting_destructor_
          (TObject<FNiagaraRendererMeshes::FMeshCollectorResources> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFMeshCollectorResources_FNiagaraRendererMeshes_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FMeshCollectorResources_FNiagaraRendererMeshes__6B_;
  (**(code **)(*(longlong *)&this[1].field_0x8 + 0x20))(&this[1].field_0x8);
  if (*(FRHIResource **)&this[0x22].field_0x8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this[0x22].field_0x8);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a030

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNiagaraRibbonMeshCollectorResources>::_scalar_deleting_destructor_
          (TObject<FNiagaraRibbonMeshCollectorResources> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFNiagaraRibbonMeshCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(this + 2));
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a090

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNiagaraRibbonRenderingFrameResources,SharedPointerInternals::DefaultDeleter<FNiagaraRibbonRenderingFrameResources>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNiagaraRibbonRenderingFrameResources,SharedPointerInternals::DefaultDeleter<FNiagaraRibbonRenderingFrameResources>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a0d0

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
ANiagaraPerfBaselineActor::_scalar_deleting_destructor_
          (ANiagaraPerfBaselineActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ANiagaraPerfBaselineActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a130

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
ANiagaraPreviewBase::_scalar_deleting_destructor_(ANiagaraPreviewBase *this,uint param_1)

{
  *(undefined ***)this = &___7ANiagaraPreviewBase__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a190

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
ANiagaraPreviewGrid::_scalar_deleting_destructor_(ANiagaraPreviewGrid *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ANiagaraPreviewGrid__6B_;
  pFVar1 = (this->PreviewComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a210

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FNiagaraRendererMeshes::FGPUSceneUpdateResource::_scalar_deleting_destructor_
          (FGPUSceneUpdateResource *this,uint param_1)

{
  *(undefined ***)this = &___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a250

void * __thiscall
FNiagaraRendererMeshes::FMeshCollectorResources::_scalar_deleting_destructor_
          (FMeshCollectorResources *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMeshCollectorResources_FNiagaraRendererMeshes__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  if (this->UniformBuffer != (TUniformBufferRef<FNiagaraMeshUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraDynamicDataBase::_scalar_deleting_destructor_(FNiagaraDynamicDataBase *this,uint param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FNiagaraDynamicDataBase__6B_;
  pFVar1 = (this->CPUParticleData).Reference;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar1->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
    UNLOCK();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a360

void * __thiscall
FNiagaraDynamicDataLights::_scalar_deleting_destructor_
          (FNiagaraDynamicDataLights *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  pFVar1 = (this->LightArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FNiagaraDynamicDataBase__6B_;
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pvVar5 = (void *)(*pcVar3)();
        return pvVar5;
      }
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a400

void * __thiscall
FNiagaraDynamicDataMesh::_scalar_deleting_destructor_(FNiagaraDynamicDataMesh *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FMaterialRenderProxy_*> FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  pFVar1 = (this->ParameterDataBound).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsBound).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataInterfacesBound).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->Materials).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FNiagaraDynamicDataBase__6B_;
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar4)();
        return pvVar6;
      }
    }
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    UNLOCK();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a4d0

void * __thiscall
FNiagaraDynamicDataRibbon::_scalar_deleting_destructor_
          (FNiagaraDynamicDataRibbon *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GenerationOutput).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FNiagaraDynamicDataBase__6B_;
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FNiagaraGpuComputeDataManager::_scalar_deleting_destructor_
          (FNiagaraGpuComputeDataManager *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraGpuComputeDataManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a5a0

void * __thiscall
FNiagaraGpuRibbonsDataManager::_scalar_deleting_destructor_
          (FNiagaraGpuRibbonsDataManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FNiagaraRibbonGPUInitComputeBuffers *this_00;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FNiagaraGpuRibbonsDataManager__6B_;
  DestructItems<FNiagaraGpuRibbonsDataManager::FIndexBufferEntry,int>
            ((FIndexBufferEntry *)(this->Index32BufferCache).AllocatorInstance.Data,
             (this->Index32BufferCache).ArrayNum);
  pFVar1 = (this->Index32BufferCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraGpuRibbonsDataManager::FIndirectDrawBufferEntry,int>
            ((FIndirectDrawBufferEntry *)(this->IndirectDrawBufferCache).AllocatorInstance.Data,
             (this->IndirectDrawBufferCache).ArrayNum);
  pFVar1 = (this->IndirectDrawBufferCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = &this->ComputeBuffers;
  FNiagaraRibbonGPUInitComputeBuffers::~FNiagaraRibbonGPUInitComputeBuffers(this_00);
  lVar3 = 2;
  do {
    lVar2 = (longlong)(this_00 + -1);
    this_00 = (FNiagaraRibbonGPUInitComputeBuffers *)((longlong)(this_00 + -1) + 0x90);
    lVar3 = lVar3 + -1;
    DestructItems<FNiagaraRibbonGPUInitParameters,int>
              (*(FNiagaraRibbonGPUInitParameters **)this_00,*(int *)(lVar2 + 0x98));
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
  } while (lVar3 != 0);
  this->_padding_ = (longlong)&___7FNiagaraGpuComputeDataManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a680

void * __thiscall
FNiagaraMeshVertexFactory::_scalar_deleting_destructor_
          (FNiagaraMeshVertexFactory *this,uint param_1)

{
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a6c0

void * __thiscall
FNiagaraParameterStore::_scalar_deleting_destructor_(FNiagaraParameterStore *this,uint param_1)

{
  ~FNiagaraParameterStore(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a700

void * __thiscall
FNiagaraPerfBaselineStatsListener::_scalar_deleting_destructor_
          (FNiagaraPerfBaselineStatsListener *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FAccumulatedParticlePerfStats::~FAccumulatedParticlePerfStats(&this->AccumulatedStats);
  this->_padding_ = (longlong)&___7FParticlePerfStatsListener__6B_;
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a770

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraRenderer::_scalar_deleting_destructor_(FNiagaraRenderer *this,uint param_1)

{
  FNiagaraDynamicDataBase *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  pFVar1 = this->DynamicDataRender;
  if (pFVar1 != (FNiagaraDynamicDataBase *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->DynamicDataRender = (FNiagaraDynamicDataBase *)0x0;
  pFVar2 = (this->BaseMaterials_GT).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FRayTracingGeometry::~FRayTracingGeometry(&this->RayTracingGeometry);
  FRWBuffer::~FRWBuffer(&this->RayTracingDynamicVertexBuffer);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a7f0

void * __thiscall
FNiagaraRendererComponents::_scalar_deleting_destructor_
          (FNiagaraRendererComponents *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  iVar1 = (this->ComponentPool).ArrayNum;
  this->_padding_ = (longlong)&___7FNiagaraRendererComponents__6B_;
  if (iVar1 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComponentPool.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererComponents.cpp"
                       ,0x121,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
            ((FComponentPoolEntry *)(this->ComponentPool).AllocatorInstance.Data,
             (this->ComponentPool).ArrayNum);
  pFVar2 = (this->ComponentPool).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  puVar3 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->_padding_);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a8d0

void * __thiscall
FNiagaraRendererDecals::_scalar_deleting_destructor_(FNiagaraRendererDecals *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  iVar1 = (this->ActiveDecalProxies).ArrayNum;
  this->_padding_ = (longlong)&___7FNiagaraRendererDecals__6B_;
  if (iVar1 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveDecalProxies.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererDecals.cpp"
                       ,0x53,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  pFVar2 = (this->ActiveDecalProxies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  puVar3 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->_padding_);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933a9a0

void * __thiscall
FNiagaraRendererLights::_scalar_deleting_destructor_(FNiagaraRendererLights *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &___7FNiagaraRenderer__6B_;
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)&this->field_0x8 = 0;
  if (*(void **)&this->field_0x158 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x158);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->field_0x40);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933aa20

void * __thiscall
FNiagaraRendererMeshes::_scalar_deleting_destructor_(FNiagaraRendererMeshes *this,uint param_1)

{
  undefined8 *puVar1;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar2;
  
  *(undefined ***)this = &___7FNiagaraRendererMeshes__6B_;
  FVar2 = (this->Meshes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
    FVar2 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)&this->Meshes;
  }
  DestructItems<FNiagaraRendererMeshes::FMeshData,int>((FMeshData *)FVar2,(this->Meshes).ArrayNum);
  FVar2 = (this->Meshes).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = *(undefined8 **)&this->field_0x8;
  *(undefined ***)this = &___7FNiagaraRenderer__6B_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)&this->field_0x8 = 0;
  if (*(void **)&this->field_0x158 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x158);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->field_0x40);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933aaf0

void * __thiscall
FNiagaraRendererRibbons::_scalar_deleting_destructor_(FNiagaraRendererRibbons *this,uint param_1)

{
  undefined8 *puVar1;
  
  this->_padding_ = (longlong)&___7FNiagaraRendererRibbons__6B_;
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).GPUComputeCommandBuffer);
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).SegmentsBuffer);
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).RibbonLookupTableBuffer);
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).MultiRibbonIndicesBuffer)
  ;
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer
            (&(this->VertexBuffers).TangentsAndDistancesBuffer);
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).SortedIndicesBuffer);
  FNiagaraRibbonShapeGeometryData::~FNiagaraRibbonShapeGeometryData(&this->ShapeState);
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->_padding_);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x428);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933abe0

void * __thiscall
FNiagaraRibbonIndexBuffer::_scalar_deleting_destructor_
          (FNiagaraRibbonIndexBuffer *this,uint param_1)

{
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  
  this->_padding_ = (longlong)&___7FNiagaraRibbonIndexBuffer__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (this->UAV).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SRV).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933ac50

void * __thiscall
FNiagaraRibbonMeshCollectorResources::_scalar_deleting_destructor_
          (FNiagaraRibbonMeshCollectorResources *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RibbonResources).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933aca0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraRibbonRenderingFrameResources::_scalar_deleting_destructor_
          (FNiagaraRibbonRenderingFrameResources *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TSharedPtr<FNiagaraRibbonRenderingFrameViewResources,1>,int>
            ((TSharedPtr<FNiagaraRibbonRenderingFrameViewResources,1> *)
             (this->ViewResources).AllocatorInstance.Data,(this->ViewResources).ArrayNum);
  piVar1 = &(this->ViewResources).ArrayMax;
  (this->ViewResources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  this->ParticleFloatSRV = (FRHIShaderResourceView *)0x0;
  this->ParticleHalfSRV = (FRHIShaderResourceView *)0x0;
  this->ParticleIntSRV = (FRHIShaderResourceView *)0x0;
  this->ParticleFloatDataStride = -1;
  this->ParticleHalfDataStride = -1;
  this->ParticleIntDataStride = -1;
  this->RibbonIdParamOffset = -1;
  DestructItems<TSharedPtr<FNiagaraRibbonRenderingFrameViewResources,1>,int>
            ((TSharedPtr<FNiagaraRibbonRenderingFrameViewResources,1> *)
             (this->ViewResources).AllocatorInstance.Data,(this->ViewResources).ArrayNum);
  pFVar2 = (this->ViewResources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933ad50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraRibbonVertexFactory::_scalar_deleting_destructor_
          (FNiagaraRibbonVertexFactory *this,uint param_1)

{
  FRHIUniformBuffer *this_00;
  
  if (this->NiagaraRibbonUniformBuffer != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->NiagaraRibbonUniformBuffer);
  }
  this_00 = (this->LooseParameterUniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933adb0

void * __thiscall
FNiagaraVertexFactoryBase::_scalar_deleting_destructor_
          (FNiagaraVertexFactoryBase *this,uint param_1)

{
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933adf0

void * __thiscall
FParticlePerfStatsListener_NiagaraBaselineComparisonRender::_scalar_deleting_destructor_
          (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CurrentStats).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurrentStats).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentStats);
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933ae60

void * __thiscall
FParticlePerfStatsListener_NiagaraPerformanceReporter::_scalar_deleting_destructor_
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this,uint param_1)

{
  ~FParticlePerfStatsListener_NiagaraPerformanceReporter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14933aea0

void * __thiscall
UNiagaraBaselineController::_scalar_deleting_destructor_
          (UNiagaraBaselineController *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBaselineController__6B_;
  pvVar1 = *(void **)&(this->System).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
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

// `scalar_deleting_destructor' @ 14933af10

void * __thiscall
UNiagaraBaselineController_Basic::_scalar_deleting_destructor_
          (UNiagaraBaselineController_Basic *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBaselineController_Basic__6B_;
  pFVar1 = (this->SpawnedComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraBaselineController__6B_;
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

// `scalar_deleting_destructor' @ 14933afa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UNiagaraPrecompileContainer::_scalar_deleting_destructor_
          (UNiagaraPrecompileContainer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraPrecompileContainer__6B_;
  pFVar1 = (this->Scripts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
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

// `scalar_deleting_destructor' @ 14933b010

void * __thiscall
UNiagaraPreviewAxis::_scalar_deleting_destructor_(UNiagaraPreviewAxis *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraPreviewAxis__6B_;
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

// `scalar_deleting_destructor' @ 14933b070

void * __thiscall
UNiagaraPreviewAxis_InterpParamBase::_scalar_deleting_destructor_
          (UNiagaraPreviewAxis_InterpParamBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
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

// `scalar_deleting_destructor' @ 14933b0d0

void * __thiscall
UNiagaraPreviewAxis_InterpParamFloat::_scalar_deleting_destructor_
          (UNiagaraPreviewAxis_InterpParamFloat *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
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

// `scalar_deleting_destructor' @ 14933b130

void * __thiscall
UNiagaraPreviewAxis_InterpParamInt32::_scalar_deleting_destructor_
          (UNiagaraPreviewAxis_InterpParamInt32 *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
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

// `scalar_deleting_destructor' @ 14933b190

void * __thiscall
UNiagaraPreviewAxis_InterpParamLinearColor::_scalar_deleting_destructor_
          (UNiagaraPreviewAxis_InterpParamLinearColor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
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

// `scalar_deleting_destructor' @ 14933b1f0

void * __thiscall
UNiagaraPreviewAxis_InterpParamVector2D::_scalar_deleting_destructor_
          (UNiagaraPreviewAxis_InterpParamVector2D *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
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

// `scalar_deleting_destructor' @ 14933b250

void * __thiscall
UNiagaraPreviewAxis_InterpParamVector4::_scalar_deleting_destructor_
          (UNiagaraPreviewAxis_InterpParamVector4 *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
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

// `scalar_deleting_destructor' @ 14933b2b0

void * __thiscall
UNiagaraPreviewAxis_InterpParamVector::_scalar_deleting_destructor_
          (UNiagaraPreviewAxis_InterpParamVector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraPreviewAxis__6B_;
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

// ConvertVariableToType @ 1493407f0

void __cdecl
ConvertVariableToType
          (FNiagaraVariable *param_1,FNiagaraTypeDefinition *param_2,
          TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_3,
          FNiagaraLWCConverter *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uchar uVar4;
  ushort uVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  ForElementType<unsigned_char> FVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  FNiagaraTypeDefinition *pFVar12;
  FNiagaraPosition *pFVar13;
  TVector<double> *pTVar14;
  TRotator<float> *pTVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float local_res8 [2];
  float local_298;
  float local_294;
  TVector<float>_u_0 local_290;
  TVector<float>_u_0 local_280;
  TVector<float>_u_0 local_270 [2];
  TVector4<float>_u_0 local_258;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  TVector4<float>_u_0 local_238;
  TQuat<float> local_228;
  FNiagaraPosition local_218;
  FNiagaraPosition local_208;
  TQuat<float> local_1f8;
  TVector<double>_u_0 local_1e8;
  FNiagaraPosition local_1d0;
  FNiagaraPosition local_1c4;
  TRotator<float> local_1b8;
  FNiagaraTypeDefinition local_1a8;
  FNiagaraTypeDefinition local_190;
  FNiagaraTypeDefinition local_178;
  FNiagaraTypeDefinition local_160;
  FNiagaraTypeDefinition local_148;
  FNiagaraTypeDefinition local_130;
  FNiagaraTypeDefinition local_118;
  FNiagaraTypeDefinition local_100;
  FNiagaraTypeDefinition local_e8;
  TVector<double> local_d0;
  FNiagaraTypeDefinition local_b8;
  FNiagaraTypeDefinition local_a0;
  FNiagaraTypeDefinition local_88 [3];
  
  pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  TVar6.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar6.DebugPtr);
  }
  uVar5 = pFVar12->UnderlyingType;
  uVar4 = pFVar12->Flags;
  if ((((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
          FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
        (uVar5 == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
       (uVar4 == FNiagaraTypeDefinition::Vec3Def.Flags)) &&
      ((pFVar12 = UNiagaraComponentRendererProperties::GetFColorDef(&local_1a8),
       (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
       (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
       (param_2->UnderlyingType == pFVar12->UnderlyingType)))) && (param_2->Flags == pFVar12->Flags)
     ) {
    FNiagaraVariable::GetValue<UE::Math::TVector<float>_>(param_1,(TVector<float> *)&local_290._s_0)
    ;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,4,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    uVar19 = 0xff;
    if ((int)(local_290._s_0.Z * __real_437f0000) < 0xff) {
      uVar19 = (int)(local_290._s_0.Z * __real_437f0000);
    }
    uVar17 = 0xff;
    if ((int)(local_290._s_0.Y * __real_437f0000) < 0xff) {
      uVar17 = (int)(local_290._s_0.Y * __real_437f0000);
    }
    iVar11 = 0xff;
    if ((int)(local_290._s_0.X * __real_437f0000) < 0xff) {
      iVar11 = (int)(local_290._s_0.X * __real_437f0000);
    }
    bVar16 = 0;
    if (0 < iVar11) {
      bVar16 = (byte)iVar11;
    }
    uVar18 = bVar16 | 0xffffff00;
LAB_149340a6b:
    uVar20 = 0;
    if (0 < (int)uVar17) {
      uVar20 = uVar17 & 0xff;
    }
    uVar17 = 0;
    if (0 < (int)uVar19) {
      uVar17 = uVar19 & 0xff;
    }
    FVar7 = (param_3->AllocatorInstance).SecondaryData;
    if (FVar7 != (ForElementType<unsigned_char>)0x0) {
      param_3 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
                FVar7;
    }
    *(uint *)param_3 = (uVar18 << 8 | uVar20) << 8 | uVar17;
    return;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
        FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
      (uVar5 == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
     ((uVar4 == FNiagaraTypeDefinition::Vec4Def.Flags &&
      (((pFVar12 = UNiagaraComponentRendererProperties::GetFColorDef(&local_190),
        (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
        (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
        (param_2->UnderlyingType == pFVar12->UnderlyingType)) && (param_2->Flags == pFVar12->Flags))
      )))) {
    FNiagaraVariable::GetValue<UE::Math::TVector4<float>_>
              (param_1,(TVector4<float> *)&local_258._s_0);
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,4,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    uVar18 = 0xff;
    if ((int)(local_258._s_0.W * __real_437f0000) < 0xff) {
      uVar18 = (int)(local_258._s_0.W * __real_437f0000);
    }
    uVar19 = 0xff;
    if ((int)(local_258._s_0.Z * __real_437f0000) < 0xff) {
      uVar19 = (int)(local_258._s_0.Z * __real_437f0000);
    }
    uVar17 = 0xff;
    if ((int)(local_258._s_0.Y * __real_437f0000) < 0xff) {
      uVar17 = (int)(local_258._s_0.Y * __real_437f0000);
    }
    uVar20 = 0xff;
    if ((int)(local_258._s_0.X * __real_437f0000) < 0xff) {
      uVar20 = (int)(local_258._s_0.X * __real_437f0000);
    }
    uVar9 = 0;
    if (0 < (int)uVar18) {
      uVar9 = uVar18 & 0xff;
    }
    uVar18 = 0;
    if (0 < (int)uVar20) {
      uVar18 = uVar20 & 0xff;
    }
    uVar18 = uVar9 << 8 | uVar18;
    goto LAB_149340a6b;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr !=
        FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0) ||
      (uVar5 != FNiagaraTypeDefinition::ColorDef.UnderlyingType)) ||
     ((uVar4 != FNiagaraTypeDefinition::ColorDef.Flags ||
      (((pFVar12 = UNiagaraComponentRendererProperties::GetFColorDef(&local_178),
        (param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
        (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr ||
        (param_2->UnderlyingType != pFVar12->UnderlyingType)) || (param_2->Flags != pFVar12->Flags))
      )))) {
    if ((((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
            FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
          (uVar5 == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
         (uVar4 == FNiagaraTypeDefinition::Vec3Def.Flags)) &&
        ((pFVar12 = UNiagaraComponentRendererProperties::GetFRotatorDef(&local_160),
         (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
         (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
         (param_2->UnderlyingType == pFVar12->UnderlyingType)))) &&
       (param_2->Flags == pFVar12->Flags)) {
      FNiagaraVariable::GetValue<UE::Math::TVector<float>_>
                (param_1,(TVector<float> *)&local_280._s_0);
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                (1,1,0x18,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
LAB_1493412dd:
      FVar7 = (param_3->AllocatorInstance).SecondaryData;
      if (FVar7 != (ForElementType<unsigned_char>)0x0) {
        param_3 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *
                  )FVar7;
      }
      *(double *)param_3 = (double)local_280._s_0.X;
      *(double *)((longlong)param_3 + 8) = (double)local_280._s_0.Y;
      *(double *)((longlong)param_3 + 0x10) = (double)local_280._s_0.Z;
      return;
    }
    if ((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr !=
          FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) ||
        (uVar5 != FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) ||
       ((uVar4 != FNiagaraTypeDefinition::Vec2Def.Flags ||
        (((pFVar12 = UNiagaraComponentRendererProperties::GetFVector2DDef(&local_148),
          (param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
          (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr ||
          (param_2->UnderlyingType != pFVar12->UnderlyingType)) ||
         (param_2->Flags != pFVar12->Flags)))))) {
      if ((((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
              FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
            (uVar5 == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
           (uVar4 == FNiagaraTypeDefinition::Vec3Def.Flags)) &&
          ((pFVar12 = UNiagaraComponentRendererProperties::GetFVectorDef(&local_130),
           (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
           (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
           (param_2->UnderlyingType == pFVar12->UnderlyingType)))) &&
         (param_2->Flags == pFVar12->Flags)) {
        FNiagaraVariable::GetValue<UE::Math::TVector<float>_>
                  (param_1,(TVector<float> *)&local_270[0]._s_0);
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                  (1,1,0x18,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
        local_280._s_0.Y = (float)local_270[0]._4_4_;
        local_280._s_0.X = (float)local_270[0]._0_4_;
        local_280._s_0.Z = (float)local_270[0]._8_4_;
        goto LAB_1493412dd;
      }
      if ((((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
              FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
            (uVar5 == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
           (uVar4 == FNiagaraTypeDefinition::Vec4Def.Flags)) &&
          ((pFVar12 = UNiagaraComponentRendererProperties::GetFVector4Def(&local_118),
           (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
           (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
           (param_2->UnderlyingType == pFVar12->UnderlyingType)))) &&
         (param_2->Flags == pFVar12->Flags)) {
        FNiagaraVariable::GetValue<UE::Math::TVector4<float>_>
                  (param_1,(TVector4<float> *)&local_238._s_0);
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                  (1,1,0x20,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
LAB_14934120a:
        FVar7 = (param_3->AllocatorInstance).SecondaryData;
        if (FVar7 != (ForElementType<unsigned_char>)0x0) {
          param_3 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *)FVar7;
        }
        *(double *)param_3 = (double)local_238._s_0.X;
        *(double *)((longlong)param_3 + 8) = (double)local_238._s_0.Y;
        *(double *)((longlong)param_3 + 0x10) = (double)local_238._s_0.Z;
        *(double *)((longlong)param_3 + 0x18) = (double)local_238._s_0.W;
        return;
      }
      if ((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) {
        if (((uVar5 == FNiagaraTypeDefinition::PositionDef.UnderlyingType) &&
            (uVar4 == FNiagaraTypeDefinition::PositionDef.Flags)) &&
           ((pFVar12 = UNiagaraComponentRendererProperties::GetFVectorDef(&local_100),
            (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
            (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
            ((param_2->UnderlyingType == pFVar12->UnderlyingType &&
             (param_2->Flags == pFVar12->Flags)))))) {
          pFVar13 = FNiagaraVariable::GetValue<FNiagaraPosition>(param_1,&local_1d0);
          local_218._0_8_ = *(undefined8 *)pFVar13;
          local_218._8_4_ = *(undefined4 *)&pFVar13->field_0x8;
          FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                    (param_4,(TVector<double> *)&local_1e8._s_0,&local_218);
          UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,0x18,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
          FVar7 = (param_3->AllocatorInstance).SecondaryData;
          if (FVar7 != (ForElementType<unsigned_char>)0x0) {
            param_3 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                       *)FVar7;
          }
          *(double *)param_3 = local_1e8._s_0.X;
          *(double *)((longlong)param_3 + 8) = local_1e8._s_0.Y;
          *(double *)((longlong)param_3 + 0x10) = local_1e8._s_0.Z;
          return;
        }
        if (((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
               FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
             (uVar5 == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
            (uVar4 == FNiagaraTypeDefinition::PositionDef.Flags)) &&
           (((pFVar12 = UNiagaraComponentRendererProperties::GetFVector3fDef(&local_e8),
             (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
             (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
             (param_2->UnderlyingType == pFVar12->UnderlyingType)) &&
            (param_2->Flags == pFVar12->Flags)))) {
          pFVar13 = FNiagaraVariable::GetValue<FNiagaraPosition>(param_1,&local_1c4);
          local_208._0_8_ = *(undefined8 *)pFVar13;
          local_208._8_4_ = *(undefined4 *)&pFVar13->field_0x8;
          pTVar14 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                              (param_4,&local_d0,&local_208);
          dVar1 = (pTVar14->field0_0x0)._s_0.X;
          dVar2 = (pTVar14->field0_0x0)._s_0.Y;
          dVar3 = (pTVar14->field0_0x0)._s_0.Z;
          UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,0xc,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
          FVar7 = (param_3->AllocatorInstance).SecondaryData;
          if (FVar7 != (ForElementType<unsigned_char>)0x0) {
            param_3 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                       *)FVar7;
          }
          *(float *)param_3 = (float)dVar1;
          *(float *)((longlong)param_3 + 4) = (float)dVar2;
          *(float *)((longlong)param_3 + 8) = (float)dVar3;
          return;
        }
      }
      if ((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
          FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) {
        if (((uVar5 == FNiagaraTypeDefinition::QuatDef.UnderlyingType) &&
            (uVar4 == FNiagaraTypeDefinition::QuatDef.Flags)) &&
           ((pFVar12 = UNiagaraComponentRendererProperties::GetFQuatDef(&local_b8),
            (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
            (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
            ((param_2->UnderlyingType == pFVar12->UnderlyingType &&
             (param_2->Flags == pFVar12->Flags)))))) {
          FNiagaraVariable::GetValue<UE::Math::TQuat<float>_>(param_1,&local_228);
          UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,0x20,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
          local_238._s_0.Y = local_228.Y;
          local_238._s_0.X = local_228.X;
          local_238._s_0.Z = local_228.Z;
          local_238._s_0.W = local_228.W;
          goto LAB_14934120a;
        }
        if (((((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
               FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
             (uVar5 == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
            (uVar4 == FNiagaraTypeDefinition::QuatDef.Flags)) &&
           (((pFVar12 = UNiagaraComponentRendererProperties::GetFRotatorDef(&local_a0),
             (param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
             (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr &&
             (param_2->UnderlyingType == pFVar12->UnderlyingType)) &&
            (param_2->Flags == pFVar12->Flags)))) {
          FNiagaraVariable::GetValue<UE::Math::TQuat<float>_>(param_1,&local_1f8);
          UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,0x18,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
          pTVar15 = UE::Math::TQuat<float>::Rotator(&local_1f8,&local_1b8);
          local_280._s_0.X = pTVar15->Pitch;
          local_280._s_0.Y = pTVar15->Yaw;
          local_280._s_0.Z = pTVar15->Roll;
          goto LAB_1493412dd;
        }
      }
      if ((TObjectPtr<UObject>_u_0)TVar6.DebugPtr !=
          FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) {
        return;
      }
      if (uVar5 != FNiagaraTypeDefinition::FloatDef.UnderlyingType) {
        return;
      }
      if (uVar4 != FNiagaraTypeDefinition::FloatDef.Flags) {
        return;
      }
      pFVar12 = UNiagaraComponentRendererProperties::GetDoubleDef(local_88);
      if ((param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
          (pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr) {
        return;
      }
      if (param_2->UnderlyingType != pFVar12->UnderlyingType) {
        return;
      }
      if (param_2->Flags != pFVar12->Flags) {
        return;
      }
      pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
      iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
      if ((iVar11 != 4) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("sizeof(T) == TypeDefHandle->GetSize()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                              ,0x5e3,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (0 < (param_1->VarData).ArrayNum) {
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
        iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
        if ((param_1->VarData).ArrayNum == iVar11) goto LAB_1493413df;
      }
      bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("IsDataAllocated()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                          ,0x5e4,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_1493413df:
      local_res8[0] = 0.0;
      pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
      iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
      memcpy(local_res8,(param_1->VarData).AllocatorInstance.Data,(longlong)iVar11);
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                (1,1,8,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
      FVar7 = (param_3->AllocatorInstance).SecondaryData;
      if (FVar7 != (ForElementType<unsigned_char>)0x0) {
        param_3 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *
                  )FVar7;
      }
      *(double *)param_3 = (double)local_res8[0];
      return;
    }
    pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                        ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
    if ((iVar11 != 8) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("sizeof(T) == TypeDefHandle->GetSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                            ,0x5e3,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (0 < (param_1->VarData).ArrayNum) {
      pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
      iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
      if ((param_1->VarData).ArrayNum == iVar11) goto LAB_149340ddf;
    }
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("IsDataAllocated()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                        ,0x5e4,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
LAB_149340ddf:
    pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                        ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
    memcpy(&local_298,(param_1->VarData).AllocatorInstance.Data,(longlong)iVar11);
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,0x10,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    FVar7 = (param_3->AllocatorInstance).SecondaryData;
    if (FVar7 != (ForElementType<unsigned_char>)0x0) {
      param_3 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
                FVar7;
    }
    *(double *)param_3 = (double)local_298;
    *(double *)((longlong)param_3 + 8) = (double)local_294;
    return;
  }
  pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
  if ((iVar11 != 0x10) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("sizeof(T) == TypeDefHandle->GetSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                          ,0x5e3,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (0 < (param_1->VarData).ArrayNum) {
    pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                        ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
    if ((param_1->VarData).ArrayNum == iVar11) goto LAB_149340b81;
  }
  bVar10 = FDebug::CheckVerifyFailedImpl2
                     ("IsDataAllocated()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                      ,0x5e4,L"");
  if (bVar10) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_149340b81:
  pFVar12 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
  memcpy(&local_248,(param_1->VarData).AllocatorInstance.Data,(longlong)iVar11);
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,4,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  if (local_23c <= 0.0) {
    local_23c = 0.0;
  }
  if (__real_3f800000 <= local_23c) {
    local_23c = __real_3f800000;
  }
  if (local_248 <= 0.0) {
    local_248 = 0.0;
  }
  if (__real_3f800000 <= local_248) {
    local_248 = __real_3f800000;
  }
  if (local_244 <= 0.0) {
    local_244 = 0.0;
  }
  if (__real_3f800000 <= local_244) {
    local_244 = __real_3f800000;
  }
  if (local_240 <= 0.0) {
    local_240 = 0.0;
  }
  if (__real_3f800000 <= local_240) {
    local_240 = __real_3f800000;
  }
  FVar7 = (param_3->AllocatorInstance).SecondaryData;
  if (FVar7 != (ForElementType<unsigned_char>)0x0) {
    param_3 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
              FVar7;
  }
  *(uint *)param_3 =
       ((((int)(local_23c * __real_437f0000 + __real_3f000000) & 0xffU) << 8 |
        (int)(local_248 * __real_437f0000 + __real_3f000000) & 0xffU) << 8 |
       (int)(local_244 * __real_437f0000 + __real_3f000000) & 0xffU) << 8 |
       (int)(local_240 * __real_437f0000 + __real_3f000000) & 0xffU;
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraParameterStore @ 149345dc0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraParameterStore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraParameters @ 149345dd0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraParameters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraPerfBaseline @ 149345de0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraPerfBaseline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraPlatformSet @ 149345df0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraPlatformSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraPrecompileContainer @ 149345e00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraPrecompileContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraPreviewGrid @ 149345e10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraPreviewGrid(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraRendererProperties @ 149345e20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraRendererProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraRendererReadback @ 149345e30

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraRendererReadback(void)

{
  return;
}

// InvokeSetterFunction @ 14935e510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
InvokeSetterFunction
          (UObject *param_1,UFunction *param_2,uchar *param_3,int param_4,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  FFeedbackContext *pFVar5;
  FProperty *this;
  UFunction *pUVar6;
  UObject *pUVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FNameEntryId FVar11;
  ulonglong uVar12;
  FName FVar13;
  FString *pFVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int iVar15;
  FProperty *pFVar16;
  wchar_t *pwVar17;
  undefined1 *puVar18;
  uchar *puVar19;
  double *pdVar20;
  double *_Dst;
  int local_res20 [2];
  undefined1 auStack_968 [64];
  FProperty *local_928;
  uint local_920 [2];
  UFunction *local_918;
  double *local_910;
  UObject *local_908;
  undefined1 local_900 [4];
  undefined1 local_8fc [4];
  FName local_8f8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_8f0;
  double local_8e8;
  double local_8e0;
  double local_8d8;
  TStringView<wchar_t> local_8d0;
  UObject **local_8c0;
  UFunction **local_8b8;
  int *local_8b0;
  FProperty **local_8a8;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  
  puVar18 = auStack_968;
  local_58 = __security_cookie.value ^ (ulonglong)&local_928;
  local_920[0] = (uint)param_2->ParmsSize;
  local_8f0 = param_5;
  local_res20[0] = param_4;
  local_918 = param_2;
  local_910 = (double *)param_3;
  local_908 = param_1;
  if ((((param_1 == (UObject *)0x0) || (param_2 == (UFunction *)0x0)) || (local_920[0] == 0)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter && ParmsSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererComponents.cpp"
                         ,0x9a,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_918->ReturnValueOffset != 0xffff) || (puVar19 = param_3, 1 < local_918->NumParms)) {
    puVar19 = (uchar *)0x0;
    puVar18 = auStack_968;
    if (local_920[0] != 0) {
      uVar12 = (ulonglong)(local_920[0] + 0xf) + 0xf;
      if (uVar12 <= local_920[0] + 0xf) {
        uVar12 = 0xffffffffffffff0;
      }
      puVar19 = (uchar *)((longlong)local_920 + -(uVar12 & 0xfffffffffffffff0));
      puVar18 = auStack_968 + -(uVar12 & 0xfffffffffffffff0);
    }
    pFVar16 = (FProperty *)local_918->_padding_;
    bVar8 = true;
    local_928 = pFVar16;
    uVar10 = local_920[0];
    if (pFVar16 != (FProperty *)0x0) {
      do {
        FVar13.ComparisonIndex.Value = 0;
        FVar13.Number = 0;
        local_928 = pFVar16;
        if (pFVar16->ElementSize * pFVar16->ArrayDim + pFVar16->Offset_Internal <= (int)uVar10) {
          *(undefined8 *)(puVar18 + -8) = 0x14935e640;
          bVar9 = IsThisNotNull(pFVar16,"FField::GetFName");
          if (bVar9) {
            FVar13 = (FName)pFVar16->_padding_;
          }
          local_898.Base = local_878;
          local_898.bIsDynamic = false;
          local_898.bIsExternal = false;
          local_898.CurPos = local_878;
          local_898.End = local_62;
          local_8f8 = FVar13;
          *(undefined8 *)(puVar18 + -8) = 0x14935e694;
          FName::AppendString(&local_8f8,&local_898);
          pwVar17 = local_898.Base;
          local_8d0.DataPtr = local_898.Base;
          iVar15 = (int)((longlong)local_898.CurPos - (longlong)local_898.Base >> 1);
          local_8d0.Size = iVar15;
          *(undefined8 *)(puVar18 + -8) = 0x14935e6b4;
          uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
          *(undefined8 *)(puVar18 + -8) = 0x14935e6c2;
          pFVar14 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    ::FindByHash<TStringView<wchar_t>_>
                              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                *)param_5,uVar10,&local_8d0);
          pUVar7 = local_908;
          pFVar16 = local_928;
          pFVar5 = GWarn;
          if (pFVar14 == (FString *)0x0) {
            if (((uint)(int)local_928->PropertyFlags >> 9 & 1) == 0) {
              pcVar4 = *(code **)(local_928->_padding_ + 0x150);
              if (local_928->ArrayDim < 1) {
                *(int *)(puVar18 + 0x28) = local_928->ArrayDim;
                *(undefined4 *)(puVar18 + 0x20) = 0;
                *(undefined8 *)(puVar18 + -8) = 0x14935e9d3;
                bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
                ;
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              if (puVar19 == (uchar *)0x0) {
                *(undefined8 *)(puVar18 + -8) = 0x14935e9fe;
                bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L"");
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              iVar15 = pFVar16->Offset_Internal;
              *(undefined8 *)(puVar18 + -8) = 0x14935ea10;
              (*pcVar4)(pFVar16,puVar19 + iVar15);
            }
            else {
              iVar15 = local_928->ArrayDim;
              iVar1 = local_928->ElementSize;
              if (iVar15 < 1) {
                *(int *)(puVar18 + 0x28) = iVar15;
                *(undefined4 *)(puVar18 + 0x20) = 0;
                *(undefined8 *)(puVar18 + -8) = 0x14935e952;
                bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
                ;
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              if (puVar19 == (uchar *)0x0) {
                *(undefined8 *)(puVar18 + -8) = 0x14935e97d;
                bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L"");
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              iVar2 = pFVar16->Offset_Internal;
              *(undefined8 *)(puVar18 + -8) = 0x14935e994;
              memset(puVar19 + iVar2,0,(longlong)iVar1 * (longlong)iVar15);
            }
          }
          else {
            if (local_928->ArrayDim < 1) {
              *(int *)(puVar18 + 0x28) = local_928->ArrayDim;
              *(undefined4 *)(puVar18 + 0x20) = 0;
              *(undefined8 *)(puVar18 + -8) = 0x14935e710;
              bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            if (puVar19 == (uchar *)0x0) {
              *(undefined8 *)(puVar18 + -8) = 0x14935e73b;
              bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            this = local_928;
            iVar15 = pFVar16->Offset_Internal;
            if ((pFVar14->Data).ArrayNum == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
            }
            *(undefined8 *)(puVar18 + -8) = 0x14935e76c;
            bVar9 = FProperty::ValidateImportFlags(this,0,(FOutputDevice *)pFVar5);
            param_3 = (uchar *)local_910;
            if ((bVar9) && ((FScriptContainerElement *)pwVar17 != (FScriptContainerElement *)0x0)) {
              lVar3 = this->_padding_;
              *(FFeedbackContext **)(puVar18 + 0x30) = pFVar5;
              *(undefined4 *)(puVar18 + 0x28) = 0x8000000;
              *(UObject **)(puVar18 + 0x20) = pUVar7;
              pcVar4 = *(code **)(lVar3 + 0xe8);
              *(undefined8 *)(puVar18 + -8) = 0x14935e79c;
              (*pcVar4)(this,pwVar17,puVar19 + iVar15,0);
              param_3 = (uchar *)local_910;
            }
          }
          if ((((char)local_928->PropertyFlags < '\0') &&
              ((local_928->PropertyFlags >> 10 & 1) == 0)) && (bVar8)) {
            lVar3 = local_928[1]._padding_;
            if (((local_res20[0] == 0xc) && (local_928->ElementSize == 0x18)) && (lVar3 != 0)) {
              uVar12 = *(ulonglong *)(lVar3 + 0x18);
              *(undefined8 *)(puVar18 + -8) = 0x14935e7f3;
              FVar11 = FNameEntryId::FromValidEName((EName)local_900);
              if (uVar12 != *(uint *)CONCAT44(extraout_var,FVar11.Value)) {
                uVar12 = *(ulonglong *)(lVar3 + 0x18);
                *(undefined8 *)(puVar18 + -8) = 0x14935e810;
                FVar11 = FNameEntryId::FromValidEName((EName)local_8fc);
                if (uVar12 != *(uint *)CONCAT44(extraout_var_00,FVar11.Value)) goto LAB_14935e825;
              }
              pFVar16 = local_928;
              local_8e8 = (double)*(float *)param_3;
              local_8e0 = (double)*(float *)((longlong)param_3 + 4);
              local_8d8 = (double)*(float *)((longlong)param_3 + 8);
              if (local_928->ArrayDim < 1) {
                *(int *)(puVar18 + 0x28) = local_928->ArrayDim;
                *(undefined4 *)(puVar18 + 0x20) = 0;
                *(undefined8 *)(puVar18 + -8) = 0x14935ea75;
                bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
                ;
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              if (puVar19 == (uchar *)0x0) {
                *(undefined8 *)(puVar18 + -8) = 0x14935eaa4;
                bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L"");
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              _Dst = (double *)(puVar19 + pFVar16->Offset_Internal);
              if (_Dst != &local_8e8) {
                if (((uint)(int)local_928->PropertyFlags >> 0x1e & 1) == 0) {
                  pdVar20 = &local_8e8;
LAB_14935eaeb:
                  pFVar16 = local_928;
                  iVar15 = local_928->ArrayDim;
                  pcVar4 = *(code **)(local_928->_padding_ + 0xf0);
                  *(undefined8 *)(puVar18 + -8) = 0x14935eafb;
                  (*pcVar4)(pFVar16,_Dst,pdVar20,iVar15);
                }
                else {
                  iVar15 = local_928->ElementSize;
                  iVar1 = local_928->ArrayDim;
                  *(undefined8 *)(puVar18 + -8) = 0x14935eae0;
                  memcpy(_Dst,&local_8e8,(longlong)iVar15 * (longlong)iVar1);
                }
              }
            }
            else {
LAB_14935e825:
              if (local_res20[0] != local_928->ElementSize) {
                local_8c0 = &local_908;
                local_8b8 = &local_918;
                local_8b0 = local_res20;
                local_8a8 = &local_928;
                *(undefined8 *)(puVar18 + -8) = 0x14935e859;
                bVar8 = `InvokeSetterFunction'::__l30::<lambda_1>::operator()(&local_8c0);
                if (!bVar8) {
                  *(undefined8 *)(puVar18 + -8) = 0x14935eb70;
                  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
                  goto LAB_14935eb41;
                }
              }
              pFVar16 = local_928;
              if (local_928->ArrayDim < 1) {
                *(int *)(puVar18 + 0x28) = local_928->ArrayDim;
                *(undefined4 *)(puVar18 + 0x20) = 0;
                *(undefined8 *)(puVar18 + -8) = 0x14935e898;
                bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
                ;
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              if (puVar19 == (uchar *)0x0) {
                *(undefined8 *)(puVar18 + -8) = 0x14935e8c7;
                bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L"");
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              _Dst = (double *)(puVar19 + pFVar16->Offset_Internal);
              if (_Dst != (double *)param_3) {
                pdVar20 = (double *)param_3;
                if (((uint)(int)local_928->PropertyFlags >> 0x1e & 1) == 0) goto LAB_14935eaeb;
                iVar15 = local_928->ElementSize;
                iVar1 = local_928->ArrayDim;
                *(undefined8 *)(puVar18 + -8) = 0x14935e906;
                memcpy(_Dst,param_3,(longlong)iVar15 * (longlong)iVar1);
              }
            }
          }
          bVar8 = false;
          *(undefined8 *)(puVar18 + -8) = 0x14935eb0a;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
          param_5 = local_8f0;
          uVar10 = local_920[0];
        }
        pFVar16 = local_928->PropertyLinkNext;
      } while (pFVar16 != (FProperty *)0x0);
      local_928 = (FProperty *)0x0;
    }
  }
  pUVar7 = local_908;
  pUVar6 = local_918;
  pcVar4 = *(code **)(*(longlong *)local_908 + 0x260);
  *(undefined8 *)(puVar18 + -8) = 0x14935eb41;
  (*pcVar4)(pUVar7,pUVar6,puVar19);
LAB_14935eb41:
  *(undefined8 *)(puVar18 + -8) = 0x14935eb50;
  return;
}

// MarkAndRenameMaterialForGarbage @ 14935f5c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
NiagaraRendererPropertiesPrivate::MarkAndRenameMaterialForGarbage
          (UMaterialInstanceConstant *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FUObjectItem *pFVar5;
  uint uVar6;
  
  if (param_1 != (UMaterialInstanceConstant *)0x0) {
    pUVar4 = GetTransientPackage();
    pFVar5 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    if ((((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_MirroredGarbage);
    pFVar5 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    do {
      lVar1 = (pFVar5->field0_0x0).FlagsAndRefCount;
      uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar6 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar5 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar3 = lVar1 == (pFVar5->field0_0x0).FlagsAndRefCount;
      if (bVar3) {
        (pFVar5->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
      }
      UNLOCK();
    } while (!bVar3);
    pFVar5 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar5,Async);
    (**(code **)(param_1->_padding_ + 0x170))(param_1,0,pUVar4,0x34);
  }
  return;
}

// SetGNiagaraDeviceProfile @ 14936a2d0

void __cdecl SetGNiagaraDeviceProfile(UDeviceProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UDeviceProfile *pUVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  UDeviceProfile *local_res10;
  FString local_18;
  
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDeviceProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&GNiagaraPlatformOverride.WeakPtr,(FObjectPtr)&local_res10);
  if (GNiagaraBackupQualityLevel == -1) {
    GNiagaraBackupQualityLevel = GNiagaraQualityLevel;
  }
  pUVar4 = (UDeviceProfile *)FWeakObjectPtr::Get(&GNiagaraPlatformOverride.WeakPtr);
  pwVar5 = L"";
  if ((pUVar4 == (UDeviceProfile *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("OverrideDP",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                         ,0x46a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  for (uVar3 = FNiagaraPlatformSet::GetActiveQualityMaskForDeviceProfile(pUVar4);
      (uVar3 != 0 && ((uVar3 & 1) == 0)); uVar3 = (int)uVar3 >> 1) {
  }
  FString::PrintfImpl(&local_18,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (GDeviceProfilesIni.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)GDeviceProfilesIni.Data.AllocatorInstance;
  }
  UE::ConfigUtilities::OnSetCVarFromIniEntry
            (pwVar5,NiagaraQualityLevelName,(wchar_t *)FVar6.Data,0xff000000,false,false,(FName)0x0)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetVariableByType @ 14936b6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SetVariableByType(FNiagaraVariable *param_1,FNiagaraDataSet *param_2,int param_3)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *pFVar6;
  FNiagaraDataSetReaderInt32<int> *pFVar7;
  FNiagaraDataSetReaderInt32<FNiagaraBool> *pFVar8;
  TQuat<float> *_Src;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *this;
  FNiagaraDataSetReaderFloat<FLinearColor> *this_00;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> *this_01;
  float local_res8;
  float local_res20;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> local_168;
  FNiagaraDataSetAccessorFloat<FNiagaraPosition> local_160;
  TVector<float> local_158;
  FNiagaraPosition local_14c;
  FNiagaraDataSetReaderInt32<int> local_140;
  FNiagaraDataSetReaderInt32<FNiagaraBool> local_130;
  TVector4<float> local_118;
  FLinearColor local_108;
  TQuat<float> local_f8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_e8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_c8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> local_a8;
  FNiagaraDataSetReaderFloat<FLinearColor> local_80;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> local_58;
  
  pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                     ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr;
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
      (pFVar6->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
     (pFVar6->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
    SetValueWithAccessor<float>(param_1,param_2,param_3);
    return;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0) &&
      (pFVar6->UnderlyingType == FNiagaraTypeDefinition::IntDef.UnderlyingType)) &&
     (pFVar6->Flags == FNiagaraTypeDefinition::IntDef.Flags)) {
    pFVar7 = FNiagaraDataSetAccessorInt32<int>::CreateReader
                       (&local_140,param_2,(FName)param_1->_padding_);
    if (((pFVar7->bIsValid == false) || (pFVar7->NumInstances < param_3)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("bIsValid && Index <= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                           ,0x17f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res8 = *(float *)(pFVar7->ComponentData[0] + (longlong)param_3 * 4);
    pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
    if ((iVar5 != 4) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FNiagaraVariable::AllocateData(param_1);
    _Src = (TQuat<float> *)&local_res8;
    goto LAB_14936bbb3;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) &&
      (pFVar6->UnderlyingType == FNiagaraTypeDefinition::BoolDef.UnderlyingType)) &&
     (pFVar6->Flags == FNiagaraTypeDefinition::BoolDef.Flags)) {
    pFVar8 = FNiagaraDataSetAccessorInt32<FNiagaraBool>::CreateReader
                       (&local_130,param_2,(FName)param_1->_padding_);
    if (((pFVar8->bIsValid == false) || (pFVar8->NumInstances < param_3)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("bIsValid && Index <= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                           ,0x17f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res20 = *(float *)(pFVar8->ComponentData[0] + (longlong)param_3 * 4);
    pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
    if ((iVar5 != 4) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FNiagaraVariable::AllocateData(param_1);
    _Src = (TQuat<float> *)&local_res20;
    goto LAB_14936bbb3;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
      (pFVar6->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
     (pFVar6->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)) {
    SetValueWithAccessor<UE::Math::TVector2<float>_>(param_1,param_2,param_3);
    return;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
      (pFVar6->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
     (pFVar6->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
    FVar2 = (FName)param_1->_padding_;
    local_168.bIsFloat = true;
    local_168.ComponentIndex = -1;
    if (((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("CompiledData.Get() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x169,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
              (&local_168,(param_2->CompiledData).StructPtr,FVar2);
    FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::GetReader(&local_168,&local_e8,param_2)
    ;
    _Src = (TQuat<float> *)
           FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get(&local_e8,&local_158,param_3);
LAB_14936bb69:
    pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
    bVar4 = iVar5 == 0xc;
  }
  else if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
             FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
           (pFVar6->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
          (pFVar6->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) {
    this = FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
                     (&local_a8,param_2,(FName)param_1->_padding_);
    _Src = (TQuat<float> *)
           FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get(this,&local_118,param_3);
    pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
    bVar4 = iVar5 == 0x10;
  }
  else if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
             FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0) &&
           (pFVar6->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType)) &&
          (pFVar6->Flags == FNiagaraTypeDefinition::ColorDef.Flags)) {
    this_00 = FNiagaraDataSetAccessorFloat<FLinearColor>::CreateReader
                        (&local_80,param_2,(FName)param_1->_padding_);
    _Src = (TQuat<float> *)FNiagaraDataSetReaderFloat<FLinearColor>::Get(this_00,&local_108,param_3)
    ;
    pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
    bVar4 = iVar5 == 0x10;
  }
  else {
    if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr !=
          FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) ||
        (pFVar6->UnderlyingType != FNiagaraTypeDefinition::QuatDef.UnderlyingType)) ||
       (pFVar6->Flags != FNiagaraTypeDefinition::QuatDef.Flags)) {
      if ((TObjectPtr<UObject>_u_0)TVar1.DebugPtr !=
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) {
        return;
      }
      if (pFVar6->UnderlyingType != FNiagaraTypeDefinition::PositionDef.UnderlyingType) {
        return;
      }
      if (pFVar6->Flags != FNiagaraTypeDefinition::PositionDef.Flags) {
        return;
      }
      FVar2 = (FName)param_1->_padding_;
      local_160.bIsFloat = true;
      local_160.ComponentIndex = -1;
      if (((param_2->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("CompiledData.Get() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x169,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
                (&local_160,(param_2->CompiledData).StructPtr,FVar2);
      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader(&local_160,&local_c8,param_2);
      _Src = (TQuat<float> *)
             FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get(&local_c8,&local_14c,param_3);
      goto LAB_14936bb69;
    }
    this_01 = FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_>::CreateReader
                        (&local_58,param_2,(FName)param_1->_padding_);
    _Src = FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get(this_01,&local_f8,param_3);
    pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
    bVar4 = iVar5 == 0x10;
  }
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("sizeof(T) == TypeDefHandle->GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                         ,0x5db,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNiagaraVariable::AllocateData(param_1);
LAB_14936bbb3:
  memcpy((param_1->VarData).AllocatorInstance.Data,_Src,(longlong)(param_1->VarData).ArrayNum);
  return;
}

// Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister @ 149375270

UClass * __cdecl Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewGrid",
               &Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton,
               ANiagaraPreviewGrid::StaticRegisterNativesANiagaraPreviewGrid,0x310,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraPreviewGrid>,
               InternalVTableHelperCtorCaller<ANiagaraPreviewGrid>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister @ 149375330

UClass * __cdecl Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBaselineController_Basic",
               &Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton,
               UNiagaraBaselineController_Basic::
               StaticRegisterNativesUNiagaraBaselineController_Basic,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBaselineController_Basic>,
               InternalVTableHelperCtorCaller<UNiagaraBaselineController_Basic>,local_res8,
               UNiagaraBaselineController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister @ 1493753f0

UClass * __cdecl Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPrecompileContainer",
               &Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton,
               UNiagaraPrecompileContainer::StaticRegisterNativesUNiagaraPrecompileContainer,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPrecompileContainer>,
               InternalVTableHelperCtorCaller<UNiagaraPrecompileContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPrecompileContainer.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister @ 1493754a0

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamBase",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton,
               UNiagaraPreviewAxis_InterpParamBase::
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPreviewAxis_InterpParamBase>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamBase>,local_res8,
               UNiagaraPreviewAxis::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister @ 149375560

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamFloat",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton,
               UNiagaraPreviewAxis_InterpParamFloat::
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamFloat>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamFloat>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister @ 149375620

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamInt32",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton,
               UNiagaraPreviewAxis_InterpParamInt32::
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamInt32>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamInt32>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister @ 1493756e0

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamLinearColor",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton
               ,UNiagaraPreviewAxis_InterpParamLinearColor::
                StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraPreviewAxis_InterpParamLinearColor>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamLinearColor>,local_res8
               ,UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister @ 1493757a0

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector2D",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton,
               UNiagaraPreviewAxis_InterpParamVector2D::
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector2D>
               ,InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector2D>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister @ 149375860

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector4",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton,
               UNiagaraPreviewAxis_InterpParamVector4::
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4,0x80,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector4>
               ,InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector4>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister @ 149375920

UClass * __cdecl Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamVector",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton,
               UNiagaraPreviewAxis_InterpParamVector::
               StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis_InterpParamVector>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis_InterpParamVector>,local_res8,
               UNiagaraPreviewAxis_InterpParamBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraRendererProperties_NoRegister @ 1493759e0

UClass * __cdecl Z_Construct_UClass_UNiagaraRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton,
               UNiagaraRendererProperties::StaticRegisterNativesUNiagaraRendererProperties,0xa0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraRendererProperties>,local_res8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRendererProperties.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState @ 149375aa0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState @ 149375ae0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraPlatformSetState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraPlatformSetState.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraPlatformSetState.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency @ 149375b20

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision @ 149375b60

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraBoundParameter @ 149375ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraBoundParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraBoundParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraBoundParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraBoundParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraBoundParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraParameterStore @ 149375c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterStore.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraParameterStore.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterStore.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraParameterStore.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraParameters @ 149375ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameters.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameters.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo @ 149375d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetConflictInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetConflictInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetConflictInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetConflictInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect @ 149375da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetRedirect.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetRedirect.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetRedirect.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetRedirect.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters @ 149375e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters @ 149375ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererReadbackParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRendererReadbackParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRendererReadbackParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererReadbackParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRendererReadbackParameters.InnerSingleton;
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

// CachedCVarInfo'' @ 150414470

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraPlatformSet::CachedCVarInfo__(void)

{
  FNiagaraPlatformSet::CachedCVarInfo._72_4_ = 0;
  if (FNiagaraPlatformSet::CachedCVarInfo._64_8_ != 0) {
    FMemory::Free((void *)FNiagaraPlatformSet::CachedCVarInfo._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FNiagaraPlatformSet::CachedCVarInfo);
  return;
}

// CachedCVarInfoCritSec'' @ 1504144b0

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraPlatformSet::CachedCVarInfoCritSec__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504144b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FNiagaraPlatformSet::CachedCVarInfoCritSec);
  return;
}

// ChangedCVars'' @ 1504144d0

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraPlatformSet::ChangedCVars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
  if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CNiagaraRibbonForceIndex32'' @ 1504144f0

void __cdecl _dynamic_atexit_destructor_for__CNiagaraRibbonForceIndex32__(void)

{
  CNiagaraRibbonForceIndex32._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CNiagaraRibbonForceIndex32);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAllDeviceProfiles'' @ 150414510

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAllDeviceProfiles__(void)

{
  CVarAllowAllDeviceProfiles._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAllDeviceProfiles);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBaselineGenerationDelay'' @ 150414530

void __cdecl _dynamic_atexit_destructor_for__CVarBaselineGenerationDelay__(void)

{
  CVarBaselineGenerationDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBaselineGenerationDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNiagaraMeshRendering'' @ 150414550

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNiagaraMeshRendering__(void)

{
  CVarEnableNiagaraMeshRendering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNiagaraMeshRendering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNiagaraRibbonRendering'' @ 150414570

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNiagaraRibbonRendering__(void)

{
  CVarEnableNiagaraRibbonRendering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNiagaraRibbonRendering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGbRendererEnabled'' @ 150414590

void __cdecl
NiagaraRendererLightsPrivate::_dynamic_atexit_destructor_for__CVarGbRendererEnabled__(void)

{
  CVarGbRendererEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGbRendererEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraAllowRuntimeScalabilityChanges'' @ 1504145b0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraAllowRuntimeScalabilityChanges__(void)

{
  CVarNiagaraAllowRuntimeScalabilityChanges._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraAllowRuntimeScalabilityChanges);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraComponentRenderPoolInactiveTimeLimit'' @ 1504145d0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraComponentRenderPoolInactiveTimeLimit__(void)

{
  CVarNiagaraComponentRenderPoolInactiveTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraComponentRenderPoolInactiveTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraLegacyDeviceProfile'' @ 1504145f0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraLegacyDeviceProfile__(void)

{
  CVarNiagaraLegacyDeviceProfile._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraLegacyDeviceProfile);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraMaxQualityLevel'' @ 150414610

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraMaxQualityLevel__(void)

{
  CVarNiagaraMaxQualityLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraMaxQualityLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraMeshRendererCalcMeshUsedParticleCount'' @ 150414630

void __cdecl
_dynamic_atexit_destructor_for__CVarNiagaraMeshRendererCalcMeshUsedParticleCount__(void)

{
  CVarNiagaraMeshRendererCalcMeshUsedParticleCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraMeshRendererCalcMeshUsedParticleCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraMinQualityLevel'' @ 150414650

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraMinQualityLevel__(void)

{
  CVarNiagaraMinQualityLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraMinQualityLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraPerfReporting'' @ 150414670

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraPerfReporting__(void)

{
  CVarNiagaraPerfReporting._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraPerfReporting);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraQualityLevel'' @ 150414690

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraQualityLevel__(void)

{
  CVarNiagaraQualityLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraQualityLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraQualityLevelSync'' @ 1504146b0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraQualityLevelSync__(void)

{
  CVarNiagaraQualityLevelSync._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRadixSortThreshold'' @ 1504146d0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRadixSortThreshold__(void)

{
  CVarNiagaraRadixSortThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraRadixSortThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRegenerateBaselinesOnWorldChange'' @ 1504146f0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRegenerateBaselinesOnWorldChange__(void)

{
  CVarNiagaraRegenerateBaselinesOnWorldChange._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRegenerateBaselinesOnWorldChange);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonGpuAllocateMaxCount'' @ 150414710

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuAllocateMaxCount__(void)

{
  CVarNiagaraRibbonGpuAllocateMaxCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRibbonGpuAllocateMaxCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonGpuBufferAlign'' @ 150414730

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuBufferAlign__(void)

{
  CVarNiagaraRibbonGpuBufferAlign._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraRibbonGpuBufferAlign);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonGpuBufferCachePurgeCounter'' @ 150414750

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuBufferCachePurgeCounter__(void)

{
  CVarNiagaraRibbonGpuBufferCachePurgeCounter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRibbonGpuBufferCachePurgeCounter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonGpuEnabled'' @ 150414770

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuEnabled__(void)

{
  CVarNiagaraRibbonGpuEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraRibbonGpuEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonGpuInitMode'' @ 150414790

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonGpuInitMode__(void)

{
  CVarNiagaraRibbonGpuInitMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraRibbonGpuInitMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonMaxTessellation'' @ 1504147b0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonMaxTessellation__(void)

{
  CVarNiagaraRibbonMaxTessellation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraRibbonMaxTessellation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonMinSegmentLength'' @ 1504147d0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonMinSegmentLength__(void)

{
  CVarNiagaraRibbonMinSegmentLength._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraRibbonMinSegmentLength);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonShareGeneratedData'' @ 1504147f0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonShareGeneratedData__(void)

{
  CVarNiagaraRibbonShareGeneratedData._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRibbonShareGeneratedData);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonTessellationAngle'' @ 150414810

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonTessellationAngle__(void)

{
  CVarNiagaraRibbonTessellationAngle._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraRibbonTessellationAngle)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonTessellationEnabled'' @ 150414830

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonTessellationEnabled__(void)

{
  CVarNiagaraRibbonTessellationEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRibbonTessellationEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonTessellationMinDisplacementError'' @ 150414850

void __cdecl
_dynamic_atexit_destructor_for__CVarNiagaraRibbonTessellationMinDisplacementError__(void)

{
  CVarNiagaraRibbonTessellationMinDisplacementError._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRibbonTessellationMinDisplacementError);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRibbonTessellationScreenPercentage'' @ 150414870

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRibbonTessellationScreenPercentage__(void)

{
  CVarNiagaraRibbonTessellationScreenPercentage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraRibbonTessellationScreenPercentage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraWarnComponentRenderCount'' @ 150414890

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraWarnComponentRenderCount__(void)

{
  CVarNiagaraWarnComponentRenderCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraWarnComponentRenderCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheProjectedShadows'' @ 1504148b0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheProjectedShadows__(void)

{
  CVarPSOPrecacheProjectedShadows._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOPrecacheProjectedShadows);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPerfBaselineThreshold_Bad'' @ 1504148d0

void __cdecl _dynamic_atexit_destructor_for__CVarPerfBaselineThreshold_Bad__(void)

{
  CVarPerfBaselineThreshold_Bad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPerfBaselineThreshold_Bad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPerfBaselineThreshold_Poor'' @ 1504148f0

void __cdecl _dynamic_atexit_destructor_for__CVarPerfBaselineThreshold_Poor__(void)

{
  CVarPerfBaselineThreshold_Poor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPerfBaselineThreshold_Poor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPerfTestFrames'' @ 150414910

void __cdecl _dynamic_atexit_destructor_for__CVarPerfTestFrames__(void)

{
  CVarPerfTestFrames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPerfTestFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPruneEmittersOnCook'' @ 150414930

void __cdecl _dynamic_atexit_destructor_for__CVarPruneEmittersOnCook__(void)

{
  CVarPruneEmittersOnCook._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPruneEmittersOnCook);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingNiagaraMeshes'' @ 150414950

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingNiagaraMeshes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingNiagaraMeshes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingNiagaraRibbons'' @ 150414970

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingNiagaraRibbons__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingNiagaraRibbons);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingNiagaraRibbonsGPU'' @ 150414990

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingNiagaraRibbonsGPU__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingNiagaraRibbonsGPU);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRendererEnabled'' @ 1504149b0

void __cdecl NiagaraRendererDecalsLocal::_dynamic_atexit_destructor_for__CVarRendererEnabled__(void)

{
  CVarRendererEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRendererEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1504149d0

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

// `dynamic_atexit_destructor_for_'Desc'' @ 150414a00

void __cdecl
``FNiagaraGpuRibbonsDataManager::GenerateAllGPUData'::__l10::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414a20

void __cdecl
``FNiagaraRendererRibbons::InitializeViewIndexBuffersGPU'::__l10::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414a40

void __cdecl
``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l14::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414a60

void __cdecl
``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l23::<lambda_3>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414a80

void __cdecl
``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l29::<lambda_4>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414aa0

void __cdecl
``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l37::<lambda_5>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414ac0

void __cdecl
``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l48::<lambda_7>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150414ae0

void __cdecl
``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l54::<lambda_8>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150414ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'DummyByteAddressBuffer'' @ 150414b00

void __cdecl _dynamic_atexit_destructor_for__DummyByteAddressBuffer__(void)

{
  DummyByteAddressBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyByteAddressBufferSRV___00__6B_
  ;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyByteAddressBuffer);
  if (DummyByteAddressBuffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyByteAddressBuffer._56_8_);
  }
  if (DummyByteAddressBuffer._48_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyByteAddressBuffer._48_8_);
  }
  if (DummyByteAddressBuffer._32_8_ != 0) {
    FMemory::Free((void *)DummyByteAddressBuffer._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyByteAddressBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyFloat2Buffer'' @ 150414b70

void __cdecl _dynamic_atexit_destructor_for__DummyFloat2Buffer__(void)

{
  DummyFloat2Buffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyFloat2Buffer);
  if (DummyFloat2Buffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyFloat2Buffer._64_8_);
  }
  if (DummyFloat2Buffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyFloat2Buffer._56_8_);
  }
  if (DummyFloat2Buffer._40_8_ != 0) {
    FMemory::Free((void *)DummyFloat2Buffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyFloat2Buffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyFloat4Buffer'' @ 150414be0

void __cdecl _dynamic_atexit_destructor_for__DummyFloat4Buffer__(void)

{
  DummyFloat4Buffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyFloat4Buffer);
  if (DummyFloat4Buffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyFloat4Buffer._64_8_);
  }
  if (DummyFloat4Buffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyFloat4Buffer._56_8_);
  }
  if (DummyFloat4Buffer._40_8_ != 0) {
    FMemory::Free((void *)DummyFloat4Buffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyFloat4Buffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyFloatBuffer'' @ 150414c50

void __cdecl _dynamic_atexit_destructor_for__DummyFloatBuffer__(void)

{
  DummyFloatBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyFloatBuffer);
  if (DummyFloatBuffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyFloatBuffer._64_8_);
  }
  if (DummyFloatBuffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyFloatBuffer._56_8_);
  }
  if (DummyFloatBuffer._40_8_ != 0) {
    FMemory::Free((void *)DummyFloatBuffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyFloatBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyHalfBuffer'' @ 150414cc0

void __cdecl _dynamic_atexit_destructor_for__DummyHalfBuffer__(void)

{
  DummyHalfBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyHalfBuffer);
  if (DummyHalfBuffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyHalfBuffer._64_8_);
  }
  if (DummyHalfBuffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyHalfBuffer._56_8_);
  }
  if (DummyHalfBuffer._40_8_ != 0) {
    FMemory::Free((void *)DummyHalfBuffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyHalfBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyIntBuffer'' @ 150414d30

void __cdecl _dynamic_atexit_destructor_for__DummyIntBuffer__(void)

{
  DummyIntBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyIntBuffer);
  if (DummyIntBuffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyIntBuffer._64_8_);
  }
  if (DummyIntBuffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyIntBuffer._56_8_);
  }
  if (DummyIntBuffer._40_8_ != 0) {
    FMemory::Free((void *)DummyIntBuffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyIntBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyUInt2Buffer'' @ 150414da0

void __cdecl _dynamic_atexit_destructor_for__DummyUInt2Buffer__(void)

{
  DummyUInt2Buffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyUInt2Buffer);
  if (DummyUInt2Buffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyUInt2Buffer._64_8_);
  }
  if (DummyUInt2Buffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyUInt2Buffer._56_8_);
  }
  if (DummyUInt2Buffer._40_8_ != 0) {
    FMemory::Free((void *)DummyUInt2Buffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyUInt2Buffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyUInt4Buffer'' @ 150414e10

void __cdecl _dynamic_atexit_destructor_for__DummyUInt4Buffer__(void)

{
  DummyUInt4Buffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyUInt4Buffer);
  if (DummyUInt4Buffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyUInt4Buffer._64_8_);
  }
  if (DummyUInt4Buffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyUInt4Buffer._56_8_);
  }
  if (DummyUInt4Buffer._40_8_ != 0) {
    FMemory::Free((void *)DummyUInt4Buffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyUInt4Buffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyUIntBuffer'' @ 150414e80

void __cdecl _dynamic_atexit_destructor_for__DummyUIntBuffer__(void)

{
  DummyUIntBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyUIntBuffer);
  if (DummyUIntBuffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyUIntBuffer._64_8_);
  }
  if (DummyUIntBuffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyUIntBuffer._56_8_);
  }
  if (DummyUIntBuffer._40_8_ != 0) {
    FMemory::Free((void *)DummyUIntBuffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyUIntBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'DummyWhiteColorBuffer'' @ 150414ef0

void __cdecl _dynamic_atexit_destructor_for__DummyWhiteColorBuffer__(void)

{
  DummyWhiteColorBuffer._0_8_ = &___7__TGlobalResource_VFNiagaraEmptyBufferSRV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&DummyWhiteColorBuffer);
  if (DummyWhiteColorBuffer._64_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyWhiteColorBuffer._64_8_);
  }
  if (DummyWhiteColorBuffer._56_8_ != 0) {
    FRHIResource::Release((FRHIResource *)DummyWhiteColorBuffer._56_8_);
  }
  if (DummyWhiteColorBuffer._40_8_ != 0) {
    FMemory::Free((void *)DummyWhiteColorBuffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&DummyWhiteColorBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GCmdSetNiagaraPlatformOverride'' @ 150414f60

void __cdecl _dynamic_atexit_destructor_for__GCmdSetNiagaraPlatformOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCmdSetNiagaraPlatformOverride);
  return;
}

// `dynamic_atexit_destructor_for_'GCmdSetNiagaraQualityLevelOverride'' @ 150414f80

void __cdecl _dynamic_atexit_destructor_for__GCmdSetNiagaraQualityLevelOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCmdSetNiagaraQualityLevelOverride)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_NiagaraGPURibbons'' @ 150414fa0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_NiagaraGPURibbons__(void)

{
  GPUStat_NiagaraGPURibbons._104_4_ = 0;
  if (GPUStat_NiagaraGPURibbons._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_NiagaraGPURibbons._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_NiagaraGPURibbons.field_0x20);
  return;
}

// operator() @ 150541080

bool __thiscall `InvokeSetterFunction'::__l30::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3029866807604281541>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_38);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_48);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3029866807604281541>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150541182;
    }
  }
  bVar4 = false;
LAB_150541182:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

