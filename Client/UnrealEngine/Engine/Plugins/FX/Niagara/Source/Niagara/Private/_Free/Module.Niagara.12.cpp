// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 454

// OnCacheBeginWrite'' @ 14118e420

void __cdecl `dynamic_initializer_for_'UNiagaraSimCache::OnCacheBeginWrite__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraSimCache::OnCacheBeginWrite__);
  return;
}

// OnCacheEndWrite'' @ 14118e440

void __cdecl `dynamic_initializer_for_'UNiagaraSimCache::OnCacheEndWrite__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraSimCache::OnCacheEndWrite__);
  return;
}

// `dynamic_initializer_for_'CVarApplyInstanceCountsRigidly'' @ 14118e460

void __cdecl _dynamic_initializer_for__CVarApplyInstanceCountsRigidly__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarApplyInstanceCountsRigidly,L"fx.Niagara.Scalability.ApplyInstanceCountsRigidly",
             &GApplyInstanceCountsRigidly,
             L"If true we\'ll apply instance counts more rigidly. Un-culled Systems wil not be able to activate until overall systems fall below the instance count. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarApplyInstanceCountsRigidly__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNiagaraSpriteRendering'' @ 14118e4b0

void __cdecl _dynamic_initializer_for__CVarEnableNiagaraSpriteRendering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNiagaraSpriteRendering,L"fx.EnableNiagaraSpriteRendering",
             &GbEnableNiagaraSpriteRendering,L"If false Niagara Sprite Renderers are disabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNiagaraSpriteRendering__);
  return;
}

// `dynamic_initializer_for_'CVarLogCompileStaticVars'' @ 14118e500

void __cdecl _dynamic_initializer_for__CVarLogCompileStaticVars__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogCompileStaticVars,L"fx.LogCompileStaticVars",
             &UNiagaraScript::LogCompileStaticVars,
             L"If > 0 all compile id generation dealing with static variables will be logged.  \n",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarLogCompileStaticVars__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraCompileHashAllDataInterfaces'' @ 14118e550

void __cdecl _dynamic_initializer_for__CVarNiagaraCompileHashAllDataInterfaces__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraCompileHashAllDataInterfaces,L"fx.Niagara.CompileHashAllDataInterfaces",
             &GNiagaraCompileHashAllDataInterfaces,
             L"Forces Niagara to include all data interfaces as part of compile hash generation.\n0 = Disabled.\n1 = Enabled, but hash once, better for perf.\n2 = Enabled, generated hash always good for iteration on Niagara work."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraCompileHashAllDataInterfaces__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraCompressScriptByteCode'' @ 14118e5a0

void __cdecl _dynamic_initializer_for__CVarNiagaraCompressScriptByteCode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraCompressScriptByteCode,L"fx.Niagara.CompressScriptByteCode",
             &GNiagaraCompressScriptByteCode,
             L"Should we compress script bytecode to save memory. Will be uncompressed on demand.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraCompressScriptByteCode__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraDumpKeyGen'' @ 14118e5f0

void __cdecl _dynamic_initializer_for__CVarNiagaraDumpKeyGen__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraDumpKeyGen,L"fx.DumpGraphKeyGen",&GNiagaraDumpKeyGen,
             L"If > 0 the key generation will be dumped to the log. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraDumpKeyGen__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraEventSpawnsUpdateInitialAttributeValues'' @ 14118e640

void __cdecl _dynamic_initializer_for__CVarNiagaraEventSpawnsUpdateInitialAttributeValues__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraEventSpawnsUpdateInitialAttributeValues,
             L"fx.Niagara.EventSpawnsUpdateAttributeInitialValues",
             &GbNiagaraEventSpawnsUpdateInitialAttributeValues,
             L"If > 0 Niagara Event Spawn Scripts will update the Initial.* values for particle attributes. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraEventSpawnsUpdateInitialAttributeValues__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraExecVMScripts'' @ 14118e690

void __cdecl _dynamic_initializer_for__CVarNiagaraExecVMScripts__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraExecVMScripts,L"fx.ExecVMScripts",&GbExecVMScripts,
             L"If > 0 VM scripts will be executed, otherwise they won\'t, useful for looking at the bytecode for a crashing compiled script. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraExecVMScripts__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraForceExecVMPath'' @ 14118e6e0

void __cdecl _dynamic_initializer_for__CVarNiagaraForceExecVMPath__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraForceExecVMPath,L"fx.ForceExecVMPath",&GbForceExecVMPath,
             L"If < 0, the legacy VM path will be used, if > 0 the experimental version will be used, and the default if 0. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraForceExecVMPath__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraForceSsafeScriptAttributeTrim'' @ 14118e730

void __cdecl _dynamic_initializer_for__CVarNiagaraForceSsafeScriptAttributeTrim__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraForceSsafeScriptAttributeTrim,L"fx.ForceSafeScriptAttributeTrim",
             &GNiagaraForceSafeScriptAttributeTrim,
             L"If > 0 attribute trimming will use a less aggressive algorithm for removing script attributes. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraForceSsafeScriptAttributeTrim__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraGpuScriptsCompiledBySystem'' @ 14118e780

void __cdecl _dynamic_initializer_for__CVarNiagaraGpuScriptsCompiledBySystem__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraGpuScriptsCompiledBySystem,L"fx.Niagara.GpuScriptsCompiledBySystem",
             &GNiagaraGpuScriptsCompiledBySystem,
             L"If true GPU shaders for Niagara scripts will be compiled along with the NiagaraSystem (when using AsyncTask compilation mode). \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraGpuScriptsCompiledBySystem__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraStripByteCodeOverride'' @ 14118e7d0

void __cdecl _dynamic_initializer_for__CVarNiagaraStripByteCodeOverride__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraStripByteCodeOverride,L"fx.Niagara.StripByteCodeOverride",
             &GNiagaraStripByteCodeOverride,
             L"Overrides project settings to strip byte code from the script on load..\n-1 = Enabled, strips Experimental VM.\n0 = Disabled.\n1 = Enabled, strips original VM.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraStripByteCodeOverride__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingNiagaraSprites'' @ 14118e820

void __cdecl _dynamic_initializer_for__CVarRayTracingNiagaraSprites__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingNiagaraSprites,L"r.RayTracing.Geometry.NiagaraSprites",local_res8,
             L"Include Niagara sprites in ray tracing effects (default = 1 (Niagara sprites enabled in ray tracing))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingNiagaraSprites__);
  return;
}

// `dynamic_initializer_for_'CVarRendererEnabled'' @ 14118e870

void __cdecl NiagaraRendererVolumesLocal::_dynamic_initializer_for__CVarRendererEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRendererEnabled,L"fx.Niagara.VolumeRenderer.Enabled",&GRendererEnabled,
             L"If == 0, Niagara Volume Renderers are disabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRendererEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarScalabilityManParallelThreshold'' @ 14118e8c0

void __cdecl _dynamic_initializer_for__CVarScalabilityManParallelThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarScalabilityManParallelThreshold,L"fx.ScalabilityManParallelThreshold",
             &GScalabilityManParallelThreshold,
             L"Number of instances required for a niagara significance manger to go parallel for it\'s update. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScalabilityManParallelThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarScalabilityMaxUpdatesPerFrame'' @ 14118e910

void __cdecl _dynamic_initializer_for__CVarScalabilityMaxUpdatesPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarScalabilityMaxUpdatesPerFrame,L"fx.ScalabilityMaxUpdatesPerFrame",
             &GScalabilityMaxUpdatesPerFrame,
             L"Number of instances that can be processed per frame when updating scalability state. -1 for all of them. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScalabilityMaxUpdatesPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarScalabilityUpdateTime_High'' @ 14118e960

void __cdecl _dynamic_initializer_for__CVarScalabilityUpdateTime_High__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarScalabilityUpdateTime_High,L"fx.NiagaraScalabilityUpdateTime_High",
             &GScalabilityUpdateTime_High,
             L"Time in seconds between updates to scalability states for Niagara systems set to update at High frequency. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScalabilityUpdateTime_High__);
  return;
}

// `dynamic_initializer_for_'CVarScalabilityUpdateTime_Low'' @ 14118e9b0

void __cdecl _dynamic_initializer_for__CVarScalabilityUpdateTime_Low__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarScalabilityUpdateTime_Low,L"fx.NiagaraScalabilityUpdateTime_Low",
             &GScalabilityUpdateTime_Low,
             L"Time in seconds between updates to scalability states for Niagara systems set to update at Low frequency. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScalabilityUpdateTime_Low__);
  return;
}

// `dynamic_initializer_for_'CVarScalabilityUpdateTime_Medium'' @ 14118ea00

void __cdecl _dynamic_initializer_for__CVarScalabilityUpdateTime_Medium__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarScalabilityUpdateTime_Medium,L"fx.NiagaraScalabilityUpdateTime_Medium",
             &GScalabilityUpdateTime_Medium,
             L"Time in seconds between updates to scalability states for Niagara systems set to update at Medium frequency. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScalabilityUpdateTime_Medium__);
  return;
}

// `dynamic_initializer_for_'LogNiagaraSimCacheJson'' @ 14118ea50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNiagaraSimCacheJson__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNiagaraSimCacheJson,L"LogNiagaraSimCacheJson",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNiagaraSimCacheJson__);
  return;
}

// `dynamic_initializer_for_'NAME_UniqueID'' @ 14118ea90

void __cdecl NiagaraRibbonRendererPropertiesPrivate::_dynamic_initializer_for__NAME_UniqueID__(void)

{
  ::FName::FName(&NAME_UniqueID,"UniqueID");
  return;
}

// `dynamic_initializer_for_'RibbonRendererPropertiesToDeferredInit'' @ 14118eab0

void __cdecl
NiagaraRibbonRendererPropertiesPrivate::
_dynamic_initializer_for__RibbonRendererPropertiesToDeferredInit__(void)

{
  atexit(_dynamic_atexit_destructor_for__RibbonRendererPropertiesToDeferredInit__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 14118ead0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 14118eb60

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 14118ebf0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 14118ec80

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 14118ed10

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSprites'' @ 14118eda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumSprites__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumSprites == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSprites>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumSprites");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSprites,*pFVar1,L"NumSprites",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 14118ee30

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 14118eec0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 14118ef50

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 14118efe0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 14118f070

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 14118f100

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRebindDataInterfaceFunctionTable'' @ 14118f190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRebindDataInterfaceFunctionTable__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRebindDataInterfaceFunctionTable ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRebindDataInterfaceFunctionTable>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRebindDataInterfaceFunctionTable");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRebindDataInterfaceFunctionTable,
               *pFVar1,L"Rebind DInterface Func Table","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 14118f220

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraScriptExecContextTick'' @ 14118f2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraScriptExecContextTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraScriptExecContextTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraScriptExecContextTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraScriptExecContextTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraScriptExecContextTick,*pFVar1,
               L"Context Ticking","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSimRegisterSetup'' @ 14118f340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSimRegisterSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSimRegisterSetup ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSimRegisterSetup>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSimRegisterSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSimRegisterSetup,*pFVar1,
               L"Register Setup","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 14118f3d0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 14118f460

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

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 14118f4f0

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

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 14118f580

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h__Script_Niagara_3343987426'' @ 14118f610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h__Script_Niagara_3343987426__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScratchPadContainer_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptHighlight_h__Script_Niagara_2179382824'' @ 14118f650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptHighlight_h__Script_Niagara_2179382824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptHighlight_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h__Script_Niagara_2334373632'' @ 14118f690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h__Script_Niagara_2334373632__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h__Script_Niagara_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h__Script_Niagara_Statics
             ::EnumInfo,8);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h__Script_Niagara_179499637'' @ 14118f6e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h__Script_Niagara_179499637__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h__Script_Niagara_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h__Script_Niagara_1111852824'' @ 14118f720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h__Script_Niagara_1111852824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h__Script_Niagara_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h__Script_Niagara_3592325818'' @ 14118f770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h__Script_Niagara_3592325818__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h__Script_Niagara_3500217645'' @ 14118f7c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h__Script_Niagara_3500217645__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h__Script_Niagara_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h__Script_Niagara_Statics
             ::EnumInfo,7);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h__Script_Niagara_194637140'' @ 14118f810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h__Script_Niagara_194637140__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h__Script_Niagara_374031331'' @ 14118f850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h__Script_Niagara_374031331__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h__Script_Niagara_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h__Script_Niagara_232013061'' @ 14118f890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h__Script_Niagara_232013061__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h__Script_Niagara_Statics
             ::EnumInfo,9);
  return;
}

// Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache @ 1493764c0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1493765c0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraScriptHighlight,&UE::CoreUObject::Private::Construct<FNiagaraScriptHighlight>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraScriptHighlight>,&UE::CoreUObject::Private::Destruct<FNiagaraScriptHighlight>,&UE::CoreUObject::Private::Copy<FNiagaraScriptHighlight>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraSettings @ 1493766a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSettings(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider @ 1493766e0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider(void)

{
  if (Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat @ 149376720

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat(void)

{
  if (Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences @ 149376760

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences(void)

{
  if (Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat @ 1493767a0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat(void)

{
  if (Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity @ 1493767e0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency @ 149376820

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode @ 149376860

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision @ 1493768a0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption @ 149376920

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.InnerSingleton;
}

// ENDISkelMesh_GpuMaxInfluences_StaticEnum @ 149376960

UEnum * __cdecl ENDISkelMesh_GpuMaxInfluences_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences,(UObject *)pUVar1,
                       L"ENDISkelMesh_GpuMaxInfluences");
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton;
}

// ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum @ 1493769a0

UEnum * __cdecl ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat,
                       (UObject *)pUVar1,L"ENDISkelMesh_GpuUniformSamplingFormat");
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton;
}

// ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum @ 1493769e0

UEnum * __cdecl ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat,
                       (UObject *)pUVar1,L"ENDISkelMesh_AdjacencyTriangleIndexFormat");
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton;
}

// ENiagaraDefaultRendererPixelCoverageMode_StaticEnum @ 149376a20

UEnum * __cdecl ENiagaraDefaultRendererPixelCoverageMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode,
                       (UObject *)pUVar1,L"ENiagaraDefaultRendererPixelCoverageMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton;
}

// ENiagaraDefaultSortPrecision_StaticEnum @ 149376a60

UEnum * __cdecl ENiagaraDefaultSortPrecision_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision,(UObject *)pUVar1,
                       L"ENiagaraDefaultSortPrecision");
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton;
}

// ENiagaraDefaultGpuTranslucentLatency_StaticEnum @ 149376aa0

UEnum * __cdecl ENiagaraDefaultGpuTranslucentLatency_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency,
                       (UObject *)pUVar1,L"ENiagaraDefaultGpuTranslucentLatency");
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton;
}

// ENiagaraCompileErrorSeverity_StaticEnum @ 149376ae0

UEnum * __cdecl ENiagaraCompileErrorSeverity_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity,(UObject *)pUVar1,
                       L"ENiagaraCompileErrorSeverity");
  }
  return Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton;
}

// ENDICollisionQuery_AsyncGpuTraceProvider_StaticEnum @ 149376b50

UEnum * __cdecl ENDICollisionQuery_AsyncGpuTraceProvider_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider,
                       (UObject *)pUVar1,L"ENDICollisionQuery_AsyncGpuTraceProvider");
  }
  return Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton;
}

// ENiagaraStripScriptByteCodeOption_StaticEnum @ 149376ce0

UEnum * __cdecl ENiagaraStripScriptByteCodeOption_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption,(UObject *)pUVar1
                       ,L"ENiagaraStripScriptByteCodeOption");
  }
  return Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton;
}

// NewProp_bSystemsSupportLargeWorldCoordinates_SetBit @ 149376e20

void __cdecl
Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bEnforceStrictStackTypes_SetBit @ 149376e30

void __cdecl
Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bAccurateQuatInterpolation_SetBit @ 149376e40

void __cdecl
Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAccurateQuatInterpolation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bLimitDeltaTime_SetBit @ 149376e50

void __cdecl
Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bLimitDeltaTime_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x43) = 1;
  return;
}

// NewProp_bAllowCreateActorFromSystemWithNoEffectType_SetBit @ 149376e60

void __cdecl
Z_Construct_UClass_UNiagaraSettings_Statics::
NewProp_bAllowCreateActorFromSystemWithNoEffectType_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_NDISkelMesh_SupportReadingDeformedGeometry_SetBit @ 149376e70

void __cdecl
Z_Construct_UClass_UNiagaraSettings_Statics::
NewProp_NDISkelMesh_SupportReadingDeformedGeometry_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return;
}

// NewProp_NDISkelMesh_Support16BitIndexWeight_SetBit @ 149376e80

void __cdecl
Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_Support16BitIndexWeight_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xed) = 1;
  return;
}

// NewProp_NDIStaticMesh_AllowDistanceFields_SetBit @ 149376e90

void __cdecl
Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf1) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraSimCache_NoRegister @ 149377270

UClass * __cdecl Z_Construct_UClass_UNiagaraSimCache_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCache",
               &Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton,
               UNiagaraSimCache::StaticRegisterNativesUNiagaraSimCache,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSimCache>,
               InternalVTableHelperCtorCaller<UNiagaraSimCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton;
}

// NewStructOps @ 1493773a0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraScalabilityManager,&UE::CoreUObject::Private::Construct<FNiagaraScalabilityManager>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraScalabilityManager>,&UE::CoreUObject::Private::Destruct<FNiagaraScalabilityManager>,&UE::CoreUObject::Private::Copy<FNiagaraScalabilityManager>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraSimCacheDebugData_NoRegister @ 149377610

UClass * __cdecl Z_Construct_UClass_UNiagaraSimCacheDebugData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheDebugData",
               &Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton,
               UNiagaraSimCacheDebugData::StaticRegisterNativesUNiagaraSimCacheDebugData,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimCacheDebugData>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheDebugData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSimCache @ 149377ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSimCache(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSimCache.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSimCache.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSimCache_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCache.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode @ 149377ce0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters @ 149377d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCreateParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCreateParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCreateParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheCreateParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers @ 149377da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffers.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffers.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffers.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffers.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout @ 149377e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffersLayout.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffersLayout.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffersLayout.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffersLayout.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame @ 149377ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheEmitterFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheEmitterFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheEmitterFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheEmitterFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimCacheFrame @ 149377f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheFrame.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheFrame.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimCacheLayout @ 149377fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheLayout(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheLayout.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheLayout.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheLayout.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheLayout.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame @ 149378020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheSystemFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheSystemFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheSystemFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheSystemFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimCacheVariable @ 1493780a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheVariable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheVariable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheVariable.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheVariable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheVariable.InnerSingleton;
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

// ENiagaraSimCacheAttributeCaptureMode_StaticEnum @ 149378150

UEnum * __cdecl ENiagaraSimCacheAttributeCaptureMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode,
                       (UObject *)pUVar1,L"ENiagaraSimCacheAttributeCaptureMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton;
}

// NewProp_bAllowRebasing_SetBit @ 149378340

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowRebasing_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 4) = *(uint *)((longlong)param_1 + 4) | 1;
  return;
}

// NewProp_bAllowDataInterfaceCaching_SetBit @ 149378350

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::
NewProp_bAllowDataInterfaceCaching_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 4) = *(uint *)((longlong)param_1 + 4) | 2;
  return;
}

// NewProp_bAllowInterpolation_SetBit @ 149378360

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::
NewProp_bAllowInterpolation_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 4) = *(uint *)((longlong)param_1 + 4) | 4;
  return;
}

// NewProp_bInterpolateAllTypes_SetBit @ 149378370

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::
NewProp_bInterpolateAllTypes_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 4) = *(uint *)((longlong)param_1 + 4) | 8;
  return;
}

// NewProp_bAllowVelocityExtrapolation_SetBit @ 149378380

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::
NewProp_bAllowVelocityExtrapolation_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 4) = *(uint *)((longlong)param_1 + 4) | 0x10;
  return;
}

// NewProp_bAllowSerializeLargeCache_SetBit @ 149378390

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::
NewProp_bAllowSerializeLargeCache_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 4) = *(uint *)((longlong)param_1 + 4) | 0x20;
  return;
}

// NewProp_bIncludeDebugData_SetBit @ 1493783a0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bIncludeDebugData_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 4) = *(uint *)((longlong)param_1 + 4) | 0x40;
  return;
}

// NewStructOps @ 1493783b0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheCreateParameters,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheCreateParameters>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheCreateParameters>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheCreateParameters>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheCreateParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149378610

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheDataBuffers,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheDataBuffers>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheDataBuffers>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheDataBuffers>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheDataBuffers>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149378690

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheEmitterFrame,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheEmitterFrame>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheEmitterFrame>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheEmitterFrame>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheEmitterFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1493788d0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheSystemFrame,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheSystemFrame>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheSystemFrame>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheSystemFrame>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheSystemFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149378910

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheFrame,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheFrame>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheFrame>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheFrame>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149378950

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheVariable,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheVariable>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheVariable>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheVariable>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheVariable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraRibbonRendererProperties @ 149378990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraRibbonRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection @ 1493789d0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode @ 149378a10

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode @ 149378a50

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode @ 149378a90

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode @ 149378ad0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode @ 149378b10

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex @ 149378b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRibbonShapeCustomVertex.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRibbonShapeCustomVertex.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRibbonShapeCustomVertex.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRibbonShapeCustomVertex.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings @ 149378bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRibbonUVSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRibbonUVSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRibbonUVSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRibbonUVSettings.InnerSingleton;
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

// ENiagaraRibbonFacingMode_StaticEnum @ 149378df0

UEnum * __cdecl ENiagaraRibbonFacingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonFacingMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton;
}

// ENiagaraRibbonAgeOffsetMode_StaticEnum @ 149378f50

UEnum * __cdecl ENiagaraRibbonAgeOffsetMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonAgeOffsetMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton;
}

// NewProp_bLocalSpace_SetBit @ 149378f90

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bLocalSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// NewProp_bAllowInterpolation_SetBit @ 149378fa0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::
NewProp_bAllowInterpolation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  return;
}

// NewProp_bAllowVelocityExtrapolation_SetBit @ 149378fb0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::
NewProp_bAllowVelocityExtrapolation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ENiagaraRibbonDrawDirection_StaticEnum @ 149378fc0

UEnum * __cdecl ENiagaraRibbonDrawDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection,(UObject *)pUVar1,
                       L"ENiagaraRibbonDrawDirection");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton;
}

// NewStructOps @ 149379000

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheDataBuffersLayout,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheDataBuffersLayout>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheDataBuffersLayout>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheDataBuffersLayout>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheDataBuffersLayout>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraRibbonShapeMode_StaticEnum @ 1493790f0

UEnum * __cdecl ENiagaraRibbonShapeMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonShapeMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton;
}

// NewStructOps @ 149379130

void * __cdecl Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRibbonShapeCustomVertex,&UE::CoreUObject::Private::Construct<FNiagaraRibbonShapeCustomVertex>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRibbonShapeCustomVertex>,&UE::CoreUObject::Private::Destruct<FNiagaraRibbonShapeCustomVertex>,&UE::CoreUObject::Private::Copy<FNiagaraRibbonShapeCustomVertex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149379170

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheLayout,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheLayout>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheLayout>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheLayout>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheLayout>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraRibbonTessellationMode_StaticEnum @ 1493791b0

UEnum * __cdecl ENiagaraRibbonTessellationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonTessellationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton;
}

// ENiagaraRibbonUVEdgeMode_StaticEnum @ 1493791f0

UEnum * __cdecl ENiagaraRibbonUVEdgeMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonUVEdgeMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton;
}

// ENiagaraRibbonUVDistributionMode_StaticEnum @ 149379230

UEnum * __cdecl ENiagaraRibbonUVDistributionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonUVDistributionMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode @ 149379270

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnablePerParticleUOverride_SetBit @ 1493792b0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::
NewProp_bEnablePerParticleUOverride_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 3) = *(byte *)((longlong)param_1 + 3) | 1;
  return;
}

// NewProp_bEnablePerParticleVRangeOverride_SetBit @ 1493792c0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::
NewProp_bEnablePerParticleVRangeOverride_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 3) = *(byte *)((longlong)param_1 + 3) | 2;
  return;
}

// NewStructOps @ 1493792d0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRibbonUVSettings,&UE::CoreUObject::Private::Construct<FNiagaraRibbonUVSettings>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRibbonUVSettings>,&UE::CoreUObject::Private::Destruct<FNiagaraRibbonUVSettings>,&UE::CoreUObject::Private::Copy<FNiagaraRibbonUVSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName @ 149379310

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames @ 149379350

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters @ 149379390

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames @ 1493793d0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableAccurateGeometry_SetBit @ 149379410

void __cdecl
Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bEnableAccurateGeometry_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 1;
  return;
}

// Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds @ 149379420

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseMaterialBackfaceCulling_SetBit @ 149379460

void __cdecl
Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::
NewProp_bUseMaterialBackfaceCulling_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 2;
  return;
}

// NewProp_bUseGeometryNormals_SetBit @ 149379470

void __cdecl
Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGeometryNormals_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 4;
  return;
}

// NewProp_bUseGPUInit_SetBit @ 149379480

void __cdecl
Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGPUInit_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 8;
  return;
}

// NewProp_bUseConstantFactor_SetBit @ 149379490

void __cdecl
Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 0x10;
  return;
}

// NewProp_bScreenSpaceTessellation_SetBit @ 1493794a0

void __cdecl
Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 0x20;
  return;
}

// NewProp_bLinkOrderUseUniqueID_SetBit @ 1493794b0

void __cdecl
Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bLinkOrderUseUniqueID_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 0x40;
  return;
}

// NewProp_ReturnValue_SetBit @ 1493794c0

void __cdecl
Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bCastShadows_SetBit @ 1493794d0

void __cdecl
Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bCastShadows_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)param_1 + 0x122) | 0x80;
  return;
}

// Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid @ 1493794e0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149379520

