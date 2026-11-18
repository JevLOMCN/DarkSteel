// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 461

// OnPawnBeginPlay'' @ 141122f80

void __cdecl `dynamic_initializer_for_'APawn::OnPawnBeginPlay__(void)

{
  atexit(`dynamic_atexit_destructor_for_'APawn::OnPawnBeginPlay__);
  return;
}

// StaticType'' @ 141122fa0

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

void __cdecl `dynamic_initializer_for_'FParticleSpriteVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&FParticleSpriteVertexFactory::StaticType,L"FParticleSpriteVertexFactory",
             L"/Engine/Private/ParticleSpriteVertexFactory.ush",
             SupportsPSOPrecaching|SupportsDynamicLighting|UsedWithMaterials,
             ConstructVertexFactoryParameters<FParticleSpriteVertexFactory>,
             GetVertexFactoryParametersLayout<FParticleSpriteVertexFactory>,
             GetVertexFactoryParametersElementShaderBindings<FParticleSpriteVertexFactory>,
             FParticleSpriteVertexFactory::GetPSOPrecacheVertexFetchElements,
             FParticleSpriteVertexFactory::ShouldCompilePermutation);
  atexit(`dynamic_atexit_destructor_for_'FParticleSpriteVertexFactory::StaticType__);
  return;
}

// WorldManagers'' @ 141123020

void __cdecl `dynamic_initializer_for_'FParticleSystemWorldManager::WorldManagers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FParticleSystemWorldManager::WorldManagers__);
  return;
}

// `dynamic_initializer_for_'CDisableQueryOnlyActors'' @ 141123040

void __cdecl _dynamic_initializer_for__CDisableQueryOnlyActors__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CDisableQueryOnlyActors,L"p.DisableQueryOnlyActors",local_res8,
             L"If QueryOnly is used, actors are marked as simulation disabled. This is NOT compatible with origin shifting at the moment."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CDisableQueryOnlyActors__);
  return;
}

// `dynamic_initializer_for_'CPrio_ParticleManagerAsyncTask'' @ 141123090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_ParticleManagerAsyncTask__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_ParticleManagerAsyncTask,L"TaskGraph.TaskPriorities.ParticleManagerAsyncTask",
             L"Task and thread priority for FParticleManagerAsyncTask.",HighThreadPriority,MainQueue
             ,HighTaskPriority);
  atexit(_dynamic_atexit_destructor_for__CPrio_ParticleManagerAsyncTask__);
  return;
}

// `dynamic_initializer_for_'CVarAllowCreatePhysxBodies'' @ 1411230e0

void __cdecl _dynamic_initializer_for__CVarAllowCreatePhysxBodies__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowCreatePhysxBodies,L"p.chaos.AllowCreatePhysxBodies",local_res8,
             L" 0 is off, 1 is on (default)",4);
  atexit(_dynamic_atexit_destructor_for__CVarAllowCreatePhysxBodies__);
  return;
}

// `dynamic_initializer_for_'CVarClearPerShapeOverridesOnTerminate'' @ 141123130

void __cdecl _dynamic_initializer_for__CVarClearPerShapeOverridesOnTerminate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClearPerShapeOverridesOnTerminate,L"p.ClearPerShapeOverridesOnTerminate",
             &bClearPerShapeOverridesOnTerminate,
             L"Whether shape overrides are cleared in between recreations of a body instance",0);
  atexit(_dynamic_atexit_destructor_for__CVarClearPerShapeOverridesOnTerminate__);
  return;
}

// `dynamic_initializer_for_'CVarEnableCircularAnimTrailDump'' @ 141123180

void __cdecl _dynamic_initializer_for__CVarEnableCircularAnimTrailDump__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableCircularAnimTrailDump,L"fx.EnableCircularAnimTrailDump",
             &GbEnableCircularAnimTrailDump,
             L"Controls logging for when circular links are discovered in anim trails.\n0 = No logging.\n1 = Minimal logging.\n2 = Verbose logging."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableCircularAnimTrailDump__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDynamicPerBodyFilterHacks'' @ 1411231d0

void __cdecl _dynamic_initializer_for__CVarEnableDynamicPerBodyFilterHacks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableDynamicPerBodyFilterHacks,L"p.EnableDynamicPerBodyFilterHacks",local_res8,
             L"Enables/Disables the use of a set of game focused hacks - allowing users to modify skel body collision dynamically (changes the behavior of per-body collision filtering)."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDynamicPerBodyFilterHacks__);
  return;
}

// `dynamic_initializer_for_'CVarEnablePSCWorldManager'' @ 141123220

void __cdecl _dynamic_initializer_for__CVarEnablePSCWorldManager__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnablePSCWorldManager,L"fx.PSCMan.Enable",&GbEnablePSCWorldManager,
             L"If PSC world manager is enabled.",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarEnablePSCWorldManager__);
  return;
}

// `dynamic_initializer_for_'CVarEnsureUnweldModifiesGTOnly'' @ 141123270

void __cdecl _dynamic_initializer_for__CVarEnsureUnweldModifiesGTOnly__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnsureUnweldModifiesGTOnly,L"p.EnsureUnweldModifiesGTOnly",
             &EnsureUnweldModifiesGTOnly,
             L"Ensure if unweld modifies geometry shared with physics thread",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnsureUnweldModifiesGTOnly__);
  return;
}

// `dynamic_initializer_for_'CVarFXAllowParticleMeshLODs'' @ 1411232c0

void __cdecl _dynamic_initializer_for__CVarFXAllowParticleMeshLODs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFXAllowParticleMeshLODs,L"fx.FXAllowParticleMeshLODs",&GFXAllowParticleMeshLODs,
             L"If we allow particle meshes to use LODs or not",0);
  atexit(_dynamic_atexit_destructor_for__CVarFXAllowParticleMeshLODs__);
  return;
}

// `dynamic_initializer_for_'CVarFXCascadeBeamRenderingEnabled'' @ 141123310

void __cdecl _dynamic_initializer_for__CVarFXCascadeBeamRenderingEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFXCascadeBeamRenderingEnabled,L"fx.Cascade.BeamRenderingEnabled",
             &GFXCascadeBeamRenderingEnabled,L"Controls if beam rendering is enabled for Cascade",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarFXCascadeBeamRenderingEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarFXCascadeMeshRenderingEnabled'' @ 141123360

void __cdecl _dynamic_initializer_for__CVarFXCascadeMeshRenderingEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFXCascadeMeshRenderingEnabled,L"fx.Cascade.MeshRenderingEnabled",
             &GFXCascadeMeshRenderingEnabled,L"Controls if mesh rendering is enabled for Cascade",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarFXCascadeMeshRenderingEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarFXCascadeSpriteRenderingEnabled'' @ 1411233b0

void __cdecl _dynamic_initializer_for__CVarFXCascadeSpriteRenderingEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFXCascadeSpriteRenderingEnabled,L"fx.Cascade.SpriteRenderingEnabled",
             &GFXCascadeSpriteRenderingEnabled,
             L"Controls if sprite rendering is enabled for Cascade",0);
  atexit(_dynamic_atexit_destructor_for__CVarFXCascadeSpriteRenderingEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarFXCascadeTrailRenderingEnabled'' @ 141123400

void __cdecl _dynamic_initializer_for__CVarFXCascadeTrailRenderingEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFXCascadeTrailRenderingEnabled,L"fx.Cascade.TrailRenderingEnabled",
             &GFXCascadeTrailRenderingEnabled,L"Controls if trail rendering is enabled for Cascade",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarFXCascadeTrailRenderingEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarFirstHighPriTickGroup'' @ 141123450

void __cdecl
ParticleSystemWorldManagerInternal::_dynamic_initializer_for__CVarFirstHighPriTickGroup__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,ParticleSystemWorldManagerInternal::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFirstHighPriTickGroup,L"fx.ParticleManagerFirstHighPriTickGroup",
             &GFirstHighPriTickGroup,
             L"Defines which tick groups should be set to high priority for the world manager.\n0 - (Default) all tick groups will run high priority.\n1 - The first tick group will be normal priority, all others high, etc."
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
  atexit(_dynamic_atexit_destructor_for__CVarFirstHighPriTickGroup__);
  return;
}

// `dynamic_initializer_for_'CVarForceInputDrop'' @ 141123590

void __cdecl InputCmdCVars::_dynamic_initializer_for__CVarForceInputDrop__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceInputDrop,L"p.net.ForceInputDrop",&ForceInputDrop,
             L"Forces client to drop inputs. Useful for simulating desync",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceInputDrop__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreAnalyticCollisionsOverride'' @ 1411235e0

void __cdecl _dynamic_initializer_for__CVarIgnoreAnalyticCollisionsOverride__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIgnoreAnalyticCollisionsOverride,L"p.IgnoreAnalyticCollisionsOverride",local_res8,
             L"Overrides the default for ignroing analytic collsions.",4);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreAnalyticCollisionsOverride__);
  return;
}

// `dynamic_initializer_for_'CVarMaxDistanceTessellation'' @ 141123630

void __cdecl FXConsoleVariables::_dynamic_initializer_for__CVarMaxDistanceTessellation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxDistanceTessellation,L"FX.Trail.MaxDistanceTessellation",
             &MaxDistanceTessellation,
             L"Maximum tessellation steps allowed for distance based tessellation.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxDistanceTessellation__);
  return;
}

// `dynamic_initializer_for_'CVarMaxTangentTessellation'' @ 141123680

void __cdecl FXConsoleVariables::_dynamic_initializer_for__CVarMaxTangentTessellation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxTangentTessellation,L"FX.Trail.MaxTangentTessellation",&MaxTangentTessellation,
             L"Maximum tessellation steps allowed for tangent based tessellation.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxTangentTessellation__);
  return;
}

// `dynamic_initializer_for_'CVarParticleManagerAsyncBatchSize'' @ 1411236d0

void __cdecl _dynamic_initializer_for__CVarParticleManagerAsyncBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarParticleManagerAsyncBatchSize,L"fx.ParticleManagerAsyncBatchSize",
             &GParticleManagerAsyncBatchSize,
             L"How many PSCs the ParticleWorldManager should tick per async task.",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarParticleManagerAsyncBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarSensitiveSleepThresholdMultiplier'' @ 141123720

void __cdecl _dynamic_initializer_for__CVarSensitiveSleepThresholdMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSensitiveSleepThresholdMultiplier,L"p.SensitiveSleepThresholdMultiplier",
             &SensitiveSleepThresholdMultiplier,
             L"The sleep threshold multiplier to use for bodies using the Sensitive sleep family.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarSensitiveSleepThresholdMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarSimCollisionEnabled'' @ 141123770

void __cdecl _dynamic_initializer_for__CVarSimCollisionEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSimCollisionEnabled,L"p.SimCollisionEnabled",&SimCollisionEnabled,
             L"If 0 no sim collision will be used",0);
  atexit(_dynamic_atexit_destructor_for__CVarSimCollisionEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarSkipRibbonSpawnInterp'' @ 1411237c0

void __cdecl _dynamic_initializer_for__CVarSkipRibbonSpawnInterp__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipRibbonSpawnInterp,L"r.Emitter.SkipRibbonSpawnInterp",&GSkipRibbonSpawnInterp,
             L"Ignore velocity based offsets when interpolating. This prevents ribbon quads from overlapping eachother (default=1)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipRibbonSpawnInterp__);
  return;
}

// `dynamic_initializer_for_'CVarSkipShapeCreationForEmptyBodySetup'' @ 141123810

void __cdecl _dynamic_initializer_for__CVarSkipShapeCreationForEmptyBodySetup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipShapeCreationForEmptyBodySetup,L"p.SkipShapeCreationForEmptyBodySetup",
             &bSkipShapeCreationForEmptyBodySetup,
             L"If true, CreateShapesAndActors will not try to create actors and shapes for all instances if the body setup doesn\'t have any geometry."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipShapeCreationForEmptyBodySetup__);
  return;
}

// `dynamic_initializer_for_'CVarbEnableOverrideSolverDeltaTime'' @ 141123860

void __cdecl _dynamic_initializer_for__CVarbEnableOverrideSolverDeltaTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbEnableOverrideSolverDeltaTime,L"p.EnableOverrideSolverDeltaTime",
             &bEnableOverrideSolverDeltaTime,
             L"If true, setting for override solver delta time can be used.  False will disable this feature."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarbEnableOverrideSolverDeltaTime__);
  return;
}

// `dynamic_initializer_for_'CVarbPreventInvalidBodyInstanceTransforms'' @ 1411238b0

void __cdecl _dynamic_initializer_for__CVarbPreventInvalidBodyInstanceTransforms__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbPreventInvalidBodyInstanceTransforms,L"p.PreventInvalidBodyInstanceTransforms",
             &bPreventInvalidBodyInstanceTransforms,
             L"If true, an attempt to create a BodyInstance with an invalid transform will fail with a warning"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarbPreventInvalidBodyInstanceTransforms__);
  return;
}

// `dynamic_initializer_for_'CatmullRomEndParamOffset'' @ 141123900

void __cdecl _dynamic_initializer_for__CatmullRomEndParamOffset__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CatmullRomEndParamOffset,L"r.CatmullRomEndParamOffset",&GCatmullRomEndParamOffset,
             L"The parameter offset for catmul rom end points.",0);
  atexit(_dynamic_atexit_destructor_for__CatmullRomEndParamOffset__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper256'' @ 141123950

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper256__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_27>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper256,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper260'' @ 1411239b0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper260__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_28>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper260,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper262'' @ 141123a10

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper262__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_29>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper262,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DumpPSCPoolInfoCommand'' @ 141123a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DumpPSCPoolInfoCommand__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DumpPooledWorldParticleSystemInfo;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"fx.DumpPSCPoolInfo",
                      L"Dump Particle System Pooling Info",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&DumpPSCPoolInfoCommand,pIVar5);
  DumpPSCPoolInfoCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
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
  atexit(_dynamic_atexit_destructor_for__DumpPSCPoolInfoCommand__);
  return;
}

// `dynamic_initializer_for_'FParticleSpriteUniformParametersMetadataRegistration'' @ 141123c10

void __cdecl _dynamic_initializer_for__FParticleSpriteUniformParametersMetadataRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderParametersMetadataRegistration *local_18 [2];
  
  pTVar5 = FShaderParametersMetadataRegistration::GetInstances();
  local_18[0] = &FParticleSpriteUniformParametersMetadataRegistration;
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
  atexit(_dynamic_atexit_destructor_for__FParticleSpriteUniformParametersMetadataRegistration__);
  return;
}

// `dynamic_initializer_for_'GDumpPSCManStateCommand'' @ 141123ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GDumpPSCManStateCommand__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_26>::<lambda_invoker_cdecl>;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"fx.PSCMan.Dump",
                      L"Dumps state information for all current Particle System Managers.",&local_58
                      ,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpPSCManStateCommand,pIVar5);
  GDumpPSCManStateCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpPSCManStateCommand__);
  return;
}

// `dynamic_initializer_for_'GFNullSubUVCutoutVertexBuffer'' @ 141123e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GFNullSubUVCutoutVertexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&GFNullSubUVCutoutVertexBuffer);
  GFNullSubUVCutoutVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFNullSubUVCutoutVertexBuffer___00__6B_;
  GFNullSubUVCutoutVertexBuffer._40_8_ = 0;
  if (GFNullSubUVCutoutVertexBuffer._24_4_ != -1) {
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
  GFNullSubUVCutoutVertexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GFNullSubUVCutoutVertexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GFNullSubUVCutoutVertexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GFNullSubUVCutoutVertexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GFNullSubUVCutoutVertexBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GFNullSubUVCutoutVertexBuffer__);
  return;
}

// `dynamic_initializer_for_'GHitchDeadTimeWindowCVar'' @ 141123f50

void __cdecl _dynamic_initializer_for__GHitchDeadTimeWindowCVar__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 200.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GHitchDeadTimeWindowCVar,L"t.HitchDeadTimeWindow",local_res8,
             L"Minimum time passed before we\'ll record a new hitch (in ms)\n default: 200.0 ms",
             0x40);
  atexit(_dynamic_atexit_destructor_for__GHitchDeadTimeWindowCVar__);
  return;
}

// `dynamic_initializer_for_'GHitchFrameTimeThresholdCVar'' @ 141123fa0

void __cdecl _dynamic_initializer_for__GHitchFrameTimeThresholdCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GHitchFrameTimeThresholdCVar,L"t.HitchFrameTimeThreshold",&GHitchThresholdMS,
             L"Definition of a hitchy frame (in ms)\n default: 60.0 ms",0x40);
  atexit(_dynamic_atexit_destructor_for__GHitchFrameTimeThresholdCVar__);
  return;
}

// `dynamic_initializer_for_'GHitchVersusNonHitchMinimumRatioCVar'' @ 141123ff0

void __cdecl _dynamic_initializer_for__GHitchVersusNonHitchMinimumRatioCVar__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GHitchVersusNonHitchMinimumRatioCVar,L"t.HitchVersusNonHitchRatio",local_res8,
             L"For the current frame to be considered a hitch, it must have run at least this many times slower than the previous frame.\nThe actual ratio is clamped to be between this and t.HitchFrameTimeThreshold/t.TargetFrameTimeThreshold\n default: 1.5"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__GHitchVersusNonHitchMinimumRatioCVar__);
  return;
}

// `dynamic_initializer_for_'GMaxParticleInTrailCountWarningCS'' @ 141124040

void __cdecl _dynamic_initializer_for__GMaxParticleInTrailCountWarningCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GMaxParticleInTrailCountWarningCS,4000)
  ;
  atexit(_dynamic_atexit_destructor_for__GMaxParticleInTrailCountWarningCS__);
  return;
}

// `dynamic_initializer_for_'GNullDynamicParameterVertexBuffer'' @ 141124070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GNullDynamicParameterVertexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&GNullDynamicParameterVertexBuffer);
  GNullDynamicParameterVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFNullDynamicParameterVertexBuffer___00__6B_;
  if (GNullDynamicParameterVertexBuffer._24_4_ != -1) {
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
  GNullDynamicParameterVertexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GNullDynamicParameterVertexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GNullDynamicParameterVertexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GNullDynamicParameterVertexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GNullDynamicParameterVertexBuffer,(FRenderCommandPipe *)0x0)
  ;
  atexit(_dynamic_atexit_destructor_for__GNullDynamicParameterVertexBuffer__);
  return;
}

// `dynamic_initializer_for_'GParticleSpriteVertexDeclarationInstanced'' @ 141124130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GParticleSpriteVertexDeclarationInstanced__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&GParticleSpriteVertexDeclarationInstanced);
  GParticleSpriteVertexDeclarationInstanced._0_8_ =
       &___7__TGlobalResource_VFParticleSpriteVertexDeclaration___00__6B_;
  GParticleSpriteVertexDeclarationInstanced._32_8_ = 0;
  GParticleSpriteVertexDeclarationInstanced._40_2_ = 1;
  if (GParticleSpriteVertexDeclarationInstanced._24_4_ != -1) {
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
  GParticleSpriteVertexDeclarationInstanced._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GParticleSpriteVertexDeclarationInstanced._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GParticleSpriteVertexDeclarationInstanced,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GParticleSpriteVertexDeclarationInstanced__);
    return;
  }
  BeginInitResource((FRenderResource *)&GParticleSpriteVertexDeclarationInstanced,
                    (FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GParticleSpriteVertexDeclarationInstanced__);
  return;
}

// `dynamic_initializer_for_'GParticleSpriteVertexDeclarationInstancedDynamic'' @ 141124200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GParticleSpriteVertexDeclarationInstancedDynamic__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)&GParticleSpriteVertexDeclarationInstancedDynamic);
  GParticleSpriteVertexDeclarationInstancedDynamic._0_8_ =
       &___7__TGlobalResource_VFParticleSpriteVertexDeclaration___00__6B_;
  GParticleSpriteVertexDeclarationInstancedDynamic._32_8_ = 0;
  GParticleSpriteVertexDeclarationInstancedDynamic._40_2_ = 0x101;
  if (GParticleSpriteVertexDeclarationInstancedDynamic._24_4_ != -1) {
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
  GParticleSpriteVertexDeclarationInstancedDynamic._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GParticleSpriteVertexDeclarationInstancedDynamic._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GParticleSpriteVertexDeclarationInstancedDynamic,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GParticleSpriteVertexDeclarationInstancedDynamic__);
    return;
  }
  BeginInitResource((FRenderResource *)&GParticleSpriteVertexDeclarationInstancedDynamic,
                    (FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GParticleSpriteVertexDeclarationInstancedDynamic__);
  return;
}

// `dynamic_initializer_for_'GTargetFrameTimeThresholdCVar'' @ 1411242d0

void __cdecl _dynamic_initializer_for__GTargetFrameTimeThresholdCVar__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 33.9;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GTargetFrameTimeThresholdCVar,L"t.TargetFrameTimeThreshold",local_res8,
             L"The target frame time (in ms); values below this will be drawn in green, values above will be yellow or red depending on the severity\n default: 33.9 ms"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__GTargetFrameTimeThresholdCVar__);
  return;
}

// `dynamic_initializer_for_'GUnacceptableFrameTimeThresholdCVar'' @ 141124320

void __cdecl _dynamic_initializer_for__GUnacceptableFrameTimeThresholdCVar__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 50.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GUnacceptableFrameTimeThresholdCVar,L"t.UnacceptableFrameTimeThreshold",local_res8,
             L"The frame time theshold for what is considered completely unacceptable (in ms); values above this will be drawn as red\n default: 50.0 ms"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__GUnacceptableFrameTimeThresholdCVar__);
  return;
}

// `dynamic_initializer_for_'LogDamage'' @ 141124370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDamage__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDamage,L"LogDamage",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogDamage__);
  return;
}

// `dynamic_initializer_for_'LogPawn'' @ 1411243b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPawn__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPawn,L"LogPawn",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogPawn__);
  return;
}

// `dynamic_initializer_for_'NAME_APawn_ReceiveControllerChanged'' @ 1411243f0

void __cdecl _dynamic_initializer_for__NAME_APawn_ReceiveControllerChanged__(void)

{
  FName::FName(&NAME_APawn_ReceiveControllerChanged,L"ReceiveControllerChanged");
  return;
}

// `dynamic_initializer_for_'NAME_APawn_ReceivePossessed'' @ 141124410

void __cdecl _dynamic_initializer_for__NAME_APawn_ReceivePossessed__(void)

{
  FName::FName(&NAME_APawn_ReceivePossessed,L"ReceivePossessed");
  return;
}

// `dynamic_initializer_for_'NAME_APawn_ReceiveRestarted'' @ 141124430

void __cdecl _dynamic_initializer_for__NAME_APawn_ReceiveRestarted__(void)

{
  FName::FName(&NAME_APawn_ReceiveRestarted,L"ReceiveRestarted");
  return;
}

// `dynamic_initializer_for_'NAME_APawn_ReceiveUnpossessed'' @ 141124450

void __cdecl _dynamic_initializer_for__NAME_APawn_ReceiveUnpossessed__(void)

{
  FName::FName(&NAME_APawn_ReceiveUnpossessed,L"ReceiveUnpossessed");
  return;
}

// `dynamic_initializer_for_'NAME_UAsyncPhysicsInputComponent_ServerRPCBufferInput'' @ 141124470

void __cdecl _dynamic_initializer_for__NAME_UAsyncPhysicsInputComponent_ServerRPCBufferInput__(void)

{
  FName::FName(&NAME_UAsyncPhysicsInputComponent_ServerRPCBufferInput,L"ServerRPCBufferInput");
  return;
}

// `dynamic_initializer_for_'ParticleSystemPoolKillUnusedTime'' @ 141124490

void __cdecl _dynamic_initializer_for__ParticleSystemPoolKillUnusedTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&ParticleSystemPoolKillUnusedTime,L"FX.ParticleSystemPool.KillUnusedTime",
             &GParticleSystemPoolKillUnusedTime,
             L"How long a pooled particle component needs to be unused for before it is destroyed.",
             0);
  atexit(_dynamic_atexit_destructor_for__ParticleSystemPoolKillUnusedTime__);
  return;
}

// `dynamic_initializer_for_'ParticleSystemPoolingCleanTime'' @ 1411244e0

void __cdecl _dynamic_initializer_for__ParticleSystemPoolingCleanTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&ParticleSystemPoolingCleanTime,L"FX.ParticleSystemPool.CleanTime",
             &GParticleSystemPoolingCleanTime,L"How often should the pool be cleaned (in seconds).",
             0);
  atexit(_dynamic_atexit_destructor_for__ParticleSystemPoolingCleanTime__);
  return;
}

// `dynamic_initializer_for_'QualityLevelMappingStr'' @ 141124530

void __cdecl QualityLevelProperty::_dynamic_initializer_for__QualityLevelMappingStr__(void)

{
  ::FString::FString(&QualityLevelMappingStr,L"QualityLevelMapping");
  atexit(_dynamic_atexit_destructor_for__QualityLevelMappingStr__);
  return;
}

// `dynamic_initializer_for_'QualityLevelNames'' @ 141124560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl QualityLevelProperty::_dynamic_initializer_for__QualityLevelNames__(void)

{
  ForAnyElementType FVar1;
  undefined1 auStackY_78 [32];
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  ::FName::FName(&local_38,"Low");
  ::FName::FName(&FStack_30,"Medium");
  ::FName::FName(&local_28,"High");
  ::FName::FName(&FStack_20,"Epic");
  ::FName::FName(&local_18,"Cinematic");
  QualityLevelNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  QualityLevelNames.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,5,0,&QualityLevelNames.AllocatorInstance,5,&QualityLevelNames.ArrayMax);
  FVar1 = QualityLevelNames.AllocatorInstance;
  *(FName *)QualityLevelNames.AllocatorInstance.Data = local_38;
  *(FName *)(FVar1.Data + 8) = FStack_30;
  *(FName *)(FVar1.Data + 0x10) = local_28;
  *(FName *)(FVar1.Data + 0x18) = FStack_20;
  *(FName *)(FVar1.Data + 0x20) = local_18;
  atexit(_dynamic_atexit_destructor_for__QualityLevelNames__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 141124660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1411246f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 141124780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 141124810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimTrailNotifyTime'' @ 1411248a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimTrailNotifyTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimTrailNotifyTime == (FThreadSafeStaticStat<FStat_STAT_AnimTrailNotifyTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimTrailNotifyTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimTrailNotifyTime,*pFVar1,
               L"AnimTrail Notify Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BodyInst_SetCollisionProfileName'' @ 141124930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BodyInst_SetCollisionProfileName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BodyInst_SetCollisionProfileName ==
      (FThreadSafeStaticStat<FStat_STAT_BodyInst_SetCollisionProfileName>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BodyInst_SetCollisionProfileName");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BodyInst_SetCollisionProfileName,*pFVar1,
               L"BodyInstance SetCollisionProfileName","STATGROUP_Physics","STATCAT_Advanced",
               L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BodyInstanceUpdateBodyScale'' @ 1411249c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BodyInstanceUpdateBodyScale__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BodyInstanceUpdateBodyScale ==
      (FThreadSafeStaticStat<FStat_STAT_BodyInstanceUpdateBodyScale>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BodyInstanceUpdateBodyScale");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BodyInstanceUpdateBodyScale,*pFVar1,
               L"UpdateBodyScale","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 141124a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 141124ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 141124b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 141124c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 141124c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BulkSceneAdd'' @ 141124d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BulkSceneAdd__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BulkSceneAdd == (FThreadSafeStaticStat<FStat_STAT_BulkSceneAdd>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BulkSceneAdd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BulkSceneAdd,*pFVar1,
               L"Bulk Body Scene Add","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreatePhysicsActor'' @ 141124db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreatePhysicsActor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreatePhysicsActor == (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsActor>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_CreatePhysicsActor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsActor,*pFVar1,
               L"CreatePhysicsActor","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreatePhysicsShapes'' @ 141124e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreatePhysicsShapes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreatePhysicsShapes == (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapes>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_CreatePhysicsShapes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsShapes,*pFVar1,
               L"CreatePhysicsShapes","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreatePhysicsShapesAndActors'' @ 141124ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreatePhysicsShapesAndActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreatePhysicsShapesAndActors ==
      (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapesAndActors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreatePhysicsShapesAndActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsShapesAndActors,*pFVar1,
               L"CreatePhysicsShapesAndActors","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData'' @ 141124f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData ==
      (FThreadSafeStaticStat<FStat_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData>
       )0x0) {
    pFVar1 = FName::FName(local_res8,
                          "STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData"
                         );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &
               StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData
               ,*pFVar1,
               L"DynamicSpriteEmitterData GetDynamicMeshElementsEmitter GetParticleOrderData RT",
               "STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_Task'' @ 141124ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_Task__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_Task ==
      (FThreadSafeStaticStat<FStat_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_Task>
       )0x0) {
    pFVar1 = FName::FName(local_res8,
                          "STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_Task");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_Task,*pFVar1,
               L"DynamicSpriteEmitterData GetDynamicMeshElementsEmitter Task RT",
               "STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks'' @ 141125080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks ==
      (FThreadSafeStaticStat<FStat_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks,*pFVar1,
               L"DynamicSpriteEmitterData PerParticleWorkOrTasks RT","STATGROUP_Particles",
               "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitBodies'' @ 141125110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitBodies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitBodies == (FThreadSafeStaticStat<FStat_STAT_InitBodies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitBodies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodies,*pFVar1,L"Init Bodies",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitBody'' @ 1411251a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitBody__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitBody == (FThreadSafeStaticStat<FStat_STAT_InitBody>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitBody");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBody,*pFVar1,L"Init Body",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitBodyAdd'' @ 141125230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitBodyAdd__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitBodyAdd == (FThreadSafeStaticStat<FStat_STAT_InitBodyAdd>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitBodyAdd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodyAdd,*pFVar1,L"Init Body Add",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitBodyAggregate'' @ 1411252c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitBodyAggregate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitBodyAggregate == (FThreadSafeStaticStat<FStat_STAT_InitBodyAggregate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitBodyAggregate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodyAggregate,*pFVar1,
               L"Init Body Aggregate","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitBodyDebug'' @ 141125350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitBodyDebug__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitBodyDebug == (FThreadSafeStaticStat<FStat_STAT_InitBodyDebug>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitBodyDebug");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodyDebug,*pFVar1,L"Init Body Debug",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitBodyPostAdd'' @ 1411253e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitBodyPostAdd__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitBodyPostAdd == (FThreadSafeStaticStat<FStat_STAT_InitBodyPostAdd>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitBodyPostAdd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodyPostAdd,*pFVar1,
               L"Init Body Post Add to Scene","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitBodySceneInteraction'' @ 141125470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitBodySceneInteraction__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitBodySceneInteraction ==
      (FThreadSafeStaticStat<FStat_STAT_InitBodySceneInteraction>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitBodySceneInteraction");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodySceneInteraction,*pFVar1,
               L"Init Body Scene Interaction","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSCMan_AsyncBatch'' @ 141125500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSCMan_AsyncBatch__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSCMan_AsyncBatch == (FThreadSafeStaticStat<FStat_STAT_PSCMan_AsyncBatch>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSCMan_AsyncBatch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSCMan_AsyncBatch,*pFVar1,
               L"PSC Manager Async Batch [CNC]","STATGROUP_PSCWorldMan","STATCAT_Advanced",
               L"Particle World Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSCMan_FinalizeBatch'' @ 141125590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSCMan_FinalizeBatch__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSCMan_FinalizeBatch ==
      (FThreadSafeStaticStat<FStat_STAT_PSCMan_FinalizeBatch>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSCMan_FinalizeBatch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSCMan_FinalizeBatch,*pFVar1,
               L"PSC Manager Finalize Batch [GT]","STATGROUP_PSCWorldMan","STATCAT_Advanced",
               L"Particle World Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSCMan_Tick'' @ 141125620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSCMan_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSCMan_Tick == (FThreadSafeStaticStat<FStat_STAT_PSCMan_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSCMan_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSCMan_Tick,*pFVar1,
               L"PSC Manager Tick [GT]","STATGROUP_PSCWorldMan","STATCAT_Advanced",
               L"Particle World Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticleViewParallelForImp'' @ 1411256b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticleViewParallelForImp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticleViewParallelForImp ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleViewParallelForImp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticleViewParallelForImp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleViewParallelForImp,*pFVar1,
               L"ParticleViewParallelForImp","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesParallelFor'' @ 141125740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesParallelFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesParallelFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesParallelFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesParallelFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesParallelFor,*pFVar1,
               L"ParticlesParallelFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSequentialFor'' @ 1411257d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesSequentialFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesSequentialFor ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesSequentialFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesSequentialFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesSequentialFor,*pFVar1,
               L"ParticlesSequentialFor","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SetBodyTransform'' @ 141125860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SetBodyTransform__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SetBodyTransform == (FThreadSafeStaticStat<FStat_STAT_SetBodyTransform>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SetBodyTransform");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetBodyTransform,*pFVar1,
               L"Phys SetBodyTransform","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticInitBodies'' @ 1411258f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticInitBodies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticInitBodies == (FThreadSafeStaticStat<FStat_STAT_StaticInitBodies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticInitBodies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticInitBodies,*pFVar1,
               L"Static Init Bodies","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TermBody'' @ 141125980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TermBody__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TermBody == (FThreadSafeStaticStat<FStat_STAT_TermBody>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TermBody");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TermBody,*pFVar1,L"Term Body",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailEmitterInstance_Init'' @ 141125a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailEmitterInstance_Init__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailEmitterInstance_Init ==
      (FThreadSafeStaticStat<FStat_STAT_TrailEmitterInstance_Init>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailEmitterInstance_Init");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailEmitterInstance_Init,*pFVar1,
               L"TrailEmitterInstance Init GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailFillIndexTime'' @ 141125aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailFillIndexTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailFillIndexTime == (FThreadSafeStaticStat<FStat_STAT_TrailFillIndexTime>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_TrailFillIndexTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailFillIndexTime,*pFVar1,
               L"Trail FillIndex Time RT","STATGROUP_TrailParticles","STATCAT_Advanced",
               L"Trail Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailFillVertexTime'' @ 141125b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailFillVertexTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailFillVertexTime == (FThreadSafeStaticStat<FStat_STAT_TrailFillVertexTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailFillVertexTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailFillVertexTime,*pFVar1,
               L"Trail FillVertex Time RT","STATGROUP_TrailParticles","STATCAT_Advanced",
               L"Trail Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailParticles'' @ 141125bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailParticles == (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticles,*pFVar1,L"Trail Particles",
               "STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailParticlesKilled'' @ 141125c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailParticlesKilled__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailParticlesKilled ==
      (FThreadSafeStaticStat<FStat_STAT_TrailParticlesKilled>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailParticlesKilled");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesKilled,*pFVar1,
               L"Trail Ptcls Killed","STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailParticlesRenderCalls'' @ 141125ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailParticlesRenderCalls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailParticlesRenderCalls ==
      (FThreadSafeStaticStat<FStat_STAT_TrailParticlesRenderCalls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailParticlesRenderCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesRenderCalls,*pFVar1,
               L"Trail Ptcl Render Calls","STATGROUP_TrailParticles","STATCAT_Advanced",
               L"Trail Particles",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailParticlesSpawned'' @ 141125d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailParticlesSpawned__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailParticlesSpawned ==
      (FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailParticlesSpawned");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesSpawned,*pFVar1,
               L"Trail Ptcls Spawned","STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailParticlesTickCalls'' @ 141125e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailParticlesTickCalls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailParticlesTickCalls ==
      (FThreadSafeStaticStat<FStat_STAT_TrailParticlesTickCalls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailParticlesTickCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesTickCalls,*pFVar1,
               L"Trail Tick Calls","STATGROUP_TrailParticles","STATCAT_Advanced",L"Trail Particles",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailParticlesTrianglesRendered'' @ 141125e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailParticlesTrianglesRendered__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailParticlesTrianglesRendered ==
      (FThreadSafeStaticStat<FStat_STAT_TrailParticlesTrianglesRendered>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailParticlesTrianglesRendered");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesTrianglesRendered,*pFVar1,
               L"Trail Ptcl Tris","STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailRenderingTime'' @ 141125f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailRenderingTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailRenderingTime == (FThreadSafeStaticStat<FStat_STAT_TrailRenderingTime>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_TrailRenderingTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailRenderingTime,*pFVar1,
               L"Trail Render Time RT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrailTickTime'' @ 141125fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrailTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrailTickTime == (FThreadSafeStaticStat<FStat_STAT_TrailTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrailTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailTickTime,*pFVar1,
               L"Trail Tick Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdatePhysFilter'' @ 141126040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdatePhysFilter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdatePhysFilter == (FThreadSafeStaticStat<FStat_STAT_UpdatePhysFilter>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdatePhysFilter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysFilter,*pFVar1,L"Filter Update",
               "STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdatePhysFilterPhysX'' @ 1411260d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdatePhysFilterPhysX__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdatePhysFilterPhysX ==
      (FThreadSafeStaticStat<FStat_STAT_UpdatePhysFilterPhysX>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdatePhysFilterPhysX");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysFilterPhysX,*pFVar1,
               L"Filter Update (PhysX Code)","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdatePhysMats'' @ 141126160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdatePhysMats__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdatePhysMats == (FThreadSafeStaticStat<FStat_STAT_UpdatePhysMats>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdatePhysMats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysMats,*pFVar1,L"Update Materials"
               ,"STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdatePhysMatsSceneInteraction'' @ 1411261f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdatePhysMatsSceneInteraction__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdatePhysMatsSceneInteraction ==
      (FThreadSafeStaticStat<FStat_STAT_UpdatePhysMatsSceneInteraction>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdatePhysMatsSceneInteraction");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysMatsSceneInteraction,*pFVar1,
               L"Update Materials Scene Interaction","STATGROUP_Physics","STATCAT_Advanced",
               L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h__Script_Engine_2803889088'' @ 141126280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h__Script_Engine_2803889088__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h__Script_Engine_1844126366'' @ 1411262c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h__Script_Engine_1844126366__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h__Script_Engine_1949605638'' @ 141126300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h__Script_Engine_1949605638__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h__Script_Engine_420276207'' @ 141126340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h__Script_Engine_420276207__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h__Script_Engine_3142168526'' @ 141126390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h__Script_Engine_3142168526__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h__Script_Engine_2041685116'' @ 1411263e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h__Script_Engine_2041685116__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h__Script_Engine_2540884383'' @ 141126430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h__Script_Engine_2540884383__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h__Script_Engine_251286015'' @ 141126480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h__Script_Engine_251286015__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'bEnableParticleSystemPooling'' @ 1411264c0

void __cdecl _dynamic_initializer_for__bEnableParticleSystemPooling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&bEnableParticleSystemPooling,L"FX.ParticleSystemPool.Enable",
             &GbEnableParticleSystemPooling,
             L"How many Particle System Components to preallocate when creating new ones for the pool."
             ,0);
  atexit(_dynamic_atexit_destructor_for__bEnableParticleSystemPooling__);
  return;
}

// Z_Construct_UFunction_APawn_ReceiveRestarted @ 1481b8c90

UFunction * __cdecl Z_Construct_UFunction_APawn_ReceiveRestarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_ReceiveRestarted_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_ReceiveUnpossessed @ 1481b8cd0

UFunction * __cdecl Z_Construct_UFunction_APawn_ReceiveUnpossessed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewValue_SetBit @ 1481b8d10

void __cdecl
Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bForceUpdate_SetBit @ 1481b8d20

void __cdecl
Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration @ 1481b8d30

UFunction * __cdecl Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_SpawnDefaultController @ 1481b8d70

UFunction * __cdecl Z_Construct_UFunction_APawn_SpawnDefaultController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseControllerRotationPitch_SetBit @ 1481b8db0

void __cdecl
Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c8) = *(uint *)((longlong)param_1 + 0x2c8) | 1;
  return;
}

// NewProp_bUseControllerRotationYaw_SetBit @ 1481b8dc0

void __cdecl
Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c8) = *(uint *)((longlong)param_1 + 0x2c8) | 2;
  return;
}

// NewProp_bUseControllerRotationRoll_SetBit @ 1481b8dd0

void __cdecl
Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c8) = *(uint *)((longlong)param_1 + 0x2c8) | 4;
  return;
}

// NewProp_bCanAffectNavigationGeneration_SetBit @ 1481b8de0

void __cdecl
Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c8) = *(uint *)((longlong)param_1 + 0x2c8) | 8;
  return;
}

// NewProp_bIsLocalViewTarget_SetBit @ 1481b8df0

void __cdecl Z_Construct_UClass_APawn_Statics::NewProp_bIsLocalViewTarget_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c8) = *(uint *)((longlong)param_1 + 0x2c8) | 0x40;
  return;
}

// `scalar_deleting_destructor' @ 1481b91e0

void * __thiscall
FNullDynamicParameterVertexBuffer::_scalar_deleting_destructor_
          (FNullDynamicParameterVertexBuffer *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UScriptStruct_FPSCPool @ 1481b94d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPSCPool(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPSCPool.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPSCPool.InnerSingleton,
               &Z_Construct_UScriptStruct_FPSCPool_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPSCPool.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPSCPool.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPSCPoolElem @ 1481b9550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPSCPoolElem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPSCPoolElem.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPSCPoolElem.InnerSingleton,
               &Z_Construct_UScriptStruct_FPSCPoolElem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPSCPoolElem.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPSCPoolElem.InnerSingleton;
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

// EPSCPoolMethod_StaticEnum @ 1481b95d0

UEnum * __cdecl EPSCPoolMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPSCPoolMethod,(UObject *)pUVar1,L"EPSCPoolMethod");
  }
  return Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton;
}

// NewStructOps @ 1481b9610

void * __cdecl Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPSCPoolElem,&UE::CoreUObject::Private::Construct<FPSCPoolElem>,&UE::CoreUObject::Private::ConstructForTests<FPSCPoolElem>,&UE::CoreUObject::Private::Destruct<FPSCPoolElem>,&UE::CoreUObject::Private::Copy<FPSCPoolElem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1481b9650

void * __cdecl Z_Construct_UScriptStruct_FPSCPool_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPSCPool,&UE::CoreUObject::Private::Construct<FPSCPool>,&UE::CoreUObject::Private::ConstructForTests<FPSCPool>,&UE::CoreUObject::Private::Destruct<FPSCPool>,&UE::CoreUObject::Private::Copy<FPSCPool>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1481b9690

void * __cdecl Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPSCPool,&UE::CoreUObject::Private::Construct<FWorldPSCPool>,&UE::CoreUObject::Private::ConstructForTests<FWorldPSCPool>,&UE::CoreUObject::Private::Destruct<FWorldPSCPool>,&UE::CoreUObject::Private::Copy<FWorldPSCPool>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1481b9710

void * __thiscall
TGlobalResource<FNullDynamicParameterVertexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FNullDynamicParameterVertexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNullDynamicParameterVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// EPerQualityLevels_StaticEnum @ 1481b98e0

UEnum * __cdecl EPerQualityLevels_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPerQualityLevels,(UObject *)pUVar1,
                       L"EPerQualityLevels");
  }
  return Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1481b9920

