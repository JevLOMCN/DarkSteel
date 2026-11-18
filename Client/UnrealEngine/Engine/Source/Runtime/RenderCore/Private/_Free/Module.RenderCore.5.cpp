// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 377

// Instance'' @ 141073070

void __cdecl `dynamic_initializer_for_'UE::ShaderPipeline::FShutdownContainer::Instance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::ShaderPipeline::FShutdownContainer::Instance__);
  return;
}

// Null'' @ 141073090

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValue::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__);
  return;
}

// Null'' @ 1410730b0

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__);
  return;
}

// OnCachePreOpen'' @ 1410730d0

void __cdecl `dynamic_initializer_for_'FShaderPipelineCache::OnCachePreOpen__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FShaderPipelineCache::OnCachePreOpen__);
  return;
}

// OnCachedClosed'' @ 1410730f0

void __cdecl `dynamic_initializer_for_'FShaderPipelineCache::OnCachedClosed__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FShaderPipelineCache::OnCachedClosed__);
  return;
}

// OnCachedOpened'' @ 141073110

void __cdecl `dynamic_initializer_for_'FShaderPipelineCache::OnCachedOpened__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FShaderPipelineCache::OnCachedOpened__);
  return;
}

// OnPrecompilationBegin'' @ 141073130

void __cdecl `dynamic_initializer_for_'FShaderPipelineCache::OnPrecompilationBegin__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FShaderPipelineCache::OnPrecompilationBegin__);
  return;
}

// OnPrecompilationComplete'' @ 141073150

void __cdecl `dynamic_initializer_for_'FShaderPipelineCache::OnPrecompilationComplete__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FShaderPipelineCache::OnPrecompilationComplete__);
  return;
}

// RenderingThreadHighFrequencyTickableObjects'' @ 141073170

void __cdecl
`dynamic_initializer_for_'FTickableObjectRenderThread::RenderingThreadHighFrequencyTickableObjects__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'FTickableObjectRenderThread::
         RenderingThreadHighFrequencyTickableObjects__);
  return;
}

// RenderingThreadTickableObjects'' @ 141073190

void __cdecl
`dynamic_initializer_for_'FTickableObjectRenderThread::RenderingThreadTickableObjects__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FTickableObjectRenderThread::
         RenderingThreadTickableObjects__);
  return;
}

// ShaderTypeRegistration'' @ 1410731b0

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

void __cdecl `dynamic_initializer_for_'FMemcpyCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FMemcpyCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FMemcpyCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FMemcpyCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141073200

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

void __cdecl `dynamic_initializer_for_'FMemsetBufferCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FMemsetBufferCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FMemsetBufferCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FMemsetBufferCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141073250

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

void __cdecl `dynamic_initializer_for_'FRDGMemcpyCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FRDGMemcpyCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FRDGMemcpyCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FRDGMemcpyCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1410732a0

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

void __cdecl `dynamic_initializer_for_'FRDGMemsetBufferCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FRDGMemsetBufferCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FRDGMemsetBufferCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FRDGMemsetBufferCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1410732f0

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

void __cdecl `dynamic_initializer_for_'FRDGScatterCopyCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FRDGScatterCopyCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FRDGScatterCopyCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FRDGScatterCopyCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141073340

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

void __cdecl `dynamic_initializer_for_'FScatterCopyCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FScatterCopyCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FScatterCopyCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FScatterCopyCS::ShaderTypeRegistration__);
  return;
}

// UserCacheTaskKey'' @ 141073390

void __cdecl `dynamic_initializer_for_'FShaderPipelineCache::UserCacheTaskKey__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FShaderPipelineCache::UserCacheTaskKey__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDebugHashAssociation'' @ 1410733b0

void __cdecl _dynamic_initializer_for__CVarEnableDebugHashAssociation__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableDebugHashAssociation,L"r.ShaderCompiler.EnableDebugHashAssociation",
             local_res8,
             L"If true, a // DebugHash_<hash> comment will be appended to all finalized shader source matching the DebugHash_<hash>.txt file output with shader debug artifacts. This can be used to find debug artifacts from shader source visible in Pix/RenderDoc/etc when symbols are enabled. Note that currently the only known reason to disable this is when comparing shader source or symbols across streams where versions may differ but source would otherwise match."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDebugHashAssociation__);
  return;
}

// `dynamic_initializer_for_'CVarEnableShaderMapTracking'' @ 141073400

void __cdecl _dynamic_initializer_for__CVarEnableShaderMapTracking__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableShaderMapTracking,L"r.TrackShaderMaps",local_res8,
             L"Enables the tracking of every shadermap instantiated. Required to run ListShaderMaps command."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarEnableShaderMapTracking__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheAutoSaveTime'' @ 141073450

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheAutoSaveTime__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1e;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheAutoSaveTime,L"r.ShaderPipelineCache.AutoSaveTime",local_res8,
             L"Set the time where any logged PSO\'s will be saved if the number is < r.ShaderPipelineCache.SaveAfterPSOsLogged. Disabled when r.ShaderPipelineCache.SaveAfterPSOsLogged is 0"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheAutoSaveTime__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheAutoSaveTimeBoundPSO'' @ 1410734a0

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheAutoSaveTimeBoundPSO__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x7fffffff;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheAutoSaveTimeBoundPSO,L"r.ShaderPipelineCache.AutoSaveTimeBoundPSO",
             local_res8,
             L"Set the time where any logged PSO\'s will be saved when -logpso is on the command line."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheAutoSaveTimeBoundPSO__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheBackgroundBatchSize'' @ 1410734f0

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheBackgroundBatchSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheBackgroundBatchSize,L"r.ShaderPipelineCache.BackgroundBatchSize",
             local_res8,
             L"Set the number of PipelineStateObjects to compile in a single batch operation when compiling in the background. Defaults to a maximum of 1 per frame, due to async. file IO it is less in practice."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheBackgroundBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheBackgroundBatchTime'' @ 141073540

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheBackgroundBatchTime__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarPSOFileCacheBackgroundBatchTime,L"r.ShaderPipelineCache.BackgroundBatchTime",
             local_res8,
             L"The target time (in ms) to spend precompiling each frame when in the background or 0.0 to disable. When precompiling is faster the batch size will grow and when slower will shrink to attempt to occupy the full amount. Defaults to 0.0 (off)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheBackgroundBatchTime__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheBatchSize'' @ 141073590

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheBatchSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x32;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheBatchSize,L"r.ShaderPipelineCache.BatchSize",local_res8,
             L"Set the number of PipelineStateObjects to compile in a single batch operation when compiling takes priority. Defaults to a maximum of 50 per frame, due to async. file IO it is less in practice."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheBatchTime'' @ 1410735e0

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheBatchTime__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 16.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarPSOFileCacheBatchTime,L"r.ShaderPipelineCache.BatchTime",local_res8,
             L"The target time (in ms) to spend precompiling each frame when compiling takes priority or 0.0 to disable. When precompiling is faster the batch size will grow and when slower will shrink to attempt to occupy the full amount. Defaults to 16.0 (max. ms per-frame of precompilation)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheBatchTime__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheGameFileMaskEnabled'' @ 141073630

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheGameFileMaskEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheGameFileMaskEnabled,L"r.ShaderPipelineCache.GameFileMaskEnabled",
             local_res8,
             L"Set non zero to use GameFileMask during PSO precompile - recording should always save out the usage masks to make that data availble when needed."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheGameFileMaskEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheMaxPrecompileTime'' @ 141073680

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheMaxPrecompileTime__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarPSOFileCacheMaxPrecompileTime,L"r.ShaderPipelineCache.MaxPrecompileTime",
             local_res8,
             L"The maximum time to allow a PSO to be precompiled.  if greather than 0, the amount of wall time we will allow pre-compile of PSOs and then switch to background processing."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheMaxPrecompileTime__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheMinBindCount'' @ 1410736d0

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheMinBindCount__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheMinBindCount,L"r.ShaderPipelineCache.MinBindCount",local_res8,
             L"The minimum bind count to allow a PSO to be precompiled.  Changes to this value will not affect PSOs that have already been removed from consideration."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheMinBindCount__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheOnlyOpenUserCache'' @ 141073720

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheOnlyOpenUserCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheOnlyOpenUserCache,L"r.ShaderPipelineCache.OnlyOpenUserCache",
             local_res8,
             L"If > 0, only the user cache file will be opened, and the static file cache will not be opened. Defaults to 0."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheOnlyOpenUserCache__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCachePreCompileMask'' @ 141073770

void __cdecl _dynamic_initializer_for__CVarPSOFileCachePreCompileMask__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCachePreCompileMask,L"r.ShaderPipelineCache.PreCompileMask",local_res8,
             L"Mask used to precompile the cache. Defaults to all PSOs (-1)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCachePreCompileMask__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCachePreOptimizeEnabled'' @ 1410737c0

void __cdecl _dynamic_initializer_for__CVarPSOFileCachePreOptimizeEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCachePreOptimizeEnabled,L"r.ShaderPipelineCache.PreOptimizeEnabled",
             local_res8,
             L"Set non zero to PreOptimize PSOs - this allows some PSOs to be compiled in the foreground before going in to game"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCachePreOptimizeEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCachePrecompileBatchSize'' @ 141073810

void __cdecl _dynamic_initializer_for__CVarPSOFileCachePrecompileBatchSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x32;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCachePrecompileBatchSize,L"r.ShaderPipelineCache.PrecompileBatchSize",
             local_res8,
             L"Set the number of PipelineStateObjects to compile in a single batch operation when pre-optimizing the cache. Defaults to a maximum of 50 per frame, due to async. file IO it is less in practice."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCachePrecompileBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCachePrecompileBatchTime'' @ 141073860

void __cdecl _dynamic_initializer_for__CVarPSOFileCachePrecompileBatchTime__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarPSOFileCachePrecompileBatchTime,L"r.ShaderPipelineCache.PrecompileBatchTime",
             local_res8,
             L"The target time (in ms) to spend precompiling each frame when cpre-optimizing or 0.0 to disable. When precompiling is faster the batch size will grow and when slower will shrink to attempt to occupy the full amount. Defaults to 10.0 (off)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCachePrecompileBatchTime__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheSaveAfterPSOsLogged'' @ 1410738b0

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheSaveAfterPSOsLogged__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheSaveAfterPSOsLogged,L"r.ShaderPipelineCache.SaveAfterPSOsLogged",
             local_res8,
             L"Set the number of PipelineStateObjects to log before automatically saving. 0 will disable automatic saving (which is the default now, as automatic saving is found to be broken)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheSaveAfterPSOsLogged__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheSaveBoundPSOLog'' @ 141073900

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheSaveBoundPSOLog__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheSaveBoundPSOLog,L"r.ShaderPipelineCache.SaveBoundPSOLog",local_res8,
             L"If > 0 then a log of all bound PSOs for this run of the program will be saved to a writable user cache file. Defaults to 0 but is forced on with -logpso."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheSaveBoundPSOLog__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheStartupMode'' @ 141073950

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheStartupMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheStartupMode,L"r.ShaderPipelineCache.StartupMode",local_res8,
             L"Sets the startup mode for the PSO cache, determining what the cache does after initialisation:\n\t0: Precompilation is paused and nothing will compile until a call to ResumeBatching().\n\t1: Precompilation is enabled in the \'Fast\' mode.\n\t2: Precompilation is enabled in the \'Background\' mode.\nDefault is 1."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheStartupMode__);
  return;
}

// `dynamic_initializer_for_'CVarPSOGlobalShadersOnlyWhenPSOPrecaching'' @ 1410739a0

void __cdecl _dynamic_initializer_for__CVarPSOGlobalShadersOnlyWhenPSOPrecaching__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOGlobalShadersOnlyWhenPSOPrecaching,
             L"r.ShaderPipelineCache.GlobalShadersOnlyWhenPSOPrecaching",local_res8,
             L"Only compile PSOs from the GlobalShader cache when runtime PSOPrecaching is enabled (default disabled)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOGlobalShadersOnlyWhenPSOPrecaching__);
  return;
}

// `dynamic_initializer_for_'CVarShaderCompilerEmitWarningsOnLoad'' @ 1410739f0

void __cdecl _dynamic_initializer_for__CVarShaderCompilerEmitWarningsOnLoad__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderCompilerEmitWarningsOnLoad,L"r.ShaderCompiler.EmitWarningsOnLoad",
             &GShaderCompilerEmitWarningsOnLoad,
             L"When 1, shader compiler warnings are emitted to the log for all shaders as they are loaded."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderCompilerEmitWarningsOnLoad__);
  return;
}

// `dynamic_initializer_for_'CVarShaderPipelineCacheDoNotPrecompileComputePSO'' @ 141073a40

void __cdecl _dynamic_initializer_for__CVarShaderPipelineCacheDoNotPrecompileComputePSO__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderPipelineCacheDoNotPrecompileComputePSO,
             L"r.ShaderPipelineCache.DoNotPrecompileComputePSO",
             &GShaderPipelineCacheDoNotPrecompileComputePSO,
             L"Disables precompilation of compute PSOs (replayed from a recorded file) on start. This is a safety switch in case things go wrong"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderPipelineCacheDoNotPrecompileComputePSO__);
  return;
}

// `dynamic_initializer_for_'CVarShaderPipelineCacheDoNotPrecompileRayTracingPSO'' @ 141073a90

void __cdecl _dynamic_initializer_for__CVarShaderPipelineCacheDoNotPrecompileRayTracingPSO__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderPipelineCacheDoNotPrecompileRayTracingPSO,
             L"r.ShaderPipelineCache.DoNotPrecompileRayTracingPSO",
             &GShaderPipelineCacheDoNotPrecompileRayTracingPSO,
             L"Disables precompilation of raytracing PSOs (from a file cache) on start.",0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderPipelineCacheDoNotPrecompileRayTracingPSO__);
  return;
}

// `dynamic_initializer_for_'CVarShaderSourceCompressionLevel'' @ 141073ae0

void __cdecl _dynamic_initializer_for__CVarShaderSourceCompressionLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderSourceCompressionLevel,L"r.ShaderSource.CompressionLevel",
             &GShaderSourceCompressionLevel,
             L"Compression level for shader source stored in memory. See FOodleDataCompression::ECompressionLevel enum for supported values; default is SuperFast."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderSourceCompressionLevel__);
  return;
}

// `dynamic_initializer_for_'CVarShaderSourceCompressionMethod'' @ 141073b30

void __cdecl _dynamic_initializer_for__CVarShaderSourceCompressionMethod__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderSourceCompressionMethod,L"r.ShaderSource.CompressionMethod",
             &GShaderSourceCompressionMethod,
             L"Compression method for shader source stored in memory. See FOodleDataCompression::ECompressor enum for supported values; defaults to Mermaid."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderSourceCompressionMethod__);
  return;
}

// `dynamic_initializer_for_'ClosePipelineCacheCmd'' @ 141073b80

void __cdecl _dynamic_initializer_for__ClosePipelineCacheCmd__(void)

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
    puVar1[3] = ConsoleCommandClosePipelineFileCache;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ClosePipelineCacheCmd,L"r.ShaderPipelineCache.Close",
             L"Close the current pipeline file cache.",
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
  atexit(_dynamic_atexit_destructor_for__ClosePipelineCacheCmd__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper119'' @ 141073cc0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper119__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_7>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper119,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper120'' @ 141073d20

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper120__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_8>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper120,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper121'' @ 141073d80

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper121__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_9>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper121,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper122'' @ 141073de0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper122__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_10>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper122,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'GAllShaderMaps'' @ 141073e40

void __cdecl _dynamic_initializer_for__GAllShaderMaps__(void)

{
  atexit(_dynamic_atexit_destructor_for__GAllShaderMaps__);
  return;
}

// `dynamic_initializer_for_'GAllShaderMapsGuard'' @ 141073e60

void __cdecl _dynamic_initializer_for__GAllShaderMapsGuard__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GAllShaderMapsGuard,4000);
  atexit(_dynamic_atexit_destructor_for__GAllShaderMapsGuard__);
  return;
}

// `dynamic_initializer_for_'GListShaderCmd'' @ 141073e90

void __cdecl _dynamic_initializer_for__GListShaderCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_5>::<lambda_invoker_cdecl>;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x88))
                     (IConsoleManager::Singleton,L"ListShaders",
                      L"Spits out a csv table containing stats of all shaders",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GListShaderCmd,pIVar5);
  GListShaderCmd._0_8_ = &___7FAutoConsoleCommandWithArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GListShaderCmd__);
  return;
}

// `dynamic_initializer_for_'GListShaderMapsCmd'' @ 141074030

void __cdecl _dynamic_initializer_for__GListShaderMapsCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_6>::<lambda_invoker_cdecl>;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x88))
                     (IConsoleManager::Singleton,L"ListShaderMaps",
                      L"Spits out a csv table containing stats of all shadermaps",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GListShaderMapsCmd,pIVar5);
  GListShaderMapsCmd._0_8_ = &___7FAutoConsoleCommandWithArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GListShaderMapsCmd__);
  return;
}

// `dynamic_initializer_for_'GPipelinePrecompileTasksInFlightVar'' @ 1410741d0

void __cdecl _dynamic_initializer_for__GPipelinePrecompileTasksInFlightVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GPipelinePrecompileTasksInFlightVar,L"shaderpipeline.MinPrecompileTasksInFlight",
             &GMinPipelinePrecompileTasksInFlightThreshold,
             L"Note: Only used when threadpool PSO precompiling is active.\nThe number of active PSO precompile jobs in flight before we will submit another batch of jobs. \ni.e. when the number of inflight precompile tasks drops below this threshold we can add the next batch of precompile tasks. \nThis is to prevent bubbles between precompile batches but also to avoid saturating dispatch."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__GPipelinePrecompileTasksInFlightVar__);
  return;
}

// `dynamic_initializer_for_'GlobalRayTracingCallableShaderLibrary'' @ 141074220

void __cdecl _dynamic_initializer_for__GlobalRayTracingCallableShaderLibrary__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GlobalRayTracingCallableShaderLibrary.CS,4000);
  atexit(_dynamic_atexit_destructor_for__GlobalRayTracingCallableShaderLibrary__);
  return;
}

// `dynamic_initializer_for_'GlobalRayTracingHitGroupLibrary'' @ 141074250

void __cdecl _dynamic_initializer_for__GlobalRayTracingHitGroupLibrary__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GlobalRayTracingHitGroupLibrary.CS,4000);
  atexit(_dynamic_atexit_destructor_for__GlobalRayTracingHitGroupLibrary__);
  return;
}

// `dynamic_initializer_for_'GlobalRayTracingMissShaderLibrary'' @ 141074280

void __cdecl _dynamic_initializer_for__GlobalRayTracingMissShaderLibrary__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GlobalRayTracingMissShaderLibrary.CS,4000);
  atexit(_dynamic_atexit_destructor_for__GlobalRayTracingMissShaderLibrary__);
  return;
}

// `dynamic_initializer_for_'LoadPipelineCacheCmd'' @ 1410742b0

void __cdecl _dynamic_initializer_for__LoadPipelineCacheCmd__(void)

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
    puVar1[3] = ConsoleCommandLoadPipelineFileCache;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&LoadPipelineCacheCmd,L"r.ShaderPipelineCache.Open",L"Close and reopen the user cache."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__LoadPipelineCacheCmd__);
  return;
}

// `dynamic_initializer_for_'LogShaderWarnings'' @ 1410743f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogShaderWarnings__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogShaderWarnings,L"LogShaderWarnings",Log,Log);
  atexit(_dynamic_atexit_destructor_for__LogShaderWarnings__);
  return;
}

// `dynamic_initializer_for_'SavePipelineCacheCmd'' @ 141074430

void __cdecl _dynamic_initializer_for__SavePipelineCacheCmd__(void)

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
    puVar1[3] = ConsoleCommandSavePipelineFileCache;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&SavePipelineCacheCmd,L"r.ShaderPipelineCache.Save",
             L"Save the current pipeline file cache.",
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
  atexit(_dynamic_atexit_destructor_for__SavePipelineCacheCmd__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PreCompileBatchNum'' @ 141074570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PreCompileBatchNum__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PreCompileBatchNum == (FThreadSafeStaticStat<FStat_STAT_PreCompileBatchNum>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_PreCompileBatchNum");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileBatchNum,*pFVar1,
               L"# Batches Pre-Compiled","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PreCompileBatchTotal'' @ 141074600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PreCompileBatchTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PreCompileBatchTotal ==
      (FThreadSafeStaticStat<FStat_STAT_PreCompileBatchTotal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PreCompileBatchTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileBatchTotal,*pFVar1,
               L"Total Batches Pre-Compiled","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PreCompileMemory'' @ 141074690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PreCompileMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PreCompileMemory == (FThreadSafeStaticStat<FStat_STAT_PreCompileMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PreCompileMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileMemory,*pFVar1,
               L"Pre-Compile Memory","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PreCompileShadersNum'' @ 141074720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PreCompileShadersNum__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PreCompileShadersNum ==
      (FThreadSafeStaticStat<FStat_STAT_PreCompileShadersNum>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PreCompileShadersNum");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileShadersNum,*pFVar1,
               L"# Pipelines Pre-Compiled","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PreCompileShadersTotal'' @ 1410747b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PreCompileShadersTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PreCompileShadersTotal ==
      (FThreadSafeStaticStat<FStat_STAT_PreCompileShadersTotal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PreCompileShadersTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileShadersTotal,*pFVar1,
               L"Total Pipelines Pre-Compiled","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PreCompileTime'' @ 141074840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PreCompileTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PreCompileTime == (FThreadSafeStaticStat<FStat_STAT_PreCompileTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PreCompileTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileTime,*pFVar1,L"Pre-Compile Time"
               ,"STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PreCompileTotalTime'' @ 1410748d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PreCompileTotalTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PreCompileTotalTime == (FThreadSafeStaticStat<FStat_STAT_PreCompileTotalTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PreCompileTotalTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreCompileTotalTime,*pFVar1,
               L"Total Pre-Compile Time","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderPipelineActiveTaskCount'' @ 141074960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderPipelineActiveTaskCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderPipelineActiveTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineActiveTaskCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderPipelineActiveTaskCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineActiveTaskCount,*pFVar1,
               L"Active Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderPipelineTaskCount'' @ 1410749f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderPipelineTaskCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderPipelineTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineTaskCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderPipelineTaskCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineTaskCount,*pFVar1,
               L"Outstanding Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderPipelineWaitingTaskCount'' @ 141074a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderPipelineWaitingTaskCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderPipelineWaitingTaskCount ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderPipelineWaitingTaskCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderPipelineWaitingTaskCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderPipelineWaitingTaskCount,*pFVar1,
               L"Waiting Tasks","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'SwitchModePipelineCacheCmd'' @ 141074b10

void __cdecl _dynamic_initializer_for__SwitchModePipelineCacheCmd__(void)

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
    puVar1[3] = ConsoleCommandSwitchModePipelineCacheCmd;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&SwitchModePipelineCacheCmd,L"r.ShaderPipelineCache.SetBatchMode",
             L"Sets the compilation batch mode, which should be one of:\n\tPause: Suspend precompilation.\n\tBackground: Low priority precompilation.\n\tFast: High priority precompilation."
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
  atexit(_dynamic_atexit_destructor_for__SwitchModePipelineCacheCmd__);
  return;
}

// `scalar_deleting_destructor' @ 145e73980

void * __thiscall
IBaseDelegateInstance<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e739d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e73cf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy,`<lambda_5>::operator()'::__l18::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 145e73d20

void __cdecl <lambda_10>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FShaderUniformBufferMemberParameter::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 145e73d60

void __cdecl
<lambda_5>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FOutputDevice *param_2)

{
  <lambda_5> local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145e73d80

void __cdecl
<lambda_6>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FOutputDevice *param_2)

{
  <lambda_6> local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 145e73da0

void __cdecl <lambda_7>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FShaderParameter::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 145e73dc0

void __cdecl <lambda_8>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FShaderResourceParameter::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 145e73de0

void __cdecl <lambda_9>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// atomic<FRHIShader_*><FRHIShader_*,0> @ 145e73e00

atomic<FRHIShader_*> * __thiscall
std::atomic<FRHIShader_*>::atomic<FRHIShader_*><FRHIShader_*,0>(atomic<FRHIShader_*> *this)

{
  *this = (atomic<FRHIShader_*>)0x0;
  return this;
}

// operator<<<FShaderCodeResource,TSizedDefaultAllocator<32>_> @ 145e73e10

FArchive * __cdecl
operator<<<FShaderCodeResource,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FShaderCodeResource,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FShaderCodeResource *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
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
      DestructItems<FShaderCodeResource,int>
                ((FShaderCodeResource *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x66667)) {
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
              operator<<(param_1,(FShaderCodeResource *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FShaderCodeResource,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FShaderCodeResource *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<FShaderCodeResource,int>(pFVar2,1);
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

// AddCommandListSetupTask<`FRDGScatterUploadBuilder::Execute'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_> @ 145e74110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FRDGBuilder::
AddCommandListSetupTask<_FRDGScatterUploadBuilder::Execute_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
          (FRDGBuilder *this,<lambda_1> *param_1,FPipe *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  atomic<unsigned_int> *paVar1;
  FRDGScatterUploadBuilder *pFVar2;
  FScriptContainerElement *pFVar3;
  FRDGScatterUploadBuilder *pFVar4;
  FTaskHandle *pFVar5;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  longlong lVar8;
  FRHICommandListBase *pFVar9;
  FTaskBase *pFVar10;
  <lambda_1> *p<Var11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar14;
  int iVar15;
  ETaskPriority EVar16;
  ERDGSetupTaskWaitPoint EVar17;
  FQueuedCommandList local_res18;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  <lambda_1> local_68;
  <lambda_1> local_60;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_58;
  FRDGBuilder *local_48;
  uchar *puStack_40;
  FRHICommandListBase *local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  
  EVar17 = param_6;
  pTVar6 = (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)
           CONCAT71(in_stack_00000029,param_4);
  param_1->__this = (FRDGScatterUploadBuilder *)0x0;
  local_res18.CmdList = (FRHICommandListBase *)param_2;
  if (((param_6 == Compile) || (bVar7 = IsImmediateMode(), bVar7)) && (pTVar6->ArrayNum != 0)) {
    UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (pTVar6,(FTimespan)0x7fffffffffffffff);
  }
  lVar8 = 0x559;
  if (this->bCompiling == false) {
    lVar8 = 0x550;
  }
  local_48 = this;
  if (EVar17 == Compile) {
LAB_145e744c5:
    pFVar9 = (FRHICommandListBase *)this->_padding_;
    puStack_40 = (((FRHICommandListBase *)param_2)->MemManager).Top;
    uStack_30 = 0;
    local_38 = pFVar9;
    FTaskTagScope::FTaskTagScope((FTaskTagScope *)&local_58,EParallelRenderingThread);
    `FRDGScatterUploadBuilder::Execute'::__l2::<lambda_1>::operator()
              (&puStack_40,(FRHICommandList *)pFVar9);
    FTaskTagScope::~FTaskTagScope((FTaskTagScope *)&local_58);
  }
  else {
    if (*(char *)((longlong)&this->_padding_ + lVar8) == '\0') {
      pFVar13 = (pTVar6->AllocatorInstance).Data;
      iVar12 = pTVar6->ArrayNum;
      pFVar3 = pFVar13 + (longlong)iVar12 * 8;
      while( true ) {
        if (pTVar6->ArrayNum != iVar12) {
          `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&param_6);
        }
        param_2 = (FPipe *)local_res18.CmdList;
        if (pFVar13 == pFVar3) goto LAB_145e744c5;
        if ((*(longlong *)pFVar13 != 0) && (*(char *)(*(longlong *)pFVar13 + 0xd0) == '\0')) break;
        pFVar13 = pFVar13 + 8;
      }
    }
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"CreateCommandList");
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId690,"CreateCommandList",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBuilder.inl"
                 ,0x2b2);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId690);
    }
    pFVar9 = ::operator_new(0x1bb0);
    if (pFVar9 == (FRHICommandListBase *)0x0) {
      pFVar9 = (FRHICommandListBase *)0x0;
    }
    else {
      FRHICommandListBase::FRHICommandListBase
                (pFVar9,(FRHIGPUMask)*(uint *)(this->_padding_ + 0x29c),false);
    }
    local_58.DataPtr = &local_res18;
    local_58.ArrayNum = 1;
    local_res18.CmdList = pFVar9;
    FRHICommandListImmediate::QueueAsyncCommandListSubmit
              ((FRHICommandListImmediate *)this->_padding_,&local_58,Disabled,0);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    puStack_40 = (((FRHICommandListBase *)param_2)->MemManager).Top;
    EVar17 = EVar17 ^ Execute;
    iVar12 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
    uStack_30 = 1;
    local_38 = pFVar9;
    if (param_3 == (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar15 = 4;
      if (iVar12 < 4) {
        iVar15 = iVar12;
      }
      EVar16 = High;
      if (0 < iVar15) {
        EVar16 = (ETaskPriority)iVar15;
      }
      pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar10 == (FTaskBase *)0x0) {
        pFVar10 = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
        pFVar10->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGScatterUploadBuilder::Execute'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (pFVar10,L"FRDGBuilder::AddCommandListSetupTask",EVar16,EVar17,None);
        pFVar10[1]._padding_ = (longlong)local_48;
        pFVar10[1]._padding_ = (longlong)puStack_40;
        pFVar10[1]._padding_ = (longlong)local_38;
        pFVar10[1]._padding_ = CONCAT71(uStack_2f,uStack_30);
        pFVar10->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGScatterUploadBuilder::Execute'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
      }
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (pFVar10,pTVar6,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar10,0x100);
      p<Var11 = &local_60;
    }
    else {
      iVar15 = 4;
      if (iVar12 < 4) {
        iVar15 = iVar12;
      }
      pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar10 == (FTaskBase *)0x0) {
        pFVar10 = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar10,2,true);
        EVar16 = High;
        if (0 < iVar15) {
          EVar16 = (ETaskPriority)iVar15;
        }
        pFVar10->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGScatterUploadBuilder::Execute'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (pFVar10,L"FRDGBuilder::AddCommandListSetupTask",EVar16,EVar17,None);
        pFVar10[1]._padding_ = (longlong)local_48;
        pFVar10[1]._padding_ = (longlong)puStack_40;
        pFVar10[1]._padding_ = (longlong)local_38;
        pFVar10[1]._padding_ = CONCAT71(uStack_2f,uStack_30);
        pFVar10->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGScatterUploadBuilder::Execute'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
              ::_vftable_;
      }
      LOCK();
      *(longlong *)&param_3->ArrayNum = *(longlong *)&param_3->ArrayNum + 1;
      UNLOCK();
      LOCK();
      pFVar10->NumLocks = (atomic<unsigned_int>)((int)pFVar10->NumLocks + 1);
      UNLOCK();
      pFVar10->Pipe = (FPipe *)param_3;
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
                (pFVar10,pTVar6,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar10,0x100);
      p<Var11 = &local_68;
    }
    if (param_1 == p<Var11) {
      if (pFVar10 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar10->RefCount;
        iVar12 = *(int *)&paVar1->field_0x0;
        *(int *)&paVar1->field_0x0 = *(int *)&paVar1->field_0x0 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (*(code *)((((TArray<FRDGScatterUploadBuilder::FPass,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                        *)&pFVar10->_padding_)->AllocatorInstance).Data)->UploadBuffer)(pFVar10,1);
        }
      }
    }
    else {
      pFVar4 = param_1->__this;
      param_1->__this = (FRDGScatterUploadBuilder *)pFVar10;
      if (pFVar4 != (FRDGScatterUploadBuilder *)0x0) {
        LOCK();
        pFVar2 = pFVar4 + 2;
        iVar12 = *(int *)&(pFVar2->Passes).AllocatorInstance.Data;
        *(int *)&(pFVar2->Passes).AllocatorInstance.Data =
             *(int *)&(pFVar2->Passes).AllocatorInstance.Data + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (*(code *)((pFVar4->Passes).AllocatorInstance.Data)->UploadBuffer)(pFVar4,1);
        }
      }
    }
  }
  if (param_1->__this != (FRDGScatterUploadBuilder *)0x0) {
    pTVar14 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar12 = pTVar14->ArrayNum;
    if (iVar12 == pTVar14->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                         (0x808,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
    }
    pTVar14->ArrayNum = iVar12 + 1;
    pFVar5 = (pTVar14->AllocatorInstance).Data;
    pFVar5[iVar12].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar10 = (FTaskBase *)param_1->__this;
    pFVar5[iVar12].Pimpl.Reference = pFVar10;
    if (pFVar10 != (FTaskBase *)0x0) {
      LOCK();
      *(int *)&(pFVar10->RefCount).field_0x0 = *(int *)&(pFVar10->RefCount).field_0x0 + 1;
      UNLOCK();
      return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// AddCopyBufferPass<FRWBuffer> @ 145e745c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddCopyBufferPass<FRWBuffer>
          (FRDGBuilder *param_1,FRWBuffer *param_2,FRWBuffer *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *this;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBuffer>(FRDGBuilder_&,FRWBuffer_const_&,FRWBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar4;
  FRDGEventName local_88;
  undefined1 local_70 [96];
  uint local_10;
  
  FRWBuffer::FRWBuffer((FRWBuffer *)local_70,param_3);
  FRWBuffer::FRWBuffer((FRWBuffer *)(local_70 + 0x30),param_2);
  local_10 = param_4;
  pFVar3 = FRDGEventName::FRDGEventName(&local_88,1,L"ResizeResourceIfNeeded-Copy");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1f0,8);
  pTVar4 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWBuffer>_::__l2::<lambda_1>_>
                     (this,pFVar3,NeverCull,(<lambda_1> *)local_70);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar2 = (param_1->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar2 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar4;
  *(int *)&pTVar4->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar4);
  if (local_88.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRWBuffer::~FRWBuffer((FRWBuffer *)(local_70 + 0x30));
  FRWBuffer::~FRWBuffer((FRWBuffer *)local_70);
  return;
}

// AddCopyBufferPass<FRWBufferStructured> @ 145e746e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddCopyBufferPass<FRWBufferStructured>
          (FRDGBuilder *param_1,FRWBufferStructured *param_2,FRWBufferStructured *param_3,
          uint param_4)

{
  int *piVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *this;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBufferStructured>(FRDGBuilder_&,FRWBufferStructured_const_&,FRWBufferStructured_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar4;
  FRDGEventName local_68;
  undefined1 local_50 [64];
  uint local_10;
  
  FRWBufferStructured::FRWBufferStructured((FRWBufferStructured *)local_50,param_3);
  FRWBufferStructured::FRWBufferStructured((FRWBufferStructured *)(local_50 + 0x20),param_2);
  local_10 = param_4;
  pFVar3 = FRDGEventName::FRDGEventName(&local_68,1,L"ResizeResourceIfNeeded-Copy");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d0,8);
  pTVar4 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWBufferStructured>_::__l2::<lambda_1>_>
                     (this,pFVar3,NeverCull,(<lambda_1> *)local_50);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar2 = (param_1->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar2 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar4;
  *(int *)&pTVar4->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar4);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)(local_50 + 0x20));
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)local_50);
  return;
}

// AddCopyBufferPass<FRWByteAddressBuffer> @ 145e74800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddCopyBufferPass<FRWByteAddressBuffer>
          (FRDGBuilder *param_1,FRWByteAddressBuffer *param_2,FRWByteAddressBuffer *param_3,
          uint param_4)

{
  int *piVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *this;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWByteAddressBuffer>(FRDGBuilder_&,FRWByteAddressBuffer_const_&,FRWByteAddressBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar4;
  FRDGEventName local_68;
  undefined1 local_50 [32];
  FRWByteAddressBuffer local_30;
  uint local_10;
  
  FRWByteAddressBuffer::FRWByteAddressBuffer((FRWByteAddressBuffer *)local_50,param_3);
  FRWByteAddressBuffer::FRWByteAddressBuffer(&local_30,param_2);
  local_10 = param_4;
  pFVar3 = FRDGEventName::FRDGEventName(&local_68,1,L"ResizeResourceIfNeeded-Copy");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d0,8);
  pTVar4 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWByteAddressBuffer>_::__l2::<lambda_1>_>
                     (this,pFVar3,NeverCull,(<lambda_1> *)local_50);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar2 = (param_1->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar2 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar4;
  *(int *)&pTVar4->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar4);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_30.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_30.UAV.Reference);
  }
  if ((FRHIUnorderedAccessView *)local_30._padding_ != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_30._padding_);
  }
  if ((FRHIBuffer *)local_30._padding_ != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_30._padding_);
  }
  if ((FRHIUnorderedAccessView *)local_50._24_8_ != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_50._24_8_);
  }
  if ((FRHIUnorderedAccessView *)local_50._8_8_ != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_50._8_8_);
  }
  if ((FRHIBuffer *)local_50._0_8_ != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_50._0_8_);
  }
  return;
}

// AddPass<`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_> @ 145e74960

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_AddCopyBufferPass<FRWBuffer>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBuffer>(FRDGBuilder_&,FRWBuffer_const_&,FRWBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar3;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_1,param_2);
  FlushAccessModeQueue(this);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1f0,8);
  pTVar3 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWBuffer>_::__l2::<lambda_1>_>
                     (this_00,param_1,param_2 | NeverCull,param_3);
  piVar1 = &(this->Passes).Array.ArrayMax;
  iVar2 = (this->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar2 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (this->Passes).Array.ArrayNum + -1;
  SetupEmptyPass(this,(FRDGPass *)pTVar3);
  return (FRDGPass *)pTVar3;
}

// AddPass<`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_> @ 145e74a40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_AddCopyBufferPass<FRWBufferStructured>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBufferStructured>(FRDGBuilder_&,FRWBufferStructured_const_&,FRWBufferStructured_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar3;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_1,param_2);
  FlushAccessModeQueue(this);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d0,8);
  pTVar3 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWBufferStructured>_::__l2::<lambda_1>_>
                     (this_00,param_1,param_2 | NeverCull,param_3);
  piVar1 = &(this->Passes).Array.ArrayMax;
  iVar2 = (this->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar2 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (this->Passes).Array.ArrayNum + -1;
  SetupEmptyPass(this,(FRDGPass *)pTVar3);
  return (FRDGPass *)pTVar3;
}

// AddPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_> @ 145e74b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_AddCopyBufferPass<FRWByteAddressBuffer>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWByteAddressBuffer>(FRDGBuilder_&,FRWByteAddressBuffer_const_&,FRWByteAddressBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar3;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_1,param_2);
  FlushAccessModeQueue(this);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1d0,8);
  pTVar3 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWByteAddressBuffer>_::__l2::<lambda_1>_>
                     (this_00,param_1,param_2 | NeverCull,param_3);
  piVar1 = &(this->Passes).Array.ArrayMax;
  iVar2 = (this->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar2 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (this->Passes).Array.ArrayNum + -1;
  SetupEmptyPass(this,(FRDGPass *)pTVar3);
  return (FRDGPass *)pTVar3;
}

// AddPass<`FComputeShaderUtils::AddPass<FRDGMemcpyCS>'::__l2::<lambda_1>_> @ 145e74c00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FRDGMemcpyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGMemcpyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGMemcpyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGMemcpyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FCropDistortionDisplacementMapCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPass<`FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>'::__l2::<lambda_1>_> @ 145e74d90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGMemsetBufferCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGMemsetBufferCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGByteBufferShader__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FBrownConradyUDDistortionCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPass<`FComputeShaderUtils::AddPass<FRDGScatterCopyCS>'::__l2::<lambda_1>_> @ 145e74f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FRDGScatterCopyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  FRDGPass *pFVar1;
  
  pFVar1 = AddPassInternal<void,_FComputeShaderUtils::AddPass<FRDGScatterCopyCS>_::__l2::<lambda_1>_>
                     (this,param_1,param_2,param_3,param_4,param_5);
  return pFVar1;
}

// AddPass<`FComputeShaderUtils::AddPass<FRDGScatterCopyCS>'::__l2::<lambda_1>_> @ 145e74f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FRDGScatterCopyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGScatterCopyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGScatterCopyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGScatterCopyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FNiagaraNaniteGPUSceneCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<FRDGScatterCopyCS::FParameters,`ScatterCopyResource'::__l2::<lambda_1>_> @ 145e757f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FRDGScatterCopyCS::FParameters,_ScatterCopyResource_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FRHIUniformBufferLayout *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  ERDGPassFlags EVar9;
  int iVar10;
  wchar_t *pwVar11;
  FRDGPass *pFVar12;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar11 = FRDGEventName::GetTCHAR(param_1);
  EVar9 = OverridePassFlags(this,pwVar11,param_4);
  pFVar12 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1e0,0x10);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FRDGPass *)(*pcVar2)();
      return pFVar12;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar12,param_1,&local_38,EVar9,Async);
  pFVar12->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRDGScatterCopyCS::FParameters,`ScatterCopyResource'::`2'::<lambda_1>_>::
        _vftable_;
  pFVar12[1]._padding_ = (longlong)param_5->PassParameters;
  uVar4 = *(undefined4 *)&(param_5->ComputeShader).field_0x8;
  uVar5 = *(undefined4 *)&(param_5->ComputeShader).field_0xc;
  pFVar12[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)&param_5->ComputeShader;
  pFVar12[1].FullPathIfDebug.Data.ArrayNum = uVar4;
  pFVar12[1].FullPathIfDebug.Data.ArrayMax = uVar5;
  pFVar12[1].Name.EventFormat = (wchar_t *)param_5->Config;
  pFVar12[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)&param_5->GetNumScatters;
  uVar6 = (param_5->GetNumScatters).field_0x2a;
  uVar7 = (param_5->GetNumScatters).field_0x2b;
  uVar4 = *(undefined4 *)&(param_5->GetNumScatters).field_0x2c;
  pFVar12[1].Flags = *(undefined2 *)&(param_5->GetNumScatters).field_0x28;
  pFVar12[1].TaskMode = uVar6;
  pFVar12[1].Pipeline = uVar7;
  pFVar12[1].Handle = (TRDGHandle<FRDGPass,unsigned_int>)uVar4;
  *(undefined8 *)&(param_5->GetNumScatters).field_0x28 = 0;
  pFVar3 = *(FRHIUniformBufferLayout **)&(param_5->GetNumScatters).field_0x18;
  pFVar12[1].ParameterStruct.Contents = *(uchar **)&(param_5->GetNumScatters).field_0x10;
  pFVar12[1].ParameterStruct.Layout.Reference = pFVar3;
  pFVar12[1].ParameterStruct.Metadata =
       *(FShaderParametersMetadata **)&(param_5->GetNumScatters).field_0x20;
  if (pFVar12[1].Name.FormattedEventName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    *(undefined8 *)&param_5->GetNumScatters = 0;
  }
  *(FParameters **)&pFVar12[1].Workload = param_3;
  ClobberPassOutputs(this,pFVar12);
  iVar10 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar10 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar10] = pFVar12;
  (pFVar12->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar12);
  return pFVar12;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FRDGMemcpyCS>'::__l2::<lambda_1>_> @ 145e759c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPassInternal<void,_FComputeShaderUtils::AddPass<FRDGMemcpyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGMemcpyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGMemcpyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGMemcpyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FCropDistortionDisplacementMapCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>'::__l2::<lambda_1>_> @ 145e75b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGMemsetBufferCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGMemsetBufferCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGByteBufferShader__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FBrownConradyUDDistortionCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FRDGScatterCopyCS>'::__l2::<lambda_1>_> @ 145e75ce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FRDGScatterCopyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FShaderMapBase *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1e0,0x10);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGScatterCopyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGScatterCopyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGScatterCopyCS____QEAV__TFunction___A6A_AU__TIntVector3_H_Math_UE__XZ___Z___6B_
  ;
  pFVar9[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_5->Parameters;
  pFVar3 = (param_5->ComputeShader).ShaderMap;
  *(FSphericalDistortionCS **)&pFVar9[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar9[1].Name.EventFormat = (wchar_t *)pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  *(FShaderMapBase **)&pFVar9[1].Flags = param_5[1].ComputeShader.ShaderMap;
  param_5[1].ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar4 = (FRHIUniformBufferLayout *)param_5[1].Parameters;
  pFVar9[1].ParameterStruct.Contents = (uchar *)param_5[1].ParametersMetadata;
  pFVar9[1].ParameterStruct.Layout.Reference = pFVar4;
  pFVar9[1].ParameterStruct.Metadata =
       (FShaderParametersMetadata *)param_5[1].ComputeShader.ShaderContent;
  if (pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    *(undefined8 *)&(param_5->GroupCount).field0_0x0 = 0;
  }
  *(void **)&pFVar9[1].Workload = param_3;
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FRDGScatterCopyCS>'::__l2::<lambda_1>_> @ 145e75eb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FRDGScatterCopyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFRDGScatterCopyCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFRDGScatterCopyCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FRDGScatterCopyCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FNiagaraNaniteGPUSceneCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// BinarySearch<TArray<FSHAHash,TSizedDefaultAllocator<32>_>,FSHAHash,TLess<void>_> @ 145e766e0

int __cdecl
Algo::BinarySearch<TArray<FSHAHash,TSizedDefaultAllocator<32>_>,FSHAHash,TLess<void>_>
          (TArray<FSHAHash,TSizedDefaultAllocator<32>_> *param_1,FSHAHash *param_2,
          TLess<void> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FIdentityFunctor local_res8;
  
  iVar4 = param_1->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  iVar2 = AlgoImpl::LowerBoundInternal<FSHAHash_const_,int,FSHAHash,FIdentityFunctor,TLess<void>_>
                    ((FSHAHash *)pFVar1,iVar4,param_2,local_res8,param_3);
  if (iVar2 < iVar4) {
    iVar3 = memcmp(param_2,pFVar1 + (longlong)iVar2 * 0x14,0x14);
    iVar4 = -1;
    if (-1 < iVar3) {
      iVar4 = iVar2;
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

// BindForLegacyShaderParameters<FByteBufferShader::FParameters> @ 145e76770

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
BindForLegacyShaderParameters<FByteBufferShader::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FByteBufferShader::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FMemcpyCS::FParameters> @ 145e767d0

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
BindForLegacyShaderParameters<FMemcpyCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FMemcpyCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FRDGByteBufferShader::FParameters> @ 145e76830

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
BindForLegacyShaderParameters<FRDGByteBufferShader::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FRDGByteBufferShader::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FRDGMemcpyCS::FParameters> @ 145e76890

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
BindForLegacyShaderParameters<FRDGMemcpyCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FRDGMemcpyCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FRDGScatterCopyCS::FParameters> @ 145e768f0

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
BindForLegacyShaderParameters<FRDGScatterCopyCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FScatterCopyCS::FParameters> @ 145e76950

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
BindForLegacyShaderParameters<FScatterCopyCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// ClearUnusedGraphResources<FRDGMemcpyCS> @ 145e769b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FRDGMemcpyCS>
          (TShaderRefBase<FRDGMemcpyCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FRDGMemsetBufferCS> @ 145e76a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FRDGMemsetBufferCS>
          (TShaderRefBase<FRDGMemsetBufferCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FRDGScatterCopyCS> @ 145e76ab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FRDGScatterCopyCS>
          (TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// CompareItems<FRHIUniformBufferResource,int> @ 145e76b30

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

bool __cdecl
CompareItems<FRHIUniformBufferResource,int>
          (FRHIUniformBufferResource *param_1,FRHIUniformBufferResource *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(ushort *)(lVar1 + (longlong)param_2) != param_2->MemberOffset) ||
         (*(EUniformBufferBaseType *)(lVar1 + 2 + (longlong)param_2) != param_2->MemberType)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ComputeShaderTableHash<FRHIRayTracingShader> @ 145e76b70

ulong64 __cdecl
ComputeShaderTableHash<FRHIRayTracingShader>
          (TArrayView<FRHIRayTracingShader_*,int> *param_1,ulong64 param_2)

{
  FRHIRayTracingShader **ppFVar1;
  longlong lVar2;
  FRHIRayTracingShader **ppFVar3;
  
  ppFVar3 = param_1->DataPtr;
  ppFVar1 = ppFVar3 + param_1->ArrayNum;
  for (; ppFVar3 != ppFVar1; ppFVar3 = ppFVar3 + 1) {
    lVar2 = 0;
    if (*ppFVar3 != (FRHIRayTracingShader *)0x0) {
      lVar2 = (*ppFVar3)->_padding_;
    }
    param_2 = param_2 ^ lVar2 + param_2 * 0x40 + (param_2 >> 2) + 0x9e3779b9;
  }
  return param_2;
}

// ConstructItems<FShaderCodeResource,FShaderCodeResource,int> @ 145e76be0

void __cdecl
ConstructItems<FShaderCodeResource,FShaderCodeResource,int>
          (void *param_1,FShaderCodeResource *param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ForElementType<FSharedBuffer> FVar3;
  longlong lVar4;
  int *this;
  FCompressedBuffer *pFVar5;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x10);
    pFVar5 = &param_2->Symbols;
    do {
      FVar3 = *(ForElementType<FSharedBuffer> *)
               ((longlong)this + (longlong)param_2 + (-0x10 - (longlong)param_1));
      if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
        LOCK();
        puVar1 = (ulonglong *)((longlong)FVar3 + 0x18);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 0) {
          LOCK();
          *(longlong *)((longlong)FVar3 + 0x18) = *(longlong *)((longlong)FVar3 + 0x18) + 0x40000000
          ;
          UNLOCK();
        }
      }
      *(ForElementType<FSharedBuffer> *)(this + -4) = FVar3;
      lVar4 = *(longlong *)((longlong)(pFVar5 + -1) + 0x10);
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (ulonglong *)(lVar4 + 0x18);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 0) {
          LOCK();
          *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 0x40000000;
          UNLOCK();
        }
      }
      *(longlong *)(this + -2) = lVar4;
      FCompositeBuffer::FCompositeBuffer((FCompositeBuffer *)this,&pFVar5->CompressedData);
      pFVar5 = (FCompressedBuffer *)((longlong)(pFVar5 + 1) + 0x10);
      this = this + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FPipelineCachePSOHeader,int> @ 145e76d80

void __cdecl DefaultConstructItems<FPipelineCachePSOHeader,int>(void *param_1,int param_2)

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
      lVar1 = lVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSortedShaderEntry,int> @ 145e76dd0

void __cdecl DefaultConstructItems<FSortedShaderEntry,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FShaderCodeResource,int> @ 145e76e00

void __cdecl DefaultConstructItems<FShaderCodeResource,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::ShaderPipeline::CompileJob,int> @ 145e76e40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl DestructItems<UE::ShaderPipeline::CompileJob,int>(CompileJob *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FPipelineCacheFileFormatPSO::~FPipelineCacheFileFormatPSO(&param_1->PSO);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRDGScatterUploadBuilder::FPass,int> @ 145e76e80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl DestructItems<FRDGScatterUploadBuilder::FPass,int>(FPass *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Function).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPipelineCachePSOHeader,int> @ 145e76ed0

void __cdecl
DestructItems<FPipelineCachePSOHeader,int>(FPipelineCachePSOHeader *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Shaders).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FShaderParameterParser::ApplyBindlessModifications'::__l5::FShaderCodeModifications,int> @ 145e76f30

void __cdecl
DestructItems<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,int>
          (FShaderCodeModifications *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Replace;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStableShaderKeyAndValue,int> @ 145e76f70

void __cdecl
DestructItems<FStableShaderKeyAndValue,int>(FStableShaderKeyAndValue *param_1,int param_2)

{
  ForElementType<FName> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ClassNameAndObjectPath).ObjectClassAndPath.AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FName>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x21;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCompositeBuffer,int> @ 145e76fc0

void __cdecl DestructItems<FCompositeBuffer,int>(FCompositeBuffer *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FCompositeBuffer::~FCompositeBuffer(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FCompressedBuffer,int> @ 145e77000

void __cdecl DestructItems<FCompressedBuffer,int>(FCompressedBuffer *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FCompositeBuffer::~FCompositeBuffer(&param_1->CompressedData);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FShaderCodeResource,int> @ 145e77040

void __cdecl DestructItems<FShaderCodeResource,int>(FShaderCodeResource *param_1,int param_2)

{
  FSharedBuffer *this;
  
  if (param_2 != 0) {
    this = &param_1->Code;
    do {
      FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)(this + 1));
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&this->Owner);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(this + -1));
      this = this + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FShaderMapResource::BeginCreateAllShaders'::__l2::TSTR_InitCommand616>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145e79620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FShaderMapResource::BeginCreateAllShaders_::__l2::TSTR_InitCommand616>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FShaderMapResource::BeginCreateAllShaders'::__l2::TSTR_InitCommand616>
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
      if (bVar8) goto LAB_145e79771;
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
    goto LAB_145e79965;
  }
LAB_145e79771:
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
LAB_145e7984f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145e7984f;
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
LAB_145e79965:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::TSTR_LinkGlobalBoundShaderStateResource35>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145e799a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource_::__l7::TSTR_LinkGlobalBoundShaderStateResource35>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::TSTR_LinkGlobalBoundShaderStateResource35>
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
      if (bVar8) goto LAB_145e79af1;
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
    goto LAB_145e79ce5;
  }
LAB_145e79af1:
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
LAB_145e79bcf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145e79bcf;
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
LAB_145e79ce5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExtractShaderParameterResource<FShaderParameterBindings::FBindlessResourceParameter> @ 145e79d20

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRHIShaderParameterResource * __cdecl
ExtractShaderParameterResource<FShaderParameterBindings::FBindlessResourceParameter>
          (FRHIShaderParameterResource *__return_storage_ptr__,FShaderParameterReader *param_1,
          FBindlessResourceParameter *param_2)

{
  ushort uVar1;
  uchar *puVar2;
  FRHIResource *pFVar3;
  FRDGResource *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShaderParameterResource *pFVar7;
  
  switch(param_2->BaseType) {
  case EUniformBufferBaseType_NumBits:
    puVar2 = param_1->Data;
    uVar1 = param_2->ByteOffset;
    __return_storage_ptr__->Type = Texture;
    pFVar3 = *(FRHIResource **)(puVar2 + uVar1);
    __return_storage_ptr__->Index = param_2->GlobalConstantOffset;
    __return_storage_ptr__->Resource = pFVar3;
    return __return_storage_ptr__;
  case UBMT_SRV:
    puVar2 = param_1->Data;
    uVar1 = param_2->ByteOffset;
    __return_storage_ptr__->Type = ResourceView;
    pFVar3 = *(FRHIResource **)(puVar2 + uVar1);
    __return_storage_ptr__->Index = param_2->GlobalConstantOffset;
    __return_storage_ptr__->Resource = pFVar3;
    return __return_storage_ptr__;
  case UBMT_UAV:
    puVar2 = param_1->Data;
    uVar1 = param_2->ByteOffset;
    __return_storage_ptr__->Type = UnorderedAccessView;
    pFVar3 = *(FRHIResource **)(puVar2 + uVar1);
    __return_storage_ptr__->Index = param_2->GlobalConstantOffset;
    __return_storage_ptr__->Resource = pFVar3;
    return __return_storage_ptr__;
  case UBMT_SAMPLER:
    puVar2 = param_1->Data;
    uVar1 = param_2->ByteOffset;
    __return_storage_ptr__->Type = Sampler;
    pFVar3 = *(FRHIResource **)(puVar2 + uVar1);
    __return_storage_ptr__->Index = param_2->GlobalConstantOffset;
    __return_storage_ptr__->Resource = pFVar3;
    return __return_storage_ptr__;
  case UBMT_RDG_TEXTURE:
    pFVar4 = *(FRDGResource **)(param_1->Data + param_2->ByteOffset);
    FRDGResource::MarkResourceAsUsed(pFVar4);
    uVar1 = param_2->GlobalConstantOffset;
    FRDGResource::ValidateRHIAccess(pFVar4);
    __return_storage_ptr__->Resource = pFVar4->ResourceRHI;
    __return_storage_ptr__->Index = uVar1;
    __return_storage_ptr__->Type = Texture;
    return __return_storage_ptr__;
  case UBMT_RDG_TEXTURE_SRV:
  case UBMT_RDG_TEXTURE_NON_PIXEL_SRV:
  case UBMT_RDG_BUFFER_SRV:
    pFVar4 = *(FRDGResource **)(param_1->Data + param_2->ByteOffset);
    (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
    uVar1 = param_2->GlobalConstantOffset;
    FRDGResource::ValidateRHIAccess(pFVar4);
    __return_storage_ptr__->Resource = pFVar4->ResourceRHI;
    __return_storage_ptr__->Index = uVar1;
    __return_storage_ptr__->Type = ResourceView;
    return __return_storage_ptr__;
  case UBMT_RDG_TEXTURE_UAV:
  case UBMT_RDG_BUFFER_UAV:
    pFVar4 = *(FRDGResource **)(param_1->Data + param_2->ByteOffset);
    (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
    uVar1 = param_2->GlobalConstantOffset;
    FRDGResource::ValidateRHIAccess(pFVar4);
    __return_storage_ptr__->Resource = pFVar4->ResourceRHI;
    __return_storage_ptr__->Index = uVar1;
    __return_storage_ptr__->Type = UnorderedAccessView;
    return __return_storage_ptr__;
  }
  bVar6 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                     ,0x29f,L"Unhandled resource type?");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FRHIShaderParameterResource *)(*pcVar5)();
    return pFVar7;
  }
  __return_storage_ptr__->Resource = (FRHIResource *)0x0;
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Type = Texture;
  *(undefined5 *)&__return_storage_ptr__->field_0xb = 0;
  return __return_storage_ptr__;
}

// ExtractShaderParameterResource<FShaderParameterBindings::FResourceParameter> @ 145e79f60

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRHIShaderParameterResource * __cdecl
ExtractShaderParameterResource<FShaderParameterBindings::FResourceParameter>
          (FRHIShaderParameterResource *__return_storage_ptr__,FShaderParameterReader *param_1,
          FResourceParameter *param_2)

{
  byte bVar1;
  ushort uVar2;
  uchar *puVar3;
  FRHIResource *pFVar4;
  FRDGResource *pFVar5;
  code *pcVar6;
  bool bVar7;
  FRHIShaderParameterResource *pFVar8;
  
  switch(param_2->BaseType) {
  case EUniformBufferBaseType_NumBits:
    puVar3 = param_1->Data;
    uVar2 = param_2->ByteOffset;
    __return_storage_ptr__->Type = Texture;
    pFVar4 = *(FRHIResource **)(puVar3 + uVar2);
    __return_storage_ptr__->Index = (ushort)param_2->BaseIndex;
    __return_storage_ptr__->Resource = pFVar4;
    return __return_storage_ptr__;
  case UBMT_SRV:
    puVar3 = param_1->Data;
    uVar2 = param_2->ByteOffset;
    __return_storage_ptr__->Type = ResourceView;
    pFVar4 = *(FRHIResource **)(puVar3 + uVar2);
    __return_storage_ptr__->Index = (ushort)param_2->BaseIndex;
    __return_storage_ptr__->Resource = pFVar4;
    return __return_storage_ptr__;
  case UBMT_UAV:
    puVar3 = param_1->Data;
    uVar2 = param_2->ByteOffset;
    __return_storage_ptr__->Type = UnorderedAccessView;
    pFVar4 = *(FRHIResource **)(puVar3 + uVar2);
    __return_storage_ptr__->Index = (ushort)param_2->BaseIndex;
    __return_storage_ptr__->Resource = pFVar4;
    return __return_storage_ptr__;
  case UBMT_SAMPLER:
    puVar3 = param_1->Data;
    uVar2 = param_2->ByteOffset;
    __return_storage_ptr__->Type = Sampler;
    pFVar4 = *(FRHIResource **)(puVar3 + uVar2);
    __return_storage_ptr__->Index = (ushort)param_2->BaseIndex;
    __return_storage_ptr__->Resource = pFVar4;
    return __return_storage_ptr__;
  case UBMT_RDG_TEXTURE:
    pFVar5 = *(FRDGResource **)(param_1->Data + param_2->ByteOffset);
    FRDGResource::MarkResourceAsUsed(pFVar5);
    bVar1 = param_2->BaseIndex;
    FRDGResource::ValidateRHIAccess(pFVar5);
    __return_storage_ptr__->Resource = pFVar5->ResourceRHI;
    __return_storage_ptr__->Index = (ushort)bVar1;
    __return_storage_ptr__->Type = Texture;
    return __return_storage_ptr__;
  case UBMT_RDG_TEXTURE_SRV:
  case UBMT_RDG_TEXTURE_NON_PIXEL_SRV:
  case UBMT_RDG_BUFFER_SRV:
    pFVar5 = *(FRDGResource **)(param_1->Data + param_2->ByteOffset);
    (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
    bVar1 = param_2->BaseIndex;
    FRDGResource::ValidateRHIAccess(pFVar5);
    __return_storage_ptr__->Resource = pFVar5->ResourceRHI;
    __return_storage_ptr__->Index = (ushort)bVar1;
    __return_storage_ptr__->Type = ResourceView;
    return __return_storage_ptr__;
  case UBMT_RDG_TEXTURE_UAV:
  case UBMT_RDG_BUFFER_UAV:
    pFVar5 = *(FRDGResource **)(param_1->Data + param_2->ByteOffset);
    (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
    bVar1 = param_2->BaseIndex;
    FRDGResource::ValidateRHIAccess(pFVar5);
    __return_storage_ptr__->Resource = pFVar5->ResourceRHI;
    __return_storage_ptr__->Index = (ushort)bVar1;
    __return_storage_ptr__->Type = UnorderedAccessView;
    return __return_storage_ptr__;
  }
  bVar7 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                     ,0x29f,L"Unhandled resource type?");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FRHIShaderParameterResource *)(*pcVar6)();
    return pFVar8;
  }
  __return_storage_ptr__->Resource = (FRHIResource *)0x0;
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Type = Texture;
  *(undefined5 *)&__return_storage_ptr__->field_0xb = 0;
  return __return_storage_ptr__;
}

// GetAs<FRDGBufferSRV> @ 145e7a9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferSRV * __cdecl GetAs<FRDGBufferSRV>(FRDGView *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGBufferSRV *pFVar3;
  
  if (param_1->Type != BufferSRV) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ViewType::StaticType == View->Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x5cd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBufferSRV *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRDGBufferSRV *)param_1;
}

// HeapSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,`FShaderParametersMetadata::InitializeLayout'::__l2::<lambda_2>_>_> @ 145e7ade0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_2>_>_>
          (FRHIUniformBufferResourceInitializer *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_private:_void___cdecl_FShaderParametersMetadata::InitializeLayout(FRHIUniformBufferLayoutInitializer_*)_::_2_::<lambda_2>_>
          param_4)

{
  FRHIUniformBufferResourceInitializer *pFVar1;
  FRHIUniformBufferResourceInitializer FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
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
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_145e7aec6:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            FVar2 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar2;
            if (1 < iVar6) {
              do {
                iVar9 = iVar8 * 2;
                iVar5 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  if (param_1[(longlong)iVar9 + 2].MemberOffset < param_1[iVar5].MemberOffset) {
                    iVar5 = iVar9;
                  }
                  iVar5 = iVar5 + 1;
                }
                pFVar1 = param_1 + iVar8;
                if (param_1[iVar5].MemberOffset <= pFVar1->MemberOffset) break;
                FVar2 = *pFVar1;
                *pFVar1 = param_1[iVar5];
                param_1[iVar5] = FVar2;
                iVar8 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2].MemberOffset < param_1[iVar7].MemberOffset) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1 + iVar5;
    if (param_1[iVar7].MemberOffset <= pFVar1->MemberOffset) goto LAB_145e7aec6;
    FVar2 = *pFVar1;
    *pFVar1 = param_1[iVar7];
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = FVar2;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,`FShaderParametersMetadata::InitializeLayout'::__l2::<lambda_3>_>_> @ 145e7af90

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_3>_>_>
          (FRHIUniformBufferResourceInitializer *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_private:_void___cdecl_FShaderParametersMetadata::InitializeLayout(FRHIUniformBufferLayoutInitializer_*)_::_2_::<lambda_3>_>
          param_4)

{
  FRHIUniformBufferResourceInitializer *pFVar1;
  FRHIUniformBufferResourceInitializer *pFVar2;
  FRHIUniformBufferResourceInitializer FVar3;
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
LAB_145e7b0b7:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            FVar3 = *param_1;
            iVar11 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar11 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = param_1[(longlong)iVar9 + 2].MemberType <
                          param_1[(longlong)iVar9 + 1].MemberType;
                  if (param_1[(longlong)iVar9 + 2].MemberType ==
                      param_1[(longlong)iVar9 + 1].MemberType) {
                    bVar5 = param_1[(longlong)iVar9 + 2].MemberOffset <
                            param_1[(longlong)iVar9 + 1].MemberOffset;
                  }
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar11;
                pFVar2 = param_1 + iVar6;
                bVar5 = pFVar1->MemberType < param_1[iVar6].MemberType;
                if (pFVar1->MemberType == param_1[iVar6].MemberType) {
                  bVar5 = pFVar1->MemberOffset < pFVar2->MemberOffset;
                }
                if (!bVar5) break;
                FVar3 = *pFVar1;
                *pFVar1 = *pFVar2;
                *pFVar2 = FVar3;
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
      bVar5 = param_1[(longlong)iVar7 + 2].MemberType < param_1[(longlong)iVar7 + 1].MemberType;
      if (param_1[(longlong)iVar7 + 2].MemberType == param_1[(longlong)iVar7 + 1].MemberType) {
        bVar5 = param_1[(longlong)iVar7 + 2].MemberOffset <
                param_1[(longlong)iVar7 + 1].MemberOffset;
      }
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar6;
    pFVar2 = param_1 + iVar8;
    bVar5 = pFVar1->MemberType < param_1[iVar8].MemberType;
    if (pFVar1->MemberType == param_1[iVar8].MemberType) {
      bVar5 = pFVar1->MemberOffset < pFVar2->MemberOffset;
    }
    if (!bVar5) goto LAB_145e7b0b7;
    FVar3 = *pFVar1;
    *pFVar1 = *pFVar2;
    iVar7 = iVar8 * 2 + 1;
    *pFVar2 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<`FShaderParameterParser::ApplyBindlessModifications'::__l5::FShaderCodeModifications,int,FIdentityFunctor,TDereferenceWrapper<`FShaderParameterParser::ApplyBindlessModifications'::__l5::FShaderCodeModifications,`FShaderParameterParser::ApplyBindlessModifications'::__l25::<lambda_1>_>_> @ 145e7b1c0

void __cdecl
AlgoImpl::
HeapSortInternal<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,int,FIdentityFunctor,TDereferenceWrapper<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,_FShaderParameterParser::ApplyBindlessModifications_::__l25::<lambda_1>_>_>
          (FShaderCodeModifications *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_void___cdecl_FShaderParameterParser::ApplyBindlessModifications(FString_&)_::_5_::FShaderCodeModifications,_protected:_void___cdecl_FShaderParameterParser::ApplyBindlessModifications(FString_&)_::_25_::<lambda_1>_>
          param_4)

{
  FShaderCodeModifications *pFVar1;
  FShaderCodeModifications *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FShaderCodeModifications *pFVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  
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
LAB_145e7b2cd:
      if (iVar17 == 0) {
        iVar13 = param_2 + -1;
        lVar18 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar15 = param_1 + lVar18;
          do {
            iVar16 = pFVar15->CharOffsetEnd;
            pFVar4 = (pFVar15->Replace).Data.AllocatorInstance.Data;
            iVar14 = (param_1->Replace).Data.ArrayNum;
            iVar6 = (param_1->Replace).Data.ArrayMax;
            iVar12 = param_1->CharOffsetStart;
            iVar17 = param_1->CharOffsetEnd;
            pFVar5 = (param_1->Replace).Data.AllocatorInstance.Data;
            param_1->CharOffsetStart = pFVar15->CharOffsetStart;
            param_1->CharOffsetEnd = iVar16;
            (param_1->Replace).Data.AllocatorInstance.Data = pFVar4;
            iVar16 = (pFVar15->Replace).Data.ArrayMax;
            (param_1->Replace).Data.ArrayNum = (pFVar15->Replace).Data.ArrayNum;
            (param_1->Replace).Data.ArrayMax = iVar16;
            pFVar15->CharOffsetStart = iVar12;
            pFVar15->CharOffsetEnd = iVar17;
            (pFVar15->Replace).Data.AllocatorInstance.Data = pFVar5;
            (pFVar15->Replace).Data.ArrayNum = iVar14;
            (pFVar15->Replace).Data.ArrayMax = iVar6;
            iVar16 = 0;
            if (1 < iVar13) {
              do {
                iVar17 = iVar16 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar13) {
                  if (param_1[(longlong)iVar17 + 2].CharOffsetStart <
                      param_1[iVar12].CharOffsetStart) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar1 = param_1 + iVar12;
                if (pFVar1->CharOffsetStart <= param_1[iVar16].CharOffsetStart) break;
                iVar17 = pFVar1->CharOffsetEnd;
                pFVar4 = (pFVar1->Replace).Data.AllocatorInstance.Data;
                iVar7 = param_1[iVar16].Replace.Data.ArrayNum;
                iVar8 = param_1[iVar16].Replace.Data.ArrayMax;
                pFVar2 = param_1 + iVar16;
                iVar14 = pFVar2->CharOffsetStart;
                iVar6 = pFVar2->CharOffsetEnd;
                pFVar5 = (pFVar2->Replace).Data.AllocatorInstance.Data;
                pFVar2 = param_1 + iVar16;
                pFVar2->CharOffsetStart = pFVar1->CharOffsetStart;
                pFVar2->CharOffsetEnd = iVar17;
                (pFVar2->Replace).Data.AllocatorInstance.Data = pFVar4;
                iVar17 = (pFVar1->Replace).Data.ArrayMax;
                param_1[iVar16].Replace.Data.ArrayNum = (pFVar1->Replace).Data.ArrayNum;
                param_1[iVar16].Replace.Data.ArrayMax = iVar17;
                pFVar1->CharOffsetStart = iVar14;
                pFVar1->CharOffsetEnd = iVar6;
                (pFVar1->Replace).Data.AllocatorInstance.Data = pFVar5;
                (pFVar1->Replace).Data.ArrayNum = iVar7;
                (pFVar1->Replace).Data.ArrayMax = iVar8;
                iVar16 = iVar12;
              } while (iVar12 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar18 = lVar18 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar18);
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
      if (param_1[(longlong)iVar13 + 2].CharOffsetStart < param_1[iVar14].CharOffsetStart) {
        iVar14 = iVar13;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar15 = param_1 + iVar14;
    if (pFVar15->CharOffsetStart <= param_1[iVar12].CharOffsetStart) goto LAB_145e7b2cd;
    iVar6 = pFVar15->CharOffsetEnd;
    pFVar4 = (pFVar15->Replace).Data.AllocatorInstance.Data;
    iVar13 = iVar14 * 2 + 1;
    iVar9 = param_1[iVar12].Replace.Data.ArrayNum;
    iVar10 = param_1[iVar12].Replace.Data.ArrayMax;
    pFVar1 = param_1 + iVar12;
    iVar7 = pFVar1->CharOffsetStart;
    iVar8 = pFVar1->CharOffsetEnd;
    pFVar5 = (pFVar1->Replace).Data.AllocatorInstance.Data;
    pFVar1 = param_1 + iVar12;
    pFVar1->CharOffsetStart = pFVar15->CharOffsetStart;
    pFVar1->CharOffsetEnd = iVar6;
    (pFVar1->Replace).Data.AllocatorInstance.Data = pFVar4;
    iVar6 = (pFVar15->Replace).Data.ArrayMax;
    param_1[iVar12].Replace.Data.ArrayNum = (pFVar15->Replace).Data.ArrayNum;
    param_1[iVar12].Replace.Data.ArrayMax = iVar6;
    pFVar15->CharOffsetStart = iVar7;
    pFVar15->CharOffsetEnd = iVar8;
    (pFVar15->Replace).Data.AllocatorInstance.Data = pFVar5;
    (pFVar15->Replace).Data.ArrayNum = iVar9;
    (pFVar15->Replace).Data.ArrayMax = iVar10;
    iVar12 = iVar14;
  } while( true );
}

// HeapSortInternal<FSortedShaderEntry,int,FIdentityFunctor,TDereferenceWrapper<FSortedShaderEntry,TLess<void>_>_> @ 145e7b3e0

void __cdecl
AlgoImpl::
HeapSortInternal<FSortedShaderEntry,int,FIdentityFunctor,TDereferenceWrapper<FSortedShaderEntry,TLess<void>_>_>
          (FSortedShaderEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSortedShaderEntry,TLess<void>_> param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulong64 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FSortedShaderEntry *pFVar15;
  int iVar16;
  FSortedShaderEntry *pFVar17;
  FSortedShaderEntry *pFVar18;
  longlong lVar19;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar16 = iVar12;
  iVar14 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_145e7b518:
      if (iVar14 == 0) {
        iVar12 = param_2 + -1;
        lVar19 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar15 = param_1 + lVar19;
          do {
            iVar16 = pFVar15->PermutationId;
            iVar11 = pFVar15->Index;
            uVar6 = (param_1->TypeName).Hash;
            iVar14 = param_1->PermutationId;
            iVar13 = param_1->Index;
            (param_1->TypeName).Hash = (pFVar15->TypeName).Hash;
            param_1->PermutationId = iVar16;
            param_1->Index = iVar11;
            (pFVar15->TypeName).Hash = uVar6;
            pFVar15->PermutationId = iVar14;
            pFVar15->Index = iVar13;
            iVar16 = 0;
            if (1 < iVar12) {
              do {
                iVar14 = iVar16 * 2;
                iVar11 = iVar14 + 1;
                if (iVar14 + 2 < iVar12) {
                  lVar1 = (longlong)iVar14 + 2;
                  lVar2 = (longlong)iVar14 + 1;
                  uVar3 = param_1[lVar1].TypeName.Hash;
                  uVar4 = param_1[lVar2].TypeName.Hash;
                  bVar10 = uVar3 < uVar4;
                  if (uVar3 == uVar4) {
                    bVar10 = param_1[lVar1].PermutationId < param_1[lVar2].PermutationId;
                  }
                  if (bVar10) {
                    iVar11 = iVar14;
                  }
                  iVar11 = iVar11 + 1;
                }
                pFVar17 = param_1 + iVar11;
                pFVar18 = param_1 + iVar16;
                uVar3 = (pFVar17->TypeName).Hash;
                uVar4 = (pFVar18->TypeName).Hash;
                bVar10 = uVar4 < uVar3;
                if (uVar4 == uVar3) {
                  bVar10 = pFVar18->PermutationId < pFVar17->PermutationId;
                }
                if (!bVar10) break;
                iVar16 = pFVar17->PermutationId;
                iVar14 = pFVar17->Index;
                uVar6 = (pFVar18->TypeName).Hash;
                iVar13 = pFVar18->PermutationId;
                iVar7 = pFVar18->Index;
                (pFVar18->TypeName).Hash = (pFVar17->TypeName).Hash;
                pFVar18->PermutationId = iVar16;
                pFVar18->Index = iVar14;
                (pFVar17->TypeName).Hash = uVar6;
                pFVar17->PermutationId = iVar13;
                pFVar17->Index = iVar7;
                iVar16 = iVar11;
              } while (iVar11 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar19 = lVar19 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar11 = iVar14 + -1;
      iVar12 = iVar16 + -2;
      iVar16 = iVar12;
      iVar14 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar13 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      lVar19 = (longlong)iVar12 + 2;
      lVar1 = (longlong)iVar12 + 1;
      uVar3 = param_1[lVar19].TypeName.Hash;
      uVar4 = param_1[lVar1].TypeName.Hash;
      bVar10 = uVar3 < uVar4;
      if (uVar3 == uVar4) {
        bVar10 = param_1[lVar19].PermutationId < param_1[lVar1].PermutationId;
      }
      if (bVar10) {
        iVar13 = iVar12;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar15 = param_1 + iVar13;
    pFVar17 = param_1 + iVar11;
    uVar3 = (pFVar15->TypeName).Hash;
    uVar4 = (pFVar17->TypeName).Hash;
    bVar10 = uVar4 < uVar3;
    if (uVar4 == uVar3) {
      bVar10 = pFVar17->PermutationId < pFVar15->PermutationId;
    }
    if (!bVar10) goto LAB_145e7b518;
    iVar11 = pFVar15->PermutationId;
    iVar7 = pFVar15->Index;
    iVar12 = iVar13 * 2 + 1;
    uVar6 = (pFVar17->TypeName).Hash;
    iVar8 = pFVar17->PermutationId;
    iVar9 = pFVar17->Index;
    (pFVar17->TypeName).Hash = (pFVar15->TypeName).Hash;
    pFVar17->PermutationId = iVar11;
    pFVar17->Index = iVar7;
    (pFVar15->TypeName).Hash = uVar6;
    pFVar15->PermutationId = iVar8;
    pFVar15->Index = iVar9;
    iVar11 = iVar13;
  } while( true );
}

// IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,`FShaderParametersMetadata::InitializeLayout'::__l2::<lambda_2>_>_> @ 145e7b630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_2>_>_>
          (FRHIUniformBufferResourceInitializer *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_private:_void___cdecl_FShaderParametersMetadata::InitializeLayout(FRHIUniformBufferLayoutInitializer_*)_::_2_::<lambda_2>_>
          param_4)

{
  FRHIUniformBufferResourceInitializer *pFVar1;
  FRHIUniformBufferResourceInitializer FVar2;
  int iVar3;
  FRHIUniformBufferResourceInitializer *pFVar4;
  FRHIUniformBufferResourceInitializer **ppFVar5;
  FRHIUniformBufferResourceInitializer *pFVar6;
  FRHIUniformBufferResourceInitializer *pFVar7;
  FRHIUniformBufferResourceInitializer *pFVar8;
  FRHIUniformBufferResourceInitializer *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FRHIUniformBufferResourceInitializer *local_338;
  FRHIUniformBufferResourceInitializer *local_328;
  FRHIUniformBufferResourceInitializer *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_145e7b6e0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_145e7b710:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000145e7b719;
          goto LAB_145e7b722;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->MemberOffset < pFVar1->MemberOffset) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_145e7b7dc;
      }
LAB_145e7b7cb:
      local_338 = pFVar1;
      HeapSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_2>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_145e7b7dc:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000145e7b719:
  if (pFVar4->MemberOffset <= pFVar9->MemberOffset) goto LAB_145e7b710;
LAB_145e7b722:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->MemberOffset <= pFVar6->MemberOffset);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_145e7b710;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-4 - (longlong)pFVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffffcU)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_145e7b7dc;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_145e7b7dc;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_145e7b7cb;
  goto LAB_145e7b6e0;
}

// IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,`FShaderParametersMetadata::InitializeLayout'::__l2::<lambda_3>_>_> @ 145e7b870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_3>_>_>
          (FRHIUniformBufferResourceInitializer *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_private:_void___cdecl_FShaderParametersMetadata::InitializeLayout(FRHIUniformBufferLayoutInitializer_*)_::_2_::<lambda_3>_>
          param_4)

{
  FRHIUniformBufferResourceInitializer *pFVar1;
  FRHIUniformBufferResourceInitializer FVar2;
  int iVar3;
  FRHIUniformBufferResourceInitializer *pFVar4;
  FRHIUniformBufferResourceInitializer *pFVar5;
  FRHIUniformBufferResourceInitializer *pFVar6;
  FRHIUniformBufferResourceInitializer *pFVar7;
  FRHIUniformBufferResourceInitializer *pFVar8;
  FRHIUniformBufferResourceInitializer **ppFVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  FRHIUniformBufferResourceInitializer *local_338;
  FRHIUniformBufferResourceInitializer *local_328;
  FRHIUniformBufferResourceInitializer *local_320;
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
    ppFVar9 = &local_328;
    do {
      pFVar8 = ppFVar9[1];
      pFVar7 = *ppFVar9;
      pFVar1 = ppFVar9[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar7 >> 2) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar6 = pFVar7;
      if ((int)local_338 != 0) {
LAB_145e7b920:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar5 = pFVar8 + 1;
          FVar2 = pFVar6[iVar3 >> 1];
          pFVar6[iVar3 >> 1] = *pFVar6;
          *pFVar6 = FVar2;
          pFVar4 = pFVar6;
LAB_145e7b950:
          pFVar7 = pFVar4 + 1;
          if (pFVar7 <= pFVar8) goto code_r0x000145e7b959;
          goto LAB_145e7b971;
        }
        for (; pFVar7 = pFVar6, pFVar1 = pFVar6, pFVar6 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar5 = pFVar7, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            bVar10 = pFVar5->MemberType < pFVar1->MemberType;
            if (pFVar5->MemberType == pFVar1->MemberType) {
              bVar10 = pFVar5->MemberOffset < pFVar1->MemberOffset;
            }
            pFVar7 = pFVar1;
            if (!bVar10) {
              pFVar7 = pFVar5;
            }
          }
          FVar2 = *pFVar5;
          *pFVar5 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_145e7ba3b;
      }
LAB_145e7ba2a:
      local_338 = pFVar1;
      HeapSortInternal<FRHIUniformBufferResourceInitializer,int,FIdentityFunctor,TDereferenceWrapper<FRHIUniformBufferResourceInitializer,_FShaderParametersMetadata::InitializeLayout_::__l2::<lambda_3>_>_>
                (pFVar7,iVar3,param_3,param_4);
LAB_145e7ba3b:
      ppFVar9 = ppFVar9 + -3;
    } while (&local_328 <= ppFVar9);
  }
  return;
code_r0x000145e7b959:
  bVar10 = pFVar6->MemberType < pFVar4[1].MemberType;
  if (pFVar6->MemberType == pFVar4[1].MemberType) {
    bVar10 = pFVar6->MemberOffset < pFVar7->MemberOffset;
  }
  pFVar4 = pFVar7;
  if (!bVar10) goto LAB_145e7b950;
LAB_145e7b971:
  do {
    pFVar4 = pFVar5;
    pFVar5 = pFVar4 + -1;
    if (pFVar5 <= pFVar6) break;
    bVar10 = pFVar4[-1].MemberType < pFVar6->MemberType;
    if (pFVar4[-1].MemberType == pFVar6->MemberType) {
      bVar10 = pFVar5->MemberOffset < pFVar6->MemberOffset;
    }
  } while (!bVar10);
  if (pFVar7 <= pFVar5) {
    FVar2 = *pFVar7;
    *pFVar7 = *pFVar5;
    *pFVar5 = FVar2;
    pFVar4 = pFVar7;
    goto LAB_145e7b950;
  }
  FVar2 = *pFVar6;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar6 = *pFVar5;
  *pFVar5 = FVar2;
  if ((longlong)((longlong)pFVar5 + (-4 - (longlong)pFVar6) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar7 & 0xfffffffffffffffcU)) {
    if (pFVar7 < pFVar8) {
      *ppFVar9 = pFVar7;
      ppFVar9[1] = pFVar8;
      *(int *)(ppFVar9 + 2) = (int)local_338;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar5 <= pFVar6 + 1) goto LAB_145e7ba3b;
    pFVar8 = pFVar4 + -2;
    pFVar7 = pFVar6;
  }
  else {
    if (pFVar6 + 1 < pFVar5) {
      *ppFVar9 = pFVar6;
      ppFVar9[1] = pFVar4 + -2;
      *(int *)(ppFVar9 + 2) = (int)local_338;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar8 <= pFVar7) goto LAB_145e7ba3b;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar7 >> 2) + 1;
  pFVar6 = pFVar7;
  if ((int)local_338 == 0) goto LAB_145e7ba2a;
  goto LAB_145e7b920;
}

// IntroSortInternal<`FShaderParameterParser::ApplyBindlessModifications'::__l5::FShaderCodeModifications,int,FIdentityFunctor,TDereferenceWrapper<`FShaderParameterParser::ApplyBindlessModifications'::__l5::FShaderCodeModifications,`FShaderParameterParser::ApplyBindlessModifications'::__l25::<lambda_1>_>_> @ 145e7bae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,int,FIdentityFunctor,TDereferenceWrapper<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,_FShaderParameterParser::ApplyBindlessModifications_::__l25::<lambda_1>_>_>
          (FShaderCodeModifications *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_void___cdecl_FShaderParameterParser::ApplyBindlessModifications(FString_&)_::_5_::FShaderCodeModifications,_protected:_void___cdecl_FShaderParameterParser::ApplyBindlessModifications(FString_&)_::_25_::<lambda_1>_>
          param_4)

{
  FShaderCodeModifications *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  FShaderCodeModifications *pFVar13;
  FShaderCodeModifications *pFVar14;
  FShaderCodeModifications *pFVar15;
  FShaderCodeModifications *pFVar16;
  FShaderCodeModifications *pFVar17;
  FShaderCodeModifications *pFVar18;
  FShaderCodeModifications **ppFVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  FShaderCodeModifications *local_348;
  FShaderCodeModifications *local_338;
  FShaderCodeModifications *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar13 = ppFVar19[1];
      pFVar18 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      local_348._0_4_ = (int)pFVar1;
      iVar12 = (int)(((longlong)pFVar13 - (longlong)pFVar18) / 0x18) + 1;
      pFVar17 = pFVar18;
      if ((int)local_348 != 0) {
LAB_145e7bbb0:
        if (8 < iVar12) {
          iVar6 = pFVar17->CharOffsetEnd;
          pFVar2 = (pFVar17->Replace).Data.AllocatorInstance.Data;
          pFVar15 = pFVar13 + 1;
          iVar12 = iVar12 / 2;
          pFVar18 = pFVar17 + iVar12;
          iVar7 = pFVar18->CharOffsetStart;
          iVar8 = pFVar18->CharOffsetEnd;
          pFVar5 = (pFVar18->Replace).Data.AllocatorInstance.Data;
          iVar9 = pFVar17[iVar12].Replace.Data.ArrayNum;
          iVar10 = pFVar17[iVar12].Replace.Data.ArrayMax;
          pFVar18 = pFVar17 + iVar12;
          pFVar18->CharOffsetStart = pFVar17->CharOffsetStart;
          pFVar18->CharOffsetEnd = iVar6;
          (pFVar18->Replace).Data.AllocatorInstance.Data = pFVar2;
          iVar6 = (pFVar17->Replace).Data.ArrayMax;
          pFVar17[iVar12].Replace.Data.ArrayNum = (pFVar17->Replace).Data.ArrayNum;
          pFVar17[iVar12].Replace.Data.ArrayMax = iVar6;
          pFVar17->CharOffsetStart = iVar7;
          pFVar17->CharOffsetEnd = iVar8;
          (pFVar17->Replace).Data.AllocatorInstance.Data = pFVar5;
          (pFVar17->Replace).Data.ArrayNum = iVar9;
          (pFVar17->Replace).Data.ArrayMax = iVar10;
          pFVar18 = pFVar17;
LAB_145e7bc00:
          pFVar14 = pFVar18;
          pFVar18 = pFVar14 + 1;
          if (pFVar18 <= pFVar13) goto code_r0x000145e7bc09;
          goto LAB_145e7bc11;
        }
        for (; pFVar18 = pFVar17, pFVar1 = pFVar17, pFVar17 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar13) {
            if (pFVar18->CharOffsetStart < pFVar1->CharOffsetStart) {
              pFVar18 = pFVar1;
            }
          }
          iVar6 = pFVar18->CharOffsetStart;
          iVar7 = pFVar18->CharOffsetEnd;
          pFVar2 = (pFVar18->Replace).Data.AllocatorInstance.Data;
          iVar8 = (pFVar18->Replace).Data.ArrayNum;
          iVar9 = (pFVar18->Replace).Data.ArrayMax;
          iVar12 = pFVar13->CharOffsetEnd;
          pFVar5 = (pFVar13->Replace).Data.AllocatorInstance.Data;
          pFVar18->CharOffsetStart = pFVar13->CharOffsetStart;
          pFVar18->CharOffsetEnd = iVar12;
          (pFVar18->Replace).Data.AllocatorInstance.Data = pFVar5;
          iVar12 = (pFVar13->Replace).Data.ArrayMax;
          (pFVar18->Replace).Data.ArrayNum = (pFVar13->Replace).Data.ArrayNum;
          (pFVar18->Replace).Data.ArrayMax = iVar12;
          pFVar13->CharOffsetStart = iVar6;
          pFVar13->CharOffsetEnd = iVar7;
          (pFVar13->Replace).Data.AllocatorInstance.Data = pFVar2;
          (pFVar13->Replace).Data.ArrayNum = iVar8;
          (pFVar13->Replace).Data.ArrayMax = iVar9;
        }
        goto LAB_145e7bd31;
      }
LAB_145e7bd22:
      local_348 = pFVar1;
      HeapSortInternal<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,int,FIdentityFunctor,TDereferenceWrapper<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,_FShaderParameterParser::ApplyBindlessModifications_::__l25::<lambda_1>_>_>
                (pFVar18,iVar12,param_3,param_4);
LAB_145e7bd31:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
code_r0x000145e7bc09:
  if (pFVar18->CharOffsetStart <= pFVar17->CharOffsetStart) goto LAB_145e7bc00;
LAB_145e7bc11:
  do {
    pFVar16 = pFVar15;
    pFVar15 = pFVar16 + -1;
    if (pFVar15 <= pFVar17) break;
  } while (pFVar17->CharOffsetStart <= pFVar15->CharOffsetStart);
  uVar3 = pFVar15->CharOffsetStart;
  uVar4 = pFVar15->CharOffsetEnd;
  pFVar2 = pFVar16[-1].Replace.Data.AllocatorInstance.Data;
  if (pFVar18 <= pFVar15) {
    iVar6 = pFVar18->CharOffsetStart;
    iVar7 = pFVar18->CharOffsetEnd;
    pFVar5 = pFVar14[1].Replace.Data.AllocatorInstance.Data;
    iVar8 = pFVar14[1].Replace.Data.ArrayNum;
    iVar9 = pFVar14[1].Replace.Data.ArrayMax;
    pFVar18->CharOffsetStart = uVar3;
    pFVar18->CharOffsetEnd = uVar4;
    pFVar14[1].Replace.Data.AllocatorInstance.Data = pFVar2;
    iVar12 = pFVar16[-1].Replace.Data.ArrayMax;
    pFVar14[1].Replace.Data.ArrayNum = pFVar16[-1].Replace.Data.ArrayNum;
    pFVar14[1].Replace.Data.ArrayMax = iVar12;
    pFVar15->CharOffsetStart = iVar6;
    pFVar15->CharOffsetEnd = iVar7;
    pFVar16[-1].Replace.Data.AllocatorInstance.Data = pFVar5;
    pFVar16[-1].Replace.Data.ArrayNum = iVar8;
    pFVar16[-1].Replace.Data.ArrayMax = iVar9;
    goto LAB_145e7bc00;
  }
  iVar6 = pFVar17->CharOffsetStart;
  iVar7 = pFVar17->CharOffsetEnd;
  pFVar5 = (pFVar17->Replace).Data.AllocatorInstance.Data;
  iVar8 = (pFVar17->Replace).Data.ArrayNum;
  iVar9 = (pFVar17->Replace).Data.ArrayMax;
  lVar11 = (longlong)pFVar15 + (-0x18 - (longlong)pFVar17);
  local_348._0_4_ = (int)local_348 + -1;
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  pFVar17->CharOffsetStart = uVar3;
  pFVar17->CharOffsetEnd = uVar4;
  (pFVar17->Replace).Data.AllocatorInstance.Data = pFVar2;
  iVar12 = pFVar16[-1].Replace.Data.ArrayMax;
  (pFVar17->Replace).Data.ArrayNum = pFVar16[-1].Replace.Data.ArrayNum;
  (pFVar17->Replace).Data.ArrayMax = iVar12;
  pFVar15->CharOffsetStart = iVar6;
  pFVar15->CharOffsetEnd = iVar7;
  pFVar16[-1].Replace.Data.AllocatorInstance.Data = pFVar5;
  pFVar16[-1].Replace.Data.ArrayNum = iVar8;
  pFVar16[-1].Replace.Data.ArrayMax = iVar9;
  if ((lVar11 >> 2) - (lVar11 >> 0x3f) < ((longlong)pFVar13 - (longlong)pFVar18) / 0x18) {
    if (pFVar18 < pFVar13) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar13;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar15 <= pFVar17 + 1) goto LAB_145e7bd31;
    pFVar13 = pFVar16 + -2;
    pFVar18 = pFVar17;
  }
  else {
    if (pFVar17 + 1 < pFVar15) {
      *ppFVar19 = pFVar17;
      ppFVar19[1] = pFVar16 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar13 <= pFVar18) goto LAB_145e7bd31;
  }
  iVar12 = (int)(((longlong)pFVar13 - (longlong)pFVar18) / 0x18) + 1;
  pFVar17 = pFVar18;
  if ((int)local_348 == 0) goto LAB_145e7bd22;
  goto LAB_145e7bbb0;
}

// IntroSortInternal<FSortedShaderEntry,int,FIdentityFunctor,TDereferenceWrapper<FSortedShaderEntry,TLess<void>_>_> @ 145e7bdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSortedShaderEntry,int,FIdentityFunctor,TDereferenceWrapper<FSortedShaderEntry,TLess<void>_>_>
          (FSortedShaderEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSortedShaderEntry,TLess<void>_> param_4)

{
  FSortedShaderEntry *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FSortedShaderEntry *pFVar13;
  FSortedShaderEntry **ppFVar14;
  FSortedShaderEntry *pFVar15;
  FSortedShaderEntry *pFVar16;
  FSortedShaderEntry *pFVar17;
  FSortedShaderEntry *pFVar18;
  FSortedShaderEntry *pFVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_368 [48];
  FSortedShaderEntry *local_338;
  FSortedShaderEntry *local_328;
  FSortedShaderEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar21;
    memset(local_310,0,0x2e8);
    ppFVar14 = &local_328;
    do {
      pFVar17 = ppFVar14[1];
      pFVar19 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      iVar12 = (int)((longlong)pFVar17 - (longlong)pFVar19 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar18 = pFVar19;
      if ((int)local_338 != 0) {
LAB_145e7bea0:
        if (8 < iVar12) {
          iVar8 = pFVar18->PermutationId;
          iVar9 = pFVar18->Index;
          pFVar15 = pFVar17 + 1;
          pFVar19 = pFVar18 + iVar12 / 2;
          uVar4 = (pFVar19->TypeName).Hash;
          iVar10 = pFVar19->PermutationId;
          iVar11 = pFVar19->Index;
          pFVar19 = pFVar18 + iVar12 / 2;
          (pFVar19->TypeName).Hash = (pFVar18->TypeName).Hash;
          pFVar19->PermutationId = iVar8;
          pFVar19->Index = iVar9;
          (pFVar18->TypeName).Hash = uVar4;
          pFVar18->PermutationId = iVar10;
          pFVar18->Index = iVar11;
          pFVar19 = pFVar18;
LAB_145e7bed0:
          pFVar13 = pFVar19;
          pFVar19 = pFVar13 + 1;
          if (pFVar19 <= pFVar17) goto code_r0x000145e7bed9;
          goto LAB_145e7bef4;
        }
        for (; pFVar1 = pFVar18, pFVar19 = pFVar18, pFVar18 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar15 = pFVar19 + 1, pFVar15 <= pFVar17) {
            uVar2 = (pFVar15->TypeName).Hash;
            uVar3 = (pFVar1->TypeName).Hash;
            bVar20 = uVar3 < uVar2;
            if (uVar3 == uVar2) {
              bVar20 = pFVar1->PermutationId < pFVar19[1].PermutationId;
            }
            pFVar19 = pFVar15;
            if (bVar20) {
              pFVar1 = pFVar15;
            }
          }
          uVar4 = (pFVar1->TypeName).Hash;
          iVar9 = pFVar1->PermutationId;
          iVar10 = pFVar1->Index;
          iVar12 = pFVar17->PermutationId;
          iVar8 = pFVar17->Index;
          (pFVar1->TypeName).Hash = (pFVar17->TypeName).Hash;
          pFVar1->PermutationId = iVar12;
          pFVar1->Index = iVar8;
          (pFVar17->TypeName).Hash = uVar4;
          pFVar17->PermutationId = iVar9;
          pFVar17->Index = iVar10;
        }
        goto LAB_145e7bfc7;
      }
LAB_145e7bfb6:
      local_338 = pFVar1;
      HeapSortInternal<FSortedShaderEntry,int,FIdentityFunctor,TDereferenceWrapper<FSortedShaderEntry,TLess<void>_>_>
                (pFVar19,iVar12,param_3,param_4);
LAB_145e7bfc7:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_328 <= ppFVar14);
  }
  return;
code_r0x000145e7bed9:
  uVar2 = (pFVar19->TypeName).Hash;
  uVar3 = (pFVar18->TypeName).Hash;
  bVar20 = uVar3 < uVar2;
  if (uVar3 == uVar2) {
    bVar20 = pFVar18->PermutationId < pFVar13[1].PermutationId;
  }
  if (!bVar20) goto LAB_145e7bed0;
LAB_145e7bef4:
  do {
    pFVar16 = pFVar15;
    pFVar15 = pFVar16 + -1;
    if (pFVar15 <= pFVar18) break;
    uVar2 = (pFVar18->TypeName).Hash;
    uVar3 = (pFVar15->TypeName).Hash;
    bVar20 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar20 = pFVar16[-1].PermutationId < pFVar18->PermutationId;
    }
  } while (!bVar20);
  uVar4 = (pFVar15->TypeName).Hash;
  uVar5 = pFVar16[-1].PermutationId;
  uVar6 = pFVar16[-1].Index;
  if (pFVar19 <= pFVar15) {
    uVar7 = (pFVar19->TypeName).Hash;
    iVar12 = pFVar13[1].PermutationId;
    iVar8 = pFVar13[1].Index;
    (pFVar19->TypeName).Hash = uVar4;
    pFVar13[1].PermutationId = uVar5;
    pFVar13[1].Index = uVar6;
    (pFVar15->TypeName).Hash = uVar7;
    pFVar16[-1].PermutationId = iVar12;
    pFVar16[-1].Index = iVar8;
    goto LAB_145e7bed0;
  }
  uVar7 = (pFVar18->TypeName).Hash;
  iVar12 = pFVar18->PermutationId;
  iVar8 = pFVar18->Index;
  local_338._0_4_ = (int)local_338 + -1;
  (pFVar18->TypeName).Hash = uVar4;
  pFVar18->PermutationId = uVar5;
  pFVar18->Index = uVar6;
  (pFVar15->TypeName).Hash = uVar7;
  pFVar16[-1].PermutationId = iVar12;
  pFVar16[-1].Index = iVar8;
  if ((longlong)((longlong)pFVar15 + (-0x10 - (longlong)pFVar18) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar17 - (longlong)pFVar19 & 0xfffffffffffffff0U)) {
    if (pFVar19 < pFVar17) {
      *ppFVar14 = pFVar19;
      ppFVar14[1] = pFVar17;
      *(int *)(ppFVar14 + 2) = (int)local_338;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar15 <= pFVar18 + 1) goto LAB_145e7bfc7;
    pFVar17 = pFVar16 + -2;
    pFVar19 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar15) {
      *ppFVar14 = pFVar18;
      ppFVar14[1] = pFVar16 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_338;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar17 <= pFVar19) goto LAB_145e7bfc7;
  }
  iVar12 = (int)((longlong)pFVar17 - (longlong)pFVar19 >> 4) + 1;
  pFVar18 = pFVar19;
  if ((int)local_338 == 0) goto LAB_145e7bfb6;
  goto LAB_145e7bea0;
}

// IterateShaderParameterMembersInternal<`SetAllShaderParametersAsBindless'::__l2::<lambda_1>_> @ 145e7c060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
IterateShaderParameterMembersInternal<_SetAllShaderParametersAsBindless_::__l2::<lambda_1>_>
          (FShaderParametersMetadata *param_1,ushort param_2,<lambda_1> *param_3)

{
  FScriptContainerElement FVar1;
  uint uVar2;
  FShaderParametersMetadata *pFVar3;
  FRHIBatchedShaderParameters *pFVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ushort uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  FBindlessResourceParameter local_e8;
  uint local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FRHIBatchedShaderParametersAllocator *local_c8;
  FShaderParameterReader local_b8;
  FRHIShaderParameterResource local_a8;
  <lambda_1> local_98;
  <lambda_1> local_78;
  <lambda_1> local_58;
  
  pFVar12 = (param_1->Members).AllocatorInstance.Data;
  local_e0 = (param_1->Members).ArrayNum;
  uVar8 = (ulonglong)(int)local_e0;
  pFVar10 = pFVar12 + uVar8 * 0x30;
  local_d8 = pFVar10;
  while( true ) {
    local_d0 = pFVar12;
    if ((param_1->Members).ArrayNum != (int)uVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar12 == pFVar10) break;
    FVar1 = pFVar12[0x18];
    uVar11 = param_2 + *(short *)(pFVar12 + 0x14);
    uVar2 = *(uint *)(pFVar12 + 0x24);
    if (FVar1 == (FScriptContainerElement)0x15) {
      if ((uVar2 != 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("NumElements == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                             ,0x2b2,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_98.BatchedParameters = param_3->BatchedParameters;
      local_98.Reader.Data = (param_3->Reader).Data;
      local_98.Reader.DataSize = (param_3->Reader).DataSize;
      IterateShaderParameterMembersInternal<_SetAllShaderParametersAsBindless_::__l2::<lambda_1>_>
                (*(FShaderParametersMetadata **)(pFVar12 + 0x28),uVar11,&local_98);
    }
    else if (FVar1 == (FScriptContainerElement)0x14) {
      if (uVar2 == 0) {
        local_78.BatchedParameters = param_3->BatchedParameters;
        local_78.Reader.Data = (param_3->Reader).Data;
        local_78.Reader.DataSize = (param_3->Reader).DataSize;
        IterateShaderParameterMembersInternal<_SetAllShaderParametersAsBindless_::__l2::<lambda_1>_>
                  (*(FShaderParametersMetadata **)(pFVar12 + 0x28),uVar11,&local_78);
      }
      else {
        pFVar3 = *(FShaderParametersMetadata **)(pFVar12 + 0x28);
        uVar9 = 0;
        do {
          local_58.BatchedParameters = param_3->BatchedParameters;
          local_58.Reader.Data = (param_3->Reader).Data;
          local_58.Reader.DataSize = (param_3->Reader).DataSize;
          IterateShaderParameterMembersInternal<_SetAllShaderParametersAsBindless_::__l2::<lambda_1>_>
                    (pFVar3,(short)pFVar3->Size * (short)uVar9 + uVar11,&local_58);
          uVar9 = uVar9 + 1;
          pFVar10 = local_d8;
        } while (uVar9 < uVar2);
      }
    }
    else if ((uVar2 == 0) ||
            ((0xe < (byte)((char)FVar1 - EUniformBufferBaseType_NumBits) &&
             (FVar1 != (FScriptContainerElement)0x18)))) {
      `SetAllShaderParametersAsBindless'::__l2::<lambda_1>::operator()
                (param_3,(EUniformBufferBaseType)FVar1,uVar11);
    }
    else {
      uVar9 = 0;
      do {
        uVar7 = (short)uVar9 * 8 + uVar11;
        switch(FVar1) {
        case (FScriptContainerElement)0x5:
        case (FScriptContainerElement)0x6:
        case (FScriptContainerElement)0x7:
        case (FScriptContainerElement)0x8:
        case (FScriptContainerElement)0x9:
        case (FScriptContainerElement)0xc:
        case (FScriptContainerElement)0xd:
        case (FScriptContainerElement)0xe:
        case (FScriptContainerElement)0x11:
        case (FScriptContainerElement)0x12:
        case (FScriptContainerElement)0x18:
          local_e8._5_1_ = 0;
          local_e8.ByteOffset = uVar7;
          local_e8.GlobalConstantOffset = uVar7;
          local_e8.BaseType = (EUniformBufferBaseType)FVar1;
          if (*(longlong *)((param_3->Reader).Data + uVar7) != 0) {
            local_b8.Data = (param_3->Reader).Data;
            local_b8.DataSize = (param_3->Reader).DataSize;
            ExtractShaderParameterResource<FShaderParameterBindings::FBindlessResourceParameter>
                      (&local_a8,&local_b8,&local_e8);
            pFVar4 = param_3->BatchedParameters;
            local_c8 = pFVar4->Allocator;
            if (local_c8->AttachedParameters != pFVar4) {
              if ((local_c8->AttachedParameters != (FRHIBatchedShaderParameters *)0x0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("!AttachedParameters",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                     ,0x82,
                                     L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_c8->AttachedParameters = pFVar4;
            }
            FRHIBatchedShaderParametersAllocator::
            Emplace<FRHIShaderParameterResource,FRHIShaderParameterResource_const_&>
                      (pFVar4->Allocator,&pFVar4->Allocator->BindlessParameters,
                       &pFVar4->BindlessParameters,&local_a8);
          }
        }
        uVar9 = uVar9 + 1;
        pFVar10 = local_d8;
        pFVar12 = local_d0;
      } while (uVar9 < uVar2);
    }
    pFVar12 = pFVar12 + 0x30;
    uVar8 = (ulonglong)local_e0;
  }
  return;
}

// IterateShaderParameterMembersInternal<`FShaderParameterParser::ValidateShaderParameterTypes'::__l2::<lambda_1>_> @ 145e7c360

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
IterateShaderParameterMembersInternal<_FShaderParameterParser::ValidateShaderParameterTypes_::__l2::<lambda_1>_>
          (FShaderParametersMetadata *param_1,ushort param_2,
          TStringBuilderWithBuffer<wchar_t,1024> *param_3,<lambda_1> *param_4)

{
  EUniformBufferBaseType EVar1;
  FShaderParametersMetadata *pFVar2;
  FShaderParameterParser *pFVar3;
  TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
  *this;
  code *pcVar4;
  FMember *pFVar5;
  bool bVar6;
  uint uVar7;
  size_t sVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort uVar18;
  FMember *pFVar19;
  undefined1 local_158 [4];
  uint local_154;
  size_t local_150;
  FMember *local_148;
  uint local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FMember *local_e8;
  FString local_e0;
  <lambda_1> local_c8;
  <lambda_1> local_98;
  <lambda_1> local_68;
  
  pFVar19 = (FMember *)(param_1->Members).AllocatorInstance.Data;
  local_140 = (param_1->Members).ArrayNum;
  uVar11 = (ulonglong)(int)local_140;
  local_e8 = pFVar19 + uVar11;
  do {
    pFVar5 = local_e8;
    local_148 = pFVar19;
    if ((param_1->Members).ArrayNum != (int)uVar11) {
      local_158[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_158);
    }
    if (pFVar19 == pFVar5) {
      return;
    }
    local_154 = pFVar19->NumElements;
    pwVar12 = pFVar19->Name;
    EVar1 = pFVar19->BaseType;
    uVar18 = param_2 + (short)pFVar19->Offset;
    local_150 = wcslen(pwVar12);
    if (EVar1 == UBMT_INCLUDED_STRUCT) {
      if ((local_154 != 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("NumElements == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                             ,0x27,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_c8.__this = param_4->__this;
      local_c8.ParametersFoundByCompiler = param_4->ParametersFoundByCompiler;
      local_c8.CompilerInput = param_4->CompilerInput;
      local_c8.bPlatformSupportsPrecisionModifier = param_4->bPlatformSupportsPrecisionModifier;
      local_c8.CompilerOutput = param_4->CompilerOutput;
      IterateShaderParameterMembersInternal<_FShaderParameterParser::ValidateShaderParameterTypes_::__l2::<lambda_1>_>
                (pFVar19->Struct,uVar18,param_3,&local_c8);
    }
    else {
      iVar15 = (int)local_150;
      if (EVar1 == UBMT_NESTED_STRUCT) {
        uVar14 = 0;
        iVar10 = 0;
        if (local_154 == 0) {
          if (pwVar12 != (wchar_t *)0x0) {
            sVar8 = wcslen(pwVar12);
            iVar10 = (int)sVar8;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,pwVar12,iVar10);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
          local_98.__this = param_4->__this;
          local_98.ParametersFoundByCompiler = param_4->ParametersFoundByCompiler;
          local_98.CompilerInput = param_4->CompilerInput;
          local_98.bPlatformSupportsPrecisionModifier = param_4->bPlatformSupportsPrecisionModifier;
          local_98.CompilerOutput = param_4->CompilerOutput;
          IterateShaderParameterMembersInternal<_FShaderParameterParser::ValidateShaderParameterTypes_::__l2::<lambda_1>_>
                    (pFVar19->Struct,uVar18,param_3,&local_98);
          if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar15 + 1) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar9 = (longlong)(iVar15 + 1);
        }
        else {
          if (pwVar12 != (wchar_t *)0x0) {
            sVar8 = wcslen(pwVar12);
            iVar10 = (int)sVar8;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,pwVar12,iVar10);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
          uVar7 = local_154;
          pFVar2 = pFVar19->Struct;
          do {
            local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_138.Data.ArrayNum = 0;
            local_138.Data.ArrayMax = 0;
            FString::AppendInt(&local_138,uVar14);
            iVar10 = local_138.Data.ArrayNum;
            iVar15 = local_138.Data.ArrayNum + -1;
            if (local_138.Data.ArrayNum == 0) {
              iVar15 = 0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,
                       (wchar_t *)local_138.Data.AllocatorInstance.Data,iVar15);
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
            local_68.__this = param_4->__this;
            local_68.ParametersFoundByCompiler = param_4->ParametersFoundByCompiler;
            local_68.CompilerInput = param_4->CompilerInput;
            local_68.bPlatformSupportsPrecisionModifier =
                 param_4->bPlatformSupportsPrecisionModifier;
            local_68.CompilerOutput = param_4->CompilerOutput;
            IterateShaderParameterMembersInternal<_FShaderParameterParser::ValidateShaderParameterTypes_::__l2::<lambda_1>_>
                      (pFVar2,(short)uVar14 * (short)pFVar2->Size + uVar18,param_3,&local_68);
            if (iVar10 == 0) {
              iVar10 = 1;
            }
            if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar10) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("InCount <= Len()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                   ,0xe8,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            param_3->_padding_ = param_3->_padding_ + (longlong)iVar10 * -2;
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar7);
          iVar15 = (int)local_150 + 1;
          if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar15) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar9 = (longlong)iVar15;
          pFVar19 = local_148;
        }
      }
      else {
        if ((local_154 != 0) &&
           (((byte)(EVar1 - EUniformBufferBaseType_NumBits) < 0xf ||
            (EVar1 == UBMT_RESOURCE_COLLECTION)))) {
          uVar14 = 0;
          local_150 = local_150 & 0xffffffff00000000;
          do {
            uVar11 = 0;
            FString::PrintfImpl(&local_f8,L"%s_%d");
            iVar10 = 0;
            iVar15 = local_f8.Data.ArrayNum + -1;
            if (local_f8.Data.ArrayNum == 0) {
              iVar15 = iVar10;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,
                       (wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar15);
            if ((ulonglong)param_3->_padding_ < param_3->_padding_ + 2U) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_3,1);
            }
            *(undefined2 *)param_3->_padding_ = 0;
            pwVar12 = (wchar_t *)param_3->_padding_;
            if ((pFVar19->BaseType == UBMT_INT32) || ((byte)(pFVar19->BaseType - UBMT_UINT32) < 2))
            {
              FString::FString(&local_128,pwVar12);
              pFVar3 = param_4->__this;
              if (local_128.Data.ArrayNum == 0) {
                pwVar13 = L"";
                iVar15 = iVar10;
              }
              else {
                pwVar13 = (wchar_t *)local_128.Data.AllocatorInstance.Data;
                iVar15 = local_128.Data.ArrayNum + -1;
              }
              uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar13);
              iVar15 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FString>
                                 ((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                                   *)&pFVar3->ParsedParameters,uVar14,&local_128);
              uVar16 = uVar11;
              if (((iVar15 == -1) ||
                  (uVar16 = (longlong)iVar15 * 0x78 + *(longlong *)&pFVar3->ParsedParameters,
                  uVar16 == 0)) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x27b,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              this = (TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                      *)param_4->ParametersFoundByCompiler;
              if (*(int *)(uVar16 + 0x38) == 0) {
                FString::FString(&local_118,pwVar12);
                if (local_118.Data.ArrayNum == 0) {
                  pwVar12 = L"";
                }
                else {
                  iVar10 = local_118.Data.ArrayNum + -1;
                  pwVar12 = (wchar_t *)local_118.Data.AllocatorInstance.Data;
                }
                uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
                iVar15 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<FString>(this,uVar14,&local_118);
                if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_118.Data.AllocatorInstance.Data);
                }
                if ((iVar15 != -1) &&
                   (bVar6 = FDebug::CheckVerifyFailedImpl2
                                      ("!ParametersFoundByCompiler.Contains(ShaderBindingName)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                                       ,0x5a2,
                                       L"Looks like there is a bug in FShaderParameterParser ParameterName=%s DumpDebugInfoPath=%s"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              else {
                uVar14 = 0;
                FString::FString(&local_108,pwVar12);
                if (local_108.Data.ArrayNum == 0) {
                  pwVar13 = L"";
                  uVar7 = uVar14;
                }
                else {
                  pwVar13 = (wchar_t *)local_108.Data.AllocatorInstance.Data;
                  uVar7 = local_108.Data.ArrayNum - 1;
                }
                uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar7,pwVar13);
                iVar15 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<FString>(this,uVar7,&local_108);
                lVar9 = 0;
                if (iVar15 != -1) {
                  lVar9 = (longlong)iVar15 * 0x20 + *(longlong *)&this->Elements;
                }
                lVar17 = lVar9 + 0x10;
                if (lVar9 == 0) {
                  lVar17 = 0;
                }
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                if (lVar17 != 0) {
                  uVar11 = (ulonglong)*(ushort *)(lVar17 + 2);
                  uVar14 = (uint)*(ushort *)(lVar17 + 4);
                }
                bVar6 = *param_4->bPlatformSupportsPrecisionModifier;
                FString::FString(&local_e0,pwVar12);
                FShaderParameterParser::ValidateShaderParameterType
                          (param_4->__this,param_4->CompilerInput,&local_e0,(int)uVar11,uVar14,bVar6
                           ,param_4->CompilerOutput);
                pFVar19 = local_148;
                if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                  pFVar19 = local_148;
                }
              }
              uVar14 = (uint)local_150;
            }
            iVar15 = local_f8.Data.ArrayNum + -1;
            if (local_f8.Data.ArrayNum == 0) {
              iVar15 = 0;
            }
            if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar15) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("InCount <= Len()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                   ,0xe8,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            param_3->_padding_ = param_3->_padding_ + (longlong)iVar15 * -2;
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            uVar14 = uVar14 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar14);
          } while (uVar14 < local_154);
          goto LAB_145e7ca47;
        }
        iVar10 = 0;
        if (pwVar12 != (wchar_t *)0x0) {
          sVar8 = wcslen(pwVar12);
          iVar10 = (int)sVar8;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_3,pwVar12,iVar10);
        if ((ulonglong)param_3->_padding_ < param_3->_padding_ + 2U) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_3,1);
        }
        *(undefined2 *)param_3->_padding_ = 0;
        `FShaderParameterParser::ValidateShaderParameterTypes'::__l2::<lambda_1>::operator()
                  (param_4,param_1,pFVar19,(wchar_t *)param_3->_padding_,uVar18);
        if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar15) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar9 = (longlong)iVar15;
      }
      param_3->_padding_ = param_3->_padding_ + lVar9 * -2;
    }
LAB_145e7ca47:
    pFVar19 = pFVar19 + 1;
    uVar11 = (ulonglong)local_140;
  } while( true );
}

// IterateShaderParameterMembersInternal<`FShaderParameterParser::MoveShaderParametersToRootConstantBuffer'::__l5::<lambda_1>_> @ 145e7ca90

/* WARNING: Removing unreachable block (ram,0x000145e7ce9c) */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
IterateShaderParameterMembersInternal<_FShaderParameterParser::MoveShaderParametersToRootConstantBuffer_::__l5::<lambda_1>_>
          (FShaderParametersMetadata *param_1,ushort param_2,
          TStringBuilderWithBuffer<wchar_t,1024> *param_3,<lambda_1> *param_4)

{
  EUniformBufferBaseType EVar1;
  char cVar2;
  uint uVar3;
  FShaderParametersMetadata *pFVar4;
  FShaderParameterParser *pFVar5;
  code *pcVar6;
  FMember *pFVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  size_t sVar12;
  longlong lVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ushort uVar19;
  ushort uVar20;
  FMember *pFVar21;
  undefined1 local_d6 [6];
  FMember *local_d0;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  size_t local_80;
  FMember *local_78;
  <lambda_1> local_68;
  <lambda_1> local_58;
  <lambda_1> local_48;
  
  pFVar21 = (FMember *)(param_1->Members).AllocatorInstance.Data;
  local_b8 = (param_1->Members).ArrayNum;
  uVar14 = (ulonglong)(int)local_b8;
  local_78 = pFVar21 + uVar14;
  do {
    pFVar7 = local_78;
    local_d0 = pFVar21;
    if ((param_1->Members).ArrayNum != (int)uVar14) {
      local_d6[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d6);
    }
    if (pFVar21 == pFVar7) {
      return;
    }
    uVar20 = param_2 + (short)pFVar21->Offset;
    pwVar15 = pFVar21->Name;
    EVar1 = pFVar21->BaseType;
    uVar3 = pFVar21->NumElements;
    local_80 = wcslen(pwVar15);
    if (EVar1 == UBMT_INCLUDED_STRUCT) {
      if ((uVar3 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("NumElements == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                             ,0x27,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_68.__this = param_4->__this;
      local_68.ConstantBufferMembers = param_4->ConstantBufferMembers;
      IterateShaderParameterMembersInternal<_FShaderParameterParser::MoveShaderParametersToRootConstantBuffer_::__l5::<lambda_1>_>
                (pFVar21->Struct,uVar20,param_3,&local_68);
      local_d0 = pFVar21;
    }
    else {
      iVar17 = (int)local_80;
      if (EVar1 == UBMT_NESTED_STRUCT) {
        if (uVar3 == 0) {
          iVar10 = 0;
          if (pwVar15 != (wchar_t *)0x0) {
            sVar12 = wcslen(pwVar15);
            iVar10 = (int)sVar12;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,pwVar15,iVar10);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
          local_58.__this = param_4->__this;
          local_58.ConstantBufferMembers = param_4->ConstantBufferMembers;
          IterateShaderParameterMembersInternal<_FShaderParameterParser::MoveShaderParametersToRootConstantBuffer_::__l5::<lambda_1>_>
                    (pFVar21->Struct,uVar20,param_3,&local_58);
          if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar17 + 1) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar13 = (longlong)(iVar17 + 1);
          local_d0 = pFVar21;
        }
        else {
          uVar16 = 0;
          iVar17 = 0;
          if (pwVar15 != (wchar_t *)0x0) {
            sVar12 = wcslen(pwVar15);
            iVar17 = (int)sVar12;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,pwVar15,iVar17);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
          pFVar4 = pFVar21->Struct;
          do {
            local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b0.Data.ArrayNum = 0;
            local_b0.Data.ArrayMax = 0;
            FString::AppendInt(&local_b0,uVar16);
            iVar10 = local_b0.Data.ArrayNum;
            iVar17 = local_b0.Data.ArrayNum + -1;
            if (local_b0.Data.ArrayNum == 0) {
              iVar17 = 0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,
                       (wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar17);
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
            local_48.__this = param_4->__this;
            local_48.ConstantBufferMembers = param_4->ConstantBufferMembers;
            IterateShaderParameterMembersInternal<_FShaderParameterParser::MoveShaderParametersToRootConstantBuffer_::__l5::<lambda_1>_>
                      (pFVar4,(short)uVar16 * (short)pFVar4->Size + uVar20,param_3,&local_48);
            if (iVar10 == 0) {
              iVar10 = 1;
            }
            if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar10) &&
               (bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("InCount <= Len()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                   ,0xe8,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            param_3->_padding_ = param_3->_padding_ + (longlong)iVar10 * -2;
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar3);
          iVar17 = (int)local_80 + 1;
          if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar17) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar13 = (longlong)iVar17;
        }
      }
      else {
        if ((uVar3 != 0) &&
           (((byte)(EVar1 - EUniformBufferBaseType_NumBits) < 0xf ||
            (EVar1 == UBMT_RESOURCE_COLLECTION)))) {
          uVar16 = 0;
          do {
            FString::PrintfImpl(&local_90,L"%s_%d");
            iVar17 = local_90.Data.ArrayNum + -1;
            if (local_90.Data.ArrayNum == 0) {
              iVar17 = 0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,
                       (wchar_t *)local_90.Data.AllocatorInstance.Data,iVar17);
            if ((ulonglong)param_3->_padding_ < param_3->_padding_ + 2U) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_3,1);
            }
            *(undefined2 *)param_3->_padding_ = 0;
            uVar19 = (short)uVar16 * 8 + uVar20;
            FString::FString(&local_a0,(wchar_t *)param_3->_padding_);
            pFVar5 = param_4->__this;
            if (local_a0.Data.ArrayNum == 0) {
              pwVar15 = L"";
              iVar17 = 0;
            }
            else {
              iVar17 = local_a0.Data.ArrayNum + -1;
              pwVar15 = (wchar_t *)local_a0.Data.AllocatorInstance.Data;
            }
            uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar15);
            iVar17 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>
                               ((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                                 *)&pFVar5->ParsedParameters,uVar11,&local_a0);
            if (iVar17 == -1) {
              lVar13 = 0;
            }
            else {
              lVar13 = (longlong)iVar17 * 0x78 + *(longlong *)&pFVar5->ParsedParameters;
            }
            lVar18 = lVar13 + 0x10;
            if (lVar13 == 0) {
              lVar18 = 0;
            }
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if (((lVar18 != 0) && (*(int *)(lVar18 + 0x28) != 0)) &&
               (*(char *)(lVar18 + 0x55) != '\b')) {
              uVar9 = uVar19 & 0xf;
              if ((((uVar19 & 0xf) != 0) && (uVar9 != 4)) &&
                 ((uVar9 != 8 &&
                  ((uVar9 != 0xc &&
                   (bVar8 = FDebug::CheckVerifyFailedImpl2
                                      ("!\"Unimplemented function called\"",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                                       ,0x452,L""), bVar8)))))) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              cVar2 = *(char *)(lVar18 + 0x55);
              if ((cVar2 == '\x05') || ((byte)(cVar2 - 6U) < 2)) {
                if (cVar2 == '\x05') {
                  local_c8 = L"BindlessSampler_";
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,0x10);
                }
                else if (cVar2 == '\x06') {
                  local_c8 = L"BindlessSRV_";
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,0xc);
                }
                else if (cVar2 == '\a') {
                  local_c8 = L"BindlessUAV_";
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,0xc);
                }
                else {
                  local_c8 = (wchar_t *)0x0;
                  uStack_c0 = 0;
                }
                TStringBuilderBase<wchar_t>::AppendfImpl
                          (param_4->ConstantBufferMembers,L"uint %.*s%.*s : packoffset(c%d%s);\n");
              }
              else if (cVar2 == '\0') {
                if (*(int *)(lVar18 + 0x38) == 0) {
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            (param_4->ConstantBufferMembers,L"%.*s %s : packoffset(c%d%s);\n");
                }
                else {
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            (param_4->ConstantBufferMembers,L"%.*s %s[%.*s] : packoffset(c%d%s);\n")
                  ;
                }
              }
            }
            iVar17 = local_90.Data.ArrayNum + -1;
            if (local_90.Data.ArrayNum == 0) {
              iVar17 = 0;
            }
            if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar17) &&
               (bVar8 = FDebug::CheckVerifyFailedImpl2
                                  ("InCount <= Len()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                   ,0xe8,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            param_3->_padding_ = param_3->_padding_ + (longlong)iVar17 * -2;
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar3);
          goto LAB_145e7d136;
        }
        iVar10 = 0;
        if (pwVar15 != (wchar_t *)0x0) {
          sVar12 = wcslen(pwVar15);
          iVar10 = (int)sVar12;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_3,pwVar15,iVar10);
        if ((ulonglong)param_3->_padding_ < param_3->_padding_ + 2U) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_3,1);
        }
        *(undefined2 *)param_3->_padding_ = 0;
        `FShaderParameterParser::MoveShaderParametersToRootConstantBuffer'::__l5::<lambda_1>::
        operator()(param_4,param_1,pFVar21,(wchar_t *)param_3->_padding_,uVar20);
        if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar17) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar13 = (longlong)iVar17;
        local_d0 = pFVar21;
      }
      param_3->_padding_ = param_3->_padding_ + lVar13 * -2;
    }
LAB_145e7d136:
    pFVar21 = local_d0 + 1;
    uVar14 = (ulonglong)local_b8;
  } while( true );
}

// IterateShaderParameterMembersInternal<`FShaderParameterParser::ParseParameters'::__l5::<lambda_1>_> @ 145e7d170

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
IterateShaderParameterMembersInternal<_FShaderParameterParser::ParseParameters_::__l5::<lambda_1>_>
          (FShaderParametersMetadata *param_1,ushort param_2,
          TStringBuilderWithBuffer<wchar_t,1024> *param_3,<lambda_1> param_4)

{
  EUniformBufferBaseType EVar1;
  uint uVar2;
  wchar_t *_Str;
  FShaderParametersMetadata *pFVar3;
  code *pcVar4;
  FMember *pFVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  FMember *pFVar12;
  ushort uVar13;
  <lambda_1> local_res20;
  undefined1 local_e8 [2];
  ushort local_e6;
  uint local_e4;
  FString local_e0;
  FMember *local_d0;
  FString local_c8;
  size_t local_b8;
  FMember *local_b0;
  FParsedShaderParameter local_a8;
  FString local_48;
  
  pFVar12 = (FMember *)(param_1->Members).AllocatorInstance.Data;
  local_e4 = (param_1->Members).ArrayNum;
  uVar9 = (ulonglong)(int)local_e4;
  local_b0 = pFVar12 + uVar9;
  local_res20.__this = param_4.__this;
  do {
    pFVar5 = local_b0;
    local_d0 = pFVar12;
    if ((param_1->Members).ArrayNum != (int)uVar9) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_e8);
    }
    if (pFVar12 == pFVar5) {
      return;
    }
    _Str = pFVar12->Name;
    uVar13 = param_2 + (short)pFVar12->Offset;
    EVar1 = pFVar12->BaseType;
    uVar2 = pFVar12->NumElements;
    local_e6 = uVar13;
    local_b8 = wcslen(_Str);
    if (EVar1 == UBMT_INCLUDED_STRUCT) {
      if ((uVar2 != 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("NumElements == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                             ,0x27,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      IterateShaderParameterMembersInternal<_FShaderParameterParser::ParseParameters_::__l5::<lambda_1>_>
                (pFVar12->Struct,uVar13,param_3,local_res20);
    }
    else {
      iVar10 = (int)local_b8;
      if (EVar1 == UBMT_NESTED_STRUCT) {
        if (uVar2 == 0) {
          iVar7 = 0;
          if (_Str != (wchar_t *)0x0) {
            sVar8 = wcslen(_Str);
            iVar7 = (int)sVar8;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,_Str,iVar7);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
          IterateShaderParameterMembersInternal<_FShaderParameterParser::ParseParameters_::__l5::<lambda_1>_>
                    (pFVar12->Struct,uVar13,param_3,local_res20);
        }
        else {
          iVar10 = 0;
          if (_Str != (wchar_t *)0x0) {
            sVar8 = wcslen(_Str);
            iVar10 = (int)sVar8;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,_Str,iVar10);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
          uVar13 = local_e6;
          pFVar3 = pFVar12->Struct;
          uVar11 = 0;
          do {
            local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e0.Data.ArrayNum = 0;
            local_e0.Data.ArrayMax = 0;
            FString::AppendInt(&local_e0,uVar11);
            iVar7 = local_e0.Data.ArrayNum;
            iVar10 = local_e0.Data.ArrayNum + -1;
            if (local_e0.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,
                       (wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar10);
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,L"_",1);
            IterateShaderParameterMembersInternal<_FShaderParameterParser::ParseParameters_::__l5::<lambda_1>_>
                      (pFVar3,(short)uVar11 * (short)pFVar3->Size + uVar13,param_3,local_res20);
            if (iVar7 == 0) {
              iVar7 = 1;
            }
            if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar7) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("InCount <= Len()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                   ,0xe8,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            param_3->_padding_ = param_3->_padding_ + (longlong)iVar7 * -2;
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar2);
          iVar10 = (int)local_b8;
          pFVar12 = local_d0;
        }
        iVar10 = iVar10 + 1;
        if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar10) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if ((uVar2 != 0) &&
           (((byte)(EVar1 - EUniformBufferBaseType_NumBits) < 0xf ||
            (EVar1 == UBMT_RESOURCE_COLLECTION)))) {
          uVar11 = 0;
          do {
            FString::PrintfImpl(&local_c8,L"%s_%d");
            iVar10 = local_c8.Data.ArrayNum + -1;
            if (local_c8.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_3,
                       (wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar10);
            if ((ulonglong)param_3->_padding_ < param_3->_padding_ + 2U) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_3,1);
            }
            local_a8.MemberSize = 0;
            local_a8.ParsedName.DataPtr = (wchar_t *)0x0;
            local_a8.ParsedName.Size = 0;
            *(undefined2 *)param_3->_padding_ = 0;
            local_a8.BaseType.Value = pFVar12->BaseType;
            local_a8.ParsedType.DataPtr = (wchar_t *)0x0;
            local_a8.ConstantBufferOffset = (int)(ushort)((short)uVar11 * 8 + uVar13);
            local_a8.PrecisionModifier.Value = pFVar12->Precision;
            local_a8.NumRows = pFVar12->NumRows;
            local_a8.NumColumns = pFVar12->NumColumns;
            local_a8.ParsedType.Size = 0;
            local_a8.ParsedArraySize.DataPtr = (wchar_t *)0x0;
            local_a8.ParsedArraySize.Size = 0;
            local_a8.ParsedPragmaLineOffset = 0;
            local_a8.ParsedLineOffset = 0;
            local_a8.ParsedCharOffsetStart = -1;
            local_a8.ParsedCharOffsetEnd = -1;
            local_a8.BindlessConversionType = None;
            local_a8.ConstantBufferParameterType = LooseData;
            local_a8.bGloballyCoherent = false;
            local_a8.bIsBindable = true;
            local_a8.ParsedTypeDecl = Invalid;
            if ((local_a8.BaseType.Value == UBMT_INT32) ||
               ((byte)(local_a8.BaseType.Value - UBMT_UINT32) < 2)) {
              local_a8.MemberSize = local_a8.NumColumns * pFVar12->NumRows * 4;
              if (pFVar12->NumElements != 0) {
                local_a8.MemberSize =
                     (local_a8.MemberSize + 0xf & 0xfffffff0) * pFVar12->NumElements;
              }
            }
            FString::FString(&local_48,(wchar_t *)param_3->_padding_);
            TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
            ::Emplace<FString,FShaderParameterParser::FParsedShaderParameter_const_&>
                      ((TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
                        *)&(local_res20.__this)->ParsedParameters,&local_48,&local_a8);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            iVar10 = local_c8.Data.ArrayNum + -1;
            if (local_c8.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar10) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("InCount <= Len()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                   ,0xe8,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            param_3->_padding_ = param_3->_padding_ + (longlong)iVar10 * -2;
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar2);
          goto LAB_145e7d654;
        }
        iVar7 = 0;
        if (_Str != (wchar_t *)0x0) {
          sVar8 = wcslen(_Str);
          iVar7 = (int)sVar8;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_3,_Str,iVar7);
        if ((ulonglong)param_3->_padding_ < param_3->_padding_ + 2U) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_3,1);
        }
        *(undefined2 *)param_3->_padding_ = 0;
        `FShaderParameterParser::ParseParameters'::__l5::<lambda_1>::operator()
                  (&local_res20,param_1,pFVar12,(wchar_t *)param_3->_padding_,uVar13);
        if (((int)(param_3->_padding_ - param_3->_padding_ >> 1) < iVar10) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      param_3->_padding_ = param_3->_padding_ + (longlong)iVar10 * -2;
    }
LAB_145e7d654:
    pFVar12 = pFVar12 + 1;
    uVar9 = (ulonglong)local_e4;
  } while( true );
}

// LowerBoundInternal<FSHAHash_const_,int,FSHAHash,FIdentityFunctor,TLess<void>_> @ 145e7d690

int __cdecl
AlgoImpl::LowerBoundInternal<FSHAHash_const_,int,FSHAHash,FIdentityFunctor,TLess<void>_>
          (FSHAHash *param_1,int param_2,FSHAHash *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = memcmp(param_1 + iVar1,param_3,0x14);
      if (iVar3 < 0) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// MemcpyResource<FRWBuffer> @ 145e7d720

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemcpyResource<FRWBuffer>
          (FRHICommandList *param_1,FRWBuffer *param_2,FRWBuffer *param_3,
          FMemcpyResourceParams *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderMap *this;
  FShaderType *pFVar3;
  FName this_00;
  TIntVector3<int> *pTVar4;
  undefined1 local_res10 [8];
  TIntVector3<int>_u_0 local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  FString local_98;
  TShaderRefBase<FMemcpyCS,FShaderMapPointerTable> local_88;
  FParameters local_78;
  TIntVector3<int> local_28;
  
  if (!param_5) {
    FRHIComputeCommandList::BeginUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
  }
  local_78.Common.DstStructuredBuffer4x = (FRHIUnorderedAccessView *)0x0;
  local_78.Common.DstByteAddressBuffer = (FRHIUnorderedAccessView *)0x0;
  local_78.SrcStructuredBuffer4x = (FRHIShaderResourceView *)0x0;
  local_78.SrcByteAddressBuffer = (FRHIShaderResourceView *)0x0;
  local_78.Common.Size = param_4->Count;
  local_78.Common.SrcOffset = param_4->SrcOffset;
  local_78.Common.DstOffset = param_4->DstOffset;
  local_78.SrcBuffer = (param_3->SRV).Reference;
  local_78.Common.DstBuffer = (param_2->UAV).Reference;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar3 = (FShaderType *)FMemcpyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_a8,pFVar3,8);
  if (local_a8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    FName::ToString((FName *)this_00,&local_98);
    FMemcpyCS::GetStaticType();
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemcpyCS::GetStaticType();
  local_88.ShaderContent = (FMemcpyCS *)local_a8.ShaderContent;
  local_88.ShaderMap = local_a8.ShaderMap;
  pTVar4 = FComputeShaderUtils::GetGroupCountWrapped(&local_28,param_4->Count,0x40);
  local_b8._0_8_ = *(undefined8 *)&pTVar4->field0_0x0;
  local_b8._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  FComputeShaderUtils::Dispatch<FMemcpyCS>
            ((FRHIComputeCommandList *)param_1,&local_88,&local_78,
             (TIntVector3<int> *)&local_b8._s_0);
  if (!param_5) {
    FRHIComputeCommandList::EndUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
  }
  return;
}

// MemcpyResource<FRWBufferStructured> @ 145e7d8f0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemcpyResource<FRWBufferStructured>
          (FRHICommandList *param_1,FRWBufferStructured *param_2,FRWBufferStructured *param_3,
          FMemcpyResourceParams *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderMap *this;
  FShaderType *pFVar3;
  FName this_00;
  TIntVector3<int> *pTVar4;
  undefined1 local_res10 [8];
  TIntVector3<int>_u_0 local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  FString local_98;
  TShaderRefBase<FMemcpyCS,FShaderMapPointerTable> local_88;
  FParameters local_78;
  TIntVector3<int> local_28;
  
  if (!param_5) {
    FRHIComputeCommandList::BeginUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
  }
  local_78.Common.DstBuffer = (FRHIUnorderedAccessView *)0x0;
  local_78.Common.DstByteAddressBuffer = (FRHIUnorderedAccessView *)0x0;
  local_78.SrcBuffer = (FRHIShaderResourceView *)0x0;
  local_78.SrcByteAddressBuffer = (FRHIShaderResourceView *)0x0;
  local_78.Common.Size = param_4->Count;
  local_78.Common.SrcOffset = param_4->SrcOffset;
  local_78.Common.DstOffset = param_4->DstOffset;
  local_78.SrcStructuredBuffer4x = (param_3->SRV).Reference;
  local_78.Common.DstStructuredBuffer4x = (param_2->UAV).Reference;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar3 = (FShaderType *)FMemcpyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_a8,pFVar3,9);
  if (local_a8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    FName::ToString((FName *)this_00,&local_98);
    FMemcpyCS::GetStaticType();
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemcpyCS::GetStaticType();
  local_88.ShaderContent = (FMemcpyCS *)local_a8.ShaderContent;
  local_88.ShaderMap = local_a8.ShaderMap;
  pTVar4 = FComputeShaderUtils::GetGroupCountWrapped(&local_28,param_4->Count,0x40);
  local_b8._0_8_ = *(undefined8 *)&pTVar4->field0_0x0;
  local_b8._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  FComputeShaderUtils::Dispatch<FMemcpyCS>
            ((FRHIComputeCommandList *)param_1,&local_88,&local_78,
             (TIntVector3<int> *)&local_b8._s_0);
  if (!param_5) {
    FRHIComputeCommandList::EndUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
  }
  return;
}

// MemcpyResource<FRWByteAddressBuffer> @ 145e7dac0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemcpyResource<FRWByteAddressBuffer>
          (FRHICommandList *param_1,FRWByteAddressBuffer *param_2,FRWByteAddressBuffer *param_3,
          FMemcpyResourceParams *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderMap *this;
  FShaderType *pFVar3;
  FName this_00;
  TIntVector3<int> *pTVar4;
  undefined1 local_res10 [8];
  TIntVector3<int>_u_0 local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  FString local_98;
  TShaderRefBase<FMemcpyCS,FShaderMapPointerTable> local_88;
  FParameters local_78;
  TIntVector3<int> local_28;
  
  if (!param_5) {
    FRHIComputeCommandList::BeginUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
  }
  local_78.Common.Size = param_4->Count;
  local_78.Common.SrcOffset = param_4->SrcOffset;
  local_78.Common.DstOffset = param_4->DstOffset;
  local_78.SrcByteAddressBuffer = (FRHIShaderResourceView *)param_3->_padding_;
  local_78.Common.DstByteAddressBuffer = (param_2->UAV).Reference;
  local_78.Common.DstBuffer = (FRHIUnorderedAccessView *)0x0;
  local_78.Common.DstStructuredBuffer4x = (FRHIUnorderedAccessView *)0x0;
  local_78.SrcBuffer = (FRHIShaderResourceView *)0x0;
  local_78.SrcStructuredBuffer4x = (FRHIShaderResourceView *)0x0;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar3 = (FShaderType *)FMemcpyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_a8,pFVar3,10);
  if (local_a8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    FName::ToString((FName *)this_00,&local_98);
    FMemcpyCS::GetStaticType();
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemcpyCS::GetStaticType();
  local_88.ShaderContent = (FMemcpyCS *)local_a8.ShaderContent;
  local_88.ShaderMap = local_a8.ShaderMap;
  pTVar4 = FComputeShaderUtils::GetGroupCountWrapped(&local_28,param_4->Count >> 2,0x40);
  local_b8._0_8_ = *(undefined8 *)&pTVar4->field0_0x0;
  local_b8._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  FComputeShaderUtils::Dispatch<FMemcpyCS>
            ((FRHIComputeCommandList *)param_1,&local_88,&local_78,
             (TIntVector3<int> *)&local_b8._s_0);
  if (!param_5) {
    FRHIComputeCommandList::EndUAVOverlap
              ((FRHIComputeCommandList *)param_1,(param_2->UAV).Reference);
  }
  return;
}

// MemsetResource<FRWBufferStructured> @ 145e7dc90

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemsetResource<FRWBufferStructured>
          (FRHICommandList *param_1,FRWBufferStructured *param_2,FMemsetResourceParams *param_3)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderMap *this;
  FShaderType *pFVar3;
  FName this_00;
  undefined1 local_res10 [8];
  TIntVector3<int>_u_0 local_78;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  TShaderRefBase<FMemsetBufferCS,FShaderMapPointerTable> local_48;
  FParameters local_38;
  
  local_38.DstBuffer = (FRHIUnorderedAccessView *)0x0;
  local_38.DstByteAddressBuffer = (FRHIUnorderedAccessView *)0x0;
  local_38.Value = param_3->Value;
  local_38.Size = param_3->Count;
  local_38.DstOffset = param_3->DstOffset;
  local_38.DstStructuredBuffer4x = (param_2->UAV).Reference;
  GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar3 = (FShaderType *)FMemsetBufferCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_68,pFVar3,9);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    FName::ToString((FName *)this_00,&local_58);
    FMemsetBufferCS::GetStaticType();
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemsetBufferCS::GetStaticType();
  local_48.ShaderContent = (FMemsetBufferCS *)local_68.ShaderContent;
  local_48.ShaderMap = local_68.ShaderMap;
  local_78._s_0.X = param_3->Count + 0x3f >> 6;
  local_78._s_0.Y = 1;
  local_78._s_0.Z = 1;
  FComputeShaderUtils::Dispatch<FMemsetBufferCS>
            ((FRHIComputeCommandList *)param_1,&local_48,&local_38,
             (TIntVector3<int> *)&local_78._s_0);
  return;
}

// MemsetResource<FRWByteAddressBuffer> @ 145e7de10

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemsetResource<FRWByteAddressBuffer>
          (FRHICommandList *param_1,FRWByteAddressBuffer *param_2,FMemsetResourceParams *param_3)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderMap *this;
  FShaderType *pFVar3;
  FName this_00;
  undefined1 local_res10 [8];
  TIntVector3<int>_u_0 local_78;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  FString local_58;
  TShaderRefBase<FMemsetBufferCS,FShaderMapPointerTable> local_48;
  FParameters local_38;
  
  local_38.Value = param_3->Value;
  local_38.DstBuffer = (FRHIUnorderedAccessView *)0x0;
  local_38.DstStructuredBuffer4x = (FRHIUnorderedAccessView *)0x0;
  local_38.Size = param_3->Count;
  local_38.DstOffset = param_3->DstOffset;
  local_38.DstByteAddressBuffer = (param_2->UAV).Reference;
  GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar3 = (FShaderType *)FMemsetBufferCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_68,pFVar3,10);
  if (local_68.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    FName::ToString((FName *)this_00,&local_58);
    FMemsetBufferCS::GetStaticType();
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemsetBufferCS::GetStaticType();
  local_48.ShaderContent = (FMemsetBufferCS *)local_68.ShaderContent;
  local_48.ShaderMap = local_68.ShaderMap;
  local_78._s_0.X = (param_3->Count >> 2) + 0x3f >> 6;
  local_78._s_0.Y = 1;
  local_78._s_0.Z = 1;
  FComputeShaderUtils::Dispatch<FMemsetBufferCS>
            ((FRHIComputeCommandList *)param_1,&local_48,&local_38,
             (TIntVector3<int> *)&local_78._s_0);
  return;
}

// ResizeResourceIfNeeded<FRWBufferStructured> @ 145e7e430

/* WARNING: Removing unreachable block (ram,0x000145e7e62f) */
/* WARNING: Removing unreachable block (ram,0x000145e7e63c) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
ResizeResourceIfNeeded<FRWBufferStructured>
          (FRHICommandList *param_1,FRWBufferStructured *param_2,uint param_3,wchar_t *param_4)

{
  code *pcVar1;
  TRefCountPtr<FRHIUnorderedAccessView> this;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FRHITransitionInfo_const_,int> local_c8;
  FMemcpyResourceParams local_b8;
  FRWBufferStructured local_a8;
  FRHITransitionInfo local_88;
  FRHITransitionInfo local_58;
  TArrayView<FRHITransitionInfo_const_,int> local_28;
  
  if (((param_3 & 0xf) != 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(NumBytes & (BytesPerElement - 1)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x4a3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (param_2->NumBytes == 0) {
    FRWBufferStructured::Initialize
              (param_2,(FRHICommandListBase *)param_1,param_4,0x10,param_3 >> 4,None,false,false,
               UAVMask);
    bVar2 = true;
  }
  else if (param_3 == param_2->NumBytes) {
    bVar2 = false;
  }
  else {
    local_a8.SRV.Reference = (FRHIShaderResourceView *)0x0;
    local_a8.Buffer.Reference = (FRHIBuffer *)0x0;
    local_a8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    local_a8.NumBytes = 0;
    FRWBufferStructured::Initialize
              (&local_a8,(FRHICommandListBase *)param_1,param_4,0x10,param_3 >> 4,None,false,false,
               UAVMask);
    local_88.field1_0x8 = (FRHITransitionInfo_u_8)(param_2->UAV).Reference;
    local_c8.ArrayNum = 1;
    local_c8.DataPtr = &local_88;
    local_88._padding_._0_4_ = 0xffffffff;
    local_88._padding_._4_2_ = 0xffff;
    local_88.Type = UAV;
    local_88.AccessBefore = None;
    local_88.AccessAfter = SRVCompute;
    local_88.Flags = None;
    local_88.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_c8,None);
    this.Reference = local_a8.UAV.Reference;
    local_c8.DataPtr = &local_58;
    local_58._padding_._4_2_ = 0xffff;
    local_c8.ArrayNum = 1;
    local_28.ArrayNum = 1;
    local_28._12_4_ = local_c8._12_4_;
    local_58._padding_._0_4_ = 0xffffffff;
    local_58.field1_0x8.UAV = local_a8.UAV.Reference;
    local_58.Type = UAV;
    local_58.AccessBefore = None;
    local_58.AccessAfter = UAVCompute;
    local_58.Flags = None;
    local_58.CommitInfo.bIsSet = false;
    local_28.DataPtr = local_c8.DataPtr;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_28,None);
    local_b8.SrcOffset = 0;
    local_b8.DstOffset = 0;
    local_b8.Count = param_2->NumBytes;
    if (param_3 < param_2->NumBytes) {
      local_b8.Count = param_3;
    }
    local_b8.Count = local_b8.Count >> 4;
    MemcpyResource<FRWBufferStructured>(param_1,&local_a8,param_2,&local_b8,false);
    FRWBufferStructured::operator=(param_2,&local_a8);
    if (local_a8.Buffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a8.Buffer.Reference);
    }
    if (this.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
    }
    if (local_a8.SRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a8.SRV.Reference);
    }
    bVar2 = true;
  }
  return bVar2;
}

// ResizeResourceIfNeeded<FRWByteAddressBuffer> @ 145e7e680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
ResizeResourceIfNeeded<FRWByteAddressBuffer>
          (FRHICommandList *param_1,FRWByteAddressBuffer *param_2,uint param_3,wchar_t *param_4)

{
  uint uVar1;
  code *pcVar2;
  TRefCountPtr<FRHIUnorderedAccessView> this;
  bool bVar3;
  undefined1 uVar4;
  FMemcpyResourceParams local_c8;
  FRWByteAddressBuffer local_b8;
  FRHITransitionInfo local_98;
  undefined4 local_68;
  undefined2 local_64;
  FRHIUnorderedAccessView *local_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_40;
  FRHITransitionInfo *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TArrayView<FRHITransitionInfo_const_,int> local_28;
  
  if ((param_3 & 0xf) != 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("(NumBytes & 15) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                       ,0x4c8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar1 = (uint)param_2->_padding_;
  if (uVar1 == 0) {
    FRWByteAddressBuffer::Initialize(param_2,(FRHICommandListBase *)param_1,param_4,param_3,None);
    bVar3 = true;
  }
  else if (param_3 == uVar1) {
    bVar3 = false;
  }
  else {
    local_b8._padding_._0_4_ = 0;
    local_b8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    FRWByteAddressBuffer::Initialize(&local_b8,(FRHICommandListBase *)param_1,param_4,param_3,None);
    this.Reference = local_b8.UAV.Reference;
    local_98.field1_0x8 = (FRHITransitionInfo_u_8)(param_2->UAV).Reference;
    local_38 = &local_98;
    local_98._padding_._4_2_ = 0xffff;
    local_64 = 0xffff;
    uStack_30 = 2;
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = 2;
    local_98._padding_._0_4_ = 0xffffffff;
    local_98.Type = UAV;
    local_98.AccessBefore = None;
    local_98.AccessAfter = SRVCompute;
    local_98.Flags = None;
    local_98.CommitInfo.bIsSet = false;
    local_68 = 0xffffffff;
    local_60 = local_b8.UAV.Reference;
    local_58 = 3;
    local_54 = 0;
    local_50 = 0x400;
    local_4c = 0;
    local_40 = 0;
    local_28.DataPtr = local_38;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_28,None);
    local_c8.Count = (uint)param_2->_padding_;
    local_c8.SrcOffset = 0;
    local_c8.DstOffset = 0;
    if (param_3 < local_c8.Count) {
      local_c8.Count = param_3;
    }
    local_c8.Count = local_c8.Count >> 2;
    MemcpyResource<FRWByteAddressBuffer>(param_1,&local_b8,param_2,&local_c8,false);
    FRWByteAddressBuffer::operator=(param_2,&local_b8);
    if (this.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
    }
    if ((FRHIResource *)local_b8._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8._padding_);
    }
    if ((FRHIResource *)local_b8._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8._padding_);
    }
    bVar3 = true;
  }
  return bVar3;
}

// StableRemoveIf<TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_>_&,`FShaderPipelineCacheTask::BeginPrecompilingPipelineCache'::__l36::<lambda_1>_> @ 145e7fb30

int __cdecl
Algo::
StableRemoveIf<TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_>_&,_FShaderPipelineCacheTask::BeginPrecompilingPipelineCache_::__l36::<lambda_1>_>
          (TArray<FPipelineCachePSOHeader,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> *param_2)

{
  undefined1 *_Dst;
  FPipelineCachePSOHeader *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  ForElementType<FSetElementId> *pFVar9;
  FPipelineCachePSOHeader *pFVar10;
  FPipelineCachePSOHeader *pFVar11;
  FPipelineCachePSOHeader *pFVar12;
  FPipelineCachePSOHeader *pFVar13;
  
  pFVar1 = (FPipelineCachePSOHeader *)(param_1->AllocatorInstance).Data;
  pFVar13 = pFVar1 + param_1->ArrayNum;
  pFVar10 = pFVar1;
  do {
    pFVar12 = pFVar10;
    if (pFVar12 == pFVar13) goto LAB_145e7fcb0;
    pFVar10 = pFVar12 + 1;
    bVar8 = `FShaderPipelineCacheTask::BeginPrecompilingPipelineCache'::__l36::<lambda_1>::
            operator()(param_2,pFVar12);
  } while (!bVar8);
  if (pFVar10 != pFVar13) {
    pFVar9 = &pFVar12[1].Shaders.Hash.SecondaryData;
    pFVar11 = pFVar12;
    do {
      bVar8 = `FShaderPipelineCacheTask::BeginPrecompilingPipelineCache'::__l36::<lambda_1>::
              operator()(param_2,pFVar10);
      pFVar12 = pFVar11;
      if (!bVar8) {
        pFVar12 = pFVar11 + 1;
        if (pFVar11 != pFVar10) {
          pvVar2 = *(void **)&(pFVar11->Shaders).Elements;
          if (pvVar2 != (void *)0x0) {
            FMemory::Free(pvVar2);
          }
          _Dst = &(pFVar11->Shaders).Elements.field_0x10;
          *(undefined8 *)&(pFVar11->Shaders).Elements = *(undefined8 *)&(pFVar10->Shaders).Elements;
          *(undefined8 *)&(pFVar10->Shaders).Elements = 0;
          *(undefined4 *)&(pFVar11->Shaders).Elements.field_0x8 = *(undefined4 *)(pFVar9 + -7);
          *(undefined4 *)&(pFVar11->Shaders).Elements.field_0xc =
               *(undefined4 *)&pFVar9[-7].field_0x4;
          pFVar9[-7] = (ForElementType<FSetElementId>)0x0;
          if ((ForElementType<FSetElementId> *)_Dst != pFVar9 + -6) {
            if (pFVar9[-4] == (ForElementType<FSetElementId>)0x0) {
              memmove(_Dst,pFVar9 + -6,0x10);
            }
            pvVar2 = *(void **)&(pFVar11->Shaders).Elements.field_0x20;
            if (pvVar2 != (void *)0x0) {
              FMemory::Free(pvVar2);
            }
            *(ForElementType<FSetElementId> *)&(pFVar11->Shaders).Elements.field_0x20 = pFVar9[-4];
            pFVar9[-4] = (ForElementType<FSetElementId>)0x0;
            *(undefined4 *)&(pFVar11->Shaders).Elements.field_0x28 = *(undefined4 *)(pFVar9 + -3);
            *(undefined4 *)&(pFVar11->Shaders).Elements.field_0x2c =
                 *(undefined4 *)&pFVar9[-3].field_0x4;
            pFVar9[-3] = (ForElementType<FSetElementId>)0x0;
          }
          *(undefined4 *)&(pFVar11->Shaders).Elements.field_0x30 = *(undefined4 *)(pFVar9 + -2);
          *(undefined4 *)&(pFVar11->Shaders).Elements.field_0x34 =
               *(undefined4 *)&pFVar9[-2].field_0x4;
          *(undefined4 *)(pFVar9 + -2) = 0xffffffff;
          *(undefined4 *)&pFVar9[-2].field_0x4 = 0;
          if (*pFVar9 == (ForElementType<FSetElementId>)0x0) {
            uVar5 = pFVar9[-1].field_0x1;
            uVar6 = pFVar9[-1].field_0x2;
            uVar7 = pFVar9[-1].field_0x3;
            (pFVar11->Shaders).Hash.InlineData[0] = pFVar9[-1].field_0x0;
            (pFVar11->Shaders).Hash.InlineData[1] = uVar5;
            (pFVar11->Shaders).Hash.InlineData[2] = uVar6;
            (pFVar11->Shaders).Hash.InlineData[3] = uVar7;
          }
          FVar3 = (pFVar11->Shaders).Hash.SecondaryData;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FVar3);
          }
          (pFVar11->Shaders).Hash.SecondaryData = *pFVar9;
          *pFVar9 = (ForElementType<FSetElementId>)0x0;
          (pFVar11->Shaders).HashSize = *(int *)(pFVar9 + 1);
          *(undefined4 *)(pFVar9 + 1) = 0;
        }
        pFVar11->Hash = *(uint *)(pFVar9 + 2);
      }
      pFVar10 = pFVar10 + 1;
      pFVar9 = pFVar9 + 0xb;
      pFVar11 = pFVar12;
    } while (pFVar10 != pFVar13);
  }
LAB_145e7fcb0:
  pFVar4 = (param_2->LibraryName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return (int)(((longlong)pFVar12 - (longlong)pFVar1) / 0x58);
}

// StaticGetTypeLayoutDesc<FByteBufferShader> @ 145e7fd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<FByteBufferShader>(void)

{
  if ((DAT_1551957ff & 2) == 0) {
    DAT_1551957ff = DAT_1551957ff | 2;
    _DAT_1551957f0 = 0xe0;
    _DAT_1551957a0 = L"FByteBufferShader";
    _DAT_1551957b8 = Freeze::DefaultWriteMemoryImage;
    _DAT_1551957c0 = Freeze::DefaultUnfrozenCopy;
    _DAT_1551957c8 = Freeze::DefaultAppendHash;
    _DAT_1551957d0 = Freeze::DefaultGetTargetAlignment;
    _DAT_1551957d8 = Freeze::DefaultToString;
    _DAT_1551957b0 = FByteBufferShader::InternalDestroy;
    _DAT_1551957e0 = TGetDefaultObjectHelper<FByteBufferShader,0>::Do;
    FieldBuffer._0_8_ = u_BASE;
    _DAT_1551957f8 = 8;
    DAT_1551957fc = 0;
    _DAT_1551957f4 = 0xffffffff;
    FieldBuffer[0x2a] = '\x04';
    FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    DAT_1551957fd = DAT_1551957fd + '\x01';
    FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    FieldBuffer[0x10] = (uchar)DAT_1551957a8;
    FieldBuffer[0x11] = DAT_1551957a8._1_1_;
    FieldBuffer[0x12] = DAT_1551957a8._2_1_;
    FieldBuffer[0x13] = DAT_1551957a8._3_1_;
    FieldBuffer[0x14] = DAT_1551957a8._4_1_;
    FieldBuffer[0x15] = DAT_1551957a8._5_1_;
    FieldBuffer[0x16] = DAT_1551957a8._6_1_;
    FieldBuffer[0x17] = DAT_1551957a8._7_1_;
    DAT_1551957a8 = FieldBuffer;
    FieldBuffer[0x20] = '\0';
    FieldBuffer[0x21] = '\0';
    FieldBuffer[0x22] = '\0';
    FieldBuffer[0x23] = '\0';
    FieldBuffer[0x24] = '\x01';
    FieldBuffer[0x25] = '\0';
    FieldBuffer[0x26] = '\0';
    FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_1551957fe = DAT_1551957fe + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FByteBufferShader::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FByteBufferShader::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FByteBufferShader::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayoutDesc<FRDGByteBufferShader> @ 145e7fe50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<FRDGByteBufferShader>(void)

{
  if ((DAT_155195d47 & 2) == 0) {
    DAT_155195d47 = DAT_155195d47 | 2;
    _DAT_155195d38 = 0xe0;
    _DAT_155195ce8 = L"FRDGByteBufferShader";
    _DAT_155195d00 = Freeze::DefaultWriteMemoryImage;
    _DAT_155195d08 = Freeze::DefaultUnfrozenCopy;
    _DAT_155195d10 = Freeze::DefaultAppendHash;
    _DAT_155195d18 = Freeze::DefaultGetTargetAlignment;
    _DAT_155195d20 = Freeze::DefaultToString;
    _DAT_155195cf8 = FRDGByteBufferShader::InternalDestroy;
    _DAT_155195d28 = TGetDefaultObjectHelper<FRDGByteBufferShader,0>::Do;
    FieldBuffer._0_8_ = u_BASE;
    _DAT_155195d40 = 8;
    DAT_155195d44 = 0;
    _DAT_155195d3c = 0xffffffff;
    FieldBuffer[0x2a] = '\x04';
    FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    DAT_155195d45 = DAT_155195d45 + '\x01';
    FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    FieldBuffer[0x10] = (uchar)DAT_155195cf0;
    FieldBuffer[0x11] = DAT_155195cf0._1_1_;
    FieldBuffer[0x12] = DAT_155195cf0._2_1_;
    FieldBuffer[0x13] = DAT_155195cf0._3_1_;
    FieldBuffer[0x14] = DAT_155195cf0._4_1_;
    FieldBuffer[0x15] = DAT_155195cf0._5_1_;
    FieldBuffer[0x16] = DAT_155195cf0._6_1_;
    FieldBuffer[0x17] = DAT_155195cf0._7_1_;
    DAT_155195cf0 = FieldBuffer;
    FieldBuffer[0x20] = '\0';
    FieldBuffer[0x21] = '\0';
    FieldBuffer[0x22] = '\0';
    FieldBuffer[0x23] = '\0';
    FieldBuffer[0x24] = '\x01';
    FieldBuffer[0x25] = '\0';
    FieldBuffer[0x26] = '\0';
    FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)FieldBuffer._8_8_)->Interface != NonVirtual) {
      DAT_155195d46 = DAT_155195d46 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FRDGByteBufferShader::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FRDGByteBufferShader::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_FRDGByteBufferShader::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// UnsetShaderSRVs<FRHICommandList,FScatterCopyCS> @ 145e7ffa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderSRVs<FRHICommandList,FScatterCopyCS>
          (FRHICommandList *param_1,TShaderRefBase<FScatterCopyCS,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  FScatterCopyCS *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRHIBatchedShaderUnbinds *pFVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  undefined1 local_res20 [8];
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    pFVar9 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = param_2->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xbe,L"Can\'t use UnsetShaderSRVs() for root parameter buffer index.");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar10 = *(undefined1 **)&pFVar4->field_0x10;
    if (((ulonglong)puVar10 & 1) != 0) {
      puVar10 = &pFVar4->field_0x10 + ((longlong)puVar10 >> 0x18);
    }
    iVar3 = *(int *)&pFVar4->field_0x18;
    pbVar11 = puVar10 + 2;
    while( true ) {
      if (*(int *)&pFVar4->field_0x18 != iVar3) {
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pbVar11 + -2 == puVar10 + (longlong)iVar3 * 4) break;
      bVar2 = pbVar11[1];
      if ((bVar2 == 6) || (((bVar2 - 0xc & 0xfa) == 0 && (bVar2 != 0x10)))) {
        iVar8 = (pFVar9->Unbinds).ArrayNum;
        piVar1 = &(pFVar9->Unbinds).ArrayMax;
        bVar2 = *pbVar11;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)pFVar9,piVar1);
        }
        (pFVar9->Unbinds).ArrayNum = iVar8 + 1;
        pFVar5 = (pFVar9->Unbinds).AllocatorInstance.Data;
        *(ushort *)(pFVar5 + (longlong)iVar8 * 4) = (ushort)bVar2;
        pFVar5[(longlong)iVar8 * 4 + 2] = (FScriptContainerElement)0x0;
      }
      pbVar11 = pbVar11 + 4;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,param_3,pFVar9);
  }
  return;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_FRDGScatterUploader::EState>_> @ 145e800e0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_FRDGScatterUploader::EState>_>
          (_Atomic_padded<FRDGScatterUploader::EState> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_FRDGScatterUploader::EState>_> @ 145e800f0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_FRDGScatterUploader::EState>_>
          (_Atomic_padded<FRDGScatterUploader::EState> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FRHIShader_*>_> @ 145e80100

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FRHIShader_*>_>
          (_Atomic_padded<FRHIShader_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<char,enum_FRDGScatterUploader::EState> @ 145e80110

char __cdecl std::_Atomic_reinterpret_as<char,enum_FRDGScatterUploader::EState>(EState *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<__int64,FRHIShader_*> @ 145e80120

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FRHIShader_*>(FRHIShader **param_1)

{
  return (long64)*param_1;
}

// get<1,TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_&> @ 145e80130

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

TShaderRefBase<FShader,FShaderMapPointerTable> * __cdecl
get<1,TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_&>
          (TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_> *param_1)

{
  return (TShaderRefBase<FShader,FShaderMapPointerTable> *)&param_1->field_0x8;
}

// get<0,TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_&> @ 145e80140

FHashedName * __cdecl
get<0,TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_&>
          (TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_> *param_1)

{
  return (FHashedName *)param_1;
}

// TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_> @ 145e802e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBuffer>(FRDGBuilder_&,FRWBuffer_const_&,FRWBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_>::
TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWBuffer>_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBuffer>(FRDGBuilder_&,FRWBuffer_const_&,FRWBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents =
       (uchar *)&TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::`2'::<lambda_1>_>::
                 EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBuffer>(FRDGBuilder_&,FRWBuffer_const_&,FRWBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Async);
  *(undefined ***)this =
       &
       ___7__TRDGLambdaPass_VFEmptyShaderParameters__V<lambda_1>__1____AddCopyBufferPass_UFRWBuffer____YAXAEAVFRDGBuilder__AEBUFRWBuffer__1I_Z___6B_
  ;
  FRWBuffer::FRWBuffer((FRWBuffer *)((longlong)this + 0x180),(FRWBuffer *)param_3);
  FRWBuffer::FRWBuffer
            ((FRWBuffer *)((longlong)this + 0x1b0),(FRWBuffer *)&(param_3->NewBuffer)._padding_);
  *(undefined4 *)((longlong)this + 0x1e0) = *(undefined4 *)&param_3[1].OldBuffer.UAV.Reference;
  *(undefined ***)this =
       &
       ___7__TRDGEmptyLambdaPass_V<lambda_1>__1____AddCopyBufferPass_UFRWBuffer____YAXAEAVFRDGBuilder__AEBUFRWBuffer__1I_Z___6B_
  ;
  *(FEmptyShaderParameters **)((longlong)this + 0x1e8) =
       &TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::`2'::<lambda_1>_>::EmptyShaderParameters
  ;
  return this;
}

// TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_> @ 145e803e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBufferStructured>(FRDGBuilder_&,FRWBufferStructured_const_&,FRWBufferStructured_const_&,unsigned_int)_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_>::
TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWBufferStructured>_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBufferStructured>(FRDGBuilder_&,FRWBufferStructured_const_&,FRWBufferStructured_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents =
       (uchar *)&TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::`2'::<lambda_1>_>::
                 EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBufferStructured>(FRDGBuilder_&,FRWBufferStructured_const_&,FRWBufferStructured_const_&,unsigned_int)_::_2_::<lambda_1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Async);
  *(undefined ***)this =
       &
       ___7__TRDGLambdaPass_VFEmptyShaderParameters__V<lambda_1>__1____AddCopyBufferPass_UFRWBufferStructured____YAXAEAVFRDGBuilder__AEBUFRWBufferStructured__1I_Z___6B_
  ;
  FRWBufferStructured::FRWBufferStructured
            ((FRWBufferStructured *)((longlong)this + 0x180),(FRWBufferStructured *)param_3);
  FRWBufferStructured::FRWBufferStructured
            ((FRWBufferStructured *)((longlong)this + 0x1a0),
             (FRWBufferStructured *)&(param_3->OldBuffer).ClassName.Number);
  *(undefined4 *)((longlong)this + 0x1c0) = *(undefined4 *)&(param_3->NewBuffer).SRV.Reference;
  *(undefined ***)this =
       &
       ___7__TRDGEmptyLambdaPass_V<lambda_1>__1____AddCopyBufferPass_UFRWBufferStructured____YAXAEAVFRDGBuilder__AEBUFRWBufferStructured__1I_Z___6B_
  ;
  *(FEmptyShaderParameters **)((longlong)this + 0x1c8) =
       &TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::`2'::<lambda_1>_>::
        EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_> @ 145e804e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWByteAddressBuffer>(FRDGBuilder_&,FRWByteAddressBuffer_const_&,FRWByteAddressBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_>::
TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWByteAddressBuffer>_::__l2::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWByteAddressBuffer>(FRDGBuilder_&,FRWByteAddressBuffer_const_&,FRWByteAddressBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents =
       (uchar *)&TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::`2'::<lambda_1>_>::
                 EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWByteAddressBuffer>(FRDGBuilder_&,FRWByteAddressBuffer_const_&,FRWByteAddressBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Async);
  *(undefined ***)this =
       &
       ___7__TRDGLambdaPass_VFEmptyShaderParameters__V<lambda_1>__1____AddCopyBufferPass_UFRWByteAddressBuffer____YAXAEAVFRDGBuilder__AEBUFRWByteAddressBuffer__1I_Z___6B_
  ;
  FRWByteAddressBuffer::FRWByteAddressBuffer
            ((FRWByteAddressBuffer *)((longlong)this + 0x180),(FRWByteAddressBuffer *)param_3);
  FRWByteAddressBuffer::FRWByteAddressBuffer
            ((FRWByteAddressBuffer *)((longlong)this + 0x1a0),
             (FRWByteAddressBuffer *)&param_3->NewBuffer);
  *(uint *)((longlong)this + 0x1c0) = param_3->ElementSize;
  *(undefined ***)this =
       &
       ___7__TRDGEmptyLambdaPass_V<lambda_1>__1____AddCopyBufferPass_UFRWByteAddressBuffer____YAXAEAVFRDGBuilder__AEBUFRWByteAddressBuffer__1I_Z___6B_
  ;
  *(FEmptyShaderParameters **)((longlong)this + 0x1c8) =
       &TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::`2'::<lambda_1>_>::
        EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`ResizeResourceSOAIfNeeded'::__l45::<lambda_1>_> @ 145e805e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_bool___cdecl_ResizeResourceSOAIfNeeded(FRDGBuilder_&,FRWBufferStructured_&,FResizeResourceSOAParams_const_&,wchar_t_const_*)_::_45_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`ResizeResourceSOAIfNeeded'::__l45::<lambda_1>_>::
TRDGEmptyLambdaPass<_ResizeResourceSOAIfNeeded_::__l45::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_bool___cdecl_ResizeResourceSOAIfNeeded(FRDGBuilder_&,FRWBufferStructured_&,FResizeResourceSOAParams_const_&,wchar_t_const_*)_::_45_::<lambda_1>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_1>_>::EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_bool___cdecl_ResizeResourceSOAIfNeeded(FRDGBuilder_&,FRWBufferStructured_&,FResizeResourceSOAParams_const_&,wchar_t_const_*)_::_45_::<lambda_1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Async);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`ResizeResourceSOAIfNeeded'::`45'::<lambda_1>_>::
        _vftable_;
  FRWBufferStructured::FRWBufferStructured
            ((FRWBufferStructured *)((longlong)this + 0x180),&param_3->OldBuffer);
  FRWBufferStructured::FRWBufferStructured
            ((FRWBufferStructured *)((longlong)this + 0x1a0),&param_3->NewBuffer);
  *(uint *)((longlong)this + 0x1c0) = param_3->NumElements;
  *(uint *)((longlong)this + 0x1c4) = param_3->NumElementsOld;
  *(FResizeResourceSOAParams *)((longlong)this + 0x1c8) = param_3->Params;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`ResizeResourceSOAIfNeeded'::`45'::<lambda_1>_>::_vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x1d0) = &<lambda_1>_>::EmptyShaderParameters;
  return this;
}

// ~<lambda_1> @ 145e83c10

void __thiscall `AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(FRHIResource **)((longlong)this + 0x28) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x28));
  }
  if (*(FRHIResource **)((longlong)this + 0x20) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x20));
  }
  if (*(FRHIResource **)((longlong)this + 0x18) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x18));
  }
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if (*(FRHIResource **)this != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)this);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::__l2::<lambda_1>,1,0> @ 145e83d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FShaderMapResource::BeginCreateAllShaders_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::<lambda_1>,1,0> @ 145e83d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource_::__l7::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>,0,1> @ 145e83d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FRDGAsyncScatterUploadBuffer::End_::__l24::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::`24'::<lambda_1>,0,1>::_vftable_;
  return;
}

// operator<< @ 145e86150

FArchive * __cdecl operator<<(FArchive *param_1,FShaderParameter *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar2 = &param_2->BaseIndex;
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->NumBytes;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->BufferIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&param_2->BufferIndex);
  return param_1;
}

// operator<< @ 145e86280

FArchive * __cdecl operator<<(FArchive *param_1,FShaderPreprocessOutput *param_2)

{
  int *piVar1;
  
  operator<<(param_1,&param_2->bSucceeded);
  operator<<(param_1,&param_2->bIsSecondary);
  TArrayPrivateFriend::Serialize<FShaderCompilerError,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Errors);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PragmaDirectives);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    piVar1 = &(param_2->PreprocessedSource).DecompressedCharCount;
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    (param_2->PreprocessedSource).DecompressedCharCount = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_2->PreprocessedSource).DecompressedCharCount == 0) {
    TArrayPrivateFriend::Serialize<char,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<char,TSizedDefaultAllocator<32>_> *)param_2);
  }
  else {
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&(param_2->PreprocessedSource).SourceCompressed);
  }
  TArrayPrivateFriend::Serialize<FShaderDiagnosticData,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ShaderDiagnosticDatas);
  return param_1;
}

// operator<< @ 145e86360

FArchive * __cdecl operator<<(FArchive *param_1,FShaderResourceParameter *param_2)

{
  ushort *puVar1;
  uchar *puVar2;
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->BaseIndex);
    }
  }
  else {
    param_2->BaseIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->NumResources = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumResources,1);
  return param_1;
}

// operator<< @ 145e86410

FArchive * __cdecl operator<<(FArchive *param_1,FShaderSource *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->DecompressedCharCount,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->DecompressedCharCount);
    }
  }
  else {
    param_2->DecompressedCharCount = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (param_2->DecompressedCharCount != 0) {
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->SourceCompressed);
    return param_1;
  }
  TArrayPrivateFriend::Serialize<char,TSizedDefaultAllocator<32>_>(param_1,&param_2->Source);
  return param_1;
}

// operator<< @ 145e864b0

FArchive * __cdecl operator<<(FArchive *param_1,FShaderUniformBufferMemberParameter *param_2)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->bIsBound = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  return param_1;
}

// operator== @ 145e86500

bool __cdecl operator==(FStableShaderKeyAndValue *param_1,FStableShaderKeyAndValue *param_2)

{
  int iVar1;
  ForElementType<FName> FVar2;
  bool bVar3;
  ForElementType<FName> FVar4;
  ForElementType<FName> FVar5;
  
  iVar1 = (param_1->ClassNameAndObjectPath).ObjectClassAndPath.ArrayNum;
  if (iVar1 == (param_2->ClassNameAndObjectPath).ObjectClassAndPath.ArrayNum) {
    FVar2 = (param_2->ClassNameAndObjectPath).ObjectClassAndPath.AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FName>)param_2;
    if (FVar2 != (ForElementType<FName>)0x0) {
      FVar5 = FVar2;
    }
    FVar2 = (param_1->ClassNameAndObjectPath).ObjectClassAndPath.AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<FName>)param_1;
    if (FVar2 != (ForElementType<FName>)0x0) {
      FVar4 = FVar2;
    }
    bVar3 = CompareItems<FName,int>((FName *)FVar4,(FName *)FVar5,iVar1);
    if (((((bVar3) && (param_1->ShaderType == param_2->ShaderType)) &&
         (param_1->ShaderClass == param_2->ShaderClass)) &&
        (((param_1->MaterialDomain == param_2->MaterialDomain &&
          (param_1->FeatureLevel == param_2->FeatureLevel)) &&
         ((param_1->QualityLevel == param_2->QualityLevel &&
          ((param_1->TargetFrequency == param_2->TargetFrequency &&
           (param_1->TargetPlatform == param_2->TargetPlatform)))))))) &&
       ((param_1->VFType == param_2->VFType &&
        ((((param_1->PermutationId == param_2->PermutationId &&
           (*(longlong *)(param_1->PipelineHash).Hash == *(longlong *)(param_2->PipelineHash).Hash))
          && (*(longlong *)((param_1->PipelineHash).Hash + 8) ==
              *(longlong *)((param_2->PipelineHash).Hash + 8))) &&
         (*(int *)((param_1->PipelineHash).Hash + 0x10) ==
          *(int *)((param_2->PipelineHash).Hash + 0x10))))))) {
      return true;
    }
  }
  return false;
}

// operator() @ 145e86720

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  FRHITransitionInfo local_68;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_10;
  
  local_68._padding_._0_4_ = 0xffffffff;
  local_68.Type = UAV;
  local_68._padding_._4_2_ = 0xffff;
  local_34 = 0xffff;
  local_68.field1_0x8 = *(FRHITransitionInfo_u_8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x38);
  local_78.DataPtr = &local_68;
  local_78.ArrayNum = 2;
  local_68.AccessBefore = None;
  local_68.AccessAfter = SRVCompute;
  local_68.Flags = None;
  local_68.CommitInfo.bIsSet = false;
  local_38 = 0xffffffff;
  local_28 = 3;
  local_24 = 0;
  local_20 = 0x400;
  local_1c = 0;
  local_10 = 0;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_78,None);
  local_78.DataPtr._4_4_ = 0;
  local_78.ArrayNum = 0;
  local_78.DataPtr._0_4_ = *(uint *)((longlong)this + 0x18);
  if (*(uint *)((longlong)this + 0x48) < *(uint *)((longlong)this + 0x18)) {
    local_78.DataPtr._0_4_ = *(uint *)((longlong)this + 0x48);
  }
  local_78.DataPtr._0_4_ = (uint)local_78.DataPtr / *(uint *)((longlong)this + 0x60);
  MemcpyResource<FRWBuffer>
            (param_2,(FRWBuffer *)((longlong)this + 0x30),this,(FMemcpyResourceParams *)&local_78,
             false);
  return;
}

// operator() @ 145e86820

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  FRHITransitionInfo local_68;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_10;
  
  local_68._padding_._0_4_ = 0xffffffff;
  local_68.Type = UAV;
  local_68._padding_._4_2_ = 0xffff;
  local_34 = 0xffff;
  local_68.field1_0x8 = *(FRHITransitionInfo_u_8 *)((longlong)this + 8);
  local_30 = *(undefined8 *)((longlong)this + 0x28);
  local_78.DataPtr = &local_68;
  local_78.ArrayNum = 2;
  local_68.AccessBefore = None;
  local_68.AccessAfter = SRVCompute;
  local_68.Flags = None;
  local_68.CommitInfo.bIsSet = false;
  local_38 = 0xffffffff;
  local_28 = 3;
  local_24 = 0;
  local_20 = 0x400;
  local_1c = 0;
  local_10 = 0;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_78,None);
  local_78.DataPtr._4_4_ = 0;
  local_78.ArrayNum = 0;
  local_78.DataPtr._0_4_ = *(uint *)((longlong)this + 0x18);
  if (*(uint *)((longlong)this + 0x38) < *(uint *)((longlong)this + 0x18)) {
    local_78.DataPtr._0_4_ = *(uint *)((longlong)this + 0x38);
  }
  local_78.DataPtr._0_4_ = (uint)local_78.DataPtr / *(uint *)((longlong)this + 0x40);
  MemcpyResource<FRWBufferStructured>
            (param_2,(FRWBufferStructured *)((longlong)this + 0x20),this,
             (FMemcpyResourceParams *)&local_78,false);
  return;
}

// operator() @ 145e86920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  FRHITransitionInfo local_68;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_10;
  
  local_68._padding_._0_4_ = 0xffffffff;
  local_68.Type = UAV;
  local_68._padding_._4_2_ = 0xffff;
  local_34 = 0xffff;
  local_68.field1_0x8 = *(FRHITransitionInfo_u_8 *)((longlong)this + 0x18);
  local_30 = *(undefined8 *)((longlong)this + 0x38);
  local_78.DataPtr = &local_68;
  local_78.ArrayNum = 2;
  local_68.AccessBefore = None;
  local_68.AccessAfter = SRVCompute;
  local_68.Flags = None;
  local_68.CommitInfo.bIsSet = false;
  local_38 = 0xffffffff;
  local_28 = 3;
  local_24 = 0;
  local_20 = 0x400;
  local_1c = 0;
  local_10 = 0;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_78,None);
  local_78.DataPtr._4_4_ = 0;
  local_78.ArrayNum = 0;
  local_78.DataPtr._0_4_ = *(uint *)((longlong)this + 0x10);
  if (*(uint *)((longlong)this + 0x30) < *(uint *)((longlong)this + 0x10)) {
    local_78.DataPtr._0_4_ = *(uint *)((longlong)this + 0x30);
  }
  local_78.DataPtr._0_4_ = (uint)local_78.DataPtr / *(uint *)((longlong)this + 0x40);
  MemcpyResource<FRWByteAddressBuffer>
            (param_2,(FRWByteAddressBuffer *)((longlong)this + 0x20),this,
             (FMemcpyResourceParams *)&local_78,false);
  return;
}

// operator() @ 145e87130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`ScatterCopyResource'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  int iVar1;
  code *pcVar2;
  FParameters *pFVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  TIntVector3<int> *pTVar6;
  FShaderParametersMetadata *pFVar7;
  longlong *plVar8;
  TIntVector3<int>_u_0 local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar2 = *(code **)((longlong)this + 0x20);
  plVar8 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar8 = *(longlong **)((longlong)this + 0x48);
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  uVar4 = (*pcVar2)(uVar5);
  *(undefined4 *)(*(longlong *)this + 0x40) = uVar4;
  pTVar6 = FComputeShaderUtils::GetGroupCountWrapped
                     ((TIntVector3<int> *)&local_18._s_0,
                      *(int *)(*(longlong *)this + 0x40) * *(int *)((longlong)this + 0x1c),0x40);
  pFVar3 = *(FParameters **)this;
  uVar5 = *(undefined8 *)&pTVar6->field0_0x0;
  iVar1 = (pTVar6->field0_0x0)._s_0.Z;
  pFVar7 = FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
  local_18._0_8_ = uVar5;
  local_18._s_0.Z = iVar1;
  FComputeShaderUtils::Dispatch<FRDGScatterCopyCS>
            (param_2,(TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> *)
                     ((longlong)this + 8),pFVar7,pFVar3,(TIntVector3<int> *)&local_18._s_0);
  return;
}

// operator() @ 145e871f0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`SetAllShaderParametersAsBindless'::__l2::<lambda_1>::operator()
          (void *this,EUniformBufferBaseType param_1,ushort param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FBindlessResourceParameter local_res20;
  FShaderParameterReader local_28;
  FRHIShaderParameterResource local_18;
  
  switch(param_1) {
  case EUniformBufferBaseType_NumBits:
  case UBMT_SRV:
  case UBMT_UAV:
  case UBMT_SAMPLER:
  case UBMT_RDG_TEXTURE:
  case UBMT_RDG_TEXTURE_SRV:
  case UBMT_RDG_TEXTURE_NON_PIXEL_SRV:
  case UBMT_RDG_TEXTURE_UAV:
  case UBMT_RDG_BUFFER_SRV:
  case UBMT_RDG_BUFFER_UAV:
  case UBMT_RESOURCE_COLLECTION:
    local_res20._5_1_ = 0;
    if (*(longlong *)((ulonglong)param_2 + *(longlong *)((longlong)this + 8)) != 0) {
      local_28.Data = *(uchar **)((longlong)this + 8);
      local_28.DataSize = *(ulong64 *)((longlong)this + 0x10);
      local_res20.ByteOffset = param_2;
      local_res20.GlobalConstantOffset = param_2;
      local_res20.BaseType = param_1;
      ExtractShaderParameterResource<FShaderParameterBindings::FBindlessResourceParameter>
                (&local_18,&local_28,&local_res20);
      plVar1 = *(longlong **)this;
      lVar2 = *plVar1;
      plVar3 = *(longlong **)(lVar2 + 0xb0);
      if (plVar3 != plVar1) {
        if ((plVar3 != (longlong *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(longlong **)(lVar2 + 0xb0) = plVar1;
      }
      FRHIBatchedShaderParametersAllocator::
      Emplace<FRHIShaderParameterResource,FRHIShaderParameterResource_const_&>
                ((FRHIBatchedShaderParametersAllocator *)*plVar1,
                 &((FRHIBatchedShaderParametersAllocator *)*plVar1)->BindlessParameters,
                 (TArrayView<FRHIShaderParameterResource,int> *)(plVar1 + 7),&local_18);
    }
  }
  return;
}

// operator() @ 145e87c50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`ResizeResourceSOAIfNeeded'::__l45::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FRHITransitionInfo local_88;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_30;
  
  uVar3 = 0;
  local_98.ArrayNum = 2;
  local_88._padding_._0_4_ = 0xffffffff;
  local_88.Type = UAV;
  local_88._padding_._4_2_ = 0xffff;
  local_54 = 0xffff;
  local_88.field1_0x8 = *(FRHITransitionInfo_u_8 *)((longlong)this + 8);
  local_50 = *(undefined8 *)((longlong)this + 0x28);
  local_98.DataPtr = &local_88;
  local_88.AccessBefore = None;
  local_88.AccessAfter = SRVCompute;
  local_88.Flags = None;
  local_88.CommitInfo.bIsSet = false;
  local_58 = 0xffffffff;
  local_48 = 3;
  local_44 = 0;
  local_40 = 0x400;
  local_3c = 0;
  local_30 = 0;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_98,None);
  uVar6 = *(uint *)((longlong)this + 0x44) / *(uint *)((longlong)this + 0x4c);
  uVar1 = *(uint *)((longlong)this + 0x40) / *(uint *)((longlong)this + 0x4c);
  FRHIComputeCommandList::BeginUAVOverlap
            ((FRHIComputeCommandList *)param_2,*(FRHIUnorderedAccessView **)((longlong)this + 0x28))
  ;
  uVar2 = uVar6;
  if (uVar1 < uVar6) {
    uVar2 = uVar1;
  }
  local_98.DataPtr = (FRHITransitionInfo *)CONCAT44(local_98.DataPtr._4_4_,uVar2);
  if (*(int *)((longlong)this + 0x4c) != 0) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      local_98.DataPtr = (FRHITransitionInfo *)CONCAT44(iVar4,local_98.DataPtr._0_4_);
      local_98.ArrayNum = iVar5;
      MemcpyResource<FRWBufferStructured>
                (param_2,(FRWBufferStructured *)((longlong)this + 0x20),this,
                 (FMemcpyResourceParams *)&local_98,true);
      iVar5 = iVar5 + uVar1;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + uVar6;
    } while (uVar3 < *(uint *)((longlong)this + 0x4c));
  }
  FRHIComputeCommandList::EndUAVOverlap
            ((FRHIComputeCommandList *)param_2,*(FRHIUnorderedAccessView **)((longlong)this + 0x28))
  ;
  return;
}

// operator() @ 145e888b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_5>::operator()
          (<lambda_5> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FOutputDevice *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  FSHAHash *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  FDelegateAllocation local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [24];
  wchar_t local_98 [48];
  ulonglong local_38;
  
  pTVar5 = CVarEnableShaderMapTracking.Ref;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (pTVar5->ShadowedValue[0] == false) {
    if (2 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  else {
    FOutputDevice::Log(param_2,
                       L"FriendlyName,OwnerName,ShaderMapHash,VertexFactoryName,ShaderTypeName,ShaderPermutation,UncompressedSizeKb,Hash,UsedForRenderingRHIPtr"
                      );
    EnterCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
    iVar9 = GAllShaderMaps.ArrayNum;
    pFVar1 = GAllShaderMaps.AllocatorInstance.Data + (longlong)iVar9 * 8;
    FVar10 = GAllShaderMaps.AllocatorInstance;
    while( true ) {
      if (GAllShaderMaps.ArrayNum != iVar9) {
        `TCheckedPointerIterator<FShaderMapBase_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_108);
      }
      if (FVar10.Data == pFVar1) break;
      plVar2 = *(longlong **)FVar10.Data;
      local_98[0] = L'\0';
      local_98[1] = L'\0';
      local_98[2] = L'\0';
      local_98[3] = L'\0';
      local_98[4] = L'\0';
      local_98[5] = L'\0';
      local_98[6] = L'\0';
      local_98[7] = L'\0';
      local_98[0x28] = 0;
      plVar3 = (longlong *)plVar2[1];
      local_98[8] = L'\0';
      local_98[9] = L'\0';
      local_98[10] = L'\0';
      local_98[0xb] = L'\0';
      local_98[0xc] = L'\0';
      local_98[0xd] = L'\0';
      local_98[0xe] = L'\0';
      local_98[0xf] = L'\0';
      local_98[0x10] = L'\0';
      local_98[0x11] = L'\0';
      local_98[0x12] = L'\0';
      local_98[0x13] = L'\0';
      local_98[0x14] = L'\0';
      local_98[0x15] = L'\0';
      local_98[0x16] = L'\0';
      local_98[0x17] = L'\0';
      local_98[0x18] = L'\0';
      local_98[0x19] = L'\0';
      local_98[0x1a] = L'\0';
      local_98[0x1b] = L'\0';
      local_98[0x1c] = L'\0';
      local_98[0x1d] = L'\0';
      local_98[0x1e] = L'\0';
      local_98[0x1f] = L'\0';
      local_98[0x20] = L'\0';
      local_98[0x21] = L'\0';
      local_98[0x22] = L'\0';
      local_98[0x23] = L'\0';
      local_98[0x24] = L'\0';
      local_98[0x25] = L'\0';
      local_98[0x26] = L'\0';
      local_98[0x27] = L'\0';
      if (plVar3 != (longlong *)0x0) {
        this_00 = (FSHAHash *)(**(code **)(*plVar3 + 0x68))(plVar3,local_b0);
        FSHAHash::ToString(this_00,local_98,true);
      }
      local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_f8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_100,(FWriteAccessScope *)&local_d0);
      local_b8 = &local_f8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_f8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEB_W000II0PEAX_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy,`<lambda_5>::operator()'::`18'::<lambda_1>_>
                   ::_vftable_;
        puVar7[3] = param_2;
        puVar7[4] = local_98;
      }
      if (local_d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
      }
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_100);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_100,(FWriteAccessScope *)&local_e8);
      if ((local_f8.DelegateSize != 0) &&
         (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_f8,0,0,0x10);
        local_f8.DelegateSize = 0;
      }
      if (local_e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
      }
      if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_f8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
      FVar10.Data = FVar10.Data + 8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
  }
  return;
}

// operator() @ 145e88b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_6>::operator()
          (<lambda_6> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FOutputDevice *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198;
  undefined1 local_197 [7];
  FString local_190;
  FString local_180;
  uint local_170;
  void *local_168;
  undefined8 local_160;
  int local_158;
  int local_154;
  FName local_150;
  FOutputDevice *local_148;
  FScriptContainerElement *local_140;
  undefined1 *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined1 *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  void *local_d8 [2];
  FString local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  pTVar4 = CVarEnableShaderMapTracking.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_148 = param_2;
  bVar7 = IsInParallelGameThread();
  if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar4->ShadowedValue[0] == false) {
    if (2 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  else {
    FOutputDevice::Log(param_2,
                       L"ShaderMapName,OwnerName,NumShaders,NumPipelines,SizeKb,bUsedForRendering");
    EnterCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
    local_170 = GAllShaderMaps.ArrayNum;
    uVar12 = (ulonglong)(int)local_170;
    local_140 = GAllShaderMaps.AllocatorInstance.Data + uVar12 * 8;
    FVar17 = GAllShaderMaps.AllocatorInstance;
    while( true ) {
      pFVar5 = local_140;
      if (GAllShaderMaps.ArrayNum != (int)uVar12) {
        local_198 = 0;
        `TCheckedPointerIterator<FShaderMapBase_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_198);
      }
      if (FVar17.Data == pFVar5) break;
      plVar1 = *(longlong **)FVar17.Data;
      ::FString::FString(&local_180,L"Unknown");
      ::FString::FString(&local_190,L"Unknown");
      plVar2 = (longlong *)plVar1[1];
      iVar16 = (int)plVar1[6];
      if (plVar2 != (longlong *)0x0) {
        pFVar9 = (FString *)(**(code **)(*plVar2 + 0x28))(plVar2,local_d8);
        if (&local_180 != pFVar9) {
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          local_180.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
          (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_180.Data.ArrayNum = (pFVar9->Data).ArrayNum;
          local_180.Data.ArrayMax = (pFVar9->Data).ArrayMax;
          (pFVar9->Data).ArrayNum = 0;
          (pFVar9->Data).ArrayMax = 0;
        }
        if (local_d8[0] != (void *)0x0) {
          FMemory::Free(local_d8[0]);
        }
        local_150 = *(FName *)(plVar2 + 1);
        pFVar9 = ::FName::ToString(&local_150,local_c8);
        if (&local_190 != pFVar9) {
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
          local_190.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
          (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_190.Data.ArrayNum = (pFVar9->Data).ArrayNum;
          local_190.Data.ArrayMax = (pFVar9->Data).ArrayMax;
          (pFVar9->Data).ArrayNum = 0;
          (pFVar9->Data).ArrayMax = 0;
        }
        if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
        }
        iVar8 = (**(code **)(*plVar2 + 0x70))(plVar2);
        iVar16 = iVar16 + iVar8;
      }
      iVar8 = 0;
      uVar15 = 0;
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_168 = (void *)0x0;
      local_160 = 0;
      if (plVar1[5] != 0) {
        (**(code **)(*plVar1 + 8))(plVar1,local_98);
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_168);
        iVar8 = (int)local_98._8_8_;
      }
      uVar14 = local_70;
      if (iVar16 == 0) {
        uStack_12c = 1;
        local_118 = 0;
        uStack_11c = local_118;
        if (local_70 != 0) {
          puVar13 = (uint *)(local_98 + 0x10);
          if (local_78 != (uint *)0x0) {
            puVar13 = local_78;
          }
          uVar18 = *puVar13;
          uVar15 = 0;
          local_118 = 0;
          while (uVar18 == 0) {
            lVar11 = (longlong)(int)uVar15;
            local_118 = local_118 + 0x20;
            uVar15 = uVar15 + 1;
            uStack_11c = local_70;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
            goto LAB_145e88e8f;
            uVar18 = puVar13[lVar11 + 1];
          }
          uStack_12c = -uVar18 & uVar18;
          uVar12 = (ulonglong)uStack_12c * 2 + 1;
          lVar11 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_158 = (int)lVar11;
          uStack_11c = (local_118 - 1) + local_158;
          if ((int)local_70 < (int)uStack_11c) {
            uStack_11c = local_70;
          }
        }
LAB_145e88e8f:
        iStack_110 = iVar8 - local_64;
        local_138 = local_98;
        local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        TStack_100._padding_ = CONCAT44(uStack_12c,uVar15);
        uStack_120 = 0xffffffff;
        uVar18 = local_70 & 0xffffffe0;
        TStack_100.CurrentBitIndex = uStack_11c;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        uStack_114 = local_9c;
        TStack_100._28_4_ = local_9c;
        TStack_100.BaseBitIndex = local_118;
        uStack_e0 = CONCAT44(uStack_10c,iStack_110);
        iVar16 = (int)local_70 >> 5;
        bVar10 = (byte)local_70;
        uStack_130 = uVar15;
        local_108 = local_138;
        TStack_100.Array = local_128;
        if (((int)local_70 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar14 != local_70) {
          puVar13 = (uint *)(local_98 + 0x10);
          if (local_78 != (uint *)0x0) {
            puVar13 = local_78;
          }
          uVar15 = -1 << (bVar10 & 0x1f) & puVar13[iVar16];
          while (uVar15 == 0) {
            lVar11 = (longlong)iVar16;
            uVar18 = uVar18 + 0x20;
            iVar16 = iVar16 + 1;
            uVar14 = local_70;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_145e88f90;
            uVar15 = puVar13[lVar11 + 1];
          }
          uVar12 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_154 = (int)lVar11;
          uVar14 = local_154 + -1 + uVar18;
          if ((int)local_70 < (int)uVar14) {
            uVar14 = local_70;
          }
        }
LAB_145e88f90:
        while( true ) {
          puVar6 = local_108;
          if (*(int *)(local_108 + 8) - *(int *)(local_108 + 0x34) != (int)uStack_e0) {
            local_197[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_197);
          }
          if (((TStack_100.CurrentBitIndex == uVar14) &&
              (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
             (puVar6 == local_98)) break;
          TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
        }
      }
      FOutputDevice::LogfImpl(local_148,L"%s,%s,%d,%d,%.3f,%s");
      if (local_168 != (void *)0x0) {
        FMemory::Free(local_168);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      FVar17.Data = FVar17.Data + 8;
      uVar12 = (ulonglong)local_170;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{32}' @ 145e89200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:protected: virtual void * __ptr64 __cdecl FShaderMapResource::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FShaderMapResource::_vector_deleting_destructor__adjustor_32__
          (FShaderMapResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FShaderMapResource *)&this[-1].RayTracingLibraryIndices.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 145e89210

/* [thunk]:public: virtual void * __ptr64 __cdecl FShaderMapResource_InlineCode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FShaderMapResource_InlineCode::_vector_deleting_destructor__adjustor_32__
          (FShaderMapResource_InlineCode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FShaderMapResource_InlineCode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145e89220

void * __thiscall
UE::SharedBuffer::Private::TBufferOwnerTArray<unsigned_char,TSizedDefaultAllocator<64>_>::
_scalar_deleting_destructor_
          (TBufferOwnerTArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89270

void * __thiscall
TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::_scalar_deleting_destructor_
          (TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *this,uint param_1)

{
  ~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e892b0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddCommandListSetupTask<`FRDGScatterUploadBuilder::Execute'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 145e89320

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddCommandListSetupTask<`FRDGScatterUploadBuilder::Execute'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e893a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e893e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::`24'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89420

void * __thiscall
TMemoryHasher<FXxHash64Builder,FXxHash64>::_scalar_deleting_destructor_
          (TMemoryHasher<FXxHash64Builder,FXxHash64> *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x300,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89460

void * __thiscall
TMemoryWriterBase<TSizedDefaultAllocator<64>_>::_scalar_deleting_destructor_
          (TMemoryWriterBase<TSizedDefaultAllocator<64>_> *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e894a0

void * __thiscall
FRDGAllocator::TObject<TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FRWBuffer::~FRWBuffer((FRWBuffer *)((longlong)this + 0x1b8));
  FRWBuffer::~FRWBuffer((FRWBuffer *)((longlong)this + 0x188));
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89530

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x1a8));
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x188));
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e895c0

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  `AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x188));
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89630

void * __thiscall
FRDGAllocator::TObject<TRDGEmptyLambdaPass<`ResizeResourceSOAIfNeeded'::__l45::<lambda_1>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x1a8));
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x188));
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e896c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FRDGByteBufferShader::FParameters>::_scalar_deleting_destructor_
          (TObject<FRDGByteBufferShader::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e896f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FRDGMemcpyCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FRDGMemcpyCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FRDGScatterCopyCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FRDGScatterCopyCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FRDGScatterUploadBuilder>::_scalar_deleting_destructor_
          (TObject<FRDGScatterUploadBuilder> *this,uint param_1)

{
  FPass *pFVar1;
  
  DestructItems<FRDGScatterUploadBuilder::FPass,int>
            ((this->Alloc).Passes.AllocatorInstance.Data,(this->Alloc).Passes.ArrayNum);
  pFVar1 = (this->Alloc).Passes.AllocatorInstance.Data;
  if (pFVar1 != (FPass *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e897a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FRDGScatterUploader>::_scalar_deleting_destructor_
          (TObject<FRDGScatterUploader> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e897d0

void * __thiscall
TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FRWBuffer::~FRWBuffer((FRWBuffer *)((longlong)this + 0x1b0));
  FRWBuffer::~FRWBuffer((FRWBuffer *)((longlong)this + 0x180));
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
    ::operator_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89860

void * __thiscall
TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x1a0));
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x180));
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
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e898f0

void * __thiscall
TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  `AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x180));
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
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89960

void * __thiscall
TRDGEmptyLambdaPass<`ResizeResourceSOAIfNeeded'::__l45::<lambda_1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x1a0));
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x180));
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
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e899f0

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FRWBuffer::~FRWBuffer((FRWBuffer *)((longlong)this + 0x1b0));
  FRWBuffer::~FRWBuffer((FRWBuffer *)((longlong)this + 0x180));
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
    ::operator_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89a80

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x1a0));
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x180));
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
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89b10

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x180));
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
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89b80

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`ResizeResourceSOAIfNeeded'::__l45::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x1a0));
  FRWBufferStructured::~FRWBufferStructured((FRWBufferStructured *)((longlong)this + 0x180));
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
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89c10

void * __thiscall
TRDGLambdaPass<FRDGScatterCopyCS::FParameters,`ScatterCopyResource'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x1a0) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x1b0);
    if (*(longlong **)((longlong)this + 0x1c8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x1c8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
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
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89ca0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FRDGMemcpyCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89d00

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89d60

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FRDGScatterCopyCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x1a0) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x1b0);
    if (*(longlong **)((longlong)this + 0x1c8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x1c8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
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
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89df0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FRDGScatterCopyCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89e50

void * __thiscall
FGlobalBoundShaderStateResource::_scalar_deleting_destructor_
          (FGlobalBoundShaderStateResource *this,uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FGlobalBoundShaderStateResource__6B_;
  lVar1 = (this->GlobalListLink)._padding_;
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 8) = (this->GlobalListLink)._padding_;
  }
  plVar2 = (longlong *)(this->GlobalListLink)._padding_;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (this->GlobalListLink)._padding_;
  }
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  this_00 = (FRHIResource *)(this->BoundShaderState).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89ee0

void * __thiscall FMemoryWriter64::_scalar_deleting_destructor_(FMemoryWriter64 *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89f20

void * __thiscall
FShaderCacheLoadContext::_scalar_deleting_destructor_(FShaderCacheLoadContext *this,uint param_1)

{
  FMemoryReaderView *pFVar1;
  
  pFVar1 = (this->Reader).Ptr;
  if (pFVar1 != (FMemoryReaderView *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  DestructItems<FCompressedBuffer,int>((FCompressedBuffer *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FCompositeBuffer,int>((FCompositeBuffer *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e89fb0

void * __thiscall
FShaderCacheSaveContext::_scalar_deleting_destructor_(FShaderCacheSaveContext *this,uint param_1)

{
  FMemoryWriter64 *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Writer).Ptr;
  if (pFVar1 != (FMemoryWriter64 *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->ShaderObjectRawData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCompressedBuffer,int>((FCompressedBuffer *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FCompositeBuffer,int>((FCompositeBuffer *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a050

void * __thiscall
FShaderCacheSerializeContext::_scalar_deleting_destructor_
          (FShaderCacheSerializeContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FCompressedBuffer,int>
            ((FCompressedBuffer *)(this->OwnedShaderSymbols).AllocatorInstance.Data,
             (this->OwnedShaderSymbols).ArrayNum);
  pFVar1 = (this->OwnedShaderSymbols).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCompositeBuffer,int>
            ((FCompositeBuffer *)(this->OwnedShaderCode).AllocatorInstance.Data,
             (this->OwnedShaderCode).ArrayNum);
  pFVar1 = (this->OwnedShaderCode).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&(this->ShaderObjectData).Owner);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a0d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall FShaderMapBase::_scalar_deleting_destructor_(FShaderMapBase *this,uint param_1)

{
  ~FShaderMapBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a110

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FShaderMapResource::_scalar_deleting_destructor_(FShaderMapResource *this,uint param_1)

{
  ~FShaderMapResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a150

void * __thiscall
FShaderMapResourceCode::_scalar_deleting_destructor_(FShaderMapResourceCode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FShaderMapResourceCode__6B_;
  RemoveResourceStats(this);
  DestructItems<FShaderCodeResource,int>
            ((FShaderCodeResource *)(this->ShaderCodeResources).AllocatorInstance.Data,
             (this->ShaderCodeResources).ArrayNum);
  pFVar1 = (this->ShaderCodeResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FShaderMapResource_InlineCode::_scalar_deleting_destructor_
          (FShaderMapResource_InlineCode *this,uint param_1)

{
  longlong *plVar1;
  FShaderMapResourceCode *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Code).Reference;
  if (pFVar2 != (FShaderMapResourceCode *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FShaderMapResource::~FShaderMapResource((FShaderMapResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a270

void * __thiscall
FShaderParameterParser::_scalar_deleting_destructor_(FShaderParameterParser *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ParsedParameters).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FShaderParameterParser__6B_;
  pvVar1 = *(void **)&(this->ParsedParameters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParsedParameters);
  pFVar2 = (this->OriginalParsedShader).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a2f0

void * __thiscall
FShaderParametersMetadata::_scalar_deleting_destructor_
          (FShaderParametersMetadata *this,uint param_1)

{
  ~FShaderParametersMetadata(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a330

void * __thiscall
FShaderPipelineCache::_scalar_deleting_destructor_(FShaderPipelineCache *this,uint param_1)

{
  ~FShaderPipelineCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a370

void * __thiscall
FShaderPipelineCacheArchive::_scalar_deleting_destructor_
          (FShaderPipelineCacheArchive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FShaderPipelineCacheArchive__6B_;
  DestructItems<TFunction<bool___cdecl(double)>,int>
            ((TFunction<bool___cdecl(double)> *)
             (this->ExternalReadDependencies).AllocatorInstance.Data,
             (this->ExternalReadDependencies).ArrayNum);
  pFVar1 = (this->ExternalReadDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e8a3e0

void * __thiscall
FTickableObjectRenderThread::_scalar_deleting_destructor_
          (FTickableObjectRenderThread *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTickableObjectRenderThread__6B_;
  Unregister(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// AddNoteToDisplayShaderParameterMemberOnCppSide @ 145e8a930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
AddNoteToDisplayShaderParameterMemberOnCppSide
          (FShaderCompilerInput *param_1,FParsedShaderParameter *param_2,
          FShaderCompilerOutput *param_3)

{
  int *piVar1;
  EUniformBufferBaseType EVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  FShaderParametersMetadata *pFVar6;
  FShaderParametersMetadata *pFVar7;
  char *_Str;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  ForAnyElementType _Src;
  FShaderCompilerOutput *pFVar10;
  bool bVar11;
  int iVar12;
  size_t sVar13;
  ulonglong uVar14;
  FMember *pFVar15;
  FScriptContainerElement *this;
  uint uVar16;
  longlong lVar17;
  FMember *pFVar18;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258 [4];
  int local_254;
  FString local_250;
  FShaderParametersMetadata *local_240;
  FMember *local_238;
  FString local_230;
  uint local_220;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FParsedShaderParameter *local_198;
  FShaderCompilerInput *local_190;
  FShaderCompilerOutput *local_188;
  FString local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar3 = (ushort)param_2->ConstantBufferOffset;
  local_240 = (FShaderParametersMetadata *)0x0;
  local_238 = (FMember *)0x0;
  pFVar6 = param_1->RootParametersStructure;
  local_254 = 0;
  local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.Data.ArrayNum = 0;
  local_250.Data.ArrayMax = 0;
  local_198 = param_2;
  local_190 = param_1;
  local_188 = param_3;
  if ((pFVar6->Size <= (uint)uVar3) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("MemberOffset < GetSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                          ,0x43a,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_220 = (pFVar6->Members).ArrayNum;
  uVar14 = (ulonglong)(int)local_220;
  pFVar15 = (FMember *)(pFVar6->Members).AllocatorInstance.Data;
  pFVar18 = pFVar15 + uVar14;
  do {
    if ((pFVar6->Members).ArrayNum != (int)uVar14) {
      local_258[0] = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_258);
    }
    if (pFVar15 == pFVar18) {
      bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                          ,0x47f,L"Looks like this offset is invalid.");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      goto LAB_145e8ac7a;
    }
    EVar2 = pFVar15->BaseType;
    uVar16 = pFVar15->NumElements;
    if (EVar2 == UBMT_NESTED_STRUCT) {
      if (uVar16 == 0) {
LAB_145e8ab1a:
        pFVar7 = pFVar15->Struct;
        if ((uint)uVar3 < pFVar7->Size + pFVar15->Offset) {
          FString::PrintfImpl(&local_208,L"%s%s::");
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          local_250.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
          local_250.Data.ArrayNum = local_208.Data.ArrayNum;
          local_250.Data.ArrayMax = local_208.Data.ArrayMax;
          local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.Data.ArrayNum = 0;
          local_208.Data.ArrayMax = 0;
          FShaderParametersMetadata::FindMemberFromOffset
                    (pFVar7,uVar3 - (short)pFVar15->Offset,&local_240,&local_238,&local_254,
                     &local_250);
          goto LAB_145e8ac7a;
        }
      }
      else {
        pFVar7 = pFVar15->Struct;
        uVar4 = (ushort)pFVar15->Offset;
        uVar5 = pFVar7->Size;
        if ((uVar4 <= uVar3) && (uVar3 < (ushort)((short)uVar5 * (short)uVar16 + uVar4))) {
          uVar16 = (uint)uVar3 - (uint)uVar4;
          if ((uVar16 % uVar5 != 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("(MemberOffsetInArray % StructSize) == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                  ,0x459,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FString::PrintfImpl(&local_218,L"%s%s[%u]::");
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          local_250.Data.AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
          local_250.Data.ArrayNum = local_218.Data.ArrayNum;
          local_250.Data.ArrayMax = local_218.Data.ArrayMax;
          local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_218.Data.ArrayNum = 0;
          local_218.Data.ArrayMax = 0;
          FShaderParametersMetadata::FindMemberFromOffset
                    (pFVar7,(short)uVar16 - (short)uVar5 * (short)(uVar16 / uVar5),&local_240,
                     &local_238,&local_254,&local_250);
LAB_145e8ac7a:
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          FShaderParametersMetadata::GetFullMemberCodeName
                    (local_190->RootParametersStructure,&local_180,
                     (ushort)local_198->ConstantBufferOffset);
          FString::FString(&local_1e8,L"");
          FString::FString(&local_1d8,L"");
          FString::FString(&local_1c8,L"");
          FString::FString(&local_1b8,L"");
          FString::FString(&local_1a8,L"");
          FString::PrintfImpl(&local_1f8,L"Note: Definition of %s");
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          local_1c8.Data.AllocatorInstance.Data = local_1f8.Data.AllocatorInstance.Data;
          local_1c8.Data.ArrayNum = local_1f8.Data.ArrayNum;
          local_1c8.Data.ArrayMax = local_1f8.Data.ArrayMax;
          local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f8.Data.ArrayNum = 0;
          local_1f8.Data.ArrayMax = 0;
          _Str = local_240->FileName;
          local_168._padding_ = 0;
          if (_Str == (char *)0x0) {
            local_168.StringLength = 0;
            local_168.Ptr = (wchar_t *)0x0;
          }
          else {
            sVar13 = strlen(_Str);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,_Str,(int)sVar13,Yes);
          }
          FString::operator=(&local_1e8,local_168.Ptr);
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
          local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230.Data.ArrayNum = 0;
          local_230.Data.ArrayMax = 0;
          FString::AppendInt(&local_230,local_238->FileLine);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          pFVar10 = local_188;
          local_1d8.Data.AllocatorInstance.Data = local_230.Data.AllocatorInstance.Data;
          local_1d8.Data.ArrayNum = local_230.Data.ArrayNum;
          pFVar8 = (local_188->Errors).AllocatorInstance.Data;
          local_1d8.Data.ArrayMax = local_230.Data.ArrayMax;
          local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230.Data.ArrayNum = 0;
          local_230.Data.ArrayMax = 0;
          if (((pFVar8 <= (FScriptContainerElement *)&local_1e8) &&
              ((FScriptContainerElement *)&local_1e8 <
               pFVar8 + (longlong)(local_188->Errors).ArrayMax * 0x50)) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (pFVar10->Errors).ArrayNum;
          piVar1 = &(pFVar10->Errors).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&(pFVar10->Errors).AllocatorInstance,piVar1);
          }
          (pFVar10->Errors).ArrayNum = iVar12 + 1;
          this = (pFVar10->Errors).AllocatorInstance.Data + (longlong)iVar12 * 0x50;
          FString::FString((FString *)this,&local_1e8);
          _Src.Data = local_1d8.Data.AllocatorInstance.Data;
          pFVar8 = this + 0x10;
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
          Data = (FScriptContainerElement *)0x0;
          lVar17 = (longlong)local_1d8.Data.ArrayNum;
          *(int *)&this[0x18].field_0x0 = local_1d8.Data.ArrayNum;
          if (local_1d8.Data.ArrayNum == 0) {
            *(int *)&this[0x1c].field_0x0 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar8,
                       local_1d8.Data.ArrayNum,(int *)(this + 0x1c));
            memcpy((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->
                   AllocatorInstance).Data,_Src.Data,lVar17 * 2);
          }
          FString::FString((FString *)(this + 0x20),&local_1c8);
          FString::FString((FString *)(this + 0x30),&local_1b8);
          FString::FString((FString *)(this + 0x40),&local_1a8);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          return;
        }
      }
    }
    else {
      if (EVar2 == UBMT_INCLUDED_STRUCT) goto LAB_145e8ab1a;
      if (((uVar16 == 0) || (UBMT_RESOURCE_COLLECTION < EVar2)) ||
         ((0x10fff60U >> (EVar2 & 0x1f) & 1) == 0)) {
        if (pFVar15->Offset == (uint)uVar3) {
          local_254 = 0;
          local_240 = pFVar6;
          local_238 = pFVar15;
          goto LAB_145e8ac7a;
        }
      }
      else {
        uVar4 = (ushort)pFVar15->Offset;
        if ((uVar4 <= uVar3) && (uVar3 < (ushort)((short)uVar16 * 8 + uVar4))) {
          if (((uVar3 & 7) != 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("(MemberOffset % sizeof(uint64)) == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                                  ,0x46f,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_254 = (int)((ulonglong)uVar3 - (ulonglong)uVar4 >> 3);
          local_240 = pFVar6;
          local_238 = pFVar15;
          goto LAB_145e8ac7a;
        }
      }
    }
    uVar14 = (ulonglong)local_220;
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// ApplyResourceStats @ 145e8d5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ApplyResourceStats(FShaderMapResourceCode *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  int iVar3;
  FName FVar4;
  FBufferOwner *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  longlong lVar15;
  FThreadSafeStaticStat<FStat_STAT_VertexShaderMemory> FVar16;
  FNameEntryId FVar17;
  uchar auVar18 [8];
  FScriptContainerElement *pFVar19;
  uint local_res8;
  uint uStackX_c;
  FThreadSafeStaticStat<FStat_STAT_VertexShaderMemory> local_res10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_98;
  FName local_90;
  FScriptContainerElement *local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_70;
  FStatMessage local_60 [2];
  
  uVar10 = FShaderMapResourceCode::GetSizeBytes(param_1);
  auVar18[4] = '\0';
  auVar18[5] = '\0';
  auVar18[6] = '\0';
  auVar18[7] = '\0';
  auVar18[0] = (char)uVar10;
  auVar18[1] = (char)(uVar10 >> 8);
  auVar18[2] = (char)(uVar10 >> 0x10);
  auVar18[3] = (char)(uVar10 >> 0x18);
  if (uVar10 != 0) {
    FVar12 = StatPtr_STAT_Shaders_ShaderResourceMemory;
    if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
      pFVar11 = FName::FName(&local_80,"STAT_Shaders_ShaderResourceMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,
                          *pFVar11,L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar12;
    FVar17 = FVar4.ComparisonIndex.Value;
    uVar10 = FVar4.Number;
    local_res8 = FVar17.Value;
    uStackX_c = uVar10;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_70.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
      local_98 = FVar4;
      local_70.StatData.Pad = auVar18;
      local_70.NameAndInfo.Index.Value = FVar17.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_70);
      FStatsTrace::Add(&local_98,(long64)auVar18);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  iVar3 = (param_1->ShaderCodeResources).ArrayNum;
  pFVar19 = (param_1->ShaderCodeResources).AllocatorInstance.Data;
  local_88 = pFVar19 + (longlong)iVar3 * 0x28;
  do {
    while( true ) {
      pFVar8 = local_88;
      if ((param_1->ShaderCodeResources).ArrayNum != iVar3) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<FShaderCodeResource,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar19 == pFVar8) {
        return;
      }
      pFVar5 = *(FBufferOwner **)(pFVar19 + 8);
      local_res18.Owner = pFVar5;
      if (pFVar5 == (FBufferOwner *)0x0) break;
      LOCK();
      paVar1 = &pFVar5->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) != 0) break;
      LOCK();
      pFVar5->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar5->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
LAB_145e8d783:
      if (((ulonglong)pFVar5->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
      }
      auVar18 = (uchar  [8])pFVar5->Size;
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
      if (auVar18 != (uchar  [8])0x0) {
        if ((*(longlong *)pFVar19 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Header",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                               ,0x4d3,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar6 = *(longlong **)pFVar19;
        if (plVar6 == (longlong *)0x0) {
          lVar15 = 0;
        }
        else {
          if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
          lVar15 = plVar6[1];
        }
        switch(*(undefined1 *)(lVar15 + 8)) {
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
          FThreadSafeStaticStatInner<FStat_STAT_PixelShaderMemory,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PixelShaderMemory,1> *)
                     &StatPtr_STAT_PixelShaderMemory);
          FVar16 = local_res10;
          break;
        default:
          FVar16 = StatPtr_STAT_VertexShaderMemory;
          if (StatPtr_STAT_VertexShaderMemory ==
              (FThreadSafeStaticStat<FStat_STAT_VertexShaderMemory>)0x0) {
            pFVar11 = FName::FName(&local_78,"STAT_VertexShaderMemory");
            FVar16 = (FThreadSafeStaticStat<FStat_STAT_VertexShaderMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VertexShaderMemory,
                                *pFVar11,L"VertexShader Memory","STATGROUP_Memory",
                                "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                                MCR_Physical);
          }
        }
        local_res10 = FVar16;
        FVar4 = *(FName *)local_res10;
        FVar17 = FVar4.ComparisonIndex.Value;
        uVar10 = FVar4.Number;
        local_res20 = FVar17.Value;
        uStackX_24 = uVar10;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar13 == (FThreadStats *)0x0) {
            pFVar14 = FThreadStatsPool::Get();
            pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
          }
          local_60[0].NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
          local_90 = FVar4;
          local_60[0].StatData.Pad = auVar18;
          local_60[0].NameAndInfo.Index.Value = FVar17.Value;
          FThreadStats::AddStatMessage(pFVar13,local_60);
          FStatsTrace::Add(&local_90,(long64)auVar18);
          if (pFVar13->ScopeCount == 0) {
            FThreadStats::Flush(pFVar13,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar13,false,false);
          }
        }
      }
      pFVar19 = pFVar19 + 0x28;
    }
    if (pFVar5 != (FBufferOwner *)0x0) goto LAB_145e8d783;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
    pFVar19 = pFVar19 + 0x28;
  } while( true );
}

// BuildShaderBindingLayout @ 145e915a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
BuildShaderBindingLayout
          (TArrayView<FShaderParametersMetadata_*_const,int> *param_1,
          EShaderBindingLayoutFlags param_2,FShaderBindingLayoutContainer *param_3)

{
  FRHIUniformBufferShaderBindingLayout *pFVar1;
  ulonglong *puVar2;
  FShaderParametersMetadata **ppFVar3;
  FScriptContainerElement *pFVar4;
  FRHIUniformBufferShaderBindingLayout *pFVar5;
  int iVar6;
  FShaderParametersMetadata *pFVar7;
  FRHIUniformBufferLayout *pFVar8;
  FScriptContainerElement *_Src;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  uint uVar12;
  FRHIShaderBindingLayout *pFVar13;
  uint uVar14;
  longlong lVar15;
  FRHIUniformBufferShaderBindingLayout_u_16 *pFVar16;
  FShaderParametersMetadata **ppFVar17;
  ulonglong *puVar18;
  FRHIUniformBufferShaderBindingLayout *pFVar19;
  int iVar20;
  longlong lVar21;
  undefined1 auStackY_278 [32];
  ForAnyElementType local_230;
  int local_228;
  int aiStack_224 [3];
  TArrayView<FRHIUniformBufferShaderBindingLayout_const_,int> local_218;
  FRHIUniformBufferShaderBindingLayout *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FRHIUniformBufferShaderBindingLayout local_1f8;
  uint local_1e0;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> local_1d8;
  FRHIShaderBindingLayout local_118;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1f8.LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  memset(&local_1d8,0,0xc0);
  uVar12 = param_1->ArrayNum;
  iVar20 = 0;
  local_1d8.Elements[0].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Elements[0].LayoutName.Data.ArrayNum = 0;
  local_1d8.Elements[0].LayoutName.Data.ArrayMax = 0;
  local_1d8.Elements[0].field1_0x10.Flags = 0;
  local_1d8.Elements[1].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Elements[1].LayoutName.Data.ArrayNum = 0;
  local_1d8.Elements[1].LayoutName.Data.ArrayMax = 0;
  local_1d8.Elements[1].field1_0x10.Flags = 0;
  local_1d8.Elements[2].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Elements[2].LayoutName.Data.ArrayNum = 0;
  local_1d8.Elements[2].LayoutName.Data.ArrayMax = 0;
  local_1d8.Elements[2].field1_0x10.Flags = 0;
  local_1d8.Elements[3].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Elements[3].LayoutName.Data.ArrayNum = 0;
  local_1d8.Elements[3].LayoutName.Data.ArrayMax = 0;
  local_1d8.Elements[3].field1_0x10.Flags = 0;
  local_1d8.Elements[4].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Elements[4].LayoutName.Data.ArrayNum = 0;
  local_1d8.Elements[4].LayoutName.Data.ArrayMax = 0;
  local_1d8.Elements[4].field1_0x10.Flags = 0;
  local_1d8.Elements[5].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Elements[5].LayoutName.Data.ArrayNum = 0;
  local_1d8.Elements[5].LayoutName.Data.ArrayMax = 0;
  local_1d8.Elements[5].field1_0x10.Flags = 0;
  local_1d8.Elements[6].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Elements[6].LayoutName.Data.ArrayNum = 0;
  local_1d8.Elements[6].LayoutName.Data.ArrayMax = 0;
  local_1d8.Elements[6].field1_0x10.Flags = 0;
  local_1d8.Elements[7].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Elements[7].LayoutName.Data.ArrayNum = 0;
  local_1d8.Elements[7].LayoutName.Data.ArrayMax = 0;
  local_1d8.Elements[7].field1_0x10.Flags = 0;
  local_230.Data = (FScriptContainerElement *)0x0;
  local_228 = 0;
  aiStack_224[0] = 0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  lVar21 = 8;
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar12,&local_230,0,aiStack_224);
  }
  ppFVar17 = param_1->DataPtr;
  ppFVar3 = ppFVar17 + (int)uVar12;
  iVar6 = local_228;
  while( true ) {
    local_228 = iVar6;
    if (ppFVar17 == ppFVar3) {
      local_208 = (FRHIUniformBufferShaderBindingLayout *)local_230.Data;
      if ((iVar6 < 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_218._12_4_ = uStack_1fc;
      local_218.ArrayNum = iVar6;
      local_218.DataPtr = local_208;
      iStack_200 = iVar6;
      pFVar13 = FRHIShaderBindingLayout::FRHIShaderBindingLayout
                          (&local_118,param_2 | (BindlessSamplers|BindlessResources),&local_218);
      local_218.DataPtr = (FRHIUniformBufferShaderBindingLayout *)&DAT_00000008;
      pFVar16 = &(pFVar13->UniformBufferEntries).Elements[0].field1_0x10;
      local_1f8.field1_0x10.Flags = pFVar13->Hash;
      local_1f8._20_1_ = pFVar13->Flags;
      local_1e0 = pFVar13->NumUniformBufferEntries;
      lVar15 = -(longlong)pFVar13;
      pFVar19 = (FRHIUniformBufferShaderBindingLayout *)
                ((longlong)&local_1f8 + (0x10 - (longlong)pFVar13));
      local_208 = pFVar19;
      do {
        pFVar1 = (FRHIUniformBufferShaderBindingLayout *)(pFVar16 + -4);
        pFVar5 = (FRHIUniformBufferShaderBindingLayout *)
                 ((longlong)&local_1f8 + lVar15 + (longlong)pFVar16);
        if (pFVar5 != pFVar1) {
          pFVar4 = (pFVar5->LayoutName).Data.AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
            pFVar19 = local_208;
          }
          (pFVar5->LayoutName).Data.AllocatorInstance.Data =
               (pFVar1->LayoutName).Data.AllocatorInstance.Data;
          (pFVar1->LayoutName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(uint *)((longlong)&local_1f8 + lVar15 + 8 + (longlong)pFVar16) = *(uint *)(pFVar16 + -2)
          ;
          *(uint *)((longlong)pFVar16 + (longlong)&local_1f8 + lVar15 + 0xc) =
               *(uint *)(pFVar16 + -1);
          *(undefined8 *)(pFVar16 + -2) = 0;
        }
        uVar12 = (*(uint *)((longlong)pFVar19 + (longlong)pFVar16) ^ pFVar16->Flags) & 0xf ^
                 *(uint *)((longlong)pFVar19 + (longlong)pFVar16);
        *(uint *)((longlong)pFVar19 + (longlong)pFVar16) = uVar12;
        uVar12 = (uVar12 ^ pFVar16->Flags) & 0x3f0 ^ uVar12;
        *(uint *)((longlong)pFVar19 + (longlong)pFVar16) = uVar12;
        uVar12 = (uVar12 ^ pFVar16->Flags) & 0x3fc00 ^ uVar12;
        *(uint *)((longlong)pFVar19 + (longlong)pFVar16) = uVar12;
        uVar12 = (uVar12 ^ pFVar16->Flags) & 0x3fc0000 ^ uVar12;
        *(uint *)((longlong)pFVar19 + (longlong)pFVar16) = uVar12;
        *(uint *)((longlong)pFVar19 + (longlong)pFVar16) =
             (uVar12 ^ pFVar16->Flags) & 0x3ffffff ^ pFVar16->Flags;
        ((FRHIUniformBufferShaderBindingLayout_u_16 *)((longlong)pFVar19 + (longlong)pFVar16))->
        Flags = *(uint *)pFVar16;
        pFVar16 = pFVar16 + 6;
        local_218.DataPtr =
             (FRHIUniformBufferShaderBindingLayout *)&local_218.DataPtr[-1].field_0x17;
      } while (local_218.DataPtr != (FRHIUniformBufferShaderBindingLayout *)0x0);
      puVar18 = local_48;
      lVar15 = 8;
      local_218.DataPtr = (FRHIUniformBufferShaderBindingLayout *)0x0;
      do {
        puVar2 = puVar18 + -3;
        puVar18 = puVar18 + -3;
        lVar15 = lVar15 + -1;
        if ((void *)*puVar2 != (void *)0x0) {
          FMemory::Free((void *)*puVar2);
        }
      } while (lVar15 != 0);
      (((FShaderBindingLayout *)&(local_1f8.LayoutName.Data.AllocatorInstance.Data)->field_0x0)->
      RHILayout).Hash = (uint)local_1f8.field1_0x10;
      local_1f8.LayoutName.Data.AllocatorInstance.Data[4].field_0x0 = local_1f8._20_1_;
      *(uint *)&local_1f8.LayoutName.Data.AllocatorInstance.Data[8].field_0x0 = local_1e0;
      TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator=
                ((TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *)
                 (local_1f8.LayoutName.Data.AllocatorInstance.Data + 0x10),&local_1d8);
      DestructItems<FRHIUniformBufferShaderBindingLayout,int>
                ((FRHIUniformBufferShaderBindingLayout *)local_230.Data,local_228);
      if ((FRHIUniformBufferShaderBindingLayout *)local_230.Data !=
          (FRHIUniformBufferShaderBindingLayout *)0x0) {
        FMemory::Free(local_230.Data);
      }
      pFVar13 = &local_118;
      do {
        pFVar4 = pFVar13[-1].UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.Data
        ;
        pFVar13 = (FRHIShaderBindingLayout *)(pFVar13[-1].UniformBufferEntries.Elements + 7);
        lVar21 = lVar21 + -1;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      } while (lVar21 != 0);
      return;
    }
    pFVar7 = *ppFVar17;
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x177,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = (pFVar7->Layout).Reference;
    if ((pFVar8->ConstantBufferSize == 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("UniformBufferLayout.ConstantBufferSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                            ,0xb2,L""), bVar11)) break;
    if (local_228 == aiStack_224[0]) {
      local_228 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_230,aiStack_224);
    }
    lVar15 = (longlong)local_228;
    local_228 = local_228 + 1;
    pFVar4 = local_230.Data + lVar15 * 0x18;
    DefaultConstructItems<FRHIUniformBufferShaderBindingLayout,int>(pFVar4,1);
    if (pFVar4 != (FScriptContainerElement *)&pFVar8->Name) {
      iVar6 = (pFVar8->Name).Data.ArrayNum;
      pFVar10 = pFVar4 + 0xc;
      _Src = (pFVar8->Name).Data.AllocatorInstance.Data;
      *(int *)(pFVar4 + 8) = iVar6;
      if ((iVar6 == 0) && (*(int *)pFVar10 == 0)) {
        *(int *)pFVar10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,*(int *)pFVar10,(ForAnyElementType *)pFVar4,iVar6,(int *)pFVar10);
        if (iVar6 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar4->field_0x0,_Src,(longlong)iVar6 * 2);
        }
      }
    }
    uVar12 = iVar20 << 4;
    uVar14 = *(uint *)(pFVar4 + 0x10) & 0xfffffff4 | 4;
    iVar20 = iVar20 + 1;
    ppFVar17 = ppFVar17 + 1;
    *(uint *)(pFVar4 + 0x10) = (uVar12 ^ uVar14) & 0xfffffff0 ^ uVar14 | 0xfffffc00;
    iVar6 = local_228;
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// CalculateDerivedMaterialParameters @ 145e91a10

FShaderMaterialDerivedDefines * __cdecl
CalculateDerivedMaterialParameters
          (FShaderMaterialDerivedDefines *__return_storage_ptr__,
          FShaderMaterialPropertyDefines *param_1,FShaderLightmapPropertyDefines *param_2,
          FShaderGlobalDefines *param_3,FShaderCompilerDefines *param_4,Type param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  
  __return_storage_ptr__->PIXELSHADEROUTPUT_BASEPASS = false;
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = false;
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT1 = false;
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT2 = false;
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT3 = false;
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT4 = false;
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT5 = false;
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT6 = false;
  __return_storage_ptr__->TRANSLUCENCY_NEEDS_BASEPASS_FOGGING =
       param_1->MATERIAL_ENABLE_TRANSLUCENCY_FOGGING == '\x01' &&
       (param_1->MATERIALBLENDING_ANY_TRANSLUCENT == '\x01' &&
       param_1->MATERIAL_USES_SCENE_COLOR_COPY == '\0');
  if ((param_1->MATERIALBLENDING_ANY_TRANSLUCENT == '\0') && (param_3->FORWARD_SHADING != false)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  __return_storage_ptr__->OPAQUE_NEEDS_BASEPASS_FOGGING = bVar15;
  if ((param_1->MATERIAL_ENABLE_TRANSLUCENCY_FOGGING == '\x01' &&
       (param_1->MATERIALBLENDING_ANY_TRANSLUCENT == '\x01' &&
       param_1->MATERIAL_USES_SCENE_COLOR_COPY == '\0')) &&
     (param_1->MATERIAL_COMPUTE_FOG_PER_PIXEL == '\0')) {
    bVar22 = true;
  }
  else if ((bVar15 == false) || (param_3->PROJECT_VERTEX_FOGGING_FOR_OPAQUE == false)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  __return_storage_ptr__->NEEDS_BASEPASS_VERTEX_FOGGING = bVar22;
  if (((param_1->MATERIAL_ENABLE_TRANSLUCENCY_FOGGING == '\x01' &&
        (param_1->MATERIALBLENDING_ANY_TRANSLUCENT == '\x01' &&
        param_1->MATERIAL_USES_SCENE_COLOR_COPY == '\0')) &&
      (param_1->MATERIAL_COMPUTE_FOG_PER_PIXEL != '\0')) ||
     ((bVar15 != false && (param_3->PROJECT_VERTEX_FOGGING_FOR_OPAQUE == false)))) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  __return_storage_ptr__->NEEDS_BASEPASS_PIXEL_FOGGING = bVar15;
  if ((param_1->MATERIALBLENDING_ANY_TRANSLUCENT == '\0') && (param_3->FORWARD_SHADING == false)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  bVar2 = param_2->HQ_TEXTURE_LIGHTMAP;
  __return_storage_ptr__->NEEDS_BASEPASS_PIXEL_VOLUMETRIC_FOGGING = bVar15;
  if ((bVar2 == false) && (param_2->LQ_TEXTURE_LIGHTMAP == false)) {
    __return_storage_ptr__->NEEDS_LIGHTMAP_COORDINATE = false;
LAB_145e91ad2:
    bVar15 = false;
  }
  else {
    bVar15 = param_2->PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING;
    __return_storage_ptr__->NEEDS_LIGHTMAP_COORDINATE = true;
    if (bVar15 != false) goto LAB_145e91ad2;
    bVar15 = true;
  }
  __return_storage_ptr__->NEEDS_LIGHTMAP = bVar15;
  if ((((int)param_5 < 2) ||
      (param_1->MATERIALBLENDING_SOLID == '\0' && param_1->MATERIALBLENDING_MASKED == '\0')) ||
     (param_3->FORWARD_SHADING != false)) {
    bVar15 = false;
    __return_storage_ptr__->USES_GBUFFER = false;
LAB_145e91b22:
    bVar2 = false;
    __return_storage_ptr__->WRITES_CUSTOMDATA_TO_GBUFFER = false;
    if (bVar15) goto LAB_145e91b2f;
LAB_145e91b3b:
    bVar24 = false;
  }
  else {
    bVar15 = true;
    bVar2 = true;
    __return_storage_ptr__->USES_GBUFFER = true;
    if ((!(bool)param_1->MATERIAL_SHADINGMODEL_SUBSURFACE) &&
       (param_1->MATERIAL_SHADINGMODEL_PREINTEGRATED_SKIN == '\0' &&
        (param_1->MATERIAL_SHADINGMODEL_SUBSURFACE_PROFILE == '\0' &&
        (param_1->MATERIAL_SHADINGMODEL_CLEAR_COAT == '\0' &&
        (param_1->MATERIAL_SHADINGMODEL_TWOSIDED_FOLIAGE == '\0' &&
        (param_1->MATERIAL_SHADINGMODEL_HAIR == '\0' &&
        (param_1->MATERIAL_SHADINGMODEL_CLOTH == '\0' && param_1->MATERIAL_SHADINGMODEL_EYE == '\0')
        )))))) goto LAB_145e91b22;
    __return_storage_ptr__->WRITES_CUSTOMDATA_TO_GBUFFER = true;
LAB_145e91b2f:
    if (param_3->ALLOW_STATIC_LIGHTING == false) goto LAB_145e91b3b;
    bVar24 = true;
  }
  bVar16 = param_2->STATICLIGHTING_TEXTUREMASK;
  __return_storage_ptr__->GBUFFER_HAS_PRECSHADOWFACTOR = bVar24;
  if (((bVar16 == false) || (param_2->STATICLIGHTING_SIGNEDDISTANCEFIELD == false)) &&
     ((param_2->HQ_TEXTURE_LIGHTMAP != false || (param_2->LQ_TEXTURE_LIGHTMAP != false)))) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  __return_storage_ptr__->WRITES_PRECSHADOWFACTOR_ZERO = bVar16;
  if ((bVar24 == false) || (bVar16 != false)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  __return_storage_ptr__->WRITES_PRECSHADOWFACTOR_TO_GBUFFER = bVar16;
  if (((int)param_5 < 2) ||
     (param_1->MATERIALBLENDING_SOLID == '\0' && param_1->MATERIALBLENDING_MASKED == '\0')) {
    __return_storage_ptr__->SUPPORTS_WRITING_VELOCITY_TO_BASE_PASS = false;
    if (bVar15) goto LAB_145e91b9a;
LAB_145e91bb8:
    bVar23 = false;
  }
  else {
    __return_storage_ptr__->SUPPORTS_WRITING_VELOCITY_TO_BASE_PASS = true;
LAB_145e91b9a:
    if ((param_3->GBUFFER_HAS_VELOCITY == false) ||
       (((param_1->COMPUTE_SHADED != '\0' && (param_3->USES_BASE_PASS_VELOCITY == false)) &&
        (param_1->USES_WORLD_POSITION_OFFSET == '\0' &&
         param_1->USES_FIRST_PERSON_INTERPOLATION == '\0')))) goto LAB_145e91bb8;
    bVar23 = true;
  }
  __return_storage_ptr__->WRITES_VELOCITY_TO_GBUFFER = bVar23;
  __return_storage_ptr__->TRANSLUCENCY_ANY_PERVERTEX_LIGHTING =
       param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_PERVERTEX_NONDIRECTIONAL != '\0' ||
       param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_PERVERTEX_DIRECTIONAL != '\0';
  if ((param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_NONDIRECTIONAL == '\0' &&
       param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_DIRECTIONAL == '\0') &&
     (param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_PERVERTEX_NONDIRECTIONAL == '\0' &&
      param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_PERVERTEX_DIRECTIONAL == '\0')) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  __return_storage_ptr__->TRANSLUCENCY_ANY_VOLUMETRIC = bVar17;
  bVar17 = param_3->FORWARD_SHADING;
  if ((bVar17 == false) &&
     (param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_PERVERTEX_NONDIRECTIONAL != '\0' ||
      param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_PERVERTEX_DIRECTIONAL != '\0')) {
    __return_storage_ptr__->TRANSLUCENCY_PERVERTEX_LIGHTING_VOLUME = true;
LAB_145e91bf8:
    bVar17 = false;
  }
  else {
    __return_storage_ptr__->TRANSLUCENCY_PERVERTEX_LIGHTING_VOLUME = false;
    if ((bVar17 == false) ||
       (param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_PERVERTEX_NONDIRECTIONAL == '\0' &&
        param_1->TRANSLUCENCY_LIGHTING_VOLUMETRIC_PERVERTEX_DIRECTIONAL == '\0'))
    goto LAB_145e91bf8;
    bVar17 = true;
  }
  bVar20 = param_3->COMPILE_SHADERS_FOR_DEVELOPMENT_ALLOWED;
  __return_storage_ptr__->TRANSLUCENCY_PERVERTEX_FORWARD_SHADING = bVar17;
  if ((bVar20 == false) || (param_1->bAllowDevelopmentShaderCompile == 0)) {
    __return_storage_ptr__->COMPILE_SHADERS_FOR_DEVELOPMENT = false;
LAB_145e91c38:
    bVar17 = false;
  }
  else {
    bVar17 = param_4->PLATFORM_SUPPORTS_DEVELOPMENT_SHADERS;
    __return_storage_ptr__->COMPILE_SHADERS_FOR_DEVELOPMENT = true;
    if (bVar17 == false) goto LAB_145e91c38;
    bVar17 = true;
  }
  bVar20 = param_4->ESDEFERRED_PROFILE;
  __return_storage_ptr__->USE_DEVELOPMENT_SHADERS = bVar17;
  __return_storage_ptr__->PLATFORM_SUPPORTS_EDITOR_SHADERS = bVar20 == false;
  if ((bVar20 == false) && (bVar17 != false)) {
    bVar18 = param_1->field_0x3;
    __return_storage_ptr__->USE_EDITOR_SHADERS = true;
    if (param_1->EDITOR_PRIMITIVE_MATERIAL == 0) goto LAB_145e91c70;
    bVar17 = true;
  }
  else {
    bVar18 = param_1->field_0x3;
    __return_storage_ptr__->USE_EDITOR_SHADERS = false;
LAB_145e91c70:
    bVar17 = false;
  }
  __return_storage_ptr__->USE_EDITOR_COMPOSITING = bVar17;
  if ((((bVar18 & 0x60) == 0) && (-1 < (char)bVar18)) &&
     (param_1->SUBSTRATE_BLENDING_TRANSLUCENT_GREYTRANSMITTANCE == '\0' &&
      (param_1->SUBSTRATE_BLENDING_TRANSLUCENT_COLOREDTRANSMITTANCE == '\0' &&
      param_1->SUBSTRATE_BLENDING_COLOREDTRANSMITTANCEONLY == '\0'))) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  bVar19 = param_2->PARTICLE_MESH_FACTORY;
  __return_storage_ptr__->MATERIALBLENDING_ANY_TRANSLUCENT = bVar20;
  if ((bVar19 == false) && (param_2->NIAGARA_MESH_FACTORY == false)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  __return_storage_ptr__->IS_MESHPARTICLE_FACTORY = bVar19;
  if (((int)param_5 < 3) || (param_4->COMPILER_GLSL != false)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  __return_storage_ptr__->SUPPORTS_PIXEL_COVERAGE = bVar19;
  __return_storage_ptr__->FORCE_FULLY_ROUGH = param_1->MATERIAL_FULLY_ROUGH;
  if ((bVar17 == false) || (bVar19 == false)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  __return_storage_ptr__->EDITOR_ALPHA2COVERAGE = bVar17;
  if ((param_1->MATERIAL_SHADINGMODEL_SUBSURFACE_PROFILE == '\0' &&
       param_1->MATERIAL_SHADINGMODEL_EYE == '\0') || (!bVar15)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  __return_storage_ptr__->POST_PROCESS_SUBSURFACE = bVar19;
  if ((param_1->MATERIAL_SHADINGMODEL_THIN_TRANSLUCENT == '\0') ||
     (param_3->bSupportsDualBlending == false)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  __return_storage_ptr__->THIN_TRANSLUCENT_USE_DUAL_BLEND = bVar19;
  __return_storage_ptr__->SUBSTRATE_ENABLED =
       param_1->SUBSTRATE_ENABLED != '\0' || param_1->MATERIAL_IS_SUBSTRATE != '\0';
  __return_storage_ptr__->SUBSTRATE_GBUFFER_FORMAT = param_1->SUBSTRATE_GBUFFER_FORMAT;
  if ((param_1->SUBSTRATE_ENABLED == '\0' && param_1->MATERIAL_IS_SUBSTRATE == '\0') ||
     (bVar20 == false)) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  __return_storage_ptr__->SHADER_SUBSTRATE_TRANSLUCENT_ENABLED = bVar20;
  if ((param_1->MATERIAL_SHADINGMODEL_THIN_TRANSLUCENT == '\0') &&
     (param_1->SUBSTRATE_BLENDING_TRANSLUCENT_COLOREDTRANSMITTANCE == '\0')) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  __return_storage_ptr__->MATERIAL_WORKS_WITH_DUAL_SOURCE_COLOR_BLENDING = bVar20;
  if ((((int)param_5 < 3) || (param_1->PROJECT_OIT == '\0')) ||
     ((param_1->MATERIALBLENDING_TRANSLUCENT == '\0' && param_1->MATERIALBLENDING_ADDITIVE == '\0'
      && (bVar20 == false)))) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  __return_storage_ptr__->OIT_ENABLED = bVar19;
  if (param_1->IS_VIRTUAL_TEXTURE_MATERIAL != 0) {
    if (param_1->OUT_BASECOLOR == '\0') {
      if (param_1->OUT_BASECOLOR_NORMAL_ROUGHNESS == '\0') {
        if (param_1->OUT_BASECOLOR_NORMAL_SPECULAR == '\0') {
          if (param_1->OUT_MASK4 == '\0') {
            if ((bool)param_1->OUT_WORLDHEIGHT) {
              __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = true;
            }
            else if (param_1->OUT_DISPLACEMENT != 0) {
              __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = true;
            }
          }
          else {
            __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = true;
            __return_storage_ptr__->PIXELSHADEROUTPUT_MRT1 = true;
          }
        }
        else {
          __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = true;
          __return_storage_ptr__->PIXELSHADEROUTPUT_MRT1 = true;
          __return_storage_ptr__->PIXELSHADEROUTPUT_MRT2 = true;
        }
      }
      else {
        __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = true;
        __return_storage_ptr__->PIXELSHADEROUTPUT_MRT1 = true;
      }
    }
    else {
      __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = true;
    }
    goto LAB_145e91f73;
  }
  if (param_1->IS_DECAL != '\0') {
    uVar4 = param_1->DECAL_RENDERTARGET_COUNT;
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = uVar4 != 0;
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT1 = 1 < uVar4;
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT2 = 2 < uVar4;
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT3 = 3 < uVar4;
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT4 = 4 < uVar4;
    goto LAB_145e91f73;
  }
  if (param_1->IS_BASE_PASS == '\0') goto LAB_145e91f73;
  __return_storage_ptr__->PIXELSHADEROUTPUT_BASEPASS = true;
  if (!bVar15) {
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = true;
    if ((bVar23 == false) &&
       ((param_1->DUAL_SOURCE_COLOR_BLENDING_ENABLED == '\0' || (bVar20 == false)))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT1 = bVar15;
    goto LAB_145e91f73;
  }
  bVar15 = param_3->SELECTIVE_BASEPASS_OUTPUTS;
  if ((((bVar15 == false) || (bVar22 != false)) || ((bool)param_1->USES_EMISSIVE_COLOR)) ||
     ((param_3->ALLOW_STATIC_LIGHTING != false ||
      ((bool)param_1->MATERIAL_SHADINGMODEL_SINGLELAYERWATER)))) {
    bVar18 = *(byte *)param_1;
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = true;
    if (bVar15 != false) goto LAB_145e91e6e;
LAB_145e91e82:
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT1 = true;
    bVar21 = bVar18 & 0x20;
    if ((bVar15 == false) || (bVar21 == 0)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
  }
  else {
    bVar18 = *(byte *)param_1;
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT0 = false;
LAB_145e91e6e:
    if ((bVar18 & 0x20) == 0) goto LAB_145e91e82;
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT1 = false;
    bVar21 = bVar18 & 0x20;
    bVar15 = false;
  }
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT2 = bVar15;
  bVar15 = param_3->SELECTIVE_BASEPASS_OUTPUTS;
  if ((bVar15 == false) || (bVar21 == 0)) {
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  bVar20 = param_3->GBUFFER_HAS_VELOCITY;
  __return_storage_ptr__->PIXELSHADEROUTPUT_MRT3 = bVar22;
  if ((bVar20 == false) && (param_3->GBUFFER_HAS_TANGENT == false)) {
    if ((bVar15 == false) || (bVar18 = *(byte *)param_1, bVar2)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT4 = bVar22;
    if ((bVar24 == false) || ((bVar15 != false && ((bVar16 == false || ((bVar18 & 0x20) != 0)))))) {
      __return_storage_ptr__->PIXELSHADEROUTPUT_MRT5 = false;
    }
    else {
      __return_storage_ptr__->PIXELSHADEROUTPUT_MRT5 = true;
    }
  }
  else {
    if ((bVar23 == false) && (param_3->GBUFFER_HAS_TANGENT == false)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT4 = bVar22;
    if ((bVar15 == false) || (bVar2)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    __return_storage_ptr__->PIXELSHADEROUTPUT_MRT5 = bVar22;
    if ((bVar24 == false) ||
       ((bVar15 != false && ((bVar16 == false || (param_1->MATERIAL_SHADINGMODEL_UNLIT != '\0'))))))
    {
      __return_storage_ptr__->PIXELSHADEROUTPUT_MRT6 = false;
    }
    else {
      __return_storage_ptr__->PIXELSHADEROUTPUT_MRT6 = true;
    }
  }
LAB_145e91f73:
  __return_storage_ptr__->PIXELSHADEROUTPUT_A2C = bVar17;
  if ((param_1->MATERIALBLENDING_MASKED_USING_COVERAGE == '\0') ||
     (param_3->EARLY_Z_PASS_ONLY_MATERIAL_MASKING != false)) {
    __return_storage_ptr__->PIXELSHADEROUTPUT_COVERAGE = false;
  }
  else {
    __return_storage_ptr__->PIXELSHADEROUTPUT_COVERAGE = true;
  }
  return __return_storage_ptr__;
}

// ConsoleCommandClosePipelineFileCache @ 145e92950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl ConsoleCommandClosePipelineFileCache(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  FShaderPipelineCache *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> <StackX_8;
  
  if (FShaderPipelineCache::ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
    lpCriticalSection = &FShaderPipelineCache::ShaderPipelineCache->Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar5 = GetShaderPipelineCacheSaveBoundPSOLog();
    if (bVar5) {
      FShaderPipelineCache::SavePipelineFileCache(BoundPSOsOnly);
    }
    bVar5 = GetPSOFileCacheSaveUserCache();
    if (bVar5) {
      FShaderPipelineCache::SavePipelineFileCache(Incremental);
    }
    pFVar4 = FShaderPipelineCache::ShaderPipelineCache;
    pwVar10 = L"";
    if (FShaderPipelineCache::UserCacheTaskKey.Data.ArrayNum != 0) {
      pwVar10 = (wchar_t *)FShaderPipelineCache::UserCacheTaskKey.Data.AllocatorInstance.Data;
    }
    iVar7 = FShaderPipelineCache::UserCacheTaskKey.Data.ArrayNum + -1;
    if (FShaderPipelineCache::UserCacheTaskKey.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
    iVar7 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                        *)&pFVar4->ShaderCacheTasks,uVar6,&FShaderPipelineCache::UserCacheTaskKey);
    if (iVar7 != -1) {
      lVar8 = (longlong)iVar7 * 0x20 + *(longlong *)&pFVar4->ShaderCacheTasks;
      puVar9 = (undefined8 *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         ((FShaderPipelineCacheTask *)*puVar9 != (FShaderPipelineCacheTask *)0x0)) {
        FShaderPipelineCacheTask::Close((FShaderPipelineCacheTask *)*puVar9);
        pFVar4 = FShaderPipelineCache::ShaderPipelineCache;
        pFVar1 = (FShaderPipelineCache::ShaderPipelineCache->PendingPrecompilePSOCacheKeys).
                 AllocatorInstance.Data;
        if ((pFVar1 < (FScriptContainerElement *)0x155195599) &&
           ((&FShaderPipelineCache::UserCacheTaskKey <
             pFVar1 + (longlong)
                      (FShaderPipelineCache::ShaderPipelineCache->PendingPrecompilePSOCacheKeys).
                      ArrayMax * 0x10 &&
            (bVar5 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        <StackX_8.Item = &FShaderPipelineCache::UserCacheTaskKey;
        TArray<FString,TSizedDefaultAllocator<32>_>::
        RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                  (&pFVar4->PendingPrecompilePSOCacheKeys,&<StackX_8);
        pFVar4 = FShaderPipelineCache::ShaderPipelineCache;
        if (*(int *)&(FShaderPipelineCache::ShaderPipelineCache->ShaderCacheTasks).field_0x8 !=
            *(int *)&(FShaderPipelineCache::ShaderPipelineCache->ShaderCacheTasks).field_0x34) {
          iVar7 = FShaderPipelineCache::UserCacheTaskKey.Data.ArrayNum + -1;
          FVar3 = FShaderPipelineCache::UserCacheTaskKey.Data.AllocatorInstance;
          if (FShaderPipelineCache::UserCacheTaskKey.Data.ArrayNum == 0) {
            iVar7 = 0;
            FVar3.Data = (FScriptContainerElement *)L"";
          }
          uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar3.Data);
          TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FString>
                    ((TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
                      *)&pFVar4->ShaderCacheTasks,uVar6,&FShaderPipelineCache::UserCacheTaskKey);
        }
      }
    }
    FPipelineFileCacheManager::CloseUserPipelineFileCache();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ConsoleCommandLoadPipelineFileCache @ 145e92960

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl ConsoleCommandLoadPipelineFileCache(void)

{
  FShaderPipelineCache::CloseUserPipelineFileCache();
  FShaderPipelineCache::OpenUserPipelineFileCache(GMaxRHIShaderPlatform);
  return;
}

// ConsoleCommandSavePipelineFileCache @ 145e92980

void __cdecl ConsoleCommandSavePipelineFileCache(void)

{
  bool bVar1;
  
  bVar1 = GetShaderPipelineCacheSaveBoundPSOLog();
  if (bVar1) {
    FShaderPipelineCache::SavePipelineFileCache(BoundPSOsOnly);
  }
  bVar1 = GetPSOFileCacheSaveUserCache();
  if (bVar1) {
    FShaderPipelineCache::SavePipelineFileCache(Incremental);
    return;
  }
  return;
}

// ConsoleCommandSwitchModePipelineCacheCmd @ 145e929c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ConsoleCommandSwitchModePipelineCacheCmd(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  int iVar2;
  BatchMode BVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (param_1->ArrayNum < 1) {
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(pFVar1 + 8);
  lVar5 = (longlong)local_10;
  _Src = *(void **)pFVar1;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar5 * 2);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_10 != 0) {
    FVar4.Data = local_18.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"Pause");
  if (iVar2 == 0) {
    if (FShaderPipelineCache::ShaderPipelineCache != (FShaderPipelineCache *)0x0) {
      FShaderPipelineCache::ShaderPipelineCache->PausedCount =
           FShaderPipelineCache::ShaderPipelineCache->PausedCount + 1;
      if (3 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (0 < FShaderPipelineCache::ShaderPipelineCache->PausedCount) {
        FShaderPipelineCache::ShaderPipelineCache->bPaused = true;
      }
    }
  }
  else {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_10 != 0) {
      FVar4.Data = local_18.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"Background");
    if (iVar2 == 0) {
      BVar3 = Background;
    }
    else {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_10 != 0) {
        FVar4.Data = local_18.Data;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"Fast");
      if (iVar2 == 0) {
        BVar3 = Fast;
      }
      else {
        FVar4.Data = (FScriptContainerElement *)L"";
        if (local_10 != 0) {
          FVar4.Data = local_18.Data;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,L"Precompile");
        if (iVar2 != 0) goto LAB_145e92b23;
        BVar3 = Precompile;
      }
    }
    FShaderPipelineCache::SetBatchMode(BVar3);
    FShaderPipelineCache::ResumeBatching();
  }
LAB_145e92b23:
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ConvertRayTracingShaderBindings @ 145e93030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRayTracingShaderBindings * __cdecl
ConvertRayTracingShaderBindings
          (FRayTracingShaderBindings *__return_storage_ptr__,FRHIBatchedShaderParameters *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  FRHITexture *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FRHIUnorderedAccessView *pFVar6;
  FRHIResource *pFVar7;
  FRHIUniformBuffer *pFVar8;
  code *pcVar9;
  bool bVar10;
  FRayTracingShaderBindings *pFVar11;
  FRHIShaderParameterResource *pFVar12;
  FRHIShaderParameterResource *pFVar13;
  
  FRayTracingShaderBindings::FRayTracingShaderBindings(__return_storage_ptr__);
  if (((param_1->Parameters).ArrayNum != 0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("BatchedParameters.Parameters.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                          ,0x42d,
                          L"FRHIShaderParameter is not supported by FRayTracingShaderBindings"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
    return pFVar11;
  }
  pFVar12 = (param_1->ResourceParameters).DataPtr;
  pFVar13 = pFVar12 + (param_1->ResourceParameters).ArrayNum;
  do {
    if (pFVar12 == pFVar13) {
      iVar3 = (param_1->BindlessParameters).ArrayNum;
      pFVar12 = (param_1->BindlessParameters).DataPtr;
      piVar1 = &(__return_storage_ptr__->BindlessParameters).ArrayMax;
      (__return_storage_ptr__->BindlessParameters).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return __return_storage_ptr__;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar1,
                 &(__return_storage_ptr__->BindlessParameters).AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((__return_storage_ptr__->BindlessParameters).AllocatorInstance.Data,pFVar12,
               (longlong)iVar3 << 4);
      }
      return __return_storage_ptr__;
    }
    switch(pFVar12->Type) {
    case Texture:
      uVar2 = pFVar12->Index;
      pFVar4 = (FRHITexture *)pFVar12->Resource;
      if ((0x3f < uVar2) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->Textures[uVar2] = pFVar4;
      break;
    case ResourceView:
      uVar2 = pFVar12->Index;
      pFVar5 = (FRHIShaderResourceView *)pFVar12->Resource;
      if ((0x3f < uVar2) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->SRVs[uVar2] = pFVar5;
      break;
    case UnorderedAccessView:
      uVar2 = pFVar12->Index;
      pFVar6 = (FRHIUnorderedAccessView *)pFVar12->Resource;
      if ((0xf < uVar2) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->UAVs[uVar2] = pFVar6;
      break;
    case Sampler:
      uVar2 = pFVar12->Index;
      pFVar7 = pFVar12->Resource;
      if ((0x1f < uVar2) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->Samplers[uVar2] = (FRHISamplerState *)pFVar7;
      break;
    case UniformBuffer:
      uVar2 = pFVar12->Index;
      pFVar8 = (FRHIUniformBuffer *)pFVar12->Resource;
      if ((0xf < uVar2) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->UniformBuffers[uVar2] = pFVar8;
      break;
    case ResourceCollection:
      bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                          ,0x444,L"");
      if (bVar10) {
code_r0x000145e93281:
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      break;
    default:
      bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                          ,0x447,L"");
      if (bVar10) goto code_r0x000145e93281;
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// EmitNullShaderParameterFatalError @ 145e95c40

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
EmitNullShaderParameterFatalError
          (TShaderRefBase<FShader,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,ushort param_3)

{
  FShaderMapBase *pFVar1;
  FShader *this;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  FShaderParametersMetadata::GetFullMemberCodeName(param_2,&local_18,param_3);
  pFVar1 = param_1->ShaderMap;
  this = param_1->ShaderContent;
  if ((pFVar1->PointerTable == (FShaderMapPointerTable *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("PointerTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x9b4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FShader::GetType(this,pFVar1->PointerTable);
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ExtractShaderParameterResources @ 145e99420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
ExtractShaderParameterResources
          (FRHIBatchedShaderParameters *param_1,FShaderParameterBindings *param_2,
          TArrayView<unsigned_char_const_,int> *param_3,EUniformBufferBindingFlags param_4)

{
  ForAnyElementType FVar1;
  byte bVar2;
  int iVar3;
  FRHIBatchedShaderParametersAllocator *pFVar4;
  FRHIBatchedShaderParameters *pFVar5;
  FRDGResource *pFVar6;
  code *pcVar7;
  FRHIResource *pFVar8;
  bool bVar9;
  ForAnyElementType FVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  EUniformBufferBindingFlags local_res20;
  undefined1 local_c8;
  undefined1 local_c7 [15];
  FRHIShaderParameterResource local_b8;
  short local_a8;
  short local_a6 [7];
  FRHIResource *local_98;
  undefined8 uStack_90;
  ForAnyElementType local_88;
  FRHIUniformBuffer *local_80;
  FRHIUniformBuffer *local_78 [2];
  FShaderParameterReader local_68;
  FRHIShaderParameterResource local_58 [2];
  
  pFVar8 = (FRHIResource *)param_3->DataPtr;
  uStack_90 = *(undefined8 *)&param_3->ArrayNum;
  uVar11 = (ulong64)(int)*(undefined8 *)&param_3->ArrayNum;
  iVar3 = (param_2->BindlessResourceParameters).ArrayNum;
  local_res20 = param_4;
  local_b8.Resource = pFVar8;
  local_b8._8_8_ = uVar11;
  local_98 = pFVar8;
  if (iVar3 != 0) {
    FVar10 = (param_2->BindlessResourceParameters).AllocatorInstance;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(param_2->BindlessResourceParameters).AllocatorInstance.field_0x0 +
               ((longlong)FVar10 >> 0x18));
    }
    FVar1 = (ForAnyElementType)((longlong)FVar10 + (longlong)iVar3 * 6);
    while( true ) {
      if ((param_2->BindlessResourceParameters).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FBindlessResourceParameter_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar10 == FVar1) break;
      local_68.Data = (uchar *)pFVar8;
      local_68.DataSize = uVar11;
      ExtractShaderParameterResource<FShaderParameterBindings::FBindlessResourceParameter>
                (local_58,&local_68,(FBindlessResourceParameter *)FVar10);
      pFVar4 = param_1->Allocator;
      pFVar5 = pFVar4->AttachedParameters;
      if (pFVar5 != param_1) {
        if ((pFVar5 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4->AttachedParameters = param_1;
      }
      FRHIBatchedShaderParametersAllocator::
      Emplace<FRHIShaderParameterResource,FRHIShaderParameterResource_const_&>
                (param_1->Allocator,&param_1->Allocator->BindlessParameters,
                 &param_1->BindlessParameters,local_58);
      FVar10 = (ForAnyElementType)((longlong)FVar10 + 6);
    }
  }
  pFVar8 = local_98;
  iVar3 = (param_2->ResourceParameters).ArrayNum;
  if ((param_2->ParameterReferences).ArrayNum + (param_2->GraphUniformBuffers).ArrayNum + iVar3 != 0
     ) {
    FVar10 = (param_2->ResourceParameters).AllocatorInstance;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(param_2->ResourceParameters).AllocatorInstance.field_0x0 +
               ((longlong)FVar10 >> 0x18));
    }
    local_88 = (ForAnyElementType)((longlong)FVar10 + (longlong)iVar3 * 4);
    while( true ) {
      FVar1 = local_88;
      if ((param_2->ResourceParameters).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar10 == FVar1) break;
      switch(*(undefined1 *)((longlong)FVar10 + 3)) {
      case 5:
        local_b8._8_8_ = (ulonglong)(uint5)local_b8._11_5_ << 0x18;
        local_b8.Resource =
             *(FRHIResource **)((longlong)&pFVar8->_padding_ + (ulonglong)*(ushort *)FVar10);
        local_b8.Index = (ushort)*(byte *)((longlong)FVar10 + 2);
        break;
      case 6:
        local_b8.Index = 0;
        local_b8.Type = ResourceView;
        local_b8.Resource =
             *(FRHIResource **)((longlong)&pFVar8->_padding_ + (ulonglong)*(ushort *)FVar10);
        local_b8.Index = (ushort)*(byte *)((longlong)FVar10 + 2);
        break;
      case 7:
        local_b8.Index = 0;
        local_b8.Type = UnorderedAccessView;
        local_b8.Resource =
             *(FRHIResource **)((longlong)&pFVar8->_padding_ + (ulonglong)*(ushort *)FVar10);
        local_b8.Index = (ushort)*(byte *)((longlong)FVar10 + 2);
        break;
      case 8:
        local_b8.Index = 0;
        local_b8.Type = Sampler;
        local_b8.Resource =
             *(FRHIResource **)((longlong)&pFVar8->_padding_ + (ulonglong)*(ushort *)FVar10);
        local_b8.Index = (ushort)*(byte *)((longlong)FVar10 + 2);
        break;
      case 9:
        pFVar6 = *(FRDGResource **)((longlong)&pFVar8->_padding_ + (ulonglong)*(ushort *)FVar10);
        FRDGResource::MarkResourceAsUsed(pFVar6);
        bVar2 = *(byte *)((longlong)FVar10 + 2);
        FRDGResource::ValidateRHIAccess(pFVar6);
        local_b8.Resource = pFVar6->ResourceRHI;
        local_b8._9_2_ = 0;
        local_b8.Index._0_1_ = bVar2;
        break;
      default:
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x29f,L"Unhandled resource type?");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_b8.Resource = (FRHIResource *)0x0;
        local_b8.Index = 0;
        local_b8.Type = Texture;
        local_b8._11_5_ = 0;
        break;
      case 0xc:
      case 0xd:
      case 0x11:
        pFVar6 = *(FRDGResource **)((longlong)&pFVar8->_padding_ + (ulonglong)*(ushort *)FVar10);
        (**(code **)(pFVar6->_padding_ + 8))(pFVar6);
        bVar2 = *(byte *)((longlong)FVar10 + 2);
        FRDGResource::ValidateRHIAccess(pFVar6);
        local_b8.Resource = pFVar6->ResourceRHI;
        local_b8.Type = ResourceView;
        local_b8.Index = (ushort)bVar2;
        break;
      case 0xe:
      case 0x12:
        pFVar6 = *(FRDGResource **)((longlong)&pFVar8->_padding_ + (ulonglong)*(ushort *)FVar10);
        (**(code **)(pFVar6->_padding_ + 8))(pFVar6);
        bVar2 = *(byte *)((longlong)FVar10 + 2);
        FRDGResource::ValidateRHIAccess(pFVar6);
        local_b8.Resource = pFVar6->ResourceRHI;
        local_b8.Type = UnorderedAccessView;
        local_b8.Index = (ushort)bVar2;
      }
      pFVar4 = param_1->Allocator;
      pFVar5 = pFVar4->AttachedParameters;
      if (pFVar5 != param_1) {
        if ((pFVar5 != (FRHIBatchedShaderParameters *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!AttachedParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                               ,0x82,
                               L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4->AttachedParameters = param_1;
      }
      FRHIBatchedShaderParametersAllocator::
      Emplace<FRHIShaderParameterResource,FRHIShaderParameterResource_const_&>
                (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                 &param_1->ResourceParameters,&local_b8);
      FVar10 = (ForAnyElementType)((longlong)FVar10 + 4);
    }
    FVar10 = (param_2->GraphUniformBuffers).AllocatorInstance;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(param_2->GraphUniformBuffers).AllocatorInstance.field_0x0 +
               ((longlong)FVar10 >> 0x18));
    }
    iVar3 = (param_2->GraphUniformBuffers).ArrayNum;
    FVar1 = (ForAnyElementType)((longlong)FVar10 + (longlong)iVar3 * 4);
    while( true ) {
      if ((param_2->GraphUniformBuffers).ArrayNum != iVar3) {
        local_c8 = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FParameterStructReference_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_c8);
      }
      if (FVar10 == FVar1) break;
      uVar12 = (ulonglong)*(ushort *)((longlong)FVar10 + 2);
      if (((&(pFVar8->AtomicFlags).Packed.field_0x0)[uVar12] & local_res20) != 0) {
        (**(code **)(**(longlong **)((longlong)&pFVar8->_padding_ + uVar12) + 8))();
        pFVar6 = *(FRDGResource **)((longlong)&pFVar8->_padding_ + uVar12);
        local_a8 = *(short *)FVar10;
        FRDGResource::ValidateRHIAccess(pFVar6);
        local_80 = (FRHIUniformBuffer *)pFVar6->ResourceRHI;
        pFVar4 = param_1->Allocator;
        pFVar5 = pFVar4->AttachedParameters;
        if (pFVar5 != param_1) {
          if ((pFVar5 != (FRHIBatchedShaderParameters *)0x0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("!AttachedParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                 ,0x82,
                                 L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar4->AttachedParameters = param_1;
        }
        FRHIBatchedShaderParametersAllocator::
        Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,short_&>
                  (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                   &param_1->ResourceParameters,&local_80,&local_a8);
      }
      FVar10 = (ForAnyElementType)((longlong)FVar10 + 4);
    }
    FVar10 = (param_2->ParameterReferences).AllocatorInstance;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(param_2->ParameterReferences).AllocatorInstance.field_0x0 +
               ((longlong)FVar10 >> 0x18));
    }
    iVar3 = (param_2->ParameterReferences).ArrayNum;
    FVar1 = (ForAnyElementType)((longlong)FVar10 + (longlong)iVar3 * 4);
    while( true ) {
      if ((param_2->ParameterReferences).ArrayNum != iVar3) {
        local_c7[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FParameterStructReference_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_c7);
      }
      if (FVar10 == FVar1) break;
      if (((&(pFVar8->AtomicFlags).Packed.field_0x0)[*(ushort *)((longlong)FVar10 + 2)] &
          local_res20) != 0) {
        local_a6[0] = *(short *)FVar10;
        pFVar4 = param_1->Allocator;
        local_78[0] = *(FRHIUniformBuffer **)
                       ((longlong)&pFVar8->_padding_ + (ulonglong)*(ushort *)((longlong)FVar10 + 2))
        ;
        pFVar5 = pFVar4->AttachedParameters;
        if (pFVar5 != param_1) {
          if ((pFVar5 != (FRHIBatchedShaderParameters *)0x0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("!AttachedParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                 ,0x82,
                                 L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar4->AttachedParameters = param_1;
        }
        FRHIBatchedShaderParametersAllocator::
        Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,short_&>
                  (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                   &param_1->ResourceParameters,local_78,local_a6);
      }
      FVar10 = (ForAnyElementType)((longlong)FVar10 + 4);
    }
  }
  return;
}

// FailureToBindNonOptionalParameter @ 145e99970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl FailureToBindNonOptionalParameter(wchar_t *param_1,wchar_t *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_88;
  FTextFormat local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  if ((byte)LogShaders._0_1_ < 5) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogShaders);
    return;
  }
  UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  pFVar4 = FText::FromString(&local_48,param_2);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UnrealEd",L"Error_FailedToBindShaderParameter",
                      L"Failure to bind non-optional shader parameter {0}! The parameter is either not present in the shader, or the shader compiler optimized it out. This will be an assert with LogShaders suppressed!"
                     );
  pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar5,Default);
  local_28.Type = Text;
  FText::FText((FText *)&local_28.TextValue,pFVar4);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_88.AllocatorInstance.Data,&local_28,1);
  local_78.TextFormatData.Object = (pFVar6->TextFormatData).Object;
  local_78.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar6->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_78.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_68,&local_78,&local_88);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FFormatArgumentValue *)local_88.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar6->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar7 = FText::ToString(&local_68);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar8,L"Warning");
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// FetchRuntimeShaderGlobalDefines @ 145e99b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderGlobalDefines * __cdecl
FetchRuntimeShaderGlobalDefines
          (FShaderGlobalDefines *__return_storage_ptr__,EShaderPlatform param_1)

{
  __return_storage_ptr__->USES_BASE_PASS_VELOCITY = false;
  __return_storage_ptr__->GBUFFER_HAS_VELOCITY = false;
  __return_storage_ptr__->GBUFFER_HAS_TANGENT = false;
  __return_storage_ptr__->ALLOW_STATIC_LIGHTING = false;
  __return_storage_ptr__->CLEAR_COAT_BOTTOM_NORMAL = false;
  __return_storage_ptr__->IRIS_NORMAL = false;
  __return_storage_ptr__->DXT5_NORMALMAPS = false;
  __return_storage_ptr__->SELECTIVE_BASEPASS_OUTPUTS = false;
  __return_storage_ptr__->USE_DBUFFER = false;
  __return_storage_ptr__->FORWARD_SHADING = false;
  __return_storage_ptr__->PROJECT_VERTEX_FOGGING_FOR_OPAQUE = false;
  __return_storage_ptr__->PROJECT_MOBILE_DISABLE_VERTEX_FOG = false;
  __return_storage_ptr__->PROJECT_ALLOW_GLOBAL_CLIP_PLANE = false;
  __return_storage_ptr__->EARLY_Z_PASS_ONLY_MATERIAL_MASKING = false;
  __return_storage_ptr__->PROJECT_SUPPORT_SKY_ATMOSPHERE = false;
  __return_storage_ptr__->PROJECT_SUPPORT_SKY_ATMOSPHERE_AFFECTS_HEIGHFOG = false;
  __return_storage_ptr__->PROJECT_EXPFOG_MATCHES_VFOG = false;
  __return_storage_ptr__->SUPPORT_CLOUD_SHADOW_ON_FORWARD_LIT_TRANSLUCENT = false;
  __return_storage_ptr__->SUPPORT_CLOUD_SHADOW_ON_SINGLE_LAYER_WATER = false;
  __return_storage_ptr__->SUPPORT_PRIMITIVE_ALPHA_HOLDOUT = false;
  __return_storage_ptr__->PLATFORM_SUPPORTS_SHADER_ROOT_CONSTANTS = false;
  __return_storage_ptr__->PLATFORM_SUPPORTS_SHADER_BUNDLE_DISPATCH = false;
  __return_storage_ptr__->PLATFORM_SUPPORTS_RENDERTARGET_WRITE_MASK = false;
  __return_storage_ptr__->PLATFORM_SUPPORTS_PER_PIXEL_DBUFFER_MASK = false;
  __return_storage_ptr__->PLATFORM_SUPPORTS_DISTANCE_FIELDS = false;
  __return_storage_ptr__->PLATFORM_ALLOW_SCENE_DATA_COMPRESSED_TRANSFORMS = false;
  __return_storage_ptr__->COMPILE_SHADERS_FOR_DEVELOPMENT_ALLOWED = false;
  __return_storage_ptr__->bSupportsDualBlending = false;
  __return_storage_ptr__->LegacyGBufferFormat = 0;
  *(undefined4 *)&__return_storage_ptr__->bNeedVelocityDepth = 0;
  return __return_storage_ptr__;
}

// FindUniformBufferStructByFName @ 145e9b7f0

FShaderParametersMetadata * __cdecl FindUniformBufferStructByFName(FName param_1)

{
  longlong lVar1;
  int iVar2;
  TMap<FHashedName,FShaderParametersMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>_>
  *pTVar3;
  undefined1 *puVar4;
  FName local_res8;
  FHashedName local_res10 [3];
  
  local_res8 = param_1;
  pTVar3 = FShaderParametersMetadata::GetNameStructMap();
  FHashedName::FHashedName(local_res10,&local_res8);
  if (*(int *)&pTVar3->field_0x8 != *(int *)&pTVar3->field_0x34) {
    puVar4 = *(undefined1 **)&pTVar3->field_0x40;
    if (*(undefined1 **)&pTVar3->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &pTVar3->field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((local_res10[0].Hash >> 0x20) * 0x17 + local_res10[0].Hash &
                              (ulonglong)(*(int *)&pTVar3->field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)pTVar3 + (longlong)iVar2 * 0x18;
        if (*(ulonglong *)(*(longlong *)pTVar3 + (longlong)iVar2 * 0x18) == local_res10[0].Hash) {
          if (lVar1 == 0) {
            return (FShaderParametersMetadata *)0x0;
          }
          return *(FShaderParametersMetadata **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FShaderParametersMetadata *)0x0;
}

// FindUniformBufferStructByLayoutHash @ 145e9b890

FShaderParametersMetadata * __cdecl FindUniformBufferStructByLayoutHash(uint param_1)

{
  longlong lVar1;
  int iVar2;
  TMap<unsigned_int,FShaderParametersMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FShaderParametersMetadata_*,0>_>
  *pTVar3;
  undefined1 *puVar4;
  
  pTVar3 = GetLayoutHashStructMap();
  if (*(int *)&pTVar3->field_0x8 != *(int *)&pTVar3->field_0x34) {
    puVar4 = *(undefined1 **)&pTVar3->field_0x40;
    if (*(undefined1 **)&pTVar3->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &pTVar3->field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&pTVar3->field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)pTVar3 + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)pTVar3 + (longlong)iVar2 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FShaderParametersMetadata *)0x0;
          }
          return *(FShaderParametersMetadata **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FShaderParametersMetadata *)0x0;
}

// FindUniformBufferStructByName @ 145e9b910

FShaderParametersMetadata * __cdecl FindUniformBufferStructByName(wchar_t *param_1)

{
  longlong lVar1;
  int iVar2;
  FName *pFVar3;
  TMap<FHashedName,FShaderParametersMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderParametersMetadata_*,0>_>
  *pTVar4;
  undefined1 *puVar5;
  FName local_res10;
  FHashedName local_res18;
  FName local_res20;
  
  pFVar3 = FName::FName(&local_res20,param_1,FNAME_Find);
  local_res10 = *pFVar3;
  pTVar4 = FShaderParametersMetadata::GetNameStructMap();
  FHashedName::FHashedName(&local_res18,&local_res10);
  if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
    puVar5 = *(undefined1 **)&pTVar4->field_0x40;
    if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &pTVar4->field_0x38;
    }
    iVar2 = *(int *)(puVar5 + ((local_res18.Hash >> 0x20) * 0x17 + local_res18.Hash &
                              (ulonglong)(*(int *)&pTVar4->field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)pTVar4 + (longlong)iVar2 * 0x18;
        if (*(ulonglong *)(*(longlong *)pTVar4 + (longlong)iVar2 * 0x18) == local_res18.Hash) {
          if (lVar1 == 0) {
            return (FShaderParametersMetadata *)0x0;
          }
          return *(FShaderParametersMetadata **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FShaderParametersMetadata *)0x0;
}

// GetAsBuffer @ 145e9cd10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBuffer * __cdecl GetAsBuffer(FRDGViewableResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGBuffer *pFVar3;
  
  if (param_1->Type != Buffer) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ViewableResourceType::StaticType == Resource->Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRDGBuffer *)param_1;
}

// GetBufferType @ 145e9cdd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

EResourceType __cdecl GetBufferType(FRDGBuffer *param_1)

{
  EBufferUsageFlags EVar1;
  
  EVar1 = (param_1->Desc).Usage;
  if ((EVar1 & ByteAddressBuffer) != None) {
    return BYTEBUFFER;
  }
  return EVar1 >> 0x10 & STRUCTURED_BUFFER;
}

// GetGlobalShaderVariableToStructMap @ 145e9da30

TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> * __cdecl
GetGlobalShaderVariableToStructMap(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetGlobalShaderVariableToStructMap'::__l2::
             _dynamic_atexit_destructor_for__GlobalShaderVariableToStructMap__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return &GlobalShaderVariableToStructMap;
}

// GetLayoutHashStructMap @ 145e9db80

TMap<unsigned_int,FShaderParametersMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FShaderParametersMetadata_*,0>_>
* __cdecl GetLayoutHashStructMap(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetLayoutHashStructMap'::__l2::_dynamic_atexit_destructor_for__GLayoutHashStructMap__)
      ;
      _Init_thread_footer(&_TSS0);
    }
  }
  return &GLayoutHashStructMap;
}

// GetPSOFileCacheSaveUserCache @ 145e9e580

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl GetPSOFileCacheSaveUserCache(void)

{
  int iVar1;
  IConsoleManager *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pIVar2 = IConsoleManager::Get();
      CVarPSOFileCacheSaveUserCache =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.ShaderPipelineCache.SaveUserCache",1);
      _Init_thread_footer(&_TSS0);
    }
  }
  if ((GRHIGlobals.SupportsPipelineFileCache != false) &&
     (CVarPSOFileCacheSaveUserCache != (IConsoleVariable *)0x0)) {
    iVar1 = (**(code **)(*(longlong *)CVarPSOFileCacheSaveUserCache + 200))();
    if (0 < iVar1) {
      return true;
    }
  }
  return false;
}

// GetPreprocessConstants @ 145e9e970

FPreprocessConstants * __cdecl GetPreprocessConstants(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FPreprocessConstants::FPreprocessConstants(&PreprocessConstants);
      atexit(`GetPreprocessConstants'::__l2::_dynamic_atexit_destructor_for__PreprocessConstants__);
      _Init_thread_footer(&_TSS0);
      return &PreprocessConstants;
    }
  }
  return &PreprocessConstants;
}

// GetResourceType @ 145e9ed40

/* WARNING: Removing unreachable block (ram,0x000145e9edb3) */
/* WARNING: Removing unreachable block (ram,0x000145e9edd8) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EResourceType __cdecl GetResourceType(FRDGViewableResource *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EResourceType EVar4;
  
  if ((param_1 == (FRDGViewableResource *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x11e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if (param_1->Type == Buffer) {
    uVar1 = (uint)param_1[1]._padding_;
    EVar4 = uVar1 >> 0x10 & STRUCTURED_BUFFER;
    if ((uVar1 & 0x10) != 0) {
      EVar4 = BYTEBUFFER;
    }
    return EVar4;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                     ,0x124,L"");
  if (!bVar3) {
    return BUFFER;
  }
  pcVar2 = (code *)swi(3);
  EVar4 = (*pcVar2)();
  return EVar4;
}

// GetScatterCopyParamsAndPermutation @ 145e9ee00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
GetScatterCopyParamsAndPermutation
          (FRDGBuilder *param_1,FRDGViewableResource *param_2,FRDGBufferSRV *param_3,
          FRDGBufferSRV *param_4,FScatterUploadConfig *param_5,uint param_6,FParameters *param_7,
          TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
          *param_8)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  EResourceType EVar5;
  EByteBufferStructuredSize EVar6;
  FRDGBufferUAV *pFVar7;
  FRDGBufferUAVDesc local_48;
  FRDGBufferUAVDesc local_38;
  FRDGBufferUAVDesc local_28;
  
  EVar5 = GetResourceType(param_2);
  (param_7->Common).Size = param_5->NumThreadsPerScatter;
  (param_7->Common).SrcOffset = 0;
  (param_7->Common).DstOffset = 0;
  param_7->NumScatters = param_6;
  if (EVar5 == BYTEBUFFER) {
    uVar1 = param_5->NumBytesPerThread;
    param_7->UploadByteAddressBuffer = param_4;
    param_7->ScatterByteAddressBuffer = param_3;
    if ((param_2->Type != Buffer) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("ViewableResourceType::StaticType == Resource->Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_48._padding_._2_1_ = 0;
    bVar4 = 0;
    if ((param_2[1]._padding_ & 0x80) != 0) {
      bVar4 = 0x1c;
    }
    local_48._padding_._0_2_ = (ushort)bVar4;
    local_48.Buffer = (FRDGBuffer *)param_2;
    pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_48,SkipBarrier);
    (param_7->Common).DstByteAddressBuffer = pFVar7;
    param_8->DimensionValue = (uVar1 == 0x10) + 2;
  }
  else {
    if (EVar5 == STRUCTURED_BUFFER) {
      if ((param_2->Type != Buffer) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("ViewableResourceType::StaticType == Resource->Type",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38._padding_._2_1_ = 0;
      bVar4 = 0;
      if ((param_2[1]._padding_ & 0x80) != 0) {
        bVar4 = 0x1c;
      }
      local_38._padding_._0_2_ = (ushort)bVar4;
      local_38.Buffer = (FRDGBuffer *)param_2;
      pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_38,SkipBarrier);
      EVar6 = GetStructuredBufferElementSize(pFVar7);
      if (EVar6 == Uint1) {
        param_7->UploadStructuredBuffer1x = param_4;
        (param_7->Common).DstStructuredBuffer1x = pFVar7;
      }
      else if (EVar6 == Uint2) {
        param_7->UploadStructuredBuffer2x = param_4;
        (param_7->Common).DstStructuredBuffer2x = pFVar7;
      }
      else if (EVar6 == Uint4) {
        param_7->UploadStructuredBuffer4x = param_4;
        (param_7->Common).DstStructuredBuffer4x = pFVar7;
      }
      else if (EVar6 == Uint8) {
        param_7->UploadStructuredBuffer8x = param_4;
        (param_7->Common).DstStructuredBuffer8x = pFVar7;
      }
      param_7->ScatterStructuredBuffer = param_3;
      param_8->DimensionValue = 1;
      (param_8->Tail).DimensionValue = EVar6;
      return;
    }
    if (EVar5 == BUFFER) {
      param_7->UploadStructuredBuffer4x = param_4;
      param_7->ScatterStructuredBuffer = param_3;
      local_28.Buffer = GetAsBuffer(param_2);
      local_28._padding_._2_1_ = 0;
      bVar4 = 0;
      if ((((local_28.Buffer)->Desc).Usage & DrawIndirect) != None) {
        bVar4 = 0x1c;
      }
      local_28._padding_._0_2_ = (ushort)bVar4;
      pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_28,SkipBarrier);
      (param_7->Common).DstBuffer = pFVar7;
      param_8->DimensionValue = 0;
    }
    else {
      param_8->DimensionValue = 4;
    }
  }
  (param_8->Tail).DimensionValue = 2;
  return;
}

// GetShaderCompressionFormat @ 145e9f1e0

FName __cdecl GetShaderCompressionFormat(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  FName in_RCX;
  undefined1 local_res8 [32];
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
  *(undefined4 *)in_RCX = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  *(undefined4 *)((longlong)in_RCX + 4) = 0;
  return in_RCX;
}

// GetShaderCompressionOodleSettings @ 145e9f220

void __cdecl
GetShaderCompressionOodleSettings(ECompressor *param_1,ECompressionLevel *param_2,FName *param_3)

{
  int iVar1;
  IConsoleManager *pIVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pIVar2 = IConsoleManager::Get();
      CVarSkipCompression =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Shaders.SkipCompression",1);
      _Init_thread_footer(&_TSS0);
    }
  }
  if (_TSS1 <= *piVar3) goto LAB_145e9f269;
  _Init_thread_header(&_TSS1);
  if (_TSS1 != -1) goto LAB_145e9f269;
  if (CVarSkipCompression == (IConsoleVariable *)0x0) {
LAB_145e9f320:
    bSkipCompression = false;
  }
  else {
    iVar1 = (**(code **)(*(longlong *)CVarSkipCompression + 200))();
    if (iVar1 == 0) goto LAB_145e9f320;
    bSkipCompression = true;
  }
  _Init_thread_footer(&_TSS1);
LAB_145e9f269:
  if (bSkipCompression != false) {
    *param_1 = Selkie;
    *param_2 = None;
    return;
  }
  *param_1 = Mermaid;
  *param_2 = Normal;
  return;
}

// GetShaderParameterMacroName @ 145ea01c0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

wchar_t * __cdecl GetShaderParameterMacroName(EUniformBufferBaseType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == UBMT_INVALID) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderParameterBaseType != UBMT_INVALID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadata.cpp"
                       ,0x133,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return kShaderParameterMacroNames[param_1];
}

// GetShaderPipelineCacheSaveBoundPSOLog @ 145ea03b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl GetShaderPipelineCacheSaveBoundPSOLog(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  
  if (!bOnce) {
    bOnce = true;
    pwVar3 = FCommandLine::Get();
    bCmdLineForce = FParse::Param(pwVar3,L"logpso");
  }
  pTVar1 = CVarPSOFileCacheSaveBoundPSOLog.Ref;
  if (GRHIGlobals.SupportsPipelineFileCache == false) {
    return false;
  }
  if (bCmdLineForce == false) {
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 1) {
      return false;
    }
  }
  return true;
}

// GetShaderSourceDebugHashPrefix @ 145ea06c0

TStringView<char> * __cdecl
GetShaderSourceDebugHashPrefix(TStringView<char> *__return_storage_ptr__)

{
  GetPreprocessConstants();
  *__return_storage_ptr__ = FPreprocessConstants::DebugHashPrefix;
  return __return_storage_ptr__;
}

// GetShaderSourceDebugHashPrefixWide @ 145ea06f0

TStringView<wchar_t> * __cdecl
GetShaderSourceDebugHashPrefixWide(TStringView<wchar_t> *__return_storage_ptr__)

{
  GetPreprocessConstants();
  *__return_storage_ptr__ = FPreprocessConstants::DebugHashPrefixWide;
  return __return_storage_ptr__;
}

// GetStructuredBufferElementSize @ 145ea2790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

EByteBufferStructuredSize __cdecl GetStructuredBufferElementSize(FRDGBufferUAV *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EByteBufferStructuredSize EVar4;
  uint uVar5;
  EByteBufferStructuredSize EVar6;
  uint uVar7;
  
  uVar3 = (((param_1->Desc).Buffer)->Desc).BytesPerElement;
  uVar5 = (int)uVar3 >> 0x1f & 3;
  uVar3 = uVar3 + uVar5;
  uVar7 = (int)uVar3 >> 2;
  EVar4 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> EVar4 == 0; EVar4 = EVar4 - Uint2) {
    }
  }
  EVar6 = Uint1;
  if (uVar7 != 0) {
    EVar6 = EVar4;
  }
  if ((((uVar3 & 3) != uVar5) || ((uVar7 & uVar7 - 1) != 0)) || (Uint8 < EVar6)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(BytesPerElement % 4) == 0 && FMath::IsPowerOfTwo(BytesPerElement / 4) && Log2NumElements < uint32(EByteBufferStructuredSize::Count)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                       ,0x136,
                       L"Unsupported structured buffer BytesPerElement size (%d) for buffer \'%s\' (supported sizes are 4,8,16,32)."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return EVar6;
}

// GetTypeHash @ 145ea2880

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

uint __cdecl GetTypeHash(FShaderId *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)&param_1->Platform & 0xffff;
  uVar3 = param_1->PermutationId - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar3 = *(int *)(param_1->MaterialShaderMapHash).Hash - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar1 = (param_1->ShaderPipelineName).Hash;
  uVar3 = ((int)(uVar1 >> 0x20) * 0x17 - uVar4) + (int)uVar1 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = ((uint)((ulonglong)param_1->VFType >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->VFType >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = (uVar2 >> 0x10 ^ uVar2) - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar2 = ((uint)((ulonglong)param_1->Type >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Type >> 4)
          ) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// IsD3DPlatform @ 145ea5b90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsD3DPlatform(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].Language == LANGUAGE_D3D;
}

// IsRegistered @ 145ea5cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __cdecl IsRegistered(FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2)

{
  TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *pTVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint local_res10 [2];
  FRHIBuffer *local_res18;
  
  if (param_2->Reference == (FRDGPooledBuffer *)0x0) {
    return false;
  }
  local_res18 = (param_2->Reference->Buffer).Reference;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
  ::FindIdByHash((TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
                  *)&param_1->ExternalBuffers,(FHashType)(uint)local_res10,
                 (FRHIBuffer **)(ulonglong)((uVar3 >> 0x10 ^ uVar3) & 0x7fffffff));
  if (local_res10[0] != 0xffffffff) {
    pTVar1 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
             ::FData::Get((FData *)&param_1->ExternalBuffers,local_res10[0]);
    puVar2 = &(pTVar1->Pair).field_0x8;
    if (puVar2 != (undefined1 *)0x0) {
      return *(longlong *)puVar2 != 0;
    }
  }
  return false;
}

// MemcpyResource @ 145ea5ff0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
MemcpyResource(FRDGBuilder *param_1,FRDGBuffer *param_2,FRDGBuffer *param_3,
              FMemcpyResourceParams *param_4)

{
  byte bVar1;
  FRDGBufferSRV *pFVar2;
  FRDGBufferUAV *pFVar3;
  FRDGBufferUAVDesc local_38;
  FRDGBufferSRVDesc local_28;
  
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_._4_4_ = 0;
  local_28._padding_ = 0;
  local_28._padding_._0_1_ = 0;
  if (((param_3->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  local_28.Buffer = param_3;
  pFVar2 = FRDGBuilder::CreateSRV(param_1,&local_28);
  bVar1 = 0;
  local_38._padding_._2_1_ = 0;
  if (((param_2->Desc).Usage & DrawIndirect) != None) {
    bVar1 = 0x1c;
  }
  local_38._padding_._0_2_ = (ushort)bVar1;
  local_38.Buffer = param_2;
  pFVar3 = FRDGBuilder::CreateUAV(param_1,&local_38,SkipBarrier);
  MemcpyResource(param_1,(FRDGUnorderedAccessView *)pFVar3,(FRDGShaderResourceView *)pFVar2,param_4)
  ;
  return;
}

// MemcpyResource @ 145ea60c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemcpyResource(FRDGBuilder *param_1,FRDGBufferUAV *param_2,FRDGBufferSRV *param_3,
              FMemcpyResourceParams *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  EResourceType EVar5;
  EResourceType EVar6;
  int iVar7;
  EByteBufferStructuredSize EVar8;
  FRDGViewableResource *pFVar9;
  FRDGViewableResource *pFVar10;
  undefined8 *puVar11;
  FGlobalShaderMap *this;
  FRDGBufferSRV *pFVar12;
  FShaderType *pFVar13;
  FName this_00;
  TIntVector3<int> *pTVar14;
  FRDGEventName *pFVar15;
  FShaderParametersMetadata *pFVar16;
  undefined8 *puVar17;
  sbyte sVar18;
  undefined8 *puStack_f8;
  FRDGViewableResource *pFStack_f0;
  FRDGViewableResource *pFStack_e8;
  TIntVector3<int>_u_0 TStack_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_c8;
  undefined1 auStack_b8 [8];
  FString FStack_b0;
  TShaderRefBase<FRDGMemcpyCS,FShaderMapPointerTable> TStack_98;
  TIntVector3<int> TStack_88;
  FRDGEventName aFStack_78 [2];
  
  puVar17 = (undefined8 *)0x0;
  if (((param_2 == (FRDGBufferUAV *)0x0) || (param_3 == (FRDGBufferSRV *)0x0)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("UAV && SRV",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x18a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = (FRDGViewableResource *)(**(code **)(param_2->_padding_ + 0x10))(param_2);
  pFStack_e8 = pFVar9;
  pFVar10 = (FRDGViewableResource *)(**(code **)(param_3->_padding_ + 0x10))(param_3);
  pFStack_f0 = pFVar10;
  EVar5 = GetResourceType(pFVar9);
  EVar6 = GetResourceType(pFVar10);
  if ((EVar5 != EVar6) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("ResourceType == GetResourceType(SrcResource)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,399,
                         L"Unable to MemcpyResource because the source and destination view types don\'t match."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar11 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x80,0x10);
  if (puVar11 == (undefined8 *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar11[4] = 0;
    *puVar11 = &___7__TObject_VFParameters_FRDGMemcpyCS___FRDGAllocator__6B_;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar17 = puVar11;
  }
  puStack_f8 = puVar17;
  if ((((undefined8 **)param_1->_padding_ <= &puStack_f8) &&
      (&puStack_f8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
      )) && (bVar4 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = puStack_f8;
  *(uint *)((longlong)puVar17 + 0x14) = param_4->Count;
  *(uint *)(puVar17 + 3) = param_4->SrcOffset;
  *(uint *)((longlong)puVar17 + 0x1c) = param_4->DstOffset;
  iVar7 = 0;
  if (EVar5 == BUFFER) {
    if (((char)param_3->_padding_ != '\x03') &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ViewType::StaticType == View->Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                           ,0x5cd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar17[10] = param_3;
    if (((char)param_2->_padding_ != '\x02') &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ViewType::StaticType == View->Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                           ,0x5cd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar17[4] = param_2;
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
LAB_145ea657e:
    EVar8 = Uint4;
  }
  else {
    if (EVar5 == STRUCTURED_BUFFER) {
      iVar7 = 1;
      if (((char)param_2->_padding_ != '\x02') &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("ViewType::StaticType == View->Type",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                             ,0x5cd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar8 = GetStructuredBufferElementSize(param_2);
      if (EVar8 == Uint1) {
        pFVar12 = GetAs<FRDGBufferSRV>((FRDGView *)param_3);
        puVar17[0xe] = pFVar12;
        puVar17[8] = param_2;
      }
      else if (EVar8 == Uint2) {
        pFVar12 = GetAs<FRDGBufferSRV>((FRDGView *)param_3);
        puVar17[0xd] = pFVar12;
        puVar17[7] = param_2;
      }
      else if (EVar8 == Uint4) {
        pFVar12 = GetAs<FRDGBufferSRV>((FRDGView *)param_3);
        puVar17[0xc] = pFVar12;
        puVar17[6] = param_2;
      }
      else if (EVar8 == Uint8) {
        pFVar12 = GetAs<FRDGBufferSRV>((FRDGView *)param_3);
        puVar17[0xb] = pFVar12;
        puVar17[5] = param_2;
      }
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel])
      ;
    }
    else {
      if (EVar5 == BYTEBUFFER) {
        iVar7 = 2;
        if (((char)param_3->_padding_ != '\x03') &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("ViewType::StaticType == View->Type",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                               ,0x5cd,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar17[0xf] = param_3;
        if (((char)param_2->_padding_ != '\x02') &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("ViewType::StaticType == View->Type",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                               ,0x5cd,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar17[9] = param_2;
        this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                  [(int)GMaxRHIFeatureLevel]);
        goto LAB_145ea657e;
      }
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x1c7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar8 = Uint4;
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel])
      ;
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i.");
      iVar7 = 4;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((3 < (int)EVar8) || ((int)EVar8 < 0)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("PermutationId < PermutationCount && PermutationId >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar13 = (FShaderType *)FRDGMemcpyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&TStack_c8,pFVar13,iVar7 + EVar8 * 4);
  if (TStack_c8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_b8);
    FName::ToString((FName *)this_00,&FStack_b0);
    FRDGMemcpyCS::GetStaticType();
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGMemcpyCS::GetStaticType();
  TStack_98.ShaderContent = (FRDGMemcpyCS *)TStack_c8.ShaderContent;
  TStack_98.ShaderMap = TStack_c8.ShaderMap;
  sVar18 = 0;
  if (EVar5 == BYTEBUFFER) {
    sVar18 = 2;
  }
  pTVar14 = FComputeShaderUtils::GetGroupCountWrapped(&TStack_88,param_4->Count >> sVar18,0x40);
  uVar2 = *(undefined8 *)&pTVar14->field0_0x0;
  iVar7 = (pTVar14->field0_0x0)._s_0.Z;
  pFVar15 = FRDGEventName::FRDGEventName(aFStack_78,L"Memcpy %s -> %s");
  pFVar16 = FRDGMemcpyCS::FParameters::FTypeInfo::GetStructMetadata();
  TStack_d8._0_8_ = uVar2;
  TStack_d8._s_0.Z = iVar7;
  FComputeShaderUtils::AddPass<FRDGMemcpyCS>
            (param_1,pFVar15,Compute,&TStack_98,pFVar16,(FParameters *)(puVar17 + 2),
             (TIntVector3<int> *)&TStack_d8._s_0);
  if (aFStack_78[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(aFStack_78[0].FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// MemcpyResource @ 145ea60d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemcpyResource(FRDGBuilder *param_1,FRDGUnorderedAccessView *param_2,FRDGShaderResourceView *param_3
              ,FMemcpyResourceParams *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  EResourceType EVar5;
  EResourceType EVar6;
  int iVar7;
  EByteBufferStructuredSize EVar8;
  FRDGViewableResource *pFVar9;
  FRDGViewableResource *pFVar10;
  undefined8 *puVar11;
  FGlobalShaderMap *this;
  FRDGBufferSRV *pFVar12;
  FShaderType *pFVar13;
  FName this_00;
  TIntVector3<int> *pTVar14;
  FRDGEventName *pFVar15;
  FShaderParametersMetadata *pFVar16;
  undefined8 *puVar17;
  sbyte sVar18;
  undefined8 *local_f8;
  FRDGViewableResource *local_f0;
  FRDGViewableResource *local_e8;
  TIntVector3<int>_u_0 local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  undefined1 local_b8 [8];
  FString local_b0;
  TShaderRefBase<FRDGMemcpyCS,FShaderMapPointerTable> local_98;
  TIntVector3<int> local_88;
  FRDGEventName local_78 [2];
  
  puVar17 = (undefined8 *)0x0;
  if (((param_2 == (FRDGUnorderedAccessView *)0x0) || (param_3 == (FRDGShaderResourceView *)0x0)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("UAV && SRV",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x18a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = (FRDGViewableResource *)(**(code **)(param_2->_padding_ + 0x10))(param_2);
  local_e8 = pFVar9;
  pFVar10 = (FRDGViewableResource *)(**(code **)(*(longlong *)param_3 + 0x10))(param_3);
  local_f0 = pFVar10;
  EVar5 = GetResourceType(pFVar9);
  EVar6 = GetResourceType(pFVar10);
  if ((EVar5 != EVar6) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("ResourceType == GetResourceType(SrcResource)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,399,
                         L"Unable to MemcpyResource because the source and destination view types don\'t match."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar11 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x80,0x10);
  if (puVar11 == (undefined8 *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar11[4] = 0;
    *puVar11 = &___7__TObject_VFParameters_FRDGMemcpyCS___FRDGAllocator__6B_;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar17 = puVar11;
  }
  local_f8 = puVar17;
  if ((((undefined8 **)param_1->_padding_ <= &local_f8) &&
      (&local_f8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_f8;
  *(uint *)((longlong)puVar17 + 0x14) = param_4->Count;
  *(uint *)(puVar17 + 3) = param_4->SrcOffset;
  *(uint *)((longlong)puVar17 + 0x1c) = param_4->DstOffset;
  iVar7 = 0;
  if (EVar5 == BUFFER) {
    if ((param_3->field_0x20 != '\x03') &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ViewType::StaticType == View->Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                           ,0x5cd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar17[10] = param_3;
    if (((char)param_2->_padding_ != '\x02') &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ViewType::StaticType == View->Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                           ,0x5cd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar17[4] = param_2;
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
LAB_145ea657e:
    EVar8 = Uint4;
  }
  else {
    if (EVar5 == STRUCTURED_BUFFER) {
      iVar7 = 1;
      if (((char)param_2->_padding_ != '\x02') &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("ViewType::StaticType == View->Type",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                             ,0x5cd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar8 = GetStructuredBufferElementSize((FRDGBufferUAV *)param_2);
      if (EVar8 == Uint1) {
        pFVar12 = GetAs<FRDGBufferSRV>((FRDGView *)param_3);
        puVar17[0xe] = pFVar12;
        puVar17[8] = param_2;
      }
      else if (EVar8 == Uint2) {
        pFVar12 = GetAs<FRDGBufferSRV>((FRDGView *)param_3);
        puVar17[0xd] = pFVar12;
        puVar17[7] = param_2;
      }
      else if (EVar8 == Uint4) {
        pFVar12 = GetAs<FRDGBufferSRV>((FRDGView *)param_3);
        puVar17[0xc] = pFVar12;
        puVar17[6] = param_2;
      }
      else if (EVar8 == Uint8) {
        pFVar12 = GetAs<FRDGBufferSRV>((FRDGView *)param_3);
        puVar17[0xb] = pFVar12;
        puVar17[5] = param_2;
      }
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel])
      ;
    }
    else {
      if (EVar5 == BYTEBUFFER) {
        iVar7 = 2;
        if ((param_3->field_0x20 != '\x03') &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("ViewType::StaticType == View->Type",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                               ,0x5cd,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar17[0xf] = param_3;
        if (((char)param_2->_padding_ != '\x02') &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("ViewType::StaticType == View->Type",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                               ,0x5cd,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar17[9] = param_2;
        this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                  [(int)GMaxRHIFeatureLevel]);
        goto LAB_145ea657e;
      }
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x1c7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar8 = Uint4;
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel])
      ;
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i.");
      iVar7 = 4;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((3 < (int)EVar8) || ((int)EVar8 < 0)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("PermutationId < PermutationCount && PermutationId >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar13 = (FShaderType *)FRDGMemcpyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_c8,pFVar13,iVar7 + EVar8 * 4);
  if (local_c8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_b8);
    FName::ToString((FName *)this_00,&local_b0);
    FRDGMemcpyCS::GetStaticType();
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGMemcpyCS::GetStaticType();
  local_98.ShaderContent = (FRDGMemcpyCS *)local_c8.ShaderContent;
  local_98.ShaderMap = local_c8.ShaderMap;
  sVar18 = 0;
  if (EVar5 == BYTEBUFFER) {
    sVar18 = 2;
  }
  pTVar14 = FComputeShaderUtils::GetGroupCountWrapped(&local_88,param_4->Count >> sVar18,0x40);
  uVar2 = *(undefined8 *)&pTVar14->field0_0x0;
  iVar7 = (pTVar14->field0_0x0)._s_0.Z;
  pFVar15 = FRDGEventName::FRDGEventName(local_78,L"Memcpy %s -> %s");
  pFVar16 = FRDGMemcpyCS::FParameters::FTypeInfo::GetStructMetadata();
  local_d8._0_8_ = uVar2;
  local_d8._s_0.Z = iVar7;
  FComputeShaderUtils::AddPass<FRDGMemcpyCS>
            (param_1,pFVar15,Compute,&local_98,pFVar16,(FParameters *)(puVar17 + 2),
             (TIntVector3<int> *)&local_d8._s_0);
  if (local_78[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_78[0].FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// MemsetResource @ 145ea6710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl MemsetResource(FRDGBuilder *param_1,FRDGBuffer *param_2,FMemsetResourceParams *param_3)

{
  byte bVar1;
  FRDGBufferUAV *pFVar2;
  FRDGBufferUAVDesc local_18;
  
  local_18._padding_._2_1_ = 0;
  bVar1 = 0;
  if (((param_2->Desc).Usage & DrawIndirect) != None) {
    bVar1 = 0x1c;
  }
  local_18._padding_._0_2_ = (ushort)bVar1;
  local_18.Buffer = param_2;
  pFVar2 = FRDGBuilder::CreateUAV(param_1,&local_18,SkipBarrier);
  MemsetResource(param_1,(FRDGUnorderedAccessView *)pFVar2,param_3);
  return;
}

// MemsetResource @ 145ea6780

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemsetResource(FRDGBuilder *param_1,FRDGBufferUAV *param_2,FMemsetResourceParams *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EResourceType EVar6;
  EByteBufferStructuredSize EVar7;
  FRDGViewableResource *pFVar8;
  undefined8 *puVar9;
  FGlobalShaderMap *this;
  FShaderType *pFVar10;
  FName this_00;
  TIntVector3<int> *pTVar11;
  FRDGEventName *pFVar12;
  FShaderParametersMetadata *pFVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStackX_20 [8];
  undefined8 *apuStack_d8 [2];
  TIntVector3<int>_u_0 TStack_c8;
  TIntVector3<int> TStack_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_a8;
  FString FStack_98;
  TShaderRefBase<FRDGMemsetBufferCS,FShaderMapPointerTable> TStack_88;
  FRDGEventName aFStack_78 [2];
  
  puVar14 = (undefined8 *)0x0;
  if ((param_2 == (FRDGBufferUAV *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("UAV",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x13e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (FRDGViewableResource *)(**(code **)(param_2->_padding_ + 0x10))(param_2);
  EVar7 = Uint4;
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar9[4] = 0;
    *puVar9 = &___7__TObject_VFParameters_FRDGByteBufferShader___FRDGAllocator__6B_;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar14 = puVar9;
  }
  apuStack_d8[0] = puVar14;
  if ((((undefined8 **)param_1->_padding_ <= apuStack_d8) &&
      (apuStack_d8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
      )) && (bVar4 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  uVar15 = 1;
  *(int *)&param_1->_padding_ = iVar5 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = apuStack_d8[0];
  ((FParameters *)(puVar14 + 2))->Value = param_3->Value;
  *(uint *)((longlong)puVar14 + 0x14) = param_3->Count;
  *(uint *)((longlong)puVar14 + 0x1c) = param_3->DstOffset;
  EVar6 = GetResourceType(pFVar8);
  if (EVar6 == BUFFER) {
    iVar5 = 0;
    if (((char)param_2->_padding_ != '\x02') &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ViewType::StaticType == View->Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                           ,0x5cd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar14[4] = param_2;
LAB_145ea6ae2:
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  }
  else {
    iVar5 = 1;
    if (EVar6 == STRUCTURED_BUFFER) {
      if (((char)param_2->_padding_ != '\x02') &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("ViewType::StaticType == View->Type",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                             ,0x5cd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar7 = GetStructuredBufferElementSize(param_2);
      if (EVar7 == Uint1) {
        puVar14[8] = param_2;
      }
      else if (EVar7 == Uint2) {
        puVar14[7] = param_2;
      }
      else if (EVar7 == Uint4) {
        puVar14[6] = param_2;
      }
      else if (EVar7 == Uint8) {
        puVar14[5] = param_2;
      }
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel])
      ;
    }
    else {
      if (EVar6 == BYTEBUFFER) {
        iVar5 = 2;
        if (((char)param_2->_padding_ != '\x02') &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("ViewType::StaticType == View->Type",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                               ,0x5cd,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar14[9] = param_2;
        uVar15 = 4;
        goto LAB_145ea6ae2;
      }
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x171,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel])
      ;
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i.");
      iVar5 = 4;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((3 < (int)EVar7) || ((int)EVar7 < 0)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("PermutationId < PermutationCount && PermutationId >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar10 = (FShaderType *)FRDGMemsetBufferCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&TStack_a8,pFVar10,iVar5 + EVar7 * 4);
  if (TStack_a8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStackX_20);
    FName::ToString((FName *)this_00,&FStack_98);
    FRDGMemsetBufferCS::GetStaticType();
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGMemsetBufferCS::GetStaticType();
  TStack_88.ShaderContent = (FRDGMemsetBufferCS *)TStack_a8.ShaderContent;
  TStack_88.ShaderMap = TStack_a8.ShaderMap;
  pTVar11 = FComputeShaderUtils::GetGroupCountWrapped
                      (&TStack_b8,(int)(param_3->Count / uVar15),0x40);
  uVar2 = *(undefined8 *)&pTVar11->field0_0x0;
  iVar5 = (pTVar11->field0_0x0)._s_0.Z;
  pFVar12 = FRDGEventName::FRDGEventName(aFStack_78,L"MemsetResource (%s)");
  pFVar13 = FRDGByteBufferShader::FParameters::FTypeInfo::GetStructMetadata();
  TStack_c8._0_8_ = uVar2;
  TStack_c8._s_0.Z = iVar5;
  FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>
            (param_1,pFVar12,Compute,&TStack_88,pFVar13,(FParameters *)(puVar14 + 2),
             (TIntVector3<int> *)&TStack_c8._s_0);
  if (aFStack_78[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(aFStack_78[0].FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// MemsetResource @ 145ea6790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
MemsetResource(FRDGBuilder *param_1,FRDGUnorderedAccessView *param_2,FMemsetResourceParams *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EResourceType EVar6;
  EByteBufferStructuredSize EVar7;
  FRDGViewableResource *pFVar8;
  undefined8 *puVar9;
  FGlobalShaderMap *this;
  FShaderType *pFVar10;
  FName this_00;
  TIntVector3<int> *pTVar11;
  FRDGEventName *pFVar12;
  FShaderParametersMetadata *pFVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 local_res20 [8];
  undefined8 *local_d8 [2];
  TIntVector3<int>_u_0 local_c8;
  TIntVector3<int> local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  FString local_98;
  TShaderRefBase<FRDGMemsetBufferCS,FShaderMapPointerTable> local_88;
  FRDGEventName local_78 [2];
  
  puVar14 = (undefined8 *)0x0;
  if ((param_2 == (FRDGUnorderedAccessView *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("UAV",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x13e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (FRDGViewableResource *)(**(code **)(param_2->_padding_ + 0x10))(param_2);
  EVar7 = Uint4;
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar9[4] = 0;
    *puVar9 = &___7__TObject_VFParameters_FRDGByteBufferShader___FRDGAllocator__6B_;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar14 = puVar9;
  }
  local_d8[0] = puVar14;
  if ((((undefined8 **)param_1->_padding_ <= local_d8) &&
      (local_d8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  uVar15 = 1;
  *(int *)&param_1->_padding_ = iVar5 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_d8[0];
  ((FParameters *)(puVar14 + 2))->Value = param_3->Value;
  *(uint *)((longlong)puVar14 + 0x14) = param_3->Count;
  *(uint *)((longlong)puVar14 + 0x1c) = param_3->DstOffset;
  EVar6 = GetResourceType(pFVar8);
  if (EVar6 == BUFFER) {
    iVar5 = 0;
    if (((char)param_2->_padding_ != '\x02') &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ViewType::StaticType == View->Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                           ,0x5cd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar14[4] = param_2;
LAB_145ea6ae2:
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  }
  else {
    iVar5 = 1;
    if (EVar6 == STRUCTURED_BUFFER) {
      if (((char)param_2->_padding_ != '\x02') &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("ViewType::StaticType == View->Type",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                             ,0x5cd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar7 = GetStructuredBufferElementSize((FRDGBufferUAV *)param_2);
      if (EVar7 == Uint1) {
        puVar14[8] = param_2;
      }
      else if (EVar7 == Uint2) {
        puVar14[7] = param_2;
      }
      else if (EVar7 == Uint4) {
        puVar14[6] = param_2;
      }
      else if (EVar7 == Uint8) {
        puVar14[5] = param_2;
      }
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel])
      ;
    }
    else {
      if (EVar6 == BYTEBUFFER) {
        iVar5 = 2;
        if (((char)param_2->_padding_ != '\x02') &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("ViewType::StaticType == View->Type",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                               ,0x5cd,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar14[9] = param_2;
        uVar15 = 4;
        goto LAB_145ea6ae2;
      }
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x171,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel])
      ;
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i.");
      iVar5 = 4;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((3 < (int)EVar7) || ((int)EVar7 < 0)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("PermutationId < PermutationCount && PermutationId >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar10 = (FShaderType *)FRDGMemsetBufferCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_a8,pFVar10,iVar5 + EVar7 * 4);
  if (local_a8.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
    FName::ToString((FName *)this_00,&local_98);
    FRDGMemsetBufferCS::GetStaticType();
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGMemsetBufferCS::GetStaticType();
  local_88.ShaderContent = (FRDGMemsetBufferCS *)local_a8.ShaderContent;
  local_88.ShaderMap = local_a8.ShaderMap;
  pTVar11 = FComputeShaderUtils::GetGroupCountWrapped(&local_b8,(int)(param_3->Count / uVar15),0x40)
  ;
  uVar2 = *(undefined8 *)&pTVar11->field0_0x0;
  iVar5 = (pTVar11->field0_0x0)._s_0.Z;
  pFVar12 = FRDGEventName::FRDGEventName(local_78,L"MemsetResource (%s)");
  pFVar13 = FRDGByteBufferShader::FParameters::FTypeInfo::GetStructMetadata();
  local_c8._0_8_ = uVar2;
  local_c8._s_0.Z = iVar5;
  FComputeShaderUtils::AddPass<FRDGMemsetBufferCS>
            (param_1,pFVar12,Compute,&local_88,pFVar13,(FParameters *)(puVar14 + 2),
             (TIntVector3<int> *)&local_c8._s_0);
  if (local_78[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_78[0].FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// ParseShaderResourceBindingType @ 145ea89b0

EShaderCodeResourceBindingType __cdecl ParseShaderResourceBindingType(wchar_t *param_1)

{
  wchar_t *_Str1;
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  EShaderCodeResourceBindingType EVar6;
  char cVar7;
  longlong lVar8;
  size_t sVar9;
  
  iVar2 = wcsncmp(param_1,L"RasterizerOrdered",0x11);
  iVar3 = wcsncmp(param_1,L"RW",2);
  if ((iVar3 == 0) || (iVar2 == 0)) {
    lVar8 = 1;
  }
  else {
    lVar8 = 0;
  }
  cVar7 = (char)lVar8;
  _Str1 = param_1 + lVar8 * 2;
  iVar3 = 0;
  wVar1 = *_Str1;
  pwVar5 = _Str1;
  while (((wVar1 != L'\0' && (wVar1 != L' ')) && (wVar1 != L'<'))) {
    pwVar5 = pwVar5 + 1;
    iVar3 = iVar3 + 1;
    wVar1 = *pwVar5;
  }
  if (cVar7 == '\0') {
    if (iVar3 == 0xc) {
      sVar9 = 0xc;
      pwVar5 = L"SamplerState";
    }
    else {
      if (iVar3 != 0x16) goto LAB_145ea8a7f;
      sVar9 = 0x16;
      pwVar5 = L"SamplerComparisonState";
    }
    iVar3 = wcsncmp(_Str1,pwVar5,sVar9);
    if (iVar3 == 0) {
      return SamplerState;
    }
    goto LAB_145ea8ce8;
  }
LAB_145ea8a7f:
  if (iVar3 == 9) {
    sVar9 = 9;
    pwVar5 = L"Texture2D";
LAB_145ea8aab:
    iVar4 = wcsncmp(_Str1,pwVar5,sVar9);
    if (iVar4 == 0) {
      if (cVar7 == '\0') {
        return Texture2D;
      }
      return RWTexture2D;
    }
  }
  else {
    if (iVar3 == 0xf) {
      sVar9 = 0xf;
      pwVar5 = L"TextureExternal";
      goto LAB_145ea8aab;
    }
    if ((iVar3 == 0xe) && (iVar4 = wcsncmp(_Str1,L"Texture2DArray",0xe), iVar4 == 0)) {
      if (cVar7 == '\0') {
        return Texture2DArray;
      }
      return RWTexture2DArray;
    }
  }
  if ((cVar7 == '\0') && (iVar3 == 0xb)) {
    iVar4 = wcsncmp(_Str1,L"Texture2DMS",0xb);
    if (iVar4 == 0) {
      return Texture2DMS;
    }
LAB_145ea8b59:
    iVar4 = wcsncmp(_Str1,L"TextureCube",0xb);
    if (iVar4 == 0) {
      if (cVar7 == '\0') {
        return TextureCube;
      }
      return RWTextureCube;
    }
  }
  else if (iVar3 == 9) {
    iVar4 = wcsncmp(_Str1,L"Texture3D",9);
    if (iVar4 == 0) {
      if (cVar7 == '\0') {
        return Texture3D;
      }
      return RWTexture3D;
    }
  }
  else if (iVar3 == 0xb) goto LAB_145ea8b59;
  if ((cVar7 == '\0') && (iVar3 == 0x10)) {
    iVar4 = wcsncmp(_Str1,L"TextureCubeArray",0x10);
    if (iVar4 == 0) {
      return TextureCubeArray;
    }
LAB_145ea8c20:
    iVar4 = wcsncmp(_Str1,L"StructuredBuffer",0x10);
    if (iVar4 == 0) {
      if (cVar7 == '\0') {
        return StructuredBuffer;
      }
      return RWStructuredBuffer;
    }
  }
  else if (iVar3 == 0xf) {
    iVar4 = wcsncmp(_Str1,L"TextureMetadata",0xf);
    if (iVar4 == 0) {
      if (cVar7 == '\0') {
        return TextureMetadata;
      }
      return RWTextureMetadata;
    }
  }
  else if (iVar3 == 6) {
    iVar4 = wcsncmp(_Str1,L"Buffer",6);
    if (iVar4 == 0) {
      if (cVar7 == '\0') {
        return Buffer;
      }
      return RWBuffer;
    }
  }
  else {
    if (iVar3 == 0x10) goto LAB_145ea8c20;
    if ((iVar3 == 0x11) && (iVar4 = wcsncmp(_Str1,L"ByteAddressBuffer",0x11), iVar4 == 0)) {
      if (cVar7 == '\0') {
        return ByteAddressBuffer;
      }
      return RWByteAddressBuffer;
    }
  }
  if (cVar7 == '\0') {
    if (iVar3 == 0x1f) {
      iVar3 = wcsncmp(_Str1,L"RaytracingAccelerationStructure",0x1f);
      if (iVar3 == 0) {
        return RaytracingAccelerationStructure;
      }
    }
    else if (iVar3 == 0x13) {
      iVar3 = wcsncmp(_Str1,L"FResourceCollection",0x13);
      if (iVar3 == 0) {
        return ResourceCollection;
      }
    }
    else if ((iVar3 == 0x17) && (iVar3 = wcsncmp(_Str1,L"FIndirectVirtualTexture",0x17), iVar3 == 0)
            ) {
      return Buffer;
    }
  }
LAB_145ea8ce8:
  EVar6 = Invalid;
  if (iVar2 == 0) {
    EVar6 = RasterizerOrderedTexture2D;
  }
  return EVar6;
}

// PipelineStateCacheOnAppDeactivate @ 145ea8d80

void __cdecl PipelineStateCacheOnAppDeactivate(void)

{
  bool bVar1;
  
  bVar1 = GetShaderPipelineCacheSaveBoundPSOLog();
  if (bVar1) {
    FShaderPipelineCache::SavePipelineFileCache(BoundPSOsOnly);
  }
  bVar1 = GetPSOFileCacheSaveUserCache();
  if (bVar1) {
    FShaderPipelineCache::SavePipelineFileCache(Incremental);
    return;
  }
  return;
}

// PreCompileMaskComparison @ 145ea91b0

bool __cdecl PreCompileMaskComparison(ulong64 param_1,ulong64 param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  pTVar1 = CVarPSOFileCacheGameFileMaskEnabled.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_145ea91ed;
  }
  lVar3 = 0;
LAB_145ea91ed:
  uVar4 = param_1 & param_2;
  if ((*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 0) ||
     ((uVar4 & 0x3f) != 0 &&
      (((uVar4 & 0x3f000) != 0 && ((uVar4 & 0xe00000) != 0 && (uVar4 & 0x1c0000) != 0)) &&
      (uVar4 & 0xfc0) != 0))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// RHISupportsInstancedStereo @ 145eac670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl RHISupportsInstancedStereo(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x136,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bSupportsInstancedStereo;
}

// RHISupportsMobileMultiView @ 145eac6d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl RHISupportsMobileMultiView(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x10c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bSupportsMobileMultiView;
}

// RHISupportsMultiViewport @ 145eac730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl RHISupportsMultiViewport(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x13c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].SupportsMultiViewport != 0;
}

// RemoveResourceStats @ 145eafd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RemoveResourceStats(FShaderMapResourceCode *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  int iVar3;
  FName FVar4;
  FBufferOwner *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  longlong lVar15;
  FThreadSafeStaticStat<FStat_STAT_VertexShaderMemory> FVar16;
  FNameEntryId FVar17;
  uchar auVar18 [8];
  FScriptContainerElement *pFVar19;
  uint local_res8;
  uint uStackX_c;
  FThreadSafeStaticStat<FStat_STAT_VertexShaderMemory> local_res10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_98;
  FName local_90;
  FScriptContainerElement *local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_70;
  FStatMessage local_60 [2];
  
  uVar10 = FShaderMapResourceCode::GetSizeBytes(param_1);
  auVar18[4] = '\0';
  auVar18[5] = '\0';
  auVar18[6] = '\0';
  auVar18[7] = '\0';
  auVar18[0] = (char)uVar10;
  auVar18[1] = (char)(uVar10 >> 8);
  auVar18[2] = (char)(uVar10 >> 0x10);
  auVar18[3] = (char)(uVar10 >> 0x18);
  if (uVar10 != 0) {
    FVar12 = StatPtr_STAT_Shaders_ShaderResourceMemory;
    if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
      pFVar11 = FName::FName(&local_80,"STAT_Shaders_ShaderResourceMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,
                          *pFVar11,L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar12;
    FVar17 = FVar4.ComparisonIndex.Value;
    uVar10 = FVar4.Number;
    local_res8 = FVar17.Value;
    uStackX_c = uVar10;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_70.NameAndInfo.Number = uVar10 & 0xffffbfff | 0xb000;
      local_98 = FVar4;
      local_70.StatData.Pad = auVar18;
      local_70.NameAndInfo.Index.Value = FVar17.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_70);
      FStatsTrace::Add(&local_98,-(longlong)auVar18);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  iVar3 = (param_1->ShaderCodeResources).ArrayNum;
  pFVar19 = (param_1->ShaderCodeResources).AllocatorInstance.Data;
  local_88 = pFVar19 + (longlong)iVar3 * 0x28;
  do {
    while( true ) {
      pFVar8 = local_88;
      if ((param_1->ShaderCodeResources).ArrayNum != iVar3) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<FShaderCodeResource,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar19 == pFVar8) {
        return;
      }
      pFVar5 = *(FBufferOwner **)(pFVar19 + 8);
      local_res18.Owner = pFVar5;
      if (pFVar5 == (FBufferOwner *)0x0) break;
      LOCK();
      paVar1 = &pFVar5->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) != 0) break;
      LOCK();
      pFVar5->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar5->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
LAB_145eaff47:
      if (((ulonglong)pFVar5->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
      }
      auVar18 = (uchar  [8])pFVar5->Size;
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
      if (auVar18 != (uchar  [8])0x0) {
        if ((*(longlong *)pFVar19 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Header",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                               ,0x4d3,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar6 = *(longlong **)pFVar19;
        if (plVar6 == (longlong *)0x0) {
          lVar15 = 0;
        }
        else {
          if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
          lVar15 = plVar6[1];
        }
        switch(*(undefined1 *)(lVar15 + 8)) {
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
          FThreadSafeStaticStatInner<FStat_STAT_PixelShaderMemory,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PixelShaderMemory,1> *)
                     &StatPtr_STAT_PixelShaderMemory);
          FVar16 = local_res10;
          break;
        default:
          FVar16 = StatPtr_STAT_VertexShaderMemory;
          if (StatPtr_STAT_VertexShaderMemory ==
              (FThreadSafeStaticStat<FStat_STAT_VertexShaderMemory>)0x0) {
            pFVar11 = FName::FName(&local_78,"STAT_VertexShaderMemory");
            FVar16 = (FThreadSafeStaticStat<FStat_STAT_VertexShaderMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VertexShaderMemory,
                                *pFVar11,L"VertexShader Memory","STATGROUP_Memory",
                                "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                                MCR_Physical);
          }
        }
        local_res10 = FVar16;
        FVar4 = *(FName *)local_res10;
        FVar17 = FVar4.ComparisonIndex.Value;
        uVar10 = FVar4.Number;
        local_res20 = FVar17.Value;
        uStackX_24 = uVar10;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar13 == (FThreadStats *)0x0) {
            pFVar14 = FThreadStatsPool::Get();
            pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
          }
          local_60[0].NameAndInfo.Number = uVar10 & 0xffffbfff | 0xb000;
          local_90 = FVar4;
          local_60[0].StatData.Pad = auVar18;
          local_60[0].NameAndInfo.Index.Value = FVar17.Value;
          FThreadStats::AddStatMessage(pFVar13,local_60);
          FStatsTrace::Add(&local_90,-(longlong)auVar18);
          if (pFVar13->ScopeCount == 0) {
            FThreadStats::Flush(pFVar13,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar13,false,false);
          }
        }
      }
      pFVar19 = pFVar19 + 0x28;
    }
    if (pFVar5 != (FBufferOwner *)0x0) goto LAB_145eaff47;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
    pFVar19 = pFVar19 + 0x28;
  } while( true );
}

// ResizeBufferIfNeeded @ 145eb0f70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
ResizeBufferIfNeeded
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2,FRDGBufferDesc *param_3,
          wchar_t *param_4)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  FRDGBuffer *pFVar7;
  TRefCountPtr<FRDGPooledBuffer> *pTVar8;
  FRDGBuffer *pFVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferUAV *pFVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res10 [8];
  FMemcpyResourceParams local_68;
  FRDGBufferUAVDesc local_58;
  FRDGBufferSRVDesc local_48;
  
  pFVar2 = param_2->Reference;
  if (pFVar2 == (FRDGPooledBuffer *)0x0) {
    pFVar7 = FRDGBuilder::CreateBuffer(param_1,param_3,param_4,None);
    pTVar8 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar7);
    pFVar2 = param_2->Reference;
    pFVar3 = pTVar8->Reference;
    if (pFVar2 != pFVar3) {
      param_2->Reference = pFVar3;
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar2 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar2->_padding_;
        LOCK();
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar2->_padding_)(pFVar2,1);
        }
      }
    }
    return pFVar7;
  }
  uVar12 = param_3->NumElements * param_3->BytesPerElement;
  uVar13 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  if (pFVar2->CommittedSizeInBytes < (ulonglong)uVar13) {
    uVar13 = (uint)pFVar2->CommittedSizeInBytes;
  }
  pFVar7 = FRDGBuilder::RegisterExternalBuffer(param_1,param_2,None);
  if (uVar12 != uVar13) {
    pFVar2 = param_2->Reference;
    if ((((pFVar2->Desc).Usage & ReservedResource) == None) ||
       (((pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement < uVar12 &&
        (bVar5 = `ResizeBufferIfNeeded'::__l9::<lambda_1>::operator()(local_res10), !bVar5)))) {
      pFVar9 = FRDGBuilder::CreateBuffer(param_1,param_3,param_4,None);
      pTVar8 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar9);
      pFVar2 = param_2->Reference;
      pFVar3 = pTVar8->Reference;
      if (pFVar2 != pFVar3) {
        param_2->Reference = pFVar3;
        if (pFVar3 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar2 != (FRDGPooledBuffer *)0x0) {
          plVar1 = &pFVar2->_padding_;
          LOCK();
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) &&
             (pFVar2 != (FRDGPooledBuffer *)0x0)) {
            (**(code **)pFVar2->_padding_)();
          }
        }
      }
      local_48._padding_._0_4_ = 0xffffffff;
      if (uVar12 < uVar13) {
        uVar13 = uVar12;
      }
      local_68.Count = uVar13 / param_3->BytesPerElement;
      local_48._padding_._4_4_ = 0;
      local_48._padding_ = 0;
      local_68.SrcOffset = 0;
      local_68.DstOffset = 0;
      local_48._padding_._0_1_ = 0;
      if (((pFVar7->Desc).Usage & DrawIndirect) != None) {
        local_48._padding_._0_1_ = 0x1c;
      }
      local_48.Buffer = pFVar7;
      pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_48);
      bVar6 = 0;
      local_58._padding_._2_1_ = 0;
      if (((pFVar9->Desc).Usage & DrawIndirect) != None) {
        bVar6 = 0x1c;
      }
      local_58._padding_._0_2_ = (ushort)bVar6;
      local_58.Buffer = pFVar9;
      pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_58,SkipBarrier);
      MemcpyResource(param_1,(FRDGUnorderedAccessView *)pFVar11,(FRDGShaderResourceView *)pFVar10,
                     &local_68);
    }
    else {
      FRDGBuilder::QueueCommitReservedBuffer(param_1,pFVar7,(ulonglong)uVar12);
      pFVar9 = pFVar7;
    }
    return pFVar9;
  }
  return pFVar7;
}

// ResizeBufferIfNeeded @ 145eb11b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
ResizeBufferIfNeeded
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2,EPixelFormat param_3,
          uint param_4,wchar_t *param_5)

{
  FRDGBuffer *pFVar1;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  local_20.NumElements = param_4;
  local_20.BytesPerElement = GPixelFormats[param_3].BlockBytes;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  pFVar1 = ResizeBufferIfNeeded(param_1,param_2,&local_20,param_5);
  return pFVar1;
}

// ResizeByteAddressBufferIfNeeded @ 145eb1220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
ResizeByteAddressBufferIfNeeded
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2,uint param_3,
          wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  FRDGBuffer *pFVar3;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if ((param_3 & 0xf) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(NumBytes & 15) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                       ,0x25a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((param_3 & 3) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x3af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_20.NumElements = param_3 >> 2;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar3 = ResizeBufferIfNeeded(param_1,param_2,&local_20,param_4);
  return pFVar3;
}

// ResizeByteAddressBufferIfNeededWithCurrentLLMTag @ 145eb1300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
ResizeByteAddressBufferIfNeededWithCurrentLLMTag
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2,uint param_3,
          wchar_t *param_4)

{
  FRDGPooledBuffer *pFVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRDGBuffer *pFVar6;
  ulonglong uVar7;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  pFVar1 = param_2->Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar7 = (ulonglong)((pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement);
    if (pFVar1->CommittedSizeInBytes < uVar7) {
      uVar7 = pFVar1->CommittedSizeInBytes;
    }
    if (uVar7 == param_3) {
      bVar4 = true;
      goto LAB_145eb1352;
    }
  }
  bVar4 = false;
LAB_145eb1352:
  if (((param_3 & 0xf) != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(NumBytes & 15) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x25a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRDGBuffer *)(*pcVar3)();
    return pFVar6;
  }
  if (((param_3 & 3) != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("NumBytes % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x3af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRDGBuffer *)(*pcVar3)();
    return pFVar6;
  }
  local_20.NumElements = param_3 >> 2;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar6 = ResizeBufferIfNeeded(param_1,param_2,&local_20,param_4);
  if (((!bVar4) && (param_2->Reference != (FRDGPooledBuffer *)0x0)) &&
     (pFVar2 = (param_2->Reference->Buffer).Reference, pFVar2 != (FRHIBuffer *)0x0)) {
    FRHICommandListBase::UpdateAllocationTags((FRHICommandListBase *)param_1->_padding_,pFVar2);
  }
  return pFVar6;
}

// ResizeResourceIfNeeded @ 145eb1440

/* WARNING: Removing unreachable block (ram,0x000145eb1731) */
/* WARNING: Removing unreachable block (ram,0x000145eb16b0) */
/* WARNING: Removing unreachable block (ram,0x000145eb16c5) */
/* WARNING: Removing unreachable block (ram,0x000145eb1746) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __cdecl
ResizeResourceIfNeeded
          (FRDGBuilder *param_1,FRWBuffer *param_2,EPixelFormat param_3,uint param_4,
          wchar_t *param_5)

{
  int *piVar1;
  uint uVar2;
  TRefCountPtr<FRHIBuffer> this;
  TRefCountPtr<FRHIUnorderedAccessView> this_00;
  TRefCountPtr<FRHIShaderResourceView> this_01;
  int iVar3;
  FRDGEventName *pFVar4;
  void *this_02;
  FRWBuffer local_f8;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBuffer>(FRDGBuilder_&,FRWBuffer_const_&,FRWBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *local_c8;
  undefined1 local_c0 [64];
  FRHIShaderResourceView *local_80;
  uint local_78;
  undefined8 local_74;
  undefined8 local_6c;
  uint local_60;
  FRDGEventName local_58;
  
  uVar2 = GPixelFormats[param_3].BlockBytes;
  if (param_2->NumBytes == 0) {
    FRWBuffer::Initialize
              (param_2,(FRHICommandListBase *)param_1->_padding_,param_5,uVar2,param_4,param_3,
               UAVCompute,None,(FResourceArrayUploadInterface *)0x0);
    return true;
  }
  if (uVar2 * param_4 == param_2->NumBytes) {
    return false;
  }
  local_f8.Buffer.Reference = (FRHIBuffer *)0x0;
  local_f8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_f8.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_f8.NumBytes = 0;
  local_f8.ClassName.ComparisonIndex.Value = 0;
  local_f8.ClassName.Number = 0;
  local_f8.OwnerName.ComparisonIndex.Value = 0;
  local_f8.OwnerName.Number = 0;
  FRWBuffer::Initialize
            (&local_f8,(FRHICommandListBase *)param_1->_padding_,param_5,uVar2,param_4,param_3,
             UAVCompute,None,(FResourceArrayUploadInterface *)0x0);
  FRWBuffer::FRWBuffer((FRWBuffer *)local_c0,param_2);
  this.Reference = local_f8.Buffer.Reference;
  local_c0._48_8_ = local_f8.Buffer.Reference;
  if (local_f8.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_f8.Buffer.Reference);
  }
  this_00.Reference = local_f8.UAV.Reference;
  local_c0._56_8_ = local_f8.UAV.Reference;
  if (local_f8.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_f8.UAV.Reference);
  }
  this_01.Reference = local_f8.SRV.Reference;
  local_80 = local_f8.SRV.Reference;
  if (local_f8.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_f8.SRV.Reference);
  }
  local_78 = local_f8.NumBytes;
  local_74 = 0;
  local_6c = 0;
  local_60 = uVar2;
  pFVar4 = FRDGEventName::FRDGEventName(&local_58,1,L"ResizeResourceIfNeeded-Copy");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar4,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this_02 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1f0,8);
  local_c8 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBuffer>'::__l2::<lambda_1>_>::
             TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWBuffer>_::__l2::<lambda_1>_>
                       (this_02,pFVar4,NeverCull,(<lambda_1> *)local_c0);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar3 = (param_1->Passes).Array.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar3 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar3] = (FRDGPass *)local_c8;
  *(int *)&local_c8->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)local_c8);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  local_78 = 0;
  if (this.Reference != (FRHIBuffer *)0x0) {
    local_c0._48_8_ = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this.Reference);
  }
  if (this_00.Reference != (FRHIUnorderedAccessView *)0x0) {
    local_c0._56_8_ = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00.Reference);
  }
  if (this_01.Reference != (FRHIShaderResourceView *)0x0) {
    local_80 = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01.Reference);
  }
  FRWBuffer::~FRWBuffer((FRWBuffer *)local_c0);
  FRWBuffer::operator=(param_2,&local_f8);
  if (this.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this.Reference);
  }
  if (this_00.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00.Reference);
  }
  if (this_01.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01.Reference);
  }
  return true;
}

// ResizeResourceIfNeeded @ 145eb1780

/* WARNING: Removing unreachable block (ram,0x000145eb1aa6) */
/* WARNING: Removing unreachable block (ram,0x000145eb1a21) */
/* WARNING: Removing unreachable block (ram,0x000145eb1a36) */
/* WARNING: Removing unreachable block (ram,0x000145eb1ab3) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __cdecl
ResizeResourceIfNeeded
          (FRDGBuilder *param_1,FRWBufferStructured *param_2,uint param_3,wchar_t *param_4)

{
  int *piVar1;
  code *pcVar2;
  TRefCountPtr<FRHIBuffer> this;
  TRefCountPtr<FRHIUnorderedAccessView> this_00;
  TRefCountPtr<FRHIShaderResourceView> this_01;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FRDGEventName *pFVar6;
  void *this_02;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWBufferStructured>(FRDGBuilder_&,FRWBufferStructured_const_&,FRWBufferStructured_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar7;
  FRWBufferStructured local_b8;
  FRWBufferStructured local_98;
  FRHIBuffer *local_78;
  FRHIUnorderedAccessView *local_70;
  TRefCountPtr<FRHIBuffer> local_68;
  uint local_60;
  undefined4 local_58;
  FRDGEventName local_50;
  
  if (((param_3 & 0xf) != 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(NumBytes % BytesPerElement) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x58e,L"NumBytes (%u) must be a multiple of BytesPerElement (%u)"), bVar3)
     ) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (param_2->NumBytes == 0) {
    FRWBufferStructured::Initialize
              (param_2,(FRHICommandListBase *)param_1->_padding_,param_4,0x10,param_3 >> 4,None,
               false,false,UAVMask);
    return true;
  }
  if (param_3 == param_2->NumBytes) {
    return false;
  }
  local_b8.Buffer.Reference = (FRHIBuffer *)0x0;
  local_b8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_b8.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_b8.NumBytes = 0;
  FRWBufferStructured::Initialize
            (&local_b8,(FRHICommandListBase *)param_1->_padding_,param_4,0x10,param_3 >> 4,None,
             false,false,UAVMask);
  FRWBufferStructured::FRWBufferStructured(&local_98,param_2);
  this.Reference = local_b8.Buffer.Reference;
  local_78 = local_b8.Buffer.Reference;
  if (local_b8.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_b8.Buffer.Reference);
  }
  this_00.Reference = local_b8.UAV.Reference;
  local_70 = local_b8.UAV.Reference;
  if (local_b8.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_b8.UAV.Reference);
  }
  this_01.Reference = local_b8.SRV.Reference;
  local_68.Reference = (FRHIBuffer *)local_b8.SRV.Reference;
  if (local_b8.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_b8.SRV.Reference);
  }
  local_60 = local_b8.NumBytes;
  local_58 = 0x10;
  pFVar6 = FRDGEventName::FRDGEventName(&local_50,1,L"ResizeResourceIfNeeded-Copy");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar6,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this_02 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d0,8);
  pTVar7 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWBufferStructured>'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWBufferStructured>_::__l2::<lambda_1>_>
                     (this_02,pFVar6,NeverCull,(<lambda_1> *)&local_98);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar5 = (param_1->Passes).Array.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar5 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar5] = (FRDGPass *)pTVar7;
  *(int *)&pTVar7->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar7);
  if (local_50.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.FormattedEventName.Data.AllocatorInstance.Data);
  }
  local_60 = 0;
  if (this.Reference != (FRHIBuffer *)0x0) {
    local_78 = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this.Reference);
  }
  if (this_00.Reference != (FRHIUnorderedAccessView *)0x0) {
    local_70 = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00.Reference);
  }
  if (this_01.Reference != (FRHIShaderResourceView *)0x0) {
    local_68.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01.Reference);
  }
  FRWBufferStructured::~FRWBufferStructured(&local_98);
  FRWBufferStructured::operator=(param_2,&local_b8);
  if (this.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this.Reference);
  }
  if (this_00.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00.Reference);
  }
  if (this_01.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01.Reference);
  }
  return true;
}

// ResizeResourceIfNeeded @ 145eb1af0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __cdecl
ResizeResourceIfNeeded
          (FRDGBuilder *param_1,FRWByteAddressBuffer *param_2,uint param_3,wchar_t *param_4)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  longlong this;
  longlong this_00;
  TRefCountPtr<FRHIUnorderedAccessView> this_01;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FRDGEventName *pFVar7;
  void *this_02;
  TRDGEmptyLambdaPass<_void___cdecl_AddCopyBufferPass<FRWByteAddressBuffer>(FRDGBuilder_&,FRWByteAddressBuffer_const_&,FRWByteAddressBuffer_const_&,unsigned_int)_::_2_::<lambda_1>_>
  *pTVar8;
  FRWByteAddressBuffer local_a8;
  undefined1 local_88 [32];
  TRefCountPtr<FRHIBuffer> local_68;
  TRefCountPtr<FRHIUnorderedAccessView> local_60;
  undefined4 local_58;
  FRHIUnorderedAccessView *local_50;
  uint local_48;
  FRDGEventName local_40;
  
  if ((param_3 & 0xf) != 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(NumBytes & 15) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                       ,0x5a8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar2 = (uint)param_2->_padding_;
  if (uVar2 == 0) {
    FRWByteAddressBuffer::Initialize
              (param_2,(FRHICommandListBase *)param_1->_padding_,param_4,param_3,None);
    return true;
  }
  if (param_3 != uVar2) {
    local_a8._padding_._0_4_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRWByteAddressBuffer::Initialize
              (&local_a8,(FRHICommandListBase *)param_1->_padding_,param_4,param_3,None);
    FRWByteAddressBuffer::FRWByteAddressBuffer((FRWByteAddressBuffer *)local_88,param_2);
    this = local_a8._padding_;
    local_68.Reference = (FRHIBuffer *)local_a8._padding_;
    if ((FRHIBuffer *)local_a8._padding_ != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_a8._padding_);
    }
    this_00 = local_a8._padding_;
    local_60.Reference = (FRHIUnorderedAccessView *)local_a8._padding_;
    if ((FRHIUnorderedAccessView *)local_a8._padding_ != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_a8._padding_);
    }
    this_01.Reference = local_a8.UAV.Reference;
    local_58 = (undefined4)local_a8._padding_;
    local_50 = local_a8.UAV.Reference;
    if (local_a8.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_a8.UAV.Reference);
    }
    local_48 = 4;
    pFVar7 = FRDGEventName::FRDGEventName(&local_40,1,L"ResizeResourceIfNeeded-Copy");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar7,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_02 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d0,8);
    pTVar8 = TRDGEmptyLambdaPass<`AddCopyBufferPass<FRWByteAddressBuffer>'::__l2::<lambda_1>_>::
             TRDGEmptyLambdaPass<_AddCopyBufferPass<FRWByteAddressBuffer>_::__l2::<lambda_1>_>
                       (this_02,pFVar7,NeverCull,(<lambda_1> *)local_88);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar6 = (param_1->Passes).Array.ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar6 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar6] = (FRDGPass *)pTVar8;
    *(int *)&pTVar8->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar8);
    if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (this_01.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01.Reference);
    }
    if ((FRHIUnorderedAccessView *)this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    if ((FRHIBuffer *)this != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
    }
    if ((FRHIUnorderedAccessView *)local_88._24_8_ != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88._24_8_);
    }
    if ((FRHIUnorderedAccessView *)local_88._8_8_ != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88._8_8_);
    }
    if ((FRHIBuffer *)local_88._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88._0_8_);
    }
    FRWByteAddressBuffer::operator=(param_2,&local_a8);
    if (this_01.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01.Reference);
    }
    if ((FRHIUnorderedAccessView *)this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    if ((FRHIBuffer *)this != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
    }
    return true;
  }
  return false;
}

// ResizeResourceIfNeeded @ 145eb1da0

/* WARNING: Removing unreachable block (ram,0x000145eb1f95) */
/* WARNING: Removing unreachable block (ram,0x000145eb1faa) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
ResizeResourceIfNeeded
          (FRHICommandList *param_1,FRWBuffer *param_2,EPixelFormat param_3,uint param_4,
          wchar_t *param_5)

{
  uint uVar1;
  TRefCountPtr<FRHIUnorderedAccessView> this;
  bool bVar2;
  uint uVar3;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  FRWBuffer local_78;
  FRHITransitionInfo local_48;
  
  uVar1 = GPixelFormats[param_3].BlockBytes;
  uVar3 = uVar1 * param_4;
  if (param_2->NumBytes == 0) {
    FRWBuffer::Initialize
              (param_2,(FRHICommandListBase *)param_1,param_5,uVar1,param_4,param_3,UAVCompute,None,
               (FResourceArrayUploadInterface *)0x0);
    bVar2 = true;
  }
  else if (uVar3 == param_2->NumBytes) {
    bVar2 = false;
  }
  else {
    local_78.Buffer.Reference = (FRHIBuffer *)0x0;
    local_78.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    local_78.SRV.Reference = (FRHIShaderResourceView *)0x0;
    local_78.NumBytes = 0;
    local_78.ClassName.ComparisonIndex.Value = 0;
    local_78.ClassName.Number = 0;
    local_78.OwnerName.ComparisonIndex.Value = 0;
    local_78.OwnerName.Number = 0;
    FRWBuffer::Initialize
              (&local_78,(FRHICommandListBase *)param_1,param_5,uVar1,param_4,param_3,UAVCompute,
               None,(FResourceArrayUploadInterface *)0x0);
    local_48.field1_0x8 = (FRHITransitionInfo_u_8)(param_2->UAV).Reference;
    local_88.DataPtr = &local_48;
    local_48._padding_._0_4_ = 0xffffffff;
    local_88.ArrayNum = 1;
    local_48._padding_._4_2_ = 0xffff;
    local_48.Type = UAV;
    local_48.AccessBefore = None;
    local_48.AccessAfter = SRVCompute;
    local_48.Flags = None;
    local_48.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
    this.Reference = local_78.UAV.Reference;
    local_88.DataPtr = &local_48;
    local_48._padding_._4_2_ = 0xffff;
    local_88.ArrayNum = 1;
    local_48._padding_._0_4_ = 0xffffffff;
    local_48.field1_0x8.UAV = local_78.UAV.Reference;
    local_48.Type = UAV;
    local_48.AccessBefore = None;
    local_48.AccessAfter = UAVCompute;
    local_48.Flags = None;
    local_48.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
    local_88.DataPtr._4_4_ = 0;
    local_88.ArrayNum = 0;
    local_88.DataPtr._0_4_ = param_2->NumBytes;
    if (uVar3 < param_2->NumBytes) {
      local_88.DataPtr._0_4_ = uVar3;
    }
    local_88.DataPtr._0_4_ = (uint)local_88.DataPtr / uVar1;
    MemcpyResource<FRWBuffer>(param_1,&local_78,param_2,(FMemcpyResourceParams *)&local_88,false);
    FRWBuffer::operator=(param_2,&local_78);
    if (local_78.Buffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_78.Buffer.Reference);
    }
    if (this.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this.Reference);
    }
    if (local_78.SRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_78.SRV.Reference);
    }
    bVar2 = true;
  }
  return bVar2;
}

// ResizeResourceSOAIfNeeded @ 145eb1fe0

/* WARNING: Removing unreachable block (ram,0x000145eb24d6) */
/* WARNING: Removing unreachable block (ram,0x000145eb248b) */
/* WARNING: Removing unreachable block (ram,0x000145eb23de) */
/* WARNING: Removing unreachable block (ram,0x000145eb2434) */
/* WARNING: Removing unreachable block (ram,0x000145eb2498) */
/* WARNING: Removing unreachable block (ram,0x000145eb24eb) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __cdecl
ResizeResourceSOAIfNeeded
          (FRDGBuilder *param_1,FRWBufferStructured *param_2,FResizeResourceSOAParams *param_3,
          wchar_t *param_4)

{
  int *piVar1;
  uint uVar2;
  FRHIBuffer *this;
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar3;
  TRefCountPtr<FRHIBuffer> this_02;
  TRefCountPtr<FRHIUnorderedAccessView> this_03;
  TRefCountPtr<FRHIShaderResourceView> this_04;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FRDGEventName *pFVar7;
  void *this_05;
  TRDGEmptyLambdaPass<_bool___cdecl_ResizeResourceSOAIfNeeded(FRDGBuilder_&,FRWBufferStructured_&,FResizeResourceSOAParams_const_&,wchar_t_const_*)_::_45_::<lambda_1>_>
  *pTVar8;
  uint uVar9;
  uint uVar10;
  FRHIBuffer *local_d8;
  FRHIBuffer *local_d0;
  FRWBufferStructured local_c8;
  <lambda_1> local_a8;
  FRDGEventName local_58;
  
  if (((param_3->NumBytes & 0xf) != 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Params.NumBytes % BytesPerElement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x540,L"NumBytes (%u) must be a multiple of BytesPerElement (%u)"), bVar4)
     ) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((param_2->NumBytes & 0xf) != 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Buffer.NumBytes % BytesPerElement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x541,L"NumBytes (%u) must be a multiple of BytesPerElement (%u)"), bVar4)
     ) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar9 = param_3->NumBytes >> 4;
  uVar10 = param_2->NumBytes >> 4;
  if ((uVar9 % param_3->NumArrays != 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("NumElements % Params.NumArrays == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x546,L"NumElements (%u) must be a multiple of NumArrays (%u)"), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((uVar10 % param_3->NumArrays != 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("NumElementsOld % Params.NumArrays == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x547,L"NumElements (%u) must be a multiple of NumArrays (%u)"), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (param_2->NumBytes == 0) {
    FRWBufferStructured::Initialize
              (param_2,(FRHICommandListBase *)param_1->_padding_,param_4,0x10,uVar9,None,false,false
               ,UAVMask);
    bVar4 = true;
  }
  else if (param_3->NumBytes == param_2->NumBytes) {
    bVar4 = false;
  }
  else {
    this = (param_2->Buffer).Reference;
    local_c8.SRV.Reference = (FRHIShaderResourceView *)0x0;
    local_c8.NumBytes = 0;
    local_c8.Buffer.Reference = (FRHIBuffer *)0x0;
    local_c8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    if (this != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
    this_00 = (param_2->UAV).Reference;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    this_01 = (param_2->SRV).Reference;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    uVar2 = param_2->NumBytes;
    FRWBufferStructured::Initialize
              (&local_c8,(FRHICommandListBase *)param_1->_padding_,param_4,0x10,uVar9,None,false,
               false,UAVMask);
    local_a8.OldBuffer.Buffer.Reference = this;
    if (this != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
    local_a8.OldBuffer.UAV.Reference = this_00;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    local_a8.OldBuffer.SRV.Reference = this_01;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    this_02.Reference = local_c8.Buffer.Reference;
    local_d8 = local_c8.Buffer.Reference;
    local_a8.NewBuffer.Buffer.Reference = local_c8.Buffer.Reference;
    local_a8.OldBuffer.NumBytes = uVar2;
    if (local_c8.Buffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_c8.Buffer.Reference);
    }
    this_03.Reference = local_c8.UAV.Reference;
    local_a8.NewBuffer.UAV.Reference = local_c8.UAV.Reference;
    if (local_c8.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_c8.UAV.Reference);
    }
    this_04.Reference = local_c8.SRV.Reference;
    local_a8.NewBuffer.SRV.Reference = local_c8.SRV.Reference;
    if (local_c8.SRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_c8.SRV.Reference);
    }
    local_a8.NewBuffer.NumBytes = local_c8.NumBytes;
    local_a8.Params = *param_3;
    local_a8.NumElements = uVar9;
    local_a8.NumElementsOld = uVar10;
    pFVar7 = FRDGEventName::FRDGEventName(&local_58,1,L"ResizeResourceSOAIfNeeded");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar7,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_05 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d8,8);
    pTVar8 = TRDGEmptyLambdaPass<`ResizeResourceSOAIfNeeded'::__l45::<lambda_1>_>::
             TRDGEmptyLambdaPass<_ResizeResourceSOAIfNeeded_::__l45::<lambda_1>_>
                       (this_05,pFVar7,NeverCull,&local_a8);
    iVar6 = (param_1->Passes).Array.ArrayNum;
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar6 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar6] = (FRDGPass *)pTVar8;
    *(int *)&pTVar8->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar8);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (this_02.Reference != (FRHIBuffer *)0x0) {
      local_d8 = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_02.Reference);
    }
    if (this_03.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_03.Reference);
    }
    if (this_04.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_04.Reference);
    }
    if (local_d8 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_d8);
    }
    local_d0 = this;
    if (this != (FRHIBuffer *)0x0) {
      local_d0 = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this);
    }
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    if (local_d0 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_d0);
    }
    FRWBufferStructured::operator=(param_2,&local_c8);
    if (this != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
    }
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    if (this_02.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_02.Reference);
    }
    if (this_03.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_03.Reference);
    }
    if (this_04.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_04.Reference);
    }
    bVar4 = true;
  }
  return bVar4;
}

// ResizeResourceSOAIfNeeded @ 145eb2520

/* WARNING: Removing unreachable block (ram,0x000145eb28a8) */
/* WARNING: Removing unreachable block (ram,0x000145eb28b5) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
ResizeResourceSOAIfNeeded
          (FRHICommandList *param_1,FRWBufferStructured *param_2,FResizeResourceSOAParams *param_3,
          wchar_t *param_4)

{
  FRHIBuffer *this;
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar1;
  TRefCountPtr<FRHIBuffer> this_02;
  TRefCountPtr<FRHIShaderResourceView> this_03;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  TRefCountPtr<FRHIUnorderedAccessView> this_04;
  uint uVar7;
  uint uVar8;
  FMemcpyResourceParams local_e8;
  FRWBufferStructured local_d8;
  FRHITransitionInfo local_b8;
  undefined4 local_88;
  undefined2 local_84;
  FRHIUnorderedAccessView *local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_60;
  FRHITransitionInfo *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  
  if (((param_3->NumBytes & 0xf) != 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Params.NumBytes % BytesPerElement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x50b,L"NumBytes (%u) must be a multiple of BytesPerElement (%u)"), bVar2)
     ) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((param_2->NumBytes & 0xf) != 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Buffer.NumBytes % BytesPerElement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x50c,L"NumBytes (%u) must be a multiple of BytesPerElement (%u)"), bVar2)
     ) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar4 = param_3->NumBytes >> 4;
  uVar7 = param_2->NumBytes >> 4;
  if ((uVar4 % param_3->NumArrays != 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("NumElements % Params.NumArrays == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x511,L"NumElements (%u) must be a multiple of NumArrays (%u)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((uVar7 % param_3->NumArrays != 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("NumElementsOld % Params.NumArrays == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x512,L"NumElements (%u) must be a multiple of NumArrays (%u)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (param_2->NumBytes == 0) {
    FRWBufferStructured::Initialize
              (param_2,(FRHICommandListBase *)param_1,param_4,0x10,uVar4,None,false,false,UAVMask);
    bVar2 = true;
  }
  else if (param_3->NumBytes == param_2->NumBytes) {
    bVar2 = false;
  }
  else {
    uVar5 = 0;
    local_d8.SRV.Reference = (FRHIShaderResourceView *)0x0;
    local_d8.Buffer.Reference = (FRHIBuffer *)0x0;
    local_d8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    local_d8.NumBytes = 0;
    FRWBufferStructured::Initialize
              (&local_d8,(FRHICommandListBase *)param_1,param_4,0x10,uVar4,None,false,false,UAVMask)
    ;
    this_04.Reference = local_d8.UAV.Reference;
    local_b8.field1_0x8 = (FRHITransitionInfo_u_8)(param_2->UAV).Reference;
    local_58 = &local_b8;
    local_b8._padding_._4_2_ = 0xffff;
    local_84 = 0xffff;
    uStack_50 = 2;
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = 2;
    local_b8._padding_._0_4_ = 0xffffffff;
    local_b8.Type = UAV;
    local_b8.AccessBefore = None;
    local_b8.AccessAfter = SRVCompute;
    local_b8.Flags = None;
    local_b8.CommitInfo.bIsSet = false;
    local_88 = 0xffffffff;
    local_80 = local_d8.UAV.Reference;
    local_78 = 3;
    local_74 = 0;
    local_70 = 0x400;
    local_6c = 0;
    local_60 = 0;
    local_48.DataPtr = local_58;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
    uVar7 = uVar7 / param_3->NumArrays;
    uVar4 = uVar4 / param_3->NumArrays;
    FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)param_1,this_04.Reference);
    local_e8.Count = uVar7;
    if (uVar4 < uVar7) {
      local_e8.Count = uVar4;
    }
    uVar6 = uVar5;
    uVar8 = uVar5;
    if (param_3->NumArrays != 0) {
      do {
        local_e8.SrcOffset = uVar5;
        local_e8.DstOffset = uVar6;
        MemcpyResource<FRWBufferStructured>(param_1,&local_d8,param_2,&local_e8,true);
        uVar8 = uVar8 + 1;
        uVar5 = uVar5 + uVar7;
        this_04.Reference = local_d8.UAV.Reference;
        uVar6 = uVar6 + uVar4;
      } while (uVar8 < param_3->NumArrays);
    }
    FRHIComputeCommandList::EndUAVOverlap((FRHIComputeCommandList *)param_1,this_04.Reference);
    this_02.Reference = local_d8.Buffer.Reference;
    this = (param_2->Buffer).Reference;
    if (this != local_d8.Buffer.Reference) {
      (param_2->Buffer).Reference = local_d8.Buffer.Reference;
      if (local_d8.Buffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_d8.Buffer.Reference);
      }
      if (this != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
      }
    }
    this_00 = (param_2->UAV).Reference;
    if (this_00 != this_04.Reference) {
      (param_2->UAV).Reference = this_04.Reference;
      if (this_04.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_04.Reference);
      }
      if (this_00 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    this_03.Reference = local_d8.SRV.Reference;
    this_01 = (param_2->SRV).Reference;
    if (this_01 != local_d8.SRV.Reference) {
      (param_2->SRV).Reference = local_d8.SRV.Reference;
      if (local_d8.SRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_d8.SRV.Reference);
      }
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    param_2->NumBytes = local_d8.NumBytes;
    if (this_02.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_02.Reference);
    }
    if (this_04.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_04.Reference);
    }
    if (this_03.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_03.Reference);
    }
    bVar2 = true;
  }
  return bVar2;
}

// ResizeStructuredBufferIfNeeded @ 145eb28f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
ResizeStructuredBufferIfNeeded
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2,uint param_3,
          wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  FRDGBuffer *pFVar3;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  if ((param_3 & 0xf) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(NumBytes & (BytesPerElement - 1)) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_20.NumElements = param_3 >> 4;
  local_20.BytesPerElement = 0x10;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar3 = ResizeBufferIfNeeded(param_1,param_2,&local_20,param_4);
  return pFVar3;
}

// ResizeStructuredBufferSOAIfNeeded @ 145eb29a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
ResizeStructuredBufferSOAIfNeeded
          (FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2,
          FResizeResourceSOAParams *param_3,wchar_t *param_4)

{
  longlong *plVar1;
  uint uVar2;
  FRDGPooledBuffer *pFVar3;
  FRDGPooledBuffer *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  undefined1 uVar9;
  FRDGBuffer *pFVar10;
  TRefCountPtr<FRDGPooledBuffer> *pTVar11;
  FRDGBuffer *pFVar12;
  FRDGBufferUAV *pFVar13;
  FRDGBufferSRV *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FMemcpyResourceParams local_90;
  FRDGBufferUAVDesc local_80;
  FRDGBufferSRVDesc local_70;
  FRDGBufferDesc local_50;
  
  pFVar3 = param_2->Reference;
  uVar16 = 0;
  uVar17 = 0;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    uVar17 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
  }
  if (((param_3->NumBytes & 0xf) != 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Params.NumBytes % BytesPerElement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x222,L"NumBytes (%u) must be a multiple of BytesPerElement (%u)"), bVar7)
     ) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRDGBuffer *)(*pcVar5)();
    return pFVar10;
  }
  if (((uVar17 & 0xf) != 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ExternalBufferSize % BytesPerElement == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x223,L"NumBytes (%u) must be a multiple of BytesPerElement (%u)"), bVar7)
     ) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRDGBuffer *)(*pcVar5)();
    return pFVar10;
  }
  uVar19 = param_3->NumBytes >> 4;
  if ((uVar19 % param_3->NumArrays != 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("NumElements % Params.NumArrays == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x228,L"NumElements (%u) must be a multiple of NumArrays (%u)"), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRDGBuffer *)(*pcVar5)();
    return pFVar10;
  }
  if (((uVar17 >> 4) % param_3->NumArrays != 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("NumElementsOld % Params.NumArrays == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x229,L"NumElements (%u) must be a multiple of NumArrays (%u)"), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRDGBuffer *)(*pcVar5)();
    return pFVar10;
  }
  local_70._padding_._0_4_ = 0x10109;
  local_70._padding_._0_4_ = 0x10;
  local_50.NumElements = uVar19;
  local_50.BytesPerElement = 0x10;
  local_50._12_4_ = local_70._padding_._4_4_;
  local_50.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_70._padding_ = 0;
  local_50.Metadata = (FShaderParametersMetadata *)0x0;
  local_70._padding_._4_4_ = uVar19;
  if (param_2->Reference == (FRDGPooledBuffer *)0x0) {
    pFVar10 = FRDGBuilder::CreateBuffer(param_1,&local_50,param_4,None);
    pTVar11 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar10);
    pFVar3 = param_2->Reference;
    pFVar4 = pTVar11->Reference;
    if (pFVar3 != pFVar4) {
      param_2->Reference = pFVar4;
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  else {
    pFVar12 = FRDGBuilder::RegisterExternalBuffer(param_1,param_2,None);
    pFVar10 = pFVar12;
    if (uVar19 << 4 != (pFVar12->Desc).NumElements * (pFVar12->Desc).BytesPerElement) {
      pFVar10 = FRDGBuilder::CreateBuffer(param_1,&local_50,param_4,None);
      pTVar11 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar10);
      pFVar3 = param_2->Reference;
      pFVar4 = pTVar11->Reference;
      if (pFVar3 != pFVar4) {
        param_2->Reference = pFVar4;
        if (pFVar4 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar3 != (FRDGPooledBuffer *)0x0) {
          plVar1 = &pFVar3->_padding_;
          LOCK();
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar3->_padding_)(pFVar3,1);
          }
        }
      }
      local_80._padding_._2_1_ = 0;
      bVar8 = 0;
      if (((pFVar10->Desc).Usage & DrawIndirect) != None) {
        bVar8 = 0x1c;
      }
      local_80._padding_._0_2_ = (ushort)bVar8;
      local_80.Buffer = pFVar10;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_80,SkipBarrier);
      local_70._padding_._4_4_ = 0;
      uVar9 = 0;
      local_70._padding_._0_4_ = 0xffffffff;
      local_70._padding_ = 0;
      if (((pFVar12->Desc).Usage & DrawIndirect) != None) {
        uVar9 = 0x1c;
      }
      local_70._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_70._padding_ >> 8),uVar9);
      local_70.Buffer = pFVar12;
      pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_70);
      uVar2 = param_3->NumArrays;
      uVar17 = (uVar17 >> 4) / uVar2;
      uVar19 = uVar19 / uVar2;
      local_90.Count = uVar17;
      if (uVar19 < uVar17) {
        local_90.Count = uVar19;
      }
      uVar15 = uVar16;
      uVar18 = uVar16;
      if (uVar2 != 0) {
        do {
          local_90.SrcOffset = uVar16;
          local_90.DstOffset = uVar18;
          MemcpyResource(param_1,(FRDGUnorderedAccessView *)pFVar13,
                         (FRDGShaderResourceView *)pFVar14,&local_90);
          uVar15 = uVar15 + 1;
          uVar16 = uVar16 + uVar17;
          uVar18 = uVar18 + uVar19;
        } while (uVar15 < param_3->NumArrays);
      }
    }
  }
  return pFVar10;
}

// ScatterCopyResource @ 145eb3060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ScatterCopyResource(FRDGBuilder *param_1,FRDGBuffer *param_2,FRDGBufferSRV *param_3,
                   FRDGBufferSRV *param_4,FAsyncScatterCopyParams *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FGlobalShaderMap *this;
  FShaderType *pFVar8;
  FName this_00;
  FParameters *pFVar9;
  FRDGEventName *pFVar10;
  FShaderParametersMetadata *pFVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStackY_1a8 [32];
  FScatterUploadConfig local_168;
  TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
  local_160;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_150;
  undefined1 local_140 [8];
  FString local_138;
  FRDGEventName local_128;
  FParameters local_108;
  undefined1 local_88 [16];
  FShaderMapBase *local_78;
  FScatterUploadConfig local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar7 = param_5->NumElementsPerScatter;
  uVar1 = param_5->NumBytesPerElement;
  uVar12 = (ulonglong)uVar1;
  if (uVar7 == 0xffffffff) {
    uVar12 = 4;
    if ((uVar1 & 0xf) == 0) {
      uVar12 = 0x10;
    }
    uVar7 = (uint)(uVar1 / uVar12);
  }
  local_168 = (FScatterUploadConfig)((ulonglong)uVar7 << 0x20 | uVar12);
  local_108.Common.DstBuffer = (FRDGBufferUAV *)0x0;
  local_108.Common.DstStructuredBuffer8x = (FRDGBufferUAV *)0x0;
  local_108.Common.DstStructuredBuffer4x = (FRDGBufferUAV *)0x0;
  local_108.Common.DstStructuredBuffer2x = (FRDGBufferUAV *)0x0;
  local_108.Common.DstStructuredBuffer1x = (FRDGBufferUAV *)0x0;
  local_108.Common.DstByteAddressBuffer = (FRDGBufferUAV *)0x0;
  local_108.UploadByteAddressBuffer = (FRDGBufferSRV *)0x0;
  local_108.UploadStructuredBuffer8x = (FRDGBufferSRV *)0x0;
  local_108.UploadStructuredBuffer4x = (FRDGBufferSRV *)0x0;
  local_108.UploadStructuredBuffer2x = (FRDGBufferSRV *)0x0;
  local_108.UploadStructuredBuffer1x = (FRDGBufferSRV *)0x0;
  local_108.ScatterByteAddressBuffer = (FRDGBufferSRV *)0x0;
  local_108.ScatterStructuredBuffer = (FRDGBufferSRV *)0x0;
  local_160.DimensionValue = 0;
  local_160.Tail.DimensionValue = 0;
  GetScatterCopyParamsAndPermutation
            (param_1,(FRDGViewableResource *)param_2,param_3,param_4,&local_168,0,&local_108,
             &local_160);
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  iVar4 = local_160.DimensionValue;
  if (((3 < local_160.DimensionValue) || (local_160.DimensionValue < 0)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = local_160.Tail.DimensionValue;
  if (((3 < local_160.Tail.DimensionValue) || ((longlong)local_160._0_8_ < 0)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (FShaderType *)FRDGScatterCopyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_150,pFVar8,iVar4 + iVar5 * 4);
  if (local_150.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_140);
    FName::ToString((FName *)this_00,&local_138);
    FRDGScatterCopyCS::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGScatterCopyCS::GetStaticType();
  pFVar9 = FRDGBuilder::AllocParameters<FRDGScatterCopyCS::FParameters>(param_1,&local_108);
  local_88._8_8_ = local_150.ShaderContent;
  local_78 = local_150.ShaderMap;
  local_70 = local_168;
  local_68 = *(longlong *)&param_5->GetNumScatters;
  local_40 = (longlong *)0x0;
  local_88._0_8_ = pFVar9;
  if (local_68 != 0) {
    puVar2 = *(undefined8 **)&(param_5->GetNumScatters).field_0x28;
    puVar13 = (undefined8 *)&(param_5->GetNumScatters).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar13 = puVar2;
    }
    (**(code **)*puVar13)(puVar13,local_58);
  }
  pFVar10 = FRDGEventName::FRDGEventName(&local_128,1,L"ScatterUpload");
  pFVar11 = FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGBuilder::
  AddPassInternal<FRDGScatterCopyCS::FParameters,_ScatterCopyResource_::__l2::<lambda_1>_>
            (param_1,pFVar10,pFVar11,pFVar9,Compute,(<lambda_1> *)local_88);
  if (local_128.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_68 != 0) {
    plVar14 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar14 = local_40;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

// ScatterCopyResource @ 145eb3340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ScatterCopyResource(FRDGBuilder *param_1,FRDGBuffer *param_2,FRDGBufferSRV *param_3,
                   FRDGBufferSRV *param_4,FScatterCopyParams *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  uint *puVar3;
  FScatterCopyParams *pFVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  TIntVector3<int> *pTVar9;
  FGlobalShaderMap *this;
  FShaderType *pFVar10;
  FName this_00;
  FParameters *pFVar11;
  FRDGEventName *pFVar12;
  FShaderParametersMetadata *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackX_10 [8];
  TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
  TStack_138;
  TIntVector3<int>_u_0 TStack_128;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_118;
  FString FStack_108;
  TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> TStack_f8;
  TIntVector3<int> TStack_e8;
  FRDGEventName FStack_d8;
  FParameters FStack_b8;
  
  pFVar4 = param_5;
  iVar8 = param_5->NumElementsPerScatter;
  uVar14 = param_5->NumBytesPerElement;
  if (iVar8 == -1) {
    uVar15 = 4;
    if ((uVar14 & 0xf) == 0) {
      uVar15 = 0x10;
    }
    iVar8 = (int)(uVar14 / uVar15);
    uVar14 = (uint)uVar15;
  }
  puVar3 = &param_5->NumScatters;
  param_5 = (FScatterCopyParams *)CONCAT44(iVar8,uVar14);
  pTVar9 = FComputeShaderUtils::GetGroupCountWrapped(&TStack_e8,iVar8 * *puVar3,0x40);
  FStack_b8.UploadByteAddressBuffer = (FRDGBufferSRV *)0x0;
  FStack_b8.Common.DstBuffer = (FRDGBufferUAV *)0x0;
  FStack_b8.Common.DstStructuredBuffer8x = (FRDGBufferUAV *)0x0;
  FStack_b8.Common.DstStructuredBuffer4x = (FRDGBufferUAV *)0x0;
  FStack_b8.Common.DstStructuredBuffer2x = (FRDGBufferUAV *)0x0;
  uVar1 = *(undefined8 *)&pTVar9->field0_0x0;
  iVar8 = (pTVar9->field0_0x0)._s_0.Z;
  FStack_b8.Common.DstStructuredBuffer1x = (FRDGBufferUAV *)0x0;
  FStack_b8.Common.DstByteAddressBuffer = (FRDGBufferUAV *)0x0;
  FStack_b8.UploadStructuredBuffer8x = (FRDGBufferSRV *)0x0;
  FStack_b8.UploadStructuredBuffer4x = (FRDGBufferSRV *)0x0;
  FStack_b8.UploadStructuredBuffer2x = (FRDGBufferSRV *)0x0;
  FStack_b8.UploadStructuredBuffer1x = (FRDGBufferSRV *)0x0;
  FStack_b8.ScatterByteAddressBuffer = (FRDGBufferSRV *)0x0;
  FStack_b8.ScatterStructuredBuffer = (FRDGBufferSRV *)0x0;
  TStack_138.DimensionValue = 0;
  TStack_138.Tail.DimensionValue = 0;
  GetScatterCopyParamsAndPermutation
            (param_1,(FRDGViewableResource *)param_2,param_3,param_4,
             (FScatterUploadConfig *)&param_5,pFVar4->NumScatters,&FStack_b8,&TStack_138);
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  iVar5 = TStack_138.DimensionValue;
  if (((3 < TStack_138.DimensionValue) || (TStack_138.DimensionValue < 0)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = TStack_138.Tail.DimensionValue;
  if (((3 < TStack_138.Tail.DimensionValue) || ((longlong)TStack_138._0_8_ < 0)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar10 = (FShaderType *)FRDGScatterCopyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&TStack_118,pFVar10,iVar5 + iVar6 * 4);
  if (TStack_118.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStackX_10);
    FName::ToString((FName *)this_00,&FStack_108);
    FRDGScatterCopyCS::GetStaticType();
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRDGScatterCopyCS::GetStaticType();
  TStack_f8.ShaderContent = (FRDGScatterCopyCS *)TStack_118.ShaderContent;
  TStack_f8.ShaderMap = TStack_118.ShaderMap;
  pFVar11 = FRDGBuilder::AllocParameters<FRDGScatterCopyCS::FParameters>(param_1,&FStack_b8);
  pFVar12 = FRDGEventName::FRDGEventName(&FStack_d8,L"ScatterUpload (Resource: %s)");
  pFVar13 = FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
  TStack_128._0_8_ = uVar1;
  TStack_128._s_0.Z = iVar8;
  FComputeShaderUtils::AddPass<FRDGScatterCopyCS>
            (param_1,pFVar12,Compute,&TStack_f8,pFVar13,pFVar11,(TIntVector3<int> *)&TStack_128._s_0
            );
  if (FStack_d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// ScatterCopyResource @ 145eb3350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ScatterCopyResource(FRDGBuilder *param_1,FRDGViewableResource *param_2,FRDGBufferSRV *param_3,
                   FRDGBufferSRV *param_4,FScatterCopyParams *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  uint *puVar3;
  FScatterCopyParams *pFVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  TIntVector3<int> *pTVar9;
  FGlobalShaderMap *this;
  FShaderType *pFVar10;
  FName this_00;
  FParameters *pFVar11;
  FRDGEventName *pFVar12;
  FShaderParametersMetadata *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
  local_138;
  TIntVector3<int>_u_0 local_128;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_118;
  FString local_108;
  TShaderRefBase<FRDGScatterCopyCS,FShaderMapPointerTable> local_f8;
  TIntVector3<int> local_e8;
  FRDGEventName local_d8;
  FParameters local_b8;
  
  pFVar4 = param_5;
  iVar8 = param_5->NumElementsPerScatter;
  uVar14 = param_5->NumBytesPerElement;
  if (iVar8 == -1) {
    uVar15 = 4;
    if ((uVar14 & 0xf) == 0) {
      uVar15 = 0x10;
    }
    iVar8 = (int)(uVar14 / uVar15);
    uVar14 = (uint)uVar15;
  }
  puVar3 = &param_5->NumScatters;
  param_5 = (FScatterCopyParams *)CONCAT44(iVar8,uVar14);
  pTVar9 = FComputeShaderUtils::GetGroupCountWrapped(&local_e8,iVar8 * *puVar3,0x40);
  local_b8.UploadByteAddressBuffer = (FRDGBufferSRV *)0x0;
  local_b8.Common.DstBuffer = (FRDGBufferUAV *)0x0;
  local_b8.Common.DstStructuredBuffer8x = (FRDGBufferUAV *)0x0;
  local_b8.Common.DstStructuredBuffer4x = (FRDGBufferUAV *)0x0;
  local_b8.Common.DstStructuredBuffer2x = (FRDGBufferUAV *)0x0;
  uVar1 = *(undefined8 *)&pTVar9->field0_0x0;
  iVar8 = (pTVar9->field0_0x0)._s_0.Z;
  local_b8.Common.DstStructuredBuffer1x = (FRDGBufferUAV *)0x0;
  local_b8.Common.DstByteAddressBuffer = (FRDGBufferUAV *)0x0;
  local_b8.UploadStructuredBuffer8x = (FRDGBufferSRV *)0x0;
  local_b8.UploadStructuredBuffer4x = (FRDGBufferSRV *)0x0;
  local_b8.UploadStructuredBuffer2x = (FRDGBufferSRV *)0x0;
  local_b8.UploadStructuredBuffer1x = (FRDGBufferSRV *)0x0;
  local_b8.ScatterByteAddressBuffer = (FRDGBufferSRV *)0x0;
  local_b8.ScatterStructuredBuffer = (FRDGBufferSRV *)0x0;
  local_138.DimensionValue = 0;
  local_138.Tail.DimensionValue = 0;
  GetScatterCopyParamsAndPermutation
            (param_1,param_2,param_3,param_4,(FScatterUploadConfig *)&param_5,pFVar4->NumScatters,
             &local_b8,&local_138);
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  iVar5 = local_138.DimensionValue;
  if (((3 < local_138.DimensionValue) || (local_138.DimensionValue < 0)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = local_138.Tail.DimensionValue;
  if (((3 < local_138.Tail.DimensionValue) || ((longlong)local_138._0_8_ < 0)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar10 = (FShaderType *)FRDGScatterCopyCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_118,pFVar10,iVar5 + iVar6 * 4);
  if (local_118.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    FName::ToString((FName *)this_00,&local_108);
    FRDGScatterCopyCS::GetStaticType();
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRDGScatterCopyCS::GetStaticType();
  local_f8.ShaderContent = (FRDGScatterCopyCS *)local_118.ShaderContent;
  local_f8.ShaderMap = local_118.ShaderMap;
  pFVar11 = FRDGBuilder::AllocParameters<FRDGScatterCopyCS::FParameters>(param_1,&local_b8);
  pFVar12 = FRDGEventName::FRDGEventName(&local_d8,L"ScatterUpload (Resource: %s)");
  pFVar13 = FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata();
  local_128._0_8_ = uVar1;
  local_128._s_0.Z = iVar8;
  FComputeShaderUtils::AddPass<FRDGScatterCopyCS>
            (param_1,pFVar12,Compute,&local_f8,pFVar13,pFVar11,(TIntVector3<int> *)&local_128._s_0);
  if (local_d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetAllShaderParametersAsBindless @ 145eb4840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetAllShaderParametersAsBindless
          (FRHIBatchedShaderParameters *param_1,FShaderParametersMetadata *param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_28;
  
  uVar1 = param_2->Size;
  if ((int)uVar1 < 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.BatchedParameters = param_1;
  local_28.Reader.Data = param_3;
  local_28.Reader.DataSize = (longlong)(int)uVar1;
  IterateShaderParameterMembersInternal<_SetAllShaderParametersAsBindless_::__l2::<lambda_1>_>
            (param_2,0,&local_28);
  return;
}

// SetRayTracingShaderParameters @ 145eb4c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
SetRayTracingShaderParameters
          (FRHIBatchedShaderParameters *param_1,FShaderParameterBindings *param_2,
          FShaderParametersMetadata *param_3,void *param_4)

{
  FRHIBatchedShaderParametersAllocator *pFVar1;
  FRHIBatchedShaderParameters *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar13;
  TRefCountPtr<FRHIUniformBuffer> local_res10;
  undefined4 uStack_c6c;
  TArrayView<unsigned_char_const_,int> local_c68;
  FRayTracingShaderBindingsWriter local_c58;
  FRayTracingShaderBindings local_638;
  ulonglong uVar12;
  
  uVar11 = param_3->Size;
  if (((int)uVar11 < 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((param_2->Parameters).ArrayNum != 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Bindings.Parameters.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x461,
                         L"Ray tracing shader should use SHADER_USE_ROOT_PARAMETER_STRUCT() to passdown the cbuffer layout to the shader compiler."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_c68._12_4_ = uStack_c6c;
  local_c68.ArrayNum = uVar11;
  local_c68.DataPtr = param_4;
  ExtractShaderParameterResources(param_1,param_2,&local_c68,StaticAndShader);
  uVar10 = 0;
  if (param_2->RootParameterBufferIndex != 0xffff) {
    if (((param_3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    RHICreateUniformBuffer
              (&local_res10,param_4,(EUniformBufferUsage)(param_3->Layout).Reference,None);
    pFVar1 = param_1->Allocator;
    pFVar2 = pFVar1->AttachedParameters;
    if (pFVar2 != param_1) {
      if ((pFVar2 != (FRHIBatchedShaderParameters *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("!AttachedParameters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                             ,0x82,
                             L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1->AttachedParameters = param_1;
    }
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameterResource,TRefCountPtr<FRHIUniformBuffer>_&,unsigned_short_const_&>
              (param_1->Allocator,&param_1->Allocator->ResourceParameters,
               &param_1->ResourceParameters,&local_res10,&param_2->RootParameterBufferIndex);
    if (local_res10.Reference != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_res10.Reference);
    }
  }
  memset(&local_c58,0,0x200);
  memset(&local_c58._padding_,0,0x200);
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  memset(&local_c58._padding_,0,0x100);
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58.RootUniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  local_c58._padding_ = 0;
  SetShaderParameters(&local_c58,param_2,param_3,param_4);
  ConvertRayTracingShaderBindings(&local_638,param_1);
  uVar8 = uVar10;
  uVar12 = uVar10;
  do {
    if ((*(longlong *)((longlong)&local_c58._padding_ + uVar8) !=
         *(longlong *)((longlong)local_638.Textures + uVar8)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("RTBindingsWriter.Textures[i] == ConvertedBindings.Textures[i]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x47e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
    uVar8 = uVar8 + 8;
    uVar9 = uVar10;
    uVar13 = uVar10;
  } while (uVar11 < 0x40);
  do {
    if ((*(longlong *)((longlong)&local_c58._padding_ + uVar9) !=
         *(longlong *)((longlong)local_638.SRVs + uVar9)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("RTBindingsWriter.SRVs[i] == ConvertedBindings.SRVs[i]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x483,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = (int)uVar13 + 1;
    uVar8 = uVar10;
    uVar9 = uVar9 + 8;
    uVar12 = uVar10;
    uVar13 = (ulonglong)uVar11;
  } while (uVar11 < 0x40);
  do {
    lVar3 = *(longlong *)((longlong)local_638.UniformBuffers + uVar8);
    if (*(longlong *)((longlong)&local_c58._padding_ + uVar8) == 0) {
      if ((lVar3 != 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("ConvertedBindings.UniformBuffers[i] == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                             ,0x48f,L""), bVar6)) goto code_r0x000145eb5050;
    }
    else {
      if ((lVar3 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("ConvertedBindings.UniformBuffers[i]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                             ,0x48a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)(*(longlong *)((longlong)local_638.UniformBuffers + uVar8) + 0x40);
      lVar4 = *(longlong *)(*(longlong *)((longlong)&local_c58._padding_ + uVar8) + 0x40);
      if (((((*(int *)(lVar4 + 0x8c) != *(int *)(lVar3 + 0x8c)) ||
            (*(char *)(lVar4 + 0x92) != *(char *)(lVar3 + 0x92))) ||
           (*(char *)(lVar4 + 0x93) != *(char *)(lVar3 + 0x93))) ||
          ((*(int *)(lVar4 + 0x30) != *(int *)(lVar3 + 0x30) ||
           (bVar6 = CompareItems<FRHIUniformBufferResource,int>
                              (*(FRHIUniformBufferResource **)(lVar4 + 0x28),
                               *(FRHIUniformBufferResource **)(lVar3 + 0x28),*(int *)(lVar4 + 0x30))
           , !bVar6)))) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("RTBindingsWriter.UniformBuffers[i]->GetLayout() == ConvertedBindings.UniformBuffers[i]->GetLayout()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                             ,0x48b,L""), bVar6)) {
code_r0x000145eb5050:
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar11 = (int)uVar12 + 1;
    uVar9 = uVar10;
    uVar8 = uVar8 + 8;
    uVar13 = uVar10;
    uVar12 = (ulonglong)uVar11;
    if (0xf < uVar11) {
      do {
        if ((*(longlong *)((longlong)&local_c58._padding_ + uVar9) !=
             *(longlong *)((longlong)local_638.Samplers + uVar9)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("RTBindingsWriter.Samplers[i] == ConvertedBindings.Samplers[i]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                               ,0x495,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = (int)uVar13 + 1;
        uVar8 = uVar10;
        uVar9 = uVar9 + 8;
        uVar12 = uVar10;
        uVar13 = (ulonglong)uVar11;
      } while (uVar11 < 0x20);
      do {
        if ((*(longlong *)((longlong)&local_c58._padding_ + uVar8) !=
             *(longlong *)((longlong)local_638.UAVs + uVar8)) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("RTBindingsWriter.UAVs[i] == ConvertedBindings.UAVs[i]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                               ,0x49a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = (int)uVar12 + 1;
        uVar8 = uVar8 + 8;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < 0x10);
      if (((int)local_c58._padding_ != local_638.BindlessParameters.ArrayNum) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("RTBindingsWriter.BindlessParameters.Num() == ConvertedBindings.BindlessParameters.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                             ,0x49d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = uVar10;
      if (0 < local_638.BindlessParameters.ArrayNum) {
        do {
          uVar7 = (uint)uVar10;
          uVar11 = 0;
          if ((int)uVar7 < (int)local_c58._padding_) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = local_c58._padding_;
          uVar11 = 0;
          if ((int)uVar7 < local_638.BindlessParameters.ArrayNum) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((((*(longlong *)(lVar3 + uVar8) !=
                 *(longlong *)(local_638.BindlessParameters.AllocatorInstance.Data + uVar8)) ||
               (*(short *)(lVar3 + uVar8 + 8) !=
                *(short *)(local_638.BindlessParameters.AllocatorInstance.Data + uVar8 + 8))) ||
              (*(FScriptContainerElement *)(lVar3 + uVar8 + 10) !=
               local_638.BindlessParameters.AllocatorInstance.Data[uVar8 + 10])) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("RTBindingsWriter.BindlessParameters[i] == ConvertedBindings.BindlessParameters[i]"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                                 ,0x4a0,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = (ulonglong)(uVar7 + 1);
          uVar8 = uVar8 + 0x10;
        } while ((int)(uVar7 + 1) < local_638.BindlessParameters.ArrayNum);
      }
      if (local_638.BindlessParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_638.BindlessParameters.AllocatorInstance.Data);
      }
      if (local_c58.RootUniformBuffer.Reference != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_c58.RootUniformBuffer.Reference);
      }
      if ((void *)local_c58._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_c58._padding_);
      }
      return;
    }
  } while( true );
}

// SetShaderParameters @ 145eb52d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParameters(FRHIBatchedShaderParameters *param_1,FShaderParameterBindings *param_2,
                   FShaderParametersMetadata *param_3,void *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  FRHIBatchedShaderParametersAllocator *pFVar6;
  FRHIBatchedShaderParameters *pFVar7;
  code *pcVar8;
  ushort *puVar9;
  bool bVar10;
  uchar *_Dst;
  uchar *_Dst_00;
  ForAnyElementType FVar11;
  int iVar12;
  ushort *puVar13;
  undefined1 local_res18 [8];
  void *local_res20;
  ushort local_82;
  ushort local_80;
  ushort local_7e;
  ushort local_7c [2];
  int local_78;
  int local_74;
  ushort *local_70;
  uchar *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  uchar *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TArrayView<unsigned_char_const_,int> local_48;
  
  uStack_50 = param_3->Size;
  local_res20 = param_4;
  local_58 = param_4;
  if (((int)uStack_50 < 0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar11 = (param_2->Parameters).AllocatorInstance;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(param_2->Parameters).AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  local_78 = (param_2->Parameters).ArrayNum;
  puVar13 = (ushort *)((longlong)FVar11 + 6);
  local_70 = (ushort *)((longlong)FVar11 + (longlong)local_78 * 8);
  while( true ) {
    puVar9 = local_70;
    if ((param_2->Parameters).ArrayNum != local_78) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FShaderParameterBindings::FParameter_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (puVar13 + -3 == puVar9) {
      local_48._12_4_ = uStack_4c;
      local_48.ArrayNum = uStack_50;
      local_48.DataPtr = local_58;
      ExtractShaderParameterResources(param_1,param_2,&local_48,Shader);
      return;
    }
    uVar1 = puVar13[-3];
    pFVar6 = param_1->Allocator;
    uVar2 = puVar13[-1];
    uVar3 = *puVar13;
    uVar4 = puVar13[-2];
    local_74 = (param_1->ParametersData).ArrayNum;
    pFVar7 = pFVar6->AttachedParameters;
    if (pFVar7 != param_1) {
      if ((pFVar7 != (FRHIBatchedShaderParameters *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!AttachedParameters",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                              ,0x82,
                              L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6->AttachedParameters = param_1;
    }
    iVar5 = (param_1->ParametersData).ArrayNum;
    pFVar6 = param_1->Allocator;
    _Dst_00 = (param_1->ParametersData).DataPtr;
    iVar12 = (uint)uVar3 + iVar5;
    if (iVar5 == 0) {
      _Dst = FMemStackBase::Alloc(&pFVar6->ParametersData,(ulonglong)uVar3,1);
      _Dst_00 = _Dst;
    }
    else {
      if (((pFVar6->ParametersData).Top != _Dst_00 + iVar5) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("ParametersData.GetTop() == InOutArray.GetData() + InOutArray.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                              ,0xdb,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((pFVar6->ParametersData).End < (pFVar6->ParametersData).Top + uVar3) {
        _Dst_00 = FMemStackBase::Alloc(&pFVar6->ParametersData,(longlong)iVar12,1);
        memcpy(_Dst_00,(param_1->ParametersData).DataPtr,
               (longlong)(param_1->ParametersData).ArrayNum);
        _Dst = _Dst_00 + (param_1->ParametersData).ArrayNum;
      }
      else {
        _Dst = FMemStackBase::Alloc(&pFVar6->ParametersData,(ulonglong)uVar3,1);
      }
    }
    memcpy(_Dst,(void *)((ulonglong)uVar2 + (longlong)param_4),(ulonglong)uVar3);
    local_68 = _Dst_00;
    iStack_60 = iVar12;
    if ((iVar12 < 0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) break;
    local_80 = (ushort)local_74;
    (param_1->ParametersData).DataPtr = local_68;
    *(ulonglong *)&(param_1->ParametersData).ArrayNum = CONCAT44(uStack_5c,iStack_60);
    local_82 = uVar3;
    local_7e = uVar4;
    local_7c[0] = uVar1;
    FRHIBatchedShaderParametersAllocator::
    Emplace<FRHIShaderParameter,unsigned_short,unsigned_short,unsigned_short,unsigned_short>
              (param_1->Allocator,&param_1->Allocator->Parameters,&param_1->Parameters,local_7c,
               &local_7e,&local_80,&local_82);
    puVar13 = puVar13 + 4;
    param_4 = local_res20;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// SetShaderParameters @ 145eb55d0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
SetShaderParameters(FRayTracingShaderBindingsWriter *param_1,FShaderParameterBindings *param_2,
                   FShaderParametersMetadata *param_3,void *param_4)

{
  int *piVar1;
  ushort *puVar2;
  longlong *plVar3;
  TRefCountPtr<FRHIUniformBuffer> *pTVar4;
  ForAnyElementType FVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  FRDGResource *pFVar9;
  FRHIUniformBuffer *this;
  code *pcVar10;
  FShaderParametersMetadata *pFVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  TRefCountPtr<FRHIUniformBuffer> TVar15;
  ForAnyElementType FVar16;
  undefined1 local_res10 [8];
  FShaderParametersMetadata *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_88;
  undefined1 local_87 [15];
  FRHIResource *local_78;
  ulonglong uStack_70;
  FRHIShaderParameterResource local_68;
  FShaderParameterReader local_58 [2];
  
  uVar14 = (ulonglong)param_3->Size;
  iVar8 = (param_2->BindlessResourceParameters).ArrayNum;
  local_res18 = param_3;
  local_78 = param_4;
  uStack_70 = uVar14;
  if (iVar8 != 0) {
    FVar16 = (param_2->BindlessResourceParameters).AllocatorInstance;
    if (((ulonglong)FVar16 & 1) != 0) {
      FVar16 = (ForAnyElementType)
               ((longlong)&(param_2->BindlessResourceParameters).AllocatorInstance.field_0x0 +
               ((longlong)FVar16 >> 0x18));
    }
    FVar5 = (ForAnyElementType)((longlong)FVar16 + (longlong)iVar8 * 6);
    while( true ) {
      if ((param_2->BindlessResourceParameters).ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FBindlessResourceParameter_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar16 == FVar5) break;
      local_58[0].Data = param_4;
      local_58[0].DataSize = uVar14;
      ExtractShaderParameterResource<FShaderParameterBindings::FBindlessResourceParameter>
                (&local_68,local_58,(FBindlessResourceParameter *)FVar16);
      plVar3 = &param_1->_padding_;
      if ((((FRHIShaderParameterResource *)*plVar3 <= &local_68) &&
          (&local_68 <
           (FRHIShaderParameterResource *)*plVar3 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar12 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)plVar3,piVar1);
      }
      *(int *)&param_1->_padding_ = iVar13 + 1;
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 6);
      puVar6 = (undefined8 *)(*plVar3 + (longlong)iVar13 * 0x10);
      *puVar6 = local_68.Resource;
      puVar6[1] = local_68._8_8_;
    }
  }
  pFVar11 = local_res18;
  FVar16 = (param_2->ResourceParameters).AllocatorInstance;
  if (((ulonglong)FVar16 & 1) != 0) {
    FVar16 = (ForAnyElementType)
             ((longlong)&(param_2->ResourceParameters).AllocatorInstance.field_0x0 +
             ((longlong)FVar16 >> 0x18));
  }
  iVar8 = (param_2->ResourceParameters).ArrayNum;
  FVar5 = (ForAnyElementType)((longlong)FVar16 + (longlong)iVar8 * 4);
  while( true ) {
    if ((param_2->ResourceParameters).ArrayNum != iVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar16 == FVar5) break;
    switch(*(undefined1 *)((longlong)FVar16 + 3)) {
    case 5:
      uVar7 = *(ushort *)FVar16;
      puVar2 = (ushort *)((longlong)FVar16 + 2);
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
      (&param_1->_padding_)[*(byte *)puVar2] = *(longlong *)((ulonglong)uVar7 + (longlong)param_4);
      break;
    case 6:
      uVar7 = *(ushort *)FVar16;
      puVar2 = (ushort *)((longlong)FVar16 + 2);
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
      (&param_1->_padding_)[*(byte *)puVar2] = *(longlong *)((ulonglong)uVar7 + (longlong)param_4);
      break;
    case 7:
      uVar7 = *(ushort *)FVar16;
      puVar2 = (ushort *)((longlong)FVar16 + 2);
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
      (&param_1->_padding_)[*(byte *)puVar2] = *(longlong *)((ulonglong)uVar7 + (longlong)param_4);
      break;
    case 8:
      uVar7 = *(ushort *)FVar16;
      puVar2 = (ushort *)((longlong)FVar16 + 2);
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
      (&param_1->_padding_)[*(byte *)puVar2] = *(longlong *)((ulonglong)uVar7 + (longlong)param_4);
      break;
    case 9:
      pFVar9 = *(FRDGResource **)((ulonglong)*(ushort *)FVar16 + (longlong)param_4);
      FRDGResource::MarkResourceAsUsed(pFVar9);
      FRDGResource::ValidateRHIAccess(pFVar9);
      puVar2 = (ushort *)((longlong)FVar16 + 2);
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
      (&param_1->_padding_)[*(byte *)puVar2] = (longlong)pFVar9->ResourceRHI;
      break;
    default:
      bVar12 = FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                          ,0x400,L"Unhandled resource type?");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
      break;
    case 0xc:
    case 0xd:
    case 0x11:
      pFVar9 = *(FRDGResource **)((ulonglong)*(ushort *)FVar16 + (longlong)param_4);
      (**(code **)(pFVar9->_padding_ + 8))(pFVar9);
      FRDGResource::ValidateRHIAccess(pFVar9);
      puVar2 = (ushort *)((longlong)FVar16 + 2);
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
      (&param_1->_padding_)[*(byte *)puVar2] = (longlong)pFVar9->ResourceRHI;
      break;
    case 0xe:
    case 0x12:
      pFVar9 = *(FRDGResource **)((ulonglong)*(ushort *)FVar16 + (longlong)param_4);
      (**(code **)(pFVar9->_padding_ + 8))(pFVar9);
      FRDGResource::ValidateRHIAccess(pFVar9);
      puVar2 = (ushort *)((longlong)FVar16 + 2);
      FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
      (&param_1->_padding_)[*(byte *)puVar2] = (longlong)pFVar9->ResourceRHI;
    }
  }
  FVar16 = (param_2->GraphUniformBuffers).AllocatorInstance;
  if (((ulonglong)FVar16 & 1) != 0) {
    FVar16 = (ForAnyElementType)
             ((longlong)&(param_2->GraphUniformBuffers).AllocatorInstance.field_0x0 +
             ((longlong)FVar16 >> 0x18));
  }
  iVar8 = (param_2->GraphUniformBuffers).ArrayNum;
  FVar5 = (ForAnyElementType)((longlong)FVar16 + (longlong)iVar8 * 4);
  while( true ) {
    if ((param_2->GraphUniformBuffers).ArrayNum != iVar8) {
      local_88 = 0;
      `TCheckedPointerIterator<FShaderParameterBindings::FParameterStructReference_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_88);
    }
    if (FVar16 == FVar5) break;
    uVar7 = *(ushort *)((longlong)FVar16 + 2);
    (**(code **)(**(longlong **)((ulonglong)uVar7 + (longlong)param_4) + 8))();
    pFVar9 = *(FRDGResource **)((ulonglong)uVar7 + (longlong)param_4);
    FRDGResource::ValidateRHIAccess(pFVar9);
    uVar7 = *(ushort *)FVar16;
    FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
    (&param_1->_padding_)[uVar7] = (longlong)pFVar9->ResourceRHI;
  }
  FVar16 = (param_2->ParameterReferences).AllocatorInstance;
  if (((ulonglong)FVar16 & 1) != 0) {
    FVar16 = (ForAnyElementType)
             ((longlong)&(param_2->ParameterReferences).AllocatorInstance.field_0x0 +
             ((longlong)FVar16 >> 0x18));
  }
  iVar8 = (param_2->ParameterReferences).ArrayNum;
  FVar5 = (ForAnyElementType)((longlong)FVar16 + (longlong)iVar8 * 4);
  while( true ) {
    if ((param_2->ParameterReferences).ArrayNum != iVar8) {
      local_87[0] = 0;
      `TCheckedPointerIterator<FShaderParameterBindings::FParameterStructReference_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_87);
    }
    if (FVar16 == FVar5) break;
    puVar2 = (ushort *)((longlong)FVar16 + 2);
    uVar7 = *(ushort *)FVar16;
    FVar16 = (ForAnyElementType)((longlong)FVar16 + 4);
    (&param_1->_padding_)[uVar7] = *(longlong *)((ulonglong)*puVar2 + (longlong)param_4);
  }
  if (param_2->RootParameterBufferIndex != 0xffff) {
    if (((pFVar11->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar12 = FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    TVar15 = RHICreateUniformBuffer
                       (&local_78,param_4,(EUniformBufferUsage)(pFVar11->Layout).Reference,None);
    pTVar4 = &param_1->RootUniformBuffer;
    if ((FRHIUniformBuffer *)pTVar4 != TVar15.Reference) {
      this = pTVar4->Reference;
      pTVar4->Reference = (FRHIUniformBuffer *)(TVar15.Reference)->_padding_;
      (TVar15.Reference)->_padding_ = 0;
      if (this != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
      }
    }
    if (local_78 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_78);
    }
    (&param_1->_padding_)[param_2->RootParameterBufferIndex] = (longlong)pTVar4->Reference;
  }
  return;
}

// SetShaderParameters @ 145eb5ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParameters(FRHICommandList *param_1,FRHIComputeShader *param_2,
                   FShaderParameterBindings *param_3,FShaderParametersMetadata *param_4,
                   void *param_5)

{
  code *pcVar1;
  bool bVar2;
  FRHIBatchedShaderParameters *pFVar3;
  
  if ((param_3->RootParameterBufferIndex != 0xffff) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x38c,L"Can\'t use SetShaderParameters() for root parameter buffer index."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(*(undefined1 *)((longlong)&param_2->_padding_ + 4)) {
  case 6:
  case 7:
  case 8:
  case 9:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsRayTracingShaderFrequency(ShaderRHI->GetFrequency())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                       ,0x38d,
                       L"Can\'t use SetShaderParameters() with RHICmdList parameter for ray tracing shaders."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  SetShaderParameters(pFVar3,param_3,param_4,param_5);
  FRHIComputeCommandList::SetBatchedShaderParameters
            ((FRHIComputeCommandList *)param_1,param_2,pFVar3);
  return;
}

// SetShaderParameters @ 145eb5be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParameters(FRHICommandList *param_1,FRHIGraphicsShader *param_2,
                   FShaderParameterBindings *param_3,FShaderParametersMetadata *param_4,
                   void *param_5)

{
  code *pcVar1;
  bool bVar2;
  FRHIBatchedShaderParameters *pFVar3;
  
  if ((param_3->RootParameterBufferIndex != 0xffff) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x38c,L"Can\'t use SetShaderParameters() for root parameter buffer index."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(param_2->field_0x104) {
  case 6:
  case 7:
  case 8:
  case 9:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsRayTracingShaderFrequency(ShaderRHI->GetFrequency())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                       ,0x38d,
                       L"Can\'t use SetShaderParameters() with RHICmdList parameter for ray tracing shaders."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  SetShaderParameters(pFVar3,param_3,param_4,param_5);
  FRHICommandList::SetBatchedShaderParameters(param_1,param_2,pFVar3);
  return;
}

// SetShaderParameters @ 145eb5d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParameters(FRHIComputeCommandList *param_1,FRHIComputeShader *param_2,
                   FShaderParameterBindings *param_3,FShaderParametersMetadata *param_4,
                   void *param_5)

{
  code *pcVar1;
  bool bVar2;
  FRHIBatchedShaderParameters *pFVar3;
  
  if ((param_3->RootParameterBufferIndex != 0xffff) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x38c,L"Can\'t use SetShaderParameters() for root parameter buffer index."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(*(undefined1 *)((longlong)&param_2->_padding_ + 4)) {
  case 6:
  case 7:
  case 8:
  case 9:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsRayTracingShaderFrequency(ShaderRHI->GetFrequency())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                       ,0x38d,
                       L"Can\'t use SetShaderParameters() with RHICmdList parameter for ray tracing shaders."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  SetShaderParameters(pFVar3,param_3,param_4,param_5);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,param_2,pFVar3);
  return;
}

// StripTemplateFromType @ 145eb7dd0

TStringView<wchar_t> * __cdecl
StripTemplateFromType(TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar3 = param_1->Size;
  iVar4 = param_1->Size;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  local_28.Size = 1;
  __return_storage_ptr__->DataPtr = param_1->DataPtr;
  __return_storage_ptr__->Size = iVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  local_28.DataPtr = L"<";
  local_18.Size = iVar4;
  local_18.DataPtr = param_1->DataPtr + ((longlong)iVar3 - (longlong)iVar4);
  iVar3 = UE::String::FindFirst(&local_18,&local_28,CaseSensitive);
  if (iVar3 != -1) {
    pwVar1 = param_1->DataPtr;
    iVar4 = param_1->Size;
    if (iVar3 < param_1->Size) {
      iVar4 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    if (iVar3 != 0) {
      lVar5 = (longlong)iVar3;
      do {
        iVar4 = iswspace(pwVar1[lVar5 + -1]);
        if (iVar4 == 0) break;
        iVar3 = iVar3 + -1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    __return_storage_ptr__->DataPtr = pwVar1;
    __return_storage_ptr__->Size = iVar3;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = local_18._12_4_;
  }
  return __return_storage_ptr__;
}

// SupportShaderPrecisionModifier @ 145eb7ec0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl SupportShaderPrecisionModifier(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel == ES3_1;
}

// TickHighFrequencyTickables @ 145eb98e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TickHighFrequencyTickables(FRHICommandListImmediate *param_1,double param_2)

{
  int *piVar1;
  longlong *plVar2;
  FName *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  double dVar16;
  FColor_u_0 local_res10 [4];
  FName local_res20;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  undefined1 local_80 [8];
  FName local_78;
  FStatMessage local_68 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    QueryPerformanceCounter(&local_90);
    LastHighFreqTime =
         (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
    ;
    _Init_thread_footer(&_TSS0);
  }
  uVar13 = 0;
  dVar16 = param_2 - LastHighFreqTime;
  uVar14 = uVar13;
  if (0 < (int)FTickableObjectRenderThread::RenderingThreadHighFrequencyTickableObjects._8_4_) {
    do {
      uVar12 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar12 <
          (int)FTickableObjectRenderThread::RenderingThreadHighFrequencyTickableObjects._8_4_) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar2 = *(longlong **)
                (uVar14 + FTickableObjectRenderThread::RenderingThreadHighFrequencyTickableObjects.
                          _0_8_);
      cVar8 = (**(code **)(*plVar2 + 0x18))(plVar2);
      if (cVar8 != '\0') {
        plVar10 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,local_80);
        bVar6 = false;
        bVar7 = false;
        local_78.ComparisonIndex.Value = 0;
        local_78.Number = 0;
        pFVar3 = (FName *)*plVar10;
        FVar4 = *pFVar3;
        if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res10[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res10[0]._s_0,(char *)pFVar3[2]);
            bVar6 = false;
            bVar7 = true;
            if (-1 < CpuChannel->Enabled) {
              local_res20.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
              local_res20.Number = FVar4.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_res20,(wchar_t *)pFVar3[1],
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\TickableObjectRenderThread.cpp"
                         ,0x16);
              bVar6 = true;
              bVar7 = true;
            }
          }
          bVar15 = FThreadStats::bPrimaryEnable != false;
          FVar11 = local_78;
          if (bVar15) {
            local_78 = FVar4;
            FThreadStats::AddMessage(FVar4,CycleScopeStart);
            bVar6 = false;
            FVar11 = FVar4;
          }
          if (bVar7) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar6) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar15) && (FVar11 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this = TlsGetValue(FThreadStats::TlsSlot);
            if (this == (FThreadStats *)0x0) {
              this_00 = FThreadStatsPool::Get();
              this = FThreadStatsPool::GetFromPool(this_00);
            }
            if (this->bWaitForExplicitFlush < this->ScopeCount) {
              local_68[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
              local_68[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
              QueryPerformanceCounter(&local_88);
              local_68[0].StatData.Pad[4] = '\0';
              local_68[0].StatData.Pad[5] = '\0';
              local_68[0].StatData.Pad[6] = '\0';
              local_68[0].StatData.Pad[7] = '\0';
              local_68[0].StatData.Pad[0] = local_88.s.LowPart._0_1_;
              local_68[0].StatData.Pad[1] = local_88.s.LowPart._1_1_;
              local_68[0].StatData.Pad[2] = local_88.s.LowPart._2_1_;
              local_68[0].StatData.Pad[3] = local_88.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this,local_68);
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
        }
        (**(code **)(*plVar2 + 8))(plVar2,param_1,(float)dVar16);
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar12 + 1) <
             (int)FTickableObjectRenderThread::RenderingThreadHighFrequencyTickableObjects._8_4_);
  }
  LastHighFreqTime = param_2;
  return;
}

// TickRenderingTickables @ 145eb9c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TickRenderingTickables(FRHICommandListImmediate *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FName *pFVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  double dVar18;
  FColor_u_0 local_res10 [4];
  FName local_res20;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  undefined1 local_88 [8];
  FName local_80;
  FStatMessage local_70 [3];
  
  dVar6 = __real_4170000000000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    QueryPerformanceCounter(&local_a0);
    LastTickTime = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
    _Init_thread_footer(&_TSS0);
  }
  QueryPerformanceCounter(&local_98);
  dVar6 = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
  dVar18 = dVar6 - LastTickTime;
  TickHighFrequencyTickables(param_1,dVar6);
  dVar8 = LastTickTime;
  if (__real_3f800000 / GRenderingThreadMaxIdleTickFrequency <= (float)dVar18) {
    uVar15 = 0;
    uVar16 = uVar15;
    dVar8 = dVar6;
    if (0 < (int)FTickableObjectRenderThread::RenderingThreadTickableObjects._8_4_) {
      do {
        uVar14 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar14 < (int)FTickableObjectRenderThread::RenderingThreadTickableObjects._8_4_) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar2 = *(longlong **)
                  (uVar16 + FTickableObjectRenderThread::RenderingThreadTickableObjects._0_8_);
        cVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (cVar10 != '\0') {
          plVar12 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,local_88);
          bVar7 = false;
          bVar9 = false;
          local_80.ComparisonIndex.Value = 0;
          local_80.Number = 0;
          pFVar3 = (FName *)*plVar12;
          FVar4 = *pFVar3;
          if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_res10[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_res10[0]._s_0,(char *)pFVar3[2]);
              bVar7 = false;
              bVar9 = true;
              if (-1 < CpuChannel->Enabled) {
                local_res20.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
                local_res20.Number = FVar4.Number;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_res20,(wchar_t *)pFVar3[1],
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\TickableObjectRenderThread.cpp"
                           ,0x36);
                bVar7 = true;
                bVar9 = true;
              }
            }
            bVar17 = FThreadStats::bPrimaryEnable != false;
            FVar13 = local_80;
            if (bVar17) {
              local_80 = FVar4;
              FThreadStats::AddMessage(FVar4,CycleScopeStart);
              bVar7 = false;
              FVar13 = FVar4;
            }
            if (bVar9) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar7) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((((bVar17) && (FVar13 != (FName)0x0)) &&
                (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this = TlsGetValue(FThreadStats::TlsSlot);
              if (this == (FThreadStats *)0x0) {
                this_00 = FThreadStatsPool::Get();
                this = FThreadStatsPool::GetFromPool(this_00);
              }
              if (this->bWaitForExplicitFlush < this->ScopeCount) {
                local_70[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
                local_70[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
                QueryPerformanceCounter(&local_90);
                local_70[0].StatData.Pad[4] = '\0';
                local_70[0].StatData.Pad[5] = '\0';
                local_70[0].StatData.Pad[6] = '\0';
                local_70[0].StatData.Pad[7] = '\0';
                local_70[0].StatData.Pad[0] = local_90.s.LowPart._0_1_;
                local_70[0].StatData.Pad[1] = local_90.s.LowPart._1_1_;
                local_70[0].StatData.Pad[2] = local_90.s.LowPart._2_1_;
                local_70[0].StatData.Pad[3] = local_90.s.LowPart._3_1_;
                FThreadStats::AddStatMessage(this,local_70);
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
          }
          (**(code **)(*plVar2 + 8))(plVar2,param_1,(float)dVar18);
        }
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar16 = uVar16 + 8;
      } while ((int)(uVar14 + 1) <
               (int)FTickableObjectRenderThread::RenderingThreadTickableObjects._8_4_);
    }
  }
  LastTickTime = dVar8;
  return;
}

// TickRenderingTickables @ 145eba020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TickRenderingTickables(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TickRenderingTickables(&GRHICommandList.CommandListImmediate);
  return;
}

// ValidateShaderParameterResourcesRHI @ 145ebc8f0

void __cdecl ValidateShaderParameterResourcesRHI(void *param_1,FRHIUniformBufferLayout *param_2)

{
  FRDGResource *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRHIResource *pFVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(param_2->Resources).ArrayNum;
  uVar7 = 0;
  if (0 < lVar8) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (param_2->Resources).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = *(uint *)((param_2->Resources).AllocatorInstance.Data + lVar6 * 4);
      bVar5 = (byte)(uVar3 >> 0x10);
      if ((((bVar5 == 0x17) || ((byte)(bVar5 - 10) < 2)) || ((byte)(bVar5 - 0xf) < 2)) ||
         ((bVar5 == 0x16 || (bVar5 == 0x13)))) {
LAB_145ebc9d8:
        pFVar4 = (FRHIResource *)0x0;
      }
      else if ((bVar5 < 0x13) && ((0x67200U >> (uVar3 >> 0x10 & 0x1f) & 1) != 0)) {
        this = *(FRDGResource **)((ulonglong)(ushort)uVar3 + (longlong)param_1);
        if (this == (FRDGResource *)0x0) goto LAB_145ebc9d8;
        FRDGResource::ValidateRHIAccess(this);
        pFVar4 = this->ResourceRHI;
      }
      else {
        pFVar4 = *(FRHIResource **)((ulonglong)(ushort)uVar3 + (longlong)param_1);
      }
      if ((bVar5 < 0x12) && ((0x23040U >> (bVar5 & 0x1f) & 1) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((((1 < (int)GMaxRHIFeatureLevel) || (!bVar2)) && (pFVar4 == (FRHIResource *)0x0)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                             ,0x261,
                             L"Null resource entry in uniform buffer parameters: %s.Resources[%u], ResourceType 0x%x."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar8);
  }
  return;
}

// ValidateShaderParameters @ 145ebd760

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
ValidateShaderParameters
          (TShaderRefBase<FShader,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,void *param_3)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FShader *pFVar4;
  FShaderMapBase *pFVar5;
  FShader *pFVar6;
  FShaderMapResource *this;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FRHIShader *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  pFVar4 = param_1->ShaderContent;
  uVar2 = (pFVar4->Bindings).StructureLayoutHash;
  uVar9 = FShaderParametersMetadata::GetLayoutHash(param_2);
  if (uVar2 != uVar9) {
    pFVar5 = param_1->ShaderMap;
    pFVar6 = param_1->ShaderContent;
    if ((pFVar5->PointerTable == (FShaderMapPointerTable *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FShader::GetType(pFVar6,pFVar5->PointerTable);
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Bindings.StructureLayoutHash == ParametersMetadata->GetLayoutHash()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                       ,0x202,
                       L"Shader %s\'s parameter structure has changed without recompilation of the shader"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = param_1->ShaderMap;
  pFVar6 = param_1->ShaderContent;
  if ((pFVar5->PointerTable == (FShaderMapPointerTable *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("PointerTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x9b4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FShader::GetType(pFVar6,pFVar5->PointerTable);
  if (param_1->ShaderContent != (FShader *)0x0) {
    this = (param_1->ShaderMap->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar3 = param_1->ShaderContent->ResourceIndex;
    if ((((this->RHIShaders).Ptr[iVar3] == (atomic<FRHIShader_*>)0x0) &&
        (pFVar10 = FShaderMapResource::CreateShaderOrCrash(this,iVar3,true),
        pFVar10 == (FRHIShader *)0x0)) && (4 < (byte)LogShaders._0_1_)) {
      TShaderRefBase<FShader,FShaderMapPointerTable>::GetType(param_1);
      UE::Logging::Private::BasicLog<5>
                (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  FVar11 = (pFVar4->Bindings).ResourceParameters.AllocatorInstance;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(pFVar4->Bindings).ResourceParameters.AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  iVar3 = (pFVar4->Bindings).ResourceParameters.ArrayNum;
  FVar1 = (ForAnyElementType)((longlong)FVar11 + (longlong)iVar3 * 4);
  while( true ) {
    if ((pFVar4->Bindings).ResourceParameters.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar11 == FVar1) break;
    switch(*(undefined1 *)((longlong)FVar11 + 3)) {
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x12:
      if (*(longlong *)((ulonglong)*(ushort *)FVar11 + (longlong)param_3) == 0) {
        EmitNullShaderParameterFatalError(param_1,param_2,*(ushort *)FVar11);
      }
    }
    FVar11 = (ForAnyElementType)((longlong)FVar11 + 4);
  }
  FVar11 = (pFVar4->Bindings).GraphUniformBuffers.AllocatorInstance;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(pFVar4->Bindings).GraphUniformBuffers.AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  iVar3 = (pFVar4->Bindings).GraphUniformBuffers.ArrayNum;
  FVar1 = (ForAnyElementType)((longlong)FVar11 + (longlong)iVar3 * 4);
  while( true ) {
    if ((pFVar4->Bindings).GraphUniformBuffers.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FShaderParameterBindings::FParameterStructReference_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar11 == FVar1) break;
    if (*(longlong *)((ulonglong)*(ushort *)((longlong)FVar11 + 2) + (longlong)param_3) == 0) {
      EmitNullShaderParameterFatalError(param_1,param_2,*(ushort *)((longlong)FVar11 + 2));
    }
    FVar11 = (ForAnyElementType)((longlong)FVar11 + 4);
  }
  FVar11 = (pFVar4->Bindings).ParameterReferences.AllocatorInstance;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(pFVar4->Bindings).ParameterReferences.AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  iVar3 = (pFVar4->Bindings).ParameterReferences.ArrayNum;
  FVar1 = (ForAnyElementType)((longlong)FVar11 + (longlong)iVar3 * 4);
  while( true ) {
    if ((pFVar4->Bindings).ParameterReferences.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FShaderParameterBindings::FParameterStructReference_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar11 == FVar1) break;
    if (*(longlong *)((ulonglong)*(ushort *)((longlong)FVar11 + 2) + (longlong)param_3) == 0) {
      EmitNullShaderParameterFatalError(param_1,param_2,*(ushort *)((longlong)FVar11 + 2));
    }
    FVar11 = (ForAnyElementType)((longlong)FVar11 + 4);
  }
  return;
}

// Instance'' @ 1503d3180

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'UE::ShaderPipeline::FShutdownContainer::Instance__(void)

{
  FScriptContainerElement *pFVar1;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  TVar2;
  
  TVar2.Ptr = UE::ShaderPipeline::FShutdownContainer::Instance.Ptr;
  if (UE::ShaderPipeline::FShutdownContainer::Instance.Ptr != (FShutdownContainer *)0x0) {
    TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::
    ~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>
              (&(UE::ShaderPipeline::FShutdownContainer::Instance.Ptr)->ShutdownFetchTasks);
    DestructItems<UE::ShaderPipeline::CompileJob,int>
              ((CompileJob *)((TVar2.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data,
               ((TVar2.Ptr)->ShutdownReadCompileTasks).ArrayNum);
    pFVar1 = ((TVar2.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(TVar2.Ptr,0x38);
    return;
  }
  return;
}

// Null'' @ 1503d31e0

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer(&UE::DerivedData::FValue::Null.Data.CompressedData);
  return;
}

// Null'' @ 1503d3200

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer
            ((FCompositeBuffer *)&UE::DerivedData::FValueWithId::Null._padding_);
  return;
}

// OnCachePreOpen'' @ 1503d3220

void __cdecl `dynamic_atexit_destructor_for_'FShaderPipelineCache::OnCachePreOpen__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FShaderPipelineCache::OnCachePreOpen._8_8_,FShaderPipelineCache::OnCachePreOpen._16_4_)
  ;
  if (FShaderPipelineCache::OnCachePreOpen._8_8_ != 0) {
    FMemory::Free((void *)FShaderPipelineCache::OnCachePreOpen._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FShaderPipelineCache::OnCachePreOpen);
  return;
}

// OnCachedClosed'' @ 1503d3260

void __cdecl `dynamic_atexit_destructor_for_'FShaderPipelineCache::OnCachedClosed__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FShaderPipelineCache::OnCachedClosed._8_8_,FShaderPipelineCache::OnCachedClosed._16_4_)
  ;
  if (FShaderPipelineCache::OnCachedClosed._8_8_ != 0) {
    FMemory::Free((void *)FShaderPipelineCache::OnCachedClosed._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FShaderPipelineCache::OnCachedClosed);
  return;
}

// OnCachedOpened'' @ 1503d32a0

void __cdecl `dynamic_atexit_destructor_for_'FShaderPipelineCache::OnCachedOpened__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FShaderPipelineCache::OnCachedOpened._8_8_,FShaderPipelineCache::OnCachedOpened._16_4_)
  ;
  if (FShaderPipelineCache::OnCachedOpened._8_8_ != 0) {
    FMemory::Free((void *)FShaderPipelineCache::OnCachedOpened._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FShaderPipelineCache::OnCachedOpened);
  return;
}

// OnPrecompilationBegin'' @ 1503d32e0

void __cdecl `dynamic_atexit_destructor_for_'FShaderPipelineCache::OnPrecompilationBegin__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FShaderPipelineCache::OnPrecompilationBegin._8_8_,
             FShaderPipelineCache::OnPrecompilationBegin._16_4_);
  if (FShaderPipelineCache::OnPrecompilationBegin._8_8_ != 0) {
    FMemory::Free((void *)FShaderPipelineCache::OnPrecompilationBegin._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FShaderPipelineCache::OnPrecompilationBegin);
  return;
}

// OnPrecompilationComplete'' @ 1503d3320

void __cdecl `dynamic_atexit_destructor_for_'FShaderPipelineCache::OnPrecompilationComplete__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FShaderPipelineCache::OnPrecompilationComplete._8_8_,
             FShaderPipelineCache::OnPrecompilationComplete._16_4_);
  if (FShaderPipelineCache::OnPrecompilationComplete._8_8_ != 0) {
    FMemory::Free((void *)FShaderPipelineCache::OnPrecompilationComplete._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FShaderPipelineCache::OnPrecompilationComplete);
  return;
}

// RenderingThreadHighFrequencyTickableObjects'' @ 1503d3360

void __cdecl
`dynamic_atexit_destructor_for_'FTickableObjectRenderThread::
RenderingThreadHighFrequencyTickableObjects__(void)

{
  FTickableObjectRenderThread::FRenderingThreadTickableObjectsArray::
  ~FRenderingThreadTickableObjectsArray
            (&FTickableObjectRenderThread::RenderingThreadHighFrequencyTickableObjects);
  return;
}

// RenderingThreadTickableObjects'' @ 1503d3380

void __cdecl
`dynamic_atexit_destructor_for_'FTickableObjectRenderThread::RenderingThreadTickableObjects__(void)

{
  FTickableObjectRenderThread::FRenderingThreadTickableObjectsArray::
  ~FRenderingThreadTickableObjectsArray
            (&FTickableObjectRenderThread::RenderingThreadTickableObjects);
  return;
}

// ShaderTypeRegistration'' @ 1503d33a0

void __cdecl `dynamic_atexit_destructor_for_'FMemcpyCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503d33b0

void __cdecl `dynamic_atexit_destructor_for_'FMemsetBufferCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503d33c0

void __cdecl `dynamic_atexit_destructor_for_'FRDGMemcpyCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503d33d0

void __cdecl `dynamic_atexit_destructor_for_'FRDGMemsetBufferCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503d33e0

void __cdecl `dynamic_atexit_destructor_for_'FRDGScatterCopyCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503d33f0

void __cdecl `dynamic_atexit_destructor_for_'FScatterCopyCS::ShaderTypeRegistration__(void)

{
  return;
}

// UserCacheTaskKey'' @ 1503d3400

void __cdecl `dynamic_atexit_destructor_for_'FShaderPipelineCache::UserCacheTaskKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FShaderPipelineCache::UserCacheTaskKey.Data.AllocatorInstance.Data;
  if (FShaderPipelineCache::UserCacheTaskKey.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FShaderPipelineCache::UserCacheTaskKey.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CVarEnableDebugHashAssociation'' @ 1503d3420

void __cdecl _dynamic_atexit_destructor_for__CVarEnableDebugHashAssociation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableDebugHashAssociation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableShaderMapTracking'' @ 1503d3440

void __cdecl _dynamic_atexit_destructor_for__CVarEnableShaderMapTracking__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableShaderMapTracking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInstancedStereo'' @ 1503d3460

void __cdecl
`UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects'::__l2::
_dynamic_atexit_destructor_for__CVarInstancedStereo__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CVarInstancedStereo.CVarName.Data.AllocatorInstance.Data;
  if (CVarInstancedStereo.CVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CVarInstancedStereo.CVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarMobileMultiView'' @ 1503d3480

void __cdecl
`UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects'::__l2::
_dynamic_atexit_destructor_for__CVarMobileMultiView__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CVarMobileMultiView.CVarName.Data.AllocatorInstance.Data;
  if (CVarMobileMultiView.CVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CVarMobileMultiView.CVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheAutoSaveTime'' @ 1503d34a0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheAutoSaveTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheAutoSaveTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheAutoSaveTimeBoundPSO'' @ 1503d34c0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheAutoSaveTimeBoundPSO__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCacheAutoSaveTimeBoundPSO);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheBackgroundBatchSize'' @ 1503d34e0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheBackgroundBatchSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCacheBackgroundBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheBackgroundBatchTime'' @ 1503d3500

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheBackgroundBatchTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCacheBackgroundBatchTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheBatchSize'' @ 1503d3520

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheBatchSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheBatchTime'' @ 1503d3540

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheBatchTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheBatchTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheGameFileMaskEnabled'' @ 1503d3560

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheGameFileMaskEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCacheGameFileMaskEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheMaxPrecompileTime'' @ 1503d3580

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheMaxPrecompileTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheMaxPrecompileTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheMinBindCount'' @ 1503d35a0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheMinBindCount__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheMinBindCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheOnlyOpenUserCache'' @ 1503d35c0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheOnlyOpenUserCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheOnlyOpenUserCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCachePreCompileMask'' @ 1503d35e0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCachePreCompileMask__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCachePreCompileMask);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCachePreOptimizeEnabled'' @ 1503d3600

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCachePreOptimizeEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCachePreOptimizeEnabled)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCachePrecompileBatchSize'' @ 1503d3620

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCachePrecompileBatchSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCachePrecompileBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCachePrecompileBatchTime'' @ 1503d3640

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCachePrecompileBatchTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCachePrecompileBatchTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheSaveAfterPSOsLogged'' @ 1503d3660

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheSaveAfterPSOsLogged__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCacheSaveAfterPSOsLogged);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheSaveBoundPSOLog'' @ 1503d3680

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheSaveBoundPSOLog__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheSaveBoundPSOLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheStartupMode'' @ 1503d36a0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheStartupMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheStartupMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOGlobalShadersOnlyWhenPSOPrecaching'' @ 1503d36c0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOGlobalShadersOnlyWhenPSOPrecaching__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOGlobalShadersOnlyWhenPSOPrecaching);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderCompilerEmitWarningsOnLoad'' @ 1503d36e0

void __cdecl _dynamic_atexit_destructor_for__CVarShaderCompilerEmitWarningsOnLoad__(void)

{
  CVarShaderCompilerEmitWarningsOnLoad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShaderCompilerEmitWarningsOnLoad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderPipelineCacheDoNotPrecompileComputePSO'' @ 1503d3700

void __cdecl
_dynamic_atexit_destructor_for__CVarShaderPipelineCacheDoNotPrecompileComputePSO__(void)

{
  CVarShaderPipelineCacheDoNotPrecompileComputePSO._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShaderPipelineCacheDoNotPrecompileComputePSO);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderPipelineCacheDoNotPrecompileRayTracingPSO'' @ 1503d3720

void __cdecl
_dynamic_atexit_destructor_for__CVarShaderPipelineCacheDoNotPrecompileRayTracingPSO__(void)

{
  CVarShaderPipelineCacheDoNotPrecompileRayTracingPSO._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShaderPipelineCacheDoNotPrecompileRayTracingPSO);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderSourceCompressionLevel'' @ 1503d3740

void __cdecl _dynamic_atexit_destructor_for__CVarShaderSourceCompressionLevel__(void)

{
  CVarShaderSourceCompressionLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShaderSourceCompressionLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderSourceCompressionMethod'' @ 1503d3760

void __cdecl _dynamic_atexit_destructor_for__CVarShaderSourceCompressionMethod__(void)

{
  CVarShaderSourceCompressionMethod._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShaderSourceCompressionMethod);
  return;
}

// `dynamic_atexit_destructor_for_'ClosePipelineCacheCmd'' @ 1503d3780

void __cdecl _dynamic_atexit_destructor_for__ClosePipelineCacheCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ClosePipelineCacheCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GAllShaderMaps'' @ 1503d37a0

void __cdecl _dynamic_atexit_destructor_for__GAllShaderMaps__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GAllShaderMaps.AllocatorInstance.Data;
  if (GAllShaderMaps.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GAllShaderMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GAllShaderMapsGuard'' @ 1503d37c0

void __cdecl _dynamic_atexit_destructor_for__GAllShaderMapsGuard__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503d37c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GAllShaderMapsGuard);
  return;
}

// `dynamic_atexit_destructor_for_'GLayoutHashStructMap'' @ 1503d37e0

void __cdecl
`GetLayoutHashStructMap'::__l2::_dynamic_atexit_destructor_for__GLayoutHashStructMap__(void)

{
  GLayoutHashStructMap._72_4_ = 0;
  if (GLayoutHashStructMap._64_8_ != 0) {
    FMemory::Free((void *)GLayoutHashStructMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FShaderParametersMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FShaderParametersMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FShaderParametersMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GLayoutHashStructMap);
  return;
}

// `dynamic_atexit_destructor_for_'GListShaderCmd'' @ 1503d3820

void __cdecl _dynamic_atexit_destructor_for__GListShaderCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GListShaderCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GListShaderMapsCmd'' @ 1503d3840

void __cdecl _dynamic_atexit_destructor_for__GListShaderMapsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GListShaderMapsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GPipelinePrecompileTasksInFlightVar'' @ 1503d3860

void __cdecl _dynamic_atexit_destructor_for__GPipelinePrecompileTasksInFlightVar__(void)

{
  GPipelinePrecompileTasksInFlightVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GPipelinePrecompileTasksInFlightVar);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalRayTracingCallableShaderLibrary'' @ 1503d3880

void __cdecl _dynamic_atexit_destructor_for__GlobalRayTracingCallableShaderLibrary__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&GlobalRayTracingCallableShaderLibrary.CS);
  GlobalRayTracingCallableShaderLibrary.ShadersPerPlatform._72_4_ = 0;
  if (GlobalRayTracingCallableShaderLibrary.ShadersPerPlatform._64_8_ != 0) {
    FMemory::Free((void *)GlobalRayTracingCallableShaderLibrary.ShadersPerPlatform._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GlobalRayTracingCallableShaderLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalRayTracingHitGroupLibrary'' @ 1503d38d0

void __cdecl _dynamic_atexit_destructor_for__GlobalRayTracingHitGroupLibrary__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&GlobalRayTracingHitGroupLibrary.CS);
  GlobalRayTracingHitGroupLibrary.ShadersPerPlatform._72_4_ = 0;
  if (GlobalRayTracingHitGroupLibrary.ShadersPerPlatform._64_8_ != 0) {
    FMemory::Free((void *)GlobalRayTracingHitGroupLibrary.ShadersPerPlatform._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GlobalRayTracingHitGroupLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalRayTracingMissShaderLibrary'' @ 1503d3920

void __cdecl _dynamic_atexit_destructor_for__GlobalRayTracingMissShaderLibrary__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&GlobalRayTracingMissShaderLibrary.CS);
  GlobalRayTracingMissShaderLibrary.ShadersPerPlatform._72_4_ = 0;
  if (GlobalRayTracingMissShaderLibrary.ShadersPerPlatform._64_8_ != 0) {
    FMemory::Free((void *)GlobalRayTracingMissShaderLibrary.ShadersPerPlatform._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GlobalRayTracingMissShaderLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalShaderVariableToStructMap'' @ 1503d3970

void __cdecl
`GetGlobalShaderVariableToStructMap'::__l2::
_dynamic_atexit_destructor_for__GlobalShaderVariableToStructMap__(void)

{
  GlobalShaderVariableToStructMap._72_4_ = 0;
  if (GlobalShaderVariableToStructMap._64_8_ != 0) {
    FMemory::Free((void *)GlobalShaderVariableToStructMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GlobalShaderVariableToStructMap);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidPath'' @ 1503d39b0

void __cdecl
`FShaderDiagnosticRemapper::GetRemapData'::__l23::_dynamic_atexit_destructor_for__InvalidPath__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidPath.Data.AllocatorInstance.Data;
  if (InvalidPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LoadPipelineCacheCmd'' @ 1503d39d0

void __cdecl _dynamic_atexit_destructor_for__LoadPipelineCacheCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LoadPipelineCacheCmd);
  return;
}

// `dynamic_atexit_destructor_for_'LogShaderWarnings'' @ 1503d39f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogShaderWarnings__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogShaderWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'NameStructMap'' @ 1503d3a10

void __cdecl
`FShaderParametersMetadata::GetNameStructMap'::__l2::_dynamic_atexit_destructor_for__NameStructMap__
          (void)

{
  NameStructMap._72_4_ = 0;
  if (NameStructMap._64_8_ != 0) {
    FMemory::Free((void *)NameStructMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FHashedName,FShaderParametersMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FHashedName,FShaderParametersMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FHashedName,FShaderParametersMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&NameStructMap);
  return;
}

// `dynamic_atexit_destructor_for_'PreprocessConstants'' @ 1503d3a50

void __cdecl
`GetPreprocessConstants'::__l2::_dynamic_atexit_destructor_for__PreprocessConstants__(void)

{
  TStringBuilderBase<char>::~TStringBuilderBase<char>
            ((TStringBuilderBase<char> *)&PreprocessConstants.StrippedCodeHeaderBuilder);
  return;
}

// `dynamic_atexit_destructor_for_'Registry'' @ 1503d3a70

void __cdecl
`FUniformBufferStaticSlotRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Registry__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Registry.SlotNames.AllocatorInstance.Data;
  if (::Registry.SlotNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Registry.SlotNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SavePipelineCacheCmd'' @ 1503d3a90

void __cdecl _dynamic_atexit_destructor_for__SavePipelineCacheCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SavePipelineCacheCmd);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d3ab0

void __cdecl
`FByteBufferShader::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FByteBufferShader::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d3ad0

void __cdecl
`FMemcpyCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FMemcpyCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d3af0

void __cdecl
`FRDGByteBufferShader::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRDGByteBufferShader::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d3b10

void __cdecl
`FRDGMemcpyCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRDGMemcpyCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d3b30

void __cdecl
`FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRDGScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503d3b50

void __cdecl
`FScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FScatterCopyCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d3b70

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

void __cdecl `FMemcpyCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d3b90

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
`FMemsetBufferCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d3bb0

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

void __cdecl `FRDGMemcpyCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d3bd0

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
`FRDGMemsetBufferCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d3bf0

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
`FRDGScatterCopyCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503d3c10

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
`FScatterCopyCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'SwitchModePipelineCacheCmd'' @ 1503d3c30

void __cdecl _dynamic_atexit_destructor_for__SwitchModePipelineCacheCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SwitchModePipelineCacheCmd);
  return;
}

// operator() @ 1504de0c0

bool __thiscall `ResizeBufferIfNeeded'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6929518016531005941>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6929518016531005941>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