void __cdecl
Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraSimCache_IsEmpty @ 149379530

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_IsEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute @ 149379570

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadDataInterfaceAs @ 149379630

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadDataInterfaceAs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadDataInterfaceAs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute @ 149379730

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraSimCacheDebugData @ 149379910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSimCacheDebugData(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame @ 149379950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDebugDataFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDebugDataFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDebugDataFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDebugDataFrame.InnerSingleton;
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

// NewStructOps @ 149379a80

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimCacheDebugDataFrame,&UE::CoreUObject::Private::Construct<FNiagaraSimCacheDebugDataFrame>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimCacheDebugDataFrame>,&UE::CoreUObject::Private::Destruct<FNiagaraSimCacheDebugDataFrame>,&UE::CoreUObject::Private::Copy<FNiagaraSimCacheDebugDataFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadIDAttribute @ 149379ac0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadIDAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadIDAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute @ 149379b00

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLocalSpaceToWorld_SetBit @ 149379b40

void __cdecl
Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::
NewProp_bLocalSpaceToWorld_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute @ 149379b50

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase @ 149379c20

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLocalSpaceToWorld_SetBit @ 149379da0

void __cdecl
Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_bLocalSpaceToWorld_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute @ 14937a1e0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraScript @ 14937a220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraScript(void)

{
  if (Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton,
               &Z_Construct_UClass_UNiagaraScript_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint @ 14937a260

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType @ 14937a2a0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraCompilerTag @ 14937a2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraCompilerTag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraCompilerTag.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraCompilerTag.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraCompilerTag.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraCompilerTag.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore @ 14937a360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionParameterStore.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionParameterStore.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionParameterStore.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionParameterStore.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode @ 14937a3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableByteCode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableByteCode.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableByteCode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableByteCode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVMExecutableData @ 14937a460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVMExecutableData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId @ 14937a4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableDataId.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableDataId.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableDataId.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableDataId.InnerSingleton;
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

// EUnusedAttributeBehaviour_StaticEnum @ 14937a560

UEnum * __cdecl EUnusedAttributeBehaviour_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour,(UObject *)pUVar1,
                       L"EUnusedAttributeBehaviour");
  }
  return Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase @ 14937a5a0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ENiagaraModuleDependencyType_StaticEnum @ 14937a5e0

UEnum * __cdecl ENiagaraModuleDependencyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType,(UObject *)pUVar1,
                       L"ENiagaraModuleDependencyType");
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton;
}

// ENiagaraModuleDependencyScriptConstraint_StaticEnum @ 14937a620

UEnum * __cdecl ENiagaraModuleDependencyScriptConstraint_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint,
                       (UObject *)pUVar1,L"ENiagaraModuleDependencyScriptConstraint");
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute @ 14937a660

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ENiagaraScriptLibraryVisibility_StaticEnum @ 14937a6a0

UEnum * __cdecl ENiagaraScriptLibraryVisibility_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility,(UObject *)pUVar1,
                       L"ENiagaraScriptLibraryVisibility");
  }
  return Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton;
}

// ENiagaraScriptTemplateSpecification_StaticEnum @ 14937a6e0

UEnum * __cdecl ENiagaraScriptTemplateSpecification_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification,
                       (UObject *)pUVar1,L"ENiagaraScriptTemplateSpecification");
  }
  return Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton;
}

// ENiagaraEmitterDefaultSummaryState_StaticEnum @ 14937a720

UEnum * __cdecl ENiagaraEmitterDefaultSummaryState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState,
                       (UObject *)pUVar1,L"ENiagaraEmitterDefaultSummaryState");
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton;
}

// Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister @ 14937a760

UClass * __cdecl Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"AsyncNiagaraCaptureSimCache",
               &Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton,
               UAsyncNiagaraCaptureSimCache::StaticRegisterNativesUAsyncNiagaraCaptureSimCache,0x140
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAsyncNiagaraCaptureSimCache>,
               InternalVTableHelperCtorCaller<UAsyncNiagaraCaptureSimCache>,local_res8,
               UCancellableAsyncAction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.InnerSingleton;
}

// ENiagaraModuleDependencyUsage_StaticEnum @ 14937a8e0

UEnum * __cdecl ENiagaraModuleDependencyUsage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage,(UObject *)pUVar1,
                       L"ENiagaraModuleDependencyUsage");
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton;
}

// NewStructOps @ 14937aa50

void * __cdecl Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraModuleDependency,&UE::CoreUObject::Private::Construct<FNiagaraModuleDependency>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraModuleDependency>,&UE::CoreUObject::Private::Destruct<FNiagaraModuleDependency>,&UE::CoreUObject::Private::Copy<FNiagaraModuleDependency>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14937aad0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraCompilerTag,&UE::CoreUObject::Private::Construct<FNiagaraCompilerTag>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraCompilerTag>,&UE::CoreUObject::Private::Destruct<FNiagaraCompilerTag>,&UE::CoreUObject::Private::Copy<FNiagaraCompilerTag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14937ac50

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVMExecutableDataId,&UE::CoreUObject::Private::Construct<FNiagaraVMExecutableDataId>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVMExecutableDataId>,&UE::CoreUObject::Private::Destruct<FNiagaraVMExecutableDataId>,&UE::CoreUObject::Private::Copy<FNiagaraVMExecutableDataId>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraVMExecutableDataId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAsyncNiagaraCaptureSimCache @ 14937ac90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncNiagaraCaptureSimCache(void)

{
  if (Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton,
               &Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary @ 14937acd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton;
}

// Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature @ 14937ad10

UFunction * __cdecl
Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSuccess_SetBit @ 14937ad50

void __cdecl
Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics
::NewProp_bSuccess_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute @ 14937ad60

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14937adc0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVMExecutableByteCode,&UE::CoreUObject::Private::Construct<FNiagaraVMExecutableByteCode>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVMExecutableByteCode>,&UE::CoreUObject::Private::Destruct<FNiagaraVMExecutableByteCode>,&UE::CoreUObject::Private::Copy<FNiagaraVMExecutableByteCode>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FNiagaraVMExecutableByteCode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache @ 14937ae10

UFunction * __cdecl Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCache_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute @ 14937aec0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bReadsSignificanceIndex_SetBit @ 14937af00

void __cdecl
Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x148) = *(uint *)((longlong)param_1 + 0x148) | 1;
  return;
}

// NewProp_bNeedsGPUContextInit_SetBit @ 14937af10

void __cdecl
Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x148) = *(uint *)((longlong)param_1 + 0x148) | 2;
  return;
}

// NewStructOps @ 14937af20

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVMExecutableData,&UE::CoreUObject::Private::Construct<FNiagaraVMExecutableData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVMExecutableData>,&UE::CoreUObject::Private::Destruct<FNiagaraVMExecutableData>,&UE::CoreUObject::Private::Copy<FNiagaraVMExecutableData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bNeedsReadComponentMappingRecache_SetBit @ 14937af60

void __cdecl
Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bNeedsReadComponentMappingRecache_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bCanRunAsync_SetBit @ 14937af70

void __cdecl Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bCanRunAsync_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
  return;
}

// NewProp_bAdvanceSimulation_SetBit @ 14937af80

void __cdecl
Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::
NewProp_bAdvanceSimulation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraScratchPadContainer @ 14937af90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraScratchPadContainer(void)

{
  if (Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton,
               &Z_Construct_UClass_UNiagaraScratchPadContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraScratchPadContainer.OuterSingleton;
}

// Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame @ 14937b050

UFunction * __cdecl
Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14937b0a0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraScriptExecutionPaddingInfo,&UE::CoreUObject::Private::Construct<FNiagaraScriptExecutionPaddingInfo>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraScriptExecutionPaddingInfo>,&UE::CoreUObject::Private::Destruct<FNiagaraScriptExecutionPaddingInfo>,&UE::CoreUObject::Private::Copy<FNiagaraScriptExecutionPaddingInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAdvanceSimulation_SetBit @ 14937b1d0

void __cdecl
Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::
NewProp_bAdvanceSimulation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  return;
}

// Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete @ 14937b1e0

UFunction * __cdecl
Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ENiagaraInlineDynamicInputFormatTokenUsage_StaticEnum @ 14937b220

UEnum * __cdecl ENiagaraInlineDynamicInputFormatTokenUsage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage,
                       (UObject *)pUVar1,L"ENiagaraInlineDynamicInputFormatTokenUsage");
  }
  return Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton;
}

// NewProp_bInitialized_SetBit @ 14937b260

void __cdecl
Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 1;
  return;
}

// NewStructOps @ 14937b270

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraInlineDynamicInputFormatToken,&UE::CoreUObject::Private::Construct<FNiagaraInlineDynamicInputFormatToken>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraInlineDynamicInputFormatToken>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14937b2b0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraScriptExecutionParameterStore,&UE::CoreUObject::Private::Construct<FNiagaraScriptExecutionParameterStore>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraScriptExecutionParameterStore>,&UE::CoreUObject::Private::Destruct<FNiagaraScriptExecutionParameterStore>,&UE::CoreUObject::Private::Copy<FNiagaraScriptExecutionParameterStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14937b2f0

void * __cdecl Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVersionedNiagaraScriptData,&UE::CoreUObject::Private::Construct<FVersionedNiagaraScriptData>,&UE::CoreUObject::Private::ConstructForTests<FVersionedNiagaraScriptData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14937b400

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraScriptInstanceParameterStore,&UE::CoreUObject::Private::Construct<FNiagaraScriptInstanceParameterStore>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraScriptInstanceParameterStore>,&UE::CoreUObject::Private::Destruct<FNiagaraScriptInstanceParameterStore>,&UE::CoreUObject::Private::Copy<FNiagaraScriptInstanceParameterStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete @ 14937b490

UFunction * __cdecl Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAdvanceSimulation_SetBit @ 14937b520

void __cdecl
Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::
NewProp_bAdvanceSimulation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14937b570

void __cdecl
Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate @ 14937b580

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// AddParameterStore<wchar_t_const_*> @ 14937b860

void __cdecl
NSCDebugDataPrivate::AddParameterStore<wchar_t_const_*>
          (UObject *param_1,FNiagaraSimCacheDebugDataFrame *param_2,wchar_t *param_3,
          FNiagaraParameterStore *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_> *pTVar6;
  TKeyInitializer<FString_&&> local_res20;
  FString local_38;
  FSparseArrayAllocationInfo local_28;
  
  if (0 < (param_4->SortedParameterOffsets).ArrayNum) {
    ::FString::FString(&local_38,param_3);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    pTVar6 = (TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_> *)0x0;
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar4.Data);
    iVar3 = TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                        *)param_2,uVar2,&local_38);
    if ((iVar3 == -1) ||
       (lVar5 = (longlong)iVar3 * 0xa0 + *(longlong *)&param_2->DebugParameterStores, lVar5 == 0)) {
      local_res20.Key = &local_38;
      TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AddUninitialized((TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)param_2,&local_28);
      if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_> *)0x0) {
        TKeyInitializer<FString_&&>::
        operator<FString,FNiagaraParameterStore>_TTuple<FString,FNiagaraParameterStore>
                  (&local_res20,local_28.Pointer);
        *(undefined4 *)((longlong)local_28.Pointer + 0x98) = 0xffffffff;
        pTVar6 = local_28.Pointer;
      }
      local_res20.Key._0_4_ = local_28.Index;
      bVar1 = TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
              ::TryReplaceExisting
                        ((TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                          *)param_2,uVar2,pTVar6,(int *)&local_res20,(bool *)0x0);
      lVar5 = (longlong)(int)local_res20.Key;
      if (!bVar1) {
        TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
        ::RehashOrLink((TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                        *)param_2,uVar2,pTVar6,(int)local_res20.Key);
      }
      lVar5 = lVar5 * 0xa0 + *(longlong *)&param_2->DebugParameterStores;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FNiagaraParameterStore::SetOwner((FNiagaraParameterStore *)(lVar5 + 0x10),param_1);
    FNiagaraParameterStore::operator=((FNiagaraParameterStore *)(lVar5 + 0x10),param_4);
  }
  return;
}

// AddParameterStore<wchar_t_const_*> @ 14937b9c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
NSCDebugDataPrivate::AddParameterStore<wchar_t_const_*>
          (UObject *param_1,FNiagaraSimCacheDebugDataFrame *param_2,wchar_t *param_3,
          FNiagaraScriptExecutionContextBase *param_4)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ForAnyElementType FVar5;
  TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_> *pTVar6;
  TKeyInitializer<FString_&&> local_res20;
  FString local_38;
  FSparseArrayAllocationInfo local_28;
  
  if (param_4 != (FNiagaraScriptExecutionContextBase *)0x0) {
    lVar3 = (**(code **)(param_4->Parameters)._padding_)(&param_4->Parameters,&local_28);
    if (0 < *(int *)(lVar3 + 8)) {
      ::FString::FString(&local_38,param_3);
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar5.Data = local_38.Data.AllocatorInstance.Data;
      }
      pTVar6 = (TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_> *)0x0;
      iVar4 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar5.Data);
      iVar4 = TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                          *)param_2,uVar2,&local_38);
      if ((iVar4 == -1) ||
         (lVar3 = (longlong)iVar4 * 0xa0 + *(longlong *)&param_2->DebugParameterStores, lVar3 == 0))
      {
        local_res20.Key = &local_38;
        TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AddUninitialized((TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)param_2,&local_28);
        if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_> *)0x0) {
          TKeyInitializer<FString_&&>::
          operator<FString,FNiagaraParameterStore>_TTuple<FString,FNiagaraParameterStore>
                    (&local_res20,local_28.Pointer);
          *(undefined4 *)((longlong)local_28.Pointer + 0x98) = 0xffffffff;
          pTVar6 = local_28.Pointer;
        }
        local_res20.Key._0_4_ = local_28.Index;
        bVar1 = TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                ::TryReplaceExisting
                          ((TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                            *)param_2,uVar2,pTVar6,(int *)&local_res20,(bool *)0x0);
        lVar3 = (longlong)(int)local_res20.Key;
        if (!bVar1) {
          TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
          ::RehashOrLink((TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                          *)param_2,uVar2,pTVar6,(int)local_res20.Key);
        }
        lVar3 = lVar3 * 0xa0 + *(longlong *)&param_2->DebugParameterStores;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FNiagaraParameterStore::SetOwner((FNiagaraParameterStore *)(lVar3 + 0x10),param_1);
      FNiagaraParameterStore::CopyParametersTo
                ((FNiagaraParameterStore *)&param_4->Parameters,
                 (FNiagaraParameterStore *)(lVar3 + 0x10),false,Value);
    }
  }
  return;
}

// AddParameterStore<FString> @ 14937bb50

void __cdecl
NSCDebugDataPrivate::AddParameterStore<FString>
          (UObject *param_1,FNiagaraSimCacheDebugDataFrame *param_2,FString *param_3,
          FNiagaraParameterStore *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FNiagaraParameterStore *this;
  wchar_t *pwVar5;
  longlong lVar6;
  
  if (0 < (param_4->SortedParameterOffsets).ArrayNum) {
    iVar1 = (param_3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    iVar4 = TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                        *)param_2,uVar3,param_3);
    if ((iVar4 == -1) ||
       (lVar6 = (longlong)iVar4 * 0xa0 + *(longlong *)&param_2->DebugParameterStores, lVar6 == 0)) {
      this = TMapBase<FString,FNiagaraParameterStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>_>
             ::EmplaceByHash<FString_const_&>
                       ((TMapBase<FString,FNiagaraParameterStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>_>
                         *)param_2,uVar3,param_3);
    }
    else {
      this = (FNiagaraParameterStore *)(lVar6 + 0x10);
    }
    FNiagaraParameterStore::SetOwner(this,param_1);
    FNiagaraParameterStore::operator=(this,param_4);
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// AddParameterStore<FString> @ 14937bc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
NSCDebugDataPrivate::AddParameterStore<FString>
          (UObject *param_1,FNiagaraSimCacheDebugDataFrame *param_2,FString *param_3,
          FNiagaraComputeExecutionContext *param_4)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  if (param_4 != (FNiagaraComputeExecutionContext *)0x0) {
    pFVar2 = ::FString::FString(&local_18,param_3);
    AddParameterStore<FString>
              (param_1,param_2,pFVar2,(FNiagaraParameterStore *)&param_4->CombinedParamStore);
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddParameterStore<FString> @ 14937bcb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
NSCDebugDataPrivate::AddParameterStore<FString>
          (UObject *param_1,FNiagaraSimCacheDebugDataFrame *param_2,FString *param_3,
          FNiagaraScriptExecutionContextBase *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FNiagaraParameterStore *this;
  wchar_t *pwVar6;
  undefined1 local_18 [16];
  
  if (param_4 != (FNiagaraScriptExecutionContextBase *)0x0) {
    lVar5 = (**(code **)(param_4->Parameters)._padding_)(&param_4->Parameters,local_18);
    if (0 < *(int *)(lVar5 + 8)) {
      iVar1 = (param_3->Data).ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar6 = L"";
        iVar4 = 0;
      }
      else {
        pwVar6 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
      }
      uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
      iVar4 = TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FNiagaraParameterStore>,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>,FDefaultSetAllocator>
                          *)param_2,uVar3,param_3);
      if ((iVar4 == -1) ||
         (lVar5 = (longlong)iVar4 * 0xa0 + *(longlong *)&param_2->DebugParameterStores, lVar5 == 0))
      {
        this = TMapBase<FString,FNiagaraParameterStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>_>
               ::EmplaceByHash<FString_const_&>
                         ((TMapBase<FString,FNiagaraParameterStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FNiagaraParameterStore,0>_>
                           *)param_2,uVar3,param_3);
      }
      else {
        this = (FNiagaraParameterStore *)(lVar5 + 0x10);
      }
      FNiagaraParameterStore::SetOwner(this,param_1);
      FNiagaraParameterStore::CopyParametersTo
                ((FNiagaraParameterStore *)&param_4->Parameters,this,false,Value);
    }
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// CastChecked<UNiagaraSpriteRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14937c3d0

UNiagaraSpriteRendererProperties * __cdecl
CastChecked<UNiagaraSpriteRendererProperties_const_,UNiagaraRendererProperties_const_>
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
    pFVar3 = GetTypeName<UNiagaraSpriteRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraSpriteRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraSpriteRendererProperties_const_>(&local_28);
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

// CastChecked<UNiagaraVolumeRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14937c490

UNiagaraVolumeRendererProperties * __cdecl
CastChecked<UNiagaraVolumeRendererProperties_const_,UNiagaraRendererProperties_const_>
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
    pFVar3 = GetTypeName<UNiagaraVolumeRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraVolumeRendererProperties_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraVolumeRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraVolumeRendererProperties_const_>(&local_28);
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

// CastChecked<INiagaraSimCacheCustomStorageInterface,UNiagaraDataInterface> @ 14937c550

INiagaraSimCacheCustomStorageInterface * __cdecl
CastChecked<INiagaraSimCacheCustomStorageInterface,UNiagaraDataInterface>
          (UNiagaraDataInterface *param_1)

{
  UClass *pUVar1;
  INiagaraSimCacheCustomStorageInterface *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<INiagaraSimCacheCustomStorageInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (pIVar2 != (INiagaraSimCacheCustomStorageInterface *)0x0) {
    return pIVar2;
  }
  pFVar3 = GetTypeName<INiagaraSimCacheCustomStorageInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<INiagaraSimCacheCustomStorageInterface,UObject> @ 14937c600

INiagaraSimCacheCustomStorageInterface * __cdecl
CastChecked<INiagaraSimCacheCustomStorageInterface,UObject>(UObject *param_1)

{
  UClass *pUVar1;
  INiagaraSimCacheCustomStorageInterface *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<INiagaraSimCacheCustomStorageInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (pIVar2 != (INiagaraSimCacheCustomStorageInterface *)0x0) {
    return pIVar2;
  }
  pFVar3 = GetTypeName<INiagaraSimCacheCustomStorageInterface>(&local_28);
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

// CastChecked<UNiagaraRibbonRendererProperties,UObject> @ 14937c6b0

UNiagaraRibbonRendererProperties * __cdecl
CastChecked<UNiagaraRibbonRendererProperties,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraRibbonRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraRibbonRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraRibbonRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraRibbonRendererProperties>(&local_28);
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

// CompareAttributeData<int,TStringBuilderWithBuffer<wchar_t,1024>_> @ 14937c770

bool __cdecl
NiagaraSimCacheCompareInternal::CompareAttributeData<int,TStringBuilderWithBuffer<wchar_t,1024>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          TStringBuilderWithBuffer<wchar_t,1024> *param_5,float param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar10 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar10) {
    local_80 = 0;
    do {
      uVar9 = 0;
      uVar8 = uVar9;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar8 = *(uint *)((param_1->AllocatorInstance).Data + local_80);
      if (0 < param_4) {
        iVar12 = uVar11 - uVar8;
        do {
          iVar1 = iVar12 + uVar8;
          if ((((iVar1 < 0) || (param_2->ArrayNum <= iVar1)) || ((int)uVar8 < 0)) ||
             (param_3->ArrayNum <= (int)uVar8)) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       L"Unable to find source data for particle ID ",0x2b);
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_48,uVar11);
            iVar10 = local_48.Data.ArrayNum + -1;
            if (local_48.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_48.Data.AllocatorInstance.Data,iVar10);
            FVar7.Data = local_48.Data.AllocatorInstance.Data;
LAB_14937ca7f:
            if (FVar7.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar7.Data);
            }
            return false;
          }
          if ((iVar1 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar1 = *(int *)((param_2->AllocatorInstance).Data + (ulonglong)(iVar12 + uVar8) * 4);
          uVar6 = 0;
          if ((int)uVar8 < param_3->ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar2 = *(int *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
          if (iVar1 != iVar2) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L"Particle ID ",0xc);
            local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_78.Data.ArrayNum = 0;
            local_78.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_78,uVar11);
            iVar12 = 0;
            iVar10 = local_78.Data.ArrayNum + -1;
            if (local_78.Data.ArrayNum == 0) {
              iVar10 = iVar12;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_78.Data.AllocatorInstance.Data,iVar10);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L", Expected: ",0xc);
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_68,iVar1);
            iVar10 = local_68.Data.ArrayNum + -1;
            if (local_68.Data.ArrayNum == 0) {
              iVar10 = iVar12;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_68.Data.AllocatorInstance.Data,iVar10);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L", Actual: ",10);
            local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.Data.ArrayNum = 0;
            local_58.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_58,iVar2);
            iVar10 = local_58.Data.ArrayNum + -1;
            if (local_58.Data.ArrayNum == 0) {
              iVar10 = iVar12;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_58.Data.AllocatorInstance.Data,iVar10);
            FVar7.Data = local_58.Data.AllocatorInstance.Data;
            goto LAB_14937ca7f;
          }
          uVar9 = uVar9 + 1;
          uVar8 = uVar8 + iVar10;
        } while ((int)uVar9 < param_4);
      }
      uVar11 = uVar11 + 1;
      local_80 = local_80 + 4;
    } while ((int)uVar11 < iVar10);
  }
  return true;
}

// CompareAttributeData<float,TStringBuilderWithBuffer<wchar_t,1024>_> @ 14937cab0

bool __cdecl
NiagaraSimCacheCompareInternal::CompareAttributeData<float,TStringBuilderWithBuffer<wchar_t,1024>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          TStringBuilderWithBuffer<wchar_t,1024> *param_5,float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [5];
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar13 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar13) {
    local_b8 = 0;
    do {
      uVar12 = 0;
      uVar9 = uVar12;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar9 = *(uint *)((param_1->AllocatorInstance).Data + local_b8);
      if (0 < param_4) {
        iVar11 = uVar10 - uVar9;
        do {
          iVar1 = uVar9 + iVar11;
          if ((((iVar1 < 0) || (param_2->ArrayNum <= iVar1)) || ((int)uVar9 < 0)) ||
             (param_3->ArrayNum <= (int)uVar9)) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       L"Unable to find source data for particle ID ",0x2b);
            local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a0.Data.ArrayNum = 0;
            local_a0.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_a0,uVar10);
            iVar13 = local_a0.Data.ArrayNum + -1;
            if (local_a0.Data.ArrayNum == 0) {
              iVar13 = 0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar13);
            local_80[0].Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
LAB_14937cde0:
            if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
            }
            return false;
          }
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          fVar2 = *(float *)((param_2->AllocatorInstance).Data + (ulonglong)(uVar9 + iVar11) * 4);
          uVar8 = 0;
          if ((int)uVar9 < param_3->ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          fVar3 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
          if (param_6 < (float)((uint)(fVar2 - fVar3) & uVar5)) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L"Particle ID ",0xc);
            local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b0.Data.ArrayNum = 0;
            local_b0.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_b0,uVar10);
            iVar11 = 0;
            iVar13 = local_b0.Data.ArrayNum + -1;
            if (local_b0.Data.ArrayNum == 0) {
              iVar13 = iVar11;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar13);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L", Expected: ",0xc);
            ::FString::SanitizeFloat(&local_90,(double)fVar2,1);
            iVar13 = local_90.Data.ArrayNum + -1;
            if (local_90.Data.ArrayNum == 0) {
              iVar13 = iVar11;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_90.Data.AllocatorInstance.Data,iVar13);
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L", Actual: ",10);
            ::FString::SanitizeFloat(local_80,(double)fVar3,1);
            iVar13 = local_80[0].Data.ArrayNum + -1;
            if (local_80[0].Data.ArrayNum == 0) {
              iVar13 = iVar11;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_80[0].Data.AllocatorInstance.Data,iVar13);
            goto LAB_14937cde0;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + iVar13;
        } while ((int)uVar12 < param_4);
      }
      uVar10 = uVar10 + 1;
      local_b8 = local_b8 + 4;
    } while ((int)uVar10 < iVar13);
  }
  return true;
}

// CompareAttributeData<FFloat16,TStringBuilderWithBuffer<wchar_t,1024>_> @ 14937ce30

