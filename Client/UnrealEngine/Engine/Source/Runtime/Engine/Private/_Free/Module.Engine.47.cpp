// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 406

// CSVListener'' @ 141120690

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsListener_CSVProfiler::CSVListener__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsListener_CSVProfiler::CSVListener__);
  return;
}

// ComponentToPerfStats'' @ 1411206b0

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::ComponentToPerfStats__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::ComponentToPerfStats__);
  return;
}

// ComponentToPerfStatsGuard'' @ 1411206d0

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::ComponentToPerfStatsGuard__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FParticlePerfStatsManager::ComponentToPerfStatsGuard,4000);
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::ComponentToPerfStatsGuard__);
  return;
}

// DebugRenderListenerUsers'' @ 141120700

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::DebugRenderListenerUsers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::DebugRenderListenerUsers__);
  return;
}

// FreeComponentStatsPool'' @ 141120720

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::FreeComponentStatsPool__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::FreeComponentStatsPool__);
  return;
}

// FreeSystemStatsPool'' @ 141120740

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::FreeSystemStatsPool__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::FreeSystemStatsPool__);
  return;
}

// FreeWorldStatsPool'' @ 141120760

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::FreeWorldStatsPool__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::FreeWorldStatsPool__);
  return;
}

// Listeners'' @ 141120780

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::Listeners__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::Listeners__);
  return;
}

// OnSystemPreActivationChange'' @ 1411207a0

void __cdecl `dynamic_initializer_for_'UParticleSystemComponent::OnSystemPreActivationChange__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UParticleSystemComponent::OnSystemPreActivationChange__);
  return;
}

// ShaderTypeRegistration'' @ 1411207c0

void __cdecl `dynamic_initializer_for_'FParticleSortKeyGenCS::ShaderTypeRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderTypeRegistration *local_18 [2];
  
  bVar3 = FShaderTypeRegistration::AreShaderTypesInitialized();
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AreShaderTypesInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x63a,
                       L"Shader type was loaded too late, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier. This shader will not be compiled or function.  The module and shader will appear in the callstack of this assert."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = FShaderTypeRegistration::GetInstances();
  local_18[0] = &FParticleSortKeyGenCS::ShaderTypeRegistration;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FShaderTypeRegistration **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  atexit(`dynamic_atexit_destructor_for_'FParticleSortKeyGenCS::ShaderTypeRegistration__);
  return;
}

// SystemToPerfStats'' @ 1411208c0

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::SystemToPerfStats__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::SystemToPerfStats__);
  return;
}

// SystemToPerfStatsGuard'' @ 1411208e0

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::SystemToPerfStatsGuard__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FParticlePerfStatsManager::SystemToPerfStatsGuard,4000);
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::SystemToPerfStatsGuard__);
  return;
}

// WorldToPerfStats'' @ 141120910

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::WorldToPerfStats__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::WorldToPerfStats__);
  return;
}

// WorldToPerfStatsGuard'' @ 141120930

void __cdecl `dynamic_initializer_for_'FParticlePerfStatsManager::WorldToPerfStatsGuard__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FParticlePerfStatsManager::WorldToPerfStatsGuard,4000);
  atexit(`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::WorldToPerfStatsGuard__);
  return;
}

// `dynamic_initializer_for_'CPrio_ParticleAsyncTask'' @ 141120960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_ParticleAsyncTask__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_ParticleAsyncTask,L"TaskGraph.TaskPriorities.ParticleAsyncTask",
             L"Task and thread priority for FParticleAsyncTask.",HighThreadPriority,MainQueue,
             HighTaskPriority);
  atexit(_dynamic_atexit_destructor_for__CPrio_ParticleAsyncTask__);
  return;
}

// `dynamic_initializer_for_'CVarBatchParticleAsync'' @ 1411209b0

void __cdecl _dynamic_initializer_for__CVarBatchParticleAsync__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBatchParticleAsync,L"FX.BatchAsync",&GBatchParticleAsync,
             L"If 1, particle async tasks are batched because they often take less time than it takes to wake up a task thread. No effect on editor."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBatchParticleAsync__);
  return;
}

// `dynamic_initializer_for_'CVarBatchParticleAsyncBatchSize'' @ 141120a00

void __cdecl _dynamic_initializer_for__CVarBatchParticleAsyncBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBatchParticleAsyncBatchSize,L"FX.BatchAsyncBatchSize",
             &GBatchParticleAsyncBatchSize,
             L"When FX.BatchAsync = 1, controls the number of particle systems grouped together for threading."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBatchParticleAsyncBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarCascadePSOPrecachingTime'' @ 141120a50

void __cdecl _dynamic_initializer_for__CVarCascadePSOPrecachingTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCascadePSOPrecachingTime,L"r.PSOPrecache.CascadePrecachingTime",
             &GCascadePSOPrecachingTime,
             L"Controls when PSO precaching happens for Cascade systems:\n\t0: no precaching\n\t1: precaching at asset loading time (default)\n\t2: precaching at component loading time\n\t3: precaching at component proxy creation time"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCascadePSOPrecachingTime__);
  return;
}

// `dynamic_initializer_for_'CVarCascadeSetTemplateDenyList'' @ 141120aa0

void __cdecl CascadeLocal::_dynamic_initializer_for__CVarCascadeSetTemplateDenyList__(void)

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
    puVar1[3] = UpdateTemplateDenyList;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCascadeSetTemplateDenyList,L"fx.Cascade.SetTemplateDenyList",
             &TemplateDenyListString,
             L"Set the template deny List to use. (i.e. P_SystemA,P_SystemB)",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0x40
            );
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
  atexit(_dynamic_atexit_destructor_for__CVarCascadeSetTemplateDenyList__);
  return;
}

// `dynamic_initializer_for_'CVarDeferrPSCDeactivation'' @ 141120bf0

void __cdecl _dynamic_initializer_for__CVarDeferrPSCDeactivation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDeferrPSCDeactivation,L"fx.DeferrPSCDeactivation",&GbDeferrPSCDeactivation,
             L"If > 0, all deactivations on Particle System Components is deferred until next tick."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarDeferrPSCDeactivation__);
  return;
}

// `dynamic_initializer_for_'CVarDetailModeSink'' @ 141120c40

void __cdecl _dynamic_initializer_for__CVarDetailModeSink__(void)

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
    puVar3[3] = DetailModeSink;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  CVarDetailModeSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  CVarDetailModeSink.Command = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  CVarDetailModeSink.Handle.Handle.ID = (FDelegateHandle)0;
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
  CVarDetailModeSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
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
  atexit(_dynamic_atexit_destructor_for__CVarDetailModeSink__);
  return;
}

// `dynamic_initializer_for_'CVarFXDetailedCSVMemoryStats'' @ 141120dd0

void __cdecl _dynamic_initializer_for__CVarFXDetailedCSVMemoryStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFXDetailedCSVMemoryStats,L"fx.DetailedCSVStats.MemoryMode",
             &GFXDetailedCSVMemoryMode,
             L"Gathers approximate memory information depending on the mode.\n0 = Disabled (default).\n1 = Component Approximate Size (low perf impact).\n2 = Asset Size + Component Approximate Size (low perf impact).\n3 = Asset Size + Component Resource Size (high performance impact)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFXDetailedCSVMemoryStats__);
  return;
}

// `dynamic_initializer_for_'CVarFXEarlySchedule'' @ 141120e20

void __cdecl _dynamic_initializer_for__CVarFXEarlySchedule__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFXEarlySchedule,L"FX.EarlyScheduleAsync",local_res8,
             L"If 1, particle system components that can run async will be scheduled earlier in the frame"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFXEarlySchedule__);
  return;
}

// `dynamic_initializer_for_'CVarFXLWCTileRecache'' @ 141120e70

void __cdecl _dynamic_initializer_for__CVarFXLWCTileRecache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFXLWCTileRecache,L"fx.LWCTileRecache",&GFXLWCTileRecache,
             L"When we cross this number of LWC tiles from where we started the FX we need to recache the LWC tile to avoid artifacts.\nWhen this occurs the system may need to reset, cull particles too far away, or do some additional processing to handle it.\nSetting this value to 0 will remove this behavior but could introduce rendering & simulation artifacts.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFXLWCTileRecache__);
  return;
}

// `dynamic_initializer_for_'CVarFXSkipZeroDeltaTime'' @ 141120ec0

void __cdecl _dynamic_initializer_for__CVarFXSkipZeroDeltaTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFXSkipZeroDeltaTime,L"fx.Cascade.SkipZeroDeltaTime",&GFXSkipZeroDeltaTime,
             L"When enabled a delta tick time of nearly 0.0 will cause us to skip the component update.\nThis fixes issue like PSA_Velocity aligned sprites, but could cause issues with things that rely on accurate velocities (i.e. TSR)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFXSkipZeroDeltaTime__);
  return;
}

// `dynamic_initializer_for_'CVarFxCascadeUseVelocityForMotionBlur'' @ 141120f10

void __cdecl _dynamic_initializer_for__CVarFxCascadeUseVelocityForMotionBlur__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarFxCascadeUseVelocityForMotionBlur,L"fx.Cascade.UseVelocityForMotionBlur",
             local_res8,
             L"When enabled velocity will be used to approximate velocity for vertex factories that support this."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFxCascadeUseVelocityForMotionBlur__);
  return;
}

// `dynamic_initializer_for_'CVarMinDetailModeForMeshParticleMotionBlur'' @ 141120f60

void __cdecl _dynamic_initializer_for__CVarMinDetailModeForMeshParticleMotionBlur__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMinDetailModeForMeshParticleMotionBlur,
             L"r.MeshParticle.MinDetailModeForMotionBlur",local_res8,
             L"Sets the minimum detail mode before mesh particles emit motion blur (Low  = 0, Med = 1, High = 2, Max = 3). Set to -1 to disable mesh particles motion blur entirely. Defaults to -1."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinDetailModeForMeshParticleMotionBlur__);
  return;
}

// `dynamic_initializer_for_'CVarParticleDefaultLightInverseExposureBlend'' @ 141120fb0

void __cdecl _dynamic_initializer_for__CVarParticleDefaultLightInverseExposureBlend__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarParticleDefaultLightInverseExposureBlend,
             L"fx.ParticleDefaultLightInverseExposureBlend",local_res8,
             L"Blend Factor used to blend between Intensity and Intensity / Exposure.",0);
  atexit(_dynamic_atexit_destructor_for__CVarParticleDefaultLightInverseExposureBlend__);
  return;
}

// `dynamic_initializer_for_'CVarParticleLODBias'' @ 141121000

void __cdecl _dynamic_initializer_for__CVarParticleLODBias__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarParticleLODBias,L"r.ParticleLODBias",&GParticleLODBias,
             L"LOD bias for particle systems, default is 0",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarParticleLODBias__);
  return;
}

// `dynamic_initializer_for_'CVarParticleLightQuality'' @ 141121050

void __cdecl _dynamic_initializer_for__CVarParticleLightQuality__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarParticleLightQuality,L"r.ParticleLightQuality",local_res8,
             L"0: No lights. 1:Only simple lights. 2:Simple+HQ lights",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarParticleLightQuality__);
  return;
}

// `dynamic_initializer_for_'CVarParticlePerfStatsEnabled'' @ 1411210a0

void __cdecl _dynamic_initializer_for__CVarParticlePerfStatsEnabled__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarParticlePerfStatsEnabled,L"fx.ParticlePerfStats.Enabled",&GbLocalStatsEnabled,
             L"Used to control if stat gathering is enabled or not.\n",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarParticlePerfStatsEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPruneEmittersOnCookByDetailMode'' @ 1411211e0

void __cdecl _dynamic_initializer_for__CVarPruneEmittersOnCookByDetailMode__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarPruneEmittersOnCookByDetailMode,L"fx.PruneEmittersOnCookByDetailMode",local_res8,
             L"Whether to eliminate all emitters that don\'t match the detail mode.\nThis will only work if scalability settings affecting detail mode can not be changed at runtime (depends on platform).\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPruneEmittersOnCookByDetailMode__);
  return;
}

// `dynamic_initializer_for_'CVarWriteDetailedCSVStats'' @ 141121230

void __cdecl _dynamic_initializer_for__CVarWriteDetailedCSVStats__(void)

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
    puVar1[3] = OnDetailedCSVStatsEnabledChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarWriteDetailedCSVStats,L"fx.DetailedCSVStats",false,
             L"If true, we write detailed partilce stats to the CSV profiler.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0x20
            );
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
  atexit(_dynamic_atexit_destructor_for__CVarWriteDetailedCSVStats__);
  return;
}

// `dynamic_initializer_for_'FParticleKeyGenParametersMetadataRegistration'' @ 141121370

void __cdecl _dynamic_initializer_for__FParticleKeyGenParametersMetadataRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderParametersMetadataRegistration *local_18 [2];
  
  pTVar5 = FShaderParametersMetadataRegistration::GetInstances();
  local_18[0] = &FParticleKeyGenParametersMetadataRegistration;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FShaderParametersMetadataRegistration **)
   ((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  atexit(_dynamic_atexit_destructor_for__FParticleKeyGenParametersMetadataRegistration__);
  return;
}

// `dynamic_initializer_for_'FXAsyncBatcher'' @ 141121440

void __cdecl _dynamic_initializer_for__FXAsyncBatcher__(void)

{
  atexit(_dynamic_atexit_destructor_for__FXAsyncBatcher__);
  return;
}

// `dynamic_initializer_for_'GDumpPSCStateCommand'' @ 141121460

void __cdecl _dynamic_initializer_for__GDumpPSCStateCommand__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = <lambda_27>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GDumpPSCStateCommand,L"fx.DumpPSCTickStateInfo",
             L"Dumps state information for all current Particle System Components.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__GDumpPSCStateCommand__);
  return;
}

// `dynamic_initializer_for_'GParticleEightTexCoordVertexBuffer'' @ 1411215a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GParticleEightTexCoordVertexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&GParticleEightTexCoordVertexBuffer);
  GParticleEightTexCoordVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFParticleEightTexCoordVertexBuffer___00__6B_;
  if (GParticleEightTexCoordVertexBuffer._24_4_ != -1) {
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
  GParticleEightTexCoordVertexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GParticleEightTexCoordVertexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GParticleEightTexCoordVertexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GParticleEightTexCoordVertexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GParticleEightTexCoordVertexBuffer,(FRenderCommandPipe *)0x0
                   );
  atexit(_dynamic_atexit_destructor_for__GParticleEightTexCoordVertexBuffer__);
  return;
}

// `dynamic_initializer_for_'GParticleIndexBuffer'' @ 141121660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GParticleIndexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&GParticleIndexBuffer);
  GParticleIndexBuffer._0_8_ = &___7__TGlobalResource_VFParticleIndexBuffer___00__6B_;
  if (GParticleIndexBuffer._24_4_ != -1) {
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
  GParticleIndexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GParticleIndexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GParticleIndexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GParticleIndexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GParticleIndexBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GParticleIndexBuffer__);
  return;
}

// `dynamic_initializer_for_'GParticlePerfStatsRunTest'' @ 141121720

void __cdecl _dynamic_initializer_for__GParticlePerfStatsRunTest__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
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
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"fx.ParticlePerfStats.RunTest",
                      L"Runs for a number of frames then logs out the results.\nArg0 = NumFrames.\nArg1 = Gather World Stats (default 0).\nArg2 = Gather System Stats (default 1).\nArg3 = Gather Component Stats (default 0)."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GParticlePerfStatsRunTest,pIVar5);
  GParticlePerfStatsRunTest._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GParticlePerfStatsRunTest__);
  return;
}

// `dynamic_initializer_for_'GParticleScratchVertexBuffer'' @ 1411218b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GParticleScratchVertexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&GParticleScratchVertexBuffer);
  GParticleScratchVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFParticleScratchVertexBuffer___00__6B_;
  GParticleScratchVertexBuffer._40_8_ = 0;
  if (GParticleScratchVertexBuffer._24_4_ != -1) {
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
  GParticleScratchVertexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GParticleScratchVertexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GParticleScratchVertexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GParticleScratchVertexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GParticleScratchVertexBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GParticleScratchVertexBuffer__);
  return;
}

// `dynamic_initializer_for_'GParticleTexCoordVertexBuffer'' @ 141121980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GParticleTexCoordVertexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&GParticleTexCoordVertexBuffer);
  GParticleTexCoordVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFParticleTexCoordVertexBuffer___00__6B_;
  if (GParticleTexCoordVertexBuffer._24_4_ != -1) {
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
  GParticleTexCoordVertexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GParticleTexCoordVertexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GParticleTexCoordVertexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GParticleTexCoordVertexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GParticleTexCoordVertexBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GParticleTexCoordVertexBuffer__);
  return;
}

// `dynamic_initializer_for_'GRegisterParticleSystemCustomVersion'' @ 141121a40

void __cdecl _dynamic_initializer_for__GRegisterParticleSystemCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FParticleSystemCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,3,L"ParticleSystemVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterParticleSystemCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GResetAllParticleComponentsCmd'' @ 141121a80

void __cdecl _dynamic_initializer_for__GResetAllParticleComponentsCmd__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = ResetAllParticleComponents;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GResetAllParticleComponentsCmd,L"FX.RestartAll",
             L"Restarts all particle system components",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__GResetAllParticleComponentsCmd__);
  return;
}

// `dynamic_initializer_for_'GSixTriangleParticleIndexBuffer'' @ 141121bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GSixTriangleParticleIndexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&GSixTriangleParticleIndexBuffer);
  GSixTriangleParticleIndexBuffer._0_8_ =
       &___7__TGlobalResource_VFSixTriangleParticleIndexBuffer___00__6B_;
  if (GSixTriangleParticleIndexBuffer._24_4_ != -1) {
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
  GSixTriangleParticleIndexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GSixTriangleParticleIndexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GSixTriangleParticleIndexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GSixTriangleParticleIndexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GSixTriangleParticleIndexBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GSixTriangleParticleIndexBuffer__);
  return;
}

// `dynamic_initializer_for_'GbLocalStatsEnabled'' @ 141121c80

void __cdecl _dynamic_initializer_for__GbLocalStatsEnabled__(void)

{
  GbLocalStatsEnabled = (bool)FParticlePerfStats::bStatsEnabled;
  return;
}

// `dynamic_initializer_for_'LogParticles'' @ 141121ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogParticles__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogParticles,L"LogParticles",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogParticles__);
  return;
}

// `dynamic_initializer_for_'ParticleCollisionIgnoreInvisibleTime'' @ 141121ce0

void __cdecl _dynamic_initializer_for__ParticleCollisionIgnoreInvisibleTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&ParticleCollisionIgnoreInvisibleTime,L"fx.ParticleCollisionIgnoreInvisibleTime",
             &GParticleCollisionIgnoreInvisibleTime,
             L"The time a particle system component has to be invisible for to have all collision ignored. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__ParticleCollisionIgnoreInvisibleTime__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleCollisionTime'' @ 141121d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleCollisionTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleCollisionTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleCollisionTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleCollisionTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleCollisionTime,*pFVar1,
               L"Particle Collision Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleManagerUpdateData'' @ 141121dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleManagerUpdateData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleManagerUpdateData ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleManagerUpdateData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleManagerUpdateData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleManagerUpdateData,*pFVar1,
               L"Update Particle Data","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSkelMeshSurfTime'' @ 141121e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleSkelMeshSurfTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSkelMeshSurfTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSkelMeshSurfTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSkelMeshSurfTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleSkelMeshSurfTime,*pFVar1,
               L"Particle SkelMeshSurf Time GT","STATGROUP_Particles","STATCAT_Advanced",
               L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleStats_TickGT'' @ 141121ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleStats_TickGT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleStats_TickGT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleStats_TickGT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleStats_TickGT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleStats_TickGT,*pFVar1,
               L"Particle Stats Tick [GT]","STATGROUP_ParticleStats","STATCAT_Advanced",
               L"ParticleStats",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleStats_TickRT'' @ 141121f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleStats_TickRT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleStats_TickRT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleStats_TickRT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleStats_TickRT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleStats_TickRT,*pFVar1,
               L"Particle Stats Tick [RT]","STATGROUP_ParticleStats","STATCAT_Advanced",
               L"ParticleStats",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_CreateDynamicData'' @ 141122000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_CreateDynamicData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_CreateDynamicData ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateDynamicData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_CreateDynamicData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleSystemComponent_CreateDynamicData,
               *pFVar1,L"ParticleComponent CreateDynamicData GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Capture'' @ 141122090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Capture__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Capture ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateDynamicData_Capture>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_CreateDynamicData_Capture");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Capture,*pFVar1,
               L"ParticleComponent CreateDynamicData Capture GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Gather'' @ 141122120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Gather__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Gather ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateDynamicData_Gather>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_CreateDynamicData_Gather");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Gather,*pFVar1,
               L"ParticleComponent CreateDynamicData Gather GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture'' @ 1411221b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture")
    ;
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_GatherCapture,*pFVar1,
               L"ParticleComponent CreateDynamicData GatherCapture GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Replay'' @ 141122240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Replay__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Replay ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateDynamicData_Replay>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_CreateDynamicData_Replay");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_CreateDynamicData_Replay,*pFVar1,
               L"ParticleComponent CreateDynamicData Replay GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_CreateRenderState_Concurrent'' @ 1411222d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_CreateRenderState_Concurrent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_CreateRenderState_Concurrent ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_CreateRenderState_Concurrent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_CreateRenderState_Concurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_CreateRenderState_Concurrent,*pFVar1,
               L"ParticleComponent CreateRenderState Concurrent GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent'' @ 141122360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_DestroyRenderState_Concurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_DestroyRenderState_Concurrent,*pFVar1,
               L"ParticleComponent DestroyRenderState Concurrent GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_GetDynamicData'' @ 1411223f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_GetDynamicData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_GetDynamicData ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_GetDynamicData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_GetDynamicData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleSystemComponent_GetDynamicData,
               *pFVar1,L"ParticleComponent GetDynamicData GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_GetDynamicData_Selected'' @ 141122480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_GetDynamicData_Selected__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_GetDynamicData_Selected ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_GetDynamicData_Selected>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_GetDynamicData_Selected");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_GetDynamicData_Selected,*pFVar1,
               L"ParticleComponent GetDynamicData Selected GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_InitParticles'' @ 141122510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_InitParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_InitParticles ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_InitParticles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_InitParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleSystemComponent_InitParticles,
               *pFVar1,L"ParticleComponent InitParticles GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent'' @ 1411225a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent>)
      0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent"
                         );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_SendRenderDynamicData_Concurrent,*pFVar1,
               L"ParticleComponent SendRenderDynamicData GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent'' @ 141122630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_SendRenderTransform_Concurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ParticleSystemComponent_SendRenderTransform_Concurrent,*pFVar1,
               L"ParticleComponent SendRenderTransform Concurrent GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleSystemComponent_UpdateDynamicData'' @ 1411226c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ParticleSystemComponent_UpdateDynamicData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleSystemComponent_UpdateDynamicData ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSystemComponent_UpdateDynamicData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleSystemComponent_UpdateDynamicData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleSystemComponent_UpdateDynamicData,
               *pFVar1,L"ParticleComponent UpdateDynamicData GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesOverview_GT'' @ 141122750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesOverview_GT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesOverview_GT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesOverview_GT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT,*pFVar1,L"GT Total",
               "STATGROUP_ParticlesOverview","STATCAT_Advanced",L"ParticlesOverview",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesOverview_GT_CNC'' @ 1411227e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesOverview_GT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_GT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesOverview_GT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_GT_CNC,*pFVar1,
               L"GT Concurrent Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
               L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesOverview_RT'' @ 141122870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesOverview_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesOverview_RT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesOverview_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_RT,*pFVar1,L"RT Total",
               "STATGROUP_ParticlesOverview","STATCAT_Advanced",L"ParticlesOverview",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesOverview_RT_CNC'' @ 141122900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesOverview_RT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesOverview_RT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesOverview_RT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_RT_CNC,*pFVar1,
               L"RT Concurrent Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
               L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UParticleSystemComponent_CheckForReset'' @ 141122990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UParticleSystemComponent_CheckForReset__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UParticleSystemComponent_CheckForReset ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_CheckForReset>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UParticleSystemComponent_CheckForReset");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleSystemComponent_CheckForReset,
               *pFVar1,L"ParticleComponent CheckForReset GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UParticleSystemComponent_LOD'' @ 141122a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UParticleSystemComponent_LOD__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UParticleSystemComponent_LOD ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_LOD>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UParticleSystemComponent_LOD");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleSystemComponent_LOD,*pFVar1,
               L"ParticleComponent LOD GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UParticleSystemComponent_Marshall'' @ 141122ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UParticleSystemComponent_Marshall__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UParticleSystemComponent_Marshall ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_Marshall>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UParticleSystemComponent_Marshall");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleSystemComponent_Marshall,*pFVar1,
               L"PSys Comp Marshall Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UParticleSystemComponent_OrientZAxisTowardCamera'' @ 141122b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_UParticleSystemComponent_OrientZAxisTowardCamera__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UParticleSystemComponent_OrientZAxisTowardCamera ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_OrientZAxisTowardCamera>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UParticleSystemComponent_OrientZAxisTowardCamera");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_UParticleSystemComponent_OrientZAxisTowardCamera,*pFVar1,
               L"ParticleComponent OrientZAxisTowardCamera GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UParticleSystemComponent_QueueAsync'' @ 141122bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UParticleSystemComponent_QueueAsync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UParticleSystemComponent_QueueAsync ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueAsync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UParticleSystemComponent_QueueAsync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleSystemComponent_QueueAsync,
               *pFVar1,L"ParticleComponent QueueAsyncGT","STATGROUP_Particles","STATCAT_Advanced",
               L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UParticleSystemComponent_QueueFinalize'' @ 141122c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UParticleSystemComponent_QueueFinalize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UParticleSystemComponent_QueueFinalize ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueFinalize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UParticleSystemComponent_QueueFinalize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleSystemComponent_QueueFinalize,
               *pFVar1,L"ParticleComponent QueueFinalize GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UParticleSystemComponent_QueueTasks'' @ 141122cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UParticleSystemComponent_QueueTasks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UParticleSystemComponent_QueueTasks ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueTasks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UParticleSystemComponent_QueueTasks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleSystemComponent_QueueTasks,
               *pFVar1,L"ParticleComponent QueueTasksGT","STATGROUP_Particles","STATCAT_Advanced",
               L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize'' @ 141122d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UParticleSystemComponent_WaitForAsyncAndFinalize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_UParticleSystemComponent_WaitForAsyncAndFinalize,*pFVar1,
               L"ParticleComponent WaitForAsyncAndFinalize GT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TemplateDenyList'' @ 141122e10

void __cdecl CascadeLocal::_dynamic_initializer_for__TemplateDenyList__(void)

{
  atexit(_dynamic_atexit_destructor_for__TemplateDenyList__);
  return;
}

// `dynamic_initializer_for_'TemplateDenyListString'' @ 141122e30

void __cdecl CascadeLocal::_dynamic_initializer_for__TemplateDenyListString__(void)

{
  atexit(_dynamic_atexit_destructor_for__TemplateDenyListString__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h__Script_Engine_3712909059'' @ 141122e50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h__Script_Engine_3712909059__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h__Script_Engine_1194943925'' @ 141122e90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h__Script_Engine_1194943925__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h__Script_Engine_1586560344'' @ 141122ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h__Script_Engine_1586560344__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Particles'' @ 141122f30

void __cdecl _dynamic_initializer_for___GCsvCategory_Particles__(void)

{
  FString::operator=(&_GCsvCategory_Particles.Name,L"Particles");
  _GCsvCategory_Particles.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Particles.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Particles__);
  return;
}

// Z_Construct_UClass_UFXSystemAsset @ 14814c710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFXSystemAsset(void)

{
  if (Z_Registration_Info_UClass_UFXSystemAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFXSystemAsset.OuterSingleton,
               &Z_Construct_UClass_UFXSystemAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFXSystemAsset.OuterSingleton;
}

// Z_Construct_UClass_UParticleSystem @ 14814c750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UParticleSystem(void)

{
  if (Z_Registration_Info_UClass_UParticleSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UParticleSystem.OuterSingleton,
               &Z_Construct_UClass_UParticleSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UParticleSystem.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod @ 14814c790

UEnum * __cdecl Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod(void)

{
  if (Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EParticleSystemUpdateMode @ 14814c7d0

UEnum * __cdecl Z_Construct_UEnum_Engine_EParticleSystemUpdateMode(void)

{
  if (Z_Registration_Info_UEnum_EParticleSystemUpdateMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EParticleSystemUpdateMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EParticleSystemUpdateMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ParticleSystemLODMethod @ 14814c810

UEnum * __cdecl Z_Construct_UEnum_Engine_ParticleSystemLODMethod(void)

{
  if (Z_Registration_Info_UEnum_ParticleSystemLODMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ParticleSystemLODMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ParticleSystemLODMethod.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLODSoloTrack @ 14814c850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLODSoloTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLODSoloTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLODSoloTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FLODSoloTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLODSoloTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLODSoloTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNamedEmitterMaterial @ 14814c8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamedEmitterMaterial(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamedEmitterMaterial.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamedEmitterMaterial.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamedEmitterMaterial.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FNamedEmitterMaterial.InnerSingleton;
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

// Z_Construct_UScriptStruct_FParticleSystemLOD @ 14814c950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FParticleSystemLOD(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FParticleSystemLOD.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FParticleSystemLOD.InnerSingleton,
               &Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FParticleSystemLOD.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FParticleSystemLOD.InnerSingleton;
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

// EParticleSystemUpdateMode_StaticEnum @ 14814c9d0

UEnum * __cdecl EParticleSystemUpdateMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemUpdateMode,(UObject *)pUVar1,
                       L"EParticleSystemUpdateMode");
  }
  return Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton;
}

// ParticleSystemLODMethod_StaticEnum @ 14814ca10

UEnum * __cdecl ParticleSystemLODMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ParticleSystemLODMethod,(UObject *)pUVar1,
                       L"ParticleSystemLODMethod");
  }
  return Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton;
}

// EParticleSystemOcclusionBoundsMethod_StaticEnum @ 14814ce30

UEnum * __cdecl EParticleSystemOcclusionBoundsMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod,
                       (UObject *)pUVar1,L"EParticleSystemOcclusionBoundsMethod");
  }
  return Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14814ce70

void * __thiscall
FParticleTexCoordVertexBuffer::_scalar_deleting_destructor_
          (FParticleTexCoordVertexBuffer *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14814d2d0

void * __thiscall
FParticleEightTexCoordVertexBuffer::_scalar_deleting_destructor_
          (FParticleEightTexCoordVertexBuffer *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewStructOps @ 14814d5a0

void * __cdecl Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FParticleSystemLOD,&UE::CoreUObject::Private::Construct<FParticleSystemLOD>,&UE::CoreUObject::Private::ConstructForTests<FParticleSystemLOD>,&UE::CoreUObject::Private::Destruct<FParticleSystemLOD>,&UE::CoreUObject::Private::Copy<FParticleSystemLOD>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14814d5e0

void * __thiscall
FParticleIndexBuffer::_scalar_deleting_destructor_(FParticleIndexBuffer *this,uint param_1)

{
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14814d950

void * __thiscall
FSixTriangleParticleIndexBuffer::_scalar_deleting_destructor_
          (FSixTriangleParticleIndexBuffer *this,uint param_1)

{
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14814db10

void * __thiscall
FParticleScratchVertexBuffer::_scalar_deleting_destructor_
          (FParticleScratchVertexBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->VertexBufferSRV_A32B32G32R32F).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14814db60

void * __cdecl Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLODSoloTrack,&UE::CoreUObject::Private::Construct<FLODSoloTrack>,&UE::CoreUObject::Private::ConstructForTests<FLODSoloTrack>,&UE::CoreUObject::Private::Destruct<FLODSoloTrack>,&UE::CoreUObject::Private::Copy<FLODSoloTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14814dba0

void * __thiscall
TGlobalResource<FParticleTexCoordVertexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FParticleTexCoordVertexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleTexCoordVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14814dbf0

void * __thiscall
TGlobalResource<FParticleEightTexCoordVertexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FParticleEightTexCoordVertexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleEightTexCoordVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_UFXSystemAsset_NoRegister @ 14814dc40

UClass * __cdecl Z_Construct_UClass_UFXSystemAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FXSystemAsset",
               &Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton,
               UFXSystemAsset::StaticRegisterNativesUFXSystemAsset,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFXSystemAsset>,InternalVTableHelperCtorCaller<UFXSystemAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFXSystemAsset.InnerSingleton;
}

// Z_Construct_UClass_UParticleSystem_NoRegister @ 14814dcf0

UClass * __cdecl Z_Construct_UClass_UParticleSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSystem",
               &Z_Registration_Info_UClass_UParticleSystem.InnerSingleton,
               UParticleSystem::StaticRegisterNativesUParticleSystem,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleSystem>,
               InternalVTableHelperCtorCaller<UParticleSystem>,local_res8,
               UFXSystemAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSystem.InnerSingleton;
}

// NewStructOps @ 14814de30

void * __cdecl Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamedEmitterMaterial,&UE::CoreUObject::Private::Construct<FNamedEmitterMaterial>,&UE::CoreUObject::Private::ConstructForTests<FNamedEmitterMaterial>,&UE::CoreUObject::Private::Destruct<FNamedEmitterMaterial>,&UE::CoreUObject::Private::Copy<FNamedEmitterMaterial>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14814df60

void * __thiscall
TGlobalResource<FParticleIndexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FParticleIndexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_UFXSystemComponent @ 14814dfb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFXSystemComponent(void)

{
  if (Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton,
               &Z_Construct_UClass_UFXSystemComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14814dff0

void * __thiscall
TGlobalResource<FSixTriangleParticleIndexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FSixTriangleParticleIndexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSixTriangleParticleIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_UParticleSystemComponent @ 14814e040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UParticleSystemComponent(void)

{
  if (Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton,
               &Z_Construct_UClass_UParticleSystemComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EParticleSysParamType @ 14814e080

UEnum * __cdecl Z_Construct_UEnum_Engine_EParticleSysParamType(void)

{
  if (Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature @ 14814e0c0

UFunction * __cdecl Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FParticleSysParam @ 14814e100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FParticleSysParam(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FParticleSysParam.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FParticleSysParam.InnerSingleton,
               &Z_Construct_UScriptStruct_FParticleSysParam_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FParticleSysParam.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FParticleSysParam.InnerSingleton;
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

// EParticleSysParamType_StaticEnum @ 14814e180

UEnum * __cdecl EParticleSysParamType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSysParamType,(UObject *)pUVar1,
                       L"EParticleSysParamType");
  }
  return Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14814e1c0

void * __thiscall
TGlobalResource<FParticleScratchVertexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FParticleScratchVertexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleScratchVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// ParticleReplayState_StaticEnum @ 14814e220

UEnum * __cdecl ParticleReplayState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ParticleReplayState,(UObject *)pUVar1,
                       L"ParticleReplayState");
  }
  return Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton;
}

// EParticleEventType_StaticEnum @ 14814e260

UEnum * __cdecl EParticleEventType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EParticleEventType,(UObject *)pUVar1,
                       L"EParticleEventType");
  }
  return Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14814e2a0

void __cdecl
Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UParticleSystem_ContainsEmitterType @ 14814e2b0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystem_ContainsEmitterType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOrientZAxisTowardCamera_SetBit @ 14814e2f0

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf4) = *(byte *)((longlong)param_1 + 0xf4) | 1;
  return;
}

// NewProp_bUseFixedRelativeBoundingBox_SetBit @ 14814e300

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf4) = *(byte *)((longlong)param_1 + 0xf4) | 2;
  return;
}

// NewProp_bShouldResetPeakCounts_SetBit @ 14814e310

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf4) = *(byte *)((longlong)param_1 + 0xf4) | 4;
  return;
}