void * __thiscall
FNullSubUVCutoutVertexBuffer::_scalar_deleting_destructor_
          (FNullSubUVCutoutVertexBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481b99b0

void * __thiscall
TGlobalResource<FNullSubUVCutoutVertexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FNullSubUVCutoutVertexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNullSubUVCutoutVertexBuffer___00__6B_;
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

// NewStructOps @ 1481b9a50

void * __cdecl Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerQualityLevelInt,&UE::CoreUObject::Private::Construct<FPerQualityLevelInt>,&UE::CoreUObject::Private::ConstructForTests<FPerQualityLevelInt>,&UE::CoreUObject::Private::Destruct<FPerQualityLevelInt>,&UE::CoreUObject::Private::SerializeArchive<FPerQualityLevelInt>,&UE::CoreUObject::Private::Copy<FPerQualityLevelInt>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<FPerQualityLevelInt>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1481b9b10

void * __cdecl Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerQualityLevelFloat,&UE::CoreUObject::Private::Construct<FPerQualityLevelFloat>,&UE::CoreUObject::Private::ConstructForTests<FPerQualityLevelFloat>,&UE::CoreUObject::Private::Destruct<FPerQualityLevelFloat>,&UE::CoreUObject::Private::SerializeArchive<FPerQualityLevelFloat>,&UE::CoreUObject::Private::Copy<FPerQualityLevelFloat>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<FPerQualityLevelFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1481ba550

void * __thiscall
FParticleSpriteVertexDeclaration::_scalar_deleting_destructor_
          (FParticleSpriteVertexDeclaration *this,uint param_1)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FParticleSpriteVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 1481ba8d0

void * __cdecl
Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FParticleSystemWorldManagerTickFunction,&UE::CoreUObject::Private::Construct<FParticleSystemWorldManagerTickFunction>,&UE::CoreUObject::Private::ConstructForTests<FParticleSystemWorldManagerTickFunction>,&UE::CoreUObject::Private::Destruct<FParticleSystemWorldManagerTickFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_EDOFMode @ 1481ba910

UEnum * __cdecl Z_Construct_UEnum_Engine_EDOFMode(void)

{
  if (Z_Registration_Info_UEnum_EDOFMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDOFMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDOFMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDOFMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCollisionResponse @ 1481ba950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCollisionResponse(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCollisionResponse.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCollisionResponse.InnerSingleton,
               &Z_Construct_UScriptStruct_FCollisionResponse_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCollisionResponse.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCollisionResponse.InnerSingleton;
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

// EDOFMode_StaticEnum @ 1481ba9d0

UEnum * __cdecl EDOFMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDOFMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDOFMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDOFMode,(UObject *)pUVar1,L"EDOFMode");
  }
  return Z_Registration_Info_UEnum_EDOFMode.OuterSingleton;
}

// NewStructOps @ 1481baa10

void * __cdecl Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCollisionResponse,&UE::CoreUObject::Private::Construct<FCollisionResponse>,&UE::CoreUObject::Private::ConstructForTests<FCollisionResponse>,&UE::CoreUObject::Private::Destruct<FCollisionResponse>,&UE::CoreUObject::Private::Copy<FCollisionResponse>,&UE::CoreUObject::Private::Identical<FCollisionResponse>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1481baa50

void * __cdecl
Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBodyInstanceAsyncPhysicsTickHandle,&UE::CoreUObject::Private::Construct<FBodyInstanceAsyncPhysicsTickHandle>,&UE::CoreUObject::Private::ConstructForTests<FBodyInstanceAsyncPhysicsTickHandle>,&UE::CoreUObject::Private::Destruct<FBodyInstanceAsyncPhysicsTickHandle>,&UE::CoreUObject::Private::Copy<FBodyInstanceAsyncPhysicsTickHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1481baa90

void * __thiscall
TGlobalResource<FParticleSpriteVertexDeclaration,1>::_scalar_deleting_destructor_
          (TGlobalResource<FParticleSpriteVertexDeclaration,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleSpriteVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FParticleSpriteVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewProp_bUseCCD_SetBit @ 1481bab00

void __cdecl Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3b) = *(byte *)((longlong)param_1 + 0x3b) | 1;
  return;
}

// NewProp_bUseMACD_SetBit @ 1481bab10

void __cdecl Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseMACD_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3b) = *(byte *)((longlong)param_1 + 0x3b) | 8;
  return;
}

// NewProp_bAllowPartialIslandSleep_SetBit @ 1481bab20

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bAllowPartialIslandSleep_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3b) = *(byte *)((longlong)param_1 + 0x3b) | 0x10;
  return;
}

// NewProp_bIgnoreAnalyticCollisions_SetBit @ 1481bab30

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3b) = *(byte *)((longlong)param_1 + 0x3b) | 0x20;
  return;
}

// NewProp_bNotifyRigidBodyCollision_SetBit @ 1481bab40

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3b) = *(byte *)((longlong)param_1 + 0x3b) | 0x40;
  return;
}

// NewProp_bSmoothEdgeCollisions_SetBit @ 1481bab50

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSmoothEdgeCollisions_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 1;
  return;
}

// NewProp_bLockTranslation_SetBit @ 1481bab60

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  return;
}

// NewProp_bLockRotation_SetBit @ 1481bab70

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 4;
  return;
}

// NewProp_bLockXTranslation_SetBit @ 1481bab80

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 8;
  return;
}

// NewProp_bLockYTranslation_SetBit @ 1481bab90

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 0x10;
  return;
}

// NewProp_bLockZTranslation_SetBit @ 1481baba0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 0x20;
  return;
}

// NewProp_bLockXRotation_SetBit @ 1481babb0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 0x40;
  return;
}

// NewProp_bLockYRotation_SetBit @ 1481babc0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 0x80;
  return;
}

// NewProp_bLockZRotation_SetBit @ 1481babd0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3d) = *(byte *)((longlong)param_1 + 0x3d) | 1;
  return;
}

// NewProp_bOverrideMaxAngularVelocity_SetBit @ 1481babe0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3d) = *(byte *)((longlong)param_1 + 0x3d) | 2;
  return;
}

// NewProp_bOverrideMaxDepenetrationVelocity_SetBit @ 1481babf0

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3d) = *(byte *)((longlong)param_1 + 0x3d) | 0x10;
  return;
}

// NewProp_bOverrideWalkableSlopeOnInstance_SetBit @ 1481bac00

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3d) = *(byte *)((longlong)param_1 + 0x3d) | 0x20;
  return;
}

// NewProp_bOverrideIterationCounts_SetBit @ 1481bac10

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideIterationCounts_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3d) = *(byte *)((longlong)param_1 + 0x3d) | 0x40;
  return;
}

// NewProp_bInterpolateWhenSubStepping_SetBit @ 1481bac20

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3d) = *(byte *)((longlong)param_1 + 0x3d) | 0x80;
  return;
}

// NewProp_bInertiaConditioning_SetBit @ 1481bac30

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInertiaConditioning_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 2;
  return;
}

// NewProp_bOneWayInteraction_SetBit @ 1481bac40

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOneWayInteraction_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 4;
  return;
}

// NewProp_bOverrideSolverAsyncDeltaTime_SetBit @ 1481bac50

void __cdecl
Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideSolverAsyncDeltaTime_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 8;
  return;
}

// NewStructOps @ 1481bac60

void * __cdecl Z_Construct_UScriptStruct_FBodyInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 400;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBodyInstance,&UE::CoreUObject::Private::Construct<FBodyInstance>,&UE::CoreUObject::Private::ConstructForTests<FBodyInstance>,&UE::CoreUObject::Private::Destruct<FBodyInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_APawn_NoRegister @ 1481bad50

UClass * __cdecl Z_Construct_UClass_APawn_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Pawn",&Z_Registration_Info_UClass_APawn.InnerSingleton,
               APawn::StaticRegisterNativesAPawn,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_APawn,L"Game",InternalConstructor<APawn>,
               InternalVTableHelperCtorCaller<APawn>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APawn.InnerSingleton;
}

// Z_Construct_UClass_APawn @ 1481bae10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APawn(void)

{
  if (Z_Registration_Info_UClass_APawn.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APawn.OuterSingleton,
               &Z_Construct_UClass_APawn_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APawn.OuterSingleton;
}

// Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature @ 1481bae50

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature @ 1481bae90

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAsyncPhysicsInputComponent @ 1481baed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncPhysicsInputComponent(void)

{
  if (Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton,
               &Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton;
}

// Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume @ 1481baf10

UFunction * __cdecl Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_AddControllerPitchInput @ 1481baf50

UFunction * __cdecl Z_Construct_UFunction_APawn_AddControllerPitchInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite @ 1481baf90

UFunction * __cdecl Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_AddControllerRollInput @ 1481bafd0

UFunction * __cdecl Z_Construct_UFunction_APawn_AddControllerRollInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput @ 1481bb010

UFunction * __cdecl Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_AddControllerYawInput @ 1481bb050

UFunction * __cdecl Z_Construct_UFunction_APawn_AddControllerYawInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForce_SetBit @ 1481bb210

void __cdecl
Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// `scalar_deleting_destructor' @ 1481bb2a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,ParticleSystemWorldManagerInternal::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,ParticleSystemWorldManagerInternal::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_APawn_AddMovementInput @ 1481bb2d0

UFunction * __cdecl Z_Construct_UFunction_APawn_AddMovementInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_AddMovementInput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_ConsumeMovementInputVector @ 1481bb310

UFunction * __cdecl Z_Construct_UFunction_APawn_ConsumeMovementInputVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy @ 1481bb350

UFunction * __cdecl Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetBaseAimRotation @ 1481bb390

UFunction * __cdecl Z_Construct_UFunction_APawn_GetBaseAimRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetController @ 1481bb3d0

UFunction * __cdecl Z_Construct_UFunction_APawn_GetController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_GetController_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetControlRotation @ 1481bb410

UFunction * __cdecl Z_Construct_UFunction_APawn_GetControlRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_GetControlRotation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetLastMovementInputVector @ 1481bb450

UFunction * __cdecl Z_Construct_UFunction_APawn_GetLastMovementInputVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetLocalViewingPlayerController @ 1481bb490

UFunction * __cdecl Z_Construct_UFunction_APawn_GetLocalViewingPlayerController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetMovementBaseActor @ 1481bb4d0

UFunction * __cdecl Z_Construct_UFunction_APawn_GetMovementBaseActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetMovementComponent @ 1481bb510

UFunction * __cdecl Z_Construct_UFunction_APawn_GetMovementComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_GetMovementComponent_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPendingNetGame @ 1481bb550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPendingNetGame(void)

{
  if (Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton,
               &Z_Construct_UClass_UPendingNetGame_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton;
}

// Z_Construct_UFunction_APawn_GetNavAgentLocation @ 1481bb590

UFunction * __cdecl Z_Construct_UFunction_APawn_GetNavAgentLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetOverrideInputComponentClass @ 1481bb5d0

UFunction * __cdecl Z_Construct_UFunction_APawn_GetOverrideInputComponentClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetPendingMovementInputVector @ 1481bb610

UFunction * __cdecl Z_Construct_UFunction_APawn_GetPendingMovementInputVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_GetPlatformUserId @ 1481bb650

UFunction * __cdecl Z_Construct_UFunction_APawn_GetPlatformUserId(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1481bb690

void __cdecl
Z_Construct_UFunction_APawn_IsBotControlled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_APawn_IsBotControlled @ 1481bb6e0

UFunction * __cdecl Z_Construct_UFunction_APawn_IsBotControlled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_IsBotControlled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1481bb720

void __cdecl
Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_APawn_IsControlled @ 1481bb730

UFunction * __cdecl Z_Construct_UFunction_APawn_IsControlled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_IsControlled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1481bb770

void __cdecl
Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_APawn_IsLocallyControlled @ 1481bb780

UFunction * __cdecl Z_Construct_UFunction_APawn_IsLocallyControlled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1481bb7c0

void __cdecl
Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_APawn_IsLocallyViewed @ 1481bb7d0

UFunction * __cdecl Z_Construct_UFunction_APawn_IsLocallyViewed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1481bb810

void __cdecl
Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_APawn_IsMoveInputIgnored @ 1481bb820

UFunction * __cdecl Z_Construct_UFunction_APawn_IsMoveInputIgnored(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1481bb860

void __cdecl
Z_Construct_UFunction_APawn_IsPawnControlled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_APawn_IsPawnControlled @ 1481bb870

UFunction * __cdecl Z_Construct_UFunction_APawn_IsPawnControlled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_IsPawnControlled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubUVAnimation @ 1481bb8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubUVAnimation(void)

{
  if (Z_Registration_Info_UClass_USubUVAnimation.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubUVAnimation.OuterSingleton,
               &Z_Construct_UClass_USubUVAnimation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubUVAnimation.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1481bb8f0

void __cdecl
Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UEnum_Engine_EOpacitySourceMode @ 1481bb900

UEnum * __cdecl Z_Construct_UEnum_Engine_EOpacitySourceMode(void)

{
  if (Z_Registration_Info_UEnum_EOpacitySourceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOpacitySourceMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOpacitySourceMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount @ 1481bb940

UEnum * __cdecl Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount(void)

{
  if (Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.InnerSingleton;
}

// ESubUVBoundingVertexCount_StaticEnum @ 1481bb980

UEnum * __cdecl ESubUVBoundingVertexCount_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount,(UObject *)pUVar1,
                       L"ESubUVBoundingVertexCount");
  }
  return Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton;
}

// Z_Construct_UFunction_APawn_IsPlayerControlled @ 1481bb9c0

UFunction * __cdecl Z_Construct_UFunction_APawn_IsPlayerControlled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_OnRep_Controller @ 1481bba00

UFunction * __cdecl Z_Construct_UFunction_APawn_OnRep_Controller(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_OnRep_Controller_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EOpacitySourceMode_StaticEnum @ 1481bba40

UEnum * __cdecl EOpacitySourceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EOpacitySourceMode,(UObject *)pUVar1,
                       L"EOpacitySourceMode");
  }
  return Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton;
}

// Z_Construct_UFunction_APawn_OnRep_PlayerState @ 1481bba80

UFunction * __cdecl Z_Construct_UFunction_APawn_OnRep_PlayerState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseNoiseMakerLocation_SetBit @ 1481bbac0

void __cdecl
Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_APawn_PawnMakeNoise @ 1481bbad0

UFunction * __cdecl Z_Construct_UFunction_APawn_PawnMakeNoise(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_ReceiveControllerChanged @ 1481bbb10

UFunction * __cdecl Z_Construct_UFunction_APawn_ReceiveControllerChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APawn_ReceivePossessed @ 1481bbc40

UFunction * __cdecl Z_Construct_UFunction_APawn_ReceivePossessed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_APawn_ReceivePossessed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// <lambda_invoker_cdecl> @ 1481bbc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl <lambda_26>::<lambda_invoker_cdecl>(UWorld *param_1)

{
  FParticleSystemWorldManager **ppFVar1;
  
  ppFVar1 = TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
                    *)&FParticleSystemWorldManager::WorldManagers,param_1);
  if ((ppFVar1 != (FParticleSystemWorldManager **)0x0) &&
     (*ppFVar1 != (FParticleSystemWorldManager *)0x0)) {
    FParticleSystemWorldManager::Dump(*ppFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 1481bbcc0

void __cdecl <lambda_27>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FParticleSpriteVertexFactoryShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 1481bbce0

void __cdecl <lambda_28>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FParticleSpriteVertexFactoryShaderParametersVS::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 1481bbd00

void __cdecl <lambda_29>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FParticleSpriteVertexFactoryShaderParametersPS::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// operator<<<int,float> @ 1481bbd20

FArchive * __cdecl operator<<<int,float>(FArchive *param_1,TTuple<int,float> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x4;
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

// operator<<<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> @ 1481bbdf0

FArchive * __cdecl
operator<<<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *param_2
          )

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
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
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1481c530e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1481c530e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1481c53eb;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1481c53eb:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[3] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[2] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> @ 1481bbe00

void __cdecl
operator<<<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
          (FStructuredArchiveSlot *param_1,
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *param_2
          )

{
  TSetPrivateFriend::
  SerializeStructured<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
            (*param_1,param_2);
  return;
}

// operator<<<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> @ 1481bbe10

FArchive * __cdecl
operator<<<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
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
  uVar6 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1481c55ae;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1481c55ae:
  uVar10 = (ulonglong)uVar13;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar11;
      uVar7 = uVar9;
      while (uVar13 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1481c568b;
        uVar13 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1481c568b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        lVar3 = *(longlong *)&param_2->Elements;
        lVar12 = (longlong)(int)uVar9 * 0x10;
        uVar6 = *piVar1 - 1U & *(uint *)(lVar12 + lVar3);
        *(uint *)(lVar12 + 0xc + lVar3) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar12 + 8 + lVar3) = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> @ 1481bbe20

void __cdecl
operator<<<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
          (FStructuredArchiveSlot *param_1,
          TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
          *param_2)

{
  TSetPrivateFriend::
  SerializeStructured<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
            (*param_1,param_2);
  return;
}

// TVector2<float>_> @ 1481bbe30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
operator<<<UE::Math::TVector2<float>_>
          (FStructuredArchiveSlot param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FArchive *pFVar1;
  uint *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  FSlotBase FVar5;
  bool bVar6;
  uint uVar7;
  FArchiveState *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  FVar5.StructuredArchive = local_res8.StructuredArchive;
  pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  if (pFVar8->ArIsLoading != 0) {
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              (param_2,local_res10[0],Default);
  }
  uVar10 = 0;
  if (0 < (int)local_res10[0]) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (param_2->AllocatorInstance).Data + lVar11;
      pFVar1 = (FVar5.StructuredArchive)->Formatter->Inner;
      puVar3 = (undefined4 *)**(undefined8 **)&pFVar1->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
        if ((pFVar1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pFVar9,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pFVar9);
        }
      }
      else {
        *(undefined4 *)pFVar9 = *puVar3;
        **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
      }
      pFVar9 = pFVar9 + 4;
      pFVar1 = (FVar5.StructuredArchive)->Formatter->Inner;
      puVar2 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
        if ((pFVar1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pFVar9,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pFVar9);
        }
      }
      else {
        *(uint *)pFVar9 = *puVar2;
        **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (int)local_res10[0]);
  }
  return;
}

// operator<<<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1481bbfe0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_68;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0xc;
  puVar3 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar3 << 4,(longlong)*(int *)&param_2->field_0xc << 4);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar3 - *(int *)&param_2->field_0x34;
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
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TIterator::TIterator((TIterator *)&local_58,param_2);
    if (local_50.CurrentBitIndex < (local_50.Array)->NumBits) {
      do {
        operator<<<int,int>(param_1,(TTuple<int,int> *)
                                    ((longlong)local_50.CurrentBitIndex * 0x10 + *local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    iVar9 = 0;
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
    uVar8 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar3 = 0;
    if (*(uint *)puVar2 != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)puVar2);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar7 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)param_2,(int *)puVar3,(int *)puVar2);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x10);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_68,iVar6);
        if (local_68.Pointer != (TTuple<int,int> *)0x0) {
          *(undefined4 *)((longlong)local_68.Pointer + 8) = 0xffffffff;
          *(TTuple<int,int> *)local_68.Pointer = (TTuple<int,int>)0x0;
        }
        operator<<<int,int>(param_1,local_68.Pointer);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1481bc290

void __cdecl
operator<<<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FStructuredArchiveSlot param_1,
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  FSlotBase FVar4;
  int iVar5;
  FArchive *pFVar6;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *pTVar7;
  uint uVar8;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *pTVar9;
  FSlotBase local_res8;
  uint local_res10 [2];
  FSparseArrayAllocationInfo local_68;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  local_res10[0] = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  pFVar6 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar6->field_0x28 & 1) == 0) {
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TIterator::TIterator((TIterator *)&local_58,param_2);
    if (local_50.CurrentBitIndex < (local_50.Array)->NumBits) {
      do {
        UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int>::
        SerializeStructured((FStructuredArchiveSlot)FVar4.StructuredArchive,
                            (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *)
                            ((longlong)local_50.CurrentBitIndex * 0x10 + *local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
      return;
    }
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(param_2,local_res10[0]);
    pTVar9 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *)0x0;
    if (0 < (int)local_res10[0]) {
      do {
        pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
        if ((pFVar6->field_0x29 & 4) != 0) {
          return;
        }
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)param_2,(int *)&param_2->field_0x8,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar5 = *(int *)&param_2->field_0x30;
          iVar2 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar5 * 0x10);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar2;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar2 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_68,iVar5);
        pTVar7 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *)0x0;
        if (local_68.Pointer != (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *)0x0) {
          *(TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *)local_68.Pointer =
               (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int>)0x0;
          *(undefined4 *)((longlong)local_68.Pointer + 8) = 0xffffffff;
          pTVar7 = local_68.Pointer;
        }
        UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int>::
        SerializeStructured((FStructuredArchiveSlot)FVar4.StructuredArchive,pTVar7);
        uVar8 = (int)pTVar9 + 1;
        pTVar9 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,int> *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res10[0]);
    }
  }
  return;
}

// operator<<<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1481bc4b0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_68;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0xc;
  puVar3 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar3 << 4,(longlong)*(int *)&param_2->field_0xc << 4);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar3 - *(int *)&param_2->field_0x34;
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
    TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TIterator::TIterator((TIterator *)&local_58,param_2);
    if (local_50.CurrentBitIndex < (local_50.Array)->NumBits) {
      do {
        operator<<<int,float>
                  (param_1,(TTuple<int,float> *)
                           ((longlong)local_50.CurrentBitIndex * 0x10 + *local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    iVar9 = 0;
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
    uVar8 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar3 = 0;
    if (*(uint *)puVar2 != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)puVar2);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar7 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)param_2,(int *)puVar3,(int *)puVar2);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x10);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_68,iVar6);
        if (local_68.Pointer != (TTuple<int,float> *)0x0) {
          *(undefined4 *)((longlong)local_68.Pointer + 8) = 0xffffffff;
          *(TTuple<int,float> *)local_68.Pointer = (TTuple<int,float>)0x0;
        }
        operator<<<int,float>(param_1,local_68.Pointer);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1481bc760

void __cdecl
operator<<<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FStructuredArchiveSlot param_1,
          TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  FSlotBase FVar4;
  int iVar5;
  FArchive *pFVar6;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *pTVar7;
  uint uVar8;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *pTVar9;
  FSlotBase local_res8;
  uint local_res10 [2];
  FSparseArrayAllocationInfo local_68;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  local_res10[0] = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  pFVar6 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar6->field_0x28 & 1) == 0) {
    TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TIterator::TIterator((TIterator *)&local_58,param_2);
    if (local_50.CurrentBitIndex < (local_50.Array)->NumBits) {
      do {
        UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float>::
        SerializeStructured((FStructuredArchiveSlot)FVar4.StructuredArchive,
                            (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *)
                            ((longlong)local_50.CurrentBitIndex * 0x10 + *local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
      return;
    }
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(param_2,local_res10[0]);
    pTVar9 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *)0x0;
    if (0 < (int)local_res10[0]) {
      do {
        pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
        if ((pFVar6->field_0x29 & 4) != 0) {
          return;
        }
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)param_2,(int *)&param_2->field_0x8,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar5 = *(int *)&param_2->field_0x30;
          iVar2 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar5 * 0x10);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar2;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar2 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_68,iVar5);
        pTVar7 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *)0x0;
        if (local_68.Pointer != (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *)0x0) {
          *(TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *)local_68.Pointer =
               (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float>)0x0;
          *(undefined4 *)((longlong)local_68.Pointer + 8) = 0xffffffff;
          pTVar7 = local_68.Pointer;
        }
        UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float>::
        SerializeStructured((FStructuredArchiveSlot)FVar4.StructuredArchive,pTVar7);
        uVar8 = (int)pTVar9 + 1;
        pTVar9 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,int,float> *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res10[0]);
    }
  }
  return;
}

// CastChecked<AController,AActor> @ 1481bcf70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AController * __cdecl CastChecked<AController,AActor>(AActor *param_1,Type param_2)

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
      return (AController *)0x0;
    }
    pFVar3 = GetTypeName<AController>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_AController_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AController *)param_1;
  }
  pFVar3 = GetTypeName<AController>(&local_28);
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

// CastChecked<UBodySetup,UBodySetupCore> @ 1481bd050

UBodySetup * __cdecl CastChecked<UBodySetup,UBodySetupCore>(UBodySetupCore *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UBodySetupCore *)0x0) {
    pFVar3 = GetTypeName<UBodySetup>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UBodySetup_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UBodySetup *)param_1;
  }
  pFVar3 = GetTypeName<UBodySetup>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UBodySetupCore>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPendingNetGame,UObject> @ 1481bd110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPendingNetGame * __cdecl CastChecked<UPendingNetGame,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPendingNetGame>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPendingNetGame::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPendingNetGame *)param_1;
  }
  pFVar3 = GetTypeName<UPendingNetGame>(&local_28);
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

// ConstructItems<FPSCPoolElem,FPSCPoolElem,int> @ 1481bd320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ConstructItems<FPSCPoolElem,FPSCPoolElem,int>(void *param_1,FPSCPoolElem *param_2,int param_3)