bool __cdecl
NiagaraSimCacheCompareInternal::
CompareAttributeData<FFloat16,TStringBuilderWithBuffer<wchar_t,1024>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          TStringBuilderWithBuffer<wchar_t,1024> *param_5,float param_6)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  ushort local_c8 [2];
  ushort local_c4 [2];
  longlong local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88 [5];
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar11 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar11) {
    local_c0 = 0;
    do {
      lVar4 = local_c0;
      uVar8 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      uVar8 = *(uint *)((param_1->AllocatorInstance).Data + lVar4);
      iVar10 = 0;
      if (0 < param_4) {
        iVar9 = uVar12 - uVar8;
        do {
          iVar1 = iVar9 + uVar8;
          if ((((iVar1 < 0) || (param_2->ArrayNum <= iVar1)) || ((int)uVar8 < 0)) ||
             (param_3->ArrayNum <= (int)uVar8)) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       L"Unable to find source data for particle ID ",0x2b);
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Data.ArrayNum = 0;
            local_a8.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_a8,uVar12);
            iVar11 = local_a8.Data.ArrayNum + -1;
            if (local_a8.Data.ArrayNum == 0) {
              iVar11 = 0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar11);
            local_88[0].Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
LAB_14937d165:
            if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
            }
            return false;
          }
          if ((iVar1 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          local_c8[0] = *(ushort *)
                         ((param_2->AllocatorInstance).Data + (ulonglong)(iVar9 + uVar8) * 2);
          uVar7 = 0;
          if ((int)uVar8 < param_3->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          local_c4[0] = *(ushort *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar8 * 2);
          fVar13 = FGenericPlatformMath::LoadHalf(local_c8);
          fVar14 = FGenericPlatformMath::LoadHalf(local_c4);
          if (param_6 < (float)((uint)(fVar13 - fVar14) & uVar3)) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L"Particle ID ",0xc);
            local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.Data.ArrayNum = 0;
            local_b8.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_b8,uVar12);
            iVar10 = 0;
            iVar11 = local_b8.Data.ArrayNum + -1;
            if (local_b8.Data.ArrayNum == 0) {
              iVar11 = iVar10;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar11);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L", Expected: ",0xc);
            ::FString::SanitizeFloat(&local_98,(double)fVar13,1);
            iVar11 = local_98.Data.ArrayNum + -1;
            if (local_98.Data.ArrayNum == 0) {
              iVar11 = iVar10;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_98.Data.AllocatorInstance.Data,iVar11);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,L", Actual: ",10);
            ::FString::SanitizeFloat(local_88,(double)fVar14,1);
            iVar11 = local_88[0].Data.ArrayNum + -1;
            if (local_88[0].Data.ArrayNum == 0) {
              iVar11 = iVar10;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_5,
                       (wchar_t *)local_88[0].Data.AllocatorInstance.Data,iVar11);
            goto LAB_14937d165;
          }
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 + iVar11;
        } while (iVar10 < param_4);
      }
      uVar12 = uVar12 + 1;
      local_c0 = local_c0 + 4;
    } while ((int)uVar12 < iVar11);
  }
  return true;
}

// CompareQuatAttributeData<TStringBuilderWithBuffer<wchar_t,1024>_> @ 14937d1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
NiagaraSimCacheCompareInternal::CompareQuatAttributeData<TStringBuilderWithBuffer<wchar_t,1024>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TStringBuilderWithBuffer<wchar_t,1024> *param_4,float param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  FString local_188;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0 [11];
  
  uVar17 = _UNK_15061cc7c;
  uVar16 = _UNK_15061cc78;
  uVar15 = _UNK_15061cc74;
  uVar26 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar10 = param_1->ArrayNum;
  local_168 = (longlong)iVar10;
  uVar24 = 0;
  if (0 < iVar10) {
    lVar27 = local_168 * 8;
    local_178 = local_168 * 4;
    local_170 = -local_168;
    local_168 = -local_168;
    do {
      lVar1 = local_168;
      uVar20 = 0;
      if ((int)uVar24 < param_1->ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      lVar1 = lVar27 + lVar1 * 8;
      uVar23 = iVar10 * 3 + uVar24;
      uVar20 = *(uint *)((param_1->AllocatorInstance).Data + lVar1);
      uVar21 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      uVar23 = iVar10 * 2 + uVar24;
      fVar2 = *(float *)((param_2->AllocatorInstance).Data + lVar27 + local_178);
      uVar21 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      fVar3 = *(float *)((param_2->AllocatorInstance).Data + lVar27);
      uVar21 = 0;
      if ((int)(iVar10 + uVar24) < param_2->ArrayNum) {
        uVar21 = ~(iVar10 + uVar24) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      fVar4 = *(float *)((param_2->AllocatorInstance).Data + lVar27 + local_170 * 4);
      uVar21 = 0;
      if ((int)uVar24 < param_2->ArrayNum) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      uVar23 = iVar10 * 3 + uVar20;
      fVar5 = *(float *)((param_2->AllocatorInstance).Data + lVar1);
      uVar21 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      uVar25 = iVar10 * 2 + uVar20;
      fVar6 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar23 * 4);
      uVar21 = 0;
      if ((int)uVar25 < param_3->ArrayNum) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      uVar23 = uVar20 + iVar10;
      fVar7 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar25 * 4);
      uVar21 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      fVar8 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar23 * 4);
      uVar21 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar12 = (code *)swi(3);
        uVar19 = (*pcVar12)();
        return (bool)uVar19;
      }
      pFVar11 = (param_3->AllocatorInstance).Data;
      fVar9 = *(float *)(pFVar11 + (longlong)(int)uVar20 * 4);
      auVar13._4_4_ = -(uint)(param_5 < (float)((uint)(fVar4 - fVar8) & uVar15));
      auVar13._0_4_ = -(uint)(param_5 < (float)((uint)(fVar5 - fVar9) & uVar26));
      auVar13._8_4_ = -(uint)(param_5 < (float)((uint)(fVar3 - fVar7) & uVar16));
      auVar13._12_4_ = -(uint)(param_5 < (float)((uint)(fVar2 - fVar6) & uVar17));
      iVar22 = movmskps((int)pFVar11,auVar13);
      if ((iVar22 != 0) &&
         (auVar14._4_4_ = -(uint)(param_5 < (float)((uint)(fVar8 + fVar4) & uVar15)),
         auVar14._0_4_ = -(uint)(param_5 < (float)((uint)(fVar9 + fVar5) & uVar26)),
         auVar14._8_4_ = -(uint)(param_5 < (float)((uint)(fVar7 + fVar3) & uVar16)),
         auVar14._12_4_ = -(uint)(param_5 < (float)((uint)(fVar6 + fVar2) & uVar17)),
         iVar22 = movmskps(iVar22,auVar14), iVar22 != 0)) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_4,L"Particle ID ",0xc);
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_188,uVar24);
        uVar26 = local_188.Data.ArrayNum - 1;
        if (local_188.Data.ArrayNum == 0) {
          uVar26 = 0;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_4,
                   (wchar_t *)local_188.Data.AllocatorInstance.Data,uVar26);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_4,L", Expected: ",0xc);
        ::FString::SanitizeFloat(&local_130,(double)fVar2,1);
        ::FString::SanitizeFloat(&local_140,(double)fVar3,1);
        ::FString::SanitizeFloat(&local_150,(double)fVar4,1);
        ::FString::SanitizeFloat(&local_160,(double)fVar5,1);
        TStringBuilderBase<wchar_t>::AppendfImpl
                  ((TStringBuilderBase<wchar_t> *)param_4,L"(%s, %s, %s, %s)");
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_4,L", Actual: ",10);
        ::FString::SanitizeFloat(local_f0,(double)fVar6,1);
        ::FString::SanitizeFloat(&local_100,(double)fVar7,1);
        ::FString::SanitizeFloat(&local_110,(double)fVar8,1);
        ::FString::SanitizeFloat(&local_120,(double)fVar9,1);
        TStringBuilderBase<wchar_t>::AppendfImpl
                  ((TStringBuilderBase<wchar_t> *)param_4,L"(%s, %s, %s, %s)");
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (local_f0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0[0].Data.AllocatorInstance.Data);
        }
        return false;
      }
      uVar24 = uVar24 + 1;
      lVar27 = lVar27 + 4;
    } while ((int)uVar24 < iVar10);
  }
  return true;
}

// ConstructItems<FNiagaraCompilerTag,FNiagaraCompilerTag,int> @ 14937d8f0

void __cdecl
ConstructItems<FNiagaraCompilerTag,FNiagaraCompilerTag,int>
          (void *param_1,FNiagaraCompilerTag *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FNiagaraVariable::FNiagaraVariable
                ((FNiagaraVariable *)(lVar1 + (longlong)param_2),&param_2->Variable);
      FString::FString((FString *)(lVar1 + 0x20 + (longlong)param_2),&param_2->StringValue);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraDataSetProperties,FNiagaraDataSetProperties,int> @ 14937d950

void __cdecl
ConstructItems<FNiagaraDataSetProperties,FNiagaraDataSetProperties,int>
          (void *param_1,FNiagaraDataSetProperties *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType *pFVar4;
  
  if (param_3 != 0) {
    pTVar3 = &param_2->Variables;
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    do {
      *(FName *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pTVar3) =
           (((FNiagaraDataSetProperties *)(pTVar3 + -1))->ID).Name;
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar3) =
           *(undefined4 *)&(((FNiagaraDataSetProperties *)(pTVar3 + -1))->ID).Type;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar3->ArrayNum;
      _Src = (pTVar3->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 0xc);
      }
      pTVar3 = pTVar3 + 2;
      pFVar4 = pFVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraScriptDataInterfaceCompileInfo,FNiagaraScriptDataInterfaceCompileInfo,int> @ 14937da30

void __cdecl
ConstructItems<FNiagaraScriptDataInterfaceCompileInfo,FNiagaraScriptDataInterfaceCompileInfo,int>
          (void *param_1,FNiagaraScriptDataInterfaceCompileInfo *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  FNiagaraTypeDefinition *pFVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    pFVar3 = &param_2->Type;
    do {
      puVar2[-2] = *(undefined8 *)
                    ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)puVar2);
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)((longlong)(pFVar3 + -1) + 0x10);
      pUVar1 = (pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr;
      *puVar2 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      *(ushort *)(puVar2 + 1) = pFVar3->UnderlyingType;
      *(uchar *)((longlong)puVar2 + 10) = pFVar3->Flags;
      *(short *)((longlong)puVar2 + 0xc) = pFVar3->Size;
      *(short *)((longlong)puVar2 + 0xe) = pFVar3->Alignment;
      *(int *)(puVar2 + 2) = pFVar3->RegisteredTypeDefIndex;
      *(uint *)((longlong)puVar2 + 0x14) = pFVar3->UnderlyingTypePathNameHash;
      *(FName *)(puVar2 + 3) = *(FName *)(pFVar3 + 1);
      *(FName *)(puVar2 + 4) = ((FName *)(pFVar3 + 1))[1];
      *(bool *)(puVar2 + 5) = *(bool *)((FName *)(pFVar3 + 1) + 2);
      FString::FString((FString *)(puVar2 + 6),(FString *)(pFVar3 + 2));
      pFVar3 = (FNiagaraTypeDefinition *)((longlong)(pFVar3 + 3) + 8);
      puVar2 = puVar2 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraScriptUObjectCompileInfo,FNiagaraScriptUObjectCompileInfo,int> @ 14937db10

void __cdecl
ConstructItems<FNiagaraScriptUObjectCompileInfo,FNiagaraScriptUObjectCompileInfo,int>
          (void *param_1,FNiagaraScriptUObjectCompileInfo *param_2,int param_3)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  int iVar2;
  TObjectPtr<UObject> TVar3;
  UObject *_Src;
  TObjectPtr<UObject>_u_0 *pTVar4;
  TObjectPtr<UObject>_u_0 *pTVar5;
  
  if (param_3 != 0) {
    pTVar4 = &(param_2->Object).field0_0x0;
    pTVar5 = (TObjectPtr<UObject>_u_0 *)((longlong)param_1 + 0x10);
    do {
      *(TObjectPtr<UObject>_u_0 *)
       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pTVar4) = pTVar4[-2];
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar4) =
           *(undefined4 *)(pTVar4 + -1);
      TVar3.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar4->DebugPtr;
      pTVar5->DebugPtr = (UObject *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)&pTVar5[1].ObjectPtr,(FSoftObjectPath *)&pTVar4[1].ObjectPtr);
      pTVar1 = pTVar5 + 6;
      pTVar5[5] = pTVar4[5];
      pTVar1->DebugPtr = (UObject *)0x0;
      iVar2 = *(int *)(pTVar4 + 7);
      _Src = pTVar4[6].DebugPtr;
      *(int *)(pTVar5 + 7) = iVar2;
      if (iVar2 == 0) {
        *(int *)((longlong)pTVar5 + 0x3c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,(ForAnyElementType *)&pTVar1->ObjectPtr,iVar2,
                   (int *)((longlong)pTVar5 + 0x3c));
        memcpy((FScriptContainerElement *)pTVar1->DebugPtr,_Src,(longlong)iVar2 << 3);
      }
      pTVar5 = pTVar5 + 10;
      pTVar4 = pTVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraSimCacheDataBuffersLayout,FNiagaraSimCacheDataBuffersLayout,int> @ 14937dc30

void __cdecl
ConstructItems<FNiagaraSimCacheDataBuffersLayout,FNiagaraSimCacheDataBuffersLayout,int>
          (void *param_1,FNiagaraSimCacheDataBuffersLayout *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x38);
    piVar5 = &(param_2->RebaseVariableNames).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + -10);
      *(undefined8 *)((longlong)piVar5 + (longlong)param_1 + (-0x38 - (longlong)param_2)) =
           *(undefined8 *)(piVar5 + -0xe);
      *(char *)(piVar4 + -0xc) = (char)piVar5[-0xc];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar5[-8];
      pvVar3 = *(void **)(piVar5 + -10);
      piVar4[-8] = iVar2;
      if (iVar2 == 0) {
        piVar4[-7] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar2,0,pFVar1,iVar2,piVar4 + -7);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 * 0x18);
      }
      pFVar1 = (ForAnyElementType *)(piVar4 + -2);
      *(short *)(piVar4 + -6) = (short)piVar5[-6];
      *(undefined2 *)((longlong)piVar4 + -0x16) = *(undefined2 *)((longlong)piVar5 + -0x16);
      *(short *)(piVar4 + -5) = (short)piVar5[-5];
      *(undefined1 *)((longlong)piVar4 + -0x12) = *(undefined1 *)((longlong)piVar5 + -0x12);
      *(undefined1 *)((longlong)piVar4 + -0x11) = *(undefined1 *)((longlong)piVar5 + -0x11);
      *(char *)(piVar4 + -4) = (char)piVar5[-4];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar5;
      _Src = (((TArray<FName,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->AllocatorInstance).Data;
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar1,iVar2,piVar4 + 1);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
      piVar4[2] = 0;
      piVar4[3] = 0;
      iVar2 = piVar5[4];
      pvVar3 = *(void **)(piVar5 + 2);
      piVar4[4] = iVar2;
      if (iVar2 == 0) {
        piVar4[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,(ForAnyElementType *)(piVar4 + 2),iVar2,piVar4 + 5);
        memcpy(((ForAnyElementType *)(piVar4 + 2))->Data,pvVar3,(longlong)iVar2 << 3);
      }
      pFVar1 = (ForAnyElementType *)(piVar4 + 10);
      *(short *)(piVar4 + 6) = (short)piVar5[6];
      *(short *)(piVar4 + 8) = (short)piVar5[8];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar5[0xc];
      pvVar3 = *(void **)(piVar5 + 10);
      piVar4[0xc] = iVar2;
      if (iVar2 == 0) {
        piVar4[0xd] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,pFVar1,iVar2,piVar4 + 0xd);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 * 2);
      }
      FNiagaraSimCacheDataBuffersLayout::FCacheBufferReadInfo::FCacheBufferReadInfo
                ((FCacheBufferReadInfo *)(piVar4 + 0xe),(FCacheBufferReadInfo *)(piVar5 + 0xe));
      *(char *)(piVar4 + 0x16) = (char)piVar5[0x16];
      FNiagaraSimCacheDataBuffersLayout::FCacheBufferReadInfo::FCacheBufferReadInfo
                ((FCacheBufferReadInfo *)(piVar4 + 0x18),(FCacheBufferReadInfo *)(piVar5 + 0x18));
      piVar4 = piVar4 + 0x2e;
      piVar5 = piVar5 + 0x2e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraSimCacheEmitterFrame,FNiagaraSimCacheEmitterFrame,int> @ 14937de80

void __cdecl
ConstructItems<FNiagaraSimCacheEmitterFrame,FNiagaraSimCacheEmitterFrame,int>
          (void *param_1,FNiagaraSimCacheEmitterFrame *param_2,int param_3)