// NewProp_bHasPhysics_SetBit @ 14814e320

void __cdecl Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf4) = *(byte *)((longlong)param_1 + 0xf4) | 8;
  return;
}

// NewProp_bUseRealtimeThumbnail_SetBit @ 14814e330

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf4) = *(byte *)((longlong)param_1 + 0xf4) | 0x10;
  return;
}

// NewStructOps @ 14814e340

void * __cdecl Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FParticleSysParam,&UE::CoreUObject::Private::Construct<FParticleSysParam>,&UE::CoreUObject::Private::ConstructForTests<FParticleSysParam>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ThumbnailImageOutOfDate_SetBit @ 14814e380

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf4) = *(byte *)((longlong)param_1 + 0xf4) | 0x20;
  return;
}

// NewProp_bUseDelayRange_SetBit @ 14814e390

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf5) = *(byte *)((longlong)param_1 + 0xf5) | 1;
  return;
}

// NewProp_bAllowManagedTicking_SetBit @ 14814e3a0

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf5) = *(byte *)((longlong)param_1 + 0xf5) | 2;
  return;
}

// NewProp_bAutoDeactivate_SetBit @ 14814e3b0

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf5) = *(byte *)((longlong)param_1 + 0xf5) | 4;
  return;
}

// NewProp_bRegenerateLODDuplicate_SetBit @ 14814e3c0

void __cdecl
Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf5) = *(byte *)((longlong)param_1 + 0xf5) | 8;
  return;
}

// NewProp_bAutoDestroy_SetBit @ 14814e3d0

void __cdecl
Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  return;
}

// NewProp_bAutoActivate_SetBit @ 14814e3e0

void __cdecl
Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoActivate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  return;
}

// NewProp_bPreCullCheck_SetBit @ 14814e3f0

void __cdecl
Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bPreCullCheck_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// NewProp_bIsPlayerEffect_SetBit @ 14814e400

void __cdecl
Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bIsPlayerEffect_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6d) = 1;
  return;
}

// NewStructOps @ 14814e410

void * __cdecl Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFXSystemSpawnParameters,&UE::CoreUObject::Private::Construct<FFXSystemSpawnParameters>,&UE::CoreUObject::Private::ConstructForTests<FFXSystemSpawnParameters>,&UE::CoreUObject::Private::Destruct<FFXSystemSpawnParameters>,&UE::CoreUObject::Private::Copy<FFXSystemSpawnParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset @ 14814e450

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool @ 14814e490

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFXSystemComponent_SetActorParameter @ 14814e4d0

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetActorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters @ 14814e510

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Param_SetBit @ 14814e550

void __cdecl
Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter @ 14814e560

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFXSystemComponent_SetColorParameter @ 14814e5a0

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetColorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewEnableState_SetBit @ 14814e5e0

void __cdecl
Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable @ 14814e5f0

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter @ 14814e630

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFXSystemComponent_SetIntParameter @ 14814e670

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetIntParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoManage_SetBit @ 14814e6b0

void __cdecl
Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::
NewProp_bAutoManage_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment @ 14814e6c0

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter @ 14814e700

UFunction * __cdecl Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_BeginTrails @ 14814e740

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_BeginTrails(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance @ 14814e780

UFunction * __cdecl
Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_EndTrails @ 14814e7c0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_EndTrails(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14814ea80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent @ 14814eab0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14814eb00

void __cdecl
Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14814eb10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_TimedTest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FParticlePerfStatsListener_TimedTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint @ 14814eb50

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14814eb90

void __cdecl
Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint @ 14814ed90

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14814edd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14814ee00

void __cdecl
Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength @ 14814ef20

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14814f0a0

void __cdecl
Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent @ 14814f0b0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14814f0f0

void __cdecl
Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint @ 14814f100

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14814f140

void __cdecl
Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UClass_UParticleLODLevel @ 14814f150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UParticleLODLevel(void)

{
  if (Z_Registration_Info_UClass_UParticleLODLevel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UParticleLODLevel.OuterSingleton,
               &Z_Construct_UClass_UParticleLODLevel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UParticleLODLevel.OuterSingleton;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength @ 14814f190

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14814f1d0

void __cdecl
Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bEnabled_SetBit @ 14814f1e0

void __cdecl Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 1;
  return;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent @ 14814f1f0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ConvertedModules_SetBit @ 14814f230

void __cdecl
Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xb0) = *(uint *)((longlong)param_1 + 0xb0) | 1;
  return;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial @ 14814f240

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles @ 14814f280

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams @ 14814f2c0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint @ 14814f300

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint @ 14814f340

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength @ 14814f380

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent @ 14814f3c0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint @ 14814f400

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength @ 14814f460

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent @ 14814f4a0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter @ 14814f4e0

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetTemplate @ 14814f520

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetTemplate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData @ 14814f560

UFunction * __cdecl Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bResetOnDetach_SetBit @ 14814f5a0

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x579) = *(byte *)((longlong)param_1 + 0x579) | 1;
  return;
}

// NewProp_bUpdateOnDedicatedServer_SetBit @ 14814f5b0

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x579) = *(byte *)((longlong)param_1 + 0x579) | 2;
  return;
}

// NewProp_bAllowRecycling_SetBit @ 14814f5c0

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x579) = *(byte *)((longlong)param_1 + 0x579) | 0x10;
  return;
}

// NewProp_bAutoManageAttachment_SetBit @ 14814f5d0

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x579) = *(byte *)((longlong)param_1 + 0x579) | 0x20;
  return;
}

// NewProp_bAutoAttachWeldSimulatedBodies_SetBit @ 14814f5e0

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x579) = *(byte *)((longlong)param_1 + 0x579) | 0x40;
  return;
}

// NewProp_bWarmingUp_SetBit @ 14814f5f0

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x57a) = *(byte *)((longlong)param_1 + 0x57a) | 4;
  return;
}

// NewProp_bOverrideLODMethod_SetBit @ 14814f600

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x57a) = *(byte *)((longlong)param_1 + 0x57a) | 8;
  return;
}

// NewProp_bSkipUpdateDynamicDataDuringTick_SetBit @ 14814f610

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x57a) = *(byte *)((longlong)param_1 + 0x57a) | 0x10;
  return;
}

// NewProp_bOldPositionValid_SetBit @ 14814f620

void __cdecl
Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f8) = 1;
  return;
}

// Z_Construct_UClass_UParticleSystemComponent_NoRegister @ 14814f630

UClass * __cdecl Z_Construct_UClass_UParticleSystemComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSystemComponent",
               &Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton,
               UParticleSystemComponent::StaticRegisterNativesUParticleSystemComponent,0x890,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleSystemComponent>,
               InternalVTableHelperCtorCaller<UParticleSystemComponent>,local_res8,
               UFXSystemComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSystemComponent.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14814fae0

void __cdecl <lambda_27>::<lambda_invoker_cdecl>(void)

{
  <lambda_27> local_res8 [32];
  
  operator()(local_res8);
  return;
}

// operator<<<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_> @ 14814fd00

FArchive * __cdecl
operator<<<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_> *param_2)

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
  FParticleEmitterReplayFrame *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
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
      DestructItems<FParticleEmitterReplayFrame,int>
                ((FParticleEmitterReplayFrame *)(param_2->AllocatorInstance).Data,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
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
              operator<<(param_1,(FParticleEmitterReplayFrame *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FParticleEmitterReplayFrame *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FParticleEmitterReplayFrame,int>(pFVar10,1);
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

// operator<<<FParticleSystemReplayFrame,TSizedDefaultAllocator<32>_> @ 14814fd10

FArchive * __cdecl
operator<<<FParticleSystemReplayFrame,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FParticleSystemReplayFrame,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  TArray<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_> *pTVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar9 = 0;
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
      DestructItems<FParticleSystemReplayFrame,int>
                ((FParticleSystemReplayFrame *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
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
              pTVar11 = (TArray<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_> *)
                        ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10);
              if ((param_1->field_0x28 & 1) != 0) {
                (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                pTVar11->ArrayNum = 0;
                pTVar11->ArrayMax = 0;
              }
              TArrayPrivateFriend::
              Serialize<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_>(param_1,pTVar11);
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<FParticleSystemReplayFrame,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar11 = (TArray<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_> *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FParticleSystemReplayFrame,int>(pTVar11,1);
              if ((param_1->field_0x28 & 1) != 0) {
                (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                pTVar11->ArrayNum = 0;
                pTVar11->ArrayMax = 0;
              }
              TArrayPrivateFriend::
              Serialize<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_>(param_1,pTVar11);
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)auStackX_8[0]);
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

// operator<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo>_TTuple<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo> @ 14814fd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTuple<UWorld_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCWorldInfo> *
__thiscall
TKeyInitializer<UWorld_*_const_&>::
operator<UWorld_*,_<lambda_27>::operator()_::__l2::FPSCWorldInfo>_TTuple<UWorld_*,_<lambda_27>::operator()_::__l2::FPSCWorldInfo>
          (TKeyInitializer<UWorld_*_const_&> *this,
          TTuple<UWorld_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCWorldInfo>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(UWorld **)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>
            (&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>,FDefaultSetAllocator>
              *)local_98);
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = (undefined4)local_48;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = local_48._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x60 = (undefined4)uStack_40;
  *(undefined4 *)&__return_storage_ptr__->field_0x64 = uStack_40._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x68 = (undefined4)local_38;
  *(undefined4 *)&__return_storage_ptr__->field_0x6c = local_38._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = (undefined4)uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x74 = uStack_30._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = local_28;
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(local_98,0,local_98._8_4_);
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// CastChecked<UParticleEmitter,UObject> @ 148150150

UParticleEmitter * __cdecl CastChecked<UParticleEmitter,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UParticleEmitter>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleEmitter_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UParticleEmitter *)param_1;
  }
  pFVar3 = GetTypeName<UParticleEmitter>(&local_28);
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

// CastChecked<UParticleModule,UObject> @ 148150210

UParticleModule * __cdecl CastChecked<UParticleModule,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UParticleModule>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleModule_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UParticleModule *)param_1;
  }
  pFVar3 = GetTypeName<UParticleModule>(&local_28);
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

// CastChecked<UParticleModuleEventGenerator,UParticleModule> @ 1481502d0

UParticleModuleEventGenerator * __cdecl
CastChecked<UParticleModuleEventGenerator,UParticleModule>(UParticleModule *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UParticleModule *)0x0) {
    pFVar3 = GetTypeName<UParticleModuleEventGenerator>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UParticleModuleEventGenerator *)param_1;
  }
  pFVar3 = GetTypeName<UParticleModuleEventGenerator>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UParticleModule>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UParticleModuleEventReceiverBase,UParticleModule> @ 148150390

UParticleModuleEventReceiverBase * __cdecl
CastChecked<UParticleModuleEventReceiverBase,UParticleModule>(UParticleModule *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UParticleModule *)0x0) {
    pFVar3 = GetTypeName<UParticleModuleEventReceiverBase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UParticleModuleEventReceiverBase *)param_1;
  }
  pFVar3 = GetTypeName<UParticleModuleEventReceiverBase>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UParticleModule>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UParticleModuleLocationBoneSocket,UParticleModule> @ 148150450

UParticleModuleLocationBoneSocket * __cdecl
CastChecked<UParticleModuleLocationBoneSocket,UParticleModule>
          (TObjectPtr<UParticleModule> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UParticleModuleLocationBoneSocket *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UParticleModule *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UParticleModuleLocationBoneSocket>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UParticleModuleLocationBoneSocket *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UParticleModuleLocationBoneSocket *)(param_1->field0_0x0).DebugPtr,
       pUVar4 == (UParticleModuleLocationBoneSocket *)0x0)) {
      pFVar3 = GetTypeName<UParticleModuleLocationBoneSocket>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UParticleModule>(&local_18,(param_1->field0_0x0).DebugPtr)
      ;
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UParticleModuleOrbit,UParticleModule> @ 148150510

UParticleModuleOrbit * __cdecl
CastChecked<UParticleModuleOrbit,UParticleModule>(UParticleModule *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UParticleModule *)0x0) {
    pFVar3 = GetTypeName<UParticleModuleOrbit>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UParticleModuleOrbit *)param_1;
  }
  pFVar3 = GetTypeName<UParticleModuleOrbit>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UParticleModule>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UParticleModuleRequired,UParticleModule> @ 1481505d0

UParticleModuleRequired * __cdecl
CastChecked<UParticleModuleRequired,UParticleModule>(UParticleModule *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UParticleModule *)0x0) {
    pFVar3 = GetTypeName<UParticleModuleRequired>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleModuleRequired_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UParticleModuleRequired *)param_1;
  }
  pFVar3 = GetTypeName<UParticleModuleRequired>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UParticleModule>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UParticleModuleSpawn,UParticleModule> @ 148150690

UParticleModuleSpawn * __cdecl
CastChecked<UParticleModuleSpawn,UParticleModule>(UParticleModule *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UParticleModule *)0x0) {
    pFVar3 = GetTypeName<UParticleModuleSpawn>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UParticleModuleSpawn *)param_1;
  }
  pFVar3 = GetTypeName<UParticleModuleSpawn>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UParticleModule>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UParticleModuleSpawnBase,UParticleModule> @ 148150750

UParticleModuleSpawnBase * __cdecl
CastChecked<UParticleModuleSpawnBase,UParticleModule>(UParticleModule *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UParticleModule *)0x0) {
    pFVar3 = GetTypeName<UParticleModuleSpawnBase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UParticleModuleSpawnBase *)param_1;
  }
  pFVar3 = GetTypeName<UParticleModuleSpawnBase>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UParticleModule>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UParticleModuleTypeDataBase,UParticleModule> @ 148150810

UParticleModuleTypeDataBase * __cdecl
CastChecked<UParticleModuleTypeDataBase,UParticleModule>(UParticleModule *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UParticleModule *)0x0) {
    pFVar3 = GetTypeName<UParticleModuleTypeDataBase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UParticleModuleTypeDataBase *)param_1;
  }
  pFVar3 = GetTypeName<UParticleModuleTypeDataBase>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UParticleModule>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FParticleSysParam,FParticleSysParam,int> @ 1481508d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ConstructItems<FParticleSysParam,FParticleSysParam,int>
          (void *param_1,FParticleSysParam *param_2,int param_3)