{
  UParticleSystemComponent *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->PSC).field0_0x0.DebugPtr;
      *(UParticleSystemComponent **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UParticleSystemComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(float *)(lVar2 + 8 + (longlong)param_2) = param_2->LastUsedTime;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructVertexFactoryParameters<FParticleSpriteVertexFactory> @ 1481bd380

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FVertexFactoryShaderParameters * __cdecl
ConstructVertexFactoryParameters<FParticleSpriteVertexFactory>
          (EShaderFrequency param_1,FShaderParameterMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  FVertexFactoryShaderParameters *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
    pFVar3 = operator_new(0x10);
    if (pFVar3 != (FVertexFactoryShaderParameters *)0x0) {
      *(undefined8 *)(pFVar3 + 2) = 0;
      *(undefined8 *)pFVar3 = 0;
    }
    FShaderParameter::Bind
              ((FShaderParameter *)(pFVar3 + 1),param_2,L"NumCutoutVerticesPerFrame",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)((longlong)&pFVar3[2].Size_DEPRECATED + 2),param_2,
               L"CutoutGeometry",SPF_Optional);
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    return (FVertexFactoryShaderParameters *)0x0;
  case SF_Pixel:
    break;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0x113,L"");
    if (!bVar2) {
      return (FVertexFactoryShaderParameters *)0x0;
    }
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVertexFactoryShaderParameters *)(*pcVar1)();
    return pFVar3;
  }
  pFVar3 = operator_new(4);
  if (pFVar3 != (FVertexFactoryShaderParameters *)0x0) {
    pFVar3->Size_DEPRECATED = 0;
    return pFVar3;
  }
  return (FVertexFactoryShaderParameters *)0x0;
}

// ConvertQualityLevelData<int> @ 1481bd4a0

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __cdecl
QualityLevelProperty::ConvertQualityLevelData<int>
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
           *__return_storage_ptr__,
          TMap<EPerQualityLevels,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,int,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<EPerQualityLevels,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,int,0>_>
  *pTVar6;
  bool bVar7;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  int local_res18;
  uint *local_b8;
  byte *local_b0;
  TMap<EPerQualityLevels,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,int,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<EPerQualityLevels,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,int,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &param_1->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uStack_9c = 1;
  iStack_a0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  local_88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  iStack_8c = iStack_a0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_1481bd56d;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_9c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_1481bd56d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar11 & 0xffffffe0;
  iStack_80 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_1;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
             (*pcVar5)();
    return pTVar8;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1481bd670;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1481bd670:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EPerQualityLevels,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_b0 = (byte *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)pTVar6);
    local_res10[0] = (uint)*local_b0;
    local_b8 = local_res10;
    local_b0 = local_b0 + 4;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               __return_storage_ptr__,(TPairInitializer<int_&&,int_const_&> *)&stack0x00000020,
               (bool *)&local_b8);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// ConvertQualityLevelData<int> @ 1481bd700

TMap<EPerQualityLevels,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,int,0>_>
* __cdecl QualityLevelProperty::ConvertQualityLevelData<int>
                    (TMap<EPerQualityLevels,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,int,0>_>
                     *__return_storage_ptr__,
                    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                    *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  bool bVar7;
  TMap<EPerQualityLevels,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,int,0>_>
  *pTVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined1 *local_b8;
  undefined1 *local_b0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &param_1->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uStack_9c = 1;
  iStack_a0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  local_88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  iStack_8c = iStack_a0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_1481bd7cd;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_9c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_1481bd7cd:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar11 & 0xffffffe0;
  iStack_80 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_1;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TMap<EPerQualityLevels,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,int,0>_>
              *)(*pcVar5)();
    return pTVar8;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1481bd8d0;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1481bd8d0:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_b0 = (undefined1 *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)pTVar6);
    local_res8[0] = *local_b0;
    local_b8 = local_res8;
    local_b0 = local_b0 + 4;
    TSet<TTuple<enum_EPerQualityLevels,int>,TDefaultMapHashableKeyFuncs<enum_EPerQualityLevels,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EPerQualityLevels_&&,int_const_&>_>
              (__return_storage_ptr__,
               (TPairInitializer<EPerQualityLevels_&&,int_const_&> *)&stack0x00000020,
               (bool *)&local_b8);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// ConvertQualityLevelData<float> @ 1481bd960

TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> * __cdecl
QualityLevelProperty::ConvertQualityLevelData<float>
          (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
           *__return_storage_ptr__,
          TMap<EPerQualityLevels,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,float,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<EPerQualityLevels,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,float,0>_>
  *pTVar6;
  bool bVar7;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  float local_res10 [2];
  float local_res18 [2];
  int local_res20;
  TPairInitializer<int_&&,float_&&> local_c8;
  float *local_b8;
  TMap<EPerQualityLevels,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,float,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<EPerQualityLevels,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,float,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  puVar1 = &param_1->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uStack_a4 = 1;
  iStack_a8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  local_90 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  iStack_94 = iStack_a8;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    local_90 = 0;
    iStack_a8 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1481bda2d;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_94 = local_res20 + -1 + local_90;
    if (iVar3 < iStack_94) {
      iStack_94 = iVar3;
    }
  }
LAB_1481bda2d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar11 & 0xffffffe0;
  iStack_88 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
             (*pcVar5)();
    return pTVar8;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1481bdb30;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1481bdb30:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EPerQualityLevels,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar11) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    lVar9 = *(longlong *)pTVar6;
    local_res10[0] = (float)(uint)*(byte *)(lVar9 + (longlong)TStack_78.CurrentBitIndex * 0x10);
    local_res18[0] = (float)(int)*(float *)(lVar9 + 4 + (longlong)TStack_78.CurrentBitIndex * 0x10);
    local_c8.Value = local_res10;
    local_b8 = local_res18;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,float_&&>_>
              ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,&local_c8,(bool *)&local_c8.Value);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return __return_storage_ptr__;
}

// ConvertQualityLevelData<float> @ 1481bdbe0

TMap<EPerQualityLevels,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,float,0>_>
* __cdecl QualityLevelProperty::ConvertQualityLevelData<float>
                    (TMap<EPerQualityLevels,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,float,0>_>
                     *__return_storage_ptr__,
                    TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                    *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar6;
  bool bVar7;
  TMap<EPerQualityLevels,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,float,0>_>
  *pTVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined1 *local_b8;
  undefined1 *local_b0;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &param_1->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uStack_9c = 1;
  iStack_a0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  local_88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  iStack_8c = iStack_a0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_1481bdcad;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_9c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_1481bdcad:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar11 & 0xffffffe0;
  iStack_80 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_1;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TMap<EPerQualityLevels,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPerQualityLevels,float,0>_>
              *)(*pcVar5)();
    return pTVar8;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1481bddb0;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1481bddb0:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_b0 = (undefined1 *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)pTVar6);
    local_res8[0] = *local_b0;
    local_b8 = local_res8;
    local_b0 = local_b0 + 4;
    TSet<TTuple<enum_EPerQualityLevels,float>,TDefaultMapHashableKeyFuncs<enum_EPerQualityLevels,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EPerQualityLevels_&&,float_const_&>_>
              (__return_storage_ptr__,
               (TPairInitializer<EPerQualityLevels_&&,float_const_&> *)&stack0x00000020,
               (bool *)&local_b8);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// CreateDynamicBeam2EmitterIndices<unsigned_short> @ 1481bde40

int __cdecl
CreateDynamicBeam2EmitterIndices<unsigned_short>
          (ushort *param_1,FDynamicBeam2EmitterReplayData *param_2)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = 0;
  uVar7 = 0;
  iVar5 = 0;
  puVar3 = param_1;
  if (0 < *(int *)((longlong)&param_2->_padding_ + 4)) {
    do {
      lVar8 = (longlong)(iVar5 * (int)param_2->_padding_) + (longlong)param_2->BeamDataOffset +
              param_2->_padding_;
      if ((*(int *)(lVar8 + 0xa0) != 0) &&
         ((param_2->InterpolationPoints < 1 || (*(int *)(lVar8 + 0x98) != 0)))) {
        lVar2 = (longlong)puVar3 - (longlong)param_1 >> 1;
        if (uVar7 == 0) {
          if (lVar2 < 0xfffe) {
            puVar3[0] = 0;
            puVar3[1] = 1;
            uVar7 = 2;
            puVar3 = puVar3 + 2;
          }
        }
        else if (lVar2 < 0xfffc) {
          *puVar3 = uVar7 - 1;
          puVar3[1] = uVar7;
          puVar3[2] = uVar7;
          puVar3[3] = uVar7 + 1;
          uVar7 = uVar7 + 2;
          puVar3 = puVar3 + 4;
          iVar9 = iVar9 + 4;
        }
        iVar1 = 0;
        if (0 < param_2->Sheets) {
          do {
            iVar4 = 0;
            iVar9 = iVar9 + *(int *)(lVar8 + 0xa0);
            uVar6 = uVar7;
            if (0 < *(int *)(lVar8 + 0xa0)) {
              do {
                uVar7 = uVar6 + 1;
                *puVar3 = uVar6;
                puVar3 = puVar3 + 1;
                if (0x1fffe < (longlong)((longlong)puVar3 - (longlong)param_1 & 0xfffffffffffffffeU)
                   ) break;
                iVar4 = iVar4 + 1;
                uVar6 = uVar7;
              } while (iVar4 < *(int *)(lVar8 + 0xa0));
            }
            iVar1 = iVar1 + 1;
            if ((iVar1 < param_2->Sheets) &&
               ((longlong)((longlong)puVar3 - (longlong)param_1 & 0xfffffffffffffffeU) < 0x1fff7)) {
              *puVar3 = uVar7 - 1;
              puVar3[1] = uVar7;
              puVar3[2] = uVar7;
              puVar3[3] = uVar7 + 1;
              uVar7 = uVar7 + 2;
              puVar3 = puVar3 + 4;
              iVar9 = iVar9 + 4;
            }
          } while (((longlong)((longlong)puVar3 - (longlong)param_1 & 0xfffffffffffffffeU) < 0x1ffff
                   ) && (iVar1 < param_2->Sheets));
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((longlong)&param_2->_padding_ + 4));
  }
  return iVar9;
}

// CreateDynamicBeam2EmitterIndices<unsigned_int> @ 1481be010

int __cdecl
CreateDynamicBeam2EmitterIndices<unsigned_int>
          (uint *param_1,FDynamicBeam2EmitterReplayData *param_2)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = 0;
  uVar7 = 0;
  iVar5 = 0;
  puVar3 = param_1;
  if (0 < *(int *)((longlong)&param_2->_padding_ + 4)) {
    do {
      lVar8 = (longlong)(iVar5 * (int)param_2->_padding_) + (longlong)param_2->BeamDataOffset +
              param_2->_padding_;
      if ((*(int *)(lVar8 + 0xa0) != 0) &&
         ((param_2->InterpolationPoints < 1 || (*(int *)(lVar8 + 0x98) != 0)))) {
        lVar2 = (longlong)puVar3 - (longlong)param_1 >> 2;
        if (uVar7 == 0) {
          if (lVar2 < 0xfffe) {
            *puVar3 = 0;
            uVar7 = 2;
            puVar3[1] = 1;
            puVar3 = puVar3 + 2;
          }
        }
        else if (lVar2 < 0xfffc) {
          *puVar3 = uVar7 - 1;
          uVar6 = uVar7 + 1;
          puVar3[1] = uVar7;
          puVar3[2] = uVar7;
          uVar7 = uVar7 + 2;
          puVar3[3] = uVar6;
          puVar3 = puVar3 + 4;
          iVar9 = iVar9 + 4;
        }
        iVar1 = 0;
        if (0 < param_2->Sheets) {
          do {
            iVar4 = 0;
            iVar9 = iVar9 + *(int *)(lVar8 + 0xa0);
            uVar6 = uVar7;
            if (0 < *(int *)(lVar8 + 0xa0)) {
              do {
                uVar7 = uVar6 + 1;
                *puVar3 = uVar6;
                puVar3 = puVar3 + 1;
                if (0x3fffc < (longlong)((longlong)puVar3 - (longlong)param_1 & 0xfffffffffffffffcU)
                   ) break;
                iVar4 = iVar4 + 1;
                uVar6 = uVar7;
              } while (iVar4 < *(int *)(lVar8 + 0xa0));
            }
            iVar1 = iVar1 + 1;
            if ((iVar1 < param_2->Sheets) &&
               ((longlong)((longlong)puVar3 - (longlong)param_1 & 0xfffffffffffffffcU) < 0x3ffed)) {
              *puVar3 = uVar7 - 1;
              uVar6 = uVar7 + 1;
              puVar3[1] = uVar7;
              puVar3[2] = uVar7;
              uVar7 = uVar7 + 2;
              puVar3[3] = uVar6;
              puVar3 = puVar3 + 4;
              iVar9 = iVar9 + 4;
            }
          } while (((longlong)((longlong)puVar3 - (longlong)param_1 & 0xfffffffffffffffcU) < 0x3fffd
                   ) && (iVar1 < param_2->Sheets));
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((longlong)&param_2->_padding_ + 4));
  }
  return iVar9;
}

// DefaultConstructItems<FPSCTickData,int> @ 1481bf3d0

void __cdecl DefaultConstructItems<FPSCTickData,int>(void *param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 0xd);
    do {
      *pbVar1 = *pbVar1 & 0xf8;
      pbVar1[-0xd] = 0;
      pbVar1[-0xc] = 0;
      pbVar1[-0xb] = 0;
      pbVar1[-10] = 0;
      pbVar1[-9] = 0;
      pbVar1[-8] = 0;
      pbVar1[-7] = 0;
      pbVar1[-6] = 0;
      pbVar1[-5] = 0xff;
      pbVar1[-4] = 0xff;
      pbVar1[-3] = 0xff;
      pbVar1[-2] = 0xff;
      pbVar1[-1] = 0;
      pbVar1 = pbVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FParticleSystemWorldManagerTickFunction,int> @ 1481bf410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DefaultConstructItems<FParticleSystemWorldManagerTickFunction,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FTickFunction::FTickFunction(param_1);
    ((FTickFunction *)param_1)->_padding_ =
         (longlong)&___7FParticleSystemWorldManagerTickFunction__6B_;
    param_1 = &((FTickFunction *)((longlong)param_1 + 0x28))->TickGroup;
  }
  return;
}

// DefaultConstructItems<FPhysicalMaterialMaskParams,int> @ 1481bf460

void __cdecl DefaultConstructItems<FPhysicalMaterialMaskParams,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TEnumAsByte<enum_ECollisionEnabled::Type>,int> @ 1481bf470

void __cdecl
DefaultConstructItems<TEnumAsByte<enum_ECollisionEnabled::Type>,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<FParticleSystemWorldManagerTickFunction,int> @ 1481bf4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<FParticleSystemWorldManagerTickFunction,int>
          (FParticleSystemWorldManagerTickFunction *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FTickFunction::~FTickFunction((FTickFunction *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FParticleSystemWorldManager::FTickList,int> @ 1481bf520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<FParticleSystemWorldManager::FTickList,int>(FTickList *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->TickList).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FTickList *)(&param_1->TickList + 1);
  }
  return;
}

// DuplicateObject<UAsyncPhysicsData> @ 1481bf560

UAsyncPhysicsData * __cdecl
DuplicateObject<UAsyncPhysicsData>(UAsyncPhysicsData *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UAsyncPhysicsData *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
  pUVar2 = (UAsyncPhysicsData *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// ForEachComponent_Internal<UParticleSystemComponent,1,1,`AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1481c0af0

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

void __thiscall
AActor::
ForEachComponent_Internal<UParticleSystemComponent,1,1,_AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
  UParticleSystemComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
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
    if (bVar12) goto LAB_1481c0c13;
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
LAB_1481c0c13:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1481c0cad;
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
LAB_1481c0cad:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_1481c0db0;
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
LAB_1481c0db0:
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
        ForEachComponent_Internal<UParticleSystemComponent,1,1,_AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UParticleSystemComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UParticleSystemComponent *)0x0) {
      `AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UParticleSystemComponent,1,0,`AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1481c1020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UParticleSystemComponent,1,0,_AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UParticleSystemComponent *pUVar4;
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
  TArray<UParticleSystemComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
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
  pUVar10 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
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
    if (bVar6) goto LAB_1481c1126;
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
LAB_1481c1126:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1481c11ad;
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
LAB_1481c11ad:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1481c12b1;
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
LAB_1481c12b1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UParticleSystemComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UParticleSystemComponent *)0x0) {
      `AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UParticleSystemComponent,0,1,`AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1481c1330

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

void __thiscall
AActor::
ForEachComponent_Internal<UParticleSystemComponent,0,1,_AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UParticleSystemComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
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
    if (bVar13) goto LAB_1481c1423;
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
LAB_1481c1423:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_1481c14d0;
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
LAB_1481c14d0:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_1481c15e0;
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
LAB_1481c15e0:
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
        ForEachComponent_Internal<UParticleSystemComponent,0,1,_AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UParticleSystemComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UParticleSystemComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UParticleSystemComponent,0,0,`AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1481c1870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UParticleSystemComponent,0,0,_AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UParticleSystemComponent *pUVar6;
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
  TArray<UParticleSystemComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
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
  pUVar12 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
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
    if (bVar9) goto LAB_1481c194e;
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
LAB_1481c194e:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_1481c19df;
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
LAB_1481c19df:
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
      goto LAB_1481c1af0;
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
LAB_1481c1af0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UParticleSystemComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UParticleSystemComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `AActor::GetComponents<UParticleSystemComponent,TSizedDefaultAllocator<32>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_> @ 1481c1b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl
GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>
          (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FString::FString(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
                        ::__l2::NullName,L"<NoName>");
      atexit(`GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>'::__l2::
             _dynamic_atexit_destructor_for__NullName__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = (param_1->DebugName).Object;
  pFVar2 = &`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
            ::__l2::NullName;
  if (pFVar1 != (FString *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c1c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl
GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FString::FString(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
                        ::__l2::NullName,L"<NoName>");
      atexit(`GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::
             __l2::_dynamic_atexit_destructor_for__NullName__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = (param_1->DebugName).Object;
  pFVar2 = &`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
            ::__l2::NullName;
  if (pFVar1 != (FString *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetFullNameForCastLogError<UBodySetupCore> @ 1481c1d50

FString * __cdecl
GetFullNameForCastLogError<UBodySetupCore>(FString *__return_storage_ptr__,UBodySetupCore *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<AController> @ 1481c1d80

FString * __cdecl GetTypeName<AController>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_AController_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBodySetup> @ 1481c1dc0

FString * __cdecl GetTypeName<UBodySetup>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UBodySetup_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleTypeDataAnimTrail> @ 1481c1e00

FString * __cdecl GetTypeName<UParticleModuleTypeDataAnimTrail>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UParticleModuleTypeDataRibbon> @ 1481c1e40

FString * __cdecl GetTypeName<UParticleModuleTypeDataRibbon>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPendingNetGame> @ 1481c1e80

FString * __cdecl GetTypeName<UPendingNetGame>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPendingNetGame::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVertexFactoryParametersElementShaderBindings<FParticleSpriteVertexFactory> @ 1481c1ec0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
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

void __cdecl
GetVertexFactoryParametersElementShaderBindings<FParticleSpriteVertexFactory>
          (EShaderFrequency param_1,FVertexFactoryShaderParameters *param_2,FSceneInterface *param_3
          ,FSceneView *param_4,FMeshMaterialShader *param_5,EVertexInputStreamType param_6,
          Type param_7,FVertexFactory *param_8,FMeshBatchElement *param_9,
          FMeshDrawSingleShaderBindings *param_10,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_11)

{
  FRHIUniformBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  FHashedName FVar5;
  FShaderUniformBufferParameter *pFVar6;
  FHashedName local_18;
  FHashedName local_10;
  
  switch(param_1) {
  case SF_Vertex:
    FParticleSpriteVertexFactoryShaderParametersVS::GetElementShaderBindings
              ((FParticleSpriteVertexFactoryShaderParametersVS *)param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
    return;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    break;
  case SF_Pixel:
    pFVar1 = (FRHIUniformBuffer *)param_8[1]._padding_;
    pFVar4 = FParticleSpriteUniformParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_18,&pFVar4->ShaderVariableHashedName);
    FVar5.Hash = (ulong64)FHashedName::FHashedName(&local_10,&local_18);
    pFVar6 = FShader::GetUniformBufferParameter((FShader *)param_5,FVar5);
    if (pFVar6->BaseIndex != 0xffff) {
      if ((pFVar1 == (FRHIUniformBuffer *)0x0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                             ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar6->BaseIndex == 0xffff) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4717616138333192331>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                             ,0x8b,"IsBound()"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                (param_10,pFVar1,(uint)pFVar6->BaseIndex);
    }
    break;
  default:
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0x132,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// GetVertexFactoryParametersLayout<FParticleSpriteVertexFactory> @ 1481c20a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FTypeLayoutDesc * __cdecl
GetVertexFactoryParametersLayout<FParticleSpriteVertexFactory>(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
    pFVar3 = FParticleSpriteVertexFactoryShaderParametersVS::StaticGetTypeLayout();
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_1481c20bd_caseD_1;
  case SF_Pixel:
    pFVar3 = FParticleSpriteVertexFactoryShaderParametersPS::StaticGetTypeLayout();
    return pFVar3;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTypeLayoutDesc *)(*pcVar1)();
      return pFVar3;
    }
switchD_1481c20bd_caseD_1:
    return (FTypeLayoutDesc *)0x0;
  }
}

// HeapSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrder::*>,TGreater<void>_> @ 1481c2140

void __cdecl
AlgoImpl::
HeapSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrder::*>,TGreater<void>_>
          (FParticleOrder *param_1,int param_2,
          TProjectionMemberData<unsigned_int_FParticleOrder::*> param_3,TGreater<void> param_4)

{
  FParticleOrder FVar1;
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
LAB_1481c2251:
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
                  if (*(uint *)((longlong)&param_1[iVar4].ParticleIndex + lVar6) <
                      *(uint *)((longlong)&param_1[(longlong)iVar7 + 2].ParticleIndex + lVar6)) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (*(uint *)((longlong)&param_1[iVar10].ParticleIndex + lVar6) <=
                    *(uint *)((longlong)&param_1[iVar4].ParticleIndex + lVar6)) break;
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
      if (*(uint *)((longlong)&param_1[iVar9].ParticleIndex + lVar6) <
          *(uint *)((longlong)&param_1[(longlong)iVar5 + 2].ParticleIndex + lVar6)) {
        iVar9 = iVar5;
      }
      iVar9 = iVar9 + 1;
    }
    if (*(uint *)((longlong)&param_1[iVar4].ParticleIndex + lVar6) <=
        *(uint *)((longlong)&param_1[iVar9].ParticleIndex + lVar6)) goto LAB_1481c2251;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar9];
    iVar5 = iVar9 * 2 + 1;
    param_1[iVar9] = FVar1;
    iVar4 = iVar9;
  } while( true );
}

// HeapSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<float_FParticleOrder::*>,TGreater<void>_> @ 1481c2340

void __cdecl
AlgoImpl::
HeapSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<float_FParticleOrder::*>,TGreater<void>_>
          (FParticleOrder *param_1,int param_2,
          TProjectionMemberData<float_FParticleOrder::*> param_3,TGreater<void> param_4)

{
  float *pfVar1;
  float fVar2;
  FParticleOrder FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  lVar8 = (longlong)(int)param_3.DataMemberPtr;
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
  iVar12 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1481c2447:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar12 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar12 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  fVar2 = *(float *)((longlong)&param_1[(longlong)iVar9 + 2].ParticleIndex + lVar8);
                  pfVar1 = (float *)((longlong)&param_1[iVar6].ParticleIndex + lVar8);
                  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                fVar2 = *(float *)((longlong)&param_1[iVar12].ParticleIndex + lVar8);
                pfVar1 = (float *)((longlong)&param_1[iVar6].ParticleIndex + lVar8);
                if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
                FVar3 = param_1[iVar12];
                param_1[iVar12] = param_1[iVar6];
                param_1[iVar6] = FVar3;
                iVar12 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar12 + -2;
      iVar12 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar11 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      fVar2 = *(float *)((longlong)&param_1[(longlong)iVar7 + 2].ParticleIndex + lVar8);
      pfVar1 = (float *)((longlong)&param_1[iVar11].ParticleIndex + lVar8);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        iVar11 = iVar7;
      }
      iVar11 = iVar11 + 1;
    }
    fVar2 = *(float *)((longlong)&param_1[iVar6].ParticleIndex + lVar8);
    pfVar1 = (float *)((longlong)&param_1[iVar11].ParticleIndex + lVar8);
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto LAB_1481c2447;
    FVar3 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar11];
    iVar7 = iVar11 * 2 + 1;
    param_1[iVar11] = FVar3;
    iVar6 = iVar11;
  } while( true );
}

// InternalConstructor<APawn> @ 1481c2530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<APawn>(FObjectInitializer *param_1)

{
  if ((APawn *)param_1->Obj != (APawn *)0x0) {
    APawn::APawn((APawn *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAsyncPhysicsInputComponent> @ 1481c2550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAsyncPhysicsInputComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  FObjectInitializer *pFVar1;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UActorComponent::UActorComponent(this,pFVar1);
    this->bAutoActivate = '\x01';
    this->_padding_ = (longlong)&UAsyncPhysicsInputComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAsyncPhysicsInputComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAsyncPhysicsInputComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UActorComponent::SetIsReplicatedByDefault(this,true);
    return;
  }
  return;
}

// InternalConstructor<UPendingNetGame> @ 1481c25e0

void __cdecl InternalConstructor<UPendingNetGame>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UPendingNetGame::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)(this + 1) = &UPendingNetGame::_vftable__for__FNetworkNotify__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FURL::FURL((FURL *)&this[1].field_0x18,(wchar_t *)0x0);
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<USubUVAnimation> @ 1481c2650

void __cdecl InternalConstructor<USubUVAnimation>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USubUVAnimation__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)(this + 2));
    *(undefined4 *)&this[1].field_0x8 = 8;
    *(undefined4 *)&this[1].field_0xc = 8;
    this[1].field_0x10 = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<APawn> @ 1481c26b0

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

UObject * __cdecl InternalVTableHelperCtorCaller<APawn>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APawn::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&APawn::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&APawn::_vftable__for__INavAgentInterface__;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined2 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncPhysicsInputComponent> @ 1481c27a0

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
InternalVTableHelperCtorCaller<UAsyncPhysicsInputComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncPhysicsInputComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UAsyncPhysicsInputComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAsyncPhysicsInputComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAsyncPhysicsInputComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPendingNetGame> @ 1481c2890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPendingNetGame>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPendingNetGame::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UPendingNetGame::_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)(pUVar1 + 1) = &UPendingNetGame::_vftable__for__FNetworkNotify__;
    FURL::FURL((FURL *)&pUVar1[1].field_0x18,(wchar_t *)0x0);
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubUVAnimation> @ 1481c2970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USubUVAnimation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubUVAnimation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USubUVAnimation__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)(pUVar1 + 2));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrder::*>,TGreater<void>_> @ 1481c2a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrder::*>,TGreater<void>_>
          (FParticleOrder *param_1,int param_2,
          TProjectionMemberData<unsigned_int_FParticleOrder::*> param_3,TGreater<void> param_4)

{
  uint *puVar1;
  FParticleOrder *pFVar2;
  FParticleOrder FVar3;
  int iVar4;
  FParticleOrder *pFVar5;
  longlong lVar6;
  FParticleOrder *pFVar7;
  FParticleOrder *pFVar8;
  FParticleOrder *pFVar9;
  FParticleOrder *pFVar10;
  FParticleOrder **ppFVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  FParticleOrder *local_348;
  FParticleOrder *local_338;
  FParticleOrder *local_330;
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
LAB_1481c2ae0:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pFVar7 = pFVar9 + 1;
          puVar1 = (uint *)((longlong)&pFVar10->ParticleIndex + lVar6);
          FVar3 = pFVar10[iVar4 >> 1];
          pFVar10[iVar4 >> 1] = *pFVar10;
          *pFVar10 = FVar3;
          pFVar5 = pFVar10;
LAB_1481c2b10:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar9) goto code_r0x0001481c2b19;
          goto LAB_1481c2b21;
        }
        for (; pFVar5 = pFVar10, pFVar2 = pFVar10, pFVar10 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar2 = pFVar2 + 1, pFVar2 <= pFVar9) {
            if (*(uint *)((longlong)&pFVar2->ParticleIndex + lVar6) <
                *(uint *)((longlong)&pFVar5->ParticleIndex + lVar6)) {
              pFVar5 = pFVar2;
            }
          }
          FVar3 = *pFVar5;
          *pFVar5 = *pFVar9;
          *pFVar9 = FVar3;
        }
        goto LAB_1481c2bda;
      }
LAB_1481c2bc9:
      local_348 = pFVar2;
      HeapSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrder::*>,TGreater<void>_>
                (pFVar5,iVar4,param_3,param_4);
LAB_1481c2bda:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_338 <= ppFVar11);
  }
  return;
code_r0x0001481c2b19:
  if (*puVar1 <= *(uint *)((longlong)&pFVar5->ParticleIndex + lVar6)) goto LAB_1481c2b10;
LAB_1481c2b21:
  do {
    pFVar8 = pFVar7;
    pFVar7 = pFVar8 + -1;
    if (pFVar7 <= pFVar10) break;
  } while (*(uint *)((longlong)&pFVar7->ParticleIndex + lVar6) <= *puVar1);
  if (pFVar5 <= pFVar7) {
    FVar3 = *pFVar5;
    *pFVar5 = *pFVar7;
    *pFVar7 = FVar3;
    goto LAB_1481c2b10;
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
    if (pFVar7 <= pFVar10 + 1) goto LAB_1481c2bda;
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
    if (pFVar9 <= pFVar5) goto LAB_1481c2bda;
  }
  iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar5 >> 3) + 1;
  pFVar10 = pFVar5;
  if ((int)local_348 == 0) goto LAB_1481c2bc9;
  goto LAB_1481c2ae0;
}

// IntroSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<float_FParticleOrder::*>,TGreater<void>_> @ 1481c2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<float_FParticleOrder::*>,TGreater<void>_>
          (FParticleOrder *param_1,int param_2,
          TProjectionMemberData<float_FParticleOrder::*> param_3,TGreater<void> param_4)

{
  FParticleOrder *pFVar1;
  FParticleOrder FVar2;
  int iVar3;
  FParticleOrder *pFVar4;
  float *pfVar5;
  longlong lVar6;
  FParticleOrder *pFVar7;
  FParticleOrder *pFVar8;
  FParticleOrder *pFVar9;
  FParticleOrder *pFVar10;
  FParticleOrder **ppFVar11;
  float fVar12;
  undefined1 auStack_388 [48];
  FParticleOrder *local_358;
  FParticleOrder *local_348;
  FParticleOrder *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    lVar6 = (longlong)(int)param_3.DataMemberPtr;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar12;
    memset(local_330,0,0x2e8);
    ppFVar11 = &local_348;
    do {
      pFVar9 = ppFVar11[1];
      pFVar8 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar3 = (int)((longlong)pFVar9 - (longlong)pFVar8 >> 3) + 1;
      local_358._0_4_ = (int)pFVar1;
      pFVar10 = pFVar8;
      if ((int)local_358 != 0) {
LAB_1481c2d40:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar4 = pFVar9 + 1;
          FVar2 = pFVar10[iVar3 >> 1];
          pFVar10[iVar3 >> 1] = *pFVar10;
          *pFVar10 = FVar2;
          pFVar8 = pFVar10;
LAB_1481c2d70:
          pFVar8 = pFVar8 + 1;
          if (pFVar8 <= pFVar9) goto code_r0x0001481c2d79;
          goto LAB_1481c2d85;
        }
        if (pFVar10 < pFVar9) {
          pFVar1 = pFVar10 + 1;
          do {
            pFVar8 = pFVar10;
            if (pFVar1 <= pFVar9) {
              pFVar4 = pFVar1;
              if (0x1f < ((longlong)pFVar9 + (8 - (longlong)pFVar1) & 0xfffffffffffffff8U)) {
                pfVar5 = (float *)((longlong)&pFVar1[2].ParticleIndex + lVar6);
                do {
                  if (pfVar5[-4] < *(float *)((longlong)&pFVar8->ParticleIndex + lVar6)) {
                    pFVar8 = pFVar4;
                  }
                  fVar12 = *(float *)((longlong)&pFVar8->ParticleIndex + lVar6);
                  if (pfVar5[-2] <= fVar12 && fVar12 != pfVar5[-2]) {
                    pFVar8 = (FParticleOrder *)((-8 - lVar6) + (longlong)pfVar5);
                  }
                  fVar12 = *(float *)((longlong)&pFVar8->ParticleIndex + lVar6);
                  if (*pfVar5 <= fVar12 && fVar12 != *pfVar5) {
                    pFVar8 = (FParticleOrder *)((longlong)pfVar5 - lVar6);
                  }
                  fVar12 = *(float *)((longlong)&pFVar8->ParticleIndex + lVar6);
                  if (pfVar5[2] <= fVar12 && fVar12 != pfVar5[2]) {
                    pFVar8 = (FParticleOrder *)((8 - lVar6) + (longlong)pfVar5);
                  }
                  pFVar4 = pFVar4 + 4;
                  pfVar5 = pfVar5 + 8;
                } while (pFVar4 <= pFVar9 + -3);
              }
              for (; pFVar4 <= pFVar9; pFVar4 = pFVar4 + 1) {
                if (*(float *)((longlong)&pFVar4->ParticleIndex + lVar6) <
                    *(float *)((longlong)&pFVar8->ParticleIndex + lVar6)) {
                  pFVar8 = pFVar4;
                }
              }
            }
            FVar2 = *pFVar8;
            pFVar4 = pFVar9 + -1;
            *pFVar8 = *pFVar9;
            *pFVar9 = FVar2;
            pFVar9 = pFVar4;
          } while (pFVar10 < pFVar4);
        }
        goto LAB_1481c2e44;
      }
LAB_1481c2e33:
      local_358 = pFVar1;
      HeapSortInternal<FParticleOrder,int,UE::Core::Private::TProjectionMemberData<float_FParticleOrder::*>,TGreater<void>_>
                (pFVar8,iVar3,param_3,param_4);
LAB_1481c2e44:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_348 <= ppFVar11);
  }
  return;