{
  undefined8 *puVar1;
  ulong64 _Size;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  void *_Dst;
  undefined4 *puVar6;
  FNiagaraSimCacheDataBuffers *pFVar7;
  
  if (param_3 != 0) {
    puVar6 = (undefined4 *)((longlong)param_1 + 0x38);
    lVar4 = -0x40 - (longlong)param_2;
    do {
      pFVar7 = &param_2->ParticleDataBuffers;
      uVar3 = *(undefined8 *)((longlong)(pFVar7 + -1) + 0x60);
      puVar1 = (undefined8 *)((longlong)param_1 + lVar4 + (longlong)pFVar7);
      *puVar1 = *(undefined8 *)((longlong)(pFVar7 + -1) + 0x58);
      puVar1[1] = uVar3;
      uVar3 = *(undefined8 *)((longlong)(pFVar7 + -1) + 0x70);
      puVar1[2] = *(undefined8 *)((longlong)(pFVar7 + -1) + 0x68);
      puVar1[3] = uVar3;
      uVar3 = *(undefined8 *)((longlong)(pFVar7 + -1) + 0x80);
      puVar1[4] = *(undefined8 *)((longlong)(pFVar7 + -1) + 0x78);
      puVar1[5] = uVar3;
      puVar1[6] = *(undefined8 *)((longlong)(pFVar7 + -1) + 0x88);
      *puVar6 = *(undefined4 *)((longlong)(pFVar7 + -1) + 0x90);
      puVar6[2] = pFVar7->NumInstances;
      puVar6[3] = pFVar7->IDAcquireTag;
      puVar6[4] = pFVar7->IDToIndexTableElements;
      uVar3 = *(undefined8 *)&(pFVar7->FloatData).ArrayNum;
      *(uchar **)(puVar6 + 6) = (pFVar7->FloatData).DataPtr;
      *(undefined8 *)(puVar6 + 8) = uVar3;
      uVar3 = *(undefined8 *)&(pFVar7->HalfData).ArrayNum;
      *(uchar **)(puVar6 + 10) = (pFVar7->HalfData).DataPtr;
      *(undefined8 *)(puVar6 + 0xc) = uVar3;
      uVar3 = *(undefined8 *)&(pFVar7->Int32Data).ArrayNum;
      *(uchar **)(puVar6 + 0xe) = (pFVar7->Int32Data).DataPtr;
      *(undefined8 *)(puVar6 + 0x10) = uVar3;
      uVar3 = *(undefined8 *)&(pFVar7->IDToIndexTable).ArrayNum;
      *(int **)(puVar6 + 0x12) = (pFVar7->IDToIndexTable).DataPtr;
      *(undefined8 *)(puVar6 + 0x14) = uVar3;
      uVar3 = *(undefined8 *)&(pFVar7->InterpMapping).ArrayNum;
      *(uint **)(puVar6 + 0x16) = (pFVar7->InterpMapping).DataPtr;
      *(undefined8 *)(puVar6 + 0x18) = uVar3;
      *(undefined8 *)(puVar6 + 0x1a) = 0;
      *(undefined8 *)(puVar6 + 0x1c) = 0;
      if (puVar1 != (undefined8 *)((longlong)(pFVar7 + -1) + 0x58)) {
        _Size = (pFVar7->DataBuffer).View.ArrayNum;
        _Dst = FMemory::Malloc(_Size,0);
        memcpy(_Dst,(pFVar7->DataBuffer).View.DataPtr,_Size);
        if (((longlong)_Size < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(void **)(puVar6 + 0x1a) = _Dst;
        *(ulong64 *)(puVar6 + 0x1c) = _Size;
      }
      FBulkData::FBulkData((FBulkData *)(puVar6 + 0x1e),(FBulkData *)&pFVar7->BulkData);
      puVar6 = puVar6 + 0x36;
      param_2 = (FNiagaraSimCacheEmitterFrame *)(pFVar7 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVMExternalFunctionBindingInfo,FVMExternalFunctionBindingInfo,int> @ 14937dff0

void __cdecl
ConstructItems<FVMExternalFunctionBindingInfo,FVMExternalFunctionBindingInfo,int>
          (void *param_1,FVMExternalFunctionBindingInfo *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x30);
    piVar5 = &(param_2->FunctionSpecifiers).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar4 + -8);
      *(undefined8 *)((longlong)piVar5 + (longlong)param_1 + (-0x30 - (longlong)param_2)) =
           *(undefined8 *)(piVar5 + -0xc);
      *(undefined8 *)(piVar4 + -10) = *(undefined8 *)(piVar5 + -10);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar5[-6];
      pvVar3 = *(void **)(piVar5 + -8);
      piVar4[-6] = iVar2;
      if (iVar2 == 0) {
        piVar4[-5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,pFVar1,iVar2,piVar4 + -5);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2);
      }
      pFVar1 = (ForAnyElementType *)(piVar4 + -2);
      piVar4[-4] = piVar5[-4];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar5;
      _Src = (((TArray<FVMFunctionSpecifier,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
             AllocatorInstance).Data;
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,0,pFVar1,iVar2,piVar4 + 1);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 4);
      }
      piVar4[2] = 0;
      piVar4[3] = 0;
      iVar2 = piVar5[4];
      pvVar3 = *(void **)(piVar5 + 2);
      piVar4[4] = iVar2;
      if (iVar2 == 0) {
        piVar4[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,(ForAnyElementType *)(piVar4 + 2),iVar2,piVar4 + 5);
        memcpy(((ForAnyElementType *)(piVar4 + 2))->Data,pvVar3,(longlong)iVar2 * 0xc);
      }
      piVar4[6] = 0;
      piVar4[7] = 0;
      iVar2 = piVar5[8];
      pvVar3 = *(void **)(piVar5 + 6);
      piVar4[8] = iVar2;
      if (iVar2 == 0) {
        piVar4[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,(ForAnyElementType *)(piVar4 + 6),iVar2,piVar4 + 9);
        memcpy(((ForAnyElementType *)(piVar4 + 6))->Data,pvVar3,(longlong)iVar2 * 0xc);
      }
      piVar4 = piVar4 + 0x16;
      piVar5 = piVar5 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int> @ 14937e1e0

void __cdecl
ConstructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
          (void *param_1,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)
       &((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *)
        param_1)->field_0x8 = 0;
      *(undefined4 *)
       &((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *)
        param_1)->field_0x10 = 0;
      TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (param_1,(TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                          *)(lVar1 + (longlong)param_1));
      param_1 = (void *)((longlong)param_1 + 0x18);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<`FNiagaraScalabilityManager::ProcessSignificance'::__l2::FCullProxyCreateDestroyTask,int> @ 14937e260

void __cdecl
DefaultConstructItems<_FNiagaraScalabilityManager::ProcessSignificance_::__l2::FCullProxyCreateDestroyTask,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FDataSetMeta,int> @ 14937e290

void __cdecl DefaultConstructItems<FDataSetMeta,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[5] = 0xffffffffffffffff;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<NiagaraRendererVolumesLocal::FHeterogeneousVolumeInstances::FInstance,int> @ 14937e2f0

void __cdecl
DefaultConstructItems<NiagaraRendererVolumesLocal::FHeterogeneousVolumeInstances::FInstance,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FNiagaraDataSetExecutionInfo,int> @ 14937e300

void __cdecl DefaultConstructItems<FNiagaraDataSetExecutionInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)((longlong)param_1 + 8);
    do {
      *plVar4 = 0;
      *(undefined4 *)(plVar4 + 1) = 0;
      *(undefined1 *)((longlong)plVar4 + 0xc) = 0;
      plVar4[-1] = 0;
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        *plVar4 = 0;
        if ((*(int *)(lVar1 + 8) < 1) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IsBeingRead()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x2c,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
        UNLOCK();
      }
      *(undefined4 *)(plVar4 + 1) = 0xffffffff;
      *(undefined1 *)((longlong)plVar4 + 0xc) = 0;
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraPerInstanceDIFuncInfo,int> @ 14937e3b0

void __cdecl DefaultConstructItems<FNiagaraPerInstanceDIFuncInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraScalabilityState,int> @ 14937e3e0

void __cdecl DefaultConstructItems<FNiagaraScalabilityState,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 10);
    do {
      *(undefined8 *)(puVar1 + -10) = 0x3f800000;
      *(undefined2 *)(puVar1 + -2) = 0xffff;
      *puVar1 = 1;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraScalabilitySystemData,int> @ 14937e420

void __cdecl DefaultConstructItems<FNiagaraScalabilitySystemData,int>(void *param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)((longlong)param_1 + 4);
    do {
      *puVar1 = *puVar1 & 0xfffc;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraSimCacheDataBuffersLayout,int> @ 14937e450

void __cdecl DefaultConstructItems<FNiagaraSimCacheDataBuffersLayout,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      puVar1[0x20] = 0;
      *(undefined8 *)(puVar1 + 0x28) = 0;
      *(undefined8 *)(puVar1 + 0x30) = 0;
      *(undefined8 *)(puVar1 + 0x38) = 0;
      *(undefined8 *)(puVar1 + 0x40) = 0;
      *(undefined2 *)(puVar1 + 0x48) = 0xffff;
      *(undefined2 *)(puVar1 + 0x50) = 0xffff;
      *(undefined8 *)(puVar1 + 0x58) = 0;
      *(undefined8 *)(puVar1 + 0x60) = 0;
      *(undefined8 *)(puVar1 + 0x68) = 0;
      *(undefined8 *)(puVar1 + 0x70) = 0;
      *(undefined8 *)(puVar1 + 0x78) = 0;
      *(undefined8 *)(puVar1 + 0x80) = 0;
      puVar1[0x88] = 0;
      *(undefined8 *)(puVar1 + 0x90) = 0;
      *(undefined8 *)(puVar1 + 0x98) = 0;
      *(undefined8 *)(puVar1 + 0xa0) = 0;
      *(undefined8 *)(puVar1 + 0xa8) = 0;
      puVar1 = puVar1 + 0xb8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraSimCacheDebugDataFrame,int> @ 14937e4f0

void __cdecl DefaultConstructItems<FNiagaraSimCacheDebugDataFrame,int>(void *param_1,int param_2)

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

// DefaultConstructItems<FNiagaraSimCacheEmitterFrame,int> @ 14937e540

void __cdecl DefaultConstructItems<FNiagaraSimCacheEmitterFrame,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x21) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x25) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x27) = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[10] = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0;
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      puVar1[0xe] = 0;
      *(undefined4 *)(puVar1 + 0xf) = 0;
      puVar1[0x10] = 0;
      *(undefined4 *)(puVar1 + 0x11) = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x16] = 0;
      *(undefined4 *)((longlong)puVar1 + 0xad) = 0xffffffff;
      *(undefined1 *)((longlong)puVar1 + 0xb1) = 0xff;
      puVar1[0x17] = FIoChunkId::InvalidChunkId.Id._0_8_;
      *(undefined4 *)(puVar1 + 0x18) = FIoChunkId::InvalidChunkId.Id._8_4_;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x1b;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraSimCacheFrame,int> @ 14937e610

void __cdecl DefaultConstructItems<FNiagaraSimCacheFrame,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x6c);
    do {
      *(double (*) [2])((longlong)puVar1 + -0x6c) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])((longlong)puVar1 + -0x5c) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])((longlong)puVar1 + -0x4c) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])((longlong)puVar1 + -0x3c) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])((longlong)puVar1 + -0x2c) =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *(double (*) [2])((longlong)puVar1 + -0x1c) =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      *(undefined8 *)((longlong)puVar1 + -0xc) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)((longlong)puVar1 + -4) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *puVar1 = 0;
      FNiagaraSimCacheSystemFrame::FNiagaraSimCacheSystemFrame
                ((FNiagaraSimCacheSystemFrame *)((longlong)puVar1 + 0xc));
      *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
      puVar1 = puVar1 + 0x2c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraSimCacheVariable,int> @ 14937e6d0

void __cdecl DefaultConstructItems<FNiagaraSimCacheVariable,int>(void *param_1,int param_2)

{
  int iVar1;
  FNiagaraTypeDefinitionHandle *this;
  
  if (param_2 != 0) {
    this = (FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(this + -2) = 0;
      iVar1 = FNiagaraTypeDefinitionHandle::Register(this,&FNiagaraTypeDefinition::Vec4Def);
      this->RegisteredTypeIndex = iVar1;
      this[1].RegisteredTypeIndex = 0xffff;
      this[2].RegisteredTypeIndex = 0xffff;
      this[3].RegisteredTypeIndex = 0xffff;
      this = this + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int> @ 14937e740

void __cdecl
DefaultConstructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraSystemScriptExecutionContext::FExternalFuncInfo,int> @ 14937e7b0

void __cdecl
DestructItems<FNiagaraSystemScriptExecutionContext::FExternalFuncInfo,int>
          (FExternalFuncInfo *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNiagaraCompilerTag,int> @ 14937e7f0

void __cdecl DestructItems<FNiagaraCompilerTag,int>(FNiagaraCompilerTag *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Variable).VarData;
    do {
      if (*(void **)(pTVar2 + 1) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + 1));
      }
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

// DestructItems<FNiagaraDataSetExecutionInfo,int> @ 14937e840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FNiagaraDataSetExecutionInfo,int>(FNiagaraDataSetExecutionInfo *param_1,int param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  do {
    if (param_2 == 0) {
      return;
    }
    FNiagaraDataSetExecutionInfo::Reset(param_1);
    pFVar1 = (param_1->Input).Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      if (((int)pFVar1->_padding_ < 1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

// DestructItems<FNiagaraDataSetProperties,int> @ 14937e8c0

void __cdecl
DestructItems<FNiagaraDataSetProperties,int>(FNiagaraDataSetProperties *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Variables;
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

// DestructItems<FNiagaraPlatformSetRedirect,int> @ 14937e900

void __cdecl
DestructItems<FNiagaraPlatformSetRedirect,int>(FNiagaraPlatformSetRedirect *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ProfileNames).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNiagaraScriptDataInterfaceCompileInfo,int> @ 14937e940

void __cdecl
DestructItems<FNiagaraScriptDataInterfaceCompileInfo,int>
          (FNiagaraScriptDataInterfaceCompileInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SourceEmitterName;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraScriptResolvedDataInterfaceInfo,int> @ 14937e980

void __cdecl
DestructItems<FNiagaraScriptResolvedDataInterfaceInfo,int>
          (FNiagaraScriptResolvedDataInterfaceInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ResolvedSourceEmitterName;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraScriptUObjectCompileInfo,int> @ 14937e9c0

void __cdecl
DestructItems<FNiagaraScriptUObjectCompileInfo,int>
          (FNiagaraScriptUObjectCompileInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->ObjectPath).SubPathString;
    do {
      if (*(void **)((longlong)(pFVar2 + 1) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + 1) + 8));
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraSimCacheDataBuffersLayout,int> @ 14937ea10

void __cdecl
DestructItems<FNiagaraSimCacheDataBuffersLayout,int>
          (FNiagaraSimCacheDataBuffersLayout *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer;
    do {
      if (*(void **)((longlong)(pTVar2 + 2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + 2) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + 1) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + 1) + 8));
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FCacheBufferReadInfo *)(pTVar2 + -1))->ComponentMappingsToDataBuffer).
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pTVar2 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -2));
      }
      if (*(void **)(pTVar2 + -4) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -4));
      }
      if (*(void **)(pTVar2 + -5) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -5));
      }
      if (*(void **)(pTVar2 + -7) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -7));
      }
      pTVar2 = (TArray<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping,TSizedDefaultAllocator<32>_>
                *)((longlong)(pTVar2 + 0xb) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraSimCacheDebugDataFrame,int> @ 14937eac0

void __cdecl
DestructItems<FNiagaraSimCacheDebugDataFrame,int>
          (FNiagaraSimCacheDebugDataFrame *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->DebugParameterStores).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FNiagaraParameterStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraSimCacheEmitterFrame,int> @ 14937eb20

void __cdecl
DestructItems<FNiagaraSimCacheEmitterFrame,int>(FNiagaraSimCacheEmitterFrame *param_1,int param_2)

{
  uchar *puVar1;
  FBulkDataBuffer<unsigned_char> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->ParticleDataBuffers).DataBuffer;
    do {
      FBulkData::~FBulkData((FBulkData *)(pFVar2 + 1));
      puVar1 = (pFVar2->View).DataPtr;
      if (puVar1 != (uchar *)0x0) {
        FMemory::Free(puVar1);
      }
      pFVar2 = (FBulkDataBuffer<unsigned_char> *)((longlong)(pFVar2 + 0xd) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraSimCacheFrame,int> @ 14937eb70

void __cdecl DestructItems<FNiagaraSimCacheFrame,int>(FNiagaraSimCacheFrame *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraSimCacheEmitterFrame,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->EmitterData;
    do {
      DestructItems<FNiagaraSimCacheEmitterFrame,int>
                ((FNiagaraSimCacheEmitterFrame *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FBulkData::~FBulkData((FBulkData *)((longlong)(pTVar2 + -3) + 8));
      if (*(void **)((longlong)(pTVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -4) + 8));
      }
      pTVar2 = pTVar2 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVMExternalFunctionBindingInfo,int> @ 14937ebe0

void __cdecl
DestructItems<FVMExternalFunctionBindingInfo,int>
          (FVMExternalFunctionBindingInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->VariadicInputs;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FVMFunctionSpecifier,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<bool,TSizedDefaultAllocator<32>_> *)((FName *)(pTVar2 + -3) + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::TSTR_FNiagaraSimCacheGpuResource_BuildResource83>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14937f7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSimCacheGpuResource::BuildResource_::__l2::TSTR_FNiagaraSimCacheGpuResource_BuildResource83>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::TSTR_FNiagaraSimCacheGpuResource_BuildResource83>
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
      if (bVar8) goto LAB_14937f941;
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
    goto LAB_14937fb35;
  }
LAB_14937f941:
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
LAB_14937fa1f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14937fa1f;
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
LAB_14937fb35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::TSTR_NiagaraRenderThreadDeletor21>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14937fb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()_::__l7::TSTR_NiagaraRenderThreadDeletor21>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::TSTR_NiagaraRenderThreadDeletor21>
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
      if (bVar8) goto LAB_14937fcc1;
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
    goto LAB_14937feb5;
  }
LAB_14937fcc1:
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
LAB_14937fd9f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14937fd9f;
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
LAB_14937feb5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::TSTR_NiagaraSimCacheGpuReadFrame876>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14937fef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSimCacheHelper::ReadDataBufferGPU_::__l2::TSTR_NiagaraSimCacheGpuReadFrame876>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::TSTR_NiagaraSimCacheGpuReadFrame876>
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
      if (bVar8) goto LAB_149380041;
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
    goto LAB_149380235;
  }
LAB_149380041:
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
LAB_14938011f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14938011f;
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
LAB_149380235:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::TSTR_NiagaraSimCacheGpuUpdateReadInfo863>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 149380270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSimCacheHelper::ReadDataBufferGPU_::__l15::TSTR_NiagaraSimCacheGpuUpdateReadInfo863>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::TSTR_NiagaraSimCacheGpuUpdateReadInfo863>
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
      if (bVar8) goto LAB_1493803c1;
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
    goto LAB_1493805b5;
  }
LAB_1493803c1:
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
LAB_14938049f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14938049f;
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
LAB_1493805b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTypeName<UNiagaraSpriteRendererProperties_const_> @ 149380f30

FString * __cdecl
GetTypeName<UNiagaraSpriteRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraVolumeRendererProperties_const_> @ 149380f70

FString * __cdecl
GetTypeName<UNiagaraVolumeRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraVolumeRendererProperties_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<INiagaraSimCacheCustomStorageInterface> @ 149380fb0

FString * __cdecl
GetTypeName<INiagaraSimCacheCustomStorageInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraRibbonRendererProperties> @ 149380ff0

FString * __cdecl GetTypeName<UNiagaraRibbonRendererProperties>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraRibbonRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>_>_> @ 149381030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FNiagaraScalabilityManager::ProcessSignificance_::__l2::<lambda_2>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::<lambda_2>_>
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
LAB_14938114c:
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
                  bVar3 = `FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>::
                          operator()(param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>::
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
      bVar3 = `FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14938114c;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_2>_> @ 149381230

void __cdecl
AlgoImpl::
HeapSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,_FNiagaraSimCacheJson::EmitterFrameToJson_::__l5::<lambda_2>_>
          (FNiagaraVariableBase *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FNiagaraVariableBase *pFVar1;
  FNiagaraVariableBase *this;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FNiagaraVariableBase *pFVar12;
  
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
  iVar7 = iVar5 * 2 + 1;
  iVar8 = iVar7;
  iVar10 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_14938136b:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar12 = param_1 + lVar11;
          do {
            FVar2 = param_1->Name;
            iVar8 = (param_1->TypeDefHandle).RegisteredTypeIndex;
            param_1->Name = pFVar12->Name;
            (param_1->TypeDefHandle).RegisteredTypeIndex =
                 (pFVar12->TypeDefHandle).RegisteredTypeIndex;
            pFVar12->Name = FVar2;
            (pFVar12->TypeDefHandle).RegisteredTypeIndex = iVar8;
            iVar8 = 0;
            if (1 < iVar7) {
              do {
                iVar5 = iVar8 * 2;
                iVar10 = iVar5 + 1;
                if (iVar5 + 2 < iVar7) {
                  iVar9 = ::FName::Compare(&param_1[iVar5 + 2].Name,&param_1[iVar10].Name);
                  if (iVar9 < 0) {
                    iVar10 = iVar5;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar10;
                this = param_1 + iVar8;
                iVar8 = ::FName::Compare(&this->Name,&pFVar1->Name);
                if (-1 < iVar8) break;
                FVar2 = this->Name;
                iVar8 = (this->TypeDefHandle).RegisteredTypeIndex;
                this->Name = pFVar1->Name;
                (this->TypeDefHandle).RegisteredTypeIndex =
                     (pFVar1->TypeDefHandle).RegisteredTypeIndex;
                pFVar1->Name = FVar2;
                (pFVar1->TypeDefHandle).RegisteredTypeIndex = iVar8;
                iVar8 = iVar10;
              } while (iVar10 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar5 = iVar10 + -1;
      iVar7 = iVar8 + -2;
      iVar8 = iVar7;
      iVar10 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      iVar6 = ::FName::Compare(&param_1[iVar7 + 2].Name,&param_1[iVar9].Name);
      if (iVar6 < 0) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar12 = param_1 + iVar9;
    pFVar1 = param_1 + iVar5;
    iVar7 = ::FName::Compare(&pFVar1->Name,&pFVar12->Name);
    if (-1 < iVar7) goto LAB_14938136b;
    FVar2 = pFVar1->Name;
    iVar5 = (pFVar1->TypeDefHandle).RegisteredTypeIndex;
    pFVar1->Name = pFVar12->Name;
    (pFVar1->TypeDefHandle).RegisteredTypeIndex = (pFVar12->TypeDefHandle).RegisteredTypeIndex;
    iVar7 = iVar9 * 2 + 1;
    pFVar12->Name = FVar2;
    (pFVar12->TypeDefHandle).RegisteredTypeIndex = iVar5;
    iVar5 = iVar9;
  } while( true );
}

// IntCastChecked<unsigned_short,unsigned_short> @ 1493814a0

ushort __cdecl IntCastChecked<unsigned_short,unsigned_short>(ushort param_1)

{
  return param_1;
}

// IntCastChecked<unsigned_int,unsigned_short> @ 1493814b0

uint __cdecl IntCastChecked<unsigned_int,unsigned_short>(ushort param_1)

{
  return (uint)param_1;
}

// InternalConstructor<UAsyncNiagaraCaptureSimCache> @ 1493814c0

void __cdecl InternalConstructor<UAsyncNiagaraCaptureSimCache>(FObjectInitializer *param_1)

{
  uint uVar1;
  UCancellableAsyncAction *this;
  
  this = (UCancellableAsyncAction *)param_1->Obj;
  if (this != (UCancellableAsyncAction *)0x0) {
    UCancellableAsyncAction::UCancellableAsyncAction(this,param_1);
    *(undefined ***)this = &___7UAsyncNiagaraCaptureSimCache__6B_;
    uVar1 = *(uint *)&this[4].field_0x2c;
    *(uint *)&this[3].field_0x10 = *(uint *)&this[3].field_0x10 & 0xfffffffe;
    *(uint *)&this[4].field_0x8 = *(uint *)&this[4].field_0x8 & 0xfffffffe;
    *(uint *)&this[3].field_0x10 = *(uint *)&this[3].field_0x10 | 2;
    *(uint *)&this[3].field_0x1c = *(uint *)&this[3].field_0x1c | 1;
    *(uint *)&this[3].field_0x24 = *(uint *)&this[3].field_0x24 & 0xfffffffe;
    *(uint *)&this[4].field_0x8 = *(uint *)&this[4].field_0x8 | 2;
    *(uint *)&this[4].field_0x14 = *(uint *)&this[4].field_0x14 | 1;
    *(uint *)&this[4].field_0x1c = *(uint *)&this[4].field_0x1c & 0xfffffffe;
    *(undefined8 *)(this + 1) = 0;
    *(uint *)&this[4].field_0x2c = uVar1 & 0xffffffab | 0x2b;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 2;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x10;
    *(undefined4 *)&this[3].field_0x18 = 1;
    *(undefined4 *)&this[3].field_0x20 = 10;
    *(undefined8 *)&this[3].field_0x28 = 0x3c887a8d;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0xc = 0x10;
    *(undefined4 *)&this[4].field_0x10 = 1;
    *(undefined4 *)&this[4].field_0x18 = 10;
    *(undefined4 *)&this[4].field_0x20 = 0x3c887a8d;
    this[4].field_0x28 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraRibbonRendererProperties> @ 149381630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UNiagaraRibbonRendererProperties>(FObjectInitializer *param_1)

{
  UNiagaraMergeable *this;
  longlong *plVar1;
  int iVar2;
  undefined1 auStackY_158 [32];
  TObjectPtr<UObject>_u_0 TStack_110;
  undefined2 uStack_108;
  undefined1 uStack_106;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  UNiagaraMergeable *pUStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  UNiagaraMergeable *pUStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  UNiagaraMergeable *pUStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  UNiagaraMergeable *pUStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  UNiagaraMergeable *pUStack_48;
  ulonglong uStack_38;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this == (UNiagaraMergeable *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  UNiagaraMergeable::UNiagaraMergeable(this);
  *(undefined ***)this = &___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)(this + 1));
  *(undefined2 *)&this[2].field_0xd = 0x101;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[2].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[2].field_0x20 = iVar2;
  this[3].field_0x5 = this[3].field_0x5 & 0xfe;
  this[3].field_0x5 = this[3].field_0x5 | 2;
  *(undefined8 *)&this[2].field_0x24 = 0;
  this[3].field_0x4 = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined ***)this = &___7UNiagaraRibbonRendererProperties__6B_;
  *(undefined8 *)(this + 4) = 0;
  TStack_110.DebugPtr = (UObject *)Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)TStack_110.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(TStack_110.DebugPtr);
  }
  uStack_106 = 0;
  uStack_108 = 1;
  uStack_104 = 0xffffffffffffffff;
  uStack_fc = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&TStack_110.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            ((FNiagaraUserParameterBinding *)&this[4].field_0x8,
             (FNiagaraTypeDefinition *)&TStack_110.ObjectPtr);
  this[5].field_0x3 = this[5].field_0x3 & 0xfc;
  this[6].field_0x3 = this[6].field_0x3 & 0xfc;
  *(undefined2 *)(this + 5) = 0x101;
  *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
  *(undefined8 *)&this[5].field_0x20 = 0x3ff0000000000000;
  *(undefined8 *)&this[6].field_0x18 = 0x3ff0000000000000;
  *(undefined8 *)&this[6].field_0x20 = 0x3ff0000000000000;
  this[5].field_0x2 = 1;
  *(undefined4 *)&this[5].field_0x4 = 0x42c80000;
  *(undefined8 *)&this[5].field_0x8 = 0;
  *(undefined8 *)&this[5].field_0x10 = 0;
  *(undefined2 *)(this + 6) = 0x101;
  this[6].field_0x2 = 1;
  *(undefined4 *)&this[6].field_0x4 = 0x42c80000;
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined8 *)&this[6].field_0x10 = 0;
  *(undefined1 *)(this + 7) = 0;
  *(undefined4 *)&this[7].field_0x4 = 0;
  *(undefined2 *)&this[7].field_0x9 = 0xe400;
  *(undefined4 *)&this[7].field_0xc = 1;
  *(undefined4 *)&this[7].field_0x10 = 2;
  *(undefined4 *)&this[7].field_0x14 = 3;
  *(undefined8 *)&this[7].field_0x18 = 0;
  *(undefined8 *)&this[7].field_0x20 = 0;
  *(undefined1 *)(this + 8) = 0;
  *(undefined4 *)&this[8].field_0x4 = 0;
  *(undefined4 *)&this[8].field_0x8 = 0x10;
  *(undefined4 *)&this[8].field_0xc = 0x41700000;
  *(undefined8 *)&this[8].field_0x10 = 0;
  *(undefined8 *)&this[8].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[8].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[8].field_0x20 = iVar2;
  this[9].field_0x5 = this[9].field_0x5 & 0xfe;
  this[9].field_0x5 = this[9].field_0x5 | 2;
  *(undefined8 *)&this[8].field_0x24 = 0;
  this[9].field_0x4 = 0;
  *(undefined8 *)&this[9].field_0x8 = 0;
  *(undefined8 *)&this[9].field_0x10 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[9].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[9].field_0x18 = iVar2;
  this[9].field_0x25 = this[9].field_0x25 & 0xfe;
  this[9].field_0x25 = this[9].field_0x25 | 2;
  *(undefined8 *)&this[9].field_0x1c = 0;
  this[9].field_0x24 = 0;
  *(undefined8 *)(this + 10) = 0;
  *(undefined8 *)&this[10].field_0x8 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[10].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[10].field_0x10 = iVar2;
  this[10].field_0x1d = this[10].field_0x1d & 0xfe;
  this[10].field_0x1d = this[10].field_0x1d | 2;
  *(undefined8 *)&this[10].field_0x14 = 0;
  this[10].field_0x1c = 0;
  *(undefined8 *)&this[10].field_0x20 = 0;
  *(undefined8 *)(this + 0xb) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xb].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xb].field_0x8 = iVar2;
  *(undefined8 *)&this[0xb].field_0xc = 0;
  this[0xb].field_0x14 = 0;
  this[0xb].field_0x15 = this[0xb].field_0x15 & 0xfe;
  this[0xb].field_0x15 = this[0xb].field_0x15 | 2;
  *(undefined8 *)&this[0xb].field_0x18 = 0;
  *(undefined8 *)&this[0xb].field_0x20 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 0xc),&FNiagaraTypeDefinition::Vec4Def);
  *(int *)(this + 0xc) = iVar2;
  this[0xc].field_0xd = this[0xc].field_0xd & 0xfe;
  this[0xc].field_0xd = this[0xc].field_0xd | 2;
  *(undefined8 *)&this[0xc].field_0x4 = 0;
  this[0xc].field_0xc = 0;
  *(undefined8 *)&this[0xc].field_0x10 = 0;
  *(undefined8 *)&this[0xc].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xc].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xc].field_0x20 = iVar2;
  this[0xd].field_0x5 = this[0xd].field_0x5 & 0xfe;
  this[0xd].field_0x5 = this[0xd].field_0x5 | 2;
  *(undefined8 *)&this[0xc].field_0x24 = 0;
  this[0xd].field_0x4 = 0;
  *(undefined8 *)&this[0xd].field_0x8 = 0;
  *(undefined8 *)&this[0xd].field_0x10 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xd].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xd].field_0x18 = iVar2;
  this[0xd].field_0x25 = this[0xd].field_0x25 & 0xfe;
  this[0xd].field_0x25 = this[0xd].field_0x25 | 2;
  *(undefined8 *)&this[0xd].field_0x1c = 0;
  this[0xd].field_0x24 = 0;
  *(undefined8 *)(this + 0xe) = 0;
  *(undefined8 *)&this[0xe].field_0x8 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xe].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xe].field_0x10 = iVar2;
  this[0xe].field_0x1d = this[0xe].field_0x1d & 0xfe;
  this[0xe].field_0x1d = this[0xe].field_0x1d | 2;
  *(undefined8 *)&this[0xe].field_0x14 = 0;
  this[0xe].field_0x1c = 0;
  *(undefined8 *)&this[0xe].field_0x20 = 0;
  *(undefined8 *)(this + 0xf) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xf].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xf].field_0x8 = iVar2;
  this[0xf].field_0x15 = this[0xf].field_0x15 & 0xfe;
  this[0xf].field_0x15 = this[0xf].field_0x15 | 2;
  *(undefined8 *)&this[0xf].field_0xc = 0;
  this[0xf].field_0x14 = 0;
  *(undefined8 *)&this[0xf].field_0x18 = 0;
  *(undefined8 *)&this[0xf].field_0x20 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 0x10),&FNiagaraTypeDefinition::Vec4Def)
  ;
  *(int *)(this + 0x10) = iVar2;
  this[0x10].field_0xd = this[0x10].field_0xd & 0xfe;
  this[0x10].field_0xd = this[0x10].field_0xd | 2;
  *(undefined8 *)&this[0x10].field_0x4 = 0;
  this[0x10].field_0xc = 0;
  *(undefined8 *)&this[0x10].field_0x10 = 0;
  *(undefined8 *)&this[0x10].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x10].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x10].field_0x20 = iVar2;
  this[0x11].field_0x5 = this[0x11].field_0x5 & 0xfe;
  this[0x11].field_0x5 = this[0x11].field_0x5 | 2;
  *(undefined8 *)&this[0x10].field_0x24 = 0;
  this[0x11].field_0x4 = 0;
  *(undefined8 *)&this[0x11].field_0x8 = 0;
  *(undefined8 *)&this[0x11].field_0x10 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x11].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x11].field_0x18 = iVar2;
  this[0x11].field_0x25 = this[0x11].field_0x25 & 0xfe;
  this[0x11].field_0x25 = this[0x11].field_0x25 | 2;
  *(undefined8 *)&this[0x11].field_0x1c = 0;
  this[0x11].field_0x24 = 0;
  *(undefined8 *)(this + 0x12) = 0;
  *(undefined8 *)&this[0x12].field_0x8 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x12].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x12].field_0x10 = iVar2;
  this[0x12].field_0x1d = this[0x12].field_0x1d & 0xfe;
  this[0x12].field_0x1d = this[0x12].field_0x1d | 2;
  *(undefined8 *)&this[0x12].field_0x14 = 0;
  this[0x12].field_0x1c = 0;
  *(undefined8 *)&this[0x12].field_0x20 = 0;
  *(undefined8 *)(this + 0x13) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x13].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x13].field_0x8 = iVar2;
  this[0x13].field_0x15 = this[0x13].field_0x15 & 0xfe;
  this[0x13].field_0x15 = this[0x13].field_0x15 | 2;
  *(undefined8 *)&this[0x13].field_0xc = 0;
  this[0x13].field_0x14 = 0;
  *(undefined8 *)&this[0x13].field_0x18 = 0;
  *(undefined8 *)&this[0x13].field_0x20 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 0x14),&FNiagaraTypeDefinition::Vec4Def)
  ;
  *(int *)(this + 0x14) = iVar2;
  this[0x14].field_0xd = this[0x14].field_0xd & 0xfe;
  this[0x14].field_0xd = this[0x14].field_0xd | 2;
  *(undefined8 *)&this[0x14].field_0x4 = 0;
  this[0x14].field_0xc = 0;
  *(undefined8 *)&this[0x14].field_0x10 = 0;
  *(undefined8 *)&this[0x14].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x14].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x14].field_0x20 = iVar2;
  this[0x15].field_0x5 = this[0x15].field_0x5 & 0xfe;
  this[0x15].field_0x5 = this[0x15].field_0x5 | 2;
  *(undefined8 *)&this[0x14].field_0x24 = 0;
  this[0x15].field_0x4 = 0;
  *(undefined8 *)&this[0x15].field_0x8 = 0;
  *(undefined8 *)&this[0x15].field_0x10 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x15].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x15].field_0x18 = iVar2;
  this[0x15].field_0x25 = this[0x15].field_0x25 & 0xfe;
  this[0x15].field_0x25 = this[0x15].field_0x25 | 2;
  *(undefined8 *)&this[0x15].field_0x1c = 0;
  this[0x15].field_0x24 = 0;
  *(undefined8 *)(this + 0x16) = 0;
  *(undefined8 *)&this[0x16].field_0x8 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x16].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x16].field_0x10 = iVar2;
  this[0x16].field_0x1d = this[0x16].field_0x1d & 0xfe;
  this[0x16].field_0x1d = this[0x16].field_0x1d | 2;
  *(undefined8 *)&this[0x16].field_0x14 = 0;
  this[0x16].field_0x1c = 0;
  *(undefined8 *)&this[0x16].field_0x20 = 0;
  *(undefined8 *)(this + 0x17) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x17].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x17].field_0x8 = iVar2;
  this[0x17].field_0x15 = this[0x17].field_0x15 & 0xfe;
  this[0x17].field_0x15 = this[0x17].field_0x15 | 2;
  *(undefined8 *)&this[0x17].field_0xc = 0;
  this[0x17].field_0x14 = 0;
  *(undefined8 *)&this[0x17].field_0x18 = 0;
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
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 0x1a),&FNiagaraTypeDefinition::Vec4Def)
  ;
  *(int *)(this + 0x1a) = iVar2;
  this[0x1a].field_0xd = this[0x1a].field_0xd & 0xfe;
  this[0x1a].field_0xd = this[0x1a].field_0xd | 2;
  *(undefined8 *)&this[0x1a].field_0x4 = 0;
  this[0x1a].field_0xc = 0;
  *(undefined8 *)&this[0x1a].field_0x10 = 0;
  *(undefined8 *)&this[0x1a].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x1a].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x1a].field_0x20 = iVar2;
  this[0x1b].field_0x5 = this[0x1b].field_0x5 & 0xfe;
  this[0x1b].field_0x5 = this[0x1b].field_0x5 | 2;
  *(undefined8 *)&this[0x1a].field_0x24 = 0;
  this[0x1b].field_0x4 = 0;
  *(undefined8 *)&this[0x1b].field_0x8 = 0;
  *(undefined8 *)&this[0x1b].field_0x10 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x1b].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x1b].field_0x18 = iVar2;
  this[0x1b].field_0x25 = this[0x1b].field_0x25 & 0xfe;
  this[0x1b].field_0x25 = this[0x1b].field_0x25 | 2;
  *(undefined8 *)&this[0x1b].field_0x1c = 0;
  this[0x1b].field_0x24 = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)&this[0x1c].field_0x8 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x1c].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x1c].field_0x10 = iVar2;
  this[0x1c].field_0x1d = this[0x1c].field_0x1d & 0xfe;
  this[0x1c].field_0x1d = this[0x1c].field_0x1d | 2;
  *(undefined8 *)&this[0x1c].field_0x14 = 0;
  this[0x1c].field_0x1c = 0;
  *(undefined4 *)&this[0x1c].field_0x20 = 0;
  this[0x1c].field_0x24 = 1;
  *(undefined8 *)(this + 0x1d) = 0xffffffffffffffff;
  this[0x1d].field_0x8 = 1;
  *(undefined4 *)&this[0x1d].field_0xc = 0xffffffff;
  this[0x1d].field_0x10 = 1;
  *(undefined4 *)&this[0x1d].field_0x14 = 0xffffffff;
  this[0x1d].field_0x18 = 1;
  *(undefined4 *)&this[0x1d].field_0x1c = 0xffffffff;
  this[0x1d].field_0x20 = 1;
  *(undefined4 *)&this[0x1d].field_0x24 = 0xffffffff;
  *(undefined1 *)(this + 0x1e) = 1;
  *(undefined4 *)&this[0x1e].field_0x4 = 0xffffffff;
  this[0x1e].field_0x8 = 1;
  *(undefined4 *)&this[0x1e].field_0xc = 0xffffffff;
  this[0x1e].field_0x10 = 1;
  *(undefined4 *)&this[0x1e].field_0x14 = 0xffffffff;
  *(undefined4 *)&this[0x1e].field_0x1c = 0xffffffff;
  *(undefined4 *)&this[0x1e].field_0x24 = 0xffffffff;
  *(undefined4 *)&this[0x1f].field_0x4 = 0xffffffff;
  puStack_f8 = &this[8].field_0x10;
  puStack_f0 = &this[9].field_0x8;
  pUStack_e8 = this + 10;
  puStack_e0 = &this[10].field_0x20;
  puStack_d8 = &this[0xb].field_0x18;
  puStack_d0 = &this[0xc].field_0x10;
  puStack_c8 = &this[0xd].field_0x8;
  pUStack_c0 = this + 0xe;
  puStack_b8 = &this[0xe].field_0x20;
  puStack_b0 = &this[0xf].field_0x18;
  puStack_a8 = &this[0x10].field_0x10;
  puStack_a0 = &this[0x11].field_0x8;
  pUStack_98 = this + 0x12;
  puStack_90 = &this[0x12].field_0x20;
  puStack_88 = &this[0x13].field_0x18;
  this[0x1f].field_0x8 = 0;
  this[0x1f].field_0x14 = 0;
  *(undefined8 *)&this[0x1f].field_0x20 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)&this[0x20].field_0x8 = 0;
  *(undefined8 *)&this[0x20].field_0x10 = 0;
  *(undefined8 *)&this[0x20].field_0x18 = 0;
  puStack_80 = &this[0x14].field_0x10;
  this[0x1e].field_0x18 = 1;
  this[0x1e].field_0x20 = 1;
  *(undefined8 *)&this[0x1f].field_0xc = 0xffffffffffffffff;
  *(undefined4 *)&this[0x1f].field_0x18 = 0xffffffff;
  puStack_78 = &this[0x15].field_0x8;
  *(undefined4 *)&this[3].field_0x20 = 0x17;
  pUStack_70 = this + 0x16;
  puStack_68 = &this[0x16].field_0x20;
  puStack_60 = &this[0x19].field_0x18;
  puStack_58 = &this[0x1a].field_0x10;
  puStack_50 = &this[0x1b].field_0x8;
  pUStack_48 = this + 0x1c;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x17,*(int *)&this[3].field_0x24,(ForAnyElementType *)&this[3].field_0x18,0x17,
             (int *)&this[3].field_0x24);
  plVar1 = *(longlong **)&this[3].field_0x18;
  *plVar1 = (longlong)puStack_f8;
  plVar1[1] = (longlong)puStack_f0;
  plVar1[2] = (longlong)pUStack_e8;
  plVar1[3] = (longlong)puStack_e0;
  plVar1[4] = (longlong)puStack_d8;
  plVar1[5] = (longlong)puStack_d0;
  plVar1[6] = (longlong)puStack_c8;
  plVar1[7] = (longlong)pUStack_c0;
  plVar1[8] = (longlong)puStack_b8;
  plVar1[9] = (longlong)puStack_b0;
  plVar1[10] = (longlong)puStack_a8;
  plVar1[0xb] = (longlong)puStack_a0;
  plVar1[0xc] = (longlong)pUStack_98;
  plVar1[0xd] = (longlong)puStack_90;
  plVar1[0xe] = (longlong)puStack_88;
  plVar1[0xf] = (longlong)puStack_80;
  plVar1[0x10] = (longlong)puStack_78;
  plVar1[0x11] = (longlong)pUStack_70;
  plVar1[0x12] = (longlong)puStack_68;
  plVar1[0x13] = (longlong)puStack_60;
  plVar1[0x14] = (longlong)puStack_58;
  plVar1[0x15] = (longlong)puStack_50;
  plVar1[0x16] = (longlong)pUStack_48;
  return;
}

// InternalConstructor<UNiagaraScratchPadContainer> @ 149381650

void __cdecl InternalConstructor<UNiagaraScratchPadContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraScratchPadContainer__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraScript> @ 149381680

void __cdecl InternalConstructor<UNiagaraScript>(FObjectInitializer *param_1)

{
  UNiagaraScriptBase *this;
  
  this = (UNiagaraScriptBase *)param_1->Obj;
  if (this != (UNiagaraScriptBase *)0x0) {
    UNiagaraScriptBase::UNiagaraScriptBase(this,param_1);
    this[1].field_0x8 = 0;
    *(undefined ***)this = &UNiagaraScript::_vftable__for__UNiagaraScriptBase__;
    *(undefined ***)(this + 1) = &UNiagaraScript::_vftable__for__FNiagaraVersionedObject__;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined8 *)&this[1].field_0x14 = 0;
    FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&this[1].field_0x20);
    FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&this[5].field_0x8);
    this[8].field_0x1c = this[8].field_0x1c & 0xfe;
    *(undefined ***)&this[5].field_0x8 = &___7FNiagaraScriptExecutionParameterStore__6B_;
    *(undefined4 *)&this[8].field_0x18 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0;
    this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)(this + 10) = 0;
    *(undefined8 *)&this[10].field_0x8 = 0;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined8 *)&this[10].field_0x18 = 0;
    *(undefined8 *)&this[10].field_0x20 = 0;
    FNiagaraVMExecutableData::FNiagaraVMExecutableData((FNiagaraVMExecutableData *)(this + 0xb));
    *(undefined8 *)&this[0x13].field_0x10 = 0;
    *(undefined8 *)&this[0x13].field_0x18 = 0;
    *(undefined8 *)&this[0x13].field_0x20 = 0;
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)&this[0x14].field_0x8 = 0;
    *(undefined8 *)&this[0x14].field_0x10 = 0;
    *(undefined8 *)&this[0x14].field_0x18 = 0;
    *(undefined8 *)&this[0x14].field_0x20 = 0;
    *(undefined4 *)(this + 0x15) = 0;
  }
  return;
}

// InternalConstructor<UNiagaraSettings> @ 1493817b0

void __cdecl InternalConstructor<UNiagaraSettings>(FObjectInitializer *param_1)

{
  if ((UNiagaraSettings *)param_1->Obj != (UNiagaraSettings *)0x0) {
    UNiagaraSettings::UNiagaraSettings((UNiagaraSettings *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraSimCache> @ 1493817d0

void __cdecl InternalConstructor<UNiagaraSimCache>(FObjectInitializer *param_1)

{
  if ((UNiagaraSimCache *)param_1->Obj != (UNiagaraSimCache *)0x0) {
    UNiagaraSimCache::UNiagaraSimCache((UNiagaraSimCache *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraSimCacheDebugData> @ 1493817f0

void __cdecl InternalConstructor<UNiagaraSimCacheDebugData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UNiagaraSimCacheDebugData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraSimCacheFunctionLibrary> @ 149381830

void __cdecl InternalConstructor<UNiagaraSimCacheFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UNiagaraSimCacheFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAsyncNiagaraCaptureSimCache> @ 149381860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncNiagaraCaptureSimCache>(FVTableHelper *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UCancellableAsyncAction *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UAsyncNiagaraCaptureSimCache::GetPrivateStaticClass();
  this = (UCancellableAsyncAction *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCancellableAsyncAction *)0x0) {
    UCancellableAsyncAction::UCancellableAsyncAction(this,param_1);
    this[1].field_0x28 = 0;
    *(undefined ***)this = &___7UAsyncNiagaraCaptureSimCache__6B_;
    uVar1 = *(uint *)&this[4].field_0x2c;
    *(uint *)&this[3].field_0x10 = *(uint *)&this[3].field_0x10 & 0xfffffffe;
    *(uint *)&this[4].field_0x8 = *(uint *)&this[4].field_0x8 & 0xfffffffe;
    *(uint *)&this[3].field_0x10 = *(uint *)&this[3].field_0x10 | 2;
    *(uint *)&this[3].field_0x1c = *(uint *)&this[3].field_0x1c | 1;
    *(uint *)&this[3].field_0x24 = *(uint *)&this[3].field_0x24 & 0xfffffffe;
    *(uint *)&this[4].field_0x8 = *(uint *)&this[4].field_0x8 | 2;
    *(uint *)&this[4].field_0x14 = *(uint *)&this[4].field_0x14 | 1;
    *(uint *)&this[4].field_0x1c = *(uint *)&this[4].field_0x1c & 0xfffffffe;
    *(undefined8 *)(this + 1) = 0;
    *(uint *)&this[4].field_0x2c = uVar1 & 0xffffffab | 0x2b;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 2;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x10;
    *(undefined4 *)&this[3].field_0x18 = 1;
    *(undefined4 *)&this[3].field_0x20 = 10;
    *(undefined8 *)&this[3].field_0x28 = 0x3c887a8d;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0xc = 0x10;
    *(undefined4 *)&this[4].field_0x10 = 1;
    *(undefined4 *)&this[4].field_0x18 = 10;
    *(undefined4 *)&this[4].field_0x20 = 0x3c887a8d;
    this[4].field_0x28 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraRibbonRendererProperties> @ 149381870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraRibbonRendererProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraRibbonRendererProperties *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraRibbonRendererProperties::GetPrivateStaticClass();
  pUVar3 = (UNiagaraRibbonRendererProperties *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraRibbonRendererProperties *)0x0) {
    pUVar3 = UNiagaraRibbonRendererProperties::UNiagaraRibbonRendererProperties(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraScratchPadContainer> @ 149381910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraScratchPadContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraScratchPadContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraScratchPadContainer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraScript> @ 1493819c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraScript>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraScript::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UNiagaraScriptBase::UNiagaraScriptBase((UNiagaraScriptBase *)pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined ***)pUVar1 = &UNiagaraScript::_vftable__for__UNiagaraScriptBase__;
    *(undefined8 *)&pUVar1[1].field_0x14 = 0;
    *(undefined ***)(pUVar1 + 1) = &UNiagaraScript::_vftable__for__FNiagaraVersionedObject__;
    FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&pUVar1[1].field_0x20);
    FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&pUVar1[5].field_0x8);
    pUVar1[8].field_0x1c = pUVar1[8].field_0x1c & 0xfe;
    *(undefined ***)&pUVar1[5].field_0x8 = &___7FNiagaraScriptExecutionParameterStore__6B_;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    FNiagaraVMExecutableData::FNiagaraVMExecutableData((FNiagaraVMExecutableData *)(pUVar1 + 0xb));
    *(undefined8 *)&pUVar1[0x13].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x13].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x13].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x14) = 0;
    *(undefined8 *)&pUVar1[0x14].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x14].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x14].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x14].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0x15) = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UNiagaraSettings> @ 149381b40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraSettings__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex = 0;
    this[2].CategoryName.Number = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 4;
    *(undefined4 *)&this[1]._padding_ = 0x1020101;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3e000000;
    *(undefined1 *)&this[1].SectionName.ComparisonIndex.Value = 1;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 1;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3].CategoryName.ComparisonIndex = 0;
    this[3].CategoryName.Number = 0;
    this[3].SectionName.ComparisonIndex.Value = 0;
    *(undefined4 *)&this[4]._padding_ = 0x106;
    *(undefined2 *)((longlong)&this[4]._padding_ + 4) = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined2 *)((longlong)&this[4]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&this[4]._padding_ + 1) = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].CategoryName.ComparisonIndex = 0;
    this[4].CategoryName.Number = 0;
    this[4].SectionName.ComparisonIndex = 0;
    this[4].SectionName.Number = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSimCache> @ 149381cd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraSimCache>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraSimCache *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSimCache::GetPrivateStaticClass();
  pUVar3 = (UNiagaraSimCache *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraSimCache *)0x0) {
    pUVar3 = UNiagaraSimCache::UNiagaraSimCache(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSimCacheDebugData> @ 149381d70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraSimCacheDebugData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSimCacheDebugData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraSimCacheDebugData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSimCacheFunctionLibrary> @ 149381e30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraSimCacheFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSimCacheFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraSimCacheFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>_>_> @ 1493849b0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FNiagaraScalabilityManager::ProcessSignificance_::__l2::<lambda_2>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::<lambda_2>_>
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
LAB_149384a70:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_149384aa0:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x000149384aa9;
          goto LAB_149384ac0;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>::operator()
                              (param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_149384b84;
      }
LAB_149384b73:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FNiagaraScalabilityManager::ProcessSignificance_::__l2::<lambda_2>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_149384b84:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x000149384aa9:
  bVar2 = `FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>::operator()
                    (param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_149384aa0;
LAB_149384ac0:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>::operator()
                      (param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_149384aa0;
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
    if (piVar8 <= piVar10 + 1) goto LAB_149384b84;
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
    if (piVar4 <= piVar5) goto LAB_149384b84;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_149384b73;
  goto LAB_149384a70;
}

// IntroSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_2>_> @ 149384c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,_FNiagaraSimCacheJson::EmitterFrameToJson_::__l5::<lambda_2>_>
          (FNiagaraVariableBase *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FName FVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FNiagaraVariableBase *pFVar5;
  FNiagaraVariableBase *pFVar6;
  FNiagaraVariableBase *pFVar7;
  FNiagaraVariableBase **ppFVar8;
  int iVar9;
  FNiagaraVariableBase *this;
  FNiagaraVariableBase *pFVar10;
  FNiagaraVariableBase *pFVar11;
  float fVar12;
  undefined1 auStack_388 [48];
  FNiagaraVariableBase *local_358;
  FNiagaraVariableBase *local_348;
  FNiagaraVariableBase *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar12;
    memset(local_330,0,0x2e8);
    ppFVar8 = &local_348;
    do {
      pFVar11 = ppFVar8[1];
      pFVar10 = *ppFVar8;
      local_358 = ppFVar8[2];
      iVar4 = (int)(((longlong)pFVar11 - (longlong)pFVar10) / 0xc) + 1;
      this = pFVar10;
      iVar9 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_149384d20:
        if (8 < iVar4) {
          pFVar5 = pFVar11 + 1;
          iVar4 = iVar4 / 2;
          FVar1 = this[iVar4].Name;
          iVar2 = this[iVar4].TypeDefHandle.RegisteredTypeIndex;
          this[iVar4].Name = this->Name;
          this[iVar4].TypeDefHandle.RegisteredTypeIndex = (this->TypeDefHandle).RegisteredTypeIndex;
          this->Name = FVar1;
          (this->TypeDefHandle).RegisteredTypeIndex = iVar2;
          pFVar10 = this;
LAB_149384d66:
          pFVar7 = pFVar10;
          pFVar10 = pFVar7 + 1;
          if (pFVar10 <= pFVar11) goto code_r0x000149384d6f;
          goto LAB_149384d81;
        }
        for (; pFVar5 = this, pFVar10 = this, this < pFVar11; pFVar11 = pFVar11 + -1) {
          while (pFVar7 = pFVar5, pFVar10 = pFVar10 + 1, pFVar10 <= pFVar11) {
            iVar9 = ::FName::Compare(&pFVar7->Name,&pFVar10->Name);
            pFVar5 = pFVar10;
            if (-1 < iVar9) {
              pFVar5 = pFVar7;
            }
          }
          FVar1 = pFVar7->Name;
          iVar9 = (pFVar7->TypeDefHandle).RegisteredTypeIndex;
          pFVar7->Name = pFVar11->Name;
          (pFVar7->TypeDefHandle).RegisteredTypeIndex = (pFVar11->TypeDefHandle).RegisteredTypeIndex
          ;
          pFVar11->Name = FVar1;
          (pFVar11->TypeDefHandle).RegisteredTypeIndex = iVar9;
        }
        goto LAB_149384eb4;
      }
LAB_149384e9a:
      HeapSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,_FNiagaraSimCacheJson::EmitterFrameToJson_::__l5::<lambda_2>_>
                (pFVar10,iVar4,param_3,param_4);
LAB_149384eb4:
      ppFVar8 = ppFVar8 + -3;
    } while (&local_348 <= ppFVar8);
  }
  return;
code_r0x000149384d6f:
  iVar4 = ::FName::Compare(&this->Name,&pFVar10->Name);
  if (-1 < iVar4) goto LAB_149384d66;
LAB_149384d81:
  do {
    pFVar6 = pFVar5;
    pFVar5 = pFVar6 + -1;
    if (pFVar5 <= this) break;
    iVar4 = ::FName::Compare(&pFVar5->Name,&this->Name);
  } while (-1 < iVar4);
  if (pFVar10 <= pFVar5) {
    FVar1 = pFVar10->Name;
    iVar4 = pFVar7[1].TypeDefHandle.RegisteredTypeIndex;
    pFVar10->Name = pFVar5->Name;
    pFVar7[1].TypeDefHandle.RegisteredTypeIndex = pFVar6[-1].TypeDefHandle.RegisteredTypeIndex;
    pFVar5->Name = FVar1;
    pFVar6[-1].TypeDefHandle.RegisteredTypeIndex = iVar4;
    goto LAB_149384d66;
  }
  iVar4 = (this->TypeDefHandle).RegisteredTypeIndex;
  FVar1 = this->Name;
  iVar9 = iVar9 + -1;
  this->Name = pFVar5->Name;
  (this->TypeDefHandle).RegisteredTypeIndex = pFVar6[-1].TypeDefHandle.RegisteredTypeIndex;
  pFVar5->Name = FVar1;
  pFVar6[-1].TypeDefHandle.RegisteredTypeIndex = iVar4;
  lVar3 = (longlong)pFVar5 + (-0xc - (longlong)this);
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  if ((lVar3 >> 1) - (lVar3 >> 0x3f) < ((longlong)pFVar11 - (longlong)pFVar10) / 0xc) {
    if (pFVar10 < pFVar11) {
      *ppFVar8 = pFVar10;
      ppFVar8[1] = pFVar11;
      *(int *)(ppFVar8 + 2) = iVar9;
      ppFVar8 = ppFVar8 + 3;
    }
    if (pFVar5 <= this + 1) goto LAB_149384eb4;
    pFVar11 = pFVar6 + -2;
    pFVar10 = this;
  }
  else {
    if (this + 1 < pFVar5) {
      *ppFVar8 = this;
      ppFVar8[1] = pFVar6 + -2;
      *(int *)(ppFVar8 + 2) = iVar9;
      ppFVar8 = ppFVar8 + 3;
    }
    if (pFVar11 <= pFVar10) goto LAB_149384eb4;
  }
  iVar4 = (int)(((longlong)pFVar11 - (longlong)pFVar10) / 0xc) + 1;
  this = pFVar10;
  if (iVar9 == 0) goto LAB_149384e9a;
  goto LAB_149384d20;
}

// IsObjectPtrEqual<UNiagaraParameterCollection,UNiagaraParameterCollection_const_*,0> @ 149384f90

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<UNiagaraParameterCollection,UNiagaraParameterCollection_const_*,0>
          (TObjectPtr<UNiagaraParameterCollection> *param_1,UNiagaraParameterCollection **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNiagaraParameterCollection *)0x0) {
    return *param_2 == (UNiagaraParameterCollection *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MutableView<TObjectPtr<UNiagaraSimCache>_> @ 149384fb0

TMutableView<TObjectPtr<UNiagaraSimCache>_> __cdecl
MutableView<TObjectPtr<UNiagaraSimCache>_>(TObjectPtr<UNiagaraSimCache> *param_1)

{
  TObjectPtr<UNiagaraSimCache>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UNiagaraSimCache>_>)(UNiagaraSimCache **)param_1;
}

// NewObject<UAsyncNiagaraCaptureSimCache> @ 149384fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncNiagaraCaptureSimCache * __cdecl NewObject<UAsyncNiagaraCaptureSimCache>(UObject *param_1)

{
  UClass *pUVar1;
  UAsyncNiagaraCaptureSimCache *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAsyncNiagaraCaptureSimCache::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAsyncNiagaraCaptureSimCache *)
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

// NewObject<UNiagaraSimCacheDebugData> @ 149385060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraSimCacheDebugData * __cdecl NewObject<UNiagaraSimCacheDebugData>(UObject *param_1)

{
  UClass *pUVar1;
  UNiagaraSimCacheDebugData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNiagaraSimCacheDebugData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNiagaraSimCacheDebugData *)
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

// ObjectPtrWrap<UNiagaraSimCache_*,TObjectPtr<UNiagaraSimCache>_> @ 149385100

TObjectPtr<UNiagaraSimCache> * __cdecl
ObjectPtrWrap<UNiagaraSimCache_*,TObjectPtr<UNiagaraSimCache>_>(UNiagaraSimCache **param_1)

{
  return (TObjectPtr<UNiagaraSimCache> *)param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<`FNiagaraScalabilityManager::ProcessSignificance'::__l2::FCullProxyCreateDestroyTask>_> @ 149385110

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraScalabilityManager::ProcessSignificance_::__l2::FCullProxyCreateDestroyTask>_>
          (ushort param_1,
          ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FNiagaraScalabilityManager::ProcessSignificance'::__l2::FCullProxyCreateDestroyTask>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// StaticEnum<enum_ENiagaraCompileErrorSeverity> @ 1493855a0

UEnum * __cdecl StaticEnum<enum_ENiagaraCompileErrorSeverity>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity,(UObject *)pUVar1,
                       L"ENiagaraCompileErrorSeverity");
  }
  return Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDefaultGpuTranslucentLatency> @ 1493855e0

UEnum * __cdecl StaticEnum<enum_ENiagaraDefaultGpuTranslucentLatency>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency,
                       (UObject *)pUVar1,L"ENiagaraDefaultGpuTranslucentLatency");
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDefaultRendererPixelCoverageMode> @ 149385620

UEnum * __cdecl StaticEnum<enum_ENiagaraDefaultRendererPixelCoverageMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode,
                       (UObject *)pUVar1,L"ENiagaraDefaultRendererPixelCoverageMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDefaultSortPrecision> @ 149385660

UEnum * __cdecl StaticEnum<enum_ENiagaraDefaultSortPrecision>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision,(UObject *)pUVar1,
                       L"ENiagaraDefaultSortPrecision");
  }
  return Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton;
}

// StaticEnum<enum_ENiagaraEmitterDefaultSummaryState> @ 1493856a0

UEnum * __cdecl StaticEnum<enum_ENiagaraEmitterDefaultSummaryState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState,
                       (UObject *)pUVar1,L"ENiagaraEmitterDefaultSummaryState");
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton;
}

// StaticEnum<enum_ENiagaraInlineDynamicInputFormatTokenUsage> @ 1493856e0

UEnum * __cdecl StaticEnum<enum_ENiagaraInlineDynamicInputFormatTokenUsage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage,
                       (UObject *)pUVar1,L"ENiagaraInlineDynamicInputFormatTokenUsage");
  }
  return Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton;
}

// StaticEnum<enum_ENiagaraModuleDependencyScriptConstraint> @ 149385720

UEnum * __cdecl StaticEnum<enum_ENiagaraModuleDependencyScriptConstraint>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint,
                       (UObject *)pUVar1,L"ENiagaraModuleDependencyScriptConstraint");
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton;
}

// StaticEnum<enum_ENiagaraModuleDependencyType> @ 149385760

UEnum * __cdecl StaticEnum<enum_ENiagaraModuleDependencyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType,(UObject *)pUVar1,
                       L"ENiagaraModuleDependencyType");
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton;
}

// StaticEnum<enum_ENiagaraModuleDependencyUsage> @ 1493857a0

UEnum * __cdecl StaticEnum<enum_ENiagaraModuleDependencyUsage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage,(UObject *)pUVar1,
                       L"ENiagaraModuleDependencyUsage");
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRibbonAgeOffsetMode> @ 1493857e0

UEnum * __cdecl StaticEnum<enum_ENiagaraRibbonAgeOffsetMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonAgeOffsetMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRibbonDrawDirection> @ 149385820

UEnum * __cdecl StaticEnum<enum_ENiagaraRibbonDrawDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection,(UObject *)pUVar1,
                       L"ENiagaraRibbonDrawDirection");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRibbonFacingMode> @ 149385860

UEnum * __cdecl StaticEnum<enum_ENiagaraRibbonFacingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonFacingMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRibbonShapeMode> @ 1493858a0

UEnum * __cdecl StaticEnum<enum_ENiagaraRibbonShapeMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonShapeMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRibbonTessellationMode> @ 1493858e0

UEnum * __cdecl StaticEnum<enum_ENiagaraRibbonTessellationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonTessellationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRibbonUVDistributionMode> @ 149385920

UEnum * __cdecl StaticEnum<enum_ENiagaraRibbonUVDistributionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonUVDistributionMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRibbonUVEdgeMode> @ 149385960

UEnum * __cdecl StaticEnum<enum_ENiagaraRibbonUVEdgeMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode,(UObject *)pUVar1,
                       L"ENiagaraRibbonUVEdgeMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraScriptLibraryVisibility> @ 1493859a0

UEnum * __cdecl StaticEnum<enum_ENiagaraScriptLibraryVisibility>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility,(UObject *)pUVar1,
                       L"ENiagaraScriptLibraryVisibility");
  }
  return Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton;
}

// StaticEnum<enum_ENiagaraScriptTemplateSpecification> @ 1493859e0

UEnum * __cdecl StaticEnum<enum_ENiagaraScriptTemplateSpecification>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification,
                       (UObject *)pUVar1,L"ENiagaraScriptTemplateSpecification");
  }
  return Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton;
}

// StaticEnum<enum_ENiagaraSimCacheAttributeCaptureMode> @ 149385a20

UEnum * __cdecl StaticEnum<enum_ENiagaraSimCacheAttributeCaptureMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode,
                       (UObject *)pUVar1,L"ENiagaraSimCacheAttributeCaptureMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraStripScriptByteCodeOption> @ 149385a60

UEnum * __cdecl StaticEnum<enum_ENiagaraStripScriptByteCodeOption>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption,(UObject *)pUVar1
                       ,L"ENiagaraStripScriptByteCodeOption");
  }
  return Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton;
}

// StaticEnum<enum_EUnusedAttributeBehaviour> @ 149385aa0

UEnum * __cdecl StaticEnum<enum_EUnusedAttributeBehaviour>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour,(UObject *)pUVar1,
                       L"EUnusedAttributeBehaviour");
  }
  return Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton;
}

// StaticEnum<enum_ENDICollisionQuery_AsyncGpuTraceProvider::Type> @ 149385ae0

UEnum * __cdecl StaticEnum<enum_ENDICollisionQuery_AsyncGpuTraceProvider::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider,
                       (UObject *)pUVar1,L"ENDICollisionQuery_AsyncGpuTraceProvider");
  }
  return Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton;
}

// StaticEnum<enum_ENDISkelMesh_AdjacencyTriangleIndexFormat::Type> @ 149385b20

UEnum * __cdecl StaticEnum<enum_ENDISkelMesh_AdjacencyTriangleIndexFormat::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat,
                       (UObject *)pUVar1,L"ENDISkelMesh_AdjacencyTriangleIndexFormat");
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton;
}

// StaticEnum<enum_ENDISkelMesh_GpuMaxInfluences::Type> @ 149385b60

UEnum * __cdecl StaticEnum<enum_ENDISkelMesh_GpuMaxInfluences::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences,(UObject *)pUVar1,
                       L"ENDISkelMesh_GpuMaxInfluences");
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton;
}

// StaticEnum<enum_ENDISkelMesh_GpuUniformSamplingFormat::Type> @ 149385ba0

UEnum * __cdecl StaticEnum<enum_ENDISkelMesh_GpuUniformSamplingFormat::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat,
                       (UObject *)pUVar1,L"ENDISkelMesh_GpuUniformSamplingFormat");
  }
  return Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton;
}

// ~TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>,1,1> @ 149389a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraSimCacheGpuResource::BuildResource_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::`2'::<lambda_1>,1,1>::
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

// ~TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,0,1> @ 149389a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_NiagaraSimCacheCompareInternal::GatherEmitterVariables_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,0,1> @ 149389a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_NiagaraSimCacheCompareInternal::InternalSetToleranceByName_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,0,1> @ 149389a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_NiagaraSimCacheCompareInternal::InternalSetToleranceByType_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_1>,0,0> @ 149389ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNiagaraSimCacheJson::EmitterFrameToJson_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::<lambda_1>,1,0> @ 149389ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()_::__l7::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6___R__FNiagaraRenderThreadDeletor_UFNiagaraSimCacheGpuResource____QEBAXPEAUFNiagaraSimCacheGpuResource___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>,0,1> @ 149389af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UNiagaraSimCache::ReadFrame_::__l21::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::`21'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>,0,0> @ 149389b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UNiagaraSimCache::BeginWrite_::__l31::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::`31'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::__l35::<lambda_1>,0,0> @ 149389b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::__l35::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UNiagaraSimCache::CanRead_::__l35::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::`35'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::<lambda_1>,1,1> @ 149389b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraSimCacheHelper::ReadDataBufferGPU_::__l15::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__P___ReadDataBufferGPU_FNiagaraSimCacheHelper__QEAAXMMMAEBU__TTransform_N_Math_UE__0AEAVFNiagaraEmitterInstance__AEBUFNiagaraSimCacheDataBuffersLayout__AEBUFNiagaraSimCacheDataBuffers__3AEAVFNiagaraDataSet__AEAU__atomic_H_std___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>,1,1> @ 149389b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FNiagaraSimCacheHelper::ReadDataBufferGPU_::__l2::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__ReadDataBufferGPU_FNiagaraSimCacheHelper__QEAAXMMMAEBU__TTransform_N_Math_UE__0AEAVFNiagaraEmitterInstance__AEBUFNiagaraSimCacheDataBuffersLayout__AEBUFNiagaraSimCacheDataBuffers__3AEAVFNiagaraDataSet__AEAU__atomic_H_std___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>,0,1> @ 149389bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>,0,1>::
~TFunction_OwnedObject<_UNiagaraSimCache::BeginWrite_::__l44::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::`44'::<lambda_2>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>,0,1> @ 149389bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>,0,1>::
~TFunction_OwnedObject<_UNiagaraSimCache::WriteFrame_::__l53::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::`53'::<lambda_2>,0,1>::_vftable_;
  return;
}

// operator() @ 14938c800

bool __thiscall
`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraSimCacheVariable *param_1)

{
  int *piVar1;
  FName *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FName FVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  TArrayView<FString_const_,int> local_18;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar11 = ::GetTypeHash(&param_1->Variable);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar14 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar14 = plVar3 + 7;
    }
    iVar12 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar3[9] - 1U & uVar11) * 4);
    if (iVar12 != -1) {
      lVar4 = *plVar3;
      do {
        lVar13 = (longlong)iVar12;
        if ((*(FName *)(lVar4 + lVar13 * 0x14) == (param_1->Variable).Name) &&
           (*(int *)(lVar4 + 8 + lVar13 * 0x14) ==
            (param_1->Variable).TypeDefHandle.RegisteredTypeIndex)) {
          if (iVar12 != -1) {
            return true;
          }
          break;
        }
        iVar12 = *(int *)(lVar4 + 0xc + lVar13 * 0x14);
      } while (iVar12 != -1);
    }
  }
  local_18.DataPtr = (FString *)**(undefined8 **)((longlong)this + 0x10);
  local_18._8_8_ = (*(undefined8 **)((longlong)this + 0x10))[1];
  bVar9 = NiagaraSimCacheCompareInternal::MatchesWildcardArray(&local_18,(param_1->Variable).Name);
  if (!bVar9) {
    pFVar5 = *(ForAnyElementType **)this;
    if ((((FNiagaraSimCacheVariable *)pFVar5->Data <= param_1) &&
        (param_1 < (FNiagaraSimCacheVariable *)pFVar5->Data +
                   *(int *)((longlong)&pFVar5[1].Data + 4))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    iVar12 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar12 + 1;
    FVar8 = *(FName *)&(param_1->Variable).TypeDefHandle;
    pFVar6 = pFVar5->Data;
    pFVar2 = (FName *)(pFVar6 + (longlong)iVar12 * 0x18);
    *pFVar2 = (param_1->Variable).Name;
    pFVar2[1] = FVar8;
    *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18 + 0x10) = *(undefined8 *)&param_1->HalfOffset;
  }
  return true;
}

// operator() @ 14938c970

bool __thiscall
`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraSimCacheVariable *param_1)

{
  float fVar1;
  int iVar2;
  TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
  *this_00;
  bool bVar3;
  uint uVar4;
  FString *this_01;
  float *pfVar5;
  int iVar6;
  wchar_t *pwVar7;
  FString local_28 [2];
  
  this_01 = ::FName::ToString((FName *)param_1,local_28);
  iVar2 = *(int *)(*(undefined8 **)this + 1);
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)**(undefined8 **)this;
  }
  bVar3 = ::FString::MatchesWildcard(this_01,pwVar7,iVar6,IgnoreCase);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    this_00 = *(TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
                **)((longlong)this + 0x10);
    fVar1 = *(float *)((longlong)this + 8);
    uVar4 = ::GetTypeHash(&param_1->Variable);
    pfVar5 = TMapBase<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
             ::FindOrAddImpl<FNiagaraVariableBase_const_&>(this_00,uVar4,&param_1->Variable);
    *pfVar5 = fVar1;
  }
  return true;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14938e19c

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraScript::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraScript::_vector_deleting_destructor__adjustor_40__(UNiagaraScript *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraScript *)&this[-1].ResolvedUserDataInterfaceBindings,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14938e1b0