{
  bool *pbVar1;
  TObjectPtr<AActor> TVar2;
  TObjectPtr<UMaterialInterface> TVar3;
  undefined8 uVar4;
  double dVar5;
  float *pfVar6;
  float *pfVar7;
  
  if (param_3 != 0) {
    pfVar6 = (float *)((longlong)param_1 + 0xc);
    pfVar7 = &param_2->Scalar;
    do {
      *(undefined8 *)(pfVar6 + -3) =
           *(undefined8 *)((longlong)pfVar6 + (longlong)param_2 + (-0xc - (longlong)param_1));
      *(uchar *)(pfVar6 + -1) = ((TEnumAsByte<EParticleSysParamType> *)(pfVar7 + -1))->Value;
      *pfVar6 = *pfVar7;
      pfVar6[1] = pfVar7[1];
      uVar4 = *(undefined8 *)(pfVar7 + 5);
      *(double *)(pfVar6 + 3) = (((TVector<double> *)(pfVar7 + 3))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar6 + 5) = uVar4;
      *(undefined8 *)(pfVar6 + 7) = *(undefined8 *)(pfVar7 + 7);
      uVar4 = *(undefined8 *)(pfVar7 + 0xb);
      *(double *)(pfVar6 + 9) = (((TVector<double> *)(pfVar7 + 9))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar6 + 0xb) = uVar4;
      *(undefined8 *)(pfVar6 + 0xd) = *(undefined8 *)(pfVar7 + 0xd);
      *(FColor_u_0 *)(pfVar6 + 0xf) = *(FColor_u_0 *)(pfVar7 + 0xf);
      TVar2.field0_0x0 =
           (TObjectPtr<AActor>_u_0)((TObjectPtr<AActor>_u_0 *)(pfVar7 + 0x11))->DebugPtr;
      ((TObjectPtr<AActor>_u_0 *)(pfVar6 + 0x11))->DebugPtr = (AActor *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      TVar3.field0_0x0 =
           (TObjectPtr<UMaterialInterface>_u_0)
           ((TObjectPtr<UMaterialInterface>_u_0 *)(pfVar7 + 0x13))->DebugPtr;
      ((TObjectPtr<UMaterialInterface>_u_0 *)(pfVar6 + 0x13))->DebugPtr =
           (UMaterialInterface *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      dVar5 = *(double *)(pfVar7 + 0x17);
      *(double *)(pfVar6 + 0x15) =
           (((TTransform<double> *)(pfVar7 + 0x15))->Rotation).XY.m128d_f64[0];
      *(double *)(pfVar6 + 0x17) = dVar5;
      dVar5 = *(double *)(pfVar7 + 0x1b);
      *(double *)(pfVar6 + 0x19) = ((__m128d *)(pfVar7 + 0x19))->m128d_f64[0];
      *(double *)(pfVar6 + 0x1b) = dVar5;
      dVar5 = *(double *)(pfVar7 + 0x1f);
      *(double *)(pfVar6 + 0x1d) = (((VectorRegister4Double *)(pfVar7 + 0x1d))->XY).m128d_f64[0];
      *(double *)(pfVar6 + 0x1f) = dVar5;
      dVar5 = *(double *)(pfVar7 + 0x23);
      *(double *)(pfVar6 + 0x21) = ((__m128d *)(pfVar7 + 0x21))->m128d_f64[0];
      *(double *)(pfVar6 + 0x23) = dVar5;
      dVar5 = *(double *)(pfVar7 + 0x27);
      *(double *)(pfVar6 + 0x25) = (((VectorRegister4Double *)(pfVar7 + 0x25))->XY).m128d_f64[0];
      *(double *)(pfVar6 + 0x27) = dVar5;
      dVar5 = *(double *)(pfVar7 + 0x2b);
      *(double *)(pfVar6 + 0x29) = ((__m128d *)(pfVar7 + 0x29))->m128d_f64[0];
      *(double *)(pfVar6 + 0x2b) = dVar5;
      uVar4 = *(undefined8 *)(pfVar7 + 0x2f);
      *(double *)(pfVar6 + 0x2d) = (((TVector<double> *)(pfVar7 + 0x2d))->field0_0x0)._s_0.X;
      *(undefined8 *)(pfVar6 + 0x2f) = uVar4;
      *(undefined8 *)(pfVar6 + 0x31) = *(undefined8 *)(pfVar7 + 0x31);
      pbVar1 = (bool *)(pfVar7 + 0x33);
      pfVar7 = pfVar7 + 0x38;
      *(bool *)(pfVar6 + 0x33) = *pbVar1;
      pfVar6 = pfVar6 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FParticlePerfStatsListener,1>,TSharedPtr<FParticlePerfStatsListener,1>,int> @ 148150a20

void __cdecl
ConstructItems<TSharedPtr<FParticlePerfStatsListener,1>,TSharedPtr<FParticlePerfStatsListener,1>,int>
          (void *param_1,TSharedPtr<FParticlePerfStatsListener,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FParticlePerfStatsListener **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DefaultConstructItems<`<lambda_27>::operator()'::__l2::FPSCInfo,int> @ 148150a60

void __cdecl
DefaultConstructItems<_<lambda_27>::operator()_::__l2::FPSCInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 9;
    do {
      *(undefined8 *)(lVar1 + -9) = 0xdeadbeefdeadbeef;
      *(undefined2 *)(lVar1 + -1) = 0;
      *(undefined1 *)(lVar1 + 1) = 0;
      *(undefined4 *)(lVar1 + 3) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FParticleEmitterReplayFrame,int> @ 148150aa0

void __cdecl DefaultConstructItems<FParticleEmitterReplayFrame,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FParticleSystemReplayFrame,int> @ 148150ad0

void __cdecl DefaultConstructItems<FParticleSystemReplayFrame,int>(void *param_1,int param_2)

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

// DestructItems<FLODSoloTrack,int> @ 148150b00

void __cdecl DestructItems<FLODSoloTrack,int>(FLODSoloTrack *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SoloEnableSetting).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FParticleCurvePair,int> @ 148150b40

void __cdecl DestructItems<FParticleCurvePair,int>(FParticleCurvePair *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->CurveName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FParticleEventBurstData,int> @ 148150b80

void __cdecl
DestructItems<FParticleEventBurstData,int>(FParticleEventBurstData *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FParticleEventCollideData,int> @ 148150bc0

void __cdecl
DestructItems<FParticleEventCollideData,int>(FParticleEventCollideData *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FParticleEventDeathData,int> @ 148150c00

void __cdecl
DestructItems<FParticleEventDeathData,int>(FParticleEventDeathData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FParticleEventKismetData,int> @ 148150c40

void __cdecl
DestructItems<FParticleEventKismetData,int>(FParticleEventKismetData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FParticleEventSpawnData,int> @ 148150c80

void __cdecl
DestructItems<FParticleEventSpawnData,int>(FParticleEventSpawnData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FParticlePerfStatsListener,1>,int> @ 148150cc0

void __cdecl
DestructItems<TSharedPtr<FParticlePerfStatsListener,1>,int>
          (TSharedPtr<FParticlePerfStatsListener,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,int> @ 148150d00

void __cdecl
DestructItems<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,int>
          (TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    operator_delete(param_1->Ptr,0xd0);
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FParticlePerfStatsManager::Tick'::__l5::TSTR_FParticlePerfStatsListenersRTTick250>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1481520e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FParticlePerfStatsManager::Tick_::__l5::TSTR_FParticlePerfStatsListenersRTTick250>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FParticlePerfStatsManager::Tick'::__l5::TSTR_FParticlePerfStatsListenersRTTick250>
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
      if (bVar8) goto LAB_148152231;
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
    goto LAB_148152425;
  }
LAB_148152231:
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
LAB_14815230f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14815230f;
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
LAB_148152425:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FParticlePerfStatsManager::RemoveListener'::__l2::TSTR_FRemoveParticlePerfStatsListenerCmd155>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148152460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FParticlePerfStatsManager::RemoveListener_::__l2::TSTR_FRemoveParticlePerfStatsListenerCmd155>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FParticlePerfStatsManager::RemoveListener'::__l2::TSTR_FRemoveParticlePerfStatsListenerCmd155>
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
      if (bVar8) goto LAB_1481525b1;
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
    goto LAB_1481527a5;
  }
LAB_1481525b1:
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
LAB_14815268f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14815268f;
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
LAB_1481527a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FAccumulatedParticlePerfStats::Reset'::__l7::TSTR_FResetAccumulatedParticlePerfMaxRT758>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1481527e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FAccumulatedParticlePerfStats::Reset_::__l7::TSTR_FResetAccumulatedParticlePerfMaxRT758>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FAccumulatedParticlePerfStats::Reset'::__l7::TSTR_FResetAccumulatedParticlePerfMaxRT758>
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
      if (bVar8) goto LAB_148152931;
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
    goto LAB_148152b25;
  }
LAB_148152931:
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
LAB_148152a0f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148152a0f;
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
LAB_148152b25:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FParticlePerfStats::Reset'::__l14::TSTR_FResetParticlePerfStats610>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148152b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FParticlePerfStats::Reset_::__l14::TSTR_FResetParticlePerfStats610>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FParticlePerfStats::Reset'::__l14::TSTR_FResetParticlePerfStats610>::
            Get();
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
      if (bVar8) goto LAB_148152cb1;
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
    goto LAB_148152ea5;
  }
LAB_148152cb1:
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
LAB_148152d8f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148152d8f;
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
LAB_148152ea5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UParticleSystemComponent::CreateDynamicData'::__l105::TSTR_UpdateMeshEmitterLODIndicesCmd1526>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148152ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UParticleSystemComponent::CreateDynamicData_::__l105::TSTR_UpdateMeshEmitterLODIndicesCmd1526>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UParticleSystemComponent::CreateDynamicData'::__l105::TSTR_UpdateMeshEmitterLODIndicesCmd1526>
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
      if (bVar8) goto LAB_148153031;
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
    goto LAB_148153225;
  }
LAB_148153031:
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
LAB_14815310f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14815310f;
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
LAB_148153225:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForAllComponentStats<`FParticlePerfStatsListener_GatherAll::Begin'::__l2::<lambda_3>_> @ 148153840

void __cdecl
FParticlePerfStatsManager::
ForAllComponentStats<_FParticlePerfStatsListener_GatherAll::Begin_::__l2::<lambda_3>_>
          (<lambda_3> param_1)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  byte bVar3;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> TVar4;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *pTVar5;
  bool bVar6;
  FAccumulatedParticlePerfStats *this;
  FAccumulatedParticlePerfStats *pFVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  TKeyInitializer<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_const_&> local_res18;
  int local_res20;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> local_a8;
  longlong local_a0;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&ComponentToPerfStatsGuard);
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  uVar11 = ComponentToPerfStats._40_4_;
  uStack_7c = 0;
  if (uVar11 != 0) {
    puVar13 = (uint *)&ComponentToPerfStats.field_0x10;
    if (ComponentToPerfStats._32_8_ != 0) {
      puVar13 = (uint *)ComponentToPerfStats._32_8_;
    }
    uVar14 = *puVar13;
    while (uVar14 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      uStack_7c = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_90)
      goto LAB_1481538fd;
      uVar14 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar15 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uStack_7c = local_res20 + -1 + local_78;
    if ((int)uVar11 < (int)uStack_7c) {
      uStack_7c = uVar11;
    }
  }
LAB_1481538fd:
  bVar3 = ComponentToPerfStats._40_1_;
  iStack_70 = ComponentToPerfStats._8_4_ - ComponentToPerfStats._52_4_;
  uVar14 = uVar11 & 0xffffffe0;
  uVar15 = ComponentToPerfStats._40_8_ & 0xffffffff;
  local_98 = &ComponentToPerfStats;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  local_88 = 0x154c5eec0;
  TStack_60.CurrentBitIndex = uStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  local_68 = &ComponentToPerfStats;
  iVar10 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&ComponentToPerfStats.field_0x10;
  uStack_74 = uStack_7c;
  if (((int)uVar11 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = ComponentToPerfStats._40_4_;
  if (uVar11 != uVar12) {
    uVar15 = ComponentToPerfStats._40_8_ & 0xffffffff;
    lVar8 = 0x154c5eec0;
    if (ComponentToPerfStats._32_8_ != 0) {
      lVar8 = ComponentToPerfStats._32_8_;
    }
    uVar11 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_148153a10;
      uVar11 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar12 < (int)uVar14) {
      uVar14 = uVar12;
    }
    uVar15 = (ulonglong)uVar14;
  }
LAB_148153a10:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar8 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == (int)uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&ComponentToPerfStats.field_0x10
        )) && (pTVar5 == &ComponentToPerfStats)) break;
    lVar9 = *(longlong *)pTVar5;
    this = ::operator_new(0x2b8);
    pFVar7 = (FAccumulatedParticlePerfStats *)0x0;
    if (this != (FAccumulatedParticlePerfStats *)0x0) {
      pFVar7 = FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(this);
    }
    local_a0 = lVar9 + lVar8 * 0x18;
    local_a8.Ptr = pFVar7;
    TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&(param_1.__this)->AccumulatedComponentStats,&local_res18,(bool *)&local_a0);
    TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>::
    operator=((TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
               *)(*(longlong *)&(param_1.__this)->AccumulatedComponentStats +
                 ((longlong)(int)local_res18.Key * 3 + 1) * 8),&local_a8);
    TVar4.Ptr = local_a8.Ptr;
    if (local_a8.Ptr != (FAccumulatedParticlePerfStats *)0x0) {
      FVar1 = ((local_a8.Ptr)->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      ::operator_delete(TVar4.Ptr,0x2b8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000148153b51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&ComponentToPerfStatsGuard);
  return;
}

// ForAllSystemStats<`FParticlePerfStatsListener_CSVProfiler::TickRT'::__l5::<lambda_1>_> @ 148153b60

void __cdecl
FParticlePerfStatsManager::
ForAllSystemStats<_FParticlePerfStatsListener_CSVProfiler::TickRT_::__l5::<lambda_1>_>
          (<lambda_1> param_1)

{
  FWeakObjectPtr *this;
  FName FVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  double dVar4;
  byte bVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  UObject *pUVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  iVar16 = 0;
  iVar18 = 0;
  uVar8 = 1;
  uVar15 = SystemToPerfStats._40_4_;
  uVar9 = 0;
  if (uVar15 != 0) {
    puVar19 = (uint *)&SystemToPerfStats.field_0x10;
    if (SystemToPerfStats._32_8_ != 0) {
      puVar19 = (uint *)SystemToPerfStats._32_8_;
    }
    uVar9 = *puVar19;
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar9 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_148153c1d;
      uVar9 = puVar19[lVar12 + 1];
    }
    uVar8 = -uVar9 & uVar9;
    uVar11 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar9 = iVar18 + -1 + local_res18;
    if ((int)uVar15 < (int)uVar9) {
      uVar9 = uVar15;
    }
  }
LAB_148153c1d:
  bVar5 = SystemToPerfStats._40_1_;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar16);
  TStack_70.CurrentBitIndex = uVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_70._28_4_ = uVar9;
  TStack_70.BaseBitIndex = iVar18;
  uStack_50 = CONCAT44(uStack_7c,SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10;
  uVar9 = uVar15;
  if ((int)uVar15 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = SystemToPerfStats._40_4_;
  }
  dVar6 = __real_412e848000000000;
  if (uVar15 != uVar9) {
    lVar12 = 0x154c5ee70;
    if (SystemToPerfStats._32_8_ != 0) {
      lVar12 = SystemToPerfStats._32_8_;
    }
    uVar15 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_148153d41;
      uVar15 = *(uint *)(lVar12 + 4 + lVar13 * 4);
    }
    uVar11 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_148153d41:
  while( true ) {
    if (SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_ != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar15) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10))
    break;
    this = (FWeakObjectPtr *)(SystemToPerfStats._0_8_ + (longlong)TStack_70.CurrentBitIndex * 0x18);
    pUVar10 = FWeakObjectPtr::Get(this);
    if (pUVar10 != (UObject *)0x0) {
      FVar1.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
      FVar1.Number = *(uint *)&pUVar10->field_0x1c;
      FParticlePerfStats::PopulateStatNames((FParticlePerfStats *)this[1],FVar1);
      FVar2 = this[1];
      uVar17 = *(longlong *)((longlong)FVar2 + 0x48) + *(longlong *)((longlong)FVar2 + 0x40);
      uVar11 = 0;
      if (*(ulonglong *)((longlong)FVar2 + 0x38) != 0) {
        uVar11 = uVar17 / *(ulonglong *)((longlong)FVar2 + 0x38);
      }
      dVar4 = (double)uVar11 * FGenericPlatformTime::SecondsPerCycle64;
      FCsvProfiler::RecordCustomStat
                ((FName *)((longlong)FVar2 + 0x80),_GCsvCategory_Particles.Index,
                 (float)((double)uVar17 * FGenericPlatformTime::SecondsPerCycle64 * dVar6),Set);
      FCsvProfiler::RecordCustomStat
                ((FName *)((longlong)this[1] + 0x88),_GCsvCategory_Particles.Index,
                 (float)(dVar4 * dVar6),Set);
      FVar2 = this[1];
      if (*(ulonglong *)((longlong)FVar2 + 0x50) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)((longlong)FVar2 + 0x58) / *(ulonglong *)((longlong)FVar2 + 0x50);
      }
      FCsvProfiler::RecordCustomStat
                ((FName *)((longlong)FVar2 + 0x90),_GCsvCategory_Particles.Index,
                 (float)*(ulonglong *)((longlong)FVar2 + 0x58),Set);
      FCsvProfiler::RecordCustomStat
                ((FName *)((longlong)this[1] + 0x98),_GCsvCategory_Particles.Index,(float)uVar11,Set
                );
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
                    /* WARNING: Could not recover jumptable at 0x000148153f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  return;
}

// ForAllSystemStats<`FParticlePerfStatsListener_CSVProfiler::Tick'::__l12::<lambda_1>_> @ 148153f40

void __cdecl
FParticlePerfStatsManager::
ForAllSystemStats<_FParticlePerfStatsListener_CSVProfiler::Tick_::__l12::<lambda_1>_>
          (<lambda_1> param_1)

{
  TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  FCsvProfiler **local_res8;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_res8 = param_1.CSVProfiler;
  EnterCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  iVar10 = 0;
  uVar5 = 1;
  iVar11 = 0;
  uVar12 = SystemToPerfStats._40_4_;
  uVar6 = 0;
  if (uVar12 != 0) {
    puVar13 = (uint *)&SystemToPerfStats.field_0x10;
    if (SystemToPerfStats._32_8_ != 0) {
      puVar13 = (uint *)SystemToPerfStats._32_8_;
    }
    uVar6 = *puVar13;
    while (uVar6 == 0) {
      lVar7 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar6 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_148153fed;
      uVar6 = puVar13[lVar7 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar14 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    uVar6 = iVar11 + -1 + local_res18;
    if ((int)uVar12 < (int)uVar6) {
      uVar6 = uVar12;
    }
  }
LAB_148153fed:
  bVar3 = SystemToPerfStats._40_1_;
  uVar9 = uVar12 & 0xffffffe0;
  uVar14 = SystemToPerfStats._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar10);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10;
  if (((int)uVar12 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = SystemToPerfStats._40_4_;
  if (uVar12 != uVar6) {
    uVar14 = SystemToPerfStats._40_8_ & 0xffffffff;
    lVar7 = 0x154c5ee70;
    if (SystemToPerfStats._32_8_ != 0) {
      lVar7 = SystemToPerfStats._32_8_;
    }
    uVar5 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar5 == 0) {
      lVar8 = (longlong)iVar10;
      uVar9 = uVar9 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148154100;
      uVar5 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar14 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
    uVar14 = (ulonglong)uVar9;
  }
LAB_148154100:
  while( true ) {
    if (SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar14) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10))
    break;
    pTVar1 = (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)
             (SystemToPerfStats._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x18);
    `FParticlePerfStatsListener_CSVProfiler::Tick'::__l12::<lambda_1>::operator()
              (&local_res8,pTVar1,
               (TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> *)(pTVar1 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014815416f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  return;
}

// ForAllSystemStats<`FParticlePerfStatsListener_GatherAll::Begin'::__l2::<lambda_2>_> @ 148154180

void __cdecl
FParticlePerfStatsManager::
ForAllSystemStats<_FParticlePerfStatsListener_GatherAll::Begin_::__l2::<lambda_2>_>
          (<lambda_2> param_1)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  byte bVar3;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> TVar4;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *pTVar5;
  bool bVar6;
  FAccumulatedParticlePerfStats *this;
  FAccumulatedParticlePerfStats *pFVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_const_&> local_res18;
  int local_res20;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> local_a8;
  longlong local_a0;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  uVar11 = SystemToPerfStats._40_4_;
  uStack_7c = 0;
  if (uVar11 != 0) {
    puVar13 = (uint *)&SystemToPerfStats.field_0x10;
    if (SystemToPerfStats._32_8_ != 0) {
      puVar13 = (uint *)SystemToPerfStats._32_8_;
    }
    uVar14 = *puVar13;
    while (uVar14 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      uStack_7c = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_90)
      goto LAB_14815423d;
      uVar14 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar15 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uStack_7c = local_res20 + -1 + local_78;
    if ((int)uVar11 < (int)uStack_7c) {
      uStack_7c = uVar11;
    }
  }
LAB_14815423d:
  bVar3 = SystemToPerfStats._40_1_;
  iStack_70 = SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_;
  uVar14 = uVar11 & 0xffffffe0;
  uVar15 = SystemToPerfStats._40_8_ & 0xffffffff;
  local_98 = &SystemToPerfStats;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  local_88 = 0x154c5ee70;
  TStack_60.CurrentBitIndex = uStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  local_68 = &SystemToPerfStats;
  iVar10 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10;
  uStack_74 = uStack_7c;
  if (((int)uVar11 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = SystemToPerfStats._40_4_;
  if (uVar11 != uVar12) {
    uVar15 = SystemToPerfStats._40_8_ & 0xffffffff;
    lVar8 = 0x154c5ee70;
    if (SystemToPerfStats._32_8_ != 0) {
      lVar8 = SystemToPerfStats._32_8_;
    }
    uVar11 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_148154350;
      uVar11 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar12 < (int)uVar14) {
      uVar14 = uVar12;
    }
    uVar15 = (ulonglong)uVar14;
  }
LAB_148154350:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar8 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == (int)uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10))
       && (pTVar5 == &SystemToPerfStats)) break;
    lVar9 = *(longlong *)pTVar5;
    this = ::operator_new(0x2b8);
    pFVar7 = (FAccumulatedParticlePerfStats *)0x0;
    if (this != (FAccumulatedParticlePerfStats *)0x0) {
      pFVar7 = FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(this);
    }
    local_a0 = lVar9 + lVar8 * 0x18;
    local_a8.Ptr = pFVar7;
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&(param_1.__this)->AccumulatedSystemStats,&local_res18,(bool *)&local_a0);
    TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>::
    operator=((TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
               *)(*(longlong *)&(param_1.__this)->AccumulatedSystemStats +
                 ((longlong)(int)local_res18.Key * 3 + 1) * 8),&local_a8);
    TVar4.Ptr = local_a8.Ptr;
    if (local_a8.Ptr != (FAccumulatedParticlePerfStats *)0x0) {
      FVar1 = ((local_a8.Ptr)->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      ::operator_delete(TVar4.Ptr,0x2b8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000148154491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  return;
}

// ForAllWorldStats<`FParticlePerfStatsListener_GatherAll::Begin'::__l2::<lambda_1>_> @ 1481544a0

void __cdecl
FParticlePerfStatsManager::
ForAllWorldStats<_FParticlePerfStatsListener_GatherAll::Begin_::__l2::<lambda_1>_>
          (<lambda_1> param_1)

{
  ForElementType<unsigned___int64> FVar1;
  code *pcVar2;
  byte bVar3;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> TVar4;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *pTVar5;
  bool bVar6;
  FAccumulatedParticlePerfStats *this;
  FAccumulatedParticlePerfStats *pFVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  TKeyInitializer<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_const_&> local_res18;
  int local_res20;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> local_a8;
  longlong local_a0;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&WorldToPerfStatsGuard);
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  uVar11 = WorldToPerfStats._40_4_;
  uStack_7c = 0;
  if (uVar11 != 0) {
    puVar13 = (uint *)&WorldToPerfStats.field_0x10;
    if (WorldToPerfStats._32_8_ != 0) {
      puVar13 = (uint *)WorldToPerfStats._32_8_;
    }
    uVar14 = *puVar13;
    while (uVar14 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      uStack_7c = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_90)
      goto LAB_14815455d;
      uVar14 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar15 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uStack_7c = local_res20 + -1 + local_78;
    if ((int)uVar11 < (int)uStack_7c) {
      uStack_7c = uVar11;
    }
  }
LAB_14815455d:
  bVar3 = WorldToPerfStats._40_1_;
  iStack_70 = WorldToPerfStats._8_4_ - WorldToPerfStats._52_4_;
  uVar14 = uVar11 & 0xffffffe0;
  uVar15 = WorldToPerfStats._40_8_ & 0xffffffff;
  local_98 = &WorldToPerfStats;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  local_88 = 0x154c5ee20;
  TStack_60.CurrentBitIndex = uStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  local_68 = &WorldToPerfStats;
  iVar10 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldToPerfStats.field_0x10;
  uStack_74 = uStack_7c;
  if (((int)uVar11 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = WorldToPerfStats._40_4_;
  if (uVar11 != uVar12) {
    uVar15 = WorldToPerfStats._40_8_ & 0xffffffff;
    lVar8 = 0x154c5ee20;
    if (WorldToPerfStats._32_8_ != 0) {
      lVar8 = WorldToPerfStats._32_8_;
    }
    uVar11 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_148154670;
      uVar11 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar12 < (int)uVar14) {
      uVar14 = uVar12;
    }
    uVar15 = (ulonglong)uVar14;
  }
LAB_148154670:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar8 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == (int)uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldToPerfStats.field_0x10))
       && (pTVar5 == &WorldToPerfStats)) break;
    lVar9 = *(longlong *)pTVar5;
    this = ::operator_new(0x2b8);
    pFVar7 = (FAccumulatedParticlePerfStats *)0x0;
    if (this != (FAccumulatedParticlePerfStats *)0x0) {
      pFVar7 = FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(this);
    }
    local_a0 = lVar9 + lVar8 * 0x18;
    local_a8.Ptr = pFVar7;
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&(param_1.__this)->AccumulatedWorldStats,&local_res18,(bool *)&local_a0);
    TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>::
    operator=((TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
               *)(*(longlong *)&(param_1.__this)->AccumulatedWorldStats +
                 ((longlong)(int)local_res18.Key * 3 + 1) * 8),&local_a8);
    TVar4.Ptr = local_a8.Ptr;
    if (local_a8.Ptr != (FAccumulatedParticlePerfStats *)0x0) {
      FVar1 = ((local_a8.Ptr)->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar4.Ptr)->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      ::operator_delete(TVar4.Ptr,0x2b8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x0001481547ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&WorldToPerfStatsGuard);
  return;
}

// GetTypeName<UParticleEmitter> @ 1481547c0

FString * __cdecl GetTypeName<UParticleEmitter>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleEmitter_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModule> @ 148154800

FString * __cdecl GetTypeName<UParticleModule>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModule_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleEventGenerator> @ 148154840

FString * __cdecl GetTypeName<UParticleModuleEventGenerator>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleEventReceiverBase> @ 148154880

FString * __cdecl GetTypeName<UParticleModuleEventReceiverBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleLocationBoneSocket> @ 1481548c0

FString * __cdecl GetTypeName<UParticleModuleLocationBoneSocket>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleOrbit> @ 148154900

FString * __cdecl GetTypeName<UParticleModuleOrbit>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleRequired> @ 148154940

FString * __cdecl GetTypeName<UParticleModuleRequired>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleRequired_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleSpawn> @ 148154980

FString * __cdecl GetTypeName<UParticleModuleSpawn>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleSpawnBase> @ 1481549c0

FString * __cdecl GetTypeName<UParticleModuleSpawnBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleTypeDataBase> @ 148154a00

FString * __cdecl GetTypeName<UParticleModuleTypeDataBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<`<lambda_27>::operator()'::__l53::<lambda_2>_>_>_>_> @ 148154a40

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<_<lambda_27>::operator()_::__l53::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>_>::FValueComparisonClass<_public:___cdecl_<lambda_27>::operator()(void)const_::_53_::<lambda_2>_>_>_>
          param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_s_1 TVar12;
  undefined8 uVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  fVar14 = __real_3a83126f;
  iVar16 = (param_2 + -2) / 2;
  iVar17 = iVar16 * 2 + 1;
  iVar25 = iVar17;
  iVar26 = iVar16;
  do {
    while (param_2 <= iVar17) {
LAB_148154bfe:
      if (iVar26 == 0) {
        iVar17 = param_2 + -1;
        lVar18 = (longlong)iVar17;
        if (0 < iVar17) {
          pTVar23 = param_1 + lVar18;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8);
            TVar12 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
            param_1->_s_1 = pTVar23->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar5;
            pTVar23->_s_1 = TVar12;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10) = uVar7;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18) = uVar8;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20) = uVar9;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28) = uVar10;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30) = uVar11;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38) = uVar13;
            iVar25 = 0;
            if (1 < iVar17) {
              do {
                iVar26 = iVar25 * 2;
                iVar16 = iVar26 + 1;
                if (iVar26 + 2 < iVar17) {
                  lVar20 = (longlong)iVar16 * 0x40;
                  lVar19 = ((longlong)iVar26 + 2) * 0x40;
                  if ((float)(*(int *)(lVar20 + 0x1c + (longlong)param_1) +
                             *(int *)(lVar20 + 0x18 + (longlong)param_1)) +
                      (float)*(int *)(lVar20 + 0x10 + (longlong)param_1) * fVar14 <
                      (float)(*(int *)(lVar19 + 0x1c + (longlong)param_1) +
                             *(int *)(lVar19 + 0x18 + (longlong)param_1)) +
                      (float)*(int *)(lVar19 + 0x10 + (longlong)param_1) * fVar14) {
                    iVar16 = iVar26;
                  }
                  iVar16 = iVar16 + 1;
                }
                lVar19 = (longlong)iVar25;
                lVar20 = lVar19 * 0x40;
                lVar21 = (longlong)iVar16;
                lVar22 = lVar21 * 0x40;
                if ((float)(*(int *)(lVar20 + 0x1c + (longlong)param_1) +
                           *(int *)(lVar20 + 0x18 + (longlong)param_1)) +
                    (float)*(int *)(lVar20 + 0x10 + (longlong)param_1) * fVar14 <=
                    (float)(*(int *)(lVar22 + 0x1c + (longlong)param_1) +
                           *(int *)(lVar22 + 0x18 + (longlong)param_1)) +
                    (float)*(int *)(lVar22 + 0x10 + (longlong)param_1) * fVar14) break;
                uVar5 = *(undefined8 *)(param_1[lVar21].ElementData.Pad + 8);
                TVar12 = param_1[lVar19]._s_1;
                uVar6 = *(undefined8 *)(param_1[lVar19].ElementData.Pad + 8);
                puVar1 = (undefined8 *)(lVar20 + 0x10 + (longlong)param_1);
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                puVar1 = (undefined8 *)(lVar20 + 0x20 + (longlong)param_1);
                uVar9 = *puVar1;
                uVar10 = puVar1[1];
                puVar1 = (undefined8 *)(lVar20 + 0x30 + (longlong)param_1);
                uVar11 = *puVar1;
                uVar13 = puVar1[1];
                param_1[lVar19]._s_1 = param_1[lVar21]._s_1;
                *(undefined8 *)((longlong)param_1[lVar19].ElementData.Pad + 8) = uVar5;
                puVar1 = (undefined8 *)(lVar22 + 0x10 + (longlong)param_1);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(lVar20 + 0x10 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar1 = (undefined8 *)(lVar22 + 0x20 + (longlong)param_1);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(lVar20 + 0x20 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar1 = (undefined8 *)(lVar22 + 0x30 + (longlong)param_1);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(lVar20 + 0x30 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                param_1[lVar21]._s_1 = TVar12;
                *(undefined8 *)((longlong)param_1[lVar21].ElementData.Pad + 8) = uVar6;
                puVar1 = (undefined8 *)(lVar22 + 0x10 + (longlong)param_1);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                puVar1 = (undefined8 *)(lVar22 + 0x20 + (longlong)param_1);
                *puVar1 = uVar9;
                puVar1[1] = uVar10;
                puVar1 = (undefined8 *)(lVar22 + 0x30 + (longlong)param_1);
                *puVar1 = uVar11;
                puVar1[1] = uVar13;
                iVar25 = iVar16;
              } while (iVar16 * 2 + 1 < iVar17);
            }
            iVar17 = iVar17 + -1;
            lVar18 = lVar18 + -1;
            pTVar23 = pTVar23 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar16 = iVar26 + -1;
      iVar17 = iVar25 + -2;
      iVar25 = iVar17;
      iVar26 = iVar16;
    }
    iVar17 = iVar16 * 2;
    iVar24 = iVar17 + 1;
    if (iVar17 + 2 < param_2) {
      lVar19 = (longlong)iVar24 * 0x40;
      lVar18 = ((longlong)iVar17 + 2) * 0x40;
      if ((float)(*(int *)(lVar19 + 0x1c + (longlong)param_1) +
                 *(int *)(lVar19 + 0x18 + (longlong)param_1)) +
          (float)*(int *)(lVar19 + 0x10 + (longlong)param_1) * fVar14 <
          (float)(*(int *)(lVar18 + 0x1c + (longlong)param_1) +
                 *(int *)(lVar18 + 0x18 + (longlong)param_1)) +
          (float)*(int *)(lVar18 + 0x10 + (longlong)param_1) * fVar14) {
        iVar24 = iVar17;
      }
      iVar24 = iVar24 + 1;
    }
    lVar18 = (longlong)iVar16;
    lVar19 = lVar18 * 0x40;
    lVar20 = (longlong)iVar24;
    lVar21 = lVar20 * 0x40;
    if ((float)(*(int *)(lVar19 + 0x1c + (longlong)param_1) +
               *(int *)(lVar19 + 0x18 + (longlong)param_1)) +
        (float)*(int *)(lVar19 + 0x10 + (longlong)param_1) * fVar14 <=
        (float)(*(int *)(lVar21 + 0x1c + (longlong)param_1) +
               *(int *)(lVar21 + 0x18 + (longlong)param_1)) +
        (float)*(int *)(lVar21 + 0x10 + (longlong)param_1) * fVar14) goto LAB_148154bfe;
    uVar5 = *(undefined8 *)(param_1[lVar20].ElementData.Pad + 8);
    iVar17 = iVar24 * 2 + 1;
    auVar3 = *(undefined1 (*) [16])(param_1 + lVar18);
    puVar1 = (undefined8 *)(lVar19 + 0x10 + (longlong)param_1);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    puVar1 = (undefined8 *)(lVar19 + 0x20 + (longlong)param_1);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    puVar1 = (undefined8 *)(lVar19 + 0x30 + (longlong)param_1);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    param_1[lVar18]._s_1 = param_1[lVar20]._s_1;
    *(undefined8 *)((longlong)param_1[lVar18].ElementData.Pad + 8) = uVar5;
    puVar1 = (undefined8 *)(lVar21 + 0x10 + (longlong)param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar19 + 0x10 + (longlong)param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    *(undefined1 (*) [16])(lVar19 + 0x20 + (longlong)param_1) =
         *(undefined1 (*) [16])(lVar21 + 0x20 + (longlong)param_1);
    *(undefined1 (*) [16])(lVar19 + 0x30 + (longlong)param_1) =
         *(undefined1 (*) [16])(lVar21 + 0x30 + (longlong)param_1);
    *(undefined1 (*) [16])(param_1 + lVar20) = auVar3;
    puVar1 = (undefined8 *)(lVar21 + 0x10 + (longlong)param_1);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)(lVar21 + 0x20 + (longlong)param_1);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1 = (undefined8 *)(lVar21 + 0x30 + (longlong)param_1);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    iVar16 = iVar24;
  } while( true );
}

// HeapSortInternal<`<lambda_27>::operator()'::__l2::FPSCInfo,int,FIdentityFunctor,TDereferenceWrapper<`<lambda_27>::operator()'::__l2::FPSCInfo,`<lambda_27>::operator()'::__l214::<lambda_3>_>_> @ 148154dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<_<lambda_27>::operator()_::__l2::FPSCInfo,int,FIdentityFunctor,TDereferenceWrapper<_<lambda_27>::operator()_::__l2::FPSCInfo,_<lambda_27>::operator()_::__l214::<lambda_3>_>_>
          (FPSCInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfo,_public:___cdecl_<lambda_27>::operator()(void)const_::_214_::<lambda_3>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  UParticleSystemComponent *pUVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FPSCInfo *pFVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  FPSCInfo *pFVar20;
  FPSCInfo *pFVar21;
  
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
  iVar2 = iVar14;
  iVar17 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_148154f46:
      if (iVar17 == 0) {
        iVar14 = param_2 + -1;
        lVar15 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar16 = param_1 + lVar15;
          do {
            bVar12 = pFVar16->bIsActive;
            bVar4 = pFVar16->bIsSignificant;
            bVar5 = pFVar16->bIsVisible;
            uVar6 = pFVar16->field_0xb;
            iVar2 = pFVar16->NumActiveParticles;
            iVar17 = 0;
            pUVar3 = param_1->PSC;
            bVar7 = param_1->bIsActive;
            bVar8 = param_1->bIsSignificant;
            bVar9 = param_1->bIsVisible;
            uVar10 = param_1->field_0xb;
            iVar13 = param_1->NumActiveParticles;
            param_1->PSC = pFVar16->PSC;
            param_1->bIsActive = bVar12;
            param_1->bIsSignificant = bVar4;
            param_1->bIsVisible = bVar5;
            param_1->field_0xb = uVar6;
            param_1->NumActiveParticles = iVar2;
            pFVar16->PSC = pUVar3;
            pFVar16->bIsActive = bVar7;
            pFVar16->bIsSignificant = bVar8;
            pFVar16->bIsVisible = bVar9;
            pFVar16->field_0xb = uVar10;
            pFVar16->NumActiveParticles = iVar13;
            if (1 < iVar14) {
              do {
                iVar2 = iVar17 * 2;
                iVar13 = iVar2 + 1;
                if (iVar2 + 2 < iVar14) {
                  lVar18 = (longlong)iVar2 + 2;
                  if ((byte)((param_1[lVar18].bIsVisible == false) +
                             (param_1[lVar18].bIsSignificant == false) +
                            (param_1[lVar18].bIsActive == false)) <
                      (byte)((param_1[iVar13].bIsVisible == false) +
                             (param_1[iVar13].bIsSignificant == false) +
                            (param_1[iVar13].bIsActive == false))) {
                    iVar13 = iVar2;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar20 = param_1 + iVar13;
                pFVar21 = param_1 + iVar17;
                if ((byte)((pFVar20->bIsVisible == false) + (pFVar20->bIsSignificant == false) +
                          (pFVar20->bIsActive == false)) <=
                    (byte)((pFVar21->bIsVisible == false) + (pFVar21->bIsSignificant == false) +
                          (pFVar21->bIsActive == false))) break;
                bVar12 = pFVar20->bIsActive;
                bVar4 = pFVar20->bIsSignificant;
                bVar5 = pFVar20->bIsVisible;
                uVar6 = pFVar20->field_0xb;
                iVar2 = pFVar20->NumActiveParticles;
                pUVar3 = pFVar21->PSC;
                bVar7 = pFVar21->bIsActive;
                bVar8 = pFVar21->bIsSignificant;
                bVar9 = pFVar21->bIsVisible;
                uVar10 = pFVar21->field_0xb;
                iVar17 = pFVar21->NumActiveParticles;
                pFVar21->PSC = pFVar20->PSC;
                pFVar21->bIsActive = bVar12;
                pFVar21->bIsSignificant = bVar4;
                pFVar21->bIsVisible = bVar5;
                pFVar21->field_0xb = uVar6;
                pFVar21->NumActiveParticles = iVar2;
                pFVar20->PSC = pUVar3;
                pFVar20->bIsActive = bVar7;
                pFVar20->bIsSignificant = bVar8;
                pFVar20->bIsVisible = bVar9;
                pFVar20->field_0xb = uVar10;
                pFVar20->NumActiveParticles = iVar17;
                iVar17 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar15 = lVar15 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar13 = iVar17 + -1;
      iVar14 = iVar2 + -2;
      iVar2 = iVar14;
      iVar17 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar19 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      lVar15 = (longlong)iVar14 + 2;
      if ((byte)((param_1[lVar15].bIsVisible == false) + (param_1[lVar15].bIsSignificant == false) +
                (param_1[lVar15].bIsActive == false)) <
          (byte)((param_1[iVar19].bIsVisible == false) + (param_1[iVar19].bIsSignificant == false) +
                (param_1[iVar19].bIsActive == false))) {
        iVar19 = iVar14;
      }
      iVar19 = iVar19 + 1;
    }
    pFVar16 = param_1 + iVar19;
    pFVar20 = param_1 + iVar13;
    if ((byte)((pFVar16->bIsVisible == false) + (pFVar16->bIsSignificant == false) +
              (pFVar16->bIsActive == false)) <=
        (byte)((pFVar20->bIsVisible == false) + (pFVar20->bIsSignificant == false) +
              (pFVar20->bIsActive == false))) goto LAB_148154f46;
    bVar12 = pFVar16->bIsActive;
    bVar4 = pFVar16->bIsSignificant;
    bVar5 = pFVar16->bIsVisible;
    uVar6 = pFVar16->field_0xb;
    iVar13 = pFVar16->NumActiveParticles;
    iVar14 = iVar19 * 2 + 1;
    pUVar3 = pFVar20->PSC;
    bVar7 = pFVar20->bIsActive;
    bVar8 = pFVar20->bIsSignificant;
    bVar9 = pFVar20->bIsVisible;
    uVar10 = pFVar20->field_0xb;
    iVar11 = pFVar20->NumActiveParticles;
    pFVar20->PSC = pFVar16->PSC;
    pFVar20->bIsActive = bVar12;
    pFVar20->bIsSignificant = bVar4;
    pFVar20->bIsVisible = bVar5;
    pFVar20->field_0xb = uVar6;
    pFVar20->NumActiveParticles = iVar13;
    pFVar16->PSC = pUVar3;
    pFVar16->bIsActive = bVar7;
    pFVar16->bIsSignificant = bVar8;
    pFVar16->bIsVisible = bVar9;
    pFVar16->field_0xb = uVar10;
    pFVar16->NumActiveParticles = iVar11;
    iVar13 = iVar19;
  } while( true );
}

// InternalConstructor<UFXSystemAsset> @ 1481550b0

void __cdecl InternalConstructor<UFXSystemAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UFXSystemAsset__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UFXSystemComponent> @ 148155100

void __cdecl InternalConstructor<UFXSystemComponent>(FObjectInitializer *param_1)

{
  if ((UFXSystemComponent *)param_1->Obj != (UFXSystemComponent *)0x0) {
    UFXSystemComponent::UFXSystemComponent((UFXSystemComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UParticleLODLevel> @ 148155120

void __cdecl InternalConstructor<UParticleLODLevel>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(uint *)&this[1].field_0x4 = *(uint *)&this[1].field_0x4 | 1;
    *(undefined ***)this = &___7UParticleLODLevel__6B_;
    *(uint *)&this[4].field_0x10 = *(uint *)&this[4].field_0x10 | 1;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0x14 = 0;
  }
  return;
}

// InternalConstructor<UParticleSystem> @ 1481551c0

void __cdecl InternalConstructor<UParticleSystem>(FObjectInitializer *param_1)

{
  byte bVar1;
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[6].field_0xa = this[6].field_0xa & 0xfe;
    this[9].field_0x12 = this[9].field_0x12 & 0xf8;
    *(undefined8 *)(this + 1) = 0x20;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)this = &___7UParticleSystem__6B_;
    *(undefined2 *)&this[6].field_0x8 = 0x100;
    this[8].field_0x10 = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x10 = 0;
    *(undefined2 *)&this[9].field_0x10 = 3;
    *(undefined4 *)&this[2].field_0x8 = 0x42700000;
    *(undefined8 *)&this[2].field_0xc = 0x3c888889;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0xbff0000000000000;
    *(undefined8 *)&this[4].field_0x18 = 0xbff0000000000000;
    *(undefined8 *)&this[4].field_0x20 = 0xbff0000000000000;
    *(undefined8 *)(this + 5) = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x10 = 0x3ff0000000000000;
    bVar1 = this[6].field_0x5;
    this[6].field_0x4 = this[6].field_0x4 | 0x20;
    this[5].field_0x18 = 1;
    this[6].field_0x7 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0x3e800000;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    this[6].field_0x5 = bVar1 & 0xf7 | 6;
    *(undefined4 *)&this[3].field_0x14 = 0x43480000;
    *(undefined8 *)&this[6].field_0xc = 0;
    this[6].field_0xb = 3;
  }
  return;
}

// InternalConstructor<UParticleSystemComponent> @ 148155330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UParticleSystemComponent>(FObjectInitializer *param_1)

{
  if ((UParticleSystemComponent *)param_1->Obj != (UParticleSystemComponent *)0x0) {
    UParticleSystemComponent::UParticleSystemComponent
              ((UParticleSystemComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UFXSystemAsset> @ 148155350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFXSystemAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFXSystemAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x4 = 0;
    *(undefined ***)pUVar1 = &___7UFXSystemAsset__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFXSystemComponent> @ 148155420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFXSystemComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFXSystemComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFXSystemComponent::GetPrivateStaticClass();
  pUVar3 = (UFXSystemComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UFXSystemComponent *)0x0) {
    pUVar3 = UFXSystemComponent::UFXSystemComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UParticleLODLevel> @ 1481554c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UParticleLODLevel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UParticleLODLevel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UParticleLODLevel__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UParticleSystem> @ 1481555c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UParticleSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UParticleSystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x4 = 0;
    *(undefined ***)pUVar1 = &___7UParticleSystem__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    pUVar1[5].field_0x18 = 0;
    pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UParticleSystemComponent> @ 1481556e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UParticleSystemComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UParticleSystemComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UParticleSystemComponent::GetPrivateStaticClass();
  pUVar3 = (UParticleSystemComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UParticleSystemComponent *)0x0) {
    pUVar3 = UParticleSystemComponent::UParticleSystemComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<`<lambda_27>::operator()'::__l53::<lambda_2>_>_>_>_> @ 148155780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<_<lambda_27>::operator()_::__l53::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>_>::FValueComparisonClass<_public:___cdecl_<lambda_27>::operator()(void)const_::_53_::<lambda_2>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar13;
  uchar *puVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> **ppTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    fVar20 = __real_3a83126f;
    ppTVar17 = &local_338;
    do {
      pTVar18 = ppTVar17[1];
      pTVar12 = *ppTVar17;
      pTVar1 = ppTVar17[2];
      iVar11 = (int)((longlong)pTVar18 - (longlong)pTVar12 >> 6) + 1;
      local_348._0_4_ = (int)pTVar1;
      pTVar19 = pTVar12;
      if ((int)local_348 != 0) {
LAB_148155840:
        if (8 < iVar11) {
          uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
          pTVar15 = pTVar18 + 1;
          pTVar12 = pTVar19 + iVar11 / 2;
          TVar3 = pTVar12->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18);
          uVar7 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x20);
          uVar8 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x28);
          uVar9 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x30);
          uVar10 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x38);
          pTVar12->_s_1 = pTVar19->_s_1;
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar2;
          uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18) = uVar2;
          uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x28) = uVar2;
          uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x38) = uVar2;
          pTVar19->_s_1 = TVar3;
          *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar6;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) = uVar7;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar8;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) = uVar9;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x38) = uVar10;
          pTVar12 = pTVar19;
LAB_1481558a3:
          pTVar13 = pTVar12;
          pTVar12 = pTVar13 + 1;
          if (pTVar12 <= pTVar18) goto code_r0x0001481558af;
          goto LAB_1481558f1;
        }
        if (pTVar19 < pTVar18) {
          pTVar1 = pTVar19 + 1;
          do {
            pTVar12 = pTVar19;
            if (pTVar1 <= pTVar18) {
              pTVar15 = pTVar1;
              if (0xff < ((longlong)pTVar18 + (0x40 - (longlong)pTVar1) & 0xffffffffffffffc0U)) {
                do {
                  if ((float)(*(int *)((pTVar15->ElementData).Pad + 0x1c) +
                             *(int *)((pTVar15->ElementData).Pad + 0x18)) +
                      (float)*(int *)((pTVar15->ElementData).Pad + 0x10) * fVar20 <
                      (float)(*(int *)((pTVar12->ElementData).Pad + 0x1c) +
                             *(int *)((pTVar12->ElementData).Pad + 0x18)) +
                      (float)*(int *)((pTVar12->ElementData).Pad + 0x10) * fVar20) {
                    pTVar12 = pTVar15;
                  }
                  pTVar13 = pTVar15 + 1;
                  if ((float)(*(int *)((pTVar12->ElementData).Pad + 0x1c) +
                             *(int *)((pTVar12->ElementData).Pad + 0x18)) +
                      (float)*(int *)((pTVar12->ElementData).Pad + 0x10) * fVar20 <=
                      (float)(*(int *)((longlong)pTVar15 + 0x5c) +
                             *(int *)((longlong)pTVar15 + 0x58)) +
                      (float)*(int *)((longlong)pTVar15 + 0x50) * fVar20) {
                    pTVar13 = pTVar12;
                  }
                  pTVar16 = pTVar15 + 2;
                  if ((float)(*(int *)((pTVar13->ElementData).Pad + 0x1c) +
                             *(int *)((pTVar13->ElementData).Pad + 0x18)) +
                      (float)*(int *)((pTVar13->ElementData).Pad + 0x10) * fVar20 <=
                      (float)(*(int *)((longlong)pTVar15 + 0x9c) +
                             *(int *)((longlong)pTVar15 + 0x98)) +
                      (float)*(int *)((longlong)pTVar15 + 0x90) * fVar20) {
                    pTVar16 = pTVar13;
                  }
                  pTVar12 = pTVar15 + 3;
                  if ((float)(*(int *)((pTVar16->ElementData).Pad + 0x1c) +
                             *(int *)((pTVar16->ElementData).Pad + 0x18)) +
                      (float)*(int *)((pTVar16->ElementData).Pad + 0x10) * fVar20 <=
                      (float)(*(int *)((longlong)pTVar15 + 0xdc) +
                             *(int *)((longlong)pTVar15 + 0xd8)) +
                      (float)*(int *)((longlong)pTVar15 + 0xd0) * fVar20) {
                    pTVar12 = pTVar16;
                  }
                  pTVar15 = pTVar15 + 4;
                } while (pTVar15 <= pTVar18 + -3);
              }
              if (pTVar15 <= pTVar18) {
                puVar14 = (pTVar15->ElementData).Pad + 0x18;
                pTVar15 = pTVar12;
                do {
                  pTVar12 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *)
                            (puVar14 + -0x18);
                  if ((float)(*(int *)((pTVar15->ElementData).Pad + 0x1c) +
                             *(int *)((pTVar15->ElementData).Pad + 0x18)) +
                      (float)*(int *)((pTVar15->ElementData).Pad + 0x10) * fVar20 <=
                      (float)(*(int *)(puVar14 + 4) + *(int *)puVar14) +
                      (float)*(int *)(puVar14 + -8) * fVar20) {
                    pTVar12 = pTVar15;
                  }
                  pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *)
                            (puVar14 + 0x28);
                  puVar14 = puVar14 + 0x40;
                  pTVar15 = pTVar12;
                } while (pTVar13 <= pTVar18);
              }
            }
            TVar3 = pTVar12->_s_1;
            uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
            pTVar15 = pTVar18 + -1;
            uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
            uVar7 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
            uVar8 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x28);
            uVar4 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
            uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x30);
            uVar10 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x38);
            pTVar12->_s_1 = pTVar18->_s_1;
            *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
            uVar4 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) =
                 *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar4;
            uVar4 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x28);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) =
                 *(undefined8 *)((pTVar18->ElementData).Pad + 0x20);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x28) = uVar4;
            uVar4 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x38);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x30) =
                 *(undefined8 *)((pTVar18->ElementData).Pad + 0x30);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x38) = uVar4;
            pTVar18->_s_1 = TVar3;
            *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar2;
            *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar6;
            *(undefined8 *)((pTVar18->ElementData).Pad + 0x20) = uVar7;
            *(undefined8 *)((pTVar18->ElementData).Pad + 0x28) = uVar8;
            *(undefined8 *)((pTVar18->ElementData).Pad + 0x30) = uVar9;
            *(undefined8 *)((pTVar18->ElementData).Pad + 0x38) = uVar10;
            pTVar18 = pTVar15;
          } while (pTVar19 < pTVar15);
        }
        goto LAB_148155a58;
      }
LAB_148155a47:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<_<lambda_27>::operator()_::__l53::<lambda_2>_>_>_>_>
                (pTVar12,iVar11,param_3,param_4);
LAB_148155a58:
      ppTVar17 = ppTVar17 + -3;
    } while (&local_338 <= ppTVar17);
  }
  return;
code_r0x0001481558af:
  if ((float)(*(int *)((pTVar19->ElementData).Pad + 0x1c) +
             *(int *)((pTVar19->ElementData).Pad + 0x18)) +
      (float)*(int *)((pTVar19->ElementData).Pad + 0x10) * fVar20 <=
      (float)(*(int *)((longlong)pTVar13 + 0x5c) + *(int *)((longlong)pTVar13 + 0x58)) +
      (float)*(int *)((longlong)pTVar13 + 0x50) * fVar20) goto LAB_1481558a3;
LAB_1481558f1:
  do {
    pTVar16 = pTVar15;
    pTVar15 = pTVar16 + -1;
    if (pTVar15 <= pTVar19) break;
  } while ((float)(*(int *)((longlong)pTVar16 + -0x24) + *(int *)((longlong)pTVar16 + -0x28)) +
           (float)*(int *)((longlong)pTVar16 + -0x30) * fVar20 <=
           (float)(*(int *)((pTVar19->ElementData).Pad + 0x1c) +
                  *(int *)((pTVar19->ElementData).Pad + 0x18)) +
           (float)*(int *)((pTVar19->ElementData).Pad + 0x10) * fVar20);
  uVar2 = *(undefined8 *)((longlong)pTVar16 + -0x38);
  if (pTVar12 <= pTVar15) {
    TVar3 = pTVar12->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x50);
    uVar6 = *(undefined8 *)((longlong)pTVar13 + 0x58);
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x60);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x68);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x70);
    uVar10 = *(undefined8 *)((longlong)pTVar13 + 0x78);
    pTVar12->_s_1 = pTVar15->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar16 + -0x28);
    *(undefined8 *)((longlong)pTVar13 + 0x50) = *(undefined8 *)((longlong)pTVar16 + -0x30);
    *(undefined8 *)((longlong)pTVar13 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar16 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x60) = *(undefined8 *)((longlong)pTVar16 + -0x20);
    *(undefined8 *)((longlong)pTVar13 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar16 + -8);
    *(undefined8 *)((longlong)pTVar13 + 0x70) = *(undefined8 *)((longlong)pTVar16 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x78) = uVar2;
    pTVar15->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar16 + -0x38) = uVar4;
    *(undefined8 *)((longlong)pTVar16 + -0x30) = uVar5;
    *(undefined8 *)((longlong)pTVar16 + -0x28) = uVar6;
    *(undefined8 *)((longlong)pTVar16 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar16 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar16 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar16 + -8) = uVar10;
    goto LAB_1481558a3;
  }
  TVar3 = pTVar19->_s_1;
  uVar4 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
  uVar5 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
  uVar6 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
  uVar7 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
  uVar8 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
  local_348._0_4_ = (int)local_348 + -1;
  uVar9 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
  uVar10 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x38);
  pTVar19->_s_1 = pTVar15->_s_1;
  *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar16 + -0x28);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar16 + -0x30);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar16 + -0x18);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar16 + -0x20);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar16 + -8);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar16 + -0x10);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x38) = uVar2;
  pTVar15->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar16 + -0x38) = uVar4;
  *(undefined8 *)((longlong)pTVar16 + -0x30) = uVar5;
  *(undefined8 *)((longlong)pTVar16 + -0x28) = uVar6;
  *(undefined8 *)((longlong)pTVar16 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar16 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar16 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar16 + -8) = uVar10;
  if ((longlong)((longlong)pTVar15 + (-0x40 - (longlong)pTVar19) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pTVar18 - (longlong)pTVar12 & 0xffffffffffffffc0U)) {
    if (pTVar12 < pTVar18) {
      *ppTVar17 = pTVar12;
      ppTVar17[1] = pTVar18;
      *(int *)(ppTVar17 + 2) = (int)local_348;
      ppTVar17 = ppTVar17 + 3;
    }
    if (pTVar15 <= pTVar19 + 1) goto LAB_148155a58;
    pTVar18 = pTVar16 + -2;
    pTVar12 = pTVar19;
  }
  else {
    if (pTVar19 + 1 < pTVar15) {
      *ppTVar17 = pTVar19;
      ppTVar17[1] = pTVar16 + -2;
      *(int *)(ppTVar17 + 2) = (int)local_348;
      ppTVar17 = ppTVar17 + 3;
    }
    if (pTVar18 <= pTVar12) goto LAB_148155a58;
  }
  iVar11 = (int)((longlong)pTVar18 - (longlong)pTVar12 >> 6) + 1;
  pTVar19 = pTVar12;
  if ((int)local_348 == 0) goto LAB_148155a47;
  goto LAB_148155840;
}

// IntroSortInternal<`<lambda_27>::operator()'::__l2::FPSCInfo,int,FIdentityFunctor,TDereferenceWrapper<`<lambda_27>::operator()'::__l2::FPSCInfo,`<lambda_27>::operator()'::__l214::<lambda_3>_>_> @ 148155cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<_<lambda_27>::operator()_::__l2::FPSCInfo,int,FIdentityFunctor,TDereferenceWrapper<_<lambda_27>::operator()_::__l2::FPSCInfo,_<lambda_27>::operator()_::__l214::<lambda_3>_>_>
          (FPSCInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfo,_public:___cdecl_<lambda_27>::operator()(void)const_::_214_::<lambda_3>_>
          param_4)

{
  FPSCInfo *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  UParticleSystemComponent *pUVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  FPSCInfo **ppFVar19;
  FPSCInfo *pFVar20;
  FPSCInfo *pFVar21;
  FPSCInfo *pFVar22;
  FPSCInfo *pFVar23;
  FPSCInfo *pFVar24;
  FPSCInfo *pFVar25;
  float fVar26;
  undefined1 auStack_368 [48];
  FPSCInfo *local_338;
  FPSCInfo *local_328;
  FPSCInfo *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar26 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar26;
    memset(local_310,0,0x2e8);
    ppFVar19 = &local_328;
    do {
      pFVar25 = ppFVar19[1];
      pFVar24 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      iVar18 = (int)((longlong)pFVar25 - (longlong)pFVar24 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar23 = pFVar24;
      if ((int)local_338 != 0) {
LAB_148155da0:
        if (8 < iVar18) {
          bVar8 = pFVar23->bIsActive;
          bVar9 = pFVar23->bIsSignificant;
          bVar10 = pFVar23->bIsVisible;
          uVar11 = pFVar23->field_0xb;
          iVar12 = pFVar23->NumActiveParticles;
          pFVar21 = pFVar25 + 1;
          pFVar24 = pFVar23 + iVar18 / 2;
          pUVar7 = pFVar24->PSC;
          bVar13 = pFVar24->bIsActive;
          bVar14 = pFVar24->bIsSignificant;
          bVar15 = pFVar24->bIsVisible;
          uVar16 = pFVar24->field_0xb;
          iVar17 = pFVar24->NumActiveParticles;
          pFVar24 = pFVar23 + iVar18 / 2;
          pFVar24->PSC = pFVar23->PSC;
          pFVar24->bIsActive = bVar8;
          pFVar24->bIsSignificant = bVar9;
          pFVar24->bIsVisible = bVar10;
          pFVar24->field_0xb = uVar11;
          pFVar24->NumActiveParticles = iVar12;
          pFVar23->PSC = pUVar7;
          pFVar23->bIsActive = bVar13;
          pFVar23->bIsSignificant = bVar14;
          pFVar23->bIsVisible = bVar15;
          pFVar23->field_0xb = uVar16;
          pFVar23->NumActiveParticles = iVar17;
          pFVar24 = pFVar23;
LAB_148155dd0:
          pFVar20 = pFVar24;
          pFVar24 = pFVar20 + 1;
          if (pFVar24 <= pFVar25) goto code_r0x000148155ddc;
          goto LAB_148155e20;
        }
        for (; pFVar24 = pFVar23, pFVar1 = pFVar23, pFVar23 < pFVar25; pFVar25 = pFVar25 + -1) {
          while (pFVar21 = pFVar24, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar25) {
            pFVar24 = pFVar1;
            if ((byte)((pFVar1->bIsVisible == false) + (pFVar1->bIsSignificant == false) +
                      (pFVar1->bIsActive == false)) <=
                (byte)((pFVar21->bIsVisible == false) + (pFVar21->bIsSignificant == false) +
                      (pFVar21->bIsActive == false))) {
              pFVar24 = pFVar21;
            }
          }
          pUVar7 = pFVar21->PSC;
          bVar13 = pFVar21->bIsActive;
          bVar14 = pFVar21->bIsSignificant;
          bVar15 = pFVar21->bIsVisible;
          uVar16 = pFVar21->field_0xb;
          iVar12 = pFVar21->NumActiveParticles;
          bVar8 = pFVar25->bIsActive;
          bVar9 = pFVar25->bIsSignificant;
          bVar10 = pFVar25->bIsVisible;
          uVar11 = pFVar25->field_0xb;
          iVar18 = pFVar25->NumActiveParticles;
          pFVar21->PSC = pFVar25->PSC;
          pFVar21->bIsActive = bVar8;
          pFVar21->bIsSignificant = bVar9;
          pFVar21->bIsVisible = bVar10;
          pFVar21->field_0xb = uVar11;
          pFVar21->NumActiveParticles = iVar18;
          pFVar25->PSC = pUVar7;
          pFVar25->bIsActive = bVar13;
          pFVar25->bIsSignificant = bVar14;
          pFVar25->bIsVisible = bVar15;
          pFVar25->field_0xb = uVar16;
          pFVar25->NumActiveParticles = iVar12;
        }
        goto LAB_148155f1a;
      }
LAB_148155f09:
      local_338 = pFVar1;
      HeapSortInternal<_<lambda_27>::operator()_::__l2::FPSCInfo,int,FIdentityFunctor,TDereferenceWrapper<_<lambda_27>::operator()_::__l2::FPSCInfo,_<lambda_27>::operator()_::__l214::<lambda_3>_>_>
                (pFVar24,iVar18,param_3,param_4);
LAB_148155f1a:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_328 <= ppFVar19);
  }
  return;
code_r0x000148155ddc:
  if ((byte)((pFVar20[1].bIsVisible == false) + (pFVar20[1].bIsSignificant == false) +
            (pFVar20[1].bIsActive == false)) <=
      (byte)((pFVar23->bIsVisible == false) + (pFVar23->bIsSignificant == false) +
            (pFVar23->bIsActive == false))) goto LAB_148155dd0;
LAB_148155e20:
  do {
    pFVar22 = pFVar21;
    pFVar21 = pFVar22 + -1;
    if (pFVar21 <= pFVar23) break;
  } while ((byte)((pFVar23->bIsVisible == false) + (pFVar23->bIsSignificant == false) +
                 (pFVar23->bIsActive == false)) <=
           (byte)((pFVar22[-1].bIsActive == false) + (pFVar22[-1].bIsSignificant == false) +
                 (pFVar22[-1].bIsVisible == false)));
  uVar2 = pFVar22[-1].bIsActive;
  uVar3 = pFVar22[-1].bIsSignificant;
  uVar4 = pFVar22[-1].bIsVisible;
  uVar5 = pFVar22[-1].field_0xb;
  uVar6 = pFVar22[-1].NumActiveParticles;
  if (pFVar24 <= pFVar21) {
    pUVar7 = pFVar24->PSC;
    bVar8 = pFVar20[1].bIsActive;
    bVar9 = pFVar20[1].bIsSignificant;
    bVar10 = pFVar20[1].bIsVisible;
    uVar11 = pFVar20[1].field_0xb;
    iVar18 = pFVar20[1].NumActiveParticles;
    pFVar24->PSC = pFVar21->PSC;
    pFVar20[1].bIsActive = (bool)uVar2;
    pFVar20[1].bIsSignificant = (bool)uVar3;
    pFVar20[1].bIsVisible = (bool)uVar4;
    pFVar20[1].field_0xb = uVar5;
    pFVar20[1].NumActiveParticles = uVar6;
    pFVar21->PSC = pUVar7;
    pFVar22[-1].bIsActive = bVar8;
    pFVar22[-1].bIsSignificant = bVar9;
    pFVar22[-1].bIsVisible = bVar10;
    pFVar22[-1].field_0xb = uVar11;
    pFVar22[-1].NumActiveParticles = iVar18;
    goto LAB_148155dd0;
  }
  pUVar7 = pFVar23->PSC;
  bVar8 = pFVar23->bIsActive;
  bVar9 = pFVar23->bIsSignificant;
  bVar10 = pFVar23->bIsVisible;
  uVar11 = pFVar23->field_0xb;
  iVar18 = pFVar23->NumActiveParticles;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar23->PSC = pFVar21->PSC;
  pFVar23->bIsActive = (bool)uVar2;
  pFVar23->bIsSignificant = (bool)uVar3;
  pFVar23->bIsVisible = (bool)uVar4;
  pFVar23->field_0xb = uVar5;
  pFVar23->NumActiveParticles = uVar6;
  pFVar21->PSC = pUVar7;
  pFVar22[-1].bIsActive = bVar8;
  pFVar22[-1].bIsSignificant = bVar9;
  pFVar22[-1].bIsVisible = bVar10;
  pFVar22[-1].field_0xb = uVar11;
  pFVar22[-1].NumActiveParticles = iVar18;
  if ((longlong)((longlong)pFVar21 + (-0x10 - (longlong)pFVar23) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar25 - (longlong)pFVar24 & 0xfffffffffffffff0U)) {
    if (pFVar24 < pFVar25) {
      *ppFVar19 = pFVar24;
      ppFVar19[1] = pFVar25;
      *(int *)(ppFVar19 + 2) = (int)local_338;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar21 <= pFVar23 + 1) goto LAB_148155f1a;
    pFVar25 = pFVar22 + -2;
    pFVar24 = pFVar23;
  }
  else {
    if (pFVar23 + 1 < pFVar21) {
      *ppFVar19 = pFVar23;
      ppFVar19[1] = pFVar22 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_338;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar25 <= pFVar24) goto LAB_148155f1a;
  }
  iVar18 = (int)((longlong)pFVar25 - (longlong)pFVar24 >> 4) + 1;
  pFVar23 = pFVar24;
  if ((int)local_338 == 0) goto LAB_148155f09;
  goto LAB_148155da0;
}

// IsObjectPtrEqual<UParticleModuleRequired,UParticleModule_const_*,0> @ 148155ff0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UParticleModuleRequired,UParticleModule_const_*,0>
          (TObjectPtr<UParticleModuleRequired> *param_1,UParticleModule **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UParticleModuleRequired *)0x0) {
    return (UParticleModuleRequired *)*param_2 == (UParticleModuleRequired *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UParticleModuleRequired *)*param_2;
}

// IsObjectPtrEqual<UParticleSystem,UParticleSystem_*,0> @ 148156010

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UParticleSystem,UParticleSystem_*,0>
          (TObjectPtr<UParticleSystem> *param_1,UParticleSystem **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UParticleSystem *)0x0) {
    return *param_2 == (UParticleSystem *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<USceneComponent,UParticleSystemComponent_*,0> @ 148156030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USceneComponent,UParticleSystemComponent_*,0>
          (TObjectPtr<USceneComponent> *param_1,UParticleSystemComponent **param_2)

{
  if ((UParticleSystemComponent *)(param_1->field0_0x0).DebugPtr == (UParticleSystemComponent *)0x0)
  {
    return *param_2 == (UParticleSystemComponent *)0x0;
  }
  return (UParticleSystemComponent *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UDistributionFloatUniform> @ 148156050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDistributionFloatUniform * __cdecl NewObject<UDistributionFloatUniform>(UObject *param_1)

{
  UClass *pUVar1;
  UDistributionFloatUniform *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDistributionFloatUniform *)
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

// NewObject<UDistributionFloatUniform> @ 1481560f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDistributionFloatUniform * __cdecl
NewObject<UDistributionFloatUniform>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDistributionFloatUniform *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDistributionFloatUniform *)
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

// NewObject<UDistributionVectorConstantCurve> @ 1481561e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDistributionVectorConstantCurve * __cdecl
NewObject<UDistributionVectorConstantCurve>(UObject *param_1)

{
  UClass *pUVar1;
  UDistributionVectorConstantCurve *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDistributionVectorConstantCurve *)
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

// NewObject<UDistributionVectorConstantCurve> @ 148156280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDistributionVectorConstantCurve * __cdecl
NewObject<UDistributionVectorConstantCurve>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDistributionVectorConstantCurve *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDistributionVectorConstantCurve *)
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

// NewObject<UDistributionVectorUniform> @ 148156370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDistributionVectorUniform * __cdecl
NewObject<UDistributionVectorUniform>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDistributionVectorUniform *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDistributionVectorUniform *)
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

// NewObject<UParticleSystemReplay> @ 148156460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UParticleSystemReplay * __cdecl NewObject<UParticleSystemReplay>(UObject *param_1)

{
  UClass *pUVar1;
  UParticleSystemReplay *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UParticleSystemReplay_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UParticleSystemReplay *)
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

// NewObject<UPointLightComponent> @ 148156500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPointLightComponent * __cdecl
NewObject<UPointLightComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPointLightComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPointLightComponent *)
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

// Sort<TSortableMapBase<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<`<lambda_27>::operator()'::__l53::<lambda_2>_>_> @ 148157a00

void __thiscall
TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<_<lambda_27>::operator()_::__l53::<lambda_2>_>_>
          (void *this,
          FValueComparisonClass<_public:___cdecl_<lambda_27>::operator()(void)const_::_53_::<lambda_2>_>
          *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:___cdecl_<lambda_27>::operator()(void)const_::_53_::<lambda_2>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34)) {
    TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(this);
    iVar4 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> **)this;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<_<lambda_27>::operator()_::__l53::<lambda_2>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>_>::FValueComparisonClass<_public:___cdecl_<lambda_27>::operator()(void)const_::_53_::<lambda_2>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StaticEnum<enum_EParticleEventType> @ 148157a90

UEnum * __cdecl StaticEnum<enum_EParticleEventType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EParticleEventType,(UObject *)pUVar1,
                       L"EParticleEventType");
  }
  return Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton;
}

// StaticEnum<enum_EParticleSysParamType> @ 148157ad0

UEnum * __cdecl StaticEnum<enum_EParticleSysParamType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSysParamType,(UObject *)pUVar1,
                       L"EParticleSysParamType");
  }
  return Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton;
}

// StaticEnum<enum_EParticleSystemOcclusionBoundsMethod> @ 148157b10

UEnum * __cdecl StaticEnum<enum_EParticleSystemOcclusionBoundsMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod,
                       (UObject *)pUVar1,L"EParticleSystemOcclusionBoundsMethod");
  }
  return Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton;
}

// StaticEnum<enum_EParticleSystemUpdateMode> @ 148157b50

UEnum * __cdecl StaticEnum<enum_EParticleSystemUpdateMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemUpdateMode,(UObject *)pUVar1,
                       L"EParticleSystemUpdateMode");
  }
  return Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton;
}

// StaticEnum<enum_ParticleReplayState> @ 148157b90

UEnum * __cdecl StaticEnum<enum_ParticleReplayState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ParticleReplayState,(UObject *)pUVar1,
                       L"ParticleReplayState");
  }
  return Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton;
}

// StaticEnum<enum_ParticleSystemLODMethod> @ 148157bd0

UEnum * __cdecl StaticEnum<enum_ParticleSystemLODMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ParticleSystemLODMethod,(UObject *)pUVar1,
                       L"ParticleSystemLODMethod");
  }
  return Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton;
}

// TickStats_Internal<UFXSystemAsset_const_,`FParticlePerfStatsListener_GatherAll::Tick'::__l2::<lambda_1>_> @ 148157c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticlePerfStatsListener_GatherAll::
TickStats_Internal<UFXSystemAsset_const_,_FParticlePerfStatsListener_GatherAll::Tick_::__l2::<lambda_1>_>
          (FParticlePerfStatsListener_GatherAll *this,
          TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
          *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FWeakObjectPtr FVar5;
  ulonglong *puVar6;
  code *pcVar7;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar8;
  bool bVar9;
  UObject *pUVar10;
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> FVar11;
  longlong lVar12;
  int iVar13;
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> FVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_158 [32];
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> local_138;
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108;
  undefined1 local_107 [7];
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  FWeakObjectPtr local_c8;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = &param_1->field_0x10;
  local_88.SecondaryData =
       (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0;
  local_40 = 0;
  iStack_f8 = 0;
  local_3c = 8;
  iVar3 = *(int *)&param_1->field_0x28;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_148157cce;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_d0 = (int)lVar12;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_148157cce:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_b8.CurrentBitIndex = iStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = iStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_1;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_c0 = param_1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148157dd1;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_cc = (int)lVar12;
    uVar15 = local_cc + -1 + uVar18;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_148157dd1:
  do {
    pTVar8 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_108 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
    }
    iVar3 = local_40;
    if (((TStack_b8.CurrentBitIndex == uVar15) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    {
      FVar14 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
        FVar14 = local_88.SecondaryData;
      }
      FVar11 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)
               ((longlong)FVar14 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_107);
        }
        if (FVar14 == FVar11) break;
        local_c8 = *(FWeakObjectPtr *)FVar14;
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)param_1,local_c8.ObjectSerialNumber ^ local_c8.ObjectIndex,
                     (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_c8);
        }
        FVar14 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)
                 ((longlong)FVar14 + 8);
      }
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      return;
    }
    FVar14 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)
             (*(longlong *)pTVar8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar14);
    if (pUVar10 == (UObject *)0x0) {
      FVar11 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
        FVar11 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar11 <= (ulonglong)FVar14) {
        FVar11 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)&local_88;
        if (local_88.SecondaryData !=
            (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
          FVar11 = local_88.SecondaryData;
        }
        if ((ulonglong)FVar14 < (ulonglong)((longlong)FVar11 + (longlong)local_3c * 8)) {
          local_120 = (longlong)local_40;
          local_118 = 8;
          local_130 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)
                      &local_88;
          if (local_88.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
            local_130 = local_88.SecondaryData;
          }
          local_138 = FVar14;
          local_128 = (longlong)local_3c;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>_>
                             (0x408,&local_88,&local_3c);
      }
      lVar12 = (longlong)local_40;
      FVar11 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
        FVar11 = local_88.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(FWeakObjectPtr *)((longlong)FVar11 + lVar12 * 8) = *(FWeakObjectPtr *)FVar14;
    }
    else {
      FVar5 = *(FWeakObjectPtr *)((longlong)FVar14 + 8);
      puVar6 = *(ulonglong **)&pUVar10[1].field_0x8;
      if (puVar6 != (ulonglong *)0x0) {
        bVar9 = IsInGameThread();
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x302,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*puVar6 != 0) {
          *(int *)FVar5 = *(int *)FVar5 + 1;
          *(longlong *)((longlong)FVar5 + 200) = *(longlong *)((longlong)FVar5 + 200) + *puVar6;
          *(longlong *)((longlong)FVar5 + 0xd0) = *(longlong *)((longlong)FVar5 + 0xd0) + puVar6[1];
          LOCK();
          *(longlong *)((longlong)FVar5 + 0xd8) = *(longlong *)((longlong)FVar5 + 0xd8) + puVar6[2];
          UNLOCK();
          *(longlong *)((longlong)FVar5 + 0xe0) = *(longlong *)((longlong)FVar5 + 0xe0) + puVar6[3];
          LOCK();
          *(longlong *)((longlong)FVar5 + 0xe8) = *(longlong *)((longlong)FVar5 + 0xe8) + puVar6[4];
          UNLOCK();
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar5 + 8),
                     puVar6[1] + puVar6[5] + puVar6[3] + puVar6[6] + puVar6[4] + puVar6[2]);
          if (*puVar6 == 0) {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar5 + 0x68),0);
          }
          else {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar5 + 0x68),
                       (puVar6[4] + puVar6[3] + puVar6[5] + puVar6[6] + puVar6[1] + puVar6[2]) /
                       *puVar6);
          }
        }
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// TickStats_Internal<UFXSystemAsset_const_,`FParticlePerfStatsListener_GatherAll::TickRT'::__l2::<lambda_1>_> @ 1481580a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticlePerfStatsListener_GatherAll::
TickStats_Internal<UFXSystemAsset_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
          (FParticlePerfStatsListener_GatherAll *this,
          TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
          *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  FWeakObjectPtr FVar4;
  code *pcVar5;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar6;
  bool bVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> FVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> FVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_158 [32];
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> local_138;
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108;
  undefined1 local_107 [7];
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  FWeakObjectPtr local_c8;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_> local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = &param_1->field_0x10;
  local_88.SecondaryData =
       (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0;
  local_40 = 0;
  iStack_f8 = 0;
  local_3c = 8;
  iVar2 = *(int *)&param_1->field_0x28;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14815815e;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar9 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    iStack_e4 = local_d0 + -1 + local_e0;
    if (iVar2 < iStack_e4) {
      iStack_e4 = iVar2;
    }
  }
LAB_14815815e:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_b8.CurrentBitIndex = iStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = iStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_1;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_c0 = param_1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148158260;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar15 = local_cc + -1 + uVar14;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_148158260:
  do {
    pTVar6 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_108 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
    }
    iVar2 = local_40;
    if (((TStack_b8.CurrentBitIndex == uVar15) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      FVar13 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
        FVar13 = local_88.SecondaryData;
      }
      FVar10 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)
               ((longlong)FVar13 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_107);
        }
        if (FVar13 == FVar10) break;
        local_c8 = *(FWeakObjectPtr *)FVar13;
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)param_1,local_c8.ObjectSerialNumber ^ local_c8.ObjectIndex,
                     (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_c8);
        }
        FVar13 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)
                 ((longlong)FVar13 + 8);
      }
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      return;
    }
    FVar13 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)
             (*(longlong *)pTVar6 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar13);
    if (pUVar8 == (UObject *)0x0) {
      FVar10 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar13) {
        FVar10 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)&local_88;
        if (local_88.SecondaryData !=
            (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
          FVar10 = local_88.SecondaryData;
        }
        if ((ulonglong)FVar13 < (ulonglong)((longlong)FVar10 + (longlong)local_3c * 8)) {
          local_120 = (longlong)local_40;
          local_118 = 8;
          local_130 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)
                      &local_88;
          if (local_88.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
            local_130 = local_88.SecondaryData;
          }
          local_138 = FVar13;
          local_128 = (longlong)local_3c;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>_>
                             (0x408,&local_88,&local_3c);
      }
      lVar11 = (longlong)local_40;
      FVar10 = (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = local_88.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(FWeakObjectPtr *)((longlong)FVar10 + lVar11 * 8) = *(FWeakObjectPtr *)FVar13;
    }
    else {
      FVar4 = *(FWeakObjectPtr *)((longlong)FVar13 + 8);
      lVar11 = *(longlong *)&pUVar8[1].field_0x8;
      if (lVar11 != 0) {
        bVar7 = IsInRenderingThread();
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x308,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(lVar11 + 0x38) != 0) {
          *(int *)((longlong)FVar4 + 0x100) = *(int *)((longlong)FVar4 + 0x100) + 1;
          *(longlong *)((longlong)FVar4 + 0x108) =
               *(longlong *)((longlong)FVar4 + 0x108) + *(longlong *)(lVar11 + 0x38);
          *(longlong *)((longlong)FVar4 + 0x110) =
               *(longlong *)((longlong)FVar4 + 0x110) + *(longlong *)(lVar11 + 0x40);
          *(longlong *)((longlong)FVar4 + 0x118) =
               *(longlong *)((longlong)FVar4 + 0x118) + *(longlong *)(lVar11 + 0x48);
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x120),
                     *(longlong *)(lVar11 + 0x48) + *(longlong *)(lVar11 + 0x40));
          if (*(ulonglong *)(lVar11 + 0x38) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (ulonglong)(*(longlong *)(lVar11 + 0x48) + *(longlong *)(lVar11 + 0x40)) /
                    *(ulonglong *)(lVar11 + 0x38);
          }
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x180),uVar9);
        }
        if (*(longlong *)(lVar11 + 0x50) != 0) {
          *(int *)((longlong)FVar4 + 0x1e0) = *(int *)((longlong)FVar4 + 0x1e0) + 1;
          *(longlong *)((longlong)FVar4 + 0x1e8) =
               *(longlong *)((longlong)FVar4 + 0x1e8) + *(longlong *)(lVar11 + 0x50);
          *(longlong *)((longlong)FVar4 + 0x1f0) =
               *(longlong *)((longlong)FVar4 + 0x1f0) + *(longlong *)(lVar11 + 0x58);
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x1f8),*(long64 *)(lVar11 + 0x58));
          if (*(ulonglong *)(lVar11 + 0x50) == 0) {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar4 + 600),0);
          }
          else {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar4 + 600),
                       *(ulonglong *)(lVar11 + 0x58) / *(ulonglong *)(lVar11 + 0x50));
          }
        }
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// TickStats_Internal<UFXSystemComponent_const_,`FParticlePerfStatsListener_GatherAll::Tick'::__l2::<lambda_1>_> @ 148158540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticlePerfStatsListener_GatherAll::
TickStats_Internal<UFXSystemComponent_const_,_FParticlePerfStatsListener_GatherAll::Tick_::__l2::<lambda_1>_>
          (FParticlePerfStatsListener_GatherAll *this,
          TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
          *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FWeakObjectPtr FVar5;
  ulonglong *puVar6;
  code *pcVar7;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar8;
  bool bVar9;
  UObject *pUVar10;
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> FVar11;
  longlong lVar12;
  int iVar13;
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> FVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_158 [32];
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> local_138;
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108;
  undefined1 local_107 [7];
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  FWeakObjectPtr local_c8;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = &param_1->field_0x10;
  local_88.SecondaryData =
       (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0;
  local_40 = 0;
  iStack_f8 = 0;
  local_3c = 8;
  iVar3 = *(int *)&param_1->field_0x28;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_1481585fe;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_d0 = (int)lVar12;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_1481585fe:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_b8.CurrentBitIndex = iStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = iStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_1;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_c0 = param_1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148158701;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_cc = (int)lVar12;
    uVar15 = local_cc + -1 + uVar18;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_148158701:
  do {
    pTVar8 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_108 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
    }
    iVar3 = local_40;
    if (((TStack_b8.CurrentBitIndex == uVar15) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    {
      FVar14 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
        FVar14 = local_88.SecondaryData;
      }
      FVar11 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
               ((longlong)FVar14 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_107);
        }
        if (FVar14 == FVar11) break;
        local_c8 = *(FWeakObjectPtr *)FVar14;
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)param_1,local_c8.ObjectSerialNumber ^ local_c8.ObjectIndex,
                     (TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *)&local_c8);
        }
        FVar14 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
                 ((longlong)FVar14 + 8);
      }
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      return;
    }
    FVar14 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
             (*(longlong *)pTVar8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar14);
    if (pUVar10 == (UObject *)0x0) {
      FVar11 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
        FVar11 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar11 <= (ulonglong)FVar14) {
        FVar11 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
                 &local_88;
        if (local_88.SecondaryData !=
            (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
          FVar11 = local_88.SecondaryData;
        }
        if ((ulonglong)FVar14 < (ulonglong)((longlong)FVar11 + (longlong)local_3c * 8)) {
          local_120 = (longlong)local_40;
          local_118 = 8;
          local_130 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
                      &local_88;
          if (local_88.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
            local_130 = local_88.SecondaryData;
          }
          local_138 = FVar14;
          local_128 = (longlong)local_3c;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>_>
                             (0x408,&local_88,&local_3c);
      }
      lVar12 = (longlong)local_40;
      FVar11 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
        FVar11 = local_88.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(FWeakObjectPtr *)((longlong)FVar11 + lVar12 * 8) = *(FWeakObjectPtr *)FVar14;
    }
    else {
      FVar5 = *(FWeakObjectPtr *)((longlong)FVar14 + 8);
      puVar6 = *(ulonglong **)&pUVar10[0x21].field_0x20;
      if (puVar6 != (ulonglong *)0x0) {
        bVar9 = IsInGameThread();
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x302,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*puVar6 != 0) {
          *(int *)FVar5 = *(int *)FVar5 + 1;
          *(longlong *)((longlong)FVar5 + 200) = *(longlong *)((longlong)FVar5 + 200) + *puVar6;
          *(longlong *)((longlong)FVar5 + 0xd0) = *(longlong *)((longlong)FVar5 + 0xd0) + puVar6[1];
          LOCK();
          *(longlong *)((longlong)FVar5 + 0xd8) = *(longlong *)((longlong)FVar5 + 0xd8) + puVar6[2];
          UNLOCK();
          *(longlong *)((longlong)FVar5 + 0xe0) = *(longlong *)((longlong)FVar5 + 0xe0) + puVar6[3];
          LOCK();
          *(longlong *)((longlong)FVar5 + 0xe8) = *(longlong *)((longlong)FVar5 + 0xe8) + puVar6[4];
          UNLOCK();
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar5 + 8),
                     puVar6[1] + puVar6[5] + puVar6[3] + puVar6[6] + puVar6[4] + puVar6[2]);
          if (*puVar6 == 0) {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar5 + 0x68),0);
          }
          else {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar5 + 0x68),
                       (puVar6[4] + puVar6[3] + puVar6[5] + puVar6[6] + puVar6[1] + puVar6[2]) /
                       *puVar6);
          }
        }
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// TickStats_Internal<UFXSystemComponent_const_,`FParticlePerfStatsListener_GatherAll::TickRT'::__l2::<lambda_1>_> @ 1481589d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticlePerfStatsListener_GatherAll::
TickStats_Internal<UFXSystemComponent_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
          (FParticlePerfStatsListener_GatherAll *this,
          TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
          *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  FWeakObjectPtr FVar4;
  code *pcVar5;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar6;
  bool bVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> FVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> FVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_158 [32];
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> local_138;
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108;
  undefined1 local_107 [7];
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  FWeakObjectPtr local_c8;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_> local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = &param_1->field_0x10;
  local_88.SecondaryData =
       (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0;
  local_40 = 0;
  iStack_f8 = 0;
  local_3c = 8;
  iVar2 = *(int *)&param_1->field_0x28;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_148158a8e;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar9 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    iStack_e4 = local_d0 + -1 + local_e0;
    if (iVar2 < iStack_e4) {
      iStack_e4 = iVar2;
    }
  }
LAB_148158a8e:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_b8.CurrentBitIndex = iStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = iStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_1;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_c0 = param_1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148158b90;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar15 = local_cc + -1 + uVar14;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_148158b90:
  do {
    pTVar6 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_108 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
    }
    iVar2 = local_40;
    if (((TStack_b8.CurrentBitIndex == uVar15) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      FVar13 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
        FVar13 = local_88.SecondaryData;
      }
      FVar10 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
               ((longlong)FVar13 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_107);
        }
        if (FVar13 == FVar10) break;
        local_c8 = *(FWeakObjectPtr *)FVar13;
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)param_1,local_c8.ObjectSerialNumber ^ local_c8.ObjectIndex,
                     (TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *)&local_c8);
        }
        FVar13 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
                 ((longlong)FVar13 + 8);
      }
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      return;
    }
    FVar13 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
             (*(longlong *)pTVar6 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar13);
    if (pUVar8 == (UObject *)0x0) {
      FVar10 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar13) {
        FVar10 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
                 &local_88;
        if (local_88.SecondaryData !=
            (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
          FVar10 = local_88.SecondaryData;
        }
        if ((ulonglong)FVar13 < (ulonglong)((longlong)FVar10 + (longlong)local_3c * 8)) {
          local_120 = (longlong)local_40;
          local_118 = 8;
          local_130 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)
                      &local_88;
          if (local_88.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
            local_130 = local_88.SecondaryData;
          }
          local_138 = FVar13;
          local_128 = (longlong)local_3c;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>_>
                             (0x408,&local_88,&local_3c);
      }
      lVar11 = (longlong)local_40;
      FVar10 = (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = local_88.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(FWeakObjectPtr *)((longlong)FVar10 + lVar11 * 8) = *(FWeakObjectPtr *)FVar13;
    }
    else {
      FVar4 = *(FWeakObjectPtr *)((longlong)FVar13 + 8);
      lVar11 = *(longlong *)&pUVar8[0x21].field_0x20;
      if (lVar11 != 0) {
        bVar7 = IsInRenderingThread();
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x308,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(lVar11 + 0x38) != 0) {
          *(int *)((longlong)FVar4 + 0x100) = *(int *)((longlong)FVar4 + 0x100) + 1;
          *(longlong *)((longlong)FVar4 + 0x108) =
               *(longlong *)((longlong)FVar4 + 0x108) + *(longlong *)(lVar11 + 0x38);
          *(longlong *)((longlong)FVar4 + 0x110) =
               *(longlong *)((longlong)FVar4 + 0x110) + *(longlong *)(lVar11 + 0x40);
          *(longlong *)((longlong)FVar4 + 0x118) =
               *(longlong *)((longlong)FVar4 + 0x118) + *(longlong *)(lVar11 + 0x48);
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x120),
                     *(longlong *)(lVar11 + 0x48) + *(longlong *)(lVar11 + 0x40));
          if (*(ulonglong *)(lVar11 + 0x38) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (ulonglong)(*(longlong *)(lVar11 + 0x48) + *(longlong *)(lVar11 + 0x40)) /
                    *(ulonglong *)(lVar11 + 0x38);
          }
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x180),uVar9);
        }
        if (*(longlong *)(lVar11 + 0x50) != 0) {
          *(int *)((longlong)FVar4 + 0x1e0) = *(int *)((longlong)FVar4 + 0x1e0) + 1;
          *(longlong *)((longlong)FVar4 + 0x1e8) =
               *(longlong *)((longlong)FVar4 + 0x1e8) + *(longlong *)(lVar11 + 0x50);
          *(longlong *)((longlong)FVar4 + 0x1f0) =
               *(longlong *)((longlong)FVar4 + 0x1f0) + *(longlong *)(lVar11 + 0x58);
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x1f8),*(long64 *)(lVar11 + 0x58));
          if (*(ulonglong *)(lVar11 + 0x50) == 0) {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar4 + 600),0);
          }
          else {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar4 + 600),
                       *(ulonglong *)(lVar11 + 0x58) / *(ulonglong *)(lVar11 + 0x50));
          }
        }
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// TickStats_Internal<UWorld_const_,`FParticlePerfStatsListener_GatherAll::Tick'::__l2::<lambda_1>_> @ 148158e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticlePerfStatsListener_GatherAll::
TickStats_Internal<UWorld_const_,_FParticlePerfStatsListener_GatherAll::Tick_::__l2::<lambda_1>_>
          (FParticlePerfStatsListener_GatherAll *this,
          TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
          *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FWeakObjectPtr FVar5;
  ulonglong *puVar6;
  code *pcVar7;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar8;
  bool bVar9;
  UObject *pUVar10;
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> FVar11;
  longlong lVar12;
  int iVar13;
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> FVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_158 [32];
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> local_138;
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108;
  undefined1 local_107 [7];
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  FWeakObjectPtr local_c8;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = &param_1->field_0x10;
  local_88.SecondaryData = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0;
  local_40 = 0;
  iStack_f8 = 0;
  local_3c = 8;
  iVar3 = *(int *)&param_1->field_0x28;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_148158f2e;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_d0 = (int)lVar12;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_148158f2e:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_b8.CurrentBitIndex = iStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = iStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_1;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_c0 = param_1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148159031;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_cc = (int)lVar12;
    uVar15 = local_cc + -1 + uVar18;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_148159031:
  do {
    pTVar8 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_108 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
    }
    iVar3 = local_40;
    if (((TStack_b8.CurrentBitIndex == uVar15) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    {
      FVar14 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
        FVar14 = local_88.SecondaryData;
      }
      FVar11 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)
               ((longlong)FVar14 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_107);
        }
        if (FVar14 == FVar11) break;
        local_c8 = *(FWeakObjectPtr *)FVar14;
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)param_1,local_c8.ObjectSerialNumber ^ local_c8.ObjectIndex,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_c8);
        }
        FVar14 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)
                 ((longlong)FVar14 + 8);
      }
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      return;
    }
    FVar14 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)
             (*(longlong *)pTVar8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar14);
    if (pUVar10 == (UObject *)0x0) {
      FVar11 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
        FVar11 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar11 <= (ulonglong)FVar14) {
        FVar11 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
        if (local_88.SecondaryData !=
            (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
          FVar11 = local_88.SecondaryData;
        }
        if ((ulonglong)FVar14 < (ulonglong)((longlong)FVar11 + (longlong)local_3c * 8)) {
          local_120 = (longlong)local_40;
          local_118 = 8;
          local_130 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
          if (local_88.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
            local_130 = local_88.SecondaryData;
          }
          local_138 = FVar14;
          local_128 = (longlong)local_3c;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>_>
                             (0x408,&local_88,&local_3c);
      }
      lVar12 = (longlong)local_40;
      FVar11 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
        FVar11 = local_88.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(FWeakObjectPtr *)((longlong)FVar11 + lVar12 * 8) = *(FWeakObjectPtr *)FVar14;
    }
    else {
      FVar5 = *(FWeakObjectPtr *)((longlong)FVar14 + 8);
      puVar6 = *(ulonglong **)&pUVar10[0x3e].field_0x10;
      if (puVar6 != (ulonglong *)0x0) {
        bVar9 = IsInGameThread();
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x302,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*puVar6 != 0) {
          *(int *)FVar5 = *(int *)FVar5 + 1;
          *(longlong *)((longlong)FVar5 + 200) = *(longlong *)((longlong)FVar5 + 200) + *puVar6;
          *(longlong *)((longlong)FVar5 + 0xd0) = *(longlong *)((longlong)FVar5 + 0xd0) + puVar6[1];
          LOCK();
          *(longlong *)((longlong)FVar5 + 0xd8) = *(longlong *)((longlong)FVar5 + 0xd8) + puVar6[2];
          UNLOCK();
          *(longlong *)((longlong)FVar5 + 0xe0) = *(longlong *)((longlong)FVar5 + 0xe0) + puVar6[3];
          LOCK();
          *(longlong *)((longlong)FVar5 + 0xe8) = *(longlong *)((longlong)FVar5 + 0xe8) + puVar6[4];
          UNLOCK();
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar5 + 8),
                     puVar6[1] + puVar6[5] + puVar6[3] + puVar6[6] + puVar6[4] + puVar6[2]);
          if (*puVar6 == 0) {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar5 + 0x68),0);
          }
          else {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar5 + 0x68),
                       (puVar6[4] + puVar6[3] + puVar6[5] + puVar6[6] + puVar6[1] + puVar6[2]) /
                       *puVar6);
          }
        }
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// TickStats_Internal<UWorld_const_,`FParticlePerfStatsListener_GatherAll::TickRT'::__l2::<lambda_1>_> @ 148159300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticlePerfStatsListener_GatherAll::
TickStats_Internal<UWorld_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
          (FParticlePerfStatsListener_GatherAll *this,
          TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
          *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  FWeakObjectPtr FVar4;
  code *pcVar5;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar6;
  bool bVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> FVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> FVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_158 [32];
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> local_138;
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108;
  undefined1 local_107 [7];
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  FWeakObjectPtr local_c8;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_> local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = &param_1->field_0x10;
  local_88.SecondaryData = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0;
  local_40 = 0;
  iStack_f8 = 0;
  local_3c = 8;
  iVar2 = *(int *)&param_1->field_0x28;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_1481593be;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar9 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    iStack_e4 = local_d0 + -1 + local_e0;
    if (iVar2 < iStack_e4) {
      iStack_e4 = iVar2;
    }
  }
LAB_1481593be:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_d8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_b8.CurrentBitIndex = iStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = iStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_1;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_c0 = param_1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1481594c0;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar15 = local_cc + -1 + uVar14;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_1481594c0:
  do {
    pTVar6 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_108 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
    }
    iVar2 = local_40;
    if (((TStack_b8.CurrentBitIndex == uVar15) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      FVar13 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
        FVar13 = local_88.SecondaryData;
      }
      FVar10 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)
               ((longlong)FVar13 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_107);
        }
        if (FVar13 == FVar10) break;
        local_c8 = *(FWeakObjectPtr *)FVar13;
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)param_1,local_c8.ObjectSerialNumber ^ local_c8.ObjectIndex,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_c8);
        }
        FVar13 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)
                 ((longlong)FVar13 + 8);
      }
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      return;
    }
    FVar13 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)
             (*(longlong *)pTVar6 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar13);
    if (pUVar8 == (UObject *)0x0) {
      FVar10 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar13) {
        FVar10 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
        if (local_88.SecondaryData !=
            (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
          FVar10 = local_88.SecondaryData;
        }
        if ((ulonglong)FVar13 < (ulonglong)((longlong)FVar10 + (longlong)local_3c * 8)) {
          local_120 = (longlong)local_40;
          local_118 = 8;
          local_130 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
          if (local_88.SecondaryData !=
              (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
            local_130 = local_88.SecondaryData;
          }
          local_138 = FVar13;
          local_128 = (longlong)local_3c;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>_>
                             (0x408,&local_88,&local_3c);
      }
      lVar11 = (longlong)local_40;
      FVar10 = (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = local_88.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(FWeakObjectPtr *)((longlong)FVar10 + lVar11 * 8) = *(FWeakObjectPtr *)FVar13;
    }
    else {
      FVar4 = *(FWeakObjectPtr *)((longlong)FVar13 + 8);
      lVar11 = *(longlong *)&pUVar8[0x3e].field_0x10;
      if (lVar11 != 0) {
        bVar7 = IsInRenderingThread();
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x308,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(lVar11 + 0x38) != 0) {
          *(int *)((longlong)FVar4 + 0x100) = *(int *)((longlong)FVar4 + 0x100) + 1;
          *(longlong *)((longlong)FVar4 + 0x108) =
               *(longlong *)((longlong)FVar4 + 0x108) + *(longlong *)(lVar11 + 0x38);
          *(longlong *)((longlong)FVar4 + 0x110) =
               *(longlong *)((longlong)FVar4 + 0x110) + *(longlong *)(lVar11 + 0x40);
          *(longlong *)((longlong)FVar4 + 0x118) =
               *(longlong *)((longlong)FVar4 + 0x118) + *(longlong *)(lVar11 + 0x48);
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x120),
                     *(longlong *)(lVar11 + 0x48) + *(longlong *)(lVar11 + 0x40));
          if (*(ulonglong *)(lVar11 + 0x38) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (ulonglong)(*(longlong *)(lVar11 + 0x48) + *(longlong *)(lVar11 + 0x40)) /
                    *(ulonglong *)(lVar11 + 0x38);
          }
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x180),uVar9);
        }
        if (*(longlong *)(lVar11 + 0x50) != 0) {
          *(int *)((longlong)FVar4 + 0x1e0) = *(int *)((longlong)FVar4 + 0x1e0) + 1;
          *(longlong *)((longlong)FVar4 + 0x1e8) =
               *(longlong *)((longlong)FVar4 + 0x1e8) + *(longlong *)(lVar11 + 0x50);
          *(longlong *)((longlong)FVar4 + 0x1f0) =
               *(longlong *)((longlong)FVar4 + 0x1f0) + *(longlong *)(lVar11 + 0x58);
          FAccumulatedParticlePerfStats::AddMax
                    ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)FVar4 + 0x1f8),*(long64 *)(lVar11 + 0x58));
          if (*(ulonglong *)(lVar11 + 0x50) == 0) {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar4 + 600),0);
          }
          else {
            FAccumulatedParticlePerfStats::AddMax
                      ((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)FVar4 + 600),
                       *(ulonglong *)(lVar11 + 0x58) / *(ulonglong *)(lVar11 + 0x50));
          }
        }
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// UnsetShaderParametersLegacyCS<FRHICommandListImmediate,FParticleSortKeyGenCS> @ 148159840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderParametersLegacyCS<FRHICommandListImmediate,FParticleSortKeyGenCS>
          (FRHICommandListImmediate *param_1,
          TShaderRefBase<FParticleSortKeyGenCS,FShaderMapPointerTable> *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  FParticleSortKeyGenCS *pFVar3;
  longlong lVar4;
  void *_Src;
  bool bVar5;
  int iVar6;
  FRHIShader *pFVar7;
  IRHIComputeContext *pIVar8;
  undefined8 *puVar9;
  void *_Dst;
  FRHIShader *local_res18;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    if (0 < *(int *)&param_1->field_0xd8) {
      local_res18 = (FRHIShader *)((ulonglong)local_res18 & 0xffffffffffffff00);
      bVar5 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()
                        (&local_res18);
      if (!bVar5) {
        *(undefined4 *)&param_1->field_0xd8 = 0;
        if (*(int *)&param_1->field_0xdc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
        }
      }
    }
    pFVar3 = param_2->ShaderContent;
    puVar1 = &param_1->field_0xd0;
    if (((pFVar3->InParticleIndices).NumResources != '\0') &&
       ((pFVar3->InParticleIndices).Type != BindlessSRV)) {
      iVar6 = *(int *)&param_1->field_0xd8;
      uVar2 = (pFVar3->InParticleIndices).BaseIndex;
      if (iVar6 == *(int *)&param_1->field_0xdc) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
      }
      *(int *)&param_1->field_0xd8 = iVar6 + 1;
      lVar4 = *(longlong *)puVar1;
      *(ushort *)(lVar4 + (longlong)iVar6 * 4) = uVar2;
      *(undefined1 *)(lVar4 + (longlong)iVar6 * 4 + 2) = 0;
    }
    if (((pFVar3->OutKeys).NumResources != '\0') && ((pFVar3->OutKeys).Type != BindlessSRV)) {
      iVar6 = *(int *)&param_1->field_0xd8;
      uVar2 = (pFVar3->OutKeys).BaseIndex;
      if (iVar6 == *(int *)&param_1->field_0xdc) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
      }
      *(int *)&param_1->field_0xd8 = iVar6 + 1;
      lVar4 = *(longlong *)puVar1;
      *(ushort *)(lVar4 + (longlong)iVar6 * 4) = uVar2;
      *(undefined1 *)(lVar4 + (longlong)iVar6 * 4 + 2) = 1;
    }
    if (((pFVar3->OutParticleIndices).NumResources != '\0') &&
       ((pFVar3->OutParticleIndices).Type != BindlessSRV)) {
      iVar6 = *(int *)&param_1->field_0xd8;
      uVar2 = (pFVar3->OutParticleIndices).BaseIndex;
      if (iVar6 == *(int *)&param_1->field_0xdc) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
      }
      *(int *)&param_1->field_0xd8 = iVar6 + 1;
      lVar4 = *(longlong *)puVar1;
      *(ushort *)(lVar4 + (longlong)iVar6 * 4) = uVar2;
      *(undefined1 *)(lVar4 + (longlong)iVar6 * 4 + 2) = 1;
    }
    pFVar7 = TShaderRefBase<FParticleSortKeyGenCS,FShaderMapPointerTable>::GetRHIShaderBase
                       (param_2,SF_Compute,true);
    iVar6 = *(int *)&param_1->field_0xd8;
    if (0 < iVar6) {
      _Src = *(void **)puVar1;
      local_res18 = pFVar7;
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar9;
          *(undefined8 **)&param_1->field_0x30 = puVar9 + 1;
          _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(longlong)iVar6 << 2,2);
          memcpy(_Dst,_Src,(longlong)iVar6 << 2);
          *puVar9 = &___7__FRHICommandSetShaderUnbinds_VFRHIComputeShader____6B_;
          puVar9[2] = local_res18;
          puVar9[1] = 0;
          puVar9[3] = _Dst;
          puVar9[4] = CONCAT44(uStack_3c,iVar6);
        }
        else {
          pIVar8 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          local_58 = SUB84(_Src,0);
          uStack_54 = (undefined4)((ulonglong)_Src >> 0x20);
          local_38 = local_58;
          uStack_34 = uStack_54;
          iStack_30 = iVar6;
          (**(code **)(pIVar8->_padding_ + 0xa8))(pIVar8,pFVar7,&local_38);
        }
      }
      *(undefined4 *)&param_1->field_0xd8 = 0;
      if (*(int *)&param_1->field_0xdc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,0,(ForAnyElementType *)puVar1,0,(int *)&param_1->field_0xdc);
      }
    }
  }
  return;
}

// FThreadSafeStaticStat<`FDispatchBatchedAsyncTasks::GetStatId'::__l2::FStat_FDispatchBatchedAsyncTasks> @ 148159b20

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FDispatchBatchedAsyncTasks::GetStatId(void)const_::_2_::FStat_FDispatchBatchedAsyncTasks>
* __thiscall
FThreadSafeStaticStat<`FDispatchBatchedAsyncTasks::GetStatId'::__l2::FStat_FDispatchBatchedAsyncTasks>
::
FThreadSafeStaticStat<_FDispatchBatchedAsyncTasks::GetStatId_::__l2::FStat_FDispatchBatchedAsyncTasks>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FDispatchBatchedAsyncTasks");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FDispatchBatchedAsyncTasks","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FGameThreadDispatchBatchedAsyncTasks::GetStatId'::__l2::FStat_FGameThreadDispatchBatchedAsyncTasks> @ 148159bb0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FGameThreadDispatchBatchedAsyncTasks::GetStatId(void)const_::_2_::FStat_FGameThreadDispatchBatchedAsyncTasks>
* __thiscall
FThreadSafeStaticStat<`FGameThreadDispatchBatchedAsyncTasks::GetStatId'::__l2::FStat_FGameThreadDispatchBatchedAsyncTasks>
::
FThreadSafeStaticStat<_FGameThreadDispatchBatchedAsyncTasks::GetStatId_::__l2::FStat_FGameThreadDispatchBatchedAsyncTasks>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FGameThreadDispatchBatchedAsyncTasks");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FGameThreadDispatchBatchedAsyncTasks","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FParticleAsyncTask::GetStatId'::__l2::FStat_FParticleAsyncTask> @ 148159c40

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FParticleAsyncTask::GetStatId(void)const_::_2_::FStat_FParticleAsyncTask>
* __thiscall
FThreadSafeStaticStat<`FParticleAsyncTask::GetStatId'::__l2::FStat_FParticleAsyncTask>::
FThreadSafeStaticStat<_FParticleAsyncTask::GetStatId_::__l2::FStat_FParticleAsyncTask>(void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FParticleAsyncTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FParticleAsyncTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FParticleFinalizeTask::GetStatId'::__l2::FStat_FParticleFinalizeTask> @ 148159cd0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FParticleFinalizeTask::GetStatId(void)const_::_2_::FStat_FParticleFinalizeTask>
* __thiscall
FThreadSafeStaticStat<`FParticleFinalizeTask::GetStatId'::__l2::FStat_FParticleFinalizeTask>::
FThreadSafeStaticStat<_FParticleFinalizeTask::GetStatId_::__l2::FStat_FParticleFinalizeTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FParticleFinalizeTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FParticleFinalizeTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator> @ 148159df0

TSet<TTuple<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>
::
TSet<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>
          (void *this,
          TSet<TTuple<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *_Src;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(this,0,0);
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)this = *(undefined8 *)&param_1->Elements;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)((longlong)this + 8) = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)((longlong)this + 0xc) = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if ((undefined1 *)((longlong)this + 0x10) != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove((undefined1 *)((longlong)this + 0x10),_Src,0x10);
      }
      if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)this + 0x20));
      }
      *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)((longlong)this + 0x28) = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)((longlong)this + 0x30) = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)((longlong)this + 0x34) = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)((longlong)this + 0x38) = *(undefined4 *)(param_1->Hash).InlineData;
  }
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  *(ForElementType<FSetElementId> *)((longlong)this + 0x40) = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)((longlong)this + 0x48) = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// ~TFunction_OwnedObject<`UParticleSystemComponent::OnRegister'::__l2::<lambda_1>,0,0> @ 14815f7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UParticleSystemComponent::OnRegister'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UParticleSystemComponent::OnRegister_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UParticleSystemComponent::OnRegister'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FParticlePerfStatsManager::RemoveListener'::__l2::<lambda_1>,1,0> @ 14815f7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParticlePerfStatsManager::RemoveListener'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FParticlePerfStatsManager::RemoveListener_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FParticlePerfStatsManager::RemoveListener'::`2'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FParticlePerfStatsManager::Tick'::__l5::<lambda_1>,1,1> @ 14815f7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParticlePerfStatsManager::Tick'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FParticlePerfStatsManager::Tick_::__l5::<lambda_1>,1,1>(void *this)

{
  TSharedPtr<FParticlePerfStatsListener,1> *pTVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FParticlePerfStatsManager::Tick'::`5'::<lambda_1>,1,1>::_vftable_;
  pTVar1 = *(TSharedPtr<FParticlePerfStatsListener,1> **)((longlong)this + 0x88);
  if (*(TSharedPtr<FParticlePerfStatsListener,1> **)((longlong)this + 0x88) ==
      (TSharedPtr<FParticlePerfStatsListener,1> *)0x0) {
    pTVar1 = (TSharedPtr<FParticlePerfStatsListener,1> *)((longlong)this + 8);
  }
  DestructItems<TSharedPtr<FParticlePerfStatsListener,1>,int>
            (pTVar1,*(int *)((longlong)this + 0x90));
  if (*(void **)((longlong)this + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x88));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FAccumulatedParticlePerfStats::Reset'::__l7::<lambda_1>,1,0> @ 14815f840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAccumulatedParticlePerfStats::Reset'::__l7::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FAccumulatedParticlePerfStats::Reset_::__l7::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAccumulatedParticlePerfStats::Reset'::`7'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UParticleSystemComponent::CreateDynamicData'::__l105::<lambda_1>,1,0> @ 14815f860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UParticleSystemComponent::CreateDynamicData'::__l105::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UParticleSystemComponent::CreateDynamicData_::__l105::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UParticleSystemComponent::CreateDynamicData'::`105'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FParticlePerfStats::Reset'::__l14::<lambda_1>,1,0> @ 14815f880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParticlePerfStats::Reset'::__l14::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FParticlePerfStats::Reset_::__l14::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FParticlePerfStats::Reset'::`14'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14815fa40

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,this,0,(int *)((longlong)this + 0xc));
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

// ~TSparseArray<TSparseSetElement<TTuple<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14815fae0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UWorld_*,_<lambda_27>::operator()_::__l2::FPSCWorldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,this,0,(int *)((longlong)this + 0xc));
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

// operator<< @ 148160f90

FArchive * __cdecl operator<<(FArchive *param_1,FParticleEmitterReplayFrame *param_2)

{
  int iVar1;
  int *piVar2;
  FDynamicEmitterReplayDataBase *pFVar3;
  FDynamicTrailsEmitterReplayData *pFVar4;
  FDynamicRibbonEmitterReplayData *pFVar5;
  FDynamicBeam2EmitterReplayData *pFVar6;
  FDynamicSpriteEmitterReplayDataBase *this;
  
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->EmitterType = 0;
    param_2->OriginalEmitterIndex = 0;
    param_2->FrameState = (FDynamicEmitterReplayDataBase *)0x0;
  }
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->EmitterType = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->OriginalEmitterIndex,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->OriginalEmitterIndex);
    }
  }
  else {
    param_2->OriginalEmitterIndex = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) goto LAB_148161162;
  iVar1 = param_2->EmitterType;
  if (iVar1 == 1) {
    this = operator_new(0xd8);
    if (this == (FDynamicSpriteEmitterReplayDataBase *)0x0) {
LAB_148161155:
      this = (FDynamicSpriteEmitterReplayDataBase *)0x0;
    }
    else {
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase(this);
      this->_padding_ = (longlong)&___7FDynamicSpriteEmitterReplayData__6B_;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        pFVar6 = operator_new(0x168);
        if (pFVar6 != (FDynamicBeam2EmitterReplayData *)0x0) {
          pFVar6 = FDynamicBeam2EmitterReplayData::FDynamicBeam2EmitterReplayData(pFVar6);
          param_2->FrameState = (FDynamicEmitterReplayDataBase *)pFVar6;
          goto LAB_148161162;
        }
      }
      else if (iVar1 == 4) {
        pFVar5 = operator_new(0x100);
        if (pFVar5 != (FDynamicRibbonEmitterReplayData *)0x0) {
          pFVar5 = FDynamicRibbonEmitterReplayData::FDynamicRibbonEmitterReplayData(pFVar5);
          param_2->FrameState = (FDynamicEmitterReplayDataBase *)pFVar5;
          goto LAB_148161162;
        }
      }
      else if ((iVar1 == 5) &&
              (pFVar4 = operator_new(0xf8), pFVar4 != (FDynamicTrailsEmitterReplayData *)0x0)) {
        pFVar4 = FDynamicTrailsEmitterReplayData::FDynamicTrailsEmitterReplayData(pFVar4);
        param_2->FrameState = (FDynamicEmitterReplayDataBase *)pFVar4;
        goto LAB_148161162;
      }
      param_2->FrameState = (FDynamicEmitterReplayDataBase *)0x0;
      goto LAB_148161162;
    }
    this = operator_new(0x108);
    if (this == (FDynamicSpriteEmitterReplayDataBase *)0x0) goto LAB_148161155;
    FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase(this);
    this->_padding_ = (longlong)&___7FDynamicMeshEmitterReplayData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0x3f800000;
  }
  param_2->FrameState = (FDynamicEmitterReplayDataBase *)this;
LAB_148161162:
  pFVar3 = param_2->FrameState;
  if (pFVar3 != (FDynamicEmitterReplayDataBase *)0x0) {
    (**(code **)(pFVar3->_padding_ + 8))(pFVar3,param_1);
  }
  return param_1;
}

// operator<< @ 148161190

FArchive * __cdecl operator<<(FArchive *param_1,FParticleSystemReplayFrame *param_2)

{
  if ((param_1->field_0x28 & 1) != 0) {
    (param_2->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Emitters).ArrayNum = 0;
    (param_2->Emitters).ArrayMax = 0;
  }
  TArrayPrivateFriend::Serialize<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Emitters);
  return param_1;
}

// operator() @ 1481623c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  wchar_t *pwVar8;
  FParticlePerfStatsListener *pFVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  TSharedPtr<FParticlePerfStatsListener,1> local_28;
  
  if (param_1->ArrayNum < 1) {
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar2 + 8) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)pFVar2;
  }
  aVar5 = (atomic<int>)_wtoi(pwVar8);
  if ((int)aVar5 < 1) {
    return;
  }
  bVar10 = false;
  bVar12 = false;
  bVar11 = true;
  if (1 < param_1->ArrayNum) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 0x18) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(pFVar2 + 0x10);
    }
    iVar6 = _wtoi(pwVar8);
    bVar10 = iVar6 != 0;
  }
  if (2 < param_1->ArrayNum) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 0x28) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(pFVar2 + 0x20);
    }
    iVar6 = _wtoi(pwVar8);
    bVar11 = iVar6 != 0;
  }
  if (3 < param_1->ArrayNum) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar2 + 0x38) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(pFVar2 + 0x30);
    }
    iVar6 = _wtoi(pwVar8);
    bVar12 = iVar6 != 0;
  }
  pTVar7 = ::operator_new(0x150);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FParticlePerfStatsListener *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFParticlePerfStatsListener_TimedTest___00_SharedPointerInternals__6B_
    ;
    FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
              ((FParticlePerfStatsListener_GatherAll *)(pTVar7 + 1),bVar10,bVar11,bVar12);
    pFVar9 = (FParticlePerfStatsListener *)(pTVar7 + 1);
    pTVar7[0x14].SharedReferenceCount = aVar5;
    pTVar7[1]._padding_ = (longlong)&___7FParticlePerfStatsListener_TimedTest__6B_;
    if (pFVar9 == (FParticlePerfStatsListener *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_148162588;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FParticlePerfStatsListener **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar9->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_148162588:
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar9;
  local_28.SharedReferenceCount.ReferenceController = pTVar7;
  FParticlePerfStatsManager::AddListener(&local_28,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 148162600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffed8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall <lambda_27>::operator()(<lambda_27> *this)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ulonglong uVar3;
  UParticleSystemComponent *this_00;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  UParticleSystem *pUVar6;
  UObjectBaseUtility *pUVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FIdentityFunctor FVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  UWorld *pUVar18;
  FPSCWorldInfo *this_01;
  FString *pFVar19;
  byte bVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined1 *puVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  undefined4 uVar26;
  uint uVar27;
  longlong *plVar28;
  ForElementType<unsigned_int> FVar29;
  longlong lVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  int iVar33;
  longlong *plVar34;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  longlong local_3d0;
  uint local_3c8;
  uint local_3c0;
  uint local_3b8;
  FScriptContainerElement *local_3b0;
  FScriptContainerElement *local_3a8;
  FIdentityFunctor local_398;
  undefined1 local_397;
  undefined1 local_396;
  undefined1 local_395;
  undefined1 local_394 [4];
  uint local_390;
  uint local_38c;
  undefined1 local_388;
  undefined1 local_387 [7];
  FString local_380;
  longlong *local_370;
  undefined8 uStack_368;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_360;
  uint uStack_358;
  uint uStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  int local_348;
  undefined4 uStack_344;
  FString local_340;
  int local_330 [2];
  int local_328;
  uint uStack_324;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_320;
  undefined4 local_318;
  uint uStack_314;
  int iStack_310;
  undefined4 uStack_30c;
  TObjectPtr<UParticleSystem>_u_0 local_308;
  longlong *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f8;
  undefined8 local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2d0;
  TObjectPtr<UParticleSystem>_u_0 *local_2b0;
  FScriptContainerElement *local_2a8;
  FPSCWorldInfo *local_2a0;
  ForAnyElementType *local_298;
  FValueComparisonClass<_public:___cdecl_<lambda_27>::operator()(void)const_::_53_::<lambda_2>_>
  local_290;
  int local_288;
  int local_284;
  TObjectIterator<UParticleSystemComponent> local_280;
  int local_268;
  int local_264;
  int local_260;
  UWorld *local_258;
  longlong *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  longlong *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  longlong *local_1b0;
  longlong lStack_1a8;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  undefined8 uStack_198;
  int iStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_164;
  undefined4 local_144;
  UObjectBaseUtility *local_138;
  longlong local_130;
  undefined8 local_128;
  TBitArray<FDefaultBitArrayAllocator> local_120;
  undefined8 uStack_100;
  void *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined4 local_88;
  int local_84;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  local_a8.MaxBits = 0x80;
  local_390 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.NumBits = 0;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_88 = 0xffffffff;
  TObjectIterator<UParticleSystemComponent>::TObjectIterator<UParticleSystemComponent>
            (&local_280,RF_ClassDefaultObject,true,Borrowed);
  while( true ) {
    iVar33 = 0;
    lVar25 = (longlong)local_280.Index;
    if ((local_280.Index < 0) ||
       (iVar22 = local_280.ObjectArray.ArrayNum, iVar22 <= local_280.Index)) break;
    uVar16 = 0;
    if (local_280.Index < iVar22) {
      uVar16 = (uint)~local_280.Index >> 0x1f;
    }
    if (uVar16 == 0) {
      local_3d0 = (longlong)iVar22;
      local_3d8 = lVar25;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    this_00 = *(UParticleSystemComponent **)
               (local_280.ObjectArray.AllocatorInstance.Data + lVar25 * 8);
    if ((this_00 == (UParticleSystemComponent *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("PSC",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                            ,0x15d5,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar18 = *(UWorld **)&this_00->field_0xb0;
    if (pUVar18 == (UWorld *)0x0) {
      pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
    }
    local_308 = (TObjectPtr<UParticleSystem>_u_0)(this_00->Template).field0_0x0.DebugPtr;
    uVar16 = ((uint)((ulonglong)pUVar18 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar18 >> 4)) *
             -0x7a143595;
    uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
    local_258 = pUVar18;
    this_01 = TMapBase<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo,0>_>
              ::FindOrAddImpl<UWorld_*_const_&>(&local_b8,uVar16 >> 0x10 ^ uVar16,&local_258);
    uVar16 = ((uint)((ulonglong)local_308.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)local_308.DebugPtr >> 4)) * -0x7a143595;
    uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
    uVar16 = uVar16 >> 0x10 ^ uVar16;
    local_2a0 = this_01;
    if (*(int *)&(this_01->SummaryMap).field_0x8 != *(int *)&(this_01->SummaryMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this_01->SummaryMap).field_0x40;
      puVar23 = &(this_01->SummaryMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar23 = puVar4;
      }
      iVar22 = *(int *)(puVar23 +
                       (ulonglong)(*(int *)&(this_01->SummaryMap).field_0x48 - 1U & uVar16) * 4);
      if (iVar22 != -1) {
        do {
          puVar21 = (undefined8 *)((longlong)iVar22 * 0x40 + *(longlong *)&this_01->SummaryMap);
          if ((UParticleSystem *)*puVar21 == local_308.DebugPtr) {
            if (puVar21 != (undefined8 *)0x0) goto LAB_148162859;
            break;
          }
          iVar22 = *(int *)(puVar21 + 7);
        } while (iVar22 != -1);
      }
    }
    local_2b0 = &local_308;
    local_3d8 = 0;
    TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UParticleSystem_*_const_&>_>
              (this_01,(uint)local_330,
               (TKeyInitializer<UParticleSystem_*_const_&> *)(ulonglong)uVar16,(bool *)&local_2b0);
    puVar21 = (undefined8 *)((longlong)local_330[0] * 0x40 + *(longlong *)&this_01->SummaryMap);
LAB_148162859:
    uVar16 = *(uint *)(puVar21 + 2);
    pFVar1 = (ForAnyElementType *)(puVar21 + 1);
    local_298 = pFVar1;
    if (uVar16 == *(uint *)((longlong)puVar21 + 0x14)) {
      uVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,pFVar1,(int *)((longlong)puVar21 + 0x14));
      *(uint *)(puVar21 + 2) = uVar16;
    }
    pFVar5 = pFVar1->Data;
    lVar25 = (longlong)(int)uVar16;
    *(uint *)(puVar21 + 2) = uVar16 + 1;
    lVar30 = lVar25 * 0x10;
    DefaultConstructItems<_<lambda_27>::operator()_::__l2::FPSCInfo,int>(pFVar5 + lVar30,1);
    uVar27 = 0;
    if ((int)uVar16 < *(int *)(puVar21 + 2)) {
      uVar27 = ~uVar16 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (local_3d8 = lVar25, local_3d0 = (longlong)*(int *)(puVar21 + 2),
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar5 = pFVar1->Data;
    *(UParticleSystemComponent **)(pFVar5 + lVar30) = this_00;
    this_01->TotalPSCs = this_01->TotalPSCs + 1;
    local_2a8 = pFVar5;
    cVar15 = (**(code **)(*(longlong *)this_00 + 0x430))(this_00);
    if (cVar15 == '\0') {
LAB_148162a18:
      TObjectIterator<UParticleSystemComponent>::Advance(&local_280);
    }
    else {
      local_38c = UParticleSystemComponent::GetNumActiveParticles(this_00);
      *(uint *)(pFVar5 + lVar30 + 0xc) = local_38c;
      if ((this_00->ManagerHandle == -1) || ((BADTYPE)this_00->bPendingManagerRemove)) {
        *(int *)(puVar21 + 3) = *(int *)(puVar21 + 3) + 1;
        this_01->TotalTicking = this_01->TotalTicking + 1;
      }
      else {
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)((longlong)puVar21 + 0x1c) + 1;
        this_01->TotalManaged = this_01->TotalManaged + 1;
      }
      if ((this_00->Template).field0_0x0.DebugPtr == (UParticleSystem *)0x0) {
        *(int *)(puVar21 + 4) = *(int *)(puVar21 + 4) + 1;
        this_01->TotalTickingNoTemplate = this_01->TotalTickingNoTemplate + 1;
      }
      if ((this_00->EmitterInstances).ArrayNum == 0) {
        *(int *)(puVar21 + 6) = *(int *)(puVar21 + 6) + 1;
        this_01->TotalTickingNoEmitters = this_01->TotalTickingNoEmitters + 1;
      }
      bVar14 = (this_00->field_0x9a & 0x10) == 0;
      if (bVar14) {
        *(int *)((longlong)puVar21 + 0x24) = *(int *)((longlong)puVar21 + 0x24) + 1;
        this_01->TotalTickingButInactive = this_01->TotalTickingButInactive + 1;
      }
      pFVar5[lVar30 + 8] = (FScriptContainerElement)!bVar14;
      bVar14 = UParticleSystemComponent::CanConsiderInvisible(this_00);
      pFVar5[lVar30 + 10] = (FScriptContainerElement)!bVar14;
      if (bVar14) {
        *(int *)(puVar21 + 5) = *(int *)(puVar21 + 5) + 1;
        this_01->TotalTickingButInvisible = this_01->TotalTickingButInvisible + 1;
      }
      if ((bool)this_00->bIsManagingSignificance) {
        pUVar6 = (this_00->Template).field0_0x0.DebugPtr;
        pFVar32 = (pUVar6->Emitters).AllocatorInstance.Data;
        iVar22 = (pUVar6->Emitters).ArrayNum;
        pFVar5 = pFVar32 + (longlong)iVar22 * 8;
        while( true ) {
          if ((pUVar6->Emitters).ArrayNum != iVar22) {
            local_397 = 0;
            `TCheckedPointerIterator<TObjectPtr<UParticleEmitter>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_397);
          }
          if (pFVar32 == pFVar5) break;
          bVar14 = UParticleEmitter::IsSignificant
                             (*(UParticleEmitter **)pFVar32,this_00->RequiredSignificance);
          if (bVar14) {
            iVar33 = iVar33 + 1;
          }
          pFVar32 = pFVar32 + 8;
        }
        local_2a8[lVar30 + 9] = (FScriptContainerElement)(iVar33 != 0);
        if ((iVar33 == 0) && (local_38c == 0)) {
          piVar2 = (int *)((longlong)&local_298[4].Data + 4);
          *piVar2 = *piVar2 + 1;
          local_2a0->TotalTickingButNonSignificant = local_2a0->TotalTickingButNonSignificant + 1;
        }
        goto LAB_148162a18;
      }
      pFVar5[lVar30 + 9] = (FScriptContainerElement)0x1;
      TObjectIterator<UParticleSystemComponent>::Advance(&local_280);
    }
  }
  if (local_280.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.ObjectArray.AllocatorInstance.Data);
  }
  iVar33 = local_a8.NumBits;
  pTStack_360 = &local_a8;
  local_328 = 0;
  uStack_324 = 1;
  uStack_314 = 0;
  iStack_310 = 0;
  if (local_a8.NumBits != 0) {
    FVar29 = (ForElementType<unsigned_int>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar29 = local_a8.AllocatorInstance.SecondaryData;
    }
    uVar16 = *(uint *)FVar29;
    while (uVar16 == 0) {
      iStack_310 = iStack_310 + 0x20;
      lVar25 = (longlong)local_328;
      local_328 = local_328 + 1;
      if ((int)((local_a8.NumBits - 1U) + ((int)(local_a8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          local_328) {
        uStack_314 = local_a8.NumBits;
        goto LAB_148162aff;
      }
      uVar16 = *(uint *)((uchar *)((longlong)FVar29 + 4) + lVar25 * 4);
    }
    uStack_324 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_324 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_288 = (int)lVar25;
    uStack_314 = local_288 + -1 + iStack_310;
    if (local_a8.NumBits < (int)uStack_314) {
      uStack_314 = local_a8.NumBits;
    }
  }
LAB_148162aff:
  local_318 = 0xffffffff;
  uStack_368 = CONCAT44(uStack_324,local_328);
  local_370 = &local_b8;
  uStack_354 = uStack_314;
  uStack_358 = 0xffffffff;
  uStack_34c = uStack_30c;
  iStack_350 = iStack_310;
  local_2d0.Array = &local_a8;
  bVar20 = (byte)local_a8.NumBits & 0x1f;
  local_348 = (int)local_b0 - local_84;
  local_2d0._padding_._0_4_ = local_a8.NumBits >> 5;
  local_2d0._padding_._4_4_ = 1 << bVar20;
  local_2d0.UnvisitedBitMask = -1 << bVar20;
  local_2d0.BaseBitIndex = local_a8.NumBits & 0xffffffe0;
  local_2d0.CurrentBitIndex = local_a8.NumBits;
  uStack_1f8 = CONCAT44(uStack_344,local_348);
  pTStack_320 = pTStack_360;
  local_220 = local_370;
  TStack_218._padding_ = uStack_368;
  TStack_218.Array = pTStack_360;
  TStack_218._16_8_ = _uStack_358;
  TStack_218._24_8_ = _iStack_350;
  if ((local_a8.NumBits < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (iVar33 != local_a8.NumBits) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2d0);
  }
  FVar13 = local_398;
  uVar12 = _UNK_150631d98;
  uVar10 = ___xmm_00000000ffffffff0000008000000000;
  TStack_2f8._padding_ = CONCAT44(local_2d0._padding_._4_4_,(int)local_2d0._padding_);
  local_300 = &local_b8;
  TStack_2f8.CurrentBitIndex = local_2d0.CurrentBitIndex;
  TStack_2f8.UnvisitedBitMask = local_2d0.UnvisitedBitMask;
  TStack_2f8._28_4_ = local_2d0._28_4_;
  TStack_2f8.BaseBitIndex = local_2d0.BaseBitIndex;
  TStack_2f8.Array = local_2d0.Array;
  local_2d8 = CONCAT44(local_2d8._4_4_,(int)local_b0 - local_84);
  local_1a0 = local_2d0.Array;
  uStack_188 = local_2d8;
  uVar16 = local_390;
  local_1b0 = local_300;
  lStack_1a8 = TStack_2f8._padding_;
  uStack_198 = TStack_2f8._16_8_;
  local_190 = TStack_2f8._24_8_;
  do {
    plVar28 = local_220;
    iVar33 = 0;
    if ((int)local_220[1] - *(int *)((longlong)local_220 + 0x34) != (int)uStack_1f8) {
      local_396 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_396);
    }
    uVar11 = ___xmm_00000000ffffffff0000008000000000;
    if (((TStack_218.CurrentBitIndex == iStack_194) && (TStack_218.Array == local_1a0)) &&
       (plVar28 == local_1b0)) {
      local_70 = 0;
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<UWorld_*,`<lambda_27>::operator()'::__l2::FPSCWorldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UWorld_*,_<lambda_27>::operator()_::__l2::FPSCWorldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8);
      return;
    }
    lVar25 = *plVar28;
    local_138 = *(UObjectBaseUtility **)((longlong)TStack_218.CurrentBitIndex * 0x88 + lVar25);
    lVar25 = (longlong)TStack_218.CurrentBitIndex * 0x88 + lVar25;
    local_130 = 0;
    local_128 = 0;
    local_120.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    ___xmm_00000000ffffffff0000008000000000 = (int)uVar10;
    _UNK_150631d94 = SUB84(uVar10,4);
    local_120.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_120.MaxBits = _UNK_150631d94;
    uStack_100 = uVar12;
    local_f0 = (void *)0x0;
    local_e8 = 0;
    ___xmm_00000000ffffffff0000008000000000 = uVar11;
    TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>
    ::operator=(&local_130,
                (TSet<TTuple<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,0>,FDefaultSetAllocator>
                 *)(lVar25 + 8));
    pUVar7 = local_138;
    local_e0 = *(undefined4 *)(lVar25 + 0x58);
    local_dc = *(undefined4 *)(lVar25 + 0x5c);
    local_d8 = *(undefined4 *)(lVar25 + 0x60);
    local_d4 = *(undefined4 *)(lVar25 + 100);
    local_d0 = *(uint *)(lVar25 + 0x68);
    local_cc = *(uint *)(lVar25 + 0x6c);
    local_c8 = *(undefined4 *)(lVar25 + 0x70);
    local_c4 = *(undefined4 *)(lVar25 + 0x74);
    local_c0 = *(undefined4 *)(lVar25 + 0x78);
    local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_380.Data.ArrayNum = 0;
    local_380.Data.ArrayMax = 0;
    if (local_138 != (UObjectBaseUtility *)0x0) {
      switch(local_138[9].field_0x22) {
      case 0:
        iVar22 = 4;
        pwVar24 = L"None";
        break;
      case 1:
        iVar22 = 4;
        pwVar24 = L"Game";
        break;
      case 2:
        iVar22 = 6;
        pwVar24 = L"Editor";
        break;
      case 3:
        iVar22 = 3;
        pwVar24 = L"PIE";
        break;
      case 4:
        iVar22 = 0xd;
        pwVar24 = L"EditorPreview";
        break;
      case 5:
        iVar22 = 0xb;
        pwVar24 = L"GamePreview";
        break;
      case 6:
        iVar22 = 7;
        pwVar24 = L"GameRPC";
        break;
      case 7:
        iVar22 = 8;
        pwVar24 = L"Inactive";
        break;
      default:
        goto switchD_148162d5b_default;
      }
      ::FString::AppendChars(&local_380,pwVar24,iVar22);
switchD_148162d5b_default:
      ::FString::AppendChars(&local_380,L" | ",3);
      pFVar19 = UObjectBaseUtility::GetFullName(pUVar7,&local_1c0,(UObject *)0x0,None);
      iVar22 = (pFVar19->Data).ArrayNum;
      uVar27 = iVar22 - 1;
      if (iVar22 == 0) {
        uVar27 = 0;
      }
      ::FString::AppendChars(&local_380,(wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar27);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
    }
    if ((((4 < (byte)LogParticles._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
         4 < (byte)LogParticles._0_1_)) &&
        ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
         4 < (byte)LogParticles._0_1_ &&
         ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
          4 < (byte)LogParticles._0_1_ &&
          (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
          4 < (byte)LogParticles._0_1_)))))) &&
       ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
        4 < (byte)LogParticles._0_1_ &&
        (((((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            4 < (byte)LogParticles._0_1_ &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            4 < (byte)LogParticles._0_1_)) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
           4 < (byte)LogParticles._0_1_)) &&
          ((UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_________________151a26ba8,
                       (FLogCategoryBase *)&LogParticles), 4 < (byte)LogParticles._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_________________151a26ca8,
                       (FLogCategoryBase *)&LogParticles), 4 < (byte)LogParticles._0_1_)))) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
         4 < (byte)LogParticles._0_1_)))))) {
      local_3c0 = local_cc;
      local_3c8 = local_d0;
      local_3d0 = CONCAT44(local_3d0._4_4_,local_d8);
      local_3d8 = CONCAT44(local_3d8._4_4_,local_dc);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (4 < (byte)LogParticles._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
    }
    local_290.Predicate.Predicate =
         (TDereferenceWrapper<_public:___cdecl_<lambda_27>::operator()(void)const_::_2_::FPSCInfoSummary,_public:___cdecl_<lambda_27>::operator()(void)const_::_53_::<lambda_2>_>
          )&local_388;
    TSet<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>,TDefaultMapHashableKeyFuncs<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary,0>_>::FValueComparisonClass<_<lambda_27>::operator()_::__l53::<lambda_2>_>_>
              (&local_130,&local_290);
    uVar27 = local_120.NumBits;
    uVar17 = 1;
    uStack_354 = 0;
    iStack_350 = iVar33;
    if (local_120.NumBits != 0) {
      FVar29 = (ForElementType<unsigned_int>)&local_120;
      if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_120.AllocatorInstance.SecondaryData;
      }
      uVar31 = *(uint *)FVar29;
      while (uVar31 == 0) {
        lVar25 = (longlong)iVar33;
        iStack_350 = iStack_350 + 0x20;
        iVar33 = iVar33 + 1;
        uStack_354 = local_120.NumBits;
        if ((int)((local_120.NumBits - 1U) + ((int)(local_120.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar33) goto LAB_148163110;
        uVar31 = *(uint *)((uchar *)((longlong)FVar29 + 4) + lVar25 * 4);
      }
      uVar17 = -uVar31 & uVar31;
      uVar3 = (ulonglong)uVar17 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_284 = (int)lVar25;
      uStack_354 = local_284 + -1 + iStack_350;
      if (local_120.NumBits < (int)uStack_354) {
        uStack_354 = local_120.NumBits;
      }
    }
LAB_148163110:
    local_370 = &local_130;
    pTStack_360 = &local_120;
    uVar31 = local_120.NumBits & 0xffffffe0;
    local_348 = (int)local_128 - uStack_100._4_4_;
    uStack_368 = CONCAT44(uVar17,iVar33);
    uStack_358 = 0xffffffff;
    uStack_34c = local_164;
    TStack_2f8._padding_ = uStack_368;
    iVar33 = local_120.NumBits >> 5;
    local_2d8 = CONCAT44(uStack_344,local_348);
    bVar20 = (byte)local_120.NumBits;
    TStack_2f8.UnvisitedBitMask = 0xffffffff;
    TStack_2f8.CurrentBitIndex = uStack_354;
    TStack_2f8.BaseBitIndex = iStack_350;
    TStack_2f8._28_4_ = local_164;
    local_300 = local_370;
    TStack_2f8.Array = pTStack_360;
    if (local_120.NumBits < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (uVar27 != local_120.NumBits) {
      FVar29 = (ForElementType<unsigned_int>)&local_120;
      if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_120.AllocatorInstance.SecondaryData;
      }
      uVar27 = -1 << (bVar20 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar33 * 4);
      while (uVar27 == 0) {
        lVar25 = (longlong)iVar33;
        uVar31 = uVar31 + 0x20;
        iVar33 = iVar33 + 1;
        uVar27 = local_120.NumBits;
        if ((int)((local_120.NumBits - 1U) + ((int)(local_120.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar33) goto LAB_148163234;
        uVar27 = *(uint *)((uchar *)((longlong)FVar29 + 4) + lVar25 * 4);
      }
      uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_268 = (int)lVar25;
      uVar27 = local_268 + -1 + uVar31;
      if (local_120.NumBits < (int)uVar27) {
        uVar27 = local_120.NumBits;
      }
    }
LAB_148163234:
    while( true ) {
      plVar28 = local_300;
      if ((int)local_300[1] - *(int *)((longlong)local_300 + 0x34) != (int)local_2d8) {
        local_395 = 0;
        `TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_395);
      }
      if (((TStack_2f8.CurrentBitIndex == uVar27) && (TStack_2f8.Array == &local_120)) &&
         (plVar28 == &local_130)) break;
      lVar25 = *plVar28;
      lVar30 = (longlong)TStack_2f8.CurrentBitIndex * 0x40;
      pUVar7 = *(UObjectBaseUtility **)(lVar30 + lVar25);
      local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_340.Data.ArrayNum = 0;
      local_340.Data.ArrayMax = 0;
      if (pUVar7 != (UObjectBaseUtility *)0x0) {
        cVar15 = pUVar7[9].field_0x10;
        if (cVar15 == '\0') {
          pwVar24 = L"Low";
        }
        else if (cVar15 == '\x01') {
          pwVar24 = L"Med";
        }
        else if (cVar15 == '\x02') {
          pwVar24 = L"High";
        }
        else {
          if (cVar15 != '\x03') goto LAB_148163320;
          pwVar24 = L"Crit";
        }
        ::FString::operator=(&local_340,pwVar24);
      }
LAB_148163320:
      if (4 < (byte)LogParticles._0_1_) {
        if (pUVar7 == (UObjectBaseUtility *)0x0) {
          local_3a8 = (FScriptContainerElement *)0x151a262a8;
        }
        else {
          uVar16 = uVar16 | 2;
          pFVar19 = UObjectBaseUtility::GetFullName(pUVar7,&local_1f0,(UObject *)0x0,None);
          if ((pFVar19->Data).ArrayNum == 0) {
            local_3a8 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_3a8 = (pFVar19->Data).AllocatorInstance.Data;
          }
        }
        local_3b0 = (FScriptContainerElement *)L"";
        if (local_340.Data.ArrayNum != 0) {
          local_3b0 = local_340.Data.AllocatorInstance.Data;
        }
        if (pUVar7 == (UObjectBaseUtility *)0x0) {
          local_3b8 = 0;
        }
        else {
          local_3b8 = (byte)pUVar7[6].field_0xa & 1;
        }
        local_3c0 = *(uint *)(lVar30 + 0x28 + lVar25);
        local_3c8 = *(uint *)(lVar30 + 0x24 + lVar25);
        local_3d0 = CONCAT44(local_3d0._4_4_,*(undefined4 *)(lVar30 + 0x1c + lVar25));
        local_3d8 = CONCAT44(local_3d8._4_4_,*(undefined4 *)(lVar30 + 0x18 + lVar25));
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u____5u____7_2f___151a26078,
                   (FLogCategoryBase *)&LogParticles);
        if (((uVar16 & 2) != 0) &&
           (uVar16 = uVar16 & 0xfffffffd,
           local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
      TStack_2f8.UnvisitedBitMask = TStack_2f8.UnvisitedBitMask & ~TStack_2f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f8);
    }
    local_390 = uVar16;
    if (((4 < (byte)LogParticles._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
        4 < (byte)LogParticles._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
       4 < (byte)LogParticles._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
    uVar27 = local_120.NumBits;
    iVar33 = 0;
    iStack_350 = 0;
    uVar17 = 1;
    uStack_354 = 0;
    if (local_120.NumBits != 0) {
      FVar29 = (ForElementType<unsigned_int>)&local_120;
      if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_120.AllocatorInstance.SecondaryData;
      }
      uVar31 = *(uint *)FVar29;
      while (uVar31 == 0) {
        lVar25 = (longlong)iVar33;
        iStack_350 = iStack_350 + 0x20;
        iVar33 = iVar33 + 1;
        uStack_354 = local_120.NumBits;
        if ((int)((local_120.NumBits - 1U) + ((int)(local_120.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar33) goto LAB_148163503;
        uVar31 = *(uint *)((uchar *)((longlong)FVar29 + 4) + lVar25 * 4);
      }
      uVar17 = -uVar31 & uVar31;
      uVar3 = (ulonglong)uVar17 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_264 = (int)lVar25;
      uStack_354 = iStack_350 + -1 + local_264;
      if (local_120.NumBits < (int)uStack_354) {
        uStack_354 = local_120.NumBits;
      }
    }
LAB_148163503:
    local_370 = &local_130;
    pTStack_360 = &local_120;
    uVar31 = local_120.NumBits & 0xffffffe0;
    local_348 = (int)local_128 - uStack_100._4_4_;
    uStack_368 = CONCAT44(uVar17,iVar33);
    uStack_358 = 0xffffffff;
    uStack_34c = local_144;
    TStack_248._padding_ = uStack_368;
    iVar33 = local_120.NumBits >> 5;
    uStack_228 = CONCAT44(uStack_344,local_348);
    bVar20 = (byte)local_120.NumBits;
    local_38c = local_120.NumBits;
    TStack_248.BaseBitIndex = iStack_350;
    TStack_248._28_4_ = local_144;
    TStack_248.UnvisitedBitMask = 0xffffffff;
    TStack_248.CurrentBitIndex = uStack_354;
    local_250 = local_370;
    TStack_248.Array = pTStack_360;
    if (local_120.NumBits < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (uVar27 != local_120.NumBits) {
      FVar29 = (ForElementType<unsigned_int>)&local_120;
      if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_120.AllocatorInstance.SecondaryData;
      }
      uVar27 = -1 << (bVar20 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar33 * 4);
      while (uVar27 == 0) {
        lVar25 = (longlong)iVar33;
        uVar31 = uVar31 + 0x20;
        iVar33 = iVar33 + 1;
        uVar27 = local_120.NumBits;
        local_38c = local_120.NumBits;
        if ((int)((local_120.NumBits - 1U) + ((int)(local_120.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar33) goto LAB_148163640;
        uVar27 = *(uint *)((uchar *)((longlong)FVar29 + 4) + lVar25 * 4);
      }
      uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_260 = (int)lVar25;
      uVar27 = local_260 + -1 + uVar31;
      local_38c = uVar27;
      if (local_120.NumBits < (int)uVar27) {
        uVar27 = local_120.NumBits;
        local_38c = local_120.NumBits;
      }
    }
LAB_148163640:
    while( true ) {
      plVar28 = local_250;
      if ((int)local_250[1] - *(int *)((longlong)local_250 + 0x34) != (int)uStack_228) {
        local_394[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_394);
      }
      if (((TStack_248.CurrentBitIndex == uVar27) && (TStack_248.Array == &local_120)) &&
         (plVar28 == &local_130)) break;
      lVar25 = *plVar28;
      lVar30 = (longlong)TStack_248.CurrentBitIndex * 0x40;
      if ((0 < *(int *)(lVar30 + 0x1c + lVar25)) || (0 < *(int *)(lVar30 + 0x18 + lVar25))) {
        if (4 < (byte)LogParticles._0_1_) {
          if (*(UObjectBaseUtility **)(lVar30 + lVar25) != (UObjectBaseUtility *)0x0) {
            uVar16 = uVar16 | 1;
            local_390 = uVar16;
            UObjectBaseUtility::GetFullName
                      (*(UObjectBaseUtility **)(lVar30 + lVar25),&local_1e0,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          if (((uVar16 & 1) != 0) &&
             (local_390 = uVar16 & 0xfffffffe,
             local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
        }
        AlgoImpl::
        IntroSortInternal<_<lambda_27>::operator()_::__l2::FPSCInfo,int,FIdentityFunctor,TDereferenceWrapper<_<lambda_27>::operator()_::__l2::FPSCInfo,_<lambda_27>::operator()_::__l214::<lambda_3>_>_>
                  (*(FPSCInfo **)(lVar30 + 8 + lVar25),*(int *)(lVar30 + 0x10 + lVar25),FVar13,
                   (<lambda_3> *)local_387);
        iVar33 = *(int *)(lVar30 + 0x10 + lVar25);
        plVar28 = *(longlong **)(lVar30 + 8 + lVar25);
        plVar34 = plVar28 + (longlong)iVar33 * 2;
        while( true ) {
          if (*(int *)(lVar30 + 0x10 + lVar25) != iVar33) {
            local_398 = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<`<lambda_27>::operator()'::__l2::FPSCInfo,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_398);
          }
          uVar16 = local_390;
          if (plVar28 == plVar34) break;
          plVar8 = (longlong *)*plVar28;
          if (((*(uint *)(plVar8 + 0xb0) & 0x3fffffff) == 0x3fffffff) ||
             ((int)*(uint *)(plVar8 + 0xb0) < 0)) {
            uVar26 = 0;
          }
          else {
            uVar26 = 1;
          }
          cVar15 = (**(code **)(*plVar8 + 0x430))(plVar8);
          if ((cVar15 != '\0') && (4 < (byte)LogParticles._0_1_)) {
            pFVar19 = UObjectBaseUtility::GetFullName
                                ((UObjectBaseUtility *)*plVar28,&local_1d0,(UObject *)0x0,None);
            if ((pFVar19->Data).ArrayNum == 0) {
              local_3b0 = (FScriptContainerElement *)0x15060d16c;
            }
            else {
              local_3b0 = (pFVar19->Data).AllocatorInstance.Data;
            }
            local_3b8 = *(uint *)((longlong)plVar28 + 0xc);
            local_3c0 = (uint)*(byte *)((longlong)plVar28 + 10);
            local_3c8 = (uint)*(byte *)((longlong)plVar28 + 9);
            local_3d0 = CONCAT44(local_3d0._4_4_,(uint)*(byte *)(plVar28 + 1));
            local_3d8 = CONCAT44(local_3d8._4_4_,uVar26);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
            if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            }
          }
          plVar28 = plVar28 + 2;
        }
      }
      TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
      uVar27 = local_38c;
    }
    if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data.AllocatorInstance.Data);
    }
    local_e8 = 0;
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,`<lambda_27>::operator()'::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UParticleSystem_*,_<lambda_27>::operator()_::__l2::FPSCInfoSummary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_130);
    TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
  } while( true );
}

// `vector_deleting_destructor'`adjustor{592}' @ 148163964

/* [thunk]:public: virtual void * __ptr64 __cdecl UFXSystemComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UFXSystemComponent::_vector_deleting_destructor__adjustor_592__
          (UFXSystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFXSystemComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 148163978

/* [thunk]:public: virtual void * __ptr64 __cdecl UFXSystemComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UFXSystemComponent::_vector_deleting_destructor__adjustor_600__
          (UFXSystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFXSystemComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14816398c

/* [thunk]:public: virtual void * __ptr64 __cdecl UFXSystemComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UFXSystemComponent::_vector_deleting_destructor__adjustor_608__
          (UFXSystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFXSystemComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1481639a0

/* [thunk]:public: virtual void * __ptr64 __cdecl UFXSystemComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UFXSystemComponent::_vector_deleting_destructor__adjustor_40__
          (UFXSystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFXSystemComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 1481639b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UParticleSystemComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UParticleSystemComponent::_vector_deleting_destructor__adjustor_592__
          (UParticleSystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UParticleSystemComponent *)&this[-1].TimeSinceLastForceUpdateTransform,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 1481639c4

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UParticleSystemComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UParticleSystemComponent::_vector_deleting_destructor__adjustor_600__
          (UParticleSystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UParticleSystemComponent *)&this[-1].LODLevel,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 1481639d8

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UParticleSystemComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UParticleSystemComponent::_vector_deleting_destructor__adjustor_608__
          (UParticleSystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UParticleSystemComponent *)&this[-1].WarmupTime,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1481639ec

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UParticleSystemComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UParticleSystemComponent::_vector_deleting_destructor__adjustor_40__
          (UParticleSystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UParticleSystemComponent *)
                      (this[-1].AsyncComponentToWorld.Scale3D.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148163a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UParticleSystemComponent::OnRegister'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UParticleSystemComponent::OnRegister'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParticlePerfStatsManager::RemoveListener'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FParticlePerfStatsManager::RemoveListener'::`2'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParticlePerfStatsManager::Tick'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TSharedPtr<FParticlePerfStatsListener,1> *pTVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FParticlePerfStatsManager::Tick'::`5'::<lambda_1>,1,1>::_vftable_;
  pTVar1 = *(TSharedPtr<FParticlePerfStatsListener,1> **)((longlong)this + 0x88);
  if (*(TSharedPtr<FParticlePerfStatsListener,1> **)((longlong)this + 0x88) ==
      (TSharedPtr<FParticlePerfStatsListener,1> *)0x0) {
    pTVar1 = (TSharedPtr<FParticlePerfStatsListener,1> *)((longlong)this + 8);
  }
  DestructItems<TSharedPtr<FParticlePerfStatsListener,1>,int>
            (pTVar1,*(int *)((longlong)this + 0x90));
  if (*(void **)((longlong)this + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x88));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAccumulatedParticlePerfStats::Reset'::__l7::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAccumulatedParticlePerfStats::Reset'::`7'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UParticleSystemComponent::CreateDynamicData'::__l105::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UParticleSystemComponent::CreateDynamicData'::`105'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParticlePerfStats::Reset'::__l14::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FParticlePerfStats::Reset'::`14'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163bd0

void * __thiscall
TGraphTask<`UFXSystemAsset::LaunchPSOPrecaching'::__l8::FReleasePrecachePSOsEventTask>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163c30

void * __thiscall
TGraphTask<FDispatchBatchedAsyncTasks>::_scalar_deleting_destructor_
          (TGraphTask<FDispatchBatchedAsyncTasks> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163c90

void * __thiscall
TGraphTask<FGameThreadDispatchBatchedAsyncTasks>::_scalar_deleting_destructor_
          (TGraphTask<FGameThreadDispatchBatchedAsyncTasks> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163cf0

void * __thiscall
TGraphTask<FParticleAsyncTask>::_scalar_deleting_destructor_
          (TGraphTask<FParticleAsyncTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163d50

void * __thiscall
TGraphTask<FParticleFinalizeTask>::_scalar_deleting_destructor_
          (TGraphTask<FParticleFinalizeTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163db0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_CSVProfiler,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FParticlePerfStatsListener_CSVProfiler,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163df0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_DebugRender,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FParticlePerfStatsListener_DebugRender,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163e30

void * __thiscall
FDynamicAnimTrailEmitterData::_scalar_deleting_destructor_
          (FDynamicAnimTrailEmitterData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDynamicAnimTrailEmitterData__6B_;
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source);
  FDynamicTrailsEmitterData::~FDynamicTrailsEmitterData((FDynamicTrailsEmitterData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FDynamicEmitterDataBase::operator_delete(this,0x140);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163ea0

void * __thiscall
FDynamicRibbonEmitterData::_scalar_deleting_destructor_
          (FDynamicRibbonEmitterData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDynamicRibbonEmitterData__6B_;
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source);
  FDynamicTrailsEmitterData::~FDynamicTrailsEmitterData((FDynamicTrailsEmitterData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FDynamicEmitterDataBase::operator_delete(this,0x150);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163f10

void * __thiscall
FDynamicRibbonEmitterReplayData::_scalar_deleting_destructor_
          (FDynamicRibbonEmitterReplayData *this,uint param_1)

{
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163f50

void * __thiscall
FDynamicTrailsEmitterData::_scalar_deleting_destructor_
          (FDynamicTrailsEmitterData *this,uint param_1)

{
  ~FDynamicTrailsEmitterData(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FDynamicEmitterDataBase::operator_delete(this,0x48);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163fb0

void * __thiscall
FDynamicTrailsEmitterReplayData::_scalar_deleting_destructor_
          (FDynamicTrailsEmitterReplayData *this,uint param_1)

{
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148163ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UParticleSystemComponent::FInstanceOwner::_scalar_deleting_destructor_
          (FInstanceOwner *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IParticleEmitterInstanceOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148164030

void * __thiscall
FParticlePerfStatsListener_CSVProfiler::_scalar_deleting_destructor_
          (FParticlePerfStatsListener_CSVProfiler *this,uint param_1)

{
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148164070

void * __thiscall
FParticlePerfStatsListener_DebugRender::_scalar_deleting_destructor_
          (FParticlePerfStatsListener_DebugRender *this,uint param_1)

{
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481640b0

void * __thiscall
FParticlePerfStatsListener_GatherAll::_scalar_deleting_destructor_
          (FParticlePerfStatsListener_GatherAll *this,uint param_1)

{
  ~FParticlePerfStatsListener_GatherAll(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481640f0

void * __thiscall
FParticlePerfStatsListener_TimedTest::_scalar_deleting_destructor_
          (FParticlePerfStatsListener_TimedTest *this,uint param_1)

{
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148164130

void * __thiscall UFXSystemAsset::_scalar_deleting_destructor_(UFXSystemAsset *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBaseGraphTask *pFVar4;
  
  this->_padding_ = (longlong)&___7UFXSystemAsset__6B_;
  pFVar3 = (this->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->PrecachePSOsEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
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

// `scalar_deleting_destructor' @ 1481641d0

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
UFXSystemComponent::_scalar_deleting_destructor_(UFXSystemComponent *this,uint param_1)

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
    __empty_global_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148164270

void * __thiscall
UParticleLODLevel::_scalar_deleting_destructor_(UParticleLODLevel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleLODLevel__6B_;
  pFVar1 = (this->EventReceiverModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OrbitModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawningModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148164330

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UParticleSystem::_scalar_deleting_destructor_(UParticleSystem *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  
  this->_padding_ = (longlong)&___7UParticleSystem__6B_;
  pFVar3 = (this->NamedMaterialSlots).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FLODSoloTrack,int>
            ((FLODSoloTrack *)(this->SoloTracking).AllocatorInstance.Data,
             (this->SoloTracking).ArrayNum);
  pFVar3 = (this->SoloTracking).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LODSettings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LODDistances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7UFXSystemAsset__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148164430

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UParticleSystemComponent::_scalar_deleting_destructor_(UParticleSystemComponent *this,uint param_1)

{
  ~UParticleSystemComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x890);
  }
  return this;
}

// AddMaterials @ 148165a20

void __cdecl
AddMaterials(TArray<TTuple<UMaterialInterface_const_*,float>,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
            float param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<TTuple<UMaterialInterface_const_*,float>_> FVar8;
  uint uVar9;
  ForElementType<TTuple<UMaterialInterface_const_*,float>_> FVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  
  pFVar12 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
LAB_148165a50:
  do {
    if (param_2->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMaterialInterface_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar12 == pFVar1) {
      return;
    }
    lVar3 = *(longlong *)pFVar12;
    if (lVar3 != 0) {
      FVar8 = (param_1->AllocatorInstance).SecondaryData;
      uVar7 = param_1->ArrayNum;
      FVar10 = (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)param_1;
      if (FVar8 != (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)0x0) {
        FVar10 = FVar8;
      }
      FVar8 = (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)
              ((longlong)(int)uVar7 * 0x10 + (longlong)FVar10);
      for (; FVar10 != FVar8;
          FVar10 = (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)
                   ((longlong)FVar10 + 0x10)) {
        if (*(longlong *)FVar10 == lVar3) {
          pFVar12 = pFVar12 + 8;
          fVar5 = (float)(int)*(float *)((longlong)FVar10 + 8);
          if ((float)(int)*(float *)((longlong)FVar10 + 8) <= param_3) {
            fVar5 = param_3;
          }
          *(float *)((longlong)FVar10 + 8) = fVar5;
          goto LAB_148165a50;
        }
      }
      if (uVar7 == param_1->ArrayMax) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UMaterialInterface_const_*,float>_>_>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = uVar7 + 1;
      uVar9 = 0;
      if ((int)uVar7 < (int)(uVar7 + 1)) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar8 = (param_1->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)param_1;
      if (FVar8 != (ForElementType<TTuple<UMaterialInterface_const_*,float>_>)0x0) {
        FVar10 = FVar8;
      }
      plVar11 = (longlong *)((longlong)(int)uVar7 * 0x10 + (longlong)FVar10);
      if (plVar11 != (longlong *)0x0) {
        *(float *)(plVar11 + 1) = param_3;
        *plVar11 = lVar3;
      }
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// AdjustParticleBaseSizeForUVFlipping @ 148166120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AdjustParticleBaseSizeForUVFlipping
          (TVector<double> *param_1,EParticleUVFlipMode param_2,FRandomStream *param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined8 local_28;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  double local_10;
  
  uVar6 = __xmm_80000000000000008000000000000000._4_4_;
  uVar8 = (uint)__xmm_80000000000000008000000000000000;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  switch(param_2) {
  case None:
    goto switchD_148166142_caseD_0;
  case FlipUV:
    uVar9 = *(uint *)((longlong)&param_1->field0_0x0 + 4) ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar11 = *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78;
    uVar12 = *(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&param_1->field0_0x0 =
         *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_1->field0_0x0 + 4) = uVar9;
    *(uint *)((longlong)&param_1->field0_0x0 + 8) = uVar11;
    *(uint *)((longlong)&param_1->field0_0x0 + 0xc) = uVar12;
    uVar13 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    (param_1->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^ uVar6,(uint)uVar13 ^ uVar8);
    return;
  case FlipUOnly:
    (param_1->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)*(undefined8 *)&param_1->field0_0x0 ^
                          (uint)__xmm_80000000000000008000000000000000);
    return;
  case FlipVOnly:
    uVar13 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    (param_1->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar13 ^ (uint)__xmm_80000000000000008000000000000000);
    return;
  case RandomFlipUV:
    uVar8 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar8;
    uStack_1c = *(uint *)((longlong)&param_1->field0_0x0 + 4);
    uStack_18 = *(uint *)((longlong)&param_1->field0_0x0 + 8);
    uStack_14 = *(uint *)((longlong)&param_1->field0_0x0 + 0xc);
    if ((float)(uVar8 >> 9 | 0x3f800000) - __real_3f800000 <= __real_3f000000) {
      pdVar10 = (double *)&local_20;
      local_10 = (param_1->field0_0x0)._s_0.Z;
      local_20 = *(uint *)&param_1->field0_0x0;
    }
    else {
      pdVar10 = (double *)&local_38;
      local_38 = *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
      uStack_34 = uStack_1c ^ __xmm_80000000000000008000000000000000._4_4_;
      uStack_30 = uStack_18 ^ _UNK_15066df78;
      uStack_2c = uStack_14 ^ _UNK_15066df7c;
      uVar13 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
      local_28 = CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar13 ^ (uint)__xmm_80000000000000008000000000000000);
    }
    dVar3 = pdVar10[1];
    dVar1 = pdVar10[2];
    (param_1->field0_0x0)._s_0.X = *pdVar10;
    (param_1->field0_0x0)._s_0.Y = dVar3;
    (param_1->field0_0x0)._s_0.Z = dVar1;
    return;
  case RandomFlipUOnly:
    uVar8 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar8;
    uVar13 = *(undefined8 *)&param_1->field0_0x0;
    if (__real_3f000000 < (float)(uVar8 >> 9 | 0x3f800000) - __real_3f800000) {
      uVar13 = CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar13 ^ (uint)__xmm_80000000000000008000000000000000);
    }
    *(undefined8 *)&param_1->field0_0x0 = uVar13;
    return;
  case RandomFlipVOnly:
    uVar8 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar8;
    uVar13 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    if (__real_3f000000 < (float)(uVar8 >> 9 | 0x3f800000) - __real_3f800000) {
      uVar13 = CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar13 ^ (uint)__xmm_80000000000000008000000000000000);
    }
    *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = uVar13;
    return;
  case RandomFlipUVIndependent:
    uVar9 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar9;
    uVar13 = *(undefined8 *)&param_1->field0_0x0;
    if (fVar5 < (float)(uVar9 >> 9 | 0x3f800000) - fVar4) {
      uVar13 = CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^ uVar6,(uint)uVar13 ^ uVar8);
    }
    *(undefined8 *)&param_1->field0_0x0 = uVar13;
    uVar9 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar9;
    uVar13 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    if (fVar5 < (float)(uVar9 >> 9 | 0x3f800000) - fVar4) {
      uVar13 = CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^ uVar6,(uint)uVar13 ^ uVar8);
    }
    *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = uVar13;
    return;
  default:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticleModuleRequired.h"
                       ,0x4f,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
switchD_148166142_caseD_0:
    return;
  }
}

// AllowTemplate @ 1481664e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl CascadeLocal::AllowTemplate(UParticleSystem *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (bUseTemplateDenyList) {
    if (param_1 == (UParticleSystem *)0x0) {
      return false;
    }
    lVar2 = param_1->_padding_;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
    if (TemplateDenyList.Elements._8_4_ != TemplateDenyList.Elements._52_4_) {
      FVar4 = (ForElementType<FSetElementId>)0x154c5f9a8;
      if (TemplateDenyList.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar4 = TemplateDenyList.Hash.SecondaryData;
      }
      for (iVar1 = *(int *)((longlong)FVar4 +
                           (ulonglong)
                           (TemplateDenyList.HashSize - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar3
                           ) * 4); iVar1 != -1;
          iVar1 = *(int *)(TemplateDenyList.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
        if (*(longlong *)(TemplateDenyList.Elements._0_8_ + (longlong)iVar1 * 0x10) == lVar2) {
          return false;
        }
      }
    }
  }
  return true;
}

// DetailModeSink @ 14816fec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl DetailModeSink(void)

{
  int iVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  UClass *pUVar9;
  longlong lVar10;
  ulonglong uVar11;
  TObjectIterator<UParticleSystemComponent> local_28;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pIVar3 = IConsoleManager::Singleton;
  uVar11 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.DetailMode",1);
      pTVar8 = (TConsoleVariableData<int> *)0x0;
      if (plVar7 != (longlong *)0x0) {
        pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
      }
      DetailMode = pTVar8;
      _Init_thread_footer(&_TSS0);
    }
  }
  pTVar8 = DetailMode;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  iVar1 = pTVar8->ShadowedValue[0];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) < _TSS1) {
    _Init_thread_header(&_TSS1);
    if (_TSS1 == -1) {
      CachedDetailMode = iVar1;
      _Init_thread_footer(&_TSS1);
    }
  }
  if (CachedDetailMode != iVar1) {
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    CachedDetailMode = iVar1;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar9 = UParticleSystemComponent::StaticClass();
    GetObjectsOfClass(pUVar9,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UParticleSystemComponent>::Advance(&local_28);
      lVar10 = (longlong)local_28.Index;
      if (local_28.Index < 0) break;
      if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
      uVar6 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(byte *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8) + 0x578) =
           *(byte *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8) + 0x578
                    ) | 0x40;
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeParticleLODLevel @ 148172300

void __cdecl EmptyLinkFunctionForGeneratedCodeParticleLODLevel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeParticleSystem @ 148172310

void __cdecl EmptyLinkFunctionForGeneratedCodeParticleSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeParticleSystemComponent @ 148172320

void __cdecl EmptyLinkFunctionForGeneratedCodeParticleSystemComponent(void)

{
  return;
}

// FOnSystemFinished_DelegateWrapper @ 148173620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FOnSystemFinished_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UParticleSystemComponent *param_2)

{
  UParticleSystemComponent *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GenerateParticleSortKeys @ 148175b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

int __cdecl
GenerateParticleSortKeys
          (FRHICommandListImmediate *param_1,FRHIUnorderedAccessView *param_2,
          FRHIUnorderedAccessView *param_3,FRHITexture *param_4,
          TArray<FParticleSimulationSortInfo,TSizedDefaultAllocator<32>_> *param_5,Type param_6,
          int param_7)

{
  uint uVar1;
  longlong *plVar2;
  FRHIBatchedShaderParameters *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGlobalShaderMap *this;
  FShaderType *pFVar7;
  FName this_00;
  FRHIComputeShader *pFVar8;
  IRHIComputeContext *pIVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  FParticleSortKeyGenCS *this_01;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_128 [8];
  FRHIUnorderedAccessView *local_120;
  FRHIUnorderedAccessView *pFStack_118;
  FRHIComputeShader *local_110;
  FRHIUnorderedAccessView **local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  FString local_d8;
  TShaderRefBase<FParticleSortKeyGenCS,FShaderMapPointerTable> local_c8;
  FRHIUnorderedAccessView *local_b8;
  FRHIUnorderedAccessView *pFStack_b0;
  undefined1 local_a8 [8];
  float fStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  FRHIUnorderedAccessView **local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  FRHIUnorderedAccessView **local_58;
  undefined8 uStack_50;
  FRHIUnorderedAccessView **local_48;
  undefined8 uStack_40;
  
  lVar14 = (longlong)(int)param_6;
  if (((int)param_6 < 3) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("FeatureLevel >= ERHIFeatureLevel::SM5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSortingGPU.cpp"
                         ,0x87,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  local_a8 = (undefined1  [8])___xmm_3f800000000000000000000000000000;
  _fStack_a0 = _UNK_150689648;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar14]);
  pFVar7 = (FShaderType *)FParticleSortKeyGenCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_e8,pFVar7,0);
  if ((FParticleSortKeyGenCS *)local_e8.ShaderContent == (FParticleSortKeyGenCS *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_110);
    FName::ToString((FName *)this_00,&local_d8);
    FParticleSortKeyGenCS::GetStaticType();
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  FParticleSortKeyGenCS::GetStaticType();
  local_c8.ShaderContent = (FParticleSortKeyGenCS *)local_e8.ShaderContent;
  local_c8.ShaderMap = local_e8.ShaderMap;
  pFVar8 = (FRHIComputeShader *)
           TShaderRefBase<FParticleSortKeyGenCS,FShaderMapPointerTable>::GetRHIShaderBase
                     (&local_c8,SF_Compute,true);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar8);
  local_108 = &local_120;
  uStack_100 = 2;
  local_120 = param_2;
  pFStack_118 = param_3;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
    *puVar11 = local_120;
    puVar11[1] = pFStack_118;
    puVar12 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    uStack_f0 = 2;
    **(undefined8 **)&param_1->field_0x30 = puVar12;
    *(undefined8 **)&param_1->field_0x30 = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
    puVar12[2] = puVar11;
    puVar12[3] = CONCAT44(uStack_ec,2);
    local_f8 = puVar11;
  }
  else {
    pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    uStack_50 = CONCAT44(uStack_fc,uStack_100);
    local_58 = local_108;
    (**(code **)(pIVar9->_padding_ + 0x80))(pIVar9);
  }
  uVar1 = param_5->ArrayNum;
  uVar10 = (ulonglong)(int)uVar1;
  pFVar16 = (param_5->AllocatorInstance).Data;
  pFVar17 = pFVar16 + uVar10 * 0x40;
  this_01 = (FParticleSortKeyGenCS *)local_e8.ShaderContent;
  while( true ) {
    if (param_5->ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FParticleSimulationSortInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_6);
    }
    if (pFVar16 == pFVar17) break;
    if (*(int *)(pFVar16 + 0x34) == param_7) {
      local_88 = *(uint *)(pFVar16 + 0x20);
      local_94 = local_88 + 0x3f >> 6;
      uVar13 = 0x80;
      if (local_94 < 0x80) {
        uVar13 = local_94;
      }
      uVar15 = 1;
      if (1 < uVar13) {
        uVar15 = uVar13;
      }
      local_98 = local_94 / uVar15;
      local_94 = local_94 % uVar15;
      uStack_9c = 0x3f800000;
      fStack_a0 = (float)*(double *)(pFVar16 + 0x18);
      local_a8._4_4_ = (float)*(double *)(pFVar16 + 0x10);
      local_a8._0_4_ = (float)*(double *)(pFVar16 + 8);
      local_90 = *(uint *)(pFVar16 + 0x30);
      local_8c = *(int *)(pFVar16 + 0x38) << 0x10;
      local_110 = (FRHIComputeShader *)
                  TShaderRefBase<FParticleSortKeyGenCS,FShaderMapPointerTable>::GetRHIShaderBase
                            (&local_c8,SF_Compute,true);
      puVar11 = *(undefined8 **)&param_1->field_0xc0;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x48,0x10);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          puVar12 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xb8,0x10);
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = *(undefined8 *)&param_1->field_0xc8;
            puVar12[1] = param_1;
            FMemStackBase::FMemStackBase((FMemStackBase *)(puVar12 + 2),Small);
            FMemStackBase::FMemStackBase((FMemStackBase *)(puVar12 + 7),Small);
            FMemStackBase::FMemStackBase((FMemStackBase *)(puVar12 + 0xc),Small);
            FMemStackBase::FMemStackBase((FMemStackBase *)(puVar12 + 0x11),Small);
            puVar12[0x16] = 0;
            *(undefined8 **)&param_1->field_0xc8 = puVar12;
          }
          *puVar11 = puVar12;
          puVar11[1] = 0;
          *(undefined4 *)(puVar11 + 2) = 0;
          puVar11[3] = 0;
          *(undefined4 *)(puVar11 + 4) = 0;
          puVar11[5] = 0;
          *(undefined4 *)(puVar11 + 6) = 0;
          puVar11[7] = 0;
          *(undefined4 *)(puVar11 + 8) = 0;
          this_01 = (FParticleSortKeyGenCS *)local_e8.ShaderContent;
        }
        *(undefined8 **)&param_1->field_0xc0 = puVar11;
      }
      if ((0 < *(int *)(puVar11 + 8) + *(int *)(puVar11 + 6) + *(int *)(puVar11 + 4)) &&
         (bVar5 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                            (local_128), !bVar5)) {
        plVar2 = *(longlong **)&param_1->field_0xc0;
        local_f8 = (undefined8 *)0x0;
        uStack_f0 = 0;
        local_108 = (FRHIUnorderedAccessView **)0x0;
        uStack_100 = 0;
        local_120 = (FRHIUnorderedAccessView *)0x0;
        *(undefined8 *)(*plVar2 + 0xb0) = 0;
        plVar2[1] = 0;
        plVar2[2] = (ulonglong)uStack_ec << 0x20;
        pFStack_118 = (FRHIUnorderedAccessView *)((ulonglong)pFStack_118 & 0xffffffff00000000);
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        plVar2[3] = 0;
        plVar2[4] = (ulonglong)uStack_fc << 0x20;
        plVar2[5] = 0;
        plVar2[6] = (longlong)pFStack_118;
        plVar2[7] = 0;
        plVar2[8] = (ulonglong)(uint)local_d8.Data.ArrayMax << 0x20;
      }
      pFVar3 = *(FRHIBatchedShaderParameters **)&param_1->field_0xc0;
      FParticleSortKeyGenCS::SetParameters
                (this_01,pFVar3,(FParticleKeyGenParameters *)local_a8,param_2,param_3,param_4,
                 *(FRHIShaderResourceView **)pFVar16);
      FRHIComputeCommandList::SetBatchedShaderParameters
                ((FRHIComputeCommandList *)param_1,local_110,pFVar3);
      DispatchComputeShader((FRHIComputeCommandList *)param_1,(FShader *)this_01,uVar15,1,1);
    }
    uVar10 = (ulonglong)uVar1;
    pFVar16 = pFVar16 + 0x40;
  }
  UnsetShaderParametersLegacyCS<FRHICommandListImmediate,FParticleSortKeyGenCS>(param_1,&local_c8);
  local_78 = &local_b8;
  uStack_70 = 2;
  local_b8 = param_2;
  pFStack_b0 = param_3;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
    *puVar11 = local_b8;
    puVar11[1] = pFStack_b0;
    puVar12 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar12;
    *(undefined8 **)&param_1->field_0x30 = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &___7FRHICommandEndSpecificUAVOverlap__6B_;
    puVar12[2] = puVar11;
    puVar12[3] = CONCAT44(uStack_5c,2);
  }
  else {
    pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    uStack_40 = CONCAT44(uStack_6c,uStack_70);
    local_48 = local_78;
    (**(code **)(pIVar9->_padding_ + 0x90))(pIVar9,&local_48);
  }
  return 0;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 148179f30

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FParticleKeyGenParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FParticleKeyGenParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FParticleKeyGenParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FParticleKeyGenParameters",
                 L"FParticleKeyGenParameters",L"ParticleKeyGen",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSortingGPU.cpp"
                 ,0x1b,0x30,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FParticleKeyGenParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// OnDetailedCSVStatsEnabledChanged @ 148187040

void __cdecl OnDetailedCSVStatsEnabledChanged(IConsoleVariable *param_1)

{
  TAtomic<bool> TVar1;
  bool bVar2;
  FCsvProfiler *this;
  wchar_t *pwVar3;
  
  TVar1 = (TAtomic<bool>)(**(code **)(*(longlong *)CVarWriteDetailedCSVStats._8_8_ + 0xc0))();
  LOCK();
  UNLOCK();
  FParticlePerfStats::bCSVStatsEnabled = TVar1;
  this = FCsvProfiler::Get();
  if (this != (FCsvProfiler *)0x0) {
    FCsvProfiler::EnableCategoryByIndex(this,_GCsvCategory_Particles.Index,(bool)TVar1);
    pwVar3 = L"0";
    if (TVar1 != (TAtomic<bool>)0x0) {
      pwVar3 = L"1";
    }
    FCsvProfiler::SetMetadata(L"DetailedFXStats",pwVar3);
  }
  if (TVar1 == (TAtomic<bool>)0x0) {
    FParticlePerfStatsListener_CSVProfiler::OnCSVEnd();
  }
  else if (this != (FCsvProfiler *)0x0) {
    bVar2 = FCsvProfiler::IsCapturing(this);
    if (bVar2) {
      FParticlePerfStatsListener_CSVProfiler::OnCSVStart();
      return;
    }
  }
  return;
}

// Particle_ModifyFloatDistribution @ 148188a40

void __cdecl Particle_ModifyFloatDistribution(UDistributionFloat *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float local_res8 [2];
  float local_res18 [2];
  float *pfVar8;
  undefined4 uVar9;
  
  pUVar3 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      param_1 = (UDistributionFloat *)0x0;
    }
    *(float *)&param_1[1]._padding_ = param_2 * *(float *)&param_1[1]._padding_;
    return;
  }
  pUVar3 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      param_1 = (UDistributionFloat *)0x0;
    }
    fVar7 = *(float *)&param_1[1]._padding_;
    *(float *)((longlong)&param_1[1]._padding_ + 4) =
         param_2 * *(float *)((longlong)&param_1[1]._padding_ + 4);
    *(float *)&param_1[1]._padding_ = param_2 * fVar7;
    return;
  }
  pUVar3 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      param_1 = (UDistributionFloat *)0x0;
    }
    plVar4 = &param_1->_padding_;
    iVar1 = (**(code **)param_1->_padding_)(plVar4);
    iVar2 = (**(code **)(*plVar4 + 8))(plVar4);
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(*plVar4 + 0x18))(plVar4,iVar6);
        iVar5 = 0;
        if (0 < iVar2) {
          do {
            fVar7 = (float)(**(code **)(*plVar4 + 0x20))(plVar4,iVar5,iVar6);
            pfVar8 = local_res8;
            (**(code **)(*plVar4 + 0x40))(plVar4,iVar5,iVar6,local_res18,pfVar8);
            uVar9 = (undefined4)((ulonglong)pfVar8 >> 0x20);
            (**(code **)(*plVar4 + 0x70))(plVar4,iVar5,iVar6,fVar7 * param_2);
            (**(code **)(*plVar4 + 0x80))
                      (plVar4,iVar5,iVar6,local_res18[0] * param_2,
                       CONCAT44(uVar9,local_res8[0] * param_2));
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return;
}

// Particle_ModifyVectorDistribution @ 148188c90

void __cdecl
Particle_ModifyVectorDistribution(UDistributionVector *param_1,TVector<double> *param_2)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float local_res8 [2];
  float local_res18 [4];
  float *pfVar11;
  undefined4 uVar12;
  
  pUVar3 = Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      param_1 = (UDistributionVector *)0x0;
    }
    param_1[1]._padding_ = (longlong)((double)param_1[1]._padding_ * (param_2->field0_0x0)._s_0.X);
    param_1[1]._padding_ = (longlong)((param_2->field0_0x0)._s_0.Y * (double)param_1[1]._padding_);
    param_1[1]._padding_ = (longlong)((param_2->field0_0x0)._s_0.Z * (double)param_1[1]._padding_);
    return;
  }
  pUVar3 = Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      param_1 = (UDistributionVector *)0x0;
    }
    param_1[1]._padding_ = (longlong)((double)param_1[1]._padding_ * (param_2->field0_0x0)._s_0.X);
    param_1[1]._padding_ = (longlong)((param_2->field0_0x0)._s_0.Y * (double)param_1[1]._padding_);
    param_1[1]._padding_ = (longlong)((double)param_1[1]._padding_ * (param_2->field0_0x0)._s_0.Z);
    param_1[1]._padding_ = (longlong)((double)param_1[1]._padding_ * (param_2->field0_0x0)._s_0.X);
    param_1[1]._padding_ = (longlong)((param_2->field0_0x0)._s_0.Y * (double)param_1[1]._padding_);
    param_1[1]._padding_ = (longlong)((double)param_1[1]._padding_ * (param_2->field0_0x0)._s_0.Z);
    return;
  }
  pUVar3 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      param_1 = (UDistributionVector *)0x0;
    }
    plVar7 = &param_1->_padding_;
    iVar1 = (**(code **)param_1->_padding_)(plVar7);
    iVar2 = (**(code **)(*plVar7 + 8))(plVar7);
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(*plVar7 + 0x18))(plVar7,iVar6);
        iVar5 = 0;
        if (0 < iVar2) {
          do {
            fVar8 = (float)(**(code **)(*plVar7 + 0x20))(plVar7,iVar5,iVar6);
            pfVar11 = local_res8;
            (**(code **)(*plVar7 + 0x40))(plVar7,iVar5,iVar6,local_res18,pfVar11);
            uVar12 = (undefined4)((ulonglong)pfVar11 >> 0x20);
            if (iVar5 == 0) {
LAB_148188f5a:
              (**(code **)(*plVar7 + 0x70))
                        (plVar7,iVar5,iVar6,(float)((double)fVar8 * (param_2->field0_0x0)._s_0.X));
              dVar9 = (double)local_res8[0] * (param_2->field0_0x0)._s_0.X;
              dVar10 = (double)local_res18[0] * (param_2->field0_0x0)._s_0.X;
              iVar4 = iVar5;
            }
            else if (iVar5 == 1) {
              (**(code **)(*plVar7 + 0x70))
                        (plVar7,1,iVar6,(float)((double)fVar8 * (param_2->field0_0x0)._s_0.Y));
              iVar4 = 1;
              dVar9 = (double)local_res8[0] * (param_2->field0_0x0)._s_0.Y;
              dVar10 = (double)local_res18[0] * (param_2->field0_0x0)._s_0.Y;
            }
            else {
              if (iVar5 != 2) goto LAB_148188f5a;
              (**(code **)(*plVar7 + 0x70))
                        (plVar7,2,iVar6,(float)((double)fVar8 * (param_2->field0_0x0)._s_0.Z));
              dVar9 = (double)local_res8[0] * (param_2->field0_0x0)._s_0.Z;
              dVar10 = (double)local_res18[0] * (param_2->field0_0x0)._s_0.Z;
              iVar4 = 2;
            }
            (**(code **)(*plVar7 + 0x80))
                      (plVar7,iVar4,iVar6,(float)dVar10,CONCAT44(uVar12,(float)dVar9));
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return;
}

// ResetAllParticleComponents @ 148192720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ResetAllParticleComponents(void)

{
  int *piVar1;
  UParticleSystemComponent *this;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UParticleSystemComponent> local_28;
  
  local_28.Index = 0xffffffff;
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UParticleSystemComponent::StaticClass();
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UParticleSystemComponent>::Advance(&local_28);
    lVar7 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar5 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = *(UParticleSystemComponent **)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
    UParticleSystemComponent::ResetParticles(this,false);
    (**(code **)(*(longlong *)this + 0xaf0))(this,1);
    this->bIsViewRelevanceDirty = '\x01';
    piVar1 = &(this->CachedViewRelevanceFlags).ArrayMax;
    (this->CachedViewRelevanceFlags).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->CachedViewRelevanceFlags).AllocatorInstance,0,piVar1);
    }
    if ((this->AsyncWork).Reference != (FBaseGraphTask *)0x0) {
      UParticleSystemComponent::WaitForAsyncAndFinalize(this,ENSURE_AND_STALL,true);
    }
    if ((bool)this->bIsViewRelevanceDirty) {
      UParticleSystemComponent::CacheViewRelevanceFlags(this,(this->Template).field0_0x0.DebugPtr);
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    UActorComponent::ReregisterComponent((UActorComponent *)this);
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// UpdateTemplateDenyList @ 1481b3fe0

void __cdecl CascadeLocal::UpdateTemplateDenyList(IConsoleVariable *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  TSparseSetElement<FName> *pTVar14;
  int local_res10 [2];
  FName local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FSparseArrayAllocationInfo local_48;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ::FString::ParseIntoArray(&TemplateDenyListString,&local_58,L",",true);
  bVar5 = 1 < TemplateDenyList.HashSize;
  if (!bVar5) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(&TemplateDenyList);
  }
  TemplateDenyList.Elements._8_4_ = 0;
  if (TemplateDenyList.Elements._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&TemplateDenyList,0,
               (int *)&TemplateDenyList.Elements.field_0xc);
  }
  TemplateDenyList.Elements._48_4_ = 0xffffffff;
  TemplateDenyList.Elements._52_4_ = 0;
  TemplateDenyList.Elements._40_4_ = 0;
  if (0x80 < (uint)TemplateDenyList.Elements._44_4_) {
    TemplateDenyList.Elements._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&TemplateDenyList.Elements.field_0x10,0);
  }
  if (bVar5) {
    TemplateDenyList.HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(&TemplateDenyList);
  }
  iVar3 = local_58.ArrayNum;
  pFVar12 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
  FVar13.Data = local_58.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_58.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      iVar7 = TemplateDenyList.Elements._48_4_;
      if (FVar13.Data == pFVar12) {
        bUseTemplateDenyList =
             0 < (int)(TemplateDenyList.Elements._8_4_ - TemplateDenyList.Elements._52_4_);
        DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        return;
      }
      if (TemplateDenyList.Elements._52_4_ == 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,1,(ForAnyElementType *)&TemplateDenyList,
                           (int *)&TemplateDenyList.Elements.field_0x8,
                           (int *)&TemplateDenyList.Elements.field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&TemplateDenyList.Elements.field_0x10,
                   false);
      }
      else {
        TemplateDenyList.Elements._48_4_ =
             *(int *)(TemplateDenyList.Elements._0_8_ + 4 +
                     (longlong)(int)TemplateDenyList.Elements._48_4_ * 0x10);
        TemplateDenyList.Elements._52_4_ = TemplateDenyList.Elements._52_4_ + -1;
        if (TemplateDenyList.Elements._52_4_ != 0) {
          *(undefined4 *)
           (TemplateDenyList.Elements._0_8_ + (longlong)(int)TemplateDenyList.Elements._48_4_ * 0x10
           ) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&TemplateDenyList,&local_48,iVar7);
      pvVar4 = local_48.Pointer;
      pTVar14 = (TSparseSetElement<FName> *)0x0;
      if (local_48.Pointer != (TSparseSetElement<FName> *)0x0) {
        iVar7 = *(int *)(FVar13.Data + 8) + -1;
        if (*(int *)(FVar13.Data + 8) == 0) {
          iVar7 = 0;
        }
        pFVar8 = ::FName::FName(local_res18,iVar7,*(wchar_t **)FVar13.Data,FNAME_Add);
        *(FName *)pvVar4 = *pFVar8;
        *(undefined4 *)((longlong)pvVar4 + 8) = 0xffffffff;
        pTVar14 = pvVar4;
      }
      uVar1 = *(undefined8 *)pTVar14;
      local_res10[0] = local_48.Index;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
      uVar6 = (int)((ulonglong)uVar1 >> 0x20) + uVar6;
      bVar5 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TryReplaceExisting
                        (&TemplateDenyList,uVar6,pTVar14,local_res10,(bool *)0x0);
      if (!bVar5) break;
LAB_1481b42be:
      FVar13.Data = FVar13.Data + 0x10;
    }
    uVar10 = TemplateDenyList.Elements._8_4_ - TemplateDenyList.Elements._52_4_;
    if (uVar10 < 4) {
      iVar7 = 1;
    }
    else {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar7 <= TemplateDenyList.HashSize)) {
      uVar6 = TemplateDenyList.HashSize - 1U & uVar6;
      *(uint *)&pTVar14->field_0xc = uVar6;
      FVar11 = (ForElementType<FSetElementId>)0x154c5f9a8;
      if (TemplateDenyList.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar11 = TemplateDenyList.Hash.SecondaryData;
      }
      uVar9 = (longlong)TemplateDenyList.HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&pTVar14->field_0x8 = *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res10[0];
      goto LAB_1481b42be;
    }
    TemplateDenyList.HashSize = iVar7;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(&TemplateDenyList);
    FVar13.Data = FVar13.Data + 0x10;
  } while( true );
}

// Z_Construct_UClass_UFXSystemComponent_NoRegister @ 1481b59d0

UClass * __cdecl Z_Construct_UClass_UFXSystemComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FXSystemComponent",
               &Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton,
               UFXSystemComponent::StaticRegisterNativesUFXSystemComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFXSystemComponent>,
               InternalVTableHelperCtorCaller<UFXSystemComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton;
}

// Z_Construct_UClass_UParticleLODLevel_NoRegister @ 1481b5a90

UClass * __cdecl Z_Construct_UClass_UParticleLODLevel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleLODLevel",
               &Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton,
               UParticleLODLevel::StaticRegisterNativesUParticleLODLevel,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleLODLevel>,
               InternalVTableHelperCtorCaller<UParticleLODLevel>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EParticleEventType @ 1481b5b40

UEnum * __cdecl Z_Construct_UEnum_Engine_EParticleEventType(void)

{
  if (Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EParticleEventType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ParticleReplayState @ 1481b5b80

UEnum * __cdecl Z_Construct_UEnum_Engine_ParticleReplayState(void)

{
  if (Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton,
               &Z_Construct_UEnum_Engine_ParticleReplayState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FFXSystemSpawnParameters @ 1481b5bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFXSystemSpawnParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFXSystemSpawnParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFXSystemSpawnParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFXSystemSpawnParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFXSystemSpawnParameters.InnerSingleton;
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

// CSVListener'' @ 1503f7eb0

void __cdecl
`dynamic_atexit_destructor_for_'FParticlePerfStatsListener_CSVProfiler::CSVListener__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FParticlePerfStatsListener_CSVProfiler::CSVListener.SharedReferenceCount.
             ReferenceController);
  return;
}

// ComponentToPerfStats'' @ 1503f7ed0

void __cdecl `dynamic_atexit_destructor_for_'FParticlePerfStatsManager::ComponentToPerfStats__(void)

{
  FParticlePerfStatsManager::ComponentToPerfStats._72_4_ = 0;
  if (FParticlePerfStatsManager::ComponentToPerfStats._64_8_ != 0) {
    FMemory::Free((void *)FParticlePerfStatsManager::ComponentToPerfStats._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FParticlePerfStatsManager::ComponentToPerfStats);
  return;
}

// ComponentToPerfStatsGuard'' @ 1503f7f10

void __cdecl
`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::ComponentToPerfStatsGuard__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f7f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::ComponentToPerfStatsGuard);
  return;
}

// DebugRenderListenerUsers'' @ 1503f7f30

void __cdecl
`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::DebugRenderListenerUsers__(void)

{
  FParticlePerfStatsManager::DebugRenderListenerUsers._72_4_ = 0;
  if (FParticlePerfStatsManager::DebugRenderListenerUsers._64_8_ != 0) {
    FMemory::Free((void *)FParticlePerfStatsManager::DebugRenderListenerUsers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FParticlePerfStatsManager::DebugRenderListenerUsers);
  return;
}

// FreeComponentStatsPool'' @ 1503f7f70

void __cdecl
`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::FreeComponentStatsPool__(void)

{
  DestructItems<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,int>
            ((TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> *)
             FParticlePerfStatsManager::FreeComponentStatsPool.AllocatorInstance.Data,
             FParticlePerfStatsManager::FreeComponentStatsPool.ArrayNum);
  if (FParticlePerfStatsManager::FreeComponentStatsPool.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FParticlePerfStatsManager::FreeComponentStatsPool.AllocatorInstance.Data);
    return;
  }
  return;
}

// FreeSystemStatsPool'' @ 1503f7fb0

void __cdecl `dynamic_atexit_destructor_for_'FParticlePerfStatsManager::FreeSystemStatsPool__(void)

{
  DestructItems<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,int>
            ((TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> *)
             FParticlePerfStatsManager::FreeSystemStatsPool.AllocatorInstance.Data,
             FParticlePerfStatsManager::FreeSystemStatsPool.ArrayNum);
  if (FParticlePerfStatsManager::FreeSystemStatsPool.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FParticlePerfStatsManager::FreeSystemStatsPool.AllocatorInstance.Data);
    return;
  }
  return;
}

// FreeWorldStatsPool'' @ 1503f7ff0

void __cdecl `dynamic_atexit_destructor_for_'FParticlePerfStatsManager::FreeWorldStatsPool__(void)

{
  DestructItems<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,int>
            ((TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> *)
             FParticlePerfStatsManager::FreeWorldStatsPool.AllocatorInstance.Data,
             FParticlePerfStatsManager::FreeWorldStatsPool.ArrayNum);
  if (FParticlePerfStatsManager::FreeWorldStatsPool.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FParticlePerfStatsManager::FreeWorldStatsPool.AllocatorInstance.Data);
    return;
  }
  return;
}

// Listeners'' @ 1503f8030

void __cdecl `dynamic_atexit_destructor_for_'FParticlePerfStatsManager::Listeners__(void)

{
  TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  
  pTVar1 = &FParticlePerfStatsManager::Listeners;
  if (FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData !=
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    pTVar1 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData;
  }
  DestructItems<TSharedPtr<FParticlePerfStatsListener,1>,int>
            ((TSharedPtr<FParticlePerfStatsListener,1> *)pTVar1,
             FParticlePerfStatsManager::Listeners.ArrayNum);
  if (FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData !=
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FMemory::Free((void *)FParticlePerfStatsManager::Listeners.AllocatorInstance.SecondaryData);
    return;
  }
  return;
}

// OnSystemPreActivationChange'' @ 1503f8080

void __cdecl
`dynamic_atexit_destructor_for_'UParticleSystemComponent::OnSystemPreActivationChange__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UParticleSystemComponent::OnSystemPreActivationChange._8_8_,
             UParticleSystemComponent::OnSystemPreActivationChange._16_4_);
  if (UParticleSystemComponent::OnSystemPreActivationChange._8_8_ != 0) {
    FMemory::Free((void *)UParticleSystemComponent::OnSystemPreActivationChange._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UParticleSystemComponent::OnSystemPreActivationChange)
  ;
  return;
}

// ShaderTypeRegistration'' @ 1503f80c0

void __cdecl `dynamic_atexit_destructor_for_'FParticleSortKeyGenCS::ShaderTypeRegistration__(void)

{
  return;
}

// SystemToPerfStats'' @ 1503f80d0

void __cdecl `dynamic_atexit_destructor_for_'FParticlePerfStatsManager::SystemToPerfStats__(void)

{
  FParticlePerfStatsManager::SystemToPerfStats._72_4_ = 0;
  if (FParticlePerfStatsManager::SystemToPerfStats._64_8_ != 0) {
    FMemory::Free((void *)FParticlePerfStatsManager::SystemToPerfStats._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FParticlePerfStatsManager::SystemToPerfStats);
  return;
}

// SystemToPerfStatsGuard'' @ 1503f8110

void __cdecl
`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::SystemToPerfStatsGuard__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f8117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::SystemToPerfStatsGuard);
  return;
}

// WorldToPerfStats'' @ 1503f8130

void __cdecl `dynamic_atexit_destructor_for_'FParticlePerfStatsManager::WorldToPerfStats__(void)

{
  FParticlePerfStatsManager::WorldToPerfStats._72_4_ = 0;
  if (FParticlePerfStatsManager::WorldToPerfStats._64_8_ != 0) {
    FMemory::Free((void *)FParticlePerfStatsManager::WorldToPerfStats._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FParticlePerfStatsManager::WorldToPerfStats);
  return;
}

// WorldToPerfStatsGuard'' @ 1503f8170

void __cdecl
`dynamic_atexit_destructor_for_'FParticlePerfStatsManager::WorldToPerfStatsGuard__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f8177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::WorldToPerfStatsGuard);
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_ParticleAsyncTask'' @ 1503f8190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_ParticleAsyncTask__(void)

{
  CPrio_ParticleAsyncTask.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CPrio_ParticleAsyncTask.Variable);
  if (CPrio_ParticleAsyncTask.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_ParticleAsyncTask.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_ParticleAsyncTask.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_ParticleAsyncTask.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarBatchParticleAsync'' @ 1503f81e0

void __cdecl _dynamic_atexit_destructor_for__CVarBatchParticleAsync__(void)

{
  CVarBatchParticleAsync._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBatchParticleAsync);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBatchParticleAsyncBatchSize'' @ 1503f8200

void __cdecl _dynamic_atexit_destructor_for__CVarBatchParticleAsyncBatchSize__(void)

{
  CVarBatchParticleAsyncBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBatchParticleAsyncBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCascadePSOPrecachingTime'' @ 1503f8220

void __cdecl _dynamic_atexit_destructor_for__CVarCascadePSOPrecachingTime__(void)

{
  CVarCascadePSOPrecachingTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCascadePSOPrecachingTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCascadeSetTemplateDenyList'' @ 1503f8240

void __cdecl CascadeLocal::_dynamic_atexit_destructor_for__CVarCascadeSetTemplateDenyList__(void)

{
  CVarCascadeSetTemplateDenyList._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCascadeSetTemplateDenyList);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeferrPSCDeactivation'' @ 1503f8260

void __cdecl _dynamic_atexit_destructor_for__CVarDeferrPSCDeactivation__(void)

{
  CVarDeferrPSCDeactivation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeferrPSCDeactivation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDetailModeSink'' @ 1503f8280

void __cdecl _dynamic_atexit_destructor_for__CVarDetailModeSink__(void)

{
  CVarDetailModeSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXDetailedCSVMemoryStats'' @ 1503f82a0

void __cdecl _dynamic_atexit_destructor_for__CVarFXDetailedCSVMemoryStats__(void)

{
  CVarFXDetailedCSVMemoryStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFXDetailedCSVMemoryStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXEarlySchedule'' @ 1503f82c0

void __cdecl _dynamic_atexit_destructor_for__CVarFXEarlySchedule__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFXEarlySchedule);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXLWCTileRecache'' @ 1503f82e0

void __cdecl _dynamic_atexit_destructor_for__CVarFXLWCTileRecache__(void)

{
  CVarFXLWCTileRecache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFXLWCTileRecache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXSkipZeroDeltaTime'' @ 1503f8300

void __cdecl _dynamic_atexit_destructor_for__CVarFXSkipZeroDeltaTime__(void)

{
  CVarFXSkipZeroDeltaTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFXSkipZeroDeltaTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFxCascadeUseVelocityForMotionBlur'' @ 1503f8320

void __cdecl _dynamic_atexit_destructor_for__CVarFxCascadeUseVelocityForMotionBlur__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarFxCascadeUseVelocityForMotionBlur);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinDetailModeForMeshParticleMotionBlur'' @ 1503f8340

void __cdecl _dynamic_atexit_destructor_for__CVarMinDetailModeForMeshParticleMotionBlur__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinDetailModeForMeshParticleMotionBlur);
  return;
}

// `dynamic_atexit_destructor_for_'CVarParticleDefaultLightInverseExposureBlend'' @ 1503f8360

void __cdecl _dynamic_atexit_destructor_for__CVarParticleDefaultLightInverseExposureBlend__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarParticleDefaultLightInverseExposureBlend);
  return;
}

// `dynamic_atexit_destructor_for_'CVarParticleLODBias'' @ 1503f8380

void __cdecl _dynamic_atexit_destructor_for__CVarParticleLODBias__(void)

{
  CVarParticleLODBias._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarParticleLODBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarParticleLightQuality'' @ 1503f83a0

void __cdecl _dynamic_atexit_destructor_for__CVarParticleLightQuality__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarParticleLightQuality);
  return;
}

// `dynamic_atexit_destructor_for_'CVarParticlePerfStatsEnabled'' @ 1503f83c0

void __cdecl _dynamic_atexit_destructor_for__CVarParticlePerfStatsEnabled__(void)

{
  CVarParticlePerfStatsEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarParticlePerfStatsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPruneEmittersOnCookByDetailMode'' @ 1503f83e0

void __cdecl _dynamic_atexit_destructor_for__CVarPruneEmittersOnCookByDetailMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPruneEmittersOnCookByDetailMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWriteDetailedCSVStats'' @ 1503f8400

void __cdecl _dynamic_atexit_destructor_for__CVarWriteDetailedCSVStats__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarWriteDetailedCSVStats);
  return;
}

// `dynamic_atexit_destructor_for_'FParticleKeyGenParametersMetadataRegistration'' @ 1503f8420

void __cdecl _dynamic_atexit_destructor_for__FParticleKeyGenParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FXAsyncBatcher'' @ 1503f8430

void __cdecl _dynamic_atexit_destructor_for__FXAsyncBatcher__(void)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  FFXAsyncBatcher *pFVar4;
  
  TVar3.Reference = FXAsyncBatcher.FinalizeOnGTDispatchEvent.Reference;
  if (FXAsyncBatcher.FinalizeOnGTDispatchEvent.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(FXAsyncBatcher.FinalizeOnGTDispatchEvent.Reference)->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar3.Reference)(TVar3.Reference,1);
    }
  }
  pFVar4 = &FXAsyncBatcher;
  if (FXAsyncBatcher.DispatchEvent.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    pFVar4 = (FFXAsyncBatcher *)FXAsyncBatcher.DispatchEvent.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pFVar4,FXAsyncBatcher.DispatchEvent.ArrayNum);
  if (FXAsyncBatcher.DispatchEvent.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FXAsyncBatcher.DispatchEvent.AllocatorInstance.SecondaryData);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GDumpPSCStateCommand'' @ 1503f84a0

void __cdecl _dynamic_atexit_destructor_for__GDumpPSCStateCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpPSCStateCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GParticleEightTexCoordVertexBuffer'' @ 1503f84c0

void __cdecl _dynamic_atexit_destructor_for__GParticleEightTexCoordVertexBuffer__(void)

{
  GParticleEightTexCoordVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFParticleEightTexCoordVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GParticleEightTexCoordVertexBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&GParticleEightTexCoordVertexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GParticleIndexBuffer'' @ 1503f8500

void __cdecl _dynamic_atexit_destructor_for__GParticleIndexBuffer__(void)

{
  GParticleIndexBuffer._0_8_ = &___7__TGlobalResource_VFParticleIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GParticleIndexBuffer);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&GParticleIndexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GParticlePerfStatsRunTest'' @ 1503f8540

void __cdecl _dynamic_atexit_destructor_for__GParticlePerfStatsRunTest__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GParticlePerfStatsRunTest);
  return;
}

// `dynamic_atexit_destructor_for_'GParticleScratchVertexBuffer'' @ 1503f8560

void __cdecl _dynamic_atexit_destructor_for__GParticleScratchVertexBuffer__(void)

{
  GParticleScratchVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFParticleScratchVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GParticleScratchVertexBuffer);
  if (GParticleScratchVertexBuffer._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GParticleScratchVertexBuffer._40_8_);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&GParticleScratchVertexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GParticleTexCoordVertexBuffer'' @ 1503f85b0

void __cdecl _dynamic_atexit_destructor_for__GParticleTexCoordVertexBuffer__(void)

{
  GParticleTexCoordVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFParticleTexCoordVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GParticleTexCoordVertexBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&GParticleTexCoordVertexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterParticleSystemCustomVersion'' @ 1503f85f0

void __cdecl _dynamic_atexit_destructor_for__GRegisterParticleSystemCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterParticleSystemCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'GResetAllParticleComponentsCmd'' @ 1503f8610

void __cdecl _dynamic_atexit_destructor_for__GResetAllParticleComponentsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GResetAllParticleComponentsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GSixTriangleParticleIndexBuffer'' @ 1503f8630

void __cdecl _dynamic_atexit_destructor_for__GSixTriangleParticleIndexBuffer__(void)

{
  GSixTriangleParticleIndexBuffer._0_8_ =
       &___7__TGlobalResource_VFSixTriangleParticleIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GSixTriangleParticleIndexBuffer);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&GSixTriangleParticleIndexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'LogParticles'' @ 1503f8670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogParticles__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogParticles);
  return;
}

// `dynamic_atexit_destructor_for_'ParticleCollisionIgnoreInvisibleTime'' @ 1503f8690

void __cdecl _dynamic_atexit_destructor_for__ParticleCollisionIgnoreInvisibleTime__(void)

{
  ParticleCollisionIgnoreInvisibleTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ParticleCollisionIgnoreInvisibleTime);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f86b0

void __cdecl
`FParticleKeyGenParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503f86d0

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

void __cdecl
`FParticleSortKeyGenCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'TemplateDenyList'' @ 1503f86f0

void __cdecl CascadeLocal::_dynamic_atexit_destructor_for__TemplateDenyList__(void)

{
  TemplateDenyList.HashSize = 0;
  if (TemplateDenyList.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TemplateDenyList.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TemplateDenyList.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'TemplateDenyListString'' @ 1503f8730

void __cdecl CascadeLocal::_dynamic_atexit_destructor_for__TemplateDenyListString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TemplateDenyListString.Data.AllocatorInstance.Data;
  if (TemplateDenyListString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TemplateDenyListString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_Particles'' @ 1503f8750

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Particles__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Particles.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Particles.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Particles.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