code_r0x0001481c2d79:
  fVar12 = *(float *)((longlong)&pFVar10->ParticleIndex + lVar6);
  pfVar5 = (float *)((longlong)&pFVar8->ParticleIndex + lVar6);
  if (fVar12 < *pfVar5 || fVar12 == *pfVar5) goto LAB_1481c2d70;
LAB_1481c2d85:
  do {
    pFVar7 = pFVar4;
    pFVar4 = pFVar7 + -1;
    if (pFVar4 <= pFVar10) break;
    fVar12 = *(float *)((longlong)&pFVar4->ParticleIndex + lVar6);
    pfVar5 = (float *)((longlong)&pFVar10->ParticleIndex + lVar6);
  } while (fVar12 < *pfVar5 || fVar12 == *pfVar5);
  if (pFVar8 <= pFVar4) {
    FVar2 = *pFVar8;
    *pFVar8 = *pFVar4;
    *pFVar4 = FVar2;
    goto LAB_1481c2d70;
  }
  FVar2 = *pFVar10;
  local_358._0_4_ = (int)local_358 + -1;
  *pFVar10 = *pFVar4;
  *pFVar4 = FVar2;
  if ((longlong)((longlong)pFVar4 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar9 - (longlong)pFVar8 & 0xfffffffffffffff8U)) {
    if (pFVar8 < pFVar9) {
      *ppFVar11 = pFVar8;
      ppFVar11[1] = pFVar9;
      *(int *)(ppFVar11 + 2) = (int)local_358;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar4 <= pFVar10 + 1) goto LAB_1481c2e44;
    pFVar9 = pFVar7 + -2;
    pFVar8 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar4) {
      *ppFVar11 = pFVar10;
      ppFVar11[1] = pFVar7 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_358;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar9 <= pFVar8) goto LAB_1481c2e44;
  }
  iVar3 = (int)((longlong)pFVar9 - (longlong)pFVar8 >> 3) + 1;
  pFVar10 = pFVar8;
  if ((int)local_358 == 0) goto LAB_1481c2e33;
  goto LAB_1481c2d40;
}

// IsObjectPtrEqual<AActor,AController_*,0> @ 1481c2f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AActor,AController_*,0>
          (TObjectPtr<AActor> *param_1,AController **param_2)

{
  if ((AController *)(param_1->field0_0x0).DebugPtr == (AController *)0x0) {
    return *param_2 == (AController *)0x0;
  }
  return (AController *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<AController,AController_*,0> @ 1481c2fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AController,AController_*,0>
          (TObjectPtr<AController> *param_1,AController **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AController *)0x0) {
    return *param_2 == (AController *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UParticleModuleSpawnBase,UParticleModule_*,0> @ 1481c2fc0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UParticleModuleSpawnBase,UParticleModule_*,0>
          (TObjectPtr<UParticleModuleSpawnBase> *param_1,UParticleModule **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UParticleModuleSpawnBase *)0x0) {
    return (UParticleModuleSpawnBase *)*param_2 == (UParticleModuleSpawnBase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UParticleModuleSpawnBase *)*param_2;
}

// ObjectPtrWrap<UParticleSystemComponent_*,TObjectPtr<UParticleSystemComponent>_> @ 1481c31e0

/* WARNING: Enum "Type": Some values do not have unique names */

TObjectPtr<UParticleSystemComponent> * __cdecl
ObjectPtrWrap<UParticleSystemComponent_*,TObjectPtr<UParticleSystemComponent>_>
          (UParticleSystemComponent **param_1)

{
  return (TObjectPtr<UParticleSystemComponent> *)param_1;
}

// RemoveAllSwap<`FPSCPool::KillUnusedComponents'::__l13::<lambda_1>_> @ 1481c4c00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_FPSCPool::KillUnusedComponents_::__l13::<lambda_1>_>
          (TArray<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  iVar9 = iVar6;
  if (0 < iVar6) {
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      bVar4 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)
                         ((this->AllocatorInstance).Data + (longlong)(int)uVar8 * 8));
      if (bVar4) {
        uVar8 = uVar8 + 1;
      }
      else {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar9 = this->ArrayNum + ~uVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar9 = this->ArrayNum;
    } while ((int)uVar8 < iVar9);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// RemoveAllSwap<`FPSCPool::KillUnusedComponents'::__l34::<lambda_2>_> @ 1481c4d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_FPSCPool::KillUnusedComponents_::__l34::<lambda_2>_>
          (TArray<TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_2> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  iVar9 = iVar6;
  if (0 < iVar6) {
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      bVar4 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)
                         ((this->AllocatorInstance).Data + (longlong)(int)uVar8 * 8));
      if (bVar4) {
        uVar8 = uVar8 + 1;
      }
      else {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar9 = this->ArrayNum + ~uVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar9 = this->ArrayNum;
    } while ((int)uVar8 < iVar9);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// StaticEnum<enum_EOpacitySourceMode> @ 1481c5cb0

UEnum * __cdecl StaticEnum<enum_EOpacitySourceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EOpacitySourceMode,(UObject *)pUVar1,
                       L"EOpacitySourceMode");
  }
  return Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton;
}

// StaticEnum<enum_EPSCPoolMethod> @ 1481c5cf0

UEnum * __cdecl StaticEnum<enum_EPSCPoolMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPSCPoolMethod,(UObject *)pUVar1,L"EPSCPoolMethod");
  }
  return Z_Registration_Info_UEnum_EPSCPoolMethod.OuterSingleton;
}

// StaticEnum<enum_EPerQualityLevels> @ 1481c5d30

UEnum * __cdecl StaticEnum<enum_EPerQualityLevels>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPerQualityLevels,(UObject *)pUVar1,
                       L"EPerQualityLevels");
  }
  return Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton;
}

// StaticEnum<enum_ESubUVBoundingVertexCount> @ 1481c5d70

UEnum * __cdecl StaticEnum<enum_ESubUVBoundingVertexCount>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount,(UObject *)pUVar1,
                       L"ESubUVBoundingVertexCount");
  }
  return Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton;
}

// StaticEnum<enum_EDOFMode::Type> @ 1481c5db0

UEnum * __cdecl StaticEnum<enum_EDOFMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDOFMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDOFMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDOFMode,(UObject *)pUVar1,L"EDOFMode");
  }
  return Z_Registration_Info_UEnum_EDOFMode.OuterSingleton;
}

// FThreadSafeStaticStat<`FParticleManagerAsyncTask::GetStatId'::__l2::FStat_FParticleManagerAsyncTask> @ 1481c64f0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FParticleManagerAsyncTask::GetStatId(void)const_::_2_::FStat_FParticleManagerAsyncTask>
* __thiscall
FThreadSafeStaticStat<`FParticleManagerAsyncTask::GetStatId'::__l2::FStat_FParticleManagerAsyncTask>
::
FThreadSafeStaticStat<_FParticleManagerAsyncTask::GetStatId_::__l2::FStat_FParticleManagerAsyncTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FParticleManagerAsyncTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FParticleManagerAsyncTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FParticleManagerFinalizeTask::GetStatId'::__l2::FStat_FParticleManagerFinalizeTask> @ 1481c6580

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FParticleManagerFinalizeTask::GetStatId(void)const_::_2_::FStat_FParticleManagerFinalizeTask>
* __thiscall
FThreadSafeStaticStat<`FParticleManagerFinalizeTask::GetStatId'::__l2::FStat_FParticleManagerFinalizeTask>
::
FThreadSafeStaticStat<_FParticleManagerFinalizeTask::GetStatId_::__l2::FStat_FParticleManagerFinalizeTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FParticleManagerFinalizeTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FParticleManagerFinalizeTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`FBodyInstance::AddAngularImpulseInRadians'::__l2::<lambda_1>,0,1> @ 1481c8900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddAngularImpulseInRadians'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FBodyInstance::AddAngularImpulseInRadians_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddAngularImpulseInRadians'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBodyInstance::AddForce'::__l2::<lambda_1>,0,1> @ 1481c8920

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FBodyInstance::AddForce'::__l2::<lambda_1>,0,1>
::~TFunction_OwnedObject<_FBodyInstance::AddForce_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddForce'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBodyInstance::AddForceAtPosition'::__l2::<lambda_1>,0,1> @ 1481c8940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddForceAtPosition'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FBodyInstance::AddForceAtPosition_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddForceAtPosition'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBodyInstance::AddImpulse'::__l2::<lambda_1>,0,1> @ 1481c8960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddImpulse'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FBodyInstance::AddImpulse_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddImpulse'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBodyInstance::AddImpulseAtPosition'::__l2::<lambda_1>,0,1> @ 1481c8980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddImpulseAtPosition'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FBodyInstance::AddImpulseAtPosition_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddImpulseAtPosition'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FBodyInstance::AddTorqueInRadians'::__l2::<lambda_1>,0,1> @ 1481c89a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddTorqueInRadians'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FBodyInstance::AddTorqueInRadians_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddTorqueInRadians'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBodyInstance::AddVelocityChangeImpulseAtLocation'::__l2::<lambda_1>,0,1> @ 1481c89c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddVelocityChangeImpulseAtLocation'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FBodyInstance::AddVelocityChangeImpulseAtLocation_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddVelocityChangeImpulseAtLocation'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,``FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()'::__l21::FWeldedBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1481c8c40

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,``FBodyInstance::UpdateMassProperties'::__l5::<lambda_1>::operator()'::__l21::FWeldedBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,__FBodyInstance::UpdateMassProperties_::__l5::<lambda_1>::operator()_::__l21::FWeldedBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,this,0,(int *)((longlong)this + 0xc));
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

// operator<< @ 1481c9930

FArchive * __cdecl operator<<(FArchive *param_1,FBodyInstance *param_2)

{
  if ((param_1->field_0x28 & 5) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x138))(param_1,&param_2->OwnerComponent);
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&param_2->PhysMaterialOverride);
  }
  if ((((param_1->field_0x28 & 1) != 0) && (*(int *)&param_1->field_0x40 < 0x1e1)) &&
     (__real_43c80000 != param_2->MaxAngularVelocity)) {
    param_2->bOverrideMaxAngularVelocity = '\x01';
    return param_1;
  }
  return param_1;
}

// operator() @ 1481cc210

void __thiscall
``FBodyInstance::UpdatePhysicsFilterData'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::
operator()(void *this,FPhysicsShapeReference_Chaos *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FCollisionFilterData *pFVar4;
  bool bVar5;
  ECollisionShapeType EVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 uVar9;
  FCombinedShapeFilterData local_38;
  
  bVar5 = FChaosEngineInterface::IsSimulationShape(param_1);
  iVar2 = **(int **)((longlong)this + 8);
  iVar3 = **(int **)this;
  EVar6 = FChaosEngineInterface::GetShapeType(param_1);
  bVar7 = FChaosEngineInterface::IsStatic(*(FSingleParticlePhysicsProxy ***)((longlong)this + 0x10))
  ;
  pFVar4 = *(FCollisionFilterData **)((longlong)this + 0x18);
  if ((*(char *)((longlong)&pFVar4[3].Word0 + 2) == '\0') || ((bVar7 && (iVar2 <= iVar3)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (EVar6 == Trimesh) {
    uVar9 = *(undefined1 *)((longlong)&pFVar4[3].Word0 + 1);
  }
  else {
    uVar9 = (undefined1)pFVar4[3].Word0;
  }
  bVar1 = *(bool *)((longlong)&pFVar4[3].Word0 + 3);
  FChaosEngineInterface::SetIsQueryShape(param_1,bVar7);
  FChaosEngineInterface::SetIsSimulationShape(param_1,(bool)uVar9);
  FChaosEngineInterface::SetIsProbeShape(param_1,bVar1);
  if (bVar5 != (bool)uVar9) {
    **(undefined1 **)((longlong)this + 0x20) = 1;
  }
  lVar8 = 0x20;
  if (EVar6 != Trimesh) {
    lVar8 = 0x10;
  }
  Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter
            (&local_38,(FCollisionFilterData *)((longlong)&pFVar4->Word0 + lVar8),pFVar4);
  FChaosEngineInterface::SetCombinedShapeFilterData(param_1,&local_38);
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 1481d0960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl APawn::`vector deleting destructor'`adjustor{704}'
   (unsigned int) __ptr64 */