void * __thiscall
FNiagaraBoundsCalculatorHelper<0,0,1>::_scalar_deleting_destructor_
          (FNiagaraBoundsCalculatorHelper<0,0,1> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraBoundsCalculator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e1f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`FNiagaraSystemScriptExecutionContext::Tick'::__l28::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e250

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNiagaraSimCacheGpuResource,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e280

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e2b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e3b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6___R__FNiagaraRenderThreadDeletor_UFNiagaraSimCacheGpuResource____QEBAXPEAUFNiagaraSimCacheGpuResource___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::`21'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::`31'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::__l35::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::`35'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__P___ReadDataBufferGPU_FNiagaraSimCacheHelper__QEAAXMMMAEBU__TTransform_N_Math_UE__0AEAVFNiagaraEmitterInstance__AEBUFNiagaraSimCacheDataBuffersLayout__AEBUFNiagaraSimCacheDataBuffers__3AEAVFNiagaraDataSet__AEAU__atomic_H_std___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__ReadDataBufferGPU_FNiagaraSimCacheHelper__QEAAXMMMAEBU__TTransform_N_Math_UE__0AEAVFNiagaraEmitterInstance__AEBUFNiagaraSimCacheDataBuffersLayout__AEBUFNiagaraSimCacheDataBuffers__3AEAVFNiagaraDataSet__AEAU__atomic_H_std___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::`44'::<lambda_2>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::`53'::<lambda_2>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e650

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraShaderScript,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraShaderScript,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e690

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<NiagaraRendererVolumesLocal::FHeterogeneousVolumeInstances>::_scalar_deleting_destructor_
          (TObject<NiagaraRendererVolumesLocal::FHeterogeneousVolumeInstances> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFHeterogeneousVolumeInstances_NiagaraRendererVolumesLocal_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(void **)(this + 1) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 1));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e6e0

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FHeterogeneousVolumeData>::_scalar_deleting_destructor_
          (TObject<FHeterogeneousVolumeData> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFHeterogeneousVolumeData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) =
       &FHeterogeneousVolumeData::_vftable__for__IHeterogeneousVolumeInterface__;
  *(undefined ***)&this[1].field_0x8 = &FHeterogeneousVolumeData::_vftable__for__FOneFrameResource__
  ;
  if (*(void **)&this[0xd].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0xd].field_0x8);
  }
  *(undefined ***)&this[1].field_0x8 = &___7FOneFrameResource__6B_;
  *(undefined ***)(this + 1) = &___7IHeterogeneousVolumeInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e760

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNiagaraRendererSprites::FMeshCollectorResources>::_scalar_deleting_destructor_
          (TObject<FNiagaraRendererSprites::FMeshCollectorResources> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFMeshCollectorResources_FNiagaraRendererSprites_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FNiagaraRendererSprites::FMeshCollectorResources::~FMeshCollectorResources
            ((FMeshCollectorResources *)(this + 1));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e7b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e7f0

void * __thiscall
FNiagaraRendererSprites::FMeshCollectorResources::_scalar_deleting_destructor_
          (FMeshCollectorResources *this,uint param_1)

{
  ~FMeshCollectorResources(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e830

void * __thiscall
FNiagaraActorSceneComponentUtils::_scalar_deleting_destructor_
          (FNiagaraActorSceneComponentUtils *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e860

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraDynamicDataSprites::_scalar_deleting_destructor_
          (FNiagaraDynamicDataSprites *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
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
  FNiagaraDynamicDataBase::~FNiagaraDynamicDataBase((FNiagaraDynamicDataBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraRendererSprites::_scalar_deleting_destructor_(FNiagaraRendererSprites *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FNiagaraRendererSprites__6B_;
  pFVar1 = (this->CutoutVertexBuffer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->CutoutVertexBuffer).VertexBufferSRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->CutoutVertexBuffer);
  FNiagaraRenderer::~FNiagaraRenderer((FNiagaraRenderer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e950

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraRendererVolumes::_scalar_deleting_destructor_(FNiagaraRendererVolumes *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraRendererVolumes__6B_;
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FNiagaraRenderer::~FNiagaraRenderer((FNiagaraRenderer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e9b0

void * __thiscall
FNiagaraResourceArrayWriter::_scalar_deleting_destructor_
          (FNiagaraResourceArrayWriter *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938e9f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FNiagaraScriptExecutionContextBase::_scalar_deleting_destructor_
          (FNiagaraScriptExecutionContextBase *this,uint param_1)

{
  ~FNiagaraScriptExecutionContextBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938ea30

void * __thiscall
FNiagaraScriptExecutionParameterStore::_scalar_deleting_destructor_
          (FNiagaraScriptExecutionParameterStore *this,uint param_1)

{
  FNiagaraParameterStore::~FNiagaraParameterStore((FNiagaraParameterStore *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938ea70

void * __thiscall
FNiagaraScriptInstanceParameterStore::_scalar_deleting_destructor_
          (FNiagaraScriptInstanceParameterStore *this,uint param_1)

{
  FNiagaraParameterStore::~FNiagaraParameterStore((FNiagaraParameterStore *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938eab0

void * __thiscall
FNiagaraSimCacheGpuResource::_scalar_deleting_destructor_
          (FNiagaraSimCacheGpuResource *this,uint param_1)

{
  ~FNiagaraSimCacheGpuResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938eaf0

void * __thiscall
FNiagaraSpriteVertexFactory::_scalar_deleting_destructor_
          (FNiagaraSpriteVertexFactory *this,uint param_1)

{
  FRHIShaderResourceView *pFVar1;
  FRHIUniformBuffer *pFVar2;
  
  pFVar1 = (this->SortedIndicesSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->CutoutGeometrySRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SpriteUniformBuffer).Reference;
  if (pFVar2 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->LooseParameterUniformBuffer).Reference;
  if (pFVar2 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938eb80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
NiagaraRendererVolumesLocal::FVolumeDynamicData::_scalar_deleting_destructor_
          (FVolumeDynamicData *this,uint param_1)

{
  FNiagaraDynamicDataBase::~FNiagaraDynamicDataBase((FNiagaraDynamicDataBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938ebc0

void * __thiscall
INiagaraSceneComponentUtils::_scalar_deleting_destructor_
          (INiagaraSceneComponentUtils *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938ebf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void * __thiscall
UAsyncNiagaraCaptureSimCache::_scalar_deleting_destructor_
          (UAsyncNiagaraCaptureSimCache *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAsyncNiagaraCaptureSimCache__6B_;
  pFVar1 = (this->CreateParameters).ExplicitCaptureAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).InterpolationExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).InterpolationIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).RebaseExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraSimCacheCapture::~FNiagaraSimCacheCapture(&this->SimCacheCapture);
  pvVar2 = *(void **)&(this->CaptureComplete).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CaptureComplete);
  UCancellableAsyncAction::~UCancellableAsyncAction((UCancellableAsyncAction *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938ece0

void * __thiscall
UNiagaraRibbonRendererProperties::_scalar_deleting_destructor_
          (UNiagaraRibbonRendererProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraRibbonRendererProperties__6B_;
  pFVar1 = (this->RendererLayout).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayout).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).StaticBoolParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).TextureParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).VectorParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).ScalarParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialUserParamBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x520);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938ede0

void * __thiscall
UNiagaraScratchPadContainer::_scalar_deleting_destructor_
          (UNiagaraScratchPadContainer *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraScratchPadContainer__6B_;
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

// `scalar_deleting_destructor' @ 14938ee40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall UNiagaraScript::_scalar_deleting_destructor_(UNiagaraScript *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraScriptBase__;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  pFVar1 = (this->ResolvedUObjectInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResolvedUserDataInterfaceBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraScriptResolvedDataInterfaceInfo,int>
            ((FNiagaraScriptResolvedDataInterfaceInfo *)
             (this->ResolvedDataInterfaces).AllocatorInstance.Data,
             (this->ResolvedDataInterfaces).ArrayNum);
  pFVar1 = (this->ResolvedDataInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedParameterCollectionReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraVMExecutableData::~FNiagaraVMExecutableData(&this->CachedScriptVM);
  pFVar1 = (this->StatScopesIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScriptResource).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScriptExecutionBoundParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore
            ((FNiagaraParameterStore *)&this->ScriptExecutionParamStore);
  FNiagaraParameterStore::~FNiagaraParameterStore(&this->RapidIterationParameters);
  UNiagaraScriptBase::~UNiagaraScriptBase((UNiagaraScriptBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938ef70

void * __thiscall
UNiagaraSettings::_scalar_deleting_destructor_(UNiagaraSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraSettings__6B_;
  DestructItems<FNiagaraPlatformSetRedirect,int>
            ((FNiagaraPlatformSetRedirect *)(this->PlatformSetRedirects).AllocatorInstance.Data,
             (this->PlatformSetRedirects).ArrayNum);
  pFVar1 = (this->PlatformSetRedirects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimCacheAuxiliaryFileBasePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NDICollisionQuery_AsyncGpuTraceProviderOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ComponentRendererWarningsPerClass).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ComponentRendererWarningsPerClass).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentRendererWarningsPerClass);
  DestructItems<FText,int>
            ((FText *)(this->QualityLevels).AllocatorInstance.Data,(this->QualityLevels).ArrayNum);
  pFVar1 = (this->QualityLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultEffectType).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938f080

void * __thiscall
UNiagaraSimCache::_scalar_deleting_destructor_(UNiagaraSimCache *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7UNiagaraSimCache__6B_;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  }
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x48 = 0;
  pvVar5 = *(void **)&(this->DataInterfaceStorage).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataInterfaceStorage);
  DestructItems<FNiagaraSimCacheFrame,int>
            ((FNiagaraSimCacheFrame *)(this->CacheFrames).AllocatorInstance.Data,
             (this->CacheFrames).ArrayNum);
  pFVar1 = (this->CacheFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraSimCacheDataBuffersLayout,int>
            ((FNiagaraSimCacheDataBuffersLayout *)
             (this->CacheLayout).EmitterLayouts.AllocatorInstance.Data,
             (this->CacheLayout).EmitterLayouts.ArrayNum);
  pFVar1 = (this->CacheLayout).EmitterLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraSimCacheDataBuffersLayout::~FNiagaraSimCacheDataBuffersLayout
            (&(this->CacheLayout).SystemLayout);
  pFVar1 = (this->CreateParameters).ExplicitCaptureAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).InterpolationExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).InterpolationIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).RebaseExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar5 = *(void **)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14938f210

void * __thiscall
UNiagaraSimCacheDebugData::_scalar_deleting_destructor_
          (UNiagaraSimCacheDebugData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraSimCacheDebugData__6B_;
  DestructItems<FNiagaraSimCacheDebugDataFrame,int>
            ((FNiagaraSimCacheDebugDataFrame *)(this->Frames).AllocatorInstance.Data,
             (this->Frames).ArrayNum);
  pFVar1 = (this->Frames).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14938f290

void * __thiscall
UNiagaraSimCacheFunctionLibrary::_scalar_deleting_destructor_
          (UNiagaraSimCacheFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraSimCacheFunctionLibrary__6B_;
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

// AddError @ 14938f410

void __cdecl NiagaraSimCacheCompareInternal::AddError(FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 < 0x2000) {
    iVar1 = (param_2->Data).ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar2);
    iVar1 = (param_1->Data).ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (0x1fff < iVar2) {
      ::FString::AppendChars(param_1,L"...\n",4);
      return;
    }
    ::FString::AppendChars(param_1,L"\n",1);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraRibbonRendererProperties @ 14939f9d0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraRibbonRendererProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraScalabilityManager @ 14939f9e0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraScalabilityManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraScratchPadContainer @ 14939f9f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraScratchPadContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraScript @ 14939fa00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraScript(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraScriptExecutionParameterStore @ 14939fa10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraScriptExecutionParameterStore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraScriptHighlight @ 14939fa20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraScriptHighlight(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSettings @ 14939fa30

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSimCache @ 14939fa40

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSimCache(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheDebugData @ 14939fa50

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheDebugData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheFunctionLibrary @ 14939fa60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheFunctionLibrary(void)

{
  return;
}

// FindStaticMeshComponent @ 1493a14a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UStaticMeshComponent * __cdecl
NiagaraSceneComponentUtilsPrivate::FindStaticMeshComponent(AActor *param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  UStaticMesh *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  UStaticMeshComponent *pUVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  char local_res10;
  int local_res18;
  int local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res10 = param_2;
  if (param_1 != (AActor *)0x0) {
    pUVar12 = Z_Construct_UClass_AStaticMeshActor_NoRegister();
    iVar3 = (int)pUVar12->_padding_;
    if ((((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar12->_padding_)) &&
        (pUVar14 = (UStaticMeshComponent *)param_1[1]._padding_,
        pUVar14 != (UStaticMeshComponent *)0x0)) && (((uint)pUVar14->_padding_ >> 0x1e & 1) == 0)) {
      return pUVar14;
    }
  }
  do {
    if (param_1 == (AActor *)0x0) {
      return (UStaticMeshComponent *)0x0;
    }
    pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&param_1->OwnedComponents);
    iVar3 = *(int *)&(pTVar13->Elements).field_0x28;
    iVar17 = 0;
    iVar19 = 0;
    uVar10 = 1;
    puVar1 = &(pTVar13->Elements).field_0x10;
    iVar11 = 0;
    if (iVar3 != 0) {
      puVar4 = *(uint **)&(pTVar13->Elements).field_0x20;
      puVar20 = (uint *)puVar1;
      if (puVar4 != (uint *)0x0) {
        puVar20 = puVar4;
      }
      uVar16 = *puVar20;
      while (uVar16 == 0) {
        iVar17 = iVar17 + 1;
        iVar19 = iVar19 + 0x20;
        iVar11 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1493a15cc;
        uVar16 = puVar20[iVar17];
      }
      uVar10 = ~(uVar16 - 1) & uVar16;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res18 = (int)lVar7;
      iVar11 = local_res18 + -1 + iVar19;
      if (iVar3 < iVar11) {
        iVar11 = iVar3;
      }
    }
LAB_1493a15cc:
    uVar16 = *(uint *)&(pTVar13->Elements).field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar10,iVar17);
    TStack_70.CurrentBitIndex = iVar11;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar16 >> 5;
    TStack_70._28_4_ = local_ac;
    TStack_70.BaseBitIndex = iVar19;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(pTVar13->Elements).field_0x8 -
                         *(int *)&(pTVar13->Elements).field_0x34);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pUVar14 = (UStaticMeshComponent *)(*pcVar8)();
      return pUVar14;
    }
    uVar10 = *(uint *)&(pTVar13->Elements).field_0x28;
    if (uVar16 != uVar10) {
      puVar5 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
      puVar18 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar18 = puVar5;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        iVar17 = iVar17 + 1;
        uVar15 = uVar15 + 0x20;
        uVar16 = uVar10;
        if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar17)
        goto LAB_1493a16d0;
        uVar16 = *(uint *)(puVar18 + (longlong)iVar17 * 4);
      }
      uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res20 = (int)lVar7;
      uVar16 = local_res20 + -1 + uVar15;
      if ((int)uVar10 < (int)uVar16) {
        uVar16 = uVar10;
      }
    }
LAB_1493a16d0:
    while( true ) {
      if (*(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34 !=
          (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == uVar16) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pUVar14 = *(UStaticMeshComponent **)
                 (*(longlong *)&pTVar13->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
      if (pUVar14 != (UStaticMeshComponent *)0x0) {
        pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar3 = (int)pUVar12->_padding_;
        if (((iVar3 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar12->_padding_)) && (((uint)pUVar14->_padding_ >> 0x1e & 1) == 0)) {
          pUVar6 = (pUVar14->StaticMesh).field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar6 != (UStaticMesh *)0x0) {
              return pUVar14;
            }
          }
          else if (pUVar6 != (UStaticMesh *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
            return pUVar14;
          }
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    if (local_res10 == '\0') {
      return (UStaticMeshComponent *)0x0;
    }
    param_1 = AActor::GetParentActor(param_1);
  } while( true );
}

// GatherEmitterVariables @ 1493a1aa0

TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> * __cdecl
NiagaraSimCacheCompareInternal::GatherEmitterVariables
          (TArray<FNiagaraSimCacheVariable,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraSimCache *param_1,int param_2,
          TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>
          *param_3,TArrayView<FString_const_,int> *param_4)

{
  code *local_38 [5];
  undefined8 *local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_10[1] = __return_storage_ptr__;
  local_10[2] = param_3;
  local_10[3] = param_4;
  if (local_10 + 1 != (undefined8 *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
                  ::Call;
  }
  UNiagaraSimCache::ForEachEmitterAttribute
            (param_1,param_2,(TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *)local_38);
  return __return_storage_ptr__;
}

// GetMaxUpdatesPerFrame @ 1493a65c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
GetMaxUpdatesPerFrame(UNiagaraEffectType *param_1,int param_2,float param_3,float param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 local_44 [4];
  FName local_40;
  FString local_38 [3];
  
  if ((0 < GScalabilityMaxUpdatesPerFrame) && (param_1->UpdateFrequency != Continuous)) {
    if ((__real_322bcc77 < param_3) &&
       ((param_4 < param_3 &&
        (iVar2 = -((int)ROUND(__real_bf000000 -
                              (float)param_2 * param_4 * (__real_40000000 / param_3)) >> 1),
        iVar2 < param_2)))) {
      param_2 = iVar2;
    }
    if ((GScalabilityMaxUpdatesPerFrame < param_2) &&
       (bVar1 = FNiagaraUtilities::LogVerboseWarnings(), param_2 = GScalabilityMaxUpdatesPerFrame,
       bVar1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        atexit(`GetMaxUpdatesPerFrame'::__l14::
               _dynamic_atexit_destructor_for__MessagedEffectTypeSet__);
        _Init_thread_footer(&_TSS0);
      }
      local_40 = (FName)param_1;
      TSet<void_const_*,DefaultKeyFuncs<void_const_*,0>,FDefaultSetAllocator>::Emplace<void_const_*>
                (&MessagedEffectTypeSet,(void **)local_44,(bool *)&local_40);
      param_2 = GScalabilityMaxUpdatesPerFrame;
      if (5 < (byte)LogNiagara._0_1_) {
        local_40 = (FName)param_1->_padding_;
        FName::ToString(&local_40,local_38);
        UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogNiagara);
        param_2 = GScalabilityMaxUpdatesPerFrame;
        if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
          param_2 = GScalabilityMaxUpdatesPerFrame;
        }
      }
    }
  }
  return param_2;
}

// InternalSetToleranceByName @ 1493aa210

void __cdecl
NiagaraSimCacheCompareInternal::InternalSetToleranceByName
          (UNiagaraSimCache *param_1,FString *param_2,float param_3,int param_4,
          TMap<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
          *param_5)

{
  undefined4 uStack_5c;
  code *local_48 [5];
  undefined8 *local_20;
  
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = param_2;
  *(float *)(local_20 + 2) = param_3;
  *(undefined4 *)((longlong)local_20 + 0x14) = uStack_5c;
  local_20[3] = param_5;
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
                  ::Call;
  }
  UNiagaraSimCache::ForEachEmitterAttribute
            (param_1,param_4,(TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *)local_48);
  return;
}

// InternalSetToleranceByType @ 1493aa2c0

void __cdecl
NiagaraSimCacheCompareInternal::InternalSetToleranceByType
          (UNiagaraSimCache *param_1,FNiagaraTypeDefinition *param_2,float param_3,int param_4,
          TMap<FNiagaraVariableBase,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,float,0>_>
          *param_5)

{
  undefined4 uStack_5c;
  code *local_48 [5];
  undefined8 *local_20;
  
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = param_2;
  *(float *)(local_20 + 2) = param_3;
  *(undefined4 *)((longlong)local_20 + 0x14) = uStack_5c;
  local_20[3] = param_5;
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
                  ::Call;
  }
  UNiagaraSimCache::ForEachEmitterAttribute
            (param_1,param_4,(TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *)local_48);
  return;
}

// IsEqual @ 1493aa460

bool __cdecl NiagaraSimCacheCompareInternal::IsEqual(int *param_1,int *param_2,float param_3)

{
  return *param_1 == *param_2;
}

// IsEqual @ 1493aa470

bool __cdecl NiagaraSimCacheCompareInternal::IsEqual(float *param_1,float *param_2,float param_3)

{
  return (float)((uint)(*param_1 - *param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_3;
}

// JacobianSimplex_ALU @ 1493aa740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FNiagaraMatrix3x4 * __cdecl
JacobianSimplex_ALU(FNiagaraMatrix3x4 *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  
  fVar21 = __real_3eaaaaab;
  fVar14 = __real_3e2aaaab;
  fVar23 = __real_3f800000;
  fVar13 = (param_1->field0_0x0)._s_0.X;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  auVar20._0_4_ = (fVar1 + fVar13 + fVar2) * __real_3eaaaaab;
  auVar24._0_4_ = auVar20._0_4_ + fVar13;
  iVar5 = (int)auVar24._0_4_;
  puVar4 = (undefined1 *)register0x00000020;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != auVar24._0_4_)) {
    auVar24._4_4_ = auVar24._0_4_;
    auVar24._8_8_ = 0;
    uVar3 = movmskps((int)&stack0x00000000,auVar24);
    puVar4 = (undefined1 *)(ulonglong)(uVar3 & 1);
    auVar24._0_4_ = (float)(int)(iVar5 - (uVar3 & 1));
  }
  uVar3 = (uint)puVar4;
  auVar22._0_4_ = auVar20._0_4_ + fVar1;
  iVar5 = (int)auVar22._0_4_;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != auVar22._0_4_)) {
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_8_ = 0;
    uVar3 = movmskps(uVar3,auVar22);
    uVar3 = uVar3 & 1;
    auVar22._0_4_ = (float)(int)(iVar5 - uVar3);
  }
  auVar20._0_4_ = auVar20._0_4_ + fVar2;
  iVar5 = (int)auVar20._0_4_;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != auVar20._0_4_)) {
    auVar20._4_4_ = auVar20._0_4_;
    auVar20._8_8_ = 0;
    uVar3 = movmskps(uVar3,auVar20);
    auVar20._0_4_ = (float)(int)(iVar5 - (uVar3 & 1));
  }
  local_f0 = (auVar22._0_4_ + auVar24._0_4_ + auVar20._0_4_) * __real_3e2aaaab;
  auVar24._0_4_ = auVar24._0_4_ - local_f0;
  local_f4 = auVar22._0_4_ - local_f0;
  local_f0 = auVar20._0_4_ - local_f0;
  auVar20._0_4_ = __real_3f800000;
  if (fVar13 - auVar24._0_4_ < fVar1 - local_f4) {
    auVar20._0_4_ = 0.0;
  }
  auVar22._0_4_ = __real_3f800000;
  if (fVar1 - local_f4 < fVar2 - local_f0) {
    auVar22._0_4_ = 0.0;
  }
  fVar16 = __real_3f800000;
  if (fVar2 - local_f0 < fVar13 - auVar24._0_4_) {
    fVar16 = 0.0;
  }
  fVar13 = __real_3f800000 - fVar16;
  *(undefined8 *)&(__return_storage_ptr__->row0).field0_0x0 = 0;
  fVar17 = fVar23 - auVar22._0_4_;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->row0).field0_0x0 + 8) = 0;
  *(undefined8 *)&(__return_storage_ptr__->row1).field0_0x0 = 0;
  fVar15 = fVar23 - auVar20._0_4_;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->row1).field0_0x0 + 8) = 0;
  *(undefined8 *)&(__return_storage_ptr__->row2).field0_0x0 = 0;
  fVar18 = fVar13;
  if (auVar20._0_4_ <= fVar13) {
    fVar18 = auVar20._0_4_;
  }
  *(undefined8 *)((longlong)&(__return_storage_ptr__->row2).field0_0x0 + 8) = 0;
  if (fVar13 <= auVar20._0_4_) {
    fVar13 = auVar20._0_4_;
  }
  lVar6 = 4;
  pfVar7 = &local_f4;
  auVar20._0_4_ = fVar15;
  if (fVar15 <= auVar22._0_4_) {
    auVar20._0_4_ = auVar22._0_4_;
  }
  if (auVar22._0_4_ <= fVar15) {
    fVar15 = auVar22._0_4_;
  }
  local_ec = (fVar18 - fVar14) + auVar24._0_4_;
  auVar22._0_4_ = fVar17;
  if (fVar16 <= fVar17) {
    auVar22._0_4_ = fVar16;
  }
  local_e0 = (fVar13 - fVar21) + auVar24._0_4_;
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
  }
  local_dc = (auVar20._0_4_ - fVar21) + local_f4;
  local_e8 = (fVar15 - fVar14) + local_f4;
  local_e4 = (auVar22._0_4_ - fVar14) + local_f0;
  local_d8 = (fVar17 - fVar21) + local_f0;
  local_d4 = auVar24._0_4_ + __real_3f000000;
  local_d0 = local_f4 + __real_3f000000;
  local_cc = local_f0 + __real_3f000000;
  auVar24._0_4_ = __real_39800000;
  fVar13 = __real_3f000000;
  fVar14 = __real_40c00000;
  auVar20._0_4_ = __real_38800000;
  fVar21 = __real_39000000;
  do {
    fVar18 = fVar1 - *pfVar7;
    fVar15 = (param_1->field0_0x0)._s_0.X - pfVar7[-1];
    fVar17 = fVar2 - pfVar7[1];
    auVar22._0_4_ = *pfVar7 * fVar14 + fVar13;
    fVar16 = pfVar7[-1] * fVar14 + fVar13;
    fVar13 = pfVar7[1] * fVar14 + fVar13;
    iVar5 = (int)auVar22._0_4_;
    iVar10 = (int)fVar13;
    iVar8 = (int)fVar16;
    iVar5 = (iVar5 - (uint)(auVar22._0_4_ < (float)iVar5)) * 0x19660d + 0x3c6ef35f;
    iVar10 = (iVar10 - (uint)(fVar13 < (float)iVar10)) * 0x19660d + 0x3c6ef35f;
    iVar8 = iVar10 * iVar5 + 0x3c6ef35f + (iVar8 - (uint)(fVar16 < (float)iVar8)) * 0x19660d;
    iVar5 = iVar8 * iVar10 + iVar5;
    iVar10 = iVar8 * iVar5 + iVar10;
    uVar11 = iVar10 * iVar5 + iVar8;
    uVar12 = uVar11 >> 0x10;
    uVar3 = iVar5 + uVar11 * iVar10;
    uVar9 = uVar3 >> 0x10;
    uVar3 = uVar11 * uVar3 + iVar10 >> 0x10;
    fVar27 = (float)(uVar9 & 0x8000) * auVar20._0_4_ - fVar23;
    fVar28 = (float)(uVar9 & 0x4000) * fVar21 - fVar23;
    fVar29 = (float)(uVar9 & 0x2000) * auVar24._0_4_ - fVar23;
    fVar30 = (float)(uVar3 & 0x8000) * auVar20._0_4_ - fVar23;
    fVar14 = (float)(uVar3 & 0x4000) * fVar21 - fVar23;
    auVar20._0_4_ = (float)(uVar12 & 0x8000) * auVar20._0_4_ - fVar23;
    auVar22._0_4_ = (float)(uVar3 & 0x2000) * auVar24._0_4_ - fVar23;
    fVar21 = (float)(uVar12 & 0x4000) * fVar21 - fVar23;
    fVar23 = (float)(uVar12 & 0x2000) * auVar24._0_4_ - fVar23;
    auVar24._0_4_ = fVar15 * auVar20._0_4_ + fVar18 * fVar21 + fVar17 * fVar23;
    fVar16 = fVar18 * fVar28 + fVar15 * fVar27 + fVar17 * fVar29;
    fVar26 = fVar15 * fVar30 + fVar18 * fVar14 + fVar17 * auVar22._0_4_;
    fVar13 = fVar18 * fVar18 + fVar15 * fVar15;
    fVar13 = (fVar17 + fVar17) * fVar17 + fVar13 + fVar13;
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar25 = (((__real_40400000 - fVar13) * fVar13 - __real_40400000) * fVar13 + __real_3f800000) *
             ___real_402ec33e;
    fVar19 = (__real_4283126e - fVar13 * ___real_4203126e) * fVar13 - ___real_4203126e;
    fVar13 = auVar24._0_4_ * fVar19;
    (__return_storage_ptr__->row0).field0_0x0._s_0.X =
         fVar15 * fVar13 + fVar25 * auVar20._0_4_ + (__return_storage_ptr__->row0).field0_0x0._s_0.X
    ;
    auVar20._0_4_ = fVar16 * fVar19;
    (__return_storage_ptr__->row0).field0_0x0._s_0.Y =
         fVar18 * fVar13 + fVar25 * fVar21 + (__return_storage_ptr__->row0).field0_0x0._s_0.Y;
    (__return_storage_ptr__->row0).field0_0x0._s_0.Z =
         fVar17 * fVar13 + fVar25 * fVar23 + (__return_storage_ptr__->row0).field0_0x0._s_0.Z;
    (__return_storage_ptr__->row0).field0_0x0._s_0.W =
         auVar24._0_4_ * fVar25 + (__return_storage_ptr__->row0).field0_0x0._s_0.W;
    (__return_storage_ptr__->row1).field0_0x0._s_0.X =
         fVar25 * fVar27 + fVar15 * auVar20._0_4_ + (__return_storage_ptr__->row1).field0_0x0._s_0.X
    ;
    (__return_storage_ptr__->row1).field0_0x0._s_0.Y =
         fVar25 * fVar28 + auVar20._0_4_ * fVar18 + (__return_storage_ptr__->row1).field0_0x0._s_0.Y
    ;
    fVar19 = fVar26 * fVar19;
    (__return_storage_ptr__->row1).field0_0x0._s_0.Z =
         fVar25 * fVar29 + fVar17 * auVar20._0_4_ + (__return_storage_ptr__->row1).field0_0x0._s_0.Z
    ;
    (__return_storage_ptr__->row1).field0_0x0._s_0.W =
         fVar16 * fVar25 + (__return_storage_ptr__->row1).field0_0x0._s_0.W;
    (__return_storage_ptr__->row2).field0_0x0._s_0.X =
         fVar15 * fVar19 + fVar25 * fVar30 + (__return_storage_ptr__->row2).field0_0x0._s_0.X;
    (__return_storage_ptr__->row2).field0_0x0._s_0.Y =
         fVar25 * fVar14 + fVar19 * fVar18 + (__return_storage_ptr__->row2).field0_0x0._s_0.Y;
    auVar24._0_4_ = __real_39800000;
    auVar20._0_4_ = __real_38800000;
    fVar14 = __real_40c00000;
    fVar13 = __real_3f000000;
    fVar23 = __real_3f800000;
    pfVar7 = pfVar7 + 3;
    (__return_storage_ptr__->row2).field0_0x0._s_0.Z =
         fVar17 * fVar19 + fVar25 * auVar22._0_4_ + (__return_storage_ptr__->row2).field0_0x0._s_0.Z
    ;
    fVar21 = __real_39000000;
    (__return_storage_ptr__->row2).field0_0x0._s_0.W =
         fVar26 * fVar25 + (__return_storage_ptr__->row2).field0_0x0._s_0.W;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return __return_storage_ptr__;
}

// MatchesWildcardArray @ 1493aaf60

bool __cdecl
NiagaraSimCacheCompareInternal::MatchesWildcardArray
          (TArrayView<FString_const_,int> *param_1,FName param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  FString *pFVar5;
  int iVar6;
  FName local_res10;
  FString local_18;
  
  iVar6 = param_1->ArrayNum;
  if (iVar6 == 0) {
    return false;
  }
  local_res10 = param_2;
  ::FName::ToString(&local_res10,&local_18);
  pFVar4 = param_1->DataPtr;
  pFVar5 = pFVar4 + iVar6;
  do {
    if (pFVar4 == pFVar5) {
      bVar2 = false;
LAB_1493aafea:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return bVar2;
    }
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    bVar2 = ::FString::MatchesWildcard(&local_18,pwVar3,iVar6,IgnoreCase);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1493aafea;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// NumberToString @ 1493ab060

FString * __cdecl
NiagaraSimCacheCompareInternal::NumberToString(FString *__return_storage_ptr__,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendInt(__return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

// NumberToString @ 1493ab090

FString * __cdecl
NiagaraSimCacheCompareInternal::NumberToString(FString *__return_storage_ptr__,float *param_1)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)*param_1,1);
  return __return_storage_ptr__;
}

// PerInsFn @ 1493ab110

void __cdecl
PerInsFn(FVectorVMExternalFunctionContext *param_1,FVectorVMExternalFunctionContext *param_2,
        TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> **param_3,
        ENiagaraSystemSimulationScript param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned___int64> aVar7;
  uint uVar8;
  longlong *plVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  longlong lVar13;
  FReadAccessScope local_58;
  
  lVar13 = (longlong)param_6;
  if (((param_2->DataSets).ArrayNum < 1) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("PerInsFnContext.DataSets.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                         ,0x1c7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_3 == (TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> **)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("SystemInstances",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                         ,0x1c8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*param_3 == (TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("*SystemInstances",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                         ,0x1c9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_6 == -1) {
    pvVar11 = (void *)0x0;
  }
  else {
    pvVar11 = param_2->UserPtrTable[lVar13];
  }
  if (((param_2->DataSets).ArrayNum < 1) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = 0;
  iVar1 = ((param_2->DataSets).DataPtr)->InstanceOffset;
  iVar2 = param_2->NumInstances;
  param_2->NumInstances = 1;
  lVar10 = lVar13;
  if (0 < iVar2) {
    do {
      param_2->RegReadCount = 0;
      uVar8 = param_2->StartInstance + iVar12 + iVar1;
      param_2->PerInstanceFnInstanceIdx = iVar12;
      pTVar3 = *param_3;
      uVar6 = 0;
      if ((int)uVar8 < pTVar3->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar9 = (longlong *)
               (*(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) +
               ((ulonglong)param_4 + 0x27) * 0x10);
      uVar6 = 0;
      if (param_5 < (int)plVar9[1]) {
        uVar6 = (uint)~param_5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             (*plVar9 + (longlong)param_5 * 0x20);
      if (param_6 == -1) {
        lVar10 = -1;
      }
      else {
        *(atomic<unsigned___int64> *)(param_2->UserPtrTable + lVar13) = this[3].AccessDetector.State
        ;
        lVar10 = lVar13;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_58);
      if (*(int *)&this[2].AccessDetector.State == 0) {
        aVar7 = (atomic<unsigned___int64>)0x0;
      }
      else {
        aVar7 = this[1].AccessDetector.State;
      }
      (**(code **)(*(longlong *)aVar7 + 0x60))(aVar7,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar2);
  }
  if (pvVar11 != (void *)0x0) {
    param_2->UserPtrTable[lVar10] = pvVar11;
  }
  return;
}

// SimplexNoiseOffsetFromSeed @ 1493b74e0

TVector<float> * __cdecl
SimplexNoiseOffsetFromSeed(TVector<float> *__return_storage_ptr__,uint param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  fVar1 = __real_3c23d70a;
  iVar6 = param_1 * 0x19660d + 0x3c6ef35f;
  iVar5 = param_1 * 0x19660d + 0x3c6ef35f + iVar6 * iVar6;
  iVar4 = (iVar5 + 1) * iVar6;
  iVar6 = iVar4 * iVar5 + iVar6;
  uVar3 = iVar6 * iVar4 + iVar5;
  uVar2 = uVar3 * iVar6 + iVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(uVar3 >> 0x10) * __real_3c23d70a;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(uVar2 >> 0x10) * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar3 * uVar2 + iVar6 >> 0x10) * fVar1;
  return __return_storage_ptr__;
}

// Update @ 1493bb6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001493bb85f) */
/* WARNING: Removing unreachable block (ram,0x0001493bb82f) */
/* WARNING: Removing unreachable block (ram,0x0001493bb853) */
/* WARNING: Removing unreachable block (ram,0x0001493bb863) */
/* WARNING: Removing unreachable block (ram,0x0001493bb872) */
/* WARNING: Removing unreachable block (ram,0x0001493bb87c) */
/* WARNING: Removing unreachable block (ram,0x0001493bb887) */
/* WARNING: Removing unreachable block (ram,0x0001493bb899) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8ab) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8ae) */
/* WARNING: Removing unreachable block (ram,0x0001493bb9cb) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8b8) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8c0) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8c9) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8cd) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8f2) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8f3) */
/* WARNING: Removing unreachable block (ram,0x0001493bb8f7) */
/* WARNING: Removing unreachable block (ram,0x0001493bb900) */
/* WARNING: Removing unreachable block (ram,0x0001493bb904) */
/* WARNING: Removing unreachable block (ram,0x0001493bb908) */
/* WARNING: Removing unreachable block (ram,0x0001493bb90b) */
/* WARNING: Removing unreachable block (ram,0x0001493bb93f) */
/* WARNING: Removing unreachable block (ram,0x0001493bb956) */
/* WARNING: Removing unreachable block (ram,0x0001493bb95a) */
/* WARNING: Removing unreachable block (ram,0x0001493bb970) */
/* WARNING: Removing unreachable block (ram,0x0001493bb9c6) */
/* WARNING: Removing unreachable block (ram,0x0001493bb97b) */
/* WARNING: Removing unreachable block (ram,0x0001493bb989) */
/* WARNING: Removing unreachable block (ram,0x0001493bb99b) */
/* WARNING: Removing unreachable block (ram,0x0001493bb9ab) */
/* WARNING: Removing unreachable block (ram,0x0001493bb9af) */
/* WARNING: Removing unreachable block (ram,0x0001493bb9bb) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraScalabilityManager::Update(FNiagaraScalabilityManager *this,float param_1,bool param_2)

{
  FComponentIterationContext *pFVar1;
  uint *puVar2;
  ENiagaraCullReaction EVar3;
  ENiagaraScalabilityUpdateFrequency EVar4;
  UNiagaraEffectType *pUVar5;
  UNiagaraSignificanceHandler *pUVar6;
  longlong lVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  UWorld *pUVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<unsigned_int> _Dst;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStackY_108 [32];
  int local_d8 [2];
  FNiagaraScalabilityManager *local_d0;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  FComponentIterationContext local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar16 = 0;
  uVar17 = 0;
  local_d0 = this;
  if (this->bRefreshCachedSystemData != false) {
    this->bRefreshCachedSystemData = false;
    TSet<TTuple<UNiagaraSystem_*,int>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UNiagaraSystem_*,int>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,int,0>,FDefaultSetAllocator>
             *)&this->SystemDataIndexMap);
    (this->SystemData).ArrayNum = 0;
    if ((this->SystemData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (6,2,0,&(this->SystemData).AllocatorInstance,0,&(this->SystemData).ArrayMax);
    }
    uVar19 = uVar16;
    if (0 < (this->ManagedComponents).ArrayNum) {
      do {
        GetSystemData(this,(int)uVar19,true);
        uVar20 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar20;
      } while ((int)uVar20 < (this->ManagedComponents).ArrayNum);
    }
  }
  fVar9 = FFXBudget::WorstAdjustedUsage;
  pUVar5 = (this->EffectType).field0_0x0.DebugPtr;
  if ((pUVar5 == (UNiagaraEffectType *)0x0) ||
     (FNiagaraWorldManager::ScalabilityCullingMode == Disabled)) {
    iVar11 = (this->ManagedComponents).ArrayNum;
    while( true ) {
      if (iVar11 == 0) {
        if (((this->State).ArrayNum != 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("State.Num() == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                                ,0x251,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this->LastUpdateTime = 0.0;
        return;
      }
      iVar11 = (this->ManagedComponents).ArrayNum;
      uVar20 = iVar11 - 1;
      uVar17 = 0;
      if ((int)uVar20 < iVar11) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) break;
      UNiagaraComponent::UnregisterWithScalabilityManager
                (*(UNiagaraComponent **)
                  ((this->ManagedComponents).AllocatorInstance.Data +
                  (longlong)(this->ManagedComponents).ArrayNum * 8 + -8));
      iVar11 = (this->ManagedComponents).ArrayNum;
    }
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (param_2) {
    if (pUVar5->bNewSystemsSinceLastScalabilityUpdate == 0) {
      return;
    }
    local_a8.bNewOnly = true;
    local_a8.bProcessAllComponents = true;
    local_a8.bHasDirtyState = false;
    local_a8.bRequiresGlobalSignificancePass = false;
    local_a8.SignificanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.SignificanceIndices.ArrayNum = 0;
    local_a8.SignificanceIndices.ArrayMax = 0;
    local_a8.ComponentRequiresUpdate.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    local_a8.ComponentRequiresUpdate.NumBits = 0;
    local_a8.ComponentRequiresUpdate.MaxBits = 0x80;
    local_a8.MaxUpdateCount = 0;
    pUVar5->bNewSystemsSinceLastScalabilityUpdate = 0;
    local_a8.WorstGlobalBudgetUse = fVar9;
    local_d8[1] = 0;
    if (0 < (this->ManagedComponents).ArrayNum) {
      do {
        bVar10 = EvaluateCullState(this,&local_a8,(int)uVar16,local_d8 + 1);
        uVar19 = (ulonglong)((int)uVar16 + 1);
        if (!bVar10) {
          uVar19 = uVar16;
        }
        uVar16 = uVar19;
      } while ((int)uVar19 < (this->ManagedComponents).ArrayNum);
    }
    if (local_a8.bProcessAllComponents == false) {
      uVar16 = 0;
      FVar21 = (ForElementType<unsigned_int>)&local_a8.ComponentRequiresUpdate;
      if (local_a8.ComponentRequiresUpdate.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_a8.ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
      }
      FVar15 = FVar21;
      if (local_a8.ComponentRequiresUpdate.NumBits + 0x1fU >> 5 != 0) {
LAB_1493bb9f0:
        if (*(int *)FVar15 == 0) goto code_r0x0001493bb9f5;
        puVar2 = (uint *)((longlong)FVar21 + uVar16 * 4);
        local_c0 = 0;
        bVar10 = *puVar2 != 0;
        if (bVar10) {
          for (; (*puVar2 >> local_c0 & 1) == 0; local_c0 = local_c0 + 1) {
          }
        }
        iVar11 = 0x20;
        if (bVar10) {
          iVar11 = local_c0;
        }
        iVar11 = iVar11 + (int)uVar16 * 0x20;
        if ((iVar11 < local_a8.ComponentRequiresUpdate.NumBits) && (iVar11 != -1))
        goto LAB_1493bbb3d;
      }
    }
LAB_1493bba26:
    uVar16 = 0;
    if ((local_a8.bRequiresGlobalSignificancePass == false) ||
       (pUVar6 = (((this->EffectType).field0_0x0.DebugPtr)->SignificanceHandler).field0_0x0.DebugPtr
       , pUVar6 == (UNiagaraSignificanceHandler *)0x0)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
      ProcessSignificance(this,pUVar6,&local_a8);
    }
    uVar17 = 0;
    if (local_a8.bHasDirtyState != false) {
      EVar3 = ((this->EffectType).field0_0x0.DebugPtr)->CullReaction;
      uVar20 = uVar17;
      if (((bVar10) && (GApplyInstanceCountsRigidly != 0)) &&
         (uVar19 = uVar16, uVar23 = uVar16, 0 < local_a8.SignificanceIndices.ArrayNum)) {
        do {
          uVar20 = (uint)uVar19;
          uVar18 = uVar17;
          if ((int)uVar20 < local_a8.SignificanceIndices.ArrayNum) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          bVar10 = ApplyScalabilityState
                             (this,*(int *)(local_a8.SignificanceIndices.AllocatorInstance.Data +
                                           uVar23),EVar3,local_a8.bNewOnly);
        } while ((bVar10) &&
                (uVar19 = (ulonglong)uVar20, uVar23 = uVar23 + 4,
                (int)uVar20 < local_a8.SignificanceIndices.ArrayNum));
      }
      iVar11 = (this->ManagedComponents).ArrayNum;
      if (((int)uVar20 < iVar11) && (0 < iVar11)) {
        do {
          bVar10 = ApplyScalabilityState(this,(int)uVar16,EVar3,local_a8.bNewOnly);
          uVar19 = (ulonglong)((int)uVar16 + 1);
          if (!bVar10) {
            uVar19 = uVar16;
          }
          uVar16 = uVar19;
        } while ((int)uVar19 < (this->ManagedComponents).ArrayNum);
      }
      local_a8.bHasDirtyState = false;
    }
    local_a8.ComponentRequiresUpdate.NumBits = 0;
LAB_1493bbb3d:
    if (local_a8.ComponentRequiresUpdate.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_a8.ComponentRequiresUpdate.AllocatorInstance.SecondaryData);
    }
    if (local_a8.SignificanceIndices.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_a8.SignificanceIndices.AllocatorInstance.Data);
    return;
  }
  if (pUVar5->UpdateFrequency == SpawnOnly) {
    return;
  }
  pUVar14 = FNiagaraWorldManager::GetWorld(this->WorldMan);
  EVar4 = ((this->EffectType).field0_0x0.DebugPtr)->UpdateFrequency;
  fVar24 = GScalabilityUpdateTime_Low;
  if (((EVar4 != Low) && (fVar24 = GScalabilityUpdateTime_Medium, EVar4 != Medium)) &&
     (fVar24 = GScalabilityUpdateTime_High, EVar4 != High)) {
    fVar24 = 0.0;
  }
  if ((this->bRefreshOwnerAllowsScalability == false) && (EVar4 != Continuous)) {
    if (fVar24 <= (float)(pUVar14->TimeSeconds - this->LastUpdateTime)) {
      FVar21 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
      iVar11 = (this->DefaultContext).ComponentRequiresUpdate.NumBits;
      if (FVar21 == (ForElementType<unsigned_int>)0x0) {
        FVar21 = (ForElementType<unsigned_int>)&(this->DefaultContext).ComponentRequiresUpdate;
      }
      uVar20 = iVar11 + 0x1f;
      FVar15 = FVar21;
      uVar19 = uVar16;
      if (uVar20 >> 5 != 0) {
LAB_1493bbc42:
        if (*(int *)FVar15 == 0) goto code_r0x0001493bbc4b;
        puVar2 = (uint *)((longlong)FVar21 + uVar19 * 4);
        local_bc = 0;
        bVar10 = *puVar2 != 0;
        if (bVar10) {
          for (; (*puVar2 >> local_bc & 1) == 0; local_bc = local_bc + 1) {
          }
        }
        iVar12 = 0x20;
        if (bVar10) {
          iVar12 = local_bc;
        }
        iVar12 = iVar12 + (int)uVar19 * 0x20;
        if ((iVar11 <= iVar12) || (iVar12 == -1)) goto LAB_1493bbc55;
        goto LAB_1493bbd2f;
      }
      goto LAB_1493bbc55;
    }
LAB_1493bbd2f:
    iVar11 = (this->ManagedComponents).ArrayNum;
    if ((this->DefaultContext).ComponentRequiresUpdate.NumBits == 0) {
      (this->DefaultContext).MaxUpdateCount = 0;
      goto LAB_1493bbe65;
    }
    FVar21 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
    uVar20 = (this->DefaultContext).ComponentRequiresUpdate.NumBits;
    if (FVar21 == (ForElementType<unsigned_int>)0x0) {
      FVar21 = (ForElementType<unsigned_int>)&(this->DefaultContext).ComponentRequiresUpdate;
    }
    iVar12 = uVar20 + 0x1f;
    iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5;
    uVar20 = uVar20 & 0x8000001f;
    if ((int)uVar20 < 0) {
      uVar20 = (uVar20 - 1 | 0xffffffe0) + 1;
    }
    uVar18 = 0xffffffff >> ((byte)(0x20 - uVar20) & 0x1f);
    if (0x1f < (int)(0x20 - uVar20)) {
      uVar18 = 0xffffffff;
    }
    uVar20 = 0xffffffff;
    if (iVar12 == 1) {
      uVar20 = uVar18;
    }
    uVar19 = uVar16;
    uVar23 = uVar16;
    if (0 < iVar12) {
      do {
        uVar17 = *(uint *)FVar21;
        FVar21 = (ForElementType<unsigned_int>)((longlong)FVar21 + 4);
        if (uVar20 != 0xffffffff) {
          uVar17 = uVar17 & uVar20;
        }
        uVar22 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar17 - ((ulonglong)(uVar17 >> 1) & 0x5555555555555555);
        uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
        uVar17 = (int)uVar23 +
                 (uint)(byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38);
        uVar20 = 0xffffffff;
        if (uVar22 == iVar12 - 1U) {
          uVar20 = uVar18;
        }
        uVar19 = (ulonglong)uVar22;
        this = local_d0;
        uVar23 = (ulonglong)uVar17;
        local_d8[0] = iVar11;
      } while ((int)uVar22 < iVar12);
    }
    iVar12 = GetMaxUpdatesPerFrame((this->EffectType).field0_0x0.DebugPtr,uVar17,fVar24,param_1);
    (this->DefaultContext).MaxUpdateCount = iVar12;
    if (iVar12 != iVar11) goto LAB_1493bbe65;
  }
  else {
LAB_1493bbc55:
    iVar11 = (this->ManagedComponents).ArrayNum;
    pUVar5 = (this->EffectType).field0_0x0.DebugPtr;
    this->LastUpdateTime = pUVar14->TimeSeconds;
    (this->DefaultContext).bHasDirtyState = false;
    (this->DefaultContext).bRequiresGlobalSignificancePass = false;
    (this->DefaultContext).bNewOnly = false;
    iVar12 = GetMaxUpdatesPerFrame(pUVar5,iVar11,fVar24,param_1);
    (this->DefaultContext).MaxUpdateCount = iVar12;
    if ((this->bRefreshOwnerAllowsScalability == false) && (iVar12 != iVar11)) {
      FVar21 = (ForElementType<unsigned_int>)&(this->DefaultContext).ComponentRequiresUpdate;
      (this->DefaultContext).bProcessAllComponents = false;
      iVar12 = (this->DefaultContext).ComponentRequiresUpdate.MaxBits;
      (this->DefaultContext).ComponentRequiresUpdate.NumBits = iVar11;
      uVar17 = iVar11 + 0x1fU >> 5;
      if (uVar17 != 0) {
        if (iVar12 + 0x1fU >> 5 < uVar17) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation((ForElementType<unsigned_int> *)FVar21,0,uVar17,4);
          (this->DefaultContext).ComponentRequiresUpdate.MaxBits = uVar17 << 5;
        }
        FVar15 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
        _Dst = FVar21;
        if (FVar15 != (ForElementType<unsigned_int>)0x0) {
          _Dst = FVar15;
        }
        if (uVar17 < 9) {
          iVar11 = -1;
        }
        else {
          iVar11 = 0xff;
        }
        memset((void *)_Dst,iVar11,(ulonglong)uVar17 << 2);
        iVar11 = (this->DefaultContext).ComponentRequiresUpdate.NumBits;
        uVar20 = iVar11 >> 0x1f & 0x1f;
        uVar17 = iVar11 + uVar20;
        iVar11 = (uVar17 & 0x1f) - uVar20;
        if (iVar11 != 0) {
          FVar15 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
          if (FVar15 != (ForElementType<unsigned_int>)0x0) {
            FVar21 = FVar15;
          }
          puVar2 = (uint *)((longlong)FVar21 + (longlong)((int)uVar17 >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar11 & 0x1fU);
        }
      }
      goto LAB_1493bbe65;
    }
  }
  (this->DefaultContext).ComponentRequiresUpdate.NumBits = 0;
  (this->DefaultContext).bProcessAllComponents = true;
LAB_1493bbe65:
  if ((this->DefaultContext).MaxUpdateCount != 0) {
    pFVar1 = &this->DefaultContext;
    (this->DefaultContext).WorstGlobalBudgetUse = fVar9;
    local_d8[0] = 0;
    if ((this->DefaultContext).bProcessAllComponents == false) {
      uVar17 = (this->DefaultContext).ComponentRequiresUpdate.NumBits;
      iVar11 = 0;
      local_d0 = (FNiagaraScalabilityManager *)CONCAT44(local_d0._4_4_,1);
      uVar19 = uVar16;
      if (uVar17 != 0) {
        FVar21 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
        uVar19 = (ulonglong)uVar17;
        if (FVar21 == (ForElementType<unsigned_int>)0x0) {
          FVar21 = (ForElementType<unsigned_int>)&(this->DefaultContext).ComponentRequiresUpdate;
        }
        for (uVar20 = *(uint *)FVar21; uVar20 == 0;
            uVar20 = *(uint *)((longlong)FVar21 + (longlong)(int)uVar20 * 4)) {
          uVar20 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar20;
          iVar11 = iVar11 + 0x20;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
          goto LAB_1493bbf93;
        }
        uVar20 = ~(uVar20 - 1) & uVar20;
        local_d0 = (FNiagaraScalabilityManager *)(ulonglong)uVar20;
        uVar19 = (ulonglong)uVar20 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_b8 = (int)lVar7;
        uVar20 = iVar11 + -1 + local_b8;
        if ((int)uVar17 < (int)uVar20) {
          uVar20 = uVar17;
        }
        uVar19 = (ulonglong)uVar20;
      }
LAB_1493bbf93:
      uVar17 = 0xffffffff;
      if (0 < (this->DefaultContext).MaxUpdateCount) {
        do {
          iVar12 = (int)uVar19;
          if ((this->DefaultContext).ComponentRequiresUpdate.NumBits <= iVar12) break;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar21 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<unsigned_int>)&(this->DefaultContext).ComponentRequiresUpdate;
          if (FVar21 != (ForElementType<unsigned_int>)0x0) {
            FVar15 = FVar21;
          }
          iVar13 = iVar12;
          if (iVar12 < 0) {
            iVar13 = iVar12 + 0x1f;
          }
          puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar13 >> 5) * 4);
          *puVar2 = *puVar2 & ~(1 << ((byte)uVar19 & 0x1f));
          bVar10 = EvaluateCullState(this,pFVar1,iVar12,local_d8);
          if (bVar10) {
            uVar20 = (this->DefaultContext).ComponentRequiresUpdate.NumBits;
            uVar19 = (ulonglong)uVar20;
            FVar21 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<unsigned_int>)&(this->DefaultContext).ComponentRequiresUpdate;
            if (FVar21 != (ForElementType<unsigned_int>)0x0) {
              FVar15 = FVar21;
            }
            uVar18 = uVar17 & ~(uint)local_d0 &
                     *(uint *)((longlong)FVar15 + (longlong)(int)uVar16 * 4);
            uVar17 = uVar17 & ~(uint)local_d0;
            for (; uVar18 == 0; uVar18 = *(uint *)((longlong)FVar15 + (longlong)(int)uVar18 * 4)) {
              uVar18 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar18;
              iVar11 = iVar11 + 0x20;
              if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < (int)uVar18)
              goto LAB_1493bc096;
              uVar17 = 0xffffffff;
            }
            uVar18 = ~(uVar18 - 1) & uVar18;
            local_d0 = (FNiagaraScalabilityManager *)CONCAT44(local_d0._4_4_,uVar18);
            uVar19 = (ulonglong)uVar18 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            local_b4 = (int)lVar7;
            uVar18 = iVar11 + -1 + local_b4;
            if ((int)uVar20 < (int)uVar18) {
              uVar18 = uVar20;
            }
            uVar19 = (ulonglong)uVar18;
          }
LAB_1493bc096:
        } while (local_d8[0] < (this->DefaultContext).MaxUpdateCount);
      }
    }
    else if (0 < (this->ManagedComponents).ArrayNum) {
      do {
        bVar10 = EvaluateCullState(this,pFVar1,(int)uVar16,local_d8);
        uVar19 = (ulonglong)((int)uVar16 + 1);
        if (!bVar10) {
          uVar19 = uVar16;
        }
        uVar16 = uVar19;
      } while ((int)uVar19 < (this->ManagedComponents).ArrayNum);
    }
    uVar16 = 0;
    uVar17 = 0;
    if ((this->DefaultContext).bProcessAllComponents == false) {
      FVar21 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
      iVar11 = (this->DefaultContext).ComponentRequiresUpdate.NumBits;
      if (FVar21 == (ForElementType<unsigned_int>)0x0) {
        FVar21 = (ForElementType<unsigned_int>)&(this->DefaultContext).ComponentRequiresUpdate;
      }
      uVar20 = iVar11 + 0x1f;
      FVar15 = FVar21;
      uVar19 = uVar16;
      if (uVar20 >> 5 != 0) {
LAB_1493bc0d7:
        if (*(int *)FVar15 == 0) goto code_r0x0001493bc0dc;
        puVar2 = (uint *)((longlong)FVar21 + uVar19 * 4);
        local_b0 = 0;
        bVar10 = *puVar2 != 0;
        if (bVar10) {
          for (; (*puVar2 >> local_b0 & 1) == 0; local_b0 = local_b0 + 1) {
          }
        }
        iVar12 = 0x20;
        if (bVar10) {
          iVar12 = local_b0;
        }
        iVar12 = iVar12 + (int)uVar19 * 0x20;
        if ((iVar11 <= iVar12) || (iVar12 == -1)) goto LAB_1493bc10b;
        goto LAB_1493bc21a;
      }
    }
LAB_1493bc10b:
    if (((this->DefaultContext).bRequiresGlobalSignificancePass == false) ||
       (pUVar6 = (((this->EffectType).field0_0x0.DebugPtr)->SignificanceHandler).field0_0x0.DebugPtr
       , pUVar6 == (UNiagaraSignificanceHandler *)0x0)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
      ProcessSignificance(this,pUVar6,pFVar1);
    }
    if ((this->DefaultContext).bHasDirtyState != false) {
      EVar3 = ((this->EffectType).field0_0x0.DebugPtr)->CullReaction;
      uVar20 = uVar17;
      if (((bVar10) && (GApplyInstanceCountsRigidly != 0)) &&
         (iVar11 = (this->DefaultContext).SignificanceIndices.ArrayNum, uVar19 = uVar16,
         uVar23 = uVar16, 0 < iVar11)) {
        do {
          uVar20 = (uint)uVar19;
          uVar18 = uVar17;
          if ((int)uVar20 < iVar11) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          bVar10 = ApplyScalabilityState
                             (this,*(int *)((pFVar1->SignificanceIndices).AllocatorInstance.Data +
                                           uVar23),EVar3,(this->DefaultContext).bNewOnly);
        } while ((bVar10) &&
                (iVar11 = (this->DefaultContext).SignificanceIndices.ArrayNum,
                uVar19 = (ulonglong)uVar20, uVar23 = uVar23 + 4, (int)uVar20 < iVar11));
      }
      iVar11 = (this->ManagedComponents).ArrayNum;
      if (((int)uVar20 < iVar11) && (0 < iVar11)) {
        do {
          bVar10 = ApplyScalabilityState(this,(int)uVar16,EVar3,(this->DefaultContext).bNewOnly);
          uVar19 = (ulonglong)((int)uVar16 + 1);
          if (!bVar10) {
            uVar19 = uVar16;
          }
          uVar16 = uVar19;
        } while ((int)uVar19 < (this->ManagedComponents).ArrayNum);
      }
      (this->DefaultContext).bHasDirtyState = false;
    }
    (this->DefaultContext).ComponentRequiresUpdate.NumBits = 0;
LAB_1493bc21a:
    this->bRefreshOwnerAllowsScalability = false;
  }
  return;
code_r0x0001493bb9f5:
  uVar17 = (int)uVar16 + 1;
  uVar16 = (ulonglong)uVar17;
  FVar15 = (ForElementType<unsigned_int>)((longlong)FVar15 + 4);
  if ((int)(local_a8.ComponentRequiresUpdate.NumBits + 0x1fU >> 5) <= (int)uVar17)
  goto LAB_1493bba26;
  goto LAB_1493bb9f0;
code_r0x0001493bbc4b:
  uVar18 = (int)uVar19 + 1;
  FVar15 = (ForElementType<unsigned_int>)((longlong)FVar15 + 4);
  uVar19 = (ulonglong)uVar18;
  if ((int)(uVar20 >> 5) <= (int)uVar18) goto LAB_1493bbc55;
  goto LAB_1493bbc42;
code_r0x0001493bc0dc:
  uVar18 = (int)uVar19 + 1;
  FVar15 = (ForElementType<unsigned_int>)((longlong)FVar15 + 4);
  uVar19 = (ulonglong)uVar18;
  if ((int)(uVar20 >> 5) <= (int)uVar18) goto LAB_1493bc10b;
  goto LAB_1493bc0d7;
}

// Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister @ 1493be0a0

UClass * __cdecl Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRibbonRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton,
               UNiagaraRibbonRendererProperties::
               StaticRegisterNativesUNiagaraRibbonRendererProperties,0x520,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraRibbonRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraRibbonRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister @ 1493be160

UClass * __cdecl Z_Construct_UClass_UNiagaraScratchPadContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScratchPadContainer",
               &Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton,
               UNiagaraScratchPadContainer::StaticRegisterNativesUNiagaraScratchPadContainer,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraScratchPadContainer>,
               InternalVTableHelperCtorCaller<UNiagaraScratchPadContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScratchPadContainer.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraScript_NoRegister @ 1493be210

UClass * __cdecl Z_Construct_UClass_UNiagaraScript_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScript",
               &Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton,
               UNiagaraScript::StaticRegisterNativesUNiagaraScript,0x350,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraScript>,
               InternalVTableHelperCtorCaller<UNiagaraScript>,local_res8,
               UNiagaraScriptBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSettings_NoRegister @ 1493be2d0

UClass * __cdecl Z_Construct_UClass_UNiagaraSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSettings",
               &Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton,
               UNiagaraSettings::StaticRegisterNativesUNiagaraSettings,0x130,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Niagara",
               InternalConstructor<UNiagaraSettings>,
               InternalVTableHelperCtorCaller<UNiagaraSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSettings.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister @ 1493be390

UClass * __cdecl Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCacheFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton,
               UNiagaraSimCacheFunctionLibrary::StaticRegisterNativesUNiagaraSimCacheFunctionLibrary
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimCacheFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraSimCacheFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState @ 1493be450

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage @ 1493be490

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage @ 1493be4d0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode @ 1493be510

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility @ 1493be550

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification @ 1493be590

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour @ 1493be5d0

UEnum * __cdecl Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour(void)

{
  if (Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton,
               &Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken @ 1493be610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraInlineDynamicInputFormatToken.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraInlineDynamicInputFormatToken.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraInlineDynamicInputFormatToken.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraInlineDynamicInputFormatToken.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraModuleDependency @ 1493be690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraModuleDependency(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraModuleDependency.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraModuleDependency.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraModuleDependency.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraModuleDependency.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraScalabilityManager @ 1493be710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraScalabilityManager(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScalabilityManager.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraScalabilityManager.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraScalabilityManager.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraScalabilityManager.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo @ 1493be790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionPaddingInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionPaddingInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionPaddingInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionPaddingInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraScriptHighlight @ 1493be810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraScriptHighlight(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptHighlight.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraScriptHighlight.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptHighlight.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraScriptHighlight.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore @ 1493be890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptInstanceParameterStore.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraScriptInstanceParameterStore.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptInstanceParameterStore.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraScriptInstanceParameterStore.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVersionedNiagaraScriptData @ 1493be910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVersionedNiagaraScriptData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraScriptData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVersionedNiagaraScriptData.InnerSingleton,
               &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraScriptData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVersionedNiagaraScriptData.InnerSingleton;
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

// OnCacheBeginWrite'' @ 150414fe0

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraSimCache::OnCacheBeginWrite__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UNiagaraSimCache::OnCacheBeginWrite._8_8_,UNiagaraSimCache::OnCacheBeginWrite._16_4_);
  if (UNiagaraSimCache::OnCacheBeginWrite._8_8_ != 0) {
    FMemory::Free((void *)UNiagaraSimCache::OnCacheBeginWrite._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UNiagaraSimCache::OnCacheBeginWrite);
  return;
}

// OnCacheEndWrite'' @ 150415020

void __cdecl `dynamic_atexit_destructor_for_'UNiagaraSimCache::OnCacheEndWrite__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UNiagaraSimCache::OnCacheEndWrite._8_8_,UNiagaraSimCache::OnCacheEndWrite._16_4_);
  if (UNiagaraSimCache::OnCacheEndWrite._8_8_ != 0) {
    FMemory::Free((void *)UNiagaraSimCache::OnCacheEndWrite._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UNiagaraSimCache::OnCacheEndWrite);
  return;
}

// `dynamic_atexit_destructor_for_'CVarApplyInstanceCountsRigidly'' @ 150415060

void __cdecl _dynamic_atexit_destructor_for__CVarApplyInstanceCountsRigidly__(void)

{
  CVarApplyInstanceCountsRigidly._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarApplyInstanceCountsRigidly);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNiagaraSpriteRendering'' @ 150415080

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNiagaraSpriteRendering__(void)

{
  CVarEnableNiagaraSpriteRendering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNiagaraSpriteRendering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogCompileStaticVars'' @ 1504150a0

void __cdecl _dynamic_atexit_destructor_for__CVarLogCompileStaticVars__(void)

{
  CVarLogCompileStaticVars._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogCompileStaticVars);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraCompileHashAllDataInterfaces'' @ 1504150c0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraCompileHashAllDataInterfaces__(void)

{
  CVarNiagaraCompileHashAllDataInterfaces._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraCompileHashAllDataInterfaces);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraCompressScriptByteCode'' @ 1504150e0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraCompressScriptByteCode__(void)

{
  CVarNiagaraCompressScriptByteCode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraCompressScriptByteCode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraDumpKeyGen'' @ 150415100

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraDumpKeyGen__(void)

{
  CVarNiagaraDumpKeyGen._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraDumpKeyGen);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraEventSpawnsUpdateInitialAttributeValues'' @ 150415120

void __cdecl
_dynamic_atexit_destructor_for__CVarNiagaraEventSpawnsUpdateInitialAttributeValues__(void)

{
  CVarNiagaraEventSpawnsUpdateInitialAttributeValues._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraEventSpawnsUpdateInitialAttributeValues);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraExecVMScripts'' @ 150415140

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraExecVMScripts__(void)

{
  CVarNiagaraExecVMScripts._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraExecVMScripts);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraForceExecVMPath'' @ 150415160

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraForceExecVMPath__(void)

{
  CVarNiagaraForceExecVMPath._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraForceExecVMPath);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraForceSsafeScriptAttributeTrim'' @ 150415180

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraForceSsafeScriptAttributeTrim__(void)

{
  CVarNiagaraForceSsafeScriptAttributeTrim._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraForceSsafeScriptAttributeTrim);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraGpuScriptsCompiledBySystem'' @ 1504151a0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraGpuScriptsCompiledBySystem__(void)

{
  CVarNiagaraGpuScriptsCompiledBySystem._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraGpuScriptsCompiledBySystem);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraStripByteCodeOverride'' @ 1504151c0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraStripByteCodeOverride__(void)

{
  CVarNiagaraStripByteCodeOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraStripByteCodeOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingNiagaraSprites'' @ 1504151e0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingNiagaraSprites__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingNiagaraSprites);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRendererEnabled'' @ 150415200

void __cdecl
NiagaraRendererVolumesLocal::_dynamic_atexit_destructor_for__CVarRendererEnabled__(void)

{
  CVarRendererEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRendererEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScalabilityManParallelThreshold'' @ 150415220

void __cdecl _dynamic_atexit_destructor_for__CVarScalabilityManParallelThreshold__(void)

{
  CVarScalabilityManParallelThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarScalabilityManParallelThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScalabilityMaxUpdatesPerFrame'' @ 150415240

void __cdecl _dynamic_atexit_destructor_for__CVarScalabilityMaxUpdatesPerFrame__(void)

{
  CVarScalabilityMaxUpdatesPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScalabilityMaxUpdatesPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScalabilityUpdateTime_High'' @ 150415260

void __cdecl _dynamic_atexit_destructor_for__CVarScalabilityUpdateTime_High__(void)

{
  CVarScalabilityUpdateTime_High._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScalabilityUpdateTime_High);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScalabilityUpdateTime_Low'' @ 150415280

void __cdecl _dynamic_atexit_destructor_for__CVarScalabilityUpdateTime_Low__(void)

{
  CVarScalabilityUpdateTime_Low._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScalabilityUpdateTime_Low);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScalabilityUpdateTime_Medium'' @ 1504152a0

void __cdecl _dynamic_atexit_destructor_for__CVarScalabilityUpdateTime_Medium__(void)

{
  CVarScalabilityUpdateTime_Medium._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScalabilityUpdateTime_Medium);
  return;
}

// `dynamic_atexit_destructor_for_'LogNiagaraSimCacheJson'' @ 1504152c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNiagaraSimCacheJson__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNiagaraSimCacheJson);
  return;
}

// `dynamic_atexit_destructor_for_'MessagedEffectTypeSet'' @ 1504152e0

void __cdecl
`GetMaxUpdatesPerFrame'::__l14::_dynamic_atexit_destructor_for__MessagedEffectTypeSet__(void)

{
  MessagedEffectTypeSet.HashSize = 0;
  if (MessagedEffectTypeSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)MessagedEffectTypeSet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<void_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<void_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&MessagedEffectTypeSet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'RibbonRendererPropertiesToDeferredInit'' @ 150415320

void __cdecl
NiagaraRibbonRendererPropertiesPrivate::
_dynamic_atexit_destructor_for__RibbonRendererPropertiesToDeferredInit__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RibbonRendererPropertiesToDeferredInit.AllocatorInstance.Data;
  if (RibbonRendererPropertiesToDeferredInit.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (RibbonRendererPropertiesToDeferredInit.AllocatorInstance.Data !=
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