void * __thiscall APawn::_vector_deleting_destructor__adjustor_704__(APawn *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((APawn *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1481d0974

/* [thunk]:public: virtual void * __ptr64 __cdecl UAsyncPhysicsInputComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAsyncPhysicsInputComponent::_vector_deleting_destructor__adjustor_40__
          (UAsyncPhysicsInputComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAsyncPhysicsInputComponent *)&this[-1].DataClass,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1481d0990

void * __thiscall
IBaseDelegateInstance<void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d09c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d09f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FParticleSystemWorldManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FParticleSystemWorldManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0a20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncPhysicsInputComponent,void___cdecl(int,int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAsyncPhysicsInputComponent,void___cdecl(int,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0a50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPendingNetGame,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPendingNetGame,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0a80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPendingNetGame,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPendingNetGame,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0ab0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0ae0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddAngularImpulseInRadians'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddAngularImpulseInRadians'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0b50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FBodyInstance::AddForce'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddForce'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddForceAtPosition'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddForceAtPosition'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddImpulse'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddImpulse'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddImpulseAtPosition'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddImpulseAtPosition'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddTorqueInRadians'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddTorqueInRadians'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBodyInstance::AddVelocityChangeImpulseAtLocation'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBodyInstance::AddVelocityChangeImpulseAtLocation'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0cd0

void * __thiscall
TGraphTask<FParticleManagerAsyncTask>::_scalar_deleting_destructor_
          (TGraphTask<FParticleManagerAsyncTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0d30

void * __thiscall
TGraphTask<FParticleManagerFinalizeTask>::_scalar_deleting_destructor_
          (TGraphTask<FParticleManagerFinalizeTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0d90

void * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::_scalar_deleting_destructor_
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,uint param_1)

{
  longlong *plVar1;
  FTriangleMeshImplicitObject *pFVar2;
  longlong lVar3;
  
  this->_padding_ =
       (longlong)&___7__TImplicitObjectScaled_VFTriangleMeshImplicitObject_Chaos___0A__Chaos__6B_;
  pFVar2 = (this->MObject).Reference;
  if (pFVar2 != (FTriangleMeshImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0e10

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicBeamTrailCollectorResources>::_scalar_deleting_destructor_
          (TObject<FDynamicBeamTrailCollectorResources> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicBeamTrailCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FDynamicBeamTrailCollectorResources__6B_;
  (**(code **)(*(longlong *)&this[1].field_0x8 + 0x20))(&this[1].field_0x8);
  if (*(FRHIResource **)(this + 0x16) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)(this + 0x16));
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0ea0

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicMeshEmitterCollectorResources>::_scalar_deleting_destructor_
          (TObject<FDynamicMeshEmitterCollectorResources> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicMeshEmitterCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FDynamicMeshEmitterCollectorResources__6B_;
  (**(code **)(*(longlong *)&this[1].field_0x8 + 0x20))(&this[1].field_0x8);
  if (*(FRHIResource **)(this + 0x2e) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)(this + 0x2e));
  }
  FDynamicReadBuffer::~FDynamicReadBuffer((FDynamicReadBuffer *)(this + 0x2b));
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0f40

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicSpriteCollectorResources>::_scalar_deleting_destructor_
          (TObject<FDynamicSpriteCollectorResources> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicSpriteCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FDynamicSpriteCollectorResources::~FDynamicSpriteCollectorResources
            ((FDynamicSpriteCollectorResources *)(this + 1));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0f90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d0fd0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::__l46::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall APawn::_scalar_deleting_destructor_(APawn *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7INavAgentInterface__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FAsyncPhysicsInputRewindCallback::_scalar_deleting_destructor_
          (FAsyncPhysicsInputRewindCallback *this,uint param_1)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DispatchPhysicsTick).field_0x8,*(int *)&(this->DispatchPhysicsTick).field_0x10
            );
  pvVar1 = *(void **)&(this->DispatchPhysicsTick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DispatchPhysicsTick);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d10e0

void * __thiscall
FDynamicBeamTrailCollectorResources::_scalar_deleting_destructor_
          (FDynamicBeamTrailCollectorResources *this,uint param_1)

{
  TUniformBufferRef<FParticleBeamTrailUniformParameters> this_00;
  
  this->_padding_ = (longlong)&___7FDynamicBeamTrailCollectorResources__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  this_00 = (this->VertexFactory).BeamTrailUniformBuffer;
  if (this_00 != (TUniformBufferRef<FParticleBeamTrailUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1160

void * __thiscall
FDynamicMeshEmitterCollectorResources::_scalar_deleting_destructor_
          (FDynamicMeshEmitterCollectorResources *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDynamicMeshEmitterCollectorResources__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  if (this->UniformBuffer != (TUniformBufferRef<FMeshParticleUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  FDynamicReadBuffer::~FDynamicReadBuffer(&(this->VertexFactory).PrevTransformBuffer);
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d11f0

void * __thiscall
FDynamicMeshEmitterData::_scalar_deleting_destructor_(FDynamicMeshEmitterData *this,uint param_1)

{
  ForElementType<FMaterialRenderProxy_*> FVar1;
  
  this->_padding_ = (longlong)&___7FDynamicMeshEmitterData__6B_;
  FVar1 = (this->MeshMaterials).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source);
  this->_padding_ = (longlong)&___7FDynamicEmitterDataBase__6B_;
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FDynamicEmitterDataBase::operator_delete(this,0x180);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1270

void * __thiscall
FDynamicSpriteCollectorResources::_scalar_deleting_destructor_
          (FDynamicSpriteCollectorResources *this,uint param_1)

{
  ~FDynamicSpriteCollectorResources(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d12b0

void * __thiscall
FMeshParticleVertexFactory::_scalar_deleting_destructor_
          (FMeshParticleVertexFactory *this,uint param_1)

{
  FDynamicReadBuffer::~FDynamicReadBuffer(&this->PrevTransformBuffer);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1300

void * __thiscall
FParticleAnimTrailEmitterInstance::_scalar_deleting_destructor_
          (FParticleAnimTrailEmitterInstance *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FParticleAnimTrailEmitterInstance__6B_;
  FParticleTrailsEmitterInstance_Base::~FParticleTrailsEmitterInstance_Base
            ((FParticleTrailsEmitterInstance_Base *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1350

void * __thiscall
FParticleBeamTrailVertexFactory::_scalar_deleting_destructor_
          (FParticleBeamTrailVertexFactory *this,uint param_1)

{
  if (this->BeamTrailUniformBuffer != (TUniformBufferRef<FParticleBeamTrailUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->BeamTrailUniformBuffer);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d13a0

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
FParticleRibbonEmitterInstance::_scalar_deleting_destructor_
          (FParticleRibbonEmitterInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FParticleRibbonEmitterInstance__6B_;
  pFVar1 = (this->CurrentSizes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentLifetimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceTangentStrength).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceTangent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceRotation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourcePosition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourceTangentStrength).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourceTangent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourceUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourceRotation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourcePosition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FParticleTrailsEmitterInstance_Base::~FParticleTrailsEmitterInstance_Base
            ((FParticleTrailsEmitterInstance_Base *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1500

void * __thiscall
FParticleSpriteVertexFactory::_scalar_deleting_destructor_
          (FParticleSpriteVertexFactory *this,uint param_1)

{
  FRHIUniformBuffer *this_00;
  
  this_00 = (this->SpriteUniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FParticleSystemWorldManager::_scalar_deleting_destructor_
          (FParticleSystemWorldManager *this,uint param_1)

{
  ~FParticleSystemWorldManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FParticleSystemWorldManagerTickFunction::_scalar_deleting_destructor_
          (FParticleSystemWorldManagerTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d15d0

void * __thiscall
FParticleTrailsEmitterInstance_Base::_scalar_deleting_destructor_
          (FParticleTrailsEmitterInstance_Base *this,uint param_1)

{
  ~FParticleTrailsEmitterInstance_Base(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1610

void * __thiscall
FSubUVBoundingGeometryBuffer::_scalar_deleting_destructor_
          (FSubUVBoundingGeometryBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FSubUVBoundingGeometryBuffer__6B_;
  this_00 = (this->ShaderResourceView).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1670

void * __thiscall
Chaos::IRewindCallback::_scalar_deleting_destructor_(IRewindCallback *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d16a0

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
UAsyncPhysicsInputComponent::_scalar_deleting_destructor_
          (UAsyncPhysicsInputComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->BufferedData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d1730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UPendingNetGame::_scalar_deleting_destructor_(UPendingNetGame *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  pFVar1 = (this->ConnectionError).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FURL::~FURL(&this->URL);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1481d17c0

void * __thiscall USubUVAnimation::_scalar_deleting_destructor_(USubUVAnimation *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubUVAnimation__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseFence);
  pFVar1 = (this->DerivedData).BoundingGeometry.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
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

// AdjustForSmallThreshold @ 1481d3d10

float __cdecl AdjustForSmallThreshold(float param_1,float param_2)

{
  if (0.0 <= param_1 - param_2) {
    if ((0.0 < param_1 - param_2) &&
       ((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3dcccccd)) {
      param_1 = __real_3dcccccd;
    }
  }
  else if ((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3dcccccd) {
    return __real_bdcccccd;
  }
  return param_1;
}

// ApplyOrbitToPosition @ 1481d42f0

void __cdecl
ApplyOrbitToPosition
          (FBaseParticle *param_1,FDynamicSpriteEmitterReplayDataBase *param_2,
          TMatrix<double> *param_3,TVector<double> *param_4,TVector<double> *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar10 = (longlong)param_2->OrbitModuleOffset;
  if (param_2->OrbitModuleOffset != 0) {
    fVar1 = *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar10 + 0x14);
    dVar13 = (double)*(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar10 + 0xc);
    dVar11 = (double)*(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar10 + 0x10);
    if (param_2->bUseLocalSpace != false) {
      (param_4->field0_0x0)._s_0.X = dVar13 + (param_4->field0_0x0)._s_0.X;
      (param_4->field0_0x0)._s_0.Y = dVar11 + (param_4->field0_0x0)._s_0.Y;
      (param_4->field0_0x0)._s_0.Z = (double)fVar1 + (param_4->field0_0x0)._s_0.Z;
      fVar1 = *(float *)((longlong)&(param_1->Velocity).field0_0x0 + lVar10 + 4);
      fVar2 = *(float *)((longlong)&param_1->Rotation + lVar10);
      (param_5->field0_0x0)._s_0.Y =
           (double)*(float *)((longlong)&(param_1->Velocity).field0_0x0 + lVar10) +
           (param_5->field0_0x0)._s_0.Y;
      (param_5->field0_0x0)._s_0.Z = (double)fVar1 + (param_5->field0_0x0)._s_0.Z;
      (param_5->field0_0x0)._s_0.X = (double)fVar2 + (param_5->field0_0x0)._s_0.X;
      return;
    }
    dVar14 = (double)fVar1;
    dVar3 = param_3->M[0][0];
    dVar4 = param_3->M[1][0];
    dVar5 = param_3->M[2][0];
    dVar6 = param_3->M[3][0];
    dVar7 = param_3->M[1][2];
    dVar8 = param_3->M[0][2];
    dVar9 = param_3->M[2][2];
    dVar12 = param_3->M[3][2];
    (param_4->field0_0x0)._s_0.Y =
         dVar11 * param_3->M[1][1] + dVar13 * param_3->M[0][1] + dVar14 * param_3->M[2][1] +
         param_3->M[3][1] * 0.0 + (param_4->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.X =
         dVar11 * dVar4 + dVar13 * dVar3 + dVar14 * dVar5 + dVar6 * 0.0 +
         (param_4->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Z =
         dVar11 * dVar7 + dVar13 * dVar8 + dVar14 * dVar9 + dVar12 * 0.0 +
         (param_4->field0_0x0)._s_0.Z;
    dVar11 = (double)*(float *)((longlong)&param_1->Rotation + lVar10);
    dVar13 = param_3->M[1][0];
    dVar12 = (double)*(float *)((longlong)&(param_1->Velocity).field0_0x0 + lVar10);
    dVar14 = (double)*(float *)((longlong)&(param_1->Velocity).field0_0x0 + lVar10 + 4);
    dVar3 = param_3->M[0][0];
    dVar4 = param_3->M[2][0];
    dVar5 = param_3->M[3][0];
    dVar6 = param_3->M[1][2];
    dVar7 = param_3->M[0][2];
    dVar8 = param_3->M[2][2];
    dVar9 = param_3->M[3][2];
    (param_5->field0_0x0)._s_0.Y =
         dVar12 * param_3->M[1][1] + dVar11 * param_3->M[0][1] + dVar14 * param_3->M[2][1] +
         param_3->M[3][1] * 0.0 + (param_5->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.X =
         dVar12 * dVar13 + dVar11 * dVar3 + dVar14 * dVar4 + dVar5 * 0.0 +
         (param_5->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Z =
         dVar12 * dVar6 + dVar11 * dVar7 + dVar14 * dVar8 + dVar9 * 0.0 +
         (param_5->field0_0x0)._s_0.Z;
  }
  return;
}

// ComputeLockedAxes @ 1481da740

void __cdecl
ComputeLockedAxes(EParticleAxisLock param_1,TMatrix<double> *param_2,TVector<double> *param_3,
                 TVector<double> *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar15;
  double dVar14;
  double dStack_190;
  double local_188;
  double dStack_178;
  double local_170;
  double dStack_160;
  double local_158;
  double dStack_148;
  double local_140;
  double dStack_130;
  double local_128;
  double dStack_118;
  double local_110;
  double dStack_100;
  double local_f8;
  double dStack_e8;
  double local_e0;
  double dStack_d0;
  double local_c8;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar10 = __real_3e45798ee0000000;
  dVar14 = __real_3ff0000000000000;
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar8 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar9 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  dVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  switch(param_1) {
  case EPAL_X:
    uVar1 = param_2->M[2][0];
    dStack_178 = param_2->M[2][1];
    local_170 = param_2->M[2][2];
    dVar12 = dStack_178 * dStack_178 + (double)uVar1 * (double)uVar1 + local_170 * local_170;
    if (dVar12 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar12;
        dStack_178 = dStack_178 * dVar12;
        local_170 = local_170 * dVar12;
      }
      else {
        dStack_178 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_170 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      }
    }
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_3->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_178 >> 0x20) ^ uVar15,
                          SUB84(dStack_178,0) ^ uVar13);
    (param_3->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_170 >> 0x20) ^ uVar15,SUB84(local_170,0) ^ uVar13)
    ;
    uVar1 = param_2->M[1][0];
    dStack_160 = param_2->M[1][1];
    local_158 = param_2->M[1][2];
    dVar12 = dStack_160 * dStack_160 + (double)uVar1 * (double)uVar1 + local_158 * local_158;
    if (dVar12 != dVar14) {
      if (dVar10 <= dVar12) {
        dVar14 = dVar14 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar14;
        dStack_160 = dVar14 * dStack_160;
        local_158 = dVar14 * local_158;
      }
      else {
        dStack_160 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_158 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
    }
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_4->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_160 >> 0x20) ^ uVar15,
                          SUB84(dStack_160,0) ^ uVar13);
    (param_4->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_158 >> 0x20) ^ uVar15,SUB84(local_158,0) ^ uVar13)
    ;
    break;
  case EPAL_Y:
    uVar1 = param_2->M[2][0];
    dStack_148 = param_2->M[2][1];
    local_140 = param_2->M[2][2];
    dVar12 = dStack_148 * dStack_148 + (double)uVar1 * (double)uVar1 + local_140 * local_140;
    if (dVar12 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar12;
        dStack_148 = dStack_148 * dVar12;
        local_140 = local_140 * dVar12;
      }
      else {
        dStack_148 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_140 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      }
    }
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_3->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_148 >> 0x20) ^ uVar15,
                          SUB84(dStack_148,0) ^ uVar13);
    (param_3->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_140 >> 0x20) ^ uVar15,SUB84(local_140,0) ^ uVar13)
    ;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar12 = param_2->M[0][0];
    dVar2 = param_2->M[0][1];
    dVar3 = param_2->M[0][2];
    dVar11 = dVar2 * dVar2 + dVar12 * dVar12 + dVar3 * dVar3;
    if (dVar11 != dVar14) {
      if (dVar11 < dVar10) {
        (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (param_4->field0_0x0)._s_0.Y = (double)uVar1;
        (param_4->field0_0x0)._s_0.Z = (double)uVar7;
        return;
      }
LAB_1481dab32:
      dVar14 = dVar14 / SQRT(dVar11);
      dVar12 = dVar12 * dVar14;
      dVar2 = dVar2 * dVar14;
      dVar3 = dVar3 * dVar14;
    }
    goto LAB_1481dab50;
  case EPAL_Z:
    uVar1 = param_2->M[0][0];
    dStack_130 = param_2->M[0][1];
    local_128 = param_2->M[0][2];
    dVar12 = dStack_130 * dStack_130 + (double)uVar1 * (double)uVar1 + local_128 * local_128;
    if (dVar12 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar12;
        dStack_130 = dStack_130 * dVar12;
        local_128 = local_128 * dVar12;
      }
      else {
        dStack_130 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_128 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      }
    }
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_3->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_130 >> 0x20) ^ uVar15,
                          SUB84(dStack_130,0) ^ uVar13);
    (param_3->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_128 >> 0x20) ^ uVar15,SUB84(local_128,0) ^ uVar13)
    ;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar12 = param_2->M[1][0];
    dVar2 = param_2->M[1][1];
    dVar3 = param_2->M[1][2];
    dVar11 = dVar2 * dVar2 + dVar12 * dVar12 + dVar3 * dVar3;
    if (dVar11 != dVar14) {
      if (dVar11 < dVar10) {
        (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (param_4->field0_0x0)._s_0.Y = (double)uVar1;
        (param_4->field0_0x0)._s_0.Z = (double)uVar7;
        return;
      }
      goto LAB_1481dab32;
    }
LAB_1481dab50:
    auVar4._8_4_ = SUB84(dVar2,0);
    auVar4._0_8_ = dVar12;
    auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])&param_4->field0_0x0 = auVar4;
    (param_4->field0_0x0)._s_0.Z = dVar3;
    break;
  case EPAL_NEGATIVE_X:
    uVar1 = param_2->M[2][0];
    dStack_118 = param_2->M[2][1];
    local_110 = param_2->M[2][2];
    dVar12 = dStack_118 * dStack_118 + (double)uVar1 * (double)uVar1 + local_110 * local_110;
    if (dVar12 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar12;
        dStack_118 = dVar12 * dStack_118;
        local_110 = dVar12 * local_110;
      }
      else {
        dStack_118 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_110 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      }
    }
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_3->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_118 >> 0x20) ^ uVar15,
                          SUB84(dStack_118,0) ^ uVar13);
    (param_3->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_110 >> 0x20) ^ uVar15,SUB84(local_110,0) ^ uVar13)
    ;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar12 = param_2->M[1][0];
    dVar2 = param_2->M[1][1];
    uVar8 = *(undefined4 *)((longlong)param_2->M[1] + 4);
    uVar9 = *(undefined4 *)(param_2->M[1] + 1);
    dVar3 = param_2->M[1][2];
    dVar11 = dVar2 * dVar2 + dVar12 * dVar12 + dVar3 * dVar3;
    if (dVar11 == dVar14) {
      *(undefined4 *)&param_4->field0_0x0 = *(undefined4 *)param_2->M[1];
      *(undefined4 *)((longlong)&param_4->field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = uVar9;
      *(int *)((longlong)&param_4->field0_0x0 + 0xc) = (int)((ulonglong)dVar2 >> 0x20);
      (param_4->field0_0x0)._s_0.Z = dVar3;
    }
    else if (dVar10 <= dVar11) {
      dVar14 = dVar14 / SQRT(dVar11);
      auVar6._8_4_ = SUB84(dVar14 * dVar2,0);
      auVar6._0_8_ = dVar14 * dVar12;
      auVar6._12_4_ = (int)((ulonglong)(dVar14 * dVar2) >> 0x20);
      *(undefined1 (*) [16])&param_4->field0_0x0 = auVar6;
      (param_4->field0_0x0)._s_0.Z = dVar14 * dVar3;
    }
    else {
      (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_4->field0_0x0)._s_0.Y = (double)uVar1;
      (param_4->field0_0x0)._s_0.Z = (double)uVar7;
    }
    break;
  case EPAL_NEGATIVE_Y:
    uVar1 = param_2->M[2][0];
    dStack_100 = param_2->M[2][1];
    local_f8 = param_2->M[2][2];
    dVar12 = dStack_100 * dStack_100 + (double)uVar1 * (double)uVar1 + local_f8 * local_f8;
    if (dVar12 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar12;
        dStack_100 = dVar12 * dStack_100;
        local_f8 = dVar12 * local_f8;
      }
      else {
        dStack_100 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_f8 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      }
    }
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_3->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_100 >> 0x20) ^ uVar15,
                          SUB84(dStack_100,0) ^ uVar13);
    (param_3->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_f8 >> 0x20) ^ uVar15,SUB84(local_f8,0) ^ uVar13);
    uVar1 = param_2->M[0][0];
    dStack_e8 = param_2->M[0][1];
    local_e0 = param_2->M[0][2];
    dVar12 = dStack_e8 * dStack_e8 + (double)uVar1 * (double)uVar1 + local_e0 * local_e0;
    if (dVar12 != dVar14) {
      if (dVar10 <= dVar12) {
        dVar14 = dVar14 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar14;
        dStack_e8 = dVar14 * dStack_e8;
        local_e0 = dVar14 * local_e0;
      }
      else {
        dStack_e8 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_e0 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
    }
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_4->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_e8 >> 0x20) ^ uVar15,SUB84(dStack_e8,0) ^ uVar13)
    ;
    (param_4->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_e0 >> 0x20) ^ uVar15,SUB84(local_e0,0) ^ uVar13);
    break;
  case EPAL_NEGATIVE_Z:
    uVar1 = param_2->M[0][0];
    dStack_d0 = param_2->M[0][1];
    local_c8 = param_2->M[0][2];
    dVar12 = dStack_d0 * dStack_d0 + (double)uVar1 * (double)uVar1 + local_c8 * local_c8;
    if (dVar12 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar12;
        dStack_d0 = dStack_d0 * dVar12;
        local_c8 = local_c8 * dVar12;
      }
      else {
        dStack_d0 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_c8 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      }
    }
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_3->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_d0 >> 0x20) ^ uVar15,SUB84(dStack_d0,0) ^ uVar13)
    ;
    (param_3->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_c8 >> 0x20) ^ uVar15,SUB84(local_c8,0) ^ uVar13);
    uVar1 = param_2->M[1][0];
    dStack_190 = param_2->M[1][1];
    local_188 = param_2->M[1][2];
    dVar12 = dStack_190 * dStack_190 + (double)uVar1 * (double)uVar1 + local_188 * local_188;
    if (dVar12 != dVar14) {
      if (dVar10 <= dVar12) {
        dVar14 = dVar14 / SQRT(dVar12);
        uVar1 = (double)uVar1 * dVar14;
        dStack_190 = dVar14 * dStack_190;
        local_188 = dVar14 * local_188;
      }
      else {
        dStack_190 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        local_188 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
    }
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar13);
    (param_4->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dStack_190 >> 0x20) ^ uVar15,
                          SUB84(dStack_190,0) ^ uVar13);
    (param_4->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_188 >> 0x20) ^ uVar15,SUB84(local_188,0) ^ uVar13)
    ;
    break;
  case EPAL_ROTATE_X:
    dVar12 = param_2->M[0][0];
    dVar2 = param_2->M[0][1];
    uVar8 = *(undefined4 *)((longlong)param_2->M[0] + 4);
    uVar9 = *(undefined4 *)(param_2->M[0] + 1);
    dVar14 = param_2->M[0][2];
    dVar10 = dVar2 * dVar2 + dVar12 * dVar12 + dVar14 * dVar14;
    if (dVar10 == __real_3ff0000000000000) {
      *(undefined4 *)&param_4->field0_0x0 = *(undefined4 *)param_2->M[0];
      *(undefined4 *)((longlong)&param_4->field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = uVar9;
      *(int *)((longlong)&param_4->field0_0x0 + 0xc) = (int)((ulonglong)dVar2 >> 0x20);
      (param_4->field0_0x0)._s_0.Z = dVar14;
    }
    else if (__real_3e45798ee0000000 <= dVar10) {
      dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
      auVar5._8_4_ = SUB84(dVar10 * dVar2,0);
      auVar5._0_8_ = dVar10 * dVar12;
      auVar5._12_4_ = (int)((ulonglong)(dVar10 * dVar2) >> 0x20);
      *(undefined1 (*) [16])&param_4->field0_0x0 = auVar5;
      (param_4->field0_0x0)._s_0.Z = dVar10 * dVar14;
    }
    else {
      (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_4->field0_0x0)._s_0.Y = (double)uVar1;
      (param_4->field0_0x0)._s_0.Z = (double)uVar7;
    }
    goto LAB_1481db157;
  case EPAL_ROTATE_Y:
    dVar14 = param_2->M[1][0];
    dVar10 = param_2->M[1][1];
    dVar3 = param_2->M[1][2];
    dVar11 = dVar10 * dVar10 + dVar14 * dVar14 + dVar3 * dVar3;
    if (dVar11 != __real_3ff0000000000000) {
      if (dVar11 < __real_3e45798ee0000000) goto LAB_1481db14d;
LAB_1481db129:
      dVar12 = __real_3ff0000000000000 / SQRT(dVar11);
      dVar10 = dVar10 * dVar12;
      dVar14 = dVar14 * dVar12;
      dVar3 = dVar3 * dVar12;
    }
LAB_1481db143:
    uVar8 = SUB84(dVar14,0);
    uVar9 = (undefined4)((ulonglong)dVar14 >> 0x20);
    dVar12 = dVar3;
    dVar2 = dVar10;
    goto LAB_1481db14d;
  case EPAL_ROTATE_Z:
    dVar14 = param_2->M[2][0];
    dVar10 = param_2->M[2][1];
    dVar3 = param_2->M[2][2];
    dVar11 = dVar10 * dVar10 + dVar14 * dVar14 + dVar3 * dVar3;
    if (dVar11 == __real_3ff0000000000000) goto LAB_1481db143;
    if (__real_3e45798ee0000000 <= dVar11) goto LAB_1481db129;
LAB_1481db14d:
    *(undefined4 *)&param_4->field0_0x0 = uVar8;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 4) = uVar9;
    (param_4->field0_0x0)._s_0.Y = dVar2;
    (param_4->field0_0x0)._s_0.Z = dVar12;
LAB_1481db157:
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = (double)uVar1;
    (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// ComputeNeighborCount @ 1481db1d0

int __cdecl
ComputeNeighborCount
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_8,EOpacitySourceMode param_9,
          ETextureSourceFormat param_10,float param_11,uchar param_12,ushort param_13)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((((-1 < GNeighbors[0].field0_0x0._s_0.X + param_1) &&
       (GNeighbors[0].field0_0x0._s_0.X + param_1 < param_5)) &&
      (-1 < GNeighbors[0].field0_0x0._s_0.Y + param_2)) &&
     (GNeighbors[0].field0_0x0._s_0.Y + param_2 < param_6)) {
    bVar1 = ComputeOpacityValue((uchar *)(param_8->AllocatorInstance).Data,
                                GNeighbors[0].field0_0x0._s_0.X + param_3,
                                GNeighbors[0].field0_0x0._s_0.Y + param_4,param_7,param_9,param_10,
                                param_11,param_12,param_13);
    uVar2 = (uint)bVar1;
  }
  if (((-1 < GNeighbors[1].field0_0x0._s_0.X + param_1) &&
      (GNeighbors[1].field0_0x0._s_0.X + param_1 < param_5)) &&
     ((-1 < GNeighbors[1].field0_0x0._s_0.Y + param_2 &&
      ((GNeighbors[1].field0_0x0._s_0.Y + param_2 < param_6 &&
       (bVar1 = ComputeOpacityValue((uchar *)(param_8->AllocatorInstance).Data,
                                    GNeighbors[1].field0_0x0._s_0.X + param_3,
                                    GNeighbors[1].field0_0x0._s_0.Y + param_4,param_7,param_9,
                                    param_10,param_11,param_12,param_13), bVar1)))))) {
    uVar2 = uVar2 + 1;
  }
  if ((((-1 < GNeighbors[2].field0_0x0._s_0.X + param_1) &&
       (GNeighbors[2].field0_0x0._s_0.X + param_1 < param_5)) &&
      (-1 < GNeighbors[2].field0_0x0._s_0.Y + param_2)) &&
     ((GNeighbors[2].field0_0x0._s_0.Y + param_2 < param_6 &&
      (bVar1 = ComputeOpacityValue((uchar *)(param_8->AllocatorInstance).Data,
                                   GNeighbors[2].field0_0x0._s_0.X + param_3,
                                   GNeighbors[2].field0_0x0._s_0.Y + param_4,param_7,param_9,
                                   param_10,param_11,param_12,param_13), bVar1)))) {
    uVar2 = uVar2 + 1;
  }
  if (((-1 < GNeighbors[3].field0_0x0._s_0.X + param_1) &&
      (GNeighbors[3].field0_0x0._s_0.X + param_1 < param_5)) &&
     ((-1 < GNeighbors[3].field0_0x0._s_0.Y + param_2 &&
      ((GNeighbors[3].field0_0x0._s_0.Y + param_2 < param_6 &&
       (bVar1 = ComputeOpacityValue((uchar *)(param_8->AllocatorInstance).Data,
                                    GNeighbors[3].field0_0x0._s_0.X + param_3,
                                    GNeighbors[3].field0_0x0._s_0.Y + param_4,param_7,param_9,
                                    param_10,param_11,param_12,param_13), bVar1)))))) {
    uVar2 = uVar2 + 1;
  }
  if ((((-1 < GNeighbors[4].field0_0x0._s_0.X + param_1) &&
       (GNeighbors[4].field0_0x0._s_0.X + param_1 < param_5)) &&
      (-1 < GNeighbors[4].field0_0x0._s_0.Y + param_2)) &&
     ((GNeighbors[4].field0_0x0._s_0.Y + param_2 < param_6 &&
      (bVar1 = ComputeOpacityValue((uchar *)(param_8->AllocatorInstance).Data,
                                   GNeighbors[4].field0_0x0._s_0.X + param_3,
                                   GNeighbors[4].field0_0x0._s_0.Y + param_4,param_7,param_9,
                                   param_10,param_11,param_12,param_13), bVar1)))) {
    uVar2 = uVar2 + 1;
  }
  if (((-1 < GNeighbors[5].field0_0x0._s_0.X + param_1) &&
      (GNeighbors[5].field0_0x0._s_0.X + param_1 < param_5)) &&
     ((-1 < GNeighbors[5].field0_0x0._s_0.Y + param_2 &&
      ((GNeighbors[5].field0_0x0._s_0.Y + param_2 < param_6 &&
       (bVar1 = ComputeOpacityValue((uchar *)(param_8->AllocatorInstance).Data,
                                    GNeighbors[5].field0_0x0._s_0.X + param_3,
                                    GNeighbors[5].field0_0x0._s_0.Y + param_4,param_7,param_9,
                                    param_10,param_11,param_12,param_13), bVar1)))))) {
    uVar2 = uVar2 + 1;
  }
  if ((((-1 < GNeighbors[6].field0_0x0._s_0.X + param_1) &&
       (GNeighbors[6].field0_0x0._s_0.X + param_1 < param_5)) &&
      (-1 < GNeighbors[6].field0_0x0._s_0.Y + param_2)) &&
     ((GNeighbors[6].field0_0x0._s_0.Y + param_2 < param_6 &&
      (bVar1 = ComputeOpacityValue((uchar *)(param_8->AllocatorInstance).Data,
                                   GNeighbors[6].field0_0x0._s_0.X + param_3,
                                   GNeighbors[6].field0_0x0._s_0.Y + param_4,param_7,param_9,
                                   param_10,param_11,param_12,param_13), bVar1)))) {
    uVar2 = uVar2 + 1;
  }
  if (((-1 < GNeighbors[7].field0_0x0._s_0.X + param_1) &&
      (GNeighbors[7].field0_0x0._s_0.X + param_1 < param_5)) &&
     ((-1 < GNeighbors[7].field0_0x0._s_0.Y + param_2 &&
      (GNeighbors[7].field0_0x0._s_0.Y + param_2 < param_6)))) {
    bVar1 = ComputeOpacityValue((uchar *)(param_8->AllocatorInstance).Data,
                                GNeighbors[7].field0_0x0._s_0.X + param_3,
                                GNeighbors[7].field0_0x0._s_0.Y + param_4,param_7,param_9,param_10,
                                param_11,param_12,param_13);
    if (bVar1) {
      return uVar2 + 1;
    }
  }
  return uVar2;
}

// ComputeOpacityValue @ 1481db620

bool __cdecl
ComputeOpacityValue(uchar *param_1,int param_2,int param_3,int param_4,EOpacitySourceMode param_5,
                   ETextureSourceFormat param_6,float param_7,uchar param_8,ushort param_9)

{
  float *pfVar1;
  byte *pbVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  switch(param_6) {
  case TSF_G8:
    return param_8 < param_1[param_3 * param_4 + param_2];
  case TSF_BGRA8:
    iVar5 = (param_3 * param_4 + param_2) * 4;
    break;
  default:
    iVar5 = 0;
    if (param_6 == TSF_G8) {
      return param_8 < *param_1;
    }
    if (param_6 == TSF_R32F) goto LAB_1481db6e5;
    if (param_6 != TSF_BGRA8) {
      if (param_6 != TSF_RGBA16) {
        if (param_6 != TSF_RGBA16F) {
          if (param_6 != TSF_RGBA32F) {
            return true;
          }
          goto LAB_1481db93f;
        }
        goto LAB_1481db84d;
      }
      goto LAB_1481db7a0;
    }
    break;
  case TSF_RGBA16:
    iVar5 = (param_3 * param_4 + param_2) * 8;
LAB_1481db7a0:
    puVar4 = (ushort *)(param_1 + iVar5);
    if (param_5 == OSM_Alpha) {
      return param_9 < puVar4[3];
    }
    if (param_5 == OSM_RedChannel) {
      return param_9 < *puVar4;
    }
    if (param_5 == OSM_GreenChannel) {
      return param_9 < puVar4[1];
    }
    if (param_5 == OSM_BlueChannel) {
      return param_9 < puVar4[2];
    }
    return (uint)param_9 < ((uint)puVar4[1] + (uint)puVar4[2] + (uint)*puVar4) / 3;
  case TSF_RGBA16F:
    iVar5 = (param_3 * param_4 + param_2) * 8;
LAB_1481db84d:
    puVar4 = (ushort *)(param_1 + iVar5);
    if (param_5 == OSM_Alpha) {
      fVar6 = FGenericPlatformMath::LoadHalf(puVar4 + 3);
      return param_7 < fVar6;
    }
    if (param_5 == OSM_RedChannel) {
      fVar6 = FGenericPlatformMath::LoadHalf(puVar4);
      return param_7 < fVar6;
    }
    if (param_5 == OSM_GreenChannel) {
      fVar6 = FGenericPlatformMath::LoadHalf(puVar4 + 1);
      return param_7 < fVar6;
    }
    if (param_5 == OSM_BlueChannel) {
      fVar6 = FGenericPlatformMath::LoadHalf(puVar4 + 2);
      return param_7 < fVar6;
    }
    fVar6 = FGenericPlatformMath::LoadHalf(puVar4 + 1);
    fVar7 = FGenericPlatformMath::LoadHalf(puVar4 + 2);
    fVar8 = FGenericPlatformMath::LoadHalf(puVar4);
    return param_7 < (fVar8 + fVar6 + fVar7) * __real_3eaaaaab;
  case TSF_RGBA32F:
    iVar5 = (param_3 * param_4 + param_2) * 0x10;
LAB_1481db93f:
    pfVar1 = (float *)(param_1 + iVar5);
    if (param_5 == OSM_Alpha) {
      return param_7 < pfVar1[3];
    }
    if (param_5 == OSM_RedChannel) {
      return param_7 < *pfVar1;
    }
    if (param_5 == OSM_GreenChannel) {
      return param_7 < pfVar1[1];
    }
    if (param_5 == OSM_BlueChannel) {
      return param_7 < pfVar1[2];
    }
    return param_7 < (pfVar1[1] + *pfVar1 + pfVar1[2]) * __real_3eaaaaab;
  case TSF_R32F:
    iVar5 = (param_3 * param_4 + param_2) * 4;
LAB_1481db6e5:
    return param_7 < *(float *)(param_1 + iVar5);
  }
  pbVar2 = param_1 + iVar5;
  if (param_5 == OSM_Alpha) {
    return param_8 < pbVar2[3];
  }
  if (param_5 == OSM_RedChannel) {
    return param_8 < pbVar2[2];
  }
  if (param_5 == OSM_GreenChannel) {
    return param_8 < pbVar2[1];
  }
  uVar3 = (uint)*pbVar2;
  if (param_5 != OSM_BlueChannel) {
    uVar3 = ((uint)pbVar2[1] + (uint)pbVar2[2] + (uint)*pbVar2) / 3;
  }
  return param_8 < uVar3;
}

// ComputePointIntersectionBetweenLines2D @ 1481dba20

bool __cdecl
ComputePointIntersectionBetweenLines2D(FLine2D *param_1,FLine2D *param_2,TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = (float)((param_2->Direction).field0_0x0._s_0.Y * (param_1->Direction).field0_0x0._s_0.X -
                 (param_2->Direction).field0_0x0._s_0.X * (param_1->Direction).field0_0x0._s_0.Y);
  if (__real_322bcc77 <= (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    dVar1 = (param_1->Position).field0_0x0._s_0.Y;
    dVar2 = (param_1->Position).field0_0x0._s_0.X;
    fVar5 = (float)((dVar1 - (param_2->Position).field0_0x0._s_0.Y) *
                    (param_2->Direction).field0_0x0._s_0.X -
                   (dVar2 - (param_2->Position).field0_0x0._s_0.X) *
                   (param_2->Direction).field0_0x0._s_0.Y) / fVar5;
    if (__real_3f000000 <= fVar5) {
      dVar4 = (double)fVar5;
      dVar3 = (param_1->Direction).field0_0x0._s_0.Y;
      (param_3->field0_0x0)._s_0.X = dVar4 * (param_1->Direction).field0_0x0._s_0.X + dVar2;
      (param_3->field0_0x0)._s_0.Y = dVar4 * dVar3 + dVar1;
      return true;
    }
  }
  return false;
}

// ComputeScaleMode @ 1481dbad0

Type __cdecl
ComputeScaleMode(TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  ECollisionShapeType EVar3;
  uint uVar4;
  Type TVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = param_1->ArrayNum;
  TVar5 = Free;
  uVar7 = 0;
  if (iVar6 < 1) {
    return Free;
  }
  do {
    uVar4 = 0;
    if ((int)uVar7 < iVar6) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
    EVar3 = FChaosEngineInterface::GetShapeType
                      ((FPhysicsShapeReference_Chaos *)
                       ((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10));
    if (EVar3 == Sphere) {
      return LockedXYZ;
    }
    iVar6 = param_1->ArrayNum;
    if (EVar3 == Capsule) {
      TVar5 = LockedXY;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < iVar6);
  return TVar5;
}

// ComputeScalingVectors @ 1481dbba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ComputeScalingVectors
          (Type param_1,TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  uVar9 = _UNK_15061cc8c;
  uVar8 = _UNK_15061cc88;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar20 = (param_2->field0_0x0)._s_0.X;
  uVar11 = SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar20 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar12,uVar11) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar12,uVar11) == __real_3e45798ee2308c3a) {
    dVar20 = __real_3f1a36e2e0000000;
  }
  dVar18 = (param_2->field0_0x0)._s_0.Y;
  uVar11 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar12,uVar11) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar12,uVar11) == __real_3e45798ee2308c3a) {
    dVar18 = __real_3f1a36e2e0000000;
  }
  dVar19 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar11 = SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)dVar19 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar12,uVar11) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar12,uVar11) == __real_3e45798ee2308c3a) {
    dVar19 = __real_3f1a36e2e0000000;
  }
  uVar21 = (uint)((ulonglong)dVar20 >> 0x20);
  uVar15 = SUB84(dVar18,0);
  uVar17 = (uint)((ulonglong)dVar18 >> 0x20);
  uVar11 = SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = uVar21 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar16 = uVar17 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)dVar19 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (param_1 == Free) {
    auVar4._8_4_ = uVar15;
    auVar4._0_8_ = dVar20;
    auVar4._12_4_ = uVar17;
    *(undefined1 (*) [16])&param_3->field0_0x0 = auVar4;
    (param_3->field0_0x0)._s_0.Z = dVar19;
  }
  else if (param_1 == LockedXY) {
    if ((double)CONCAT44(uVar12,uVar11) <= (double)CONCAT44(uVar16,uVar13)) {
      uVar11 = uVar13;
      uVar12 = uVar16;
    }
    if (dVar18 <= dVar20) {
      uVar15 = SUB84(dVar20,0);
      uVar17 = uVar21;
    }
    fVar14 = (float)(double)CONCAT44(uVar12,uVar11);
    if ((double)CONCAT44(uVar17,uVar15) < 0.0) {
      fVar14 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
    }
    dVar20 = (double)fVar14;
    (param_3->field0_0x0)._s_0.Z = dVar19;
    auVar5._8_4_ = SUB84(dVar20,0);
    auVar5._0_8_ = dVar20;
    auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *(undefined1 (*) [16])&param_3->field0_0x0 = auVar5;
  }
  else if (param_1 == LockedXYZ) {
    if ((double)CONCAT44(uVar16,uVar13) <= (double)CONCAT44(uVar12,uVar11)) {
      uVar11 = uVar13;
      uVar12 = uVar16;
    }
    if (dVar18 <= dVar20) {
      dVar18 = dVar20;
    }
    if ((double)CONCAT44(uVar23,uVar22) <= (double)CONCAT44(uVar12,uVar11)) {
      uVar11 = uVar22;
      uVar12 = uVar23;
    }
    if (dVar18 <= dVar19) {
      dVar18 = dVar19;
    }
    fVar14 = (float)(double)CONCAT44(uVar12,uVar11);
    if (dVar18 < 0.0) {
      fVar14 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
    }
    dVar20 = (double)fVar14;
    auVar3._8_4_ = SUB84(dVar20,0);
    auVar3._0_8_ = dVar20;
    auVar3._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *(undefined1 (*) [16])&param_3->field0_0x0 = auVar3;
    *(double *)((longlong)&param_3->field0_0x0 + 0x10) = dVar20;
  }
  else {
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                        ,0x84e,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar11 = *(uint *)((longlong)&param_3->field0_0x0 + 4);
  uVar12 = *(uint *)((longlong)&param_3->field0_0x0 + 8);
  uVar15 = *(uint *)((longlong)&param_3->field0_0x0 + 0xc);
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  *(uint *)&param_4->field0_0x0 = *(uint *)&param_3->field0_0x0 & uVar6;
  *(uint *)((longlong)&param_4->field0_0x0 + 4) = uVar11 & uVar7;
  *(uint *)((longlong)&param_4->field0_0x0 + 8) = uVar12 & uVar8;
  *(uint *)((longlong)&param_4->field0_0x0 + 0xc) = uVar15 & uVar9;
  (param_4->field0_0x0)._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar7,(uint)uVar1 & uVar6);
  return;
}

// CreateBeamTrailUniformBuffer @ 1481dcb50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniformBufferRef<FParticleBeamTrailUniformParameters> __cdecl
CreateBeamTrailUniformBuffer
          (FParticleSystemSceneProxy *param_1,FDynamicSpriteEmitterReplayDataBase *param_2,
          FSceneView *param_3)

{
  byte bVar1;
  FRHIResource *this;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  TUniformBufferRef<FParticleBeamTrailUniformParameters> TVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  TMatrix<double> *pTVar9;
  longlong in_R9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  FRHIResource *local_res8;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  double local_128;
  double local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  uint local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  
  local_178._s_0.Z = 0.0;
  bVar1 = *(byte *)((longlong)&(param_3->SceneViewInitOptions)._padding_ + 7);
  local_160._s_0.Z = 0.0;
  local_178._s_0.X = 0.0;
  local_178._s_0.Y = 0.0;
  local_160._s_0.X = 0.0;
  local_160._s_0.Y = 0.0;
  if (bVar1 == 0) {
    dVar13 = __xmm_00000000000000003ff0000000000000._8_8_;
    dVar12 = (double)__xmm_00000000000000003ff0000000000000;
    auVar10._8_4_ = (int)__xmm_00000000000000003ff0000000000000;
    auVar10._0_8_ = dVar12;
    auVar10._12_4_ = __xmm_00000000000000003ff0000000000000._4_4_;
    dVar3 = dVar13 * *(double *)(in_R9 + 0x6d0) + dVar12 * *(double *)(in_R9 + 0x6b0) +
            *(double *)(in_R9 + 0x6f0) * 0.0 + *(double *)(in_R9 + 0x710) * 0.0;
    dVar4 = dVar13 * *(double *)(in_R9 + 0x6d8) + auVar10._8_8_ * *(double *)(in_R9 + 0x6b8) +
            *(double *)(in_R9 + 0x6f8) * 0.0 + *(double *)(in_R9 + 0x718) * 0.0;
    dVar13 = dVar13 * *(double *)(in_R9 + 0x6e0) + dVar12 * *(double *)(in_R9 + 0x6c0) +
             *(double *)(in_R9 + 0x700) * 0.0 + *(double *)(in_R9 + 0x720) * 0.0;
    dVar12 = dVar4 * dVar4 + dVar3 * dVar3 + dVar13 * dVar13;
    if (dVar12 <= __real_3e45798ee0000000) {
      dVar4 = 0.0;
      dVar13 = 0.0;
      dVar3 = 0.0;
    }
    else {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      dVar4 = dVar4 * dVar12;
      dVar13 = dVar13 * dVar12;
      dVar3 = dVar3 * dVar12;
    }
    uVar14 = (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_178._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar15,SUB84(dVar13,0) ^ uVar14);
    dVar13 = __xmm_3ff00000000000000000000000000000._8_8_;
    dVar12 = (double)__xmm_3ff00000000000000000000000000000;
    auVar11._8_4_ = (int)__xmm_3ff00000000000000000000000000000;
    auVar11._0_8_ = dVar12;
    auVar11._12_4_ = __xmm_3ff00000000000000000000000000000._4_4_;
    local_178._4_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar15;
    local_178._0_4_ = SUB84(dVar3,0) ^ uVar14;
    local_178._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar15;
    local_178._8_4_ = SUB84(dVar4,0) ^ uVar14;
    dVar3 = dVar13 * *(double *)(in_R9 + 0x6d0) + dVar12 * *(double *)(in_R9 + 0x6b0) +
            *(double *)(in_R9 + 0x6f0) * 0.0 + *(double *)(in_R9 + 0x710) * 0.0;
    dVar4 = dVar13 * *(double *)(in_R9 + 0x6d8) + auVar11._8_8_ * *(double *)(in_R9 + 0x6b8) +
            *(double *)(in_R9 + 0x6f8) * 0.0 + *(double *)(in_R9 + 0x718) * 0.0;
    dVar13 = dVar13 * *(double *)(in_R9 + 0x6e0) + dVar12 * *(double *)(in_R9 + 0x6c0) +
             *(double *)(in_R9 + 0x700) * 0.0 + *(double *)(in_R9 + 0x720) * 0.0;
    dVar12 = dVar4 * dVar4 + dVar3 * dVar3 + dVar13 * dVar13;
    if (dVar12 <= __real_3e45798ee0000000) {
      dVar4 = 0.0;
      dVar13 = 0.0;
      dVar3 = 0.0;
    }
    else {
      local_118 = __real_3ff0000000000000 / SQRT(dVar12);
      dVar4 = dVar4 * local_118;
      dVar13 = dVar13 * local_118;
      dVar3 = dVar3 * local_118;
    }
    local_160._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar15,SUB84(dVar13,0) ^ uVar14);
    local_160._4_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar15;
    local_160._0_4_ = SUB84(dVar3,0) ^ uVar14;
    local_160._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar15;
    local_160._8_4_ = SUB84(dVar4,0) ^ uVar14;
    local_128 = local_160._s_0.Z;
  }
  else {
    if (*(char *)((longlong)&(param_3->SceneViewInitOptions)._padding_ + 4) == '\0') {
      pTVar9 = &UE::Math::TMatrix<double>::Identity;
    }
    else {
      pTVar9 = (TMatrix<double> *)&param_2[1]._padding_;
    }
    ComputeLockedAxes((uint)bVar1,pTVar9,(TVector<double> *)&local_178._s_0,
                      (TVector<double> *)&local_160._s_0);
  }
  fStack_f0 = (float)local_178._s_0.Z;
  uStack_13c = 0;
  local_e4 = 0;
  local_dc = 0;
  local_138 = (float)local_160._s_0.X;
  local_f8 = (float)local_178._s_0.X;
  fStack_f4 = (float)local_178._s_0.Y;
  local_e8 = (float)*(byte *)((longlong)&(param_3->SceneViewInitOptions)._padding_ + 6);
  local_d8 = (uint)*(byte *)((longlong)&(param_3->SceneViewInitOptions)._padding_ + 4);
  local_c0 = *(undefined4 *)((longlong)&(param_3->SceneViewInitOptions)._padding_ + 4);
  fStack_134 = (float)local_160._s_0.Y;
  fStack_130 = (float)local_160._s_0.Z;
  local_c8 = *(undefined8 *)((longlong)&(param_3->SceneViewInitOptions)._padding_ + 4);
  uStack_ec = 0;
  uStack_12c = 0;
  uStack_fc = 0;
  local_108 = local_138;
  fStack_104 = fStack_134;
  fStack_100 = fStack_130;
  pFVar6 = FParticleBeamTrailUniformParameters::GetStructMetadata();
  if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    TVar7 = (TUniformBufferRef<FParticleBeamTrailUniformParameters>)(*pcVar2)();
    return TVar7;
  }
  TVar8 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)&local_108,
                     (EUniformBufferUsage)(pFVar6->Layout).Reference,ValidateResources);
  this = (FRHIResource *)(TVar8.Reference)->_padding_;
  *(FRHIResource **)param_1 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar6 = FParticleBeamTrailUniformParameters::GetStructMetadata();
    if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      TVar7 = (TUniformBufferRef<FParticleBeamTrailUniformParameters>)(*pcVar2)();
      return TVar7;
    }
    if ((FName)(pFVar6->Layout).Reference != this[2].OwnerName) {
      pFVar6 = FParticleBeamTrailUniformParameters::GetStructMetadata();
      if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        TVar7 = (TUniformBufferRef<FParticleBeamTrailUniformParameters>)(*pcVar2)();
        return TVar7;
      }
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        TVar7 = (TUniformBufferRef<FParticleBeamTrailUniformParameters>)(*pcVar2)();
        return TVar7;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FParticleBeamTrailUniformParameters>)param_1;
}

// DumpPooledWorldParticleSystemInfo @ 1481e3180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DumpPooledWorldParticleSystemInfo(UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UWorld *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\WorldPSCPool.cpp"
                       ,0x189,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FWorldPSCPool::Dump(&param_1->PSCPool);
  return;
}

// EmptyLinkFunctionForGeneratedCodeAsyncPhysicsInputComponent @ 1481e3280

void __cdecl EmptyLinkFunctionForGeneratedCodeAsyncPhysicsInputComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBodyInstance @ 1481e3290

void __cdecl EmptyLinkFunctionForGeneratedCodeBodyInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeParticleSystemManager @ 1481e32a0

void __cdecl EmptyLinkFunctionForGeneratedCodeParticleSystemManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePawn @ 1481e32b0

void __cdecl EmptyLinkFunctionForGeneratedCodePawn(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePendingNetGame @ 1481e32c0

void __cdecl EmptyLinkFunctionForGeneratedCodePendingNetGame(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePerQualityLevelProperties @ 1481e32d0

void __cdecl EmptyLinkFunctionForGeneratedCodePerQualityLevelProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubUVAnimation @ 1481e32e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSubUVAnimation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPSCPool @ 1481e32f0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPSCPool(void)

{
  return;
}

// FNameToQualityLevel @ 1481e4080

int __cdecl QualityLevelProperty::FNameToQualityLevel(FName param_1)

{
  ForAnyElementType FVar1;
  
  FVar1.Data = QualityLevelNames.AllocatorInstance.Data;
  while( true ) {
    if ((FName *)FVar1.Data ==
        (FName *)(QualityLevelNames.AllocatorInstance.Data +
                 (longlong)QualityLevelNames.ArrayNum * 8)) {
      return -1;
    }
    if (*(FName *)FVar1.Data == param_1) break;
    FVar1.Data = FVar1.Data + 8;
  }
  return (int)((longlong)FVar1.Data - (longlong)QualityLevelNames.AllocatorInstance.Data >> 3);
}

// FPawnControllerChangedSignature_DelegateWrapper @ 1481e40d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FPawnControllerChangedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,APawn *param_2,
          AController *param_3,AController *param_4)

{
  APawn *local_28;
  AController *local_20;
  AController *local_18;
  
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FPawnRestartedSignature_DelegateWrapper @ 1481e4100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FPawnRestartedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,APawn *param_2)

{
  APawn *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FillInlineShapeArray_AssumesLocked @ 1481ebe10

int __cdecl
FillInlineShapeArray_AssumesLocked
          (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FSingleParticlePhysicsProxy **param_2)

{
  FChaosEngineInterface::GetAllShapes_AssumedLocked(param_2,param_1);
  return param_1->ArrayNum;
}

// FindOptimalPolygon @ 1481f0880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FindOptimalPolygon(int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
                  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3,
                  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  uint uVar17;
  double dVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float local_res10;
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  uint local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  uint local_190;
  float local_18c;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  longlong local_140;
  double local_138;
  longlong local_130;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  
  local_1c0.Data = (FScriptContainerElement *)0x0;
  uVar15 = param_2->ArrayNum;
  local_1b4 = 0;
  uVar17 = uVar15;
  if (param_1 < (int)uVar15) {
    uVar17 = param_1;
  }
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  local_150 = 1.58101006669199e-322;
  local_1b8 = 0;
  if (uVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar15,&local_1c0,0,&local_1b4);
  }
  iVar11 = param_2->ArrayNum;
  uVar15 = 0;
  if (0 < iVar11) {
    lVar20 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar15 < iVar11) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = *(uint *)((param_2->AllocatorInstance).Data + lVar20);
      uVar14 = 0;
      if ((int)uVar19 < param_3->ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x10;
      local_118 = *(double *)pFVar3;
      dStack_110 = *(double *)(pFVar3 + 8);
      uVar15 = uVar15 + 1;
      uVar14 = (int)uVar15 % param_2->ArrayNum;
      uVar19 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar19 = ~uVar14 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = *(uint *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar14 * 4);
      uVar14 = 0;
      if ((int)uVar19 < param_3->ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x10;
      local_108 = *(double *)pFVar3 - local_118;
      dStack_100 = *(double *)(pFVar3 + 8) - dStack_110;
      if (((local_1c0.Data <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < local_1c0.Data + (longlong)local_1b4 * 0x20)) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_1b8 == local_1b4) {
        local_1b8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_1c0,&local_1b4);
      }
      lVar13 = (longlong)local_1b8;
      lVar20 = lVar20 + 4;
      local_1b8 = local_1b8 + 1;
      *(double *)(local_1c0.Data + lVar13 * 0x20) = local_118;
      *(double *)(local_1c0.Data + lVar13 * 0x20 + 8) = dStack_110;
      *(double *)(local_1c0.Data + lVar13 * 0x20 + 0x10) = local_108;
      *(double *)(local_1c0.Data + lVar13 * 0x20 + 0x10 + 8) = dStack_100;
      iVar11 = param_2->ArrayNum;
    } while ((int)uVar15 < iVar11);
  }
  dVar21 = 1.58101006669199e-322;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_4->ArrayNum;
  piVar2 = &param_4->ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&param_4->AllocatorInstance,0,piVar2);
  }
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,uVar17,&param_4->AllocatorInstance,piVar1,piVar2);
  memset((param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x10,0,(longlong)(int)uVar17 << 4);
  fVar28 = __real_3f000000;
  fVar34 = __real_322bcc77;
  dVar25 = __real_3ff0000000000000;
  if (uVar17 == 4) {
    local_18c = __real_7f7fffff;
    local_168 = (double)CONCAT44(local_168._4_4_,__real_7f7fffff);
    local_188 = (double)((ulonglong)local_188 & 0xffffffff00000000);
    if (0 < local_1b8) {
      local_148 = 4.94065645841247e-324;
      local_1b0 = 1;
      local_128 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      uStack_124 = _UNK_15061cc74;
      uStack_120 = _UNK_15061cc78;
      uStack_11c = _UNK_15061cc7c;
      iVar11 = local_1b8;
      local_190 = 0;
      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      do {
        uVar17 = local_190 + 1;
        local_178 = (double)CONCAT44(local_178._4_4_,local_1b0);
        dVar31 = dVar21;
        local_1a0 = local_148;
        if ((int)uVar17 < iVar11) {
          local_130 = (longlong)(int)local_190;
          uVar22 = ~local_190 >> 0x1f;
          local_160 = (double)CONCAT44(local_160._4_4_,uVar22);
          dVar18 = (double)(local_130 << 5);
          local_170 = (double)CONCAT44(local_170._4_4_,local_190 + 2);
          uVar14 = local_190;
          uVar19 = local_1b0;
          local_190 = uVar17;
          local_158 = dVar18;
          do {
            local_138 = (double)CONCAT44(local_138._4_4_,~uVar19 >> 0x1f);
            uVar17 = 0;
            if ((int)uVar19 < iVar11) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            local_198 = dVar21;
            if ((uVar17 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar11 = local_1b8, bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar9.Data = local_1c0.Data;
            uVar17 = 0;
            if ((int)uVar14 < iVar11) {
              uVar17 = uVar22;
            }
            if ((uVar17 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar11 = local_1b8, bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar27 = (float)(*(double *)(FVar9.Data + (longlong)dVar21 + 0x10 + 8) *
                             *(double *)(local_1c0.Data + (longlong)dVar18 + 0x10) -
                            *(double *)(FVar9.Data + (longlong)dVar21 + 0x10) *
                            *(double *)(local_1c0.Data + (longlong)dVar18 + 0x10 + 8));
            if (fVar34 <= (float)((uint)fVar27 & uVar15)) {
              fVar27 = (float)((*(double *)(local_1c0.Data + (longlong)dVar18 + 8) -
                               *(double *)(FVar9.Data + (longlong)dVar21 + 8)) *
                               *(double *)(FVar9.Data + (longlong)dVar21 + 0x10) -
                              (*(double *)(local_1c0.Data + (longlong)dVar18) -
                              *(double *)(FVar9.Data + (longlong)dVar21)) *
                              *(double *)(FVar9.Data + (longlong)dVar21 + 0x10 + 8)) / fVar27;
              if (fVar28 <= fVar27) {
                dVar31 = (double)fVar27;
                dVar32 = dVar31 * *(double *)(local_1c0.Data + (longlong)dVar18 + 0x18) +
                         *(double *)(local_1c0.Data + (longlong)dVar18 + 8);
                dVar31 = dVar31 * *(double *)(local_1c0.Data + (longlong)dVar18 + 0x10) +
                         *(double *)(local_1c0.Data + (longlong)dVar18);
                if ((((0.0 <= dVar31) && (dVar31 <= dVar25)) && (0.0 <= dVar32)) &&
                   (dVar32 <= dVar25)) {
                  local_180 = (double)CONCAT44(local_180._4_4_,local_170._0_4_);
                  dVar16 = (double)((longlong)local_1a0 + 1);
                  local_1a8 = dVar16;
                  if ((int)local_170._0_4_ < iVar11) {
                    uVar17 = local_170._0_4_ + 1;
                    local_140 = CONCAT44(local_140._4_4_,uVar17);
                    uVar14 = local_170._0_4_;
                    dVar18 = dVar21;
                    local_f8 = dVar31;
                    dStack_f0 = dVar32;
                    do {
                      dVar24 = (double)((longlong)dVar18 + 0x20);
                      uVar22 = 0;
                      if ((int)uVar14 < iVar11) {
                        uVar22 = ~uVar14 >> 0x1f;
                      }
                      local_1a8 = dVar16;
                      if ((uVar22 == 0) &&
                         (bVar10 = FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), iVar11 = local_1b8, bVar10)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      FVar9.Data = local_1c0.Data;
                      iVar12 = 0;
                      if ((int)uVar19 < iVar11) {
                        iVar12 = local_138._0_4_;
                      }
                      if ((iVar12 == 0) &&
                         (bVar10 = FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), iVar11 = local_1b8, bVar10)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      fVar27 = (float)(*(double *)(FVar9.Data + (longlong)dVar18 + 0x30 + 8) *
                                       *(double *)(local_1c0.Data + (longlong)dVar21 + 0x10) -
                                      *(double *)(FVar9.Data + (longlong)dVar18 + 0x30) *
                                      *(double *)(local_1c0.Data + (longlong)dVar21 + 0x10 + 8));
                      if (fVar34 <= (float)((uint)fVar27 & uVar15)) {
                        fVar27 = (float)((*(double *)(local_1c0.Data + (longlong)dVar21 + 8) -
                                         *(double *)(FVar9.Data + (longlong)dVar18 + 0x28)) *
                                         *(double *)(FVar9.Data + (longlong)dVar18 + 0x30) -
                                        (*(double *)(local_1c0.Data + (longlong)dVar21) -
                                        *(double *)(FVar9.Data + (longlong)dVar24)) *
                                        *(double *)(FVar9.Data + (longlong)dVar18 + 0x30 + 8)) /
                                 fVar27;
                        if (fVar28 <= fVar27) {
                          dVar6 = (double)fVar27;
                          dVar33 = dVar6 * *(double *)(local_1c0.Data + (longlong)dVar21 + 0x18) +
                                   *(double *)(local_1c0.Data + (longlong)dVar21 + 8);
                          dVar6 = dVar6 * *(double *)(local_1c0.Data + (longlong)dVar21 + 0x10) +
                                  *(double *)(local_1c0.Data + (longlong)dVar21);
                          if ((((0.0 <= dVar6) && (dVar6 <= dVar25)) && (0.0 <= dVar33)) &&
                             (dVar33 <= dVar25)) {
                            if ((int)uVar17 < iVar11) {
                              lVar20 = (longlong)dVar18 + 0x40;
                              local_e8 = dVar6;
                              dStack_e0 = dVar33;
                              do {
                                uVar19 = 0;
                                if ((int)uVar17 < iVar11) {
                                  uVar19 = ~uVar17 >> 0x1f;
                                }
                                if ((uVar19 == 0) &&
                                   (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                                FVar9.Data = local_1c0.Data;
                                uVar19 = 0;
                                if (local_180._0_4_ < iVar11) {
                                  uVar19 = ~uVar14 >> 0x1f;
                                }
                                if ((uVar19 == 0) &&
                                   (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                                fVar27 = (float)(*(double *)(FVar9.Data + lVar20 + 0x10 + 8) *
                                                 *(double *)
                                                  (local_1c0.Data + (longlong)dVar18 + 0x30) -
                                                *(double *)(FVar9.Data + lVar20 + 0x10) *
                                                *(double *)
                                                 (local_1c0.Data + (longlong)dVar18 + 0x30 + 8));
                                if (fVar34 <= (float)((uint)fVar27 & uVar15)) {
                                  fVar27 = (float)((*(double *)
                                                     (local_1c0.Data + (longlong)dVar18 + 0x28) -
                                                   *(double *)(FVar9.Data + lVar20 + 8)) *
                                                   *(double *)(FVar9.Data + lVar20 + 0x10) -
                                                  (*(double *)(local_1c0.Data + (longlong)dVar24) -
                                                  *(double *)(FVar9.Data + lVar20)) *
                                                  *(double *)(FVar9.Data + lVar20 + 0x10 + 8)) /
                                           fVar27;
                                  if (fVar28 <= fVar27) {
                                    dVar21 = (double)fVar27;
                                    dVar16 = dVar21 * *(double *)
                                                       (local_1c0.Data + (longlong)dVar18 + 0x38) +
                                             *(double *)(local_1c0.Data + (longlong)dVar18 + 0x28);
                                    dVar21 = dVar21 * *(double *)
                                                       (local_1c0.Data + (longlong)dVar18 + 0x30) +
                                             *(double *)(local_1c0.Data + (longlong)dVar24);
                                    if ((((0.0 <= dVar21) && (dVar21 <= dVar25)) && (0.0 <= dVar16))
                                       && (dVar16 <= dVar25)) {
                                      iVar12 = 0;
                                      if ((int)local_188._0_4_ < iVar11) {
                                        iVar12 = local_160._0_4_;
                                      }
                                      if ((iVar12 == 0) &&
                                         (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                        pcVar4 = (code *)swi(3);
                                        (*pcVar4)();
                                        return;
                                      }
                                      FVar9.Data = local_1c0.Data;
                                      uVar19 = 0;
                                      if ((int)uVar17 < iVar11) {
                                        uVar19 = ~uVar17 >> 0x1f;
                                      }
                                      if ((uVar19 == 0) &&
                                         (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                        pcVar4 = (code *)swi(3);
                                        (*pcVar4)();
                                        return;
                                      }
                                      fVar27 = (float)(*(double *)
                                                        (FVar9.Data + (longlong)local_158 + 0x10 + 8
                                                        ) * *(double *)
                                                             (local_1c0.Data + lVar20 + 0x10) -
                                                      *(double *)
                                                       (FVar9.Data + (longlong)local_158 + 0x10) *
                                                      *(double *)
                                                       (local_1c0.Data + lVar20 + 0x10 + 8));
                                      if (fVar34 <= (float)((uint)fVar27 & uVar15)) {
                                        fVar27 = (float)((*(double *)(local_1c0.Data + lVar20 + 8) -
                                                         *(double *)
                                                          (FVar9.Data + (longlong)local_158 + 8)) *
                                                         *(double *)
                                                          (FVar9.Data + (longlong)local_158 + 0x10)
                                                        - (*(double *)(local_1c0.Data + lVar20) -
                                                          *(double *)
                                                           (FVar9.Data + (longlong)local_158)) *
                                                          *(double *)
                                                           (FVar9.Data + (longlong)local_158 + 0x10
                                                           + 8)) / fVar27;
                                        if (fVar28 <= fVar27) {
                                          dVar29 = (double)fVar27;
                                          dVar5 = dVar29 * *(double *)
                                                            (local_1c0.Data + lVar20 + 0x18) +
                                                  *(double *)(local_1c0.Data + lVar20 + 8);
                                          dVar29 = dVar29 * *(double *)
                                                             (local_1c0.Data + lVar20 + 0x10) +
                                                   *(double *)(local_1c0.Data + lVar20);
                                          uVar15 = local_128;
                                          if ((((0.0 <= dVar29) && (dVar29 <= dVar25)) &&
                                              (0.0 <= dVar5)) && (dVar5 <= dVar25)) {
                                            fVar27 = (float)(((dVar29 - dVar31) * (dVar16 - dVar32)
                                                             - (dVar5 - dVar32) * (dVar21 - dVar31))
                                                            + ((dVar33 - dVar32) * (dVar21 - dVar31)
                                                              - (dVar6 - dVar31) * (dVar16 - dVar32)
                                                              ));
                                            if (fVar27 < local_168._0_4_) {
                                              local_168 = (double)CONCAT44(local_168._4_4_,fVar27);
                                              if ((*piVar1 < 1) &&
                                                 (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                     (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                pcVar4 = (code *)swi(3);
                                                (*pcVar4)();
                                                return;
                                              }
                                              pFVar3 = (param_4->AllocatorInstance).Data;
                                              *(double *)pFVar3 = local_f8;
                                              *(double *)(pFVar3 + 8) = dStack_f0;
                                              if ((*piVar1 < 2) &&
                                                 (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                     (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                pcVar4 = (code *)swi(3);
                                                (*pcVar4)();
                                                return;
                                              }
                                              pFVar3 = (param_4->AllocatorInstance).Data;
                                              *(double *)(pFVar3 + 0x10) = local_e8;
                                              *(double *)(pFVar3 + 0x18) = dStack_e0;
                                              if ((*piVar1 < 3) &&
                                                 (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                     (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                pcVar4 = (code *)swi(3);
                                                (*pcVar4)();
                                                return;
                                              }
                                              pFVar3 = (param_4->AllocatorInstance).Data;
                                              *(double *)(pFVar3 + 0x20) = dVar21;
                                              *(double *)(pFVar3 + 0x28) = dVar16;
                                              if ((*piVar1 < 4) &&
                                                 (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                     (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                pcVar4 = (code *)swi(3);
                                                (*pcVar4)();
                                                return;
                                              }
                                              auVar26._8_8_ = dVar5;
                                              auVar26._0_8_ = dVar29;
                                              *(undefined1 (*) [16])
                                               ((param_4->AllocatorInstance).Data + 0x30) = auVar26;
                                              iVar11 = local_1b8;
                                              uVar15 = local_128;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                uVar17 = uVar17 + 1;
                                lVar20 = lVar20 + 0x20;
                              } while ((int)uVar17 < iVar11);
                              uVar17 = (uint)local_140;
                            }
                            dVar16 = local_1a8;
                            dVar21 = local_198;
                            uVar19 = local_178._0_4_;
                          }
                        }
                      }
                      uVar17 = uVar17 + 1;
                      uVar14 = local_180._0_4_ + 1;
                      dVar16 = (double)((longlong)dVar16 + 1);
                      local_180 = (double)CONCAT44(local_180._4_4_,uVar14);
                      local_140 = CONCAT44(local_140._4_4_,uVar17);
                      dVar18 = dVar24;
                    } while ((int)uVar14 < iVar11);
                    dVar18 = local_158;
                    uVar22 = local_160._0_4_;
                    local_1a8 = dVar16;
                  }
                  uVar14 = local_188._0_4_;
                }
              }
            }
            uVar19 = uVar19 + 1;
            local_170 = (double)CONCAT44(local_170._4_4_,local_170._0_4_ + 1);
            local_1a0 = (double)((longlong)local_1a0 + 1);
            dVar21 = (double)((longlong)dVar21 + 0x20);
            local_178 = (double)CONCAT44(local_178._4_4_,uVar19);
            dVar31 = local_150;
            local_198 = dVar21;
            uVar17 = local_190;
          } while ((int)uVar19 < iVar11);
        }
        local_190 = uVar17;
        local_188 = (double)CONCAT44(local_188._4_4_,local_190);
        dVar21 = (double)((longlong)dVar31 + 0x20);
        local_148 = (double)((longlong)local_148 + 1);
        local_1b0 = local_1b0 + 1;
        local_150 = dVar21;
      } while ((int)local_190 < iVar11);
      if (local_168._0_4_ != local_18c) goto LAB_1481f2a32;
    }
    iVar11 = param_4->ArrayMax;
    *piVar1 = 0;
  }
  else {
    if (uVar17 != 8) {
      uVar15 = 0;
      if (0 < (int)uVar17) {
        lVar20 = 0;
        lVar13 = 0;
        do {
          uVar19 = 0;
          if ((int)uVar15 < param_2->ArrayNum) {
            uVar19 = ~uVar15 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar19 = *(uint *)((param_2->AllocatorInstance).Data + lVar20 * 4);
          uVar14 = 0;
          if ((int)uVar19 < param_3->ArrayNum) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x10;
          uVar7 = *(undefined8 *)pFVar3;
          uVar8 = *(undefined8 *)(pFVar3 + 8);
          uVar19 = 0;
          if ((int)uVar15 < param_4->ArrayNum) {
            uVar19 = ~uVar15 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar15 = uVar15 + 1;
          lVar20 = lVar20 + 1;
          pFVar3 = (param_4->AllocatorInstance).Data + lVar13;
          *(undefined8 *)pFVar3 = uVar7;
          *(undefined8 *)(pFVar3 + 8) = uVar8;
          lVar13 = lVar13 + 0x10;
        } while (lVar20 < (int)uVar17);
      }
      goto LAB_1481f2a32;
    }
    uVar17 = 0x3039;
    local_res10 = __real_7f7fffff;
    local_1b0 = 0;
    fVar28 = __real_3f800000;
    fVar30 = __real_7f7fffff;
    fVar27 = __real_3f000000;
    iVar11 = local_1b8;
    dVar21 = __real_3ff0000000000000;
    uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      uVar19 = uVar17 * 0xbb38435 + 0x3619636b;
      uVar17 = uVar19 * 0xbb38435 + 0x3619636b;
      fVar23 = (float)(int)(((float)(uVar19 >> 9 | 0x3f800000) - fVar28) * (float)iVar11);
      uVar14 = (int)((float)(iVar11 - ((int)fVar23 + 1)) *
                    ((float)(uVar17 >> 9 | 0x3f800000) - fVar28)) + (int)fVar23 + 1;
      uVar19 = iVar11 - 1U;
      if ((int)uVar14 < (int)(iVar11 - 1U)) {
        uVar19 = uVar14;
      }
      uVar14 = 0;
      if ((int)uVar19 < iVar11) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      local_18c = fVar23;
      if ((uVar14 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar11 = local_1b8, bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar9.Data = local_1c0.Data;
      lVar20 = (longlong)(int)uVar19 * 0x20;
      local_190 = (uint)(-1 < (int)fVar23);
      if ((-1 >= (int)fVar23 || iVar11 <= (int)fVar23) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar11 = local_1b8, bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_130 = (longlong)(int)fVar23;
      local_140 = local_130 * 0x20;
      fVar23 = (float)(*(double *)(FVar9.Data + lVar20 + 0x10 + 8) *
                       *(double *)(local_1c0.Data + local_140 + 0x10) -
                      *(double *)(FVar9.Data + lVar20 + 0x10) *
                      *(double *)(local_1c0.Data + local_140 + 0x10 + 8));
      if (fVar34 <= (float)((uint)fVar23 & uVar15)) {
        fVar23 = (float)((*(double *)(local_1c0.Data + local_140 + 8) -
                         *(double *)(FVar9.Data + lVar20 + 8)) *
                         *(double *)(FVar9.Data + lVar20 + 0x10) -
                        (*(double *)(local_1c0.Data + local_140) - *(double *)(FVar9.Data + lVar20))
                        * *(double *)(FVar9.Data + lVar20 + 0x10 + 8)) / fVar23;
        if (fVar27 <= fVar23) {
          dVar25 = (double)fVar23;
          local_148 = dVar25 * *(double *)(local_1c0.Data + local_140 + 0x18) +
                      *(double *)(local_1c0.Data + local_140 + 8);
          local_198 = dVar25 * *(double *)(local_1c0.Data + local_140 + 0x10) +
                      *(double *)(local_1c0.Data + local_140);
          if ((((0.0 <= local_198) && (local_198 <= dVar21)) && (0.0 <= local_148)) &&
             (local_148 <= dVar21)) {
            uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
            uVar22 = (int)((float)(int)(iVar11 - (uVar19 + 1)) *
                          ((float)(uVar17 >> 9 | 0x3f800000) - fVar28)) + uVar19 + 1;
            uVar14 = iVar11 - 1U;
            if ((int)uVar22 < (int)(iVar11 - 1U)) {
              uVar14 = uVar22;
            }
            uVar22 = 0;
            if ((int)uVar14 < iVar11) {
              uVar22 = ~uVar14 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar11 = local_1b8, bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar9.Data = local_1c0.Data;
            lVar13 = (longlong)(int)uVar14 * 0x20;
            uVar22 = 0;
            if ((int)uVar19 < iVar11) {
              uVar22 = ~uVar19 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar11 = local_1b8, bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar23 = (float)(*(double *)(FVar9.Data + lVar13 + 0x10 + 8) *
                             *(double *)(local_1c0.Data + lVar20 + 0x10) -
                            *(double *)(FVar9.Data + lVar13 + 0x10) *
                            *(double *)(local_1c0.Data + lVar20 + 0x10 + 8));
            if (fVar34 <= (float)((uint)fVar23 & uVar15)) {
              fVar23 = (float)((*(double *)(local_1c0.Data + lVar20 + 8) -
                               *(double *)(FVar9.Data + lVar13 + 8)) *
                               *(double *)(FVar9.Data + lVar13 + 0x10) -
                              (*(double *)(local_1c0.Data + lVar20) -
                              *(double *)(FVar9.Data + lVar13)) *
                              *(double *)(FVar9.Data + lVar13 + 0x10 + 8)) / fVar23;
              if (fVar27 <= fVar23) {
                dVar25 = (double)fVar23;
                local_158 = dVar25 * *(double *)(local_1c0.Data + lVar20 + 0x18) +
                            *(double *)(local_1c0.Data + lVar20 + 8);
                local_150 = dVar25 * *(double *)(local_1c0.Data + lVar20 + 0x10) +
                            *(double *)(local_1c0.Data + lVar20);
                if ((((0.0 <= local_150) && (local_150 <= dVar21)) && (0.0 <= local_158)) &&
                   (local_158 <= dVar21)) {
                  uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
                  uVar22 = (int)((float)(int)(iVar11 - (uVar14 + 1)) *
                                ((float)(uVar17 >> 9 | 0x3f800000) - fVar28)) + uVar14 + 1;
                  uVar19 = iVar11 - 1U;
                  if ((int)uVar22 < (int)(iVar11 - 1U)) {
                    uVar19 = uVar22;
                  }
                  uVar22 = 0;
                  if ((int)uVar19 < iVar11) {
                    uVar22 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), iVar11 = local_1b8, bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  FVar9.Data = local_1c0.Data;
                  lVar20 = (longlong)(int)uVar19 * 0x20;
                  uVar22 = 0;
                  if ((int)uVar14 < iVar11) {
                    uVar22 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), iVar11 = local_1b8, bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  fVar23 = (float)(*(double *)(FVar9.Data + lVar20 + 0x10 + 8) *
                                   *(double *)(local_1c0.Data + lVar13 + 0x10) -
                                  *(double *)(FVar9.Data + lVar20 + 0x10) *
                                  *(double *)(local_1c0.Data + lVar13 + 0x10 + 8));
                  if (fVar34 <= (float)((uint)fVar23 & uVar15)) {
                    fVar23 = (float)((*(double *)(local_1c0.Data + lVar13 + 8) -
                                     *(double *)(FVar9.Data + lVar20 + 8)) *
                                     *(double *)(FVar9.Data + lVar20 + 0x10) -
                                    (*(double *)(local_1c0.Data + lVar13) -
                                    *(double *)(FVar9.Data + lVar20)) *
                                    *(double *)(FVar9.Data + lVar20 + 0x10 + 8)) / fVar23;
                    if (fVar27 <= fVar23) {
                      dVar25 = (double)fVar23;
                      local_1a8 = dVar25 * *(double *)(local_1c0.Data + lVar13 + 0x18) +
                                  *(double *)(local_1c0.Data + lVar13 + 8);
                      local_1a0 = dVar25 * *(double *)(local_1c0.Data + lVar13 + 0x10) +
                                  *(double *)(local_1c0.Data + lVar13);
                      if ((((0.0 <= local_1a0) && (local_1a0 <= dVar21)) && (0.0 <= local_1a8)) &&
                         (local_1a8 <= dVar21)) {
                        uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
                        uVar22 = (int)((float)(int)(iVar11 - (uVar19 + 1)) *
                                      ((float)(uVar17 >> 9 | 0x3f800000) - fVar28)) + uVar19 + 1;
                        uVar14 = iVar11 - 1U;
                        if ((int)uVar22 < (int)(iVar11 - 1U)) {
                          uVar14 = uVar22;
                        }
                        uVar22 = 0;
                        if ((int)uVar14 < iVar11) {
                          uVar22 = ~uVar14 >> 0x1f;
                        }
                        if ((uVar22 == 0) &&
                           (bVar10 = FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), iVar11 = local_1b8, bVar10)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        FVar9.Data = local_1c0.Data;
                        lVar13 = (longlong)(int)uVar14 * 0x20;
                        uVar22 = 0;
                        if ((int)uVar19 < iVar11) {
                          uVar22 = ~uVar19 >> 0x1f;
                        }
                        if ((uVar22 == 0) &&
                           (bVar10 = FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), iVar11 = local_1b8, bVar10)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        fVar23 = (float)(*(double *)(FVar9.Data + lVar13 + 0x10 + 8) *
                                         *(double *)(local_1c0.Data + lVar20 + 0x10) -
                                        *(double *)(FVar9.Data + lVar13 + 0x10) *
                                        *(double *)(local_1c0.Data + lVar20 + 0x10 + 8));
                        if (fVar34 <= (float)((uint)fVar23 & uVar15)) {
                          fVar23 = (float)((*(double *)(local_1c0.Data + lVar20 + 8) -
                                           *(double *)(FVar9.Data + lVar13 + 8)) *
                                           *(double *)(FVar9.Data + lVar13 + 0x10) -
                                          (*(double *)(local_1c0.Data + lVar20) -
                                          *(double *)(FVar9.Data + lVar13)) *
                                          *(double *)(FVar9.Data + lVar13 + 0x10 + 8)) / fVar23;
                          if (fVar27 <= fVar23) {
                            dVar25 = (double)fVar23;
                            local_160 = dVar25 * *(double *)(local_1c0.Data + lVar20 + 0x18) +
                                        *(double *)(local_1c0.Data + lVar20 + 8);
                            local_138 = dVar25 * *(double *)(local_1c0.Data + lVar20 + 0x10) +
                                        *(double *)(local_1c0.Data + lVar20);
                            if ((((0.0 <= local_138) && (local_138 <= dVar21)) && (0.0 <= local_160)
                                ) && (local_160 <= dVar21)) {
                              uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
                              uVar22 = (int)((float)(int)(iVar11 - (uVar14 + 1)) *
                                            ((float)(uVar17 >> 9 | 0x3f800000) - fVar28)) +
                                       uVar14 + 1;
                              uVar19 = iVar11 - 1U;
                              if ((int)uVar22 < (int)(iVar11 - 1U)) {
                                uVar19 = uVar22;
                              }
                              uVar22 = 0;
                              if ((int)uVar19 < iVar11) {
                                uVar22 = ~uVar19 >> 0x1f;
                              }
                              if ((uVar22 == 0) &&
                                 (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                pcVar4 = (code *)swi(3);
                                (*pcVar4)();
                                return;
                              }
                              FVar9.Data = local_1c0.Data;
                              lVar20 = (longlong)(int)uVar19 * 0x20;
                              uVar22 = 0;
                              if ((int)uVar14 < iVar11) {
                                uVar22 = ~uVar14 >> 0x1f;
                              }
                              if ((uVar22 == 0) &&
                                 (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                pcVar4 = (code *)swi(3);
                                (*pcVar4)();
                                return;
                              }
                              fVar23 = (float)(*(double *)(FVar9.Data + lVar20 + 0x10 + 8) *
                                               *(double *)(local_1c0.Data + lVar13 + 0x10) -
                                              *(double *)(FVar9.Data + lVar20 + 0x10) *
                                              *(double *)(local_1c0.Data + lVar13 + 0x10 + 8));
                              if (fVar34 <= (float)((uint)fVar23 & uVar15)) {
                                fVar23 = (float)((*(double *)(local_1c0.Data + lVar13 + 8) -
                                                 *(double *)(FVar9.Data + lVar20 + 8)) *
                                                 *(double *)(FVar9.Data + lVar20 + 0x10) -
                                                (*(double *)(local_1c0.Data + lVar13) -
                                                *(double *)(FVar9.Data + lVar20)) *
                                                *(double *)(FVar9.Data + lVar20 + 0x10 + 8)) /
                                         fVar23;
                                if (fVar27 <= fVar23) {
                                  dVar25 = (double)fVar23;
                                  dVar31 = dVar25 * *(double *)(local_1c0.Data + lVar13 + 0x18) +
                                           *(double *)(local_1c0.Data + lVar13 + 8);
                                  dVar25 = dVar25 * *(double *)(local_1c0.Data + lVar13 + 0x10) +
                                           *(double *)(local_1c0.Data + lVar13);
                                  local_170 = dVar31;
                                  local_168 = dVar25;
                                  if ((((0.0 <= dVar25) && (dVar25 <= dVar21)) && (0.0 <= dVar31))
                                     && (dVar31 <= dVar21)) {
                                    uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
                                    uVar22 = (int)((float)(int)(iVar11 - (uVar19 + 1)) *
                                                  ((float)(uVar17 >> 9 | 0x3f800000) - fVar28)) +
                                             uVar19 + 1;
                                    uVar14 = iVar11 - 1U;
                                    if ((int)uVar22 < (int)(iVar11 - 1U)) {
                                      uVar14 = uVar22;
                                    }
                                    uVar22 = 0;
                                    if ((int)uVar14 < iVar11) {
                                      uVar22 = ~uVar14 >> 0x1f;
                                    }
                                    if ((uVar22 == 0) &&
                                       (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                      pcVar4 = (code *)swi(3);
                                      (*pcVar4)();
                                      return;
                                    }
                                    FVar9.Data = local_1c0.Data;
                                    lVar13 = (longlong)(int)uVar14 * 0x20;
                                    uVar22 = 0;
                                    if ((int)uVar19 < iVar11) {
                                      uVar22 = ~uVar19 >> 0x1f;
                                    }
                                    if ((uVar22 == 0) &&
                                       (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                      pcVar4 = (code *)swi(3);
                                      (*pcVar4)();
                                      return;
                                    }
                                    fVar23 = (float)(*(double *)(FVar9.Data + lVar13 + 0x10 + 8) *
                                                     *(double *)(local_1c0.Data + lVar20 + 0x10) -
                                                    *(double *)(FVar9.Data + lVar13 + 0x10) *
                                                    *(double *)(local_1c0.Data + lVar20 + 0x10 + 8))
                                    ;
                                    if (fVar34 <= (float)((uint)fVar23 & uVar15)) {
                                      fVar23 = (float)((*(double *)(local_1c0.Data + lVar20 + 8) -
                                                       *(double *)(FVar9.Data + lVar13 + 8)) *
                                                       *(double *)(FVar9.Data + lVar13 + 0x10) -
                                                      (*(double *)(local_1c0.Data + lVar20) -
                                                      *(double *)(FVar9.Data + lVar13)) *
                                                      *(double *)(FVar9.Data + lVar13 + 0x10 + 8)) /
                                               fVar23;
                                      if (fVar27 <= fVar23) {
                                        dVar18 = (double)fVar23;
                                        dVar32 = dVar18 * *(double *)
                                                           (local_1c0.Data + lVar20 + 0x18) +
                                                 *(double *)(local_1c0.Data + lVar20 + 8);
                                        dVar18 = dVar18 * *(double *)
                                                           (local_1c0.Data + lVar20 + 0x10) +
                                                 *(double *)(local_1c0.Data + lVar20);
                                        fVar30 = local_res10;
                                        local_180 = dVar32;
                                        local_178 = dVar18;
                                        if ((((0.0 <= dVar18) && (dVar18 <= dVar21)) &&
                                            (0.0 <= dVar32)) && (dVar32 <= dVar21)) {
                                          uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
                                          uVar22 = (int)((float)(int)(iVar11 - (uVar14 + 1)) *
                                                        ((float)(uVar17 >> 9 | 0x3f800000) - fVar28)
                                                        ) + uVar14 + 1;
                                          uVar19 = iVar11 - 1U;
                                          if ((int)uVar22 < (int)(iVar11 - 1U)) {
                                            uVar19 = uVar22;
                                          }
                                          uVar22 = 0;
                                          if ((int)uVar19 < iVar11) {
                                            uVar22 = ~uVar19 >> 0x1f;
                                          }
                                          if ((uVar22 == 0) &&
                                             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                            pcVar4 = (code *)swi(3);
                                            (*pcVar4)();
                                            return;
                                          }
                                          FVar9.Data = local_1c0.Data;
                                          lVar20 = (longlong)(int)uVar19 * 0x20;
                                          uVar22 = 0;
                                          if ((int)uVar14 < iVar11) {
                                            uVar22 = ~uVar14 >> 0x1f;
                                          }
                                          if ((uVar22 == 0) &&
                                             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                            pcVar4 = (code *)swi(3);
                                            (*pcVar4)();
                                            return;
                                          }
                                          fVar23 = (float)(*(double *)
                                                            (FVar9.Data + lVar20 + 0x10 + 8) *
                                                           *(double *)
                                                            (local_1c0.Data + lVar13 + 0x10) -
                                                          *(double *)(FVar9.Data + lVar20 + 0x10) *
                                                          *(double *)
                                                           (local_1c0.Data + lVar13 + 0x10 + 8));
                                          if (fVar34 <= (float)((uint)fVar23 & uVar15)) {
                                            fVar23 = (float)((*(double *)
                                                               (local_1c0.Data + lVar13 + 8) -
                                                             *(double *)(FVar9.Data + lVar20 + 8)) *
                                                             *(double *)(FVar9.Data + lVar20 + 0x10)
                                                            - (*(double *)(local_1c0.Data + lVar13)
                                                              - *(double *)(FVar9.Data + lVar20)) *
                                                              *(double *)
                                                               (FVar9.Data + lVar20 + 0x10 + 8)) /
                                                     fVar23;
                                            if (fVar27 <= fVar23) {
                                              dVar16 = (double)fVar23;
                                              dVar24 = dVar16 * *(double *)
                                                                 (local_1c0.Data + lVar13 + 0x18) +
                                                       *(double *)(local_1c0.Data + lVar13 + 8);
                                              dVar16 = dVar16 * *(double *)
                                                                 (local_1c0.Data + lVar13 + 0x10) +
                                                       *(double *)(local_1c0.Data + lVar13);
                                              fVar28 = __real_3f800000;
                                              fVar34 = __real_322bcc77;
                                              local_188 = dVar16;
                                              if ((((0.0 <= dVar16) && (dVar16 <= dVar21)) &&
                                                  (0.0 <= dVar24)) && (dVar24 <= dVar21)) {
                                                if (((local_190 & (int)local_18c < iVar11) == 0) &&
                                                   (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                       (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                                  pcVar4 = (code *)swi(3);
                                                  (*pcVar4)();
                                                  return;
                                                }
                                                FVar9.Data = local_1c0.Data;
                                                uVar14 = 0;
                                                if ((int)uVar19 < iVar11) {
                                                  uVar14 = ~uVar19 >> 0x1f;
                                                }
                                                if ((uVar14 == 0) &&
                                                   (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                       (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), iVar11 = local_1b8, bVar10)) {
                                                  pcVar4 = (code *)swi(3);
                                                  (*pcVar4)();
                                                  return;
                                                }
                                                dVar6 = local_148;
                                                fVar23 = (float)(*(double *)
                                                                  (FVar9.Data + local_140 + 0x10 + 8
                                                                  ) * *(double *)
                                                                       (local_1c0.Data +
                                                                       lVar20 + 0x10) -
                                                                *(double *)
                                                                 (FVar9.Data + local_140 + 0x10) *
                                                                *(double *)
                                                                 (local_1c0.Data + lVar20 + 0x10 + 8
                                                                 ));
                                                fVar28 = __real_3f800000;
                                                fVar34 = __real_322bcc77;
                                                if (__real_322bcc77 <=
                                                    (float)((uint)fVar23 & uVar15)) {
                                                  fVar23 = (float)((*(double *)
                                                                     (local_1c0.Data + lVar20 + 8) -
                                                                   *(double *)
                                                                    (FVar9.Data + local_140 + 8)) *
                                                                   *(double *)
                                                                    (FVar9.Data + local_140 + 0x10)
                                                                  - (*(double *)
                                                                      (local_1c0.Data + lVar20) -
                                                                    *(double *)
                                                                     (FVar9.Data + local_140)) *
                                                                    *(double *)
                                                                     (FVar9.Data + local_140 + 0x10
                                                                     + 8)) / fVar23;
                                                  if (fVar27 <= fVar23) {
                                                    dVar33 = (double)fVar23;
                                                    dVar29 = dVar33 * *(double *)
                                                                       (local_1c0.Data +
                                                                       lVar20 + 0x18) +
                                                             *(double *)
                                                              (local_1c0.Data + lVar20 + 8);
                                                    dVar33 = dVar33 * *(double *)
                                                                       (local_1c0.Data +
                                                                       lVar20 + 0x10) +
                                                             *(double *)(local_1c0.Data + lVar20);
                                                    fVar27 = __real_3f000000;
                                                    uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                                                    if ((((0.0 <= dVar33) && (dVar33 <= dVar21)) &&
                                                        (0.0 <= dVar29)) &&
                                                       ((dVar29 <= dVar21 &&
                                                        (fVar23 = (float)(((local_158 - local_148) *
                                                                           (local_1a0 - local_198) -
                                                                          (local_150 - local_198) *
                                                                          (local_1a8 - local_148)) +
                                                                          ((dVar25 - local_198) *
                                                                           (local_160 - local_148) -
                                                                          (dVar31 - local_148) *
                                                                          (local_138 - local_198)) +
                                                                          ((local_138 - local_198) *
                                                                           (local_1a8 - local_148) -
                                                                          (local_160 - local_148) *
                                                                          (local_1a0 - local_198)) +
                                                                         ((dVar33 - local_198) *
                                                                          (dVar24 - local_148) -
                                                                         (dVar29 - local_148) *
                                                                         (dVar16 - local_198)) +
                                                                         ((dVar16 - local_198) *
                                                                          (dVar32 - local_148) -
                                                                         (dVar24 - local_148) *
                                                                         (dVar18 - local_198)) +
                                                                         ((dVar18 - local_198) *
                                                                          (dVar31 - local_148) -
                                                                         (dVar32 - local_148) *
                                                                         (dVar25 - local_198))),
                                                        dVar21 = __real_3ff0000000000000,
                                                        fVar23 < local_res10)))) {
                                                      if ((*piVar1 < 1) &&
                                                         (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                             (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar4 = (code *)swi(3);
                                                    (*pcVar4)();
                                                    return;
                                                  }
                                                  pFVar3 = (param_4->AllocatorInstance).Data;
                                                  *(double *)pFVar3 = local_198;
                                                  *(double *)(pFVar3 + 8) = dVar6;
                                                  if ((*piVar1 < 2) &&
                                                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                         (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar4 = (code *)swi(3);
                                                    (*pcVar4)();
                                                    return;
                                                  }
                                                  pFVar3 = (param_4->AllocatorInstance).Data;
                                                  *(double *)(pFVar3 + 0x10) = local_150;
                                                  *(double *)(pFVar3 + 0x18) = local_158;
                                                  if ((*piVar1 < 3) &&
                                                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                         (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar4 = (code *)swi(3);
                                                    (*pcVar4)();
                                                    return;
                                                  }
                                                  pFVar3 = (param_4->AllocatorInstance).Data;
                                                  *(double *)(pFVar3 + 0x20) = local_1a0;
                                                  *(double *)(pFVar3 + 0x28) = local_1a8;
                                                  if ((*piVar1 < 4) &&
                                                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                         (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar4 = (code *)swi(3);
                                                    (*pcVar4)();
                                                    return;
                                                  }
                                                  pFVar3 = (param_4->AllocatorInstance).Data;
                                                  *(double *)(pFVar3 + 0x30) = local_138;
                                                  *(double *)(pFVar3 + 0x38) = local_160;
                                                  if ((*piVar1 < 5) &&
                                                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                         (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar4 = (code *)swi(3);
                                                    (*pcVar4)();
                                                    return;
                                                  }
                                                  pFVar3 = (param_4->AllocatorInstance).Data;
                                                  *(double *)(pFVar3 + 0x40) = local_168;
                                                  *(double *)(pFVar3 + 0x48) = local_170;
                                                  if ((*piVar1 < 6) &&
                                                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                         (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar4 = (code *)swi(3);
                                                    (*pcVar4)();
                                                    return;
                                                  }
                                                  pFVar3 = (param_4->AllocatorInstance).Data;
                                                  *(double *)(pFVar3 + 0x50) = local_178;
                                                  *(double *)(pFVar3 + 0x58) = local_180;
                                                  if ((*piVar1 < 7) &&
                                                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                         (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar4 = (code *)swi(3);
                                                    (*pcVar4)();
                                                    return;
                                                  }
                                                  pFVar3 = (param_4->AllocatorInstance).Data;
                                                  *(double *)(pFVar3 + 0x60) = local_188;
                                                  *(double *)(pFVar3 + 0x68) = dVar24;
                                                  if ((*piVar1 < 8) &&
                                                     (bVar10 = FDebug::CheckVerifyFailedImpl2
                                                                         (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar4 = (code *)swi(3);
                                                    (*pcVar4)();
                                                    return;
                                                  }
                                                  fVar27 = __real_3f000000;
                                                  uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                                                  fVar28 = __real_3f800000;
                                                  fVar34 = __real_322bcc77;
                                                  dVar21 = __real_3ff0000000000000;
                                                  pFVar3 = (param_4->AllocatorInstance).Data;
                                                  *(double *)(pFVar3 + 0x70) = dVar33;
                                                  *(double *)(pFVar3 + 0x78) = dVar29;
                                                  fVar30 = fVar23;
                                                  iVar11 = local_1b8;
                                                  local_res10 = fVar23;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_1b0 = local_1b0 + 1;
    } while ((int)local_1b0 < 100000);
    if (fVar30 != __real_7f7fffff) goto LAB_1481f2a32;
    iVar11 = param_4->ArrayMax;
    *piVar1 = 0;
  }
  if (iVar11 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
LAB_1481f2a32:
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
  return;
}

// FindParentBodyInstance @ 1481f2ae0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FBodyInstance * __cdecl FindParentBodyInstance(FName param_1,USkeletalMeshComponent *param_2)

{
  int iVar1;
  FName FVar2;
  FBodyInstance *pFVar3;
  undefined1 local_res8 [8];
  
  while( true ) {
    FVar2 = USkinnedMeshComponent::GetParentBone((USkinnedMeshComponent *)param_2,(FName)local_res8)
    ;
    FVar2 = *(FName *)FVar2;
    if (FVar2 == (FName)0x0) {
      return (FBodyInstance *)0x0;
    }
    pFVar3 = (FBodyInstance *)(**(code **)(param_2->_padding_ + 0x818))(param_2,FVar2,1,0xffffffff);
    if (pFVar3 != (FBodyInstance *)0x0) break;
    iVar1 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_2,FVar2);
    if (iVar1 == 0) {
      return (FBodyInstance *)0x0;
    }
  }
  return pFVar3;
}

// GatherParticleLightData @ 1481f3a00

void __cdecl
GatherParticleLightData
          (FDynamicSpriteEmitterReplayDataBase *param_1,TMatrix<double> *param_2,
          FSceneViewFamily *param_3,FSimpleLightArray *param_4)

{
  int *piVar1;
  int *piVar2;
  FSimpleLightPerViewEntry *pFVar3;
  uchar uVar4;
  FSimpleLightInstacePerViewIndexData *pFVar5;
  TVector<double>_u_0 *pTVar6;
  FSimpleLightPerViewEntry *pFVar7;
  TVector<float>_u_0 *pTVar8;
  FSimpleLightEntry *pFVar9;
  code *pcVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FSimpleLightInstacePerViewIndexData FVar14;
  FSimpleLightEntry *pFVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  bool bVar19;
  int iVar20;
  FBaseParticle *pFVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  float fVar28;
  double dVar29;
  FSimpleLightInstacePerViewIndexData local_168;
  TVector<float>_u_0 local_160;
  float fStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined1 uStack_13c;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  FSimpleLightId FStack_138;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  longlong local_100;
  longlong local_f8;
  TVector<double>_u_0 local_f0;
  double local_c8;
  
  if (param_1->LightDataOffset != 0) {
    iVar20 = param_1->MaxDrawCount;
    iVar27 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((-1 < iVar20) && (iVar20 < iVar27)) {
      iVar27 = iVar20;
    }
    iVar20 = (param_4->InstanceData).ArrayNum;
    uVar23 = iVar20 + iVar27;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    piVar1 = &(param_4->InstanceData).ArrayMax;
    if (*piVar1 < (int)uVar23) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightEntry>_>
                (0x30,8,uVar23,(ForElementType<FSimpleLightEntry> *)param_4,iVar20,piVar1);
    }
    iVar20 = (param_4->PerViewData).ArrayNum;
    if (param_1->CameraPayloadOffset == 0) {
      uVar23 = iVar20 + iVar27;
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
    }
    else {
      uVar23 = iVar27 * (param_3->Views).ArrayNum + iVar20;
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
    }
    if ((param_4->PerViewData).ArrayMax < (int)uVar23) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightPerViewEntry>_>
                (0x18,8,uVar23,&(param_4->PerViewData).AllocatorInstance,iVar20,
                 &(param_4->PerViewData).ArrayMax);
    }
    uVar23 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    dVar18 = __real_3fe0000000000000;
    fVar17 = __real_38d1b717;
    dVar16 = __real_3ff0000000000000;
    lVar24 = param_1->_padding_;
    lVar25 = param_1->_padding_;
    if (0 < iVar27) {
      lVar26 = 0;
      local_100 = lVar24;
      local_f8 = lVar25;
      do {
        lVar22 = (longlong)param_1->LightDataOffset;
        pFVar21 = (FBaseParticle *)
                  ((int)((uint)*(ushort *)(lVar26 * 2 + lVar25) * (int)param_1->_padding_) + lVar24)
        ;
        if (*(char *)((longlong)&(pFVar21->Location).field0_0x0 + lVar22 + 0xc) != '\0') {
          uVar4 = param_1->ScreenAlignment;
          dVar29 = (double)(float)((uint)((pFVar21->Size).field0_0x0._s_0.X *
                                         *(float *)&param_1->_padding_) & uVar23);
          if (((uVar4 == '\x01') || (uVar4 == '\0')) ||
             (dVar11 = (double)(float)((uint)((pFVar21->Size).field0_0x0._s_0.Y *
                                             *(float *)((longlong)&param_1->_padding_ + 4)) & uVar23
                                      ), uVar4 == '\x06')) {
            dVar11 = dVar29;
          }
          fVar28 = (pFVar21->Color).field0_0x0._s_0.A;
          uStack_13c = *(undefined1 *)((longlong)&(pFVar21->Location).field0_0x0 + lVar22 + 0xd);
          uStack_144 = 0x3f800000;
          local_140 = 0x3f800000;
          local_160._s_0.X =
               fVar28 * (pFVar21->Color).field0_0x0._s_0.R *
               *(float *)((longlong)&(pFVar21->OldLocation).field0_0x0 + lVar22);
          uStack_13b = 0;
          local_160._s_0.Y =
               fVar28 * (pFVar21->Color).field0_0x0._s_0.G *
               *(float *)((longlong)&(pFVar21->OldLocation).field0_0x0 + lVar22 + 4);
          FStack_138.Packed = 0xffffffffffffffff;
          local_160._s_0.Z =
               fVar28 * (pFVar21->Color).field0_0x0._s_0.B *
               *(float *)((longlong)&(pFVar21->OldLocation).field0_0x0 + lVar22 + 8);
          local_150 = *(undefined4 *)((longlong)&(pFVar21->Location).field0_0x0 + lVar22 + 4);
          fStack_148 = param_1->LightVolumetricScatteringIntensity;
          fStack_154 = (float)((dVar11 + dVar29) *
                               (double)*(float *)((longlong)&(pFVar21->Location).field0_0x0 + lVar22
                                                 ) * dVar18);
          uStack_14c = *(undefined4 *)((longlong)&(pFVar21->Location).field0_0x0 + lVar22 + 8);
          if (*(char *)((longlong)&(pFVar21->Location).field0_0x0 + lVar22 + 0xe) == '\0') {
            if (fStack_154 <= fVar17) {
              fVar28 = local_160._s_0.Y;
              if (local_160._s_0.Y <= local_160._s_0.X) {
                fVar28 = local_160._s_0.X;
              }
              if (fVar28 <= local_160._s_0.Z) {
                fVar28 = local_160._s_0.Z;
              }
              if (fVar28 <= fVar17) goto LAB_1481f402d;
            }
            local_130._s_0.X = (pFVar21->Location).field0_0x0._s_0.X;
            local_130._s_0.Y = (pFVar21->Location).field0_0x0._s_0.Y;
            local_130._s_0.Z = (pFVar21->Location).field0_0x0._s_0.Z;
            local_f0._s_0.Z = 0.0;
            local_f0._s_0.X = 0.0;
            local_f0._s_0.Y = 0.0;
            ApplyOrbitToPosition
                      (pFVar21,param_1,param_2,(TVector<double> *)&local_130._s_0,
                       (TVector<double> *)&local_f0._s_0);
            uVar12 = local_130._s_0.X;
            uVar13 = local_130._s_0.Y;
            local_c8 = local_130._s_0.Z;
            if (param_1->bUseLocalSpace != false) {
              uVar12 = param_2->M[1][0] * local_130._s_0.Y + param_2->M[0][0] * local_130._s_0.X +
                       param_2->M[2][0] * local_130._s_0.Z + param_2->M[3][0] * dVar16;
              uVar13 = param_2->M[1][1] * local_130._s_0.Y + param_2->M[0][1] * local_130._s_0.X +
                       param_2->M[2][1] * local_130._s_0.Z + param_2->M[3][1] * dVar16;
              local_c8 = param_2->M[1][2] * local_130._s_0.Y + param_2->M[0][2] * local_130._s_0.X +
                         param_2->M[2][2] * local_130._s_0.Z + param_2->M[3][2] * dVar16;
            }
            iVar20 = (param_4->InstancePerViewDataIndices).ArrayNum;
            if (iVar20 != 0) {
              if ((iVar20 != (param_4->InstanceData).ArrayNum) &&
                 (bVar19 = FDebug::CheckVerifyFailedImpl2
                                     ("OutParticleLights.InstancePerViewDataIndices.Num() == OutParticleLights.InstanceData.Num()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                      ,0x279,L""), bVar19)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_168.bHasPerViewData = 0;
              local_168.PerViewIndex = (param_4->PerViewData).ArrayNum;
              pFVar5 = (param_4->InstancePerViewDataIndices).AllocatorInstance.Data;
              if (((pFVar5 <= &local_168) &&
                  (&local_168 < pFVar5 + (param_4->InstancePerViewDataIndices).ArrayMax)) &&
                 (bVar19 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar20 = (param_4->InstancePerViewDataIndices).ArrayNum;
              piVar2 = &(param_4->InstancePerViewDataIndices).ArrayMax;
              if (iVar20 == *piVar2) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightInstacePerViewIndexData>_>
                                   (0x408,&(param_4->InstancePerViewDataIndices).AllocatorInstance,
                                    piVar2);
              }
              (param_4->InstancePerViewDataIndices).ArrayNum = iVar20 + 1;
              FVar14.bHasPerViewData = local_168.bHasPerViewData;
              FVar14._0_4_ = local_168._0_4_;
              (param_4->InstancePerViewDataIndices).AllocatorInstance.Data[iVar20] = FVar14;
            }
            pTVar6 = (TVector<double>_u_0 *)(param_4->PerViewData).AllocatorInstance.Data;
            local_118._8_4_ = (int)uVar13;
            local_118._s_0.X = (double)uVar12;
            local_118._12_4_ = (int)((ulonglong)uVar13 >> 0x20);
            local_118._s_0.Z = local_c8;
            if (((pTVar6 <= &local_118) && (&local_118 < pTVar6 + (param_4->PerViewData).ArrayMax))
               && (bVar19 = FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar20 = (param_4->PerViewData).ArrayNum;
            piVar2 = &(param_4->PerViewData).ArrayMax;
            if (iVar20 == *piVar2) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightPerViewEntry>_>
                                 (0x818,&(param_4->PerViewData).AllocatorInstance,piVar2);
            }
            (param_4->PerViewData).ArrayNum = iVar20 + 1;
            pFVar7 = (param_4->PerViewData).AllocatorInstance.Data;
            pFVar3 = pFVar7 + iVar20;
            (pFVar3->Position).field0_0x0._s_0.X = local_118._s_0.X;
            (pFVar3->Position).field0_0x0._s_0.Y = local_118._s_0.Y;
            pFVar7[iVar20].Position.field0_0x0._s_0.Z = local_118._s_0.Z;
            pTVar8 = (TVector<float>_u_0 *)(param_4->InstanceData).AllocatorInstance.Data;
            if (((pTVar8 <= &local_160) && (&local_160 < pTVar8 + (longlong)*piVar1 * 4)) &&
               (bVar19 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar20 = (param_4->InstanceData).ArrayNum;
            if (iVar20 == *piVar1) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightEntry>_>
                                 (0x830,(ForElementType<FSimpleLightEntry> *)param_4,piVar1);
            }
            (param_4->InstanceData).ArrayNum = iVar20 + 1;
            pFVar9 = (param_4->InstanceData).AllocatorInstance.Data;
            *(ulonglong *)&pFVar9[iVar20].Color.field0_0x0 =
                 CONCAT44(local_160._s_0.Y,local_160._s_0.X);
            *(ulonglong *)((longlong)&pFVar9[iVar20].Color.field0_0x0 + 8) =
                 CONCAT44(fStack_154,local_160._s_0.Z);
            pFVar15 = pFVar9 + iVar20;
            pFVar15->Exponent = (float)local_150;
            pFVar15->InverseExposureBlend = (float)uStack_14c;
            *(ulonglong *)(&pFVar15->Exponent + 2) = CONCAT44(uStack_144,fStack_148);
            pFVar9 = pFVar9 + iVar20;
            pFVar9->DiffuseScale = (float)local_140;
            pFVar9->bAffectTranslucency = (bool)uStack_13c;
            pFVar9->bAllowMegaLights = (bool)(char)uStack_13b;
            pFVar9->bMegaLightsCastShadows = (bool)(char)((ushort)uStack_13b >> 8);
            pFVar9->field_0x27 = uStack_139;
            *(FSimpleLightId *)(&pFVar9->DiffuseScale + 2) = FStack_138;
            lVar24 = local_100;
            lVar25 = local_f8;
          }
        }
LAB_1481f402d:
        lVar26 = lVar26 + 1;
      } while (lVar26 < iVar27);
    }
  }
  return;
}

// GetByteSizePerPixel @ 1481f48f0

uint __cdecl GetByteSizePerPixel(ETextureSourceFormat param_1)

{
  switch(param_1) {
  case TSF_G8:
    return 1;
  case TSF_BGRA8:
  case TSF_R32F:
    return 4;
  default:
    return 0;
  case TSF_RGBA16:
  case TSF_RGBA16F:
    return 8;
  case TSF_RGBA32F:
    return 0x10;
  }
}

// GetDebugDebugName @ 1481f5580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> * __cdecl
GetDebugDebugName(TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *__return_storage_ptr__,
                 UPrimitiveComponent *param_1,UObject *param_2,UBodySetup *param_3,FString *param_4)

{
  ushort uVar1;
  bool bVar2;
  FName *pFVar3;
  FString *pFVar4;
  UPackage *pUVar5;
  FName FVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  FName local_res8;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  lVar8 = 0;
  local_res8 = (FName)__return_storage_ptr__;
  FString::Reset(param_4,0);
  __return_storage_ptr__->Object = (TArray<char,TSizedDefaultAllocator<32>_> *)0x0;
  pwVar9 = L"";
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  iVar11 = 0;
  if (param_1 == (UPrimitiveComponent *)0x0) {
    if (param_2 != (UObject *)0x0) {
      local_res8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_res8.Number = *(uint *)&param_2->field_0x1c;
      if (*(longlong *)&param_2->field_0x20 == 0) {
        FName::ToString(&local_res8,&local_78);
        FString::PrintfImpl(&local_68,L"%s ");
        iVar12 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar12 = iVar11;
        }
        FString::AppendChars(param_4,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar12);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      else {
        FName::ToString(&local_res8,&local_88);
        local_res8 = *(FName *)(*(longlong *)&param_2->field_0x20 + 0x18);
        FName::ToString(&local_res8,&local_78);
        FString::PrintfImpl(&local_68,L"%s %s ");
        iVar12 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar12 = iVar11;
        }
        FString::AppendChars(param_4,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar12);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((FName)local_88.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    pFVar3 = (FName *)UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0);
    if (pFVar3[1].ComparisonIndex.Value == 0) {
      local_res10 = (FName)0x15060d16c;
    }
    else {
      local_res10 = *pFVar3;
    }
    if (*(longlong *)&param_1->field_0xa8 == 0) {
      pFVar4 = FString::FString(&local_58,L"NULL");
      FVar10.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_88.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(*(longlong *)&param_1->field_0xa8 + 0x18);
      FName::ToString((FName *)&local_88,&local_78);
      FVar10.Data = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
    }
    FString::PrintfImpl(&local_68,L"%s %s ");
    iVar12 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    FString::AppendChars(param_4,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar12);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    __return_storage_ptr__ = (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)local_res8;
    if ((*(UObjectBase **)&param_1->field_0xa8 != (UObjectBase *)0x0) &&
       (pUVar5 = UObjectBase::GetExternalPackage(*(UObjectBase **)&param_1->field_0xa8),
       __return_storage_ptr__ = (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)local_res8
       , pUVar5 != (UPackage *)0x0)) {
      local_res10 = (FName)pUVar5->_padding_;
      FName::ToString(&local_res10,&local_78);
      FString::PrintfImpl(&local_68,L"%s ");
      iVar12 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar12 = iVar11;
      }
      FString::AppendChars(param_4,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar12);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      __return_storage_ptr__ = (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)local_res8;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        __return_storage_ptr__ =
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)local_res8;
      }
    }
  }
  if (param_3->_padding_ != 0) {
    FName::ToString((FName *)&param_3->_padding_,&local_48);
    FString::PrintfImpl(&local_68,L"Bone: \'%s\' ");
    iVar12 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar12 = iVar11;
    }
    FString::AppendChars(param_4,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar12);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = (FName)operator_new(0x10);
  if (FVar6 == (FName)0x0) {
    FVar6.ComparisonIndex.Value = 0;
    FVar6.Number = 0;
  }
  else {
    iVar11 = (param_4->Data).ArrayNum;
    iVar12 = 1;
    if (iVar11 != 0) {
      pwVar9 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
      iVar12 = iVar11;
    }
    *(FScriptContainerElement **)FVar6 = (FScriptContainerElement *)0x0;
    *(int *)&((ForAnyElementType *)((longlong)FVar6 + 8))->Data = 0;
    *(int *)((longlong)FVar6 + 0xc) = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar12,(ForAnyElementType *)FVar6,(int *)((longlong)FVar6 + 8),
               (int *)((longlong)FVar6 + 0xc));
    FVar10.Data = *(FScriptContainerElement **)FVar6;
    bVar2 = false;
    lVar7 = lVar8;
    if (0 < iVar12) {
      do {
        uVar1 = *(ushort *)((longlong)pwVar9 + lVar7 * 2);
        FVar10.Data[lVar7] = SUB21(uVar1,0);
        lVar7 = lVar7 + 1;
        bVar2 = (bool)(bVar2 | 0x7f < uVar1);
      } while (lVar7 < iVar12);
      if (bVar2) {
        do {
          if (0x7f < *(ushort *)((longlong)pwVar9 + lVar8 * 2)) {
            FVar10.Data[lVar8] = (FScriptContainerElement)0x3f;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar12);
      }
    }
  }
  local_res8 = FVar6;
  TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1>::
  operator=<TArray<char,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TRawPtrProxy<TArray<char,TSizedDefaultAllocator<32>_>_> *)&local_res8);
  return (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)(FName)__return_storage_ptr__;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 1481fab10

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FParticleSpriteUniformParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FParticleSpriteUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FParticleSpriteUniformParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FParticleSpriteUniformParameters",
                 L"FParticleSpriteUniformParameters",L"SpriteVF",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleVertexFactory.h"
                 ,0x47,0xb0,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FParticleSpriteUniformParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetInitialLinearVelocity @ 1481fae60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __cdecl
GetInitialLinearVelocity(TVector<double> *__return_storage_ptr__,AActor *param_1,bool *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined1 local_28 [32];
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  if (param_1 != (AActor *)0x0) {
    pdVar4 = (double *)(**(code **)(param_1->_padding_ + 0x360))(param_1,local_28);
    dVar2 = pdVar4[1];
    dVar1 = pdVar4[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
    dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
    dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    if (__real_3e45798ec0000000 < dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3) {
      *param_2 = true;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetNumSimShapes_AssumesLocked @ 1481fc9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl GetNumSimShapes_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ForElementType<FPhysicsShapeReference_Chaos> FVar5;
  ForElementType<FPhysicsShapeReference_Chaos> FVar6;
  int iVar7;
  undefined1 auStack_248 [32];
  undefined1 local_228 [8];
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_220;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_220.ArrayMax = 0x20;
  local_220.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
  local_220.ArrayNum = 0;
  FChaosEngineInterface::GetAllShapes_AssumedLocked(param_1,&local_220);
  iVar1 = local_220.ArrayNum;
  uVar4 = (ulonglong)local_220.ArrayNum;
  FVar5 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_220;
  if (local_220.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    FVar5 = local_220.AllocatorInstance.SecondaryData;
  }
  FVar6 = (ForElementType<FPhysicsShapeReference_Chaos>)(uVar4 * 0x10 + (longlong)FVar5);
  iVar7 = 0;
  while( true ) {
    if ((uint)uVar4 != iVar1) {
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_228);
    }
    if (FVar5 == FVar6) break;
    bVar2 = FChaosEngineInterface::IsSimulationShape((FPhysicsShapeReference_Chaos *)FVar5);
    uVar4 = (ulonglong)(uint)local_220.ArrayNum;
    iVar3 = iVar7 + 1;
    if (!bVar2) {
      iVar3 = iVar7;
    }
    FVar5 = (ForElementType<FPhysicsShapeReference_Chaos>)((longlong)FVar5 + 0x10);
    iVar7 = iVar3;
  }
  if (local_220.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    FMemory::Free((void *)local_220.AllocatorInstance.SecondaryData);
  }
  return iVar7;
}

// GetParticleSize @ 1481fd520

TVector2<double> * __cdecl
GetParticleSize(TVector2<double> *__return_storage_ptr__,FBaseParticle *param_1,
               FDynamicSpriteEmitterReplayDataBase *param_2)

{
  float fVar1;
  float fVar2;
  uchar uVar3;
  double dVar4;
  
  uVar3 = param_2->ScreenAlignment;
  dVar4 = (double)(float)((uint)((param_1->Size).field0_0x0._s_0.X * *(float *)&param_2->_padding_)
                         & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = (param_1->Size).field0_0x0._s_0.Y;
  fVar2 = *(float *)((longlong)&param_2->_padding_ + 4);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(float)((uint)(fVar1 * fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (((uVar3 == '\x01') || (uVar3 == '\0')) || (uVar3 == '\x06')) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  }
  return __return_storage_ptr__;
}

// GetRandomLineIndex @ 1481fe150

int __cdecl GetRandomLineIndex(int param_1,int param_2,FRandomStream *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_3->Seed * 0xbb38435 + 0x3619636b;
  param_3->Seed = uVar2;
  iVar3 = (int)((float)(param_2 - param_1) * ((float)(uVar2 >> 9 | 0x3f800000) - __real_3f800000)) +
          param_1;
  iVar1 = param_2 + -1;
  if (iVar3 < param_2 + -1) {
    iVar1 = iVar3;
  }
  return iVar1;
}

// GetSimulatingAndBlendWeight @ 1481fecb0

void __cdecl
GetSimulatingAndBlendWeight
          (USkeletalMeshComponent *param_1,UBodySetup *param_2,float *param_3,bool *param_4)

{
  int iVar1;
  char cVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  bool bVar5;
  
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    bVar5 = (char)param_2->_padding_ == '\x02';
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->_padding_);
    if (pUVar3 == (UObject *)0x0) {
LAB_1481fed31:
      cVar2 = *(char *)((longlong)&param_1->_padding_ + 7);
    }
    else {
      if ((*(longlong *)&pUVar3[4].field_0x8 != 0) &&
         ((*(byte *)(*(longlong *)&pUVar3[4].field_0x8 + 0x5d) & 1) == 0)) goto LAB_1481fed49;
      pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_1481fed31;
      cVar2 = pUVar3[0x17].field_0xf;
    }
    if ((cVar2 != '\x02') && (cVar2 != '\x03')) goto LAB_1481fed49;
    cVar2 = (char)param_2->_padding_;
    if (cVar2 != '\x02') {
      if (cVar2 != '\0') goto LAB_1481fed49;
      bVar5 = false;
      if ((param_1->_padding_ & 1) == 0) goto LAB_1481fed9d;
    }
    bVar5 = true;
  }
LAB_1481fed9d:
  if (bVar5) {
    *param_4 = true;
    if ((char)param_2->_padding_ != '\x02') {
      return;
    }
    *param_3 = 1.0;
    return;
  }
LAB_1481fed49:
  *param_4 = false;
  if ((char)param_2->_padding_ == '\x02') {
    *param_3 = 0.0;
  }
  return;
}

// GetUnrealWorldTransformImp_AssumesLocked @ 1481ffdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
GetUnrealWorldTransformImp_AssumesLocked
          (TTransform<double> *__return_storage_ptr__,FBodyInstance *param_1,bool param_2,
          bool param_3)

{
  FBodyInstanceDelegatesPtr this;
  atomic<unsigned___int64> aVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_c8 [32];
  FSingleParticlePhysicsProxy *local_a8;
  FReadAccessScope local_a0;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((param_1 != (FBodyInstance *)0x0) &&
     (local_a8 = param_1->ActorHandle, local_a8 != (FSingleParticlePhysicsProxy *)0x0)) {
    pTVar3 = FChaosEngineInterface::GetTransform_AssumesLocked(&local_88,&local_a8,param_3);
    dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
    if ((param_2) && (this = param_1->BodyInstanceDelegates, this != (FBodyInstanceDelegatesPtr)0x0)
       ) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_a0);
      if ((*(int *)&(((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     ((longlong)this + 0x10))->AccessDetector).State != 0) &&
         (aVar1 = (((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8))
                  ->AccessDetector).State, aVar1 != (atomic<unsigned___int64>)0x0)) {
        (**(code **)(*(longlong *)aVar1 + 0x68))(aVar1,param_1,__return_storage_ptr__);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a0);
    }
  }
  return __return_storage_ptr__;
}

// InitMeshParticleVertexFactoryComponents @ 148202e60

void __cdecl
InitMeshParticleVertexFactoryComponents
          (FMeshParticleVertexFactory *param_1,FStaticMeshLODResources *param_2,FDataType *param_3)

{
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&(param_2->VertexBuffers).PositionVertexBuffer,(FVertexFactory *)param_1,
             (FStaticMeshDataType *)param_3);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&(param_2->VertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)param_1,
             (FStaticMeshDataType *)param_3);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            (&(param_2->VertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)param_1,
             (FStaticMeshDataType *)param_3,4);
  FColorVertexBuffer::BindColorVertexBuffer
            (&(param_2->VertexBuffers).ColorVertexBuffer,(FVertexFactory *)param_1,
             (FStaticMeshDataType *)param_3);
  (param_3->ParticleColorComponent).VertexBuffer = (FVertexBuffer *)0x0;
  (param_3->ParticleColorComponent).StreamOffset = 0;
  (param_3->ParticleColorComponent).Offset = '\0';
  (param_3->ParticleColorComponent).Stride = '\0';
  (param_3->ParticleColorComponent).Type = '\x04';
  (param_3->ParticleColorComponent).VertexStreamUsage = Instancing;
  param_3->TransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
  param_3->TransformComponent[0].StreamOffset = 0;
  param_3->TransformComponent[0].Offset = '\x10';
  param_3->TransformComponent[0].Stride = '\0';
  param_3->TransformComponent[0].Type = '\x04';
  param_3->TransformComponent[0].VertexStreamUsage = Instancing;
  param_3->TransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
  param_3->TransformComponent[1].StreamOffset = 0;
  param_3->TransformComponent[1].Offset = ' ';
  param_3->TransformComponent[1].Stride = '\0';
  param_3->TransformComponent[1].Type = '\x04';
  param_3->TransformComponent[1].VertexStreamUsage = Instancing;
  param_3->TransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
  param_3->TransformComponent[2].StreamOffset = 0;
  param_3->TransformComponent[2].Offset = '0';
  param_3->TransformComponent[2].Stride = '\0';
  param_3->TransformComponent[2].Type = '\x04';
  param_3->TransformComponent[2].VertexStreamUsage = Instancing;
  (param_3->VelocityComponent).VertexBuffer = (FVertexBuffer *)0x0;
  (param_3->VelocityComponent).StreamOffset = 0;
  (param_3->VelocityComponent).Offset = '@';
  (param_3->VelocityComponent).Stride = '\0';
  (param_3->VelocityComponent).Type = '\x04';
  (param_3->VelocityComponent).VertexStreamUsage = Instancing;
  (param_3->SubUVs).VertexBuffer = (FVertexBuffer *)0x0;
  (param_3->SubUVs).StreamOffset = 0;
  (param_3->SubUVs).Offset = 'P';
  (param_3->SubUVs).Stride = '\0';
  (param_3->SubUVs).Type = '\n';
  (param_3->SubUVs).VertexStreamUsage = Instancing;
  (param_3->SubUVLerpAndRelTime).VertexBuffer = (FVertexBuffer *)0x0;
  (param_3->SubUVLerpAndRelTime).StreamOffset = 0;
  (param_3->SubUVLerpAndRelTime).Offset = 'X';
  (param_3->SubUVLerpAndRelTime).Stride = '\0';
  (param_3->SubUVLerpAndRelTime).Type = '\x02';
  (param_3->SubUVLerpAndRelTime).VertexStreamUsage = Instancing;
  param_3->bInitialized = true;
  return;
}

// IsBodyDynamic @ 148205630

bool __cdecl IsBodyDynamic(FSingleParticlePhysicsProxy **param_1,bool param_2)

{
  EObjectStateType EVar1;
  TGeometryParticle<double,3> *pTVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  FSingleParticlePhysicsProxy *this;
  FSingleParticlePhysicsProxy *this_00;
  
  this_00 = *param_1;
  if (param_2) {
    this = (FSingleParticlePhysicsProxy *)0x0;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = this;
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
    pFVar3 = this;
    if (*(char *)((longlong)&((FSingleParticlePhysicsProxy *)this_00->Handle)->_padding_ + 4) !=
        '\0') {
      pFVar3 = (FSingleParticlePhysicsProxy *)this_00->Handle;
    }
    if (pFVar3 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_1482056b5:
      EVar1 = Static;
      goto LAB_1482056b7;
    }
    if (1 < *(byte *)((longlong)&pFVar3->_padding_ + 4)) {
      this = pFVar3;
    }
    if (this != (FSingleParticlePhysicsProxy *)0x0) {
      EVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this);
      goto LAB_1482056b7;
    }
  }
  else {
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
    pTVar2 = (this_00->Particle).Ptr;
    if (pTVar2->Type == Static) {
      pTVar2 = (TGeometryParticle<double,3> *)0x0;
    }
    if (pTVar2 == (TGeometryParticle<double,3> *)0x0) goto LAB_1482056b5;
    if (Kinematic < pTVar2->Type) {
      EVar1 = *(EObjectStateType *)&pTVar2[2].MNonFrequentData.Property.MSpatialIdx;
      goto LAB_1482056b7;
    }
  }
  EVar1 = Kinematic;
LAB_1482056b7:
  if ((EVar1 != Dynamic) && (EVar1 != Sleeping)) {
    return false;
  }
  return true;
}

// IsRigidBodyKinematic_AssumesLocked @ 148205ce0

bool __cdecl IsRigidBodyKinematic_AssumesLocked(FSingleParticlePhysicsProxy **param_1)

{
  bool bVar1;
  
  bVar1 = FChaosEngineInterface::IsRigidBody(param_1);
  if (bVar1) {
    bVar1 = FChaosEngineInterface::IsKinematic_AssumesLocked(param_1);
    return bVar1;
  }
  return false;
}

// IsSupportedFormat @ 148205de0

bool __cdecl IsSupportedFormat(ETextureSourceFormat param_1)

{
  if ((param_1 < TSF_MAX) && ((0xa36U >> (param_1 & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// IsValidUV @ 148205e90

bool __cdecl IsValidUV(TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((0.0 <= dVar1) && (dVar1 <= __real_3ff0000000000000)) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y, 0.0 <= dVar1)) && (dVar1 <= __real_3ff0000000000000)) {
    return true;
  }
  return false;
}

// LexToString @ 148206930

wchar_t * __cdecl LexToString(EEncryptionResponse param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Failure:
    return L"Failure";
  case Success:
    return L"Success";
  case InvalidToken:
    return L"InvalidToken";
  case NoKey:
    return L"NoKey";
  case SessionIdMismatch:
    return L"SessionIdMismatch";
  case InvalidParams:
    return L"InvalidParams";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetworkDelegates.h"
                     ,0x7d,L"Missing EncryptionResponse Type: %d");
  if (!bVar2) {
    return L"";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// QualityLevelToFName @ 14820bf80

FName __cdecl QualityLevelProperty::QualityLevelToFName(int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint uVar4;
  uint in_register_0000000c;
  undefined8 uVar5;
  uint in_EDX;
  
  FVar3.Number = in_register_0000000c;
  FVar3.ComparisonIndex.Value = param_1;
  uVar5 = 0;
  if (in_EDX < 5) {
    uVar4 = 0;
    if ((int)in_EDX < QualityLevelNames.ArrayNum) {
      uVar4 = ~in_EDX >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    uVar5 = *(undefined8 *)(QualityLevelNames.AllocatorInstance.Data + (longlong)(int)in_EDX * 8);
  }
  *(undefined8 *)FVar3 = uVar5;
  return FVar3;
}

// RootSpaceToWeldedSpace @ 148214850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
RootSpaceToWeldedSpace
          (TTransform<double> *__return_storage_ptr__,FBodyInstance *param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  undefined1 auStack_238 [32];
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  if (param_1->WeldParent != (FBodyInstance *)0x0) {
    pUVar5 = FWeakObjectPtr::Get(&(param_1->WeldParent->OwnerComponent).WeakPtr);
    pUVar6 = FWeakObjectPtr::Get(&(param_1->OwnerComponent).WeakPtr);
    if ((pUVar5 != (UObject *)0x0) && (pUVar6 != (UObject *)0x0)) {
      local_f8.Rotation.XY.m128d_f64[0] = *(double *)&pUVar5[0xc].field_0x10;
      local_f8.Rotation.XY.m128d_f64[1] = *(double *)&pUVar5[0xc].field_0x18;
      local_f8.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar5[0xc].field_0x20;
      local_f8.Rotation.ZW.m128d_f64[1] = *(double *)(pUVar5 + 0xd);
      local_f8.Translation.XY.m128d_f64[0] = *(double *)&pUVar5[0xd].field_0x8;
      local_f8.Translation.XY.m128d_f64[1] = *(double *)&pUVar5[0xd].field_0x10;
      local_f8.Translation.ZW.m128d_f64[0] = *(double *)&pUVar5[0xd].field_0x18;
      local_f8.Translation.ZW.m128d_f64[1] = *(double *)&pUVar5[0xd].field_0x20;
      local_f8.Scale3D.XY.m128d_f64[0] = *(double *)(pUVar5 + 0xe);
      local_f8.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar5[0xe].field_0x8;
      local_f8.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar5[0xe].field_0x10;
      local_f8.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar5[0xe].field_0x18;
      local_158.Rotation.XY.m128d_f64[0] = *(double *)&pUVar6[0xc].field_0x10;
      local_158.Rotation.XY.m128d_f64[1] = *(double *)&pUVar6[0xc].field_0x18;
      local_158.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar6[0xc].field_0x20;
      local_158.Rotation.ZW.m128d_f64[1] = *(double *)(pUVar6 + 0xd);
      local_158.Translation.XY.m128d_f64[0] = *(double *)&pUVar6[0xd].field_0x8;
      local_158.Translation.XY.m128d_f64[1] = *(double *)&pUVar6[0xd].field_0x10;
      local_158.Translation.ZW.m128d_f64[0] = *(double *)&pUVar6[0xd].field_0x18;
      local_158.Translation.ZW.m128d_f64[1] = *(double *)&pUVar6[0xd].field_0x20;
      local_158.Scale3D.XY.m128d_f64[0] = *(double *)(pUVar6 + 0xe);
      local_158.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar6[0xe].field_0x8;
      local_158.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar6[0xe].field_0x10;
      local_158.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar6[0xe].field_0x18;
      UE::Math::TTransform<double>::GetRelativeTransform(&local_f8,&local_98,&local_158);
      local_1b8.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      local_1b8.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
      local_1b8.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      local_1b8.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
      local_1b8.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_1b8.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_1b8.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_1b8.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      local_1b8.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).field0_0x0._s_0.X;
      local_1b8.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).field0_0x0._s_0.Y;
      local_1b8.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).field0_0x0._s_0.Z;
      local_1b8.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_218.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_218.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_218.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_218.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_218.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_218.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_218,&local_98,&local_1b8);
      uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_218.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_218.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)uVar2;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)uVar3;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)uVar4;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
      return __return_storage_ptr__;
    }
  }
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// TrailsBase_CalculateTangent @ 1482222f0

void __cdecl
TrailsBase_CalculateTangent
          (FBaseParticle *param_1,FRibbonTypeDataPayload *param_2,FBaseParticle *param_3,
          FRibbonTypeDataPayload *param_4,float param_5,FRibbonTypeDataPayload *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  fVar5 = *(float *)&param_2->field_0xc - *(float *)&param_4->field_0xc;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  dVar2 = (param_3->Location).field0_0x0._s_0.Y;
  dVar3 = (param_1->Location).field0_0x0._s_0.Z;
  dVar4 = (param_3->Location).field0_0x0._s_0.Z;
  fVar6 = __real_3b51b717;
  if (fVar5 != 0.0) {
    fVar6 = (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  }
  dVar9 = __real_3ff0000000000000 / (double)fVar6;
  dVar8 = (double)param_5;
  dVar7 = (double)(__real_3f800000 / (float)*(int *)&param_6->field_0x18);
  (param_6->Tangent).field0_0x0._s_0.X =
       (float)(dVar7 * dVar8 *
              dVar9 * ((param_1->Location).field0_0x0._s_0.X - (param_3->Location).field0_0x0._s_0.X
                      ));
  (param_6->Tangent).field0_0x0._s_0.Y = (float)(dVar7 * dVar8 * dVar9 * (dVar1 - dVar2));
  (param_6->Tangent).field0_0x0._s_0.Z = (float)(dVar7 * dVar8 * dVar9 * (dVar3 - dVar4));
  return;
}

// ValidateTransformMirror @ 148227230

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ValidateTransformMirror(TTransform<double> *param_1,FString *param_2,bool param_3,bool param_4)

{
  float fVar1;
  
  fVar1 = (float)((param_1->Scale3D).XY.m128d_f64[1] * (param_1->Scale3D).XY.m128d_f64[0] *
                 (param_1->Scale3D).ZW.m128d_f64[0]);
  if (0.0 <= fVar1) {
    if (fVar1 <= 0.0) {
      return true;
    }
    if (param_4) {
      return true;
    }
    if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
    }
  }
  else {
    if (param_3) {
      return true;
    }
    if (2 < (byte)LogPhysics._0_1_) {
      if ((param_2->Data).ArrayNum == 0) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
      return false;
    }
  }
  return false;
}

// ValidateTransformNaN @ 148227300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ValidateTransformNaN(TTransform<double> *param_1,FString *param_2,FName *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar12;
  double dVar11;
  uint uVar13;
  uint uVar15;
  double dVar14;
  FString local_28;
  FString local_18;
  
  uVar10 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar12 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar13 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar15 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar11 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar14 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar9 = -(ulonglong)
           ((double)CONCAT44(uVar15 & *(uint *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 0xc),
                             uVar13 & *(uint *)((param_1->Rotation).ZW.m128d_f64 + 1)) == dVar14);
  auVar1._8_4_ = (int)lVar9;
  auVar1._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar12 & *(uint *)((longlong)(param_1->Rotation).ZW.m128d_f64 +
                                                      4),
                                    uVar10 & *(uint *)(param_1->Rotation).ZW.m128d_f64) == dVar11);
  auVar1._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  uVar8 = movmskpd((int)param_1,auVar1);
  lVar9 = -(ulonglong)
           ((double)CONCAT44(uVar15 & *(uint *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc),
                             uVar13 & *(uint *)((param_1->Rotation).XY.m128d_f64 + 1)) == dVar14);
  auVar4._8_4_ = (int)lVar9;
  auVar4._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar12 & *(uint *)((longlong)(param_1->Rotation).XY.m128d_f64 +
                                                      4),
                                    uVar10 & *(uint *)(param_1->Rotation).XY.m128d_f64) == dVar11);
  auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  iVar7 = movmskpd(in_EAX,auVar4);
  if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
    lVar9 = -(ulonglong)
             ((double)CONCAT44(uVar15 & *(uint *)((longlong)(param_1->Translation).ZW.m128d_f64 +
                                                 0xc),
                               uVar13 & *(uint *)((param_1->Translation).ZW.m128d_f64 + 1)) ==
             dVar14);
    auVar2._8_4_ = (int)lVar9;
    auVar2._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar12 & *(uint *)((longlong)
                                                         (param_1->Translation).ZW.m128d_f64 + 4),
                                      uVar10 & *(uint *)(param_1->Translation).ZW.m128d_f64) ==
                    dVar11);
    auVar2._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar8 = movmskpd(0,auVar2);
    lVar9 = -(ulonglong)
             ((double)CONCAT44(uVar15 & *(uint *)((longlong)(param_1->Translation).XY.m128d_f64 +
                                                 0xc),
                               uVar13 & *(uint *)((param_1->Translation).XY.m128d_f64 + 1)) ==
             dVar14);
    auVar5._8_4_ = (int)lVar9;
    auVar5._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar12 & *(uint *)((longlong)
                                                         (param_1->Translation).XY.m128d_f64 + 4),
                                      uVar10 & *(uint *)(param_1->Translation).XY.m128d_f64) ==
                    dVar11);
    auVar5._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    iVar7 = movmskpd(iVar7,auVar5);
    if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
      lVar9 = -(ulonglong)
               ((double)CONCAT44(uVar15 & *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc)
                                 ,uVar13 & *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1)) == dVar14
               );
      auVar3._8_4_ = (int)lVar9;
      auVar3._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar12 & *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64
                                                          + 4),
                                        uVar10 & *(uint *)(param_1->Scale3D).ZW.m128d_f64) == dVar11
                      );
      auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      uVar8 = movmskpd(0,auVar3);
      lVar9 = -(ulonglong)
               ((double)CONCAT44(uVar15 & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc)
                                 ,uVar13 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1)) == dVar14
               );
      auVar6._8_4_ = (int)lVar9;
      auVar6._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar12 & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64
                                                          + 4),
                                        uVar10 & *(uint *)(param_1->Scale3D).XY.m128d_f64) == dVar11
                      );
      auVar6._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      iVar7 = movmskpd(iVar7,auVar6);
      if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
        return true;
      }
    }
  }
  if (2 < (byte)LogPhysics._0_1_) {
    UE::Math::TTransform<double>::ToString(param_1,&local_18);
    FName::ToString(param_3,&local_28);
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ValidateTransformScale @ 148227460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ValidateTransformScale(TTransform<double> *param_1,FString *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
  if ((((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         *(uint *)(param_1->Scale3D).XY.m128d_f64 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      && ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      ) && ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) {
    if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPhysics);
    }
    return false;
  }
  return true;
}

// Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister @ 1482277a0

UClass * __cdecl Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncPhysicsInputComponent",
               &Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton,
               UAsyncPhysicsInputComponent::StaticRegisterNativesUAsyncPhysicsInputComponent,0xe8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAsyncPhysicsInputComponent>,
               InternalVTableHelperCtorCaller<UAsyncPhysicsInputComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.InnerSingleton;
}

// Z_Construct_UClass_UPendingNetGame_NoRegister @ 148227860

UClass * __cdecl Z_Construct_UClass_UPendingNetGame_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UPendingNetGame::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PendingNetGame",
               &Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton,
               UPendingNetGame::StaticRegisterNativesUPendingNetGame,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPendingNetGame>,InternalVTableHelperCtorCaller<UPendingNetGame>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton;
}

// Z_Construct_UClass_USubUVAnimation_NoRegister @ 148227870

UClass * __cdecl Z_Construct_UClass_USubUVAnimation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubUVAnimation",
               &Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton,
               USubUVAnimation::StaticRegisterNativesUSubUVAnimation,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubUVAnimation>,
               InternalVTableHelperCtorCaller<USubUVAnimation>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubUVAnimation.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EPSCPoolMethod @ 148227920

UEnum * __cdecl Z_Construct_UEnum_Engine_EPSCPoolMethod(void)

{
  if (Z_Registration_Info_UEnum_EPSCPoolMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPSCPoolMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPSCPoolMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPSCPoolMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EPerQualityLevels @ 148227960

UEnum * __cdecl Z_Construct_UEnum_Engine_EPerQualityLevels(void)

{
  if (Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBodyInstance @ 1482279a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBodyInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBodyInstance.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBodyInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FBodyInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBodyInstance.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBodyInstance.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle @ 148227a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle.InnerSingleton
               ,&Z_Construct_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBodyInstanceAsyncPhysicsTickHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction @ 148227aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FParticleSystemWorldManagerTickFunction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FParticleSystemWorldManagerTickFunction.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FParticleSystemWorldManagerTickFunction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FParticleSystemWorldManagerTickFunction.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPerQualityLevelFloat @ 148227b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerQualityLevelFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerQualityLevelFloat.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerQualityLevelFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerQualityLevelFloat.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPerQualityLevelFloat.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPerQualityLevelInt @ 148227ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerQualityLevelInt(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerQualityLevelInt.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerQualityLevelInt.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerQualityLevelInt.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPerQualityLevelInt.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPSCPool @ 148227c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPSCPool(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPSCPool.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPSCPool.InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPSCPool_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPSCPool.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPSCPool.InnerSingleton;
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

// OnPawnBeginPlay'' @ 1503f8770

void __cdecl `dynamic_atexit_destructor_for_'APawn::OnPawnBeginPlay__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)APawn::OnPawnBeginPlay._8_8_,
             APawn::OnPawnBeginPlay._16_4_);
  if (APawn::OnPawnBeginPlay._8_8_ != 0) {
    FMemory::Free((void *)APawn::OnPawnBeginPlay._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&APawn::OnPawnBeginPlay);
  return;
}

// StaticType'' @ 1503f87b0

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

void __cdecl `dynamic_atexit_destructor_for_'FParticleSpriteVertexFactory::StaticType__(void)

{
  FVertexFactoryType::~FVertexFactoryType(&FParticleSpriteVertexFactory::StaticType);
  return;
}

// WorldManagers'' @ 1503f87d0

void __cdecl `dynamic_atexit_destructor_for_'FParticleSystemWorldManager::WorldManagers__(void)

{
  FParticleSystemWorldManager::WorldManagers._72_4_ = 0;
  if (FParticleSystemWorldManager::WorldManagers._64_8_ != 0) {
    FMemory::Free((void *)FParticleSystemWorldManager::WorldManagers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UWorld_*,FParticleSystemWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UWorld_*,FParticleSystemWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UWorld_*,FParticleSystemWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FParticleSystemWorldManager::WorldManagers);
  return;
}

// `dynamic_atexit_destructor_for_'BodiesStatic'' @ 1503f8810

void __cdecl
`FBodyInstance::InitStaticBodies'::__l2::_dynamic_atexit_destructor_for__BodiesStatic__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BodiesStatic.AllocatorInstance.Data;
  if (BodiesStatic.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BodiesStatic.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CDisableQueryOnlyActors'' @ 1503f8830

void __cdecl _dynamic_atexit_destructor_for__CDisableQueryOnlyActors__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CDisableQueryOnlyActors);
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_ParticleManagerAsyncTask'' @ 1503f8850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_ParticleManagerAsyncTask__(void)

{
  CPrio_ParticleManagerAsyncTask.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_ParticleManagerAsyncTask.Variable);
  if (CPrio_ParticleManagerAsyncTask.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_ParticleManagerAsyncTask.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_ParticleManagerAsyncTask.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_ParticleManagerAsyncTask.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowCreatePhysxBodies'' @ 1503f88a0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowCreatePhysxBodies__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowCreatePhysxBodies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClearPerShapeOverridesOnTerminate'' @ 1503f88c0

void __cdecl _dynamic_atexit_destructor_for__CVarClearPerShapeOverridesOnTerminate__(void)

{
  CVarClearPerShapeOverridesOnTerminate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarClearPerShapeOverridesOnTerminate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableCircularAnimTrailDump'' @ 1503f88e0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableCircularAnimTrailDump__(void)

{
  CVarEnableCircularAnimTrailDump._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableCircularAnimTrailDump);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableDynamicPerBodyFilterHacks'' @ 1503f8900

void __cdecl _dynamic_atexit_destructor_for__CVarEnableDynamicPerBodyFilterHacks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableDynamicPerBodyFilterHacks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnablePSCWorldManager'' @ 1503f8920

void __cdecl _dynamic_atexit_destructor_for__CVarEnablePSCWorldManager__(void)

{
  CVarEnablePSCWorldManager._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnablePSCWorldManager);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnsureUnweldModifiesGTOnly'' @ 1503f8940

void __cdecl _dynamic_atexit_destructor_for__CVarEnsureUnweldModifiesGTOnly__(void)

{
  CVarEnsureUnweldModifiesGTOnly._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnsureUnweldModifiesGTOnly);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXAllowParticleMeshLODs'' @ 1503f8960

void __cdecl _dynamic_atexit_destructor_for__CVarFXAllowParticleMeshLODs__(void)

{
  CVarFXAllowParticleMeshLODs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFXAllowParticleMeshLODs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXCascadeBeamRenderingEnabled'' @ 1503f8980

void __cdecl _dynamic_atexit_destructor_for__CVarFXCascadeBeamRenderingEnabled__(void)

{
  CVarFXCascadeBeamRenderingEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFXCascadeBeamRenderingEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXCascadeMeshRenderingEnabled'' @ 1503f89a0

void __cdecl _dynamic_atexit_destructor_for__CVarFXCascadeMeshRenderingEnabled__(void)

{
  CVarFXCascadeMeshRenderingEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFXCascadeMeshRenderingEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXCascadeSpriteRenderingEnabled'' @ 1503f89c0

void __cdecl _dynamic_atexit_destructor_for__CVarFXCascadeSpriteRenderingEnabled__(void)

{
  CVarFXCascadeSpriteRenderingEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarFXCascadeSpriteRenderingEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFXCascadeTrailRenderingEnabled'' @ 1503f89e0

void __cdecl _dynamic_atexit_destructor_for__CVarFXCascadeTrailRenderingEnabled__(void)

{
  CVarFXCascadeTrailRenderingEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFXCascadeTrailRenderingEnabled)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarFirstHighPriTickGroup'' @ 1503f8a00

void __cdecl
ParticleSystemWorldManagerInternal::_dynamic_atexit_destructor_for__CVarFirstHighPriTickGroup__
          (void)

{
  CVarFirstHighPriTickGroup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFirstHighPriTickGroup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceInputDrop'' @ 1503f8a20

void __cdecl InputCmdCVars::_dynamic_atexit_destructor_for__CVarForceInputDrop__(void)

{
  CVarForceInputDrop._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceInputDrop);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreAnalyticCollisionsOverride'' @ 1503f8a40

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreAnalyticCollisionsOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIgnoreAnalyticCollisionsOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxDistanceTessellation'' @ 1503f8a60

void __cdecl FXConsoleVariables::_dynamic_atexit_destructor_for__CVarMaxDistanceTessellation__(void)

{
  CVarMaxDistanceTessellation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxDistanceTessellation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxTangentTessellation'' @ 1503f8a80

void __cdecl FXConsoleVariables::_dynamic_atexit_destructor_for__CVarMaxTangentTessellation__(void)

{
  CVarMaxTangentTessellation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxTangentTessellation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarParticleManagerAsyncBatchSize'' @ 1503f8aa0

void __cdecl _dynamic_atexit_destructor_for__CVarParticleManagerAsyncBatchSize__(void)

{
  CVarParticleManagerAsyncBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarParticleManagerAsyncBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSensitiveSleepThresholdMultiplier'' @ 1503f8ac0

void __cdecl _dynamic_atexit_destructor_for__CVarSensitiveSleepThresholdMultiplier__(void)

{
  CVarSensitiveSleepThresholdMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSensitiveSleepThresholdMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSimCollisionEnabled'' @ 1503f8ae0

void __cdecl _dynamic_atexit_destructor_for__CVarSimCollisionEnabled__(void)

{
  CVarSimCollisionEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSimCollisionEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipRibbonSpawnInterp'' @ 1503f8b00

void __cdecl _dynamic_atexit_destructor_for__CVarSkipRibbonSpawnInterp__(void)

{
  CVarSkipRibbonSpawnInterp._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipRibbonSpawnInterp);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipShapeCreationForEmptyBodySetup'' @ 1503f8b20

void __cdecl _dynamic_atexit_destructor_for__CVarSkipShapeCreationForEmptyBodySetup__(void)

{
  CVarSkipShapeCreationForEmptyBodySetup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkipShapeCreationForEmptyBodySetup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarbEnableOverrideSolverDeltaTime'' @ 1503f8b40

void __cdecl _dynamic_atexit_destructor_for__CVarbEnableOverrideSolverDeltaTime__(void)

{
  CVarbEnableOverrideSolverDeltaTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarbEnableOverrideSolverDeltaTime)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarbPreventInvalidBodyInstanceTransforms'' @ 1503f8b60

void __cdecl _dynamic_atexit_destructor_for__CVarbPreventInvalidBodyInstanceTransforms__(void)

{
  CVarbPreventInvalidBodyInstanceTransforms._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarbPreventInvalidBodyInstanceTransforms);
  return;
}

// `dynamic_atexit_destructor_for_'CatmullRomEndParamOffset'' @ 1503f8b80

void __cdecl _dynamic_atexit_destructor_for__CatmullRomEndParamOffset__(void)

{
  CatmullRomEndParamOffset._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CatmullRomEndParamOffset);
  return;
}

// `dynamic_atexit_destructor_for_'DumpPSCPoolInfoCommand'' @ 1503f8ba0

void __cdecl _dynamic_atexit_destructor_for__DumpPSCPoolInfoCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpPSCPoolInfoCommand);
  return;
}

// `dynamic_atexit_destructor_for_'FParticleSpriteUniformParametersMetadataRegistration'' @ 1503f8bc0

void __cdecl
_dynamic_atexit_destructor_for__FParticleSpriteUniformParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GDumpPSCManStateCommand'' @ 1503f8bd0

void __cdecl _dynamic_atexit_destructor_for__GDumpPSCManStateCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpPSCManStateCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GFNullSubUVCutoutVertexBuffer'' @ 1503f8bf0

void __cdecl _dynamic_atexit_destructor_for__GFNullSubUVCutoutVertexBuffer__(void)

{
  GFNullSubUVCutoutVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFNullSubUVCutoutVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GFNullSubUVCutoutVertexBuffer);
  if (GFNullSubUVCutoutVertexBuffer._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GFNullSubUVCutoutVertexBuffer._40_8_);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&GFNullSubUVCutoutVertexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GHitchDeadTimeWindowCVar'' @ 1503f8c40

void __cdecl _dynamic_atexit_destructor_for__GHitchDeadTimeWindowCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GHitchDeadTimeWindowCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GHitchFrameTimeThresholdCVar'' @ 1503f8c60

void __cdecl _dynamic_atexit_destructor_for__GHitchFrameTimeThresholdCVar__(void)

{
  GHitchFrameTimeThresholdCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GHitchFrameTimeThresholdCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GHitchVersusNonHitchMinimumRatioCVar'' @ 1503f8c80

void __cdecl _dynamic_atexit_destructor_for__GHitchVersusNonHitchMinimumRatioCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GHitchVersusNonHitchMinimumRatioCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GMaxParticleInTrailCountWarningCS'' @ 1503f8ca0

void __cdecl _dynamic_atexit_destructor_for__GMaxParticleInTrailCountWarningCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f8ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GMaxParticleInTrailCountWarningCS);
  return;
}

// `dynamic_atexit_destructor_for_'GNullDynamicParameterVertexBuffer'' @ 1503f8cc0

void __cdecl _dynamic_atexit_destructor_for__GNullDynamicParameterVertexBuffer__(void)

{
  GNullDynamicParameterVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFNullDynamicParameterVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GNullDynamicParameterVertexBuffer);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&GNullDynamicParameterVertexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GParticleSpriteVertexDeclarationInstanced'' @ 1503f8d00

void __cdecl _dynamic_atexit_destructor_for__GParticleSpriteVertexDeclarationInstanced__(void)

{
  GParticleSpriteVertexDeclarationInstanced._0_8_ =
       &___7__TGlobalResource_VFParticleSpriteVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GParticleSpriteVertexDeclarationInstanced);
  GParticleSpriteVertexDeclarationInstanced._0_8_ = &___7FParticleSpriteVertexDeclaration__6B_;
  if (GParticleSpriteVertexDeclarationInstanced._32_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GParticleSpriteVertexDeclarationInstanced._32_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GParticleSpriteVertexDeclarationInstanced);
  return;
}

// `dynamic_atexit_destructor_for_'GParticleSpriteVertexDeclarationInstancedDynamic'' @ 1503f8d60

void __cdecl
_dynamic_atexit_destructor_for__GParticleSpriteVertexDeclarationInstancedDynamic__(void)

{
  GParticleSpriteVertexDeclarationInstancedDynamic._0_8_ =
       &___7__TGlobalResource_VFParticleSpriteVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource
            ((FRenderResource *)&GParticleSpriteVertexDeclarationInstancedDynamic);
  GParticleSpriteVertexDeclarationInstancedDynamic._0_8_ =
       &___7FParticleSpriteVertexDeclaration__6B_;
  if (GParticleSpriteVertexDeclarationInstancedDynamic._32_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GParticleSpriteVertexDeclarationInstancedDynamic._32_8_);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)&GParticleSpriteVertexDeclarationInstancedDynamic);
  return;
}

// `dynamic_atexit_destructor_for_'GTargetFrameTimeThresholdCVar'' @ 1503f8dc0

void __cdecl _dynamic_atexit_destructor_for__GTargetFrameTimeThresholdCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GTargetFrameTimeThresholdCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GUnacceptableFrameTimeThresholdCVar'' @ 1503f8de0

void __cdecl _dynamic_atexit_destructor_for__GUnacceptableFrameTimeThresholdCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GUnacceptableFrameTimeThresholdCVar);
  return;
}

// `dynamic_atexit_destructor_for_'LogDamage'' @ 1503f8e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDamage__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDamage);
  return;
}

// `dynamic_atexit_destructor_for_'LogPawn'' @ 1503f8e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPawn__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPawn);
  return;
}

// `dynamic_atexit_destructor_for_'NullName'' @ 1503f8e40

void __cdecl
`GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>'::__l2::
_dynamic_atexit_destructor_for__NullName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
               ::__l2::NullName.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
      ::__l2::NullName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
      ::__l2::NullName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NullName'' @ 1503f8e60

void __cdecl
`GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::__l2::
_dynamic_atexit_destructor_for__NullName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
               ::__l2::NullName.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
      ::__l2::NullName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
      ::__l2::NullName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ParticleSystemPoolKillUnusedTime'' @ 1503f8e80

void __cdecl _dynamic_atexit_destructor_for__ParticleSystemPoolKillUnusedTime__(void)

{
  ParticleSystemPoolKillUnusedTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ParticleSystemPoolKillUnusedTime);
  return;
}

// `dynamic_atexit_destructor_for_'ParticleSystemPoolingCleanTime'' @ 1503f8ea0

void __cdecl _dynamic_atexit_destructor_for__ParticleSystemPoolingCleanTime__(void)

{
  ParticleSystemPoolingCleanTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ParticleSystemPoolingCleanTime);
  return;
}

// `dynamic_atexit_destructor_for_'QualityLevelMappingStr'' @ 1503f8ec0

void __cdecl QualityLevelProperty::_dynamic_atexit_destructor_for__QualityLevelMappingStr__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = QualityLevelMappingStr.Data.AllocatorInstance.Data;
  if (QualityLevelMappingStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (QualityLevelMappingStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'QualityLevelNames'' @ 1503f8ee0

void __cdecl QualityLevelProperty::_dynamic_atexit_destructor_for__QualityLevelNames__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = QualityLevelNames.AllocatorInstance.Data;
  if (QualityLevelNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (QualityLevelNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f8f00

void __cdecl
`FParticleSpriteUniformParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'TemplateMaxCountWarnings'' @ 1503f8f20

void __cdecl
`FParticleRibbonEmitterInstance::Spawn'::__l106::
_dynamic_atexit_destructor_for__TemplateMaxCountWarnings__(void)

{
  TemplateMaxCountWarnings._72_4_ = 0;
  if (TemplateMaxCountWarnings._64_8_ != 0) {
    FMemory::Free((void *)TemplateMaxCountWarnings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TemplateMaxCountWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'TransformsStatic'' @ 1503f8f60

void __cdecl
`FBodyInstance::InitStaticBodies'::__l2::_dynamic_atexit_destructor_for__TransformsStatic__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TransformsStatic.AllocatorInstance.Data;
  if (TransformsStatic.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TransformsStatic.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'bEnableParticleSystemPooling'' @ 1503f8f80

void __cdecl _dynamic_atexit_destructor_for__bEnableParticleSystemPooling__(void)

{
  bEnableParticleSystemPooling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&bEnableParticleSystemPooling);
  return;
}

// operator() @ 150527d00

bool __thiscall
``FBodyInstance::UnWeld'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8608185054796974053>);
  if (bVar2) {
    FBodyInstance::GetBodyDebugName(*(FBodyInstance **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8608185054796974053>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150527d67;
    }
  }
  bVar2 = false;
LAB_150527d67:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

